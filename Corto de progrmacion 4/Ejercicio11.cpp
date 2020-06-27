#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
char cadena[30];
char *murcielago="murcielago";
char *code="0123456789";
int x=0,i;
//Debe ingresar la frase muercielago en minusculas.
cout<< "CLAVE MURCIELAGO" <<endl <<endl;
cout<< "Ingresa la cadena de texto en minusculas"<<endl; 
                                                       
gets (cadena);

while(cadena[x]!='\x0')

{
for(i=0;i<10;i++)

   if(cadena[x] == murcielago[i])

      cadena[x]=code[i];

x++;
}
//Aqui imprime los numeros que corresponden a cada letra.
printf("%s\n",cadena);

system("pause");
    return 0;
}