#include <stdio.h>

typedef char bool;

int dp[100];

void findPrimeNumber(int n, int* p_dp_size);
bool IsFrime(int n, int dp_size);

int main()
{
	int n, dp_size;
	printf("input number: ");
	scanf("%d", &n);
	
	findPrimeNumber(n, &dp_size);
	for(int i = 0; i < dp_size; ++i)
		printf("%d, ", dp[i]);

	return 0;
}

void findPrimeNumber(int n, int* p_dp_size)
{
	int j = 0;
	for(int i = 2; i <= n; ++i)
	{
		if(IsFrime(i, j))
		{
			dp[j++] = i;
		}
	}
	*p_dp_size = j;
}

bool IsFrime(int n, int dp_size)
{
	if(n == 2 || dp_size == 0)
		return 1;
	else
	{
		for(int i = 0; i < dp_size; ++i)
		{
			if(n % dp[i] == 0)
				return 0;
		}
		return 1;
	}
}

