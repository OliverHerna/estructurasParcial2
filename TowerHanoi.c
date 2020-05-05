#include <stdio.h>
void hanoi(int n,int com, int aux, int fin);
int nMovimientos; //Esta variable almacena el mín de mov necesarios
char com='A';
char aux='B';
char fin='C';
int n;

 
int main(void){
int opc;
nMovimientos=0;
        system("clear");
  do{
        printf("\n\n Torres de hanoi ");
        printf("\n1. Entrada de datos: ");
        printf("\n2. Salir\n");
        scanf("%d", &opc);
        switch (opc){
            case 1:
        printf("\nTeclee el número de discos: ");
        scanf("%d",&n);
        fflush(stdin);
        printf("\n\nLos movimientos a realizar son: \n");
        hanoi(n,com,aux,fin);
        printf("\nMinimo de movimientos necesarios: %i",nMovimientos);
                break;
            case 2:
                break;
            default:
                 system("clear");
                 printf("\nOpcion no valida!");
                 break;
        }
    }while (opc != 2);

}
 
void hanoi(int n,int com, int aux, int fin){
    if(n==1){
        printf("%c -> %c",com,fin);
        nMovimientos++;
    }
    else{
        hanoi(n-1,com,fin,aux);
        printf("\n%c -> %c\n",com,fin);
        nMovimientos++;
        hanoi(n-1,aux,com,fin);
    }
}
