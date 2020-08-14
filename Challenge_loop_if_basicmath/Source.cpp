#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, c, d = 0;
	float e, f, total = 0, total0 = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	if (a > b)
	{
		for (c = a; c >= b; c--) {
			printf("%d ", c);
			total += c;
			d += 1;
			total0 += (c * c);
		}
	}
	if (a < b) {
		for (c = a; c <= b; c++) {
			printf("%d ", c);
			total += c;
			d += 1;
			total0 += (c * c);
		}
	}
	e = total / d;
	f = sqrt((d * total0 - (total * total)) / ((d - 1) * d));
	printf("\nAverage = %.1f\n", e);
	printf("SD = %.2f", f);
	return 0;
}