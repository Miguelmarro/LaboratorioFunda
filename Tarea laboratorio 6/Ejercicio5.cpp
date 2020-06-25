#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main(void){

int x, Tabla[100];

for (x=1;x<=100;x++){
    if(x%3==0)
    Tabla[x]=x;
}
for (x=100;x>=1;x--){
    printf("%d\n", Tabla[x]);
}
system("PAUSE");
return 0;

}