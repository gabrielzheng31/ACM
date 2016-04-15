/*#include <stdio.h>

int main(void)
{
	int a, b;
	while((scanf("%x %x", &a, &b) != EOF) || (scanf("%x %x", &a, &b) != EOF))
		printf("%d\n", a + b);
	return 0;
}*/

/*#include <stdio.h>
#include <math.h>

int main(void)
{
	int n, set_count = 0;
	while (scanf("%d", &n) && n != 0) {
		set_count++;
		int i = 1;
		int hi[100], move[100];
		int total_bricks = 0, total_moves = 0;
		while (i <= n)
		{
			scanf("%d", &hi[i]) != EOF;
			total_bricks += hi[i];
			i++;
		}
		int average = total_bricks / n;
		for (int w = 1; w <= n; w++)
		{
			move[w] = abs(average - hi[w]);
			total_moves += move[w];
		}
		printf("Set #%d\n", set_count);
		printf("The minimum number of moves is %d.\n\n", total_moves / 2);
	}
	return 0;
}*/

/*#include <stdio.h>
#include <math.h>

int main(void)
{
	int i,n;
	for (i = 1; scanf("%d", &n) == 1 && n != 0; i++)
	{
		int j = 0, s = 0, grid[99];
		for (; j < n; j++)
		{
			scanf("%d", &grid[j]);
			s += grid[j];
		}
		int average = s / n;
		int u = 0, moves[100];
		for (j = 0; j < n; j++)
		{
			moves[j] = abs(average - grid[j]);
			u += moves[j];
		}
		printf("Set #%d\n", i);
		printf("The minimum number of moves is %d.\n\n", u / 2);
	}
	return 0;
}*/

/*#include <stdio.h>

int main(void)
{
	int T, t;
	scanf("%d", &T);
	for (t = 0; t < T; t++)
	{
		int n, m;
		scanf("%d %d", &n, &m);
		int k = 0, total = 0;
		int grid;
		for(; k < n*m; k++) 
		{
			if (scanf("%d", &grid) == 1 && grid != 0)
				total++;
		}
		printf("%d\n", total);
	}
	return 0;
}*/

/*#include <stdio.h>

int main(void)
{
	char ch;
	while ((ch = getchar()) != '#') {
		switch (ch)
		{
			case ' ':
				printf("%%20");
				break;
			case '!':
				printf("%%21");
				break;
			case '$':
				printf("%%24");
				break;
			case '%':
				printf("%%25");
				break;
			case '(':
				printf("%%28");
				break;
			case ')':
				printf("%%29");
				break;
			case '*':
				printf("%%2a");
				break;
			default:
				putchar(ch);
		}
	}
	return 0;
}*/

/*#include <stdio.h>

int main(void)
{
	int n, i;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		int ch;
		printf("String #%d\n", i + 1);
		if(i == 0)
			getchar();
		while ((ch = getchar()) != '\n') {
			switch (ch)
			{
				case 'Z':
					putchar('A');
					break;
				default:
					putchar(++ch);
			}
		}
		printf("\n\n");
	}
	return 0;
}*/

/*#include <stdio.h>

int main(void)
{
	int i;
	for (i = 2992; i < 10000; i++)
	{
		int s_10, s_12, s_16;

		int one_10, two_10, three_10, four_10;
		one_10 = i / 1000;
		i -= one_10 * 1000;
		two_10 = i / 100;
		i -= two_10 * 100;
		three_10 = i / 10;
		i -= three_10 * 10;
		four_10 = i;
		i = one_10*1000 + two_10*100 + three_10*10 + four_10;
		s_10 = one_10 + two_10 + three_10 + four_10;

		int one_12, two_12, three_12, four_12;
		one_12 = i / (12*12*12);
		i -= one_12 * 12*12*12;
		two_12 = i /(12*12);
		i -= two_12	* 12*12;
		three_12 = i / 12;
		i -= three_12 * 12;
		four_12 = i;
		i = one_12 * 12 * 12 * 12 + two_12 * 12 * 12 + three_12 * 12+ four_12;
		s_12 = one_12 + two_12 + three_12 + four_12;

		int one16, two16, three16, four16;
		one16 = i / (16*16*16);
		i -= one16 * 16 * 16* 16;
		two16 = i / (16*16);
		i -= two16 * 16 * 16;
		three16 = i /16;
		i -= three16 * 16;
		four16 = i;
		s_16 = one16 + two16 +three16 + four16;
		i = one16*16*16*16 + two16 * 16 *16+ three16 * 16 + four16;
		if(s_10 == s_12 && s_12 == s_16)
			printf("%d\n", i);
	}
	return 0;
}*/

/*#include <stdio.h>
#include <math.h>

int main(void) 
{
	int i, n;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		int province_num;
		unsigned long long ID;
		scanf("%llu", &ID);
		province_num = ID / pow(10, 16);
		printf("%d\n", province_num);

		
		ID -= province_num * pow(10, 16);

		int year, month, date;
		year = ID / pow(10,8);
		ID -= year * pow(10,8);
		month = ID / pow(10,6);
		ID -= month * pow(10,6);
		date = ID / pow(10, 4);
		


		char place[20];
		switch (province_num)
		{
			case 33:
				{
					char place[20] = "Zhejiang";
				break;
				}
			case 11:
			
				{char place[20] = "Beijing";
				break;}
			case 71:
				{char place[20] = "Taiwan";
				break;}
			case 81:
				{char place[20] = "Hongkong";
				break;}
			case 82:
				{char place[20] = "Macao";
				break;}
			case 54:
				{char place[20] = "Tibet";
				break;}
			case 21:
				{char place[20] = "Liaoning";
				break;}
			case 31:
				{char place[20] = "Shanghai";
				break;}
		default:
			break;
		}
		printf("He/She is from %s,and his/her birthday"
		" is on %d,%d,%d based on the table.\n", 
		place, year, month, date);
	}
	return 0;
}*/