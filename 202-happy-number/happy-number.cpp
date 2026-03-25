class Solution {
public:
int getnext(int n)
{
    int sum=0,r;
    while(n>0)
    {
        r=n%10;
        sum+=r*r;
        n/=10;
    }
    return sum;
}
    bool isHappy(int n) {
        int slow=n;
        int fast=getnext(n);
        while(fast!=1 && slow!=fast)
        {
            slow=getnext(slow);
            fast=getnext(getnext(fast));
        }
        return fast==1;
    }
};