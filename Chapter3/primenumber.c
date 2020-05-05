#include<stdio.h>

int main(void){
	int i, num;
	float div;
	printf("I find if a number you entered is prime\n");
	printf("Enter a number: ");
	scanf("%d",&num);

	for (i = 2; i <= num-1; i++){
		div = num % i;
		if (div==0)
			break;
	}
	if (i < num)
		printf("%d is divisible  by %d\n",num,i);
	else
		printf("%d is prime\n",num);
	return 0;
}