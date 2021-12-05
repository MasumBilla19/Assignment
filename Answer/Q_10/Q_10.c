//10. Write a C program to find the sum of the series:
//      1 + 1/2^2 + 1/3^3 + . . . . . . . + 1/n^n

#include <stdio.h>
#include<math.h>

int main() {
   int n, i, sum = 0;

	printf("Enter the n i.e. max values of series: ");
	scanf("%d",&n);

	sum = pow(((n * (n + 1) ) / 2),2);

	printf("Sum of the series : ");
	for (i =1;i<=n;i++) {
		if (i != n) {
            printf("%d^3 + ",i);
        } else {
            printf("%d^3 = %d ",i,sum);
        }
	}

    return 0;
}


