class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> str1(26,0),str2(26,0);
        int m=s1.length(),n=s2.length();
        if(m>n)
            return false;
        int left=0,right=0;
        while(right<m)
        {
            str1[s1[right]-'a']++;
            str2[s2[right]-'a']++;
            right++;
        }
        right--;
        
        while(right<n)
        {
            if(str1==str2)
                return true;
            right++;
            if(right!=n)
                str2[s2[right]-'a']++;
            str2[s2[left]-'a']--;
            left++;
        }
        return false;
    }
};
