#include<stdio.h>
#include<math.h>
int main()
{
	int n,k,count=0,flag;
	scanf("%d", &n);
	if (n <2) {
		printf("None");
		return 0;
	}
	
	for (int i =2 ;i <= n;i++) {
		k =( pow(2, i) - 1);
		flag = 1;
		for (int j = 2;j * j <= k;j++) {
			if (k % j == 0) {
				flag = 0;
				break;
			}
		}if (flag == 1) {
			printf("%d\n", k);
			count++;
		}
	}if (count == 0) {
		printf("None\n");
	}return 0;
}