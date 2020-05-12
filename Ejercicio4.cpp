#include "iostream"
using namespace std;

int main ()
{
    string Producto;
    float Precio;
    float Cantidad;

cout <<"Ingresar el producto a comprar: " <<endl;
    cin>> Producto; cout <<endl;
    cout <<"Ingresar la cantidad que quiere comprar: "<<endl;
    cin >> Cantidad; cout <<endl;
    cout <<"Ingresar el precio del producto: "<<endl;
    cin >> Precio; cout <<endl;
    float Total = Precio * Cantidad; cout <<endl;
    cout <<"Total: " <<endl;
    cout << "Producto: " << Producto <<"  Cantidad: " <<Cantidad <<"  Total: " <<"$ " <<Total;
          
    return 0;

}