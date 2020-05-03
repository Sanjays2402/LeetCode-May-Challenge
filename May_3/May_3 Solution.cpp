class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int i,j,flag;
        for(i=0;i<ransomNote.length();i++)
        {
            flag=0;
            for(j=0;j<magazine.length();j++)
            {
                if(ransomNote[i]==magazine[j])
                {
                    flag=1;
                    magazine[j]='*';
                    break;
                }
            }
            if(flag==0)
                return false;
        }
        return true;
    }
};
