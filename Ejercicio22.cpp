#include <iostream>
using namespace std;

int main(){

int x;
int numero;
int contador = 0;
int intentos = 5;

x = 7;

do{
    cout << "Ingresa un numero: ";
    cin>> numero;

    if(numero>x){
        cout << "Digite un numero menor" <<endl;
        }
        if(numero<x){
            cout << "Digite un numero mayor" <<endl;
        }
        
        intentos--;
        contador++;
        cout << "le quedan de intentos: " <<intentos <<endl;
        
}while (numero != x, intentos > 0);

cout << "HAS ADIVINADO EL NUMERO!!!";
cout << "Numero de intentos: " <<contador <<endl;

if(intentos < 0)
        {
            cout << "PERDISTE! llegaste a mas de 5 intentos" <<endl;
        }

return 0;
}
 