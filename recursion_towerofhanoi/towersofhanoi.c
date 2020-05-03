/*****************************************************************************************
 * towers of hanoi
 * @author: Carlos Huerta García
 * @description: Displays the towers of hanoi behavior up to the requested number of disks
 * ***************************************************************************************/
#include <stdlib.h>
#include <stdio.h>
void towersofhanoi(int n, char from, char to, char aux, int* count) {
    if(n == 1){
        printf("\nMove disk 1 from tower %c to tower %c", from, to);
        ++(*count);
        return;
    }
    towersofhanoi(n - 1, from, aux, to, count);
    printf("\nMove disk %d from tower %c to tower %c", n, from, to);
    ++(*count);
    towersofhanoi(n - 1, aux, to, from, count);
}
void main() {
    int n, moves = 0;
    do{
        printf("Towers of Hanoi classic algorithm behavior with A, B & C as the 3 towers\nEnter the number of disks (max 10): ");
        scanf("%d", &n);
    } while (n < 0 || n > 10);
    towersofhanoi(n, 'A', 'C', 'B', &moves);
    printf("\nTotal moves: %d", moves);
}