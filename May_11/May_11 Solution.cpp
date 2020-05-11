class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(image[sr][sc]==newColor)
            return image;
        
        int m = image.size(), n = image[0].size();
        fill(image, sr, sc, m, n, image[sr][sc], newColor);
        return image;
    }
    
    void fill(vector<vector<int>>& image, int i, int j, int m, int n, int target, int newColor)
    {
        if(i<0 || i==m || j<0 || j==n)
            return;
        if(image[i][j]!=target)
            return;
        
        image[i][j]=newColor;
        
        
        fill(image, i-1, j, m, n, target, newColor);   //North
        fill(image, i, j-1, m, n, target, newColor);   //West
        fill(image, i+1, j, m, n, target, newColor);   //South
        fill(image, i, j+1, m, n, target, newColor);   //West
    }
};
