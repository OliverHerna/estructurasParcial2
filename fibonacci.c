#include <stdio.h>

unsigned long long int fib(long);

void main(){
	unsigned long long int res, num;
	printf("Posicion a evaluar: \n");
	scanf("%llu", &num);
	printf("%llu\n", fib(num));
}

unsigned long long int fib(long num){
	if(num==0)
		return 0;
	else
		if(num==1)
			return 1;
		else if(num>1){
			return (fib(num-1)+fib(num-2));
		}
}
