/*****************************************************************************
 * fibonacci
 * @author: Carlos Huerta García
 * @description: Displays the fibonacci's behavior up to the requested postion
 * ***************************************************************************/
#include <stdlib.h>
#include <stdio.h>
unsigned long int fibonacci (int n){
    if(n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
void main() {
    int n;
    do{
        printf("Fibonacci classic algorithm behavior\nEnter the position (max 40): ");
        scanf("%d", &n);
    } while (n < 0 || n > 40);
    printf("%d", fibonacci(0));
    for(int i = 1; i < n; i++)
        printf(", %d", fibonacci(i));
}