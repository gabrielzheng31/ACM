/*#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int M, N;
	while (scanf("%d %d", &M, &N) != EOF && M != -1 && N != -1)
	{
		int J[1002], F[1002];
		double ratio[1002];
		for(int i = 0; i < N; i++)
		{
			scanf("%d %d", &J[i], &F[i]);
			ratio[i] = (double) J[i] / F[i];
		}

		double temp;
		for (int i = 0; i < N - 1; i++)
		{
			for (int j = 0; j < N - i - 1; j++)
			{
				if (ratio[j] < ratio[j + 1])
				{
					temp = ratio[j];
					ratio[j] = ratio[i+1];
					ratio[j+1] = temp;

					temp = J[j];
					J[j] = J[j+1];
					J[j+1] = temp;

					temp = F[j];
					F[j] = F[j+1];
					F[j+1] = temp;
				}
			}
		}

		double javabean = 0.0;
		for (int i = 0; i < N; i++)
		{
			if (M >= F[i])
			{
				javabean += J[i];
				M -= F[i];
			}
			else
			{
				javabean += (double)M / F[i] * J[i];
				break;
			}
		}

		printf("%.3f\n", javabean);
	}
	return 0;
}*/