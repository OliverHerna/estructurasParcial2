#include <stdio.h>

void fibonacci(int penultimo, int ultimo, int n);

int main()
{
	int opc;
	int n; //Numero de elementos que se quieren imprimir de la seire de fibonacci

 do{
        printf("\n\n F i b o n a c c i ");
        printf("\n1. Entrada de datos: ");
        printf("\n2. Salir\n");
        scanf("%d", &opc);
        switch (opc){
            case 1:
                printf("Teclee la cantidad de elementos a mostrar: ");
				scanf("%d",&n);
				fibonacci(0,1,n);
                break;
            case 2:
            	break;
            default:
                 system("clear");
                 printf("\nOpcion no valida!");
                 break;
        }
    }while (opc != 2);


	return 0;
}

void fibonacci(int penultimo, int ultimo, int n){
int actual;
printf("%d\n",ultimo);
	if(n>1){
	actual = penultimo + ultimo;
	n--; 
	fibonacci(ultimo, actual, n);
	}
}
