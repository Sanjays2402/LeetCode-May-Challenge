class Solution {
public:
    int firstUniqChar(string s) {
        int i,count[126]={0};
        for(i=0;i<s.length();i++)
            count[s[i]]++;
        for(i=0;i<s.length();i++)
        {
            if(count[s[i]]==1)
                return i;
        }
        return -1;
    }
};
