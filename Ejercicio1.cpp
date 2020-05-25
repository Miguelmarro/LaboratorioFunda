#include "iostream"
using namespace std;

int main ()
{

int x;
int y;
cout << "Colocar los numeros para saber si son divisibles entre ellos: " << endl;
cout << "Ingresar primer numero: ";
cin >> x;
cout << "Ingresar segundo numero: ";
cin >> y;

if (x%y==0){
    cout<< "Son divisibles.";
} else
{
    cout << "No son divisibles";
}

return 0;
}