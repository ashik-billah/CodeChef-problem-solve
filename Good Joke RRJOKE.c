#include<stdio.h>
main()
{
	int t,n; scanf("%d",&t);
	while(t--)
	{
    	int ans=0,i;
    	scanf("%d",&n);
    	for(i=1;i<=n;i++)
    	{
        	int x,y; scanf("%d%d",&x,&y);
        	ans^=i;
    	}
    	printf("%d\n",ans);
	}
return;
}
