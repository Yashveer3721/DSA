class Solution {
public:
string value(int c)
{
    if(c==1)
    return "I";
    else if(c==2)
    return "II";
    else if(c==3)
    return "III";
    else if(c==4)
    return "IV";
    else if(c==5)
    return "V";
    else if(c==6)
    return "VI";
    else if(c==7)
    return "VII";
    else if(c==8)
    return "VIII";
    else if(c==9)
    return "IX";
    else if(c==10)
    return "X";
    else if(c==20)
    return "XX";
    else if(c==30)
    return "XXX";
    else if(c==40)
    return "XL";
    else if(c==50)
    return "L";
    else if(c==60)
    return "LX";
    else if(c==70)
    return "LXX";
    else if(c==80)
    return "LXXX";
    else if(c==90)
    return "XC";
    else if(c==100)
    return "C";
    else if(c==200)
    return "CC";
    else if(c==300)
    return "CCC";
    else if(c==400)
    return "CD";
    else if(c==500)
    return "D";
    else if(c==600)
    return "DC";
    else if(c==700)
    return "DCC";
    else if(c==800)
    return "DCCC";
    else if(c==900)
    return "CM";
    else if(c==1000)
    return "M";
    else if(c==2000)
    return "MM";
    else if(c==0)
    return "";
    else 
    return "MMM";
}
    string intToRoman(int num) {
        int count=0,n=num,m=num;
        while(num)
        {
            num/=10;
            count++;
        }
        int sum=0;
        while(m)
        {
            int rem=m%10;
            sum=sum*10+rem;
            m/=10;
        }
        int r,i=count-1;
        string ans;
        while(i>=0)
        {
            r=sum%10;
            ans+=value(r*pow(10,i));
            sum/=10;
            i--;
        }
        return ans;
    }
};