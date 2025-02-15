#include<stdio.h>
int gcd(int a,int b)
{
    if(b==0)
    return a;
    else
    return gcd(b,a%b);
}
main()
{
    int t,a,b,c; scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        c=gcd(a,b);
        printf("%d\n",(a*b)/(c*c));
    }
    return 0;
}
