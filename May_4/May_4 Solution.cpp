class Solution {
public:
    int findComplement(int num) {
        int count=0,n=num,ans;
        while(n)
        {
            n/=2;
            count++;
        }
        ans = pow(2,count) - 1;
        return num ^ ans;
    }
};
