#include <stdio.h>

using namespace std;

int pow(int N, int i, int M);

int main()
{
	int long N, T, i = 0;
	scanf("%ld", &T);
	int long Z[T];
	while(i < T)
	{
		int add;
		scanf("%ld", &N);
		add = pow(N, 0, 25);
		Z[i] = (N/5) + add;
		i++;
	}

	for(int j = 0; j < T; j++)
	{
		printf("%ld\n", Z[j]);
	}
}

int pow(int N, int i, int M)
{
	if(M > N)
	{
		return i;
	}
	else
	{
		i = i + (N/M);
		return pow(N, i, M*5);
	}
}
