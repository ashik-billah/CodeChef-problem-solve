#include<stdio.h>
#include<math.h>
     
int main()
{
    int t;
	long long int A, B, count = 0;
	scanf("%d", &t);
	while (t--)
	{
		scanf("%lld %lld", &A, &B);
		while (B%A != 0)
		{
			A = A / 2;
			count++;
		}
		while (A != B)
		{
			A = A * 2;
			count++;
		}
		printf("%lld\n", count);
		count = 0;
	}
	return 0;
}
