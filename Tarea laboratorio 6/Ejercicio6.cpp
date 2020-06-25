#include <iostream>
#include <stdio.h>
#include <stdlib.h>

main(){
    int array[10],i,n,contador;
    contador=0;

    printf("Digita 10 veces los numeros\n");

    for (i=0;i<10;i++){
        printf("Digita el %d numero de la lista: "),i;
        scanf("%d",&array[i]);
    }
    printf("Digita el numero que quiere saber cuantas veces se repite: ");
    scanf("%d",&n);
    for (i=0;i<10;i++){
        if(n==array[i]){
          contador++;
        }
    }

printf("El numero %d, se repite %d veces",n,contador);


system("PAUSE");
return 0;
}