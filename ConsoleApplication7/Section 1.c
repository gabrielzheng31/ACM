/*#include <stdio.h>	

int main(void)
{
	int a, b, n, N;
	n = 1;
	scanf("%d", &N);
	while(n++ <= N){
		if(scanf("%d %d", &a, &b) == 2)
			printf("%d\n", a + b);
	}
	return 0;
}*/
//limited times input

/*#include <stdio.h>

int main(void)
{
	int a, b;
	do
	{
		scanf("%d %d", &a, &b);
		if((a != 0) || (b != 0))
			printf("%d\n", a + b);
	}
	while((a != 0) || (b != 0));
	return 0;
}*/
/*when the program input once then meet the special input,
terminate the progarm and output differently*/

/*#include <stdio.h>

int main(void)
{
	int N;
	do
	{
		scanf("%d", &N);
		if (N != 0)
		{
			int n = 0;
			int s = 0;
			int a;
			while (n++ < N) {
				scanf("%d", &a);
				s = s + a;
			}
			printf("%d\n", s);
		}
	}
	while(N != 0);
	return 0;
}*/
//calculate the sum of the sequence

/*#include <stdio.h>

int main(void)
{
	int N, M;
	scanf("%d", &N);
	int n = 0;
	while (n++ < N) {
		scanf("%d", &M);
		int k = 0;
		int s = 0;
		int a;
		while (k++ < M) {
			scanf("%d", &a);
			s = s + a;
		}
		printf("%d\n", s);
		
	}
	return 0;
}*/

/*#include <stdio.h>

int main(void)
{
	int N;
	while (scanf("%d", &N) == 1) {
		int n = 0;
		int s = 0;
		int a;
		while (n++ < N) {
			scanf("%d", &a);
			s = s + a;
		}
		printf("%d\n", s);
	}
	return 0;
}*/

/*#include <stdio.h>

int main(void)
{
	int a, b;
	while (scanf("%d %d", &a ,&b) == 2)
		printf("%d\n\n", a + b);
	return 0;
}*/

/*#include <stdio.h>	

int main(void)
{
	int n = 0;
	int N;
	scanf("%d", &N);
	while (n++ < N) {
		int M, a;
		int k = 0;
		int s = 0;
		scanf("%d", &M);
		while (k++ < M) {
			scanf("%d", &a);
			s = s + a;
		}
		printf("%d\n", s);
		if(n != N)
			printf("\n");
	}
	return 0;
}*/

//infinite times of input
//finite times of input
//input excluded some special value
