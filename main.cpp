#include<cstdio>

int main()
{
	printf("Hello Baby!\n");
	printf("How are you?\n");
	
	int n=5;
	int sum=0;
	int mul = 0;
	for(int i=0; i<n; i++)
	{
		sum += i;
		mul *= mul;
	}
}

