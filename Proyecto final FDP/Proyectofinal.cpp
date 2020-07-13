#include <iostream>
using namespace std;

const int longCad = 20;

struct costoPorArticulo{
    char nombreArticul[longCad + 1];
    int cantidad;
    float precio;
    float costoPorArticulo;
};

//Fuciones para realizar procesos de almacenamiento y calculo.
void Leerdatos(costoPorArticulo cant_art[], int produc);
void costocadaArticulo (costoPorArticulo cant_art[], int produc);
void vistaarticulos (costoPorArticulo cant_art[], int produc);
void TOTAL (costoPorArticulo cant_art[], int produc);

//Aqui se solicita la cantidad de articulos a comprar.
int main (){
int Pproductos = 0;
cout << endl;
cout << "Super Moichal" << endl;
cout <<endl;
cout << "Ingresa cuantos productos quieres comprar: ";
cin >> Pproductos;
if (Pproductos <= -1){ //Validacion para evitar introducir numeros negativos.
    cout << "INGRESE DATOS VALIDOS!";
    exit (0);
}

costoPorArticulo cantidaddelosarticulos[Pproductos]; //Arreglo donde se guardan datos.

//Aqui se llaman la funciones creadas en el main.
Leerdatos(cantidaddelosarticulos, Pproductos);
costocadaArticulo(cantidaddelosarticulos, Pproductos);
vistaarticulos(cantidaddelosarticulos, Pproductos);
TOTAL (cantidaddelosarticulos, Pproductos);

}
//Esta es una funcion donde se ingresan los datos que se le piden.
void Leerdatos (costoPorArticulo cantidaddelosarticulos[], int Pproductos){
for (int i=0; i < Pproductos; i++){
costoPorArticulo productos;
cout << endl;
cout <<"Ingresa el nombre del producto: ";
cin >> productos.nombreArticul;
cout << "Ingresa la cantidad: ";
cin >> productos.cantidad;
cout << "Ingresa el precio del producto: $";
cin >> productos.precio;
cout << endl;
cantidaddelosarticulos[i]=productos;
if ((productos.cantidad <= -1) || (productos.precio <= -1)){ //Validacion para evitar numeros negativos.
    cout << "----Ingresa datos validos----";
    exit(0);
        }
    }
}
//Funcion donde se calcula el costo por articulo de los diferentes productos.
void costocadaArticulo (costoPorArticulo cantidaddelosarticulos[], int Pproductos){
float costoT;
for (int i =0; i < Pproductos; i++){
costoT = cantidaddelosarticulos[i].cantidad * cantidaddelosarticulos[i].precio;
cantidaddelosarticulos[i].costoPorArticulo=costoT;
    }
}
//Esta es una fucnion donde aparecen los datos que se inresaron anteriormente.
void vistaarticulos (costoPorArticulo cantidaddelosarticulos[], int Pprodcutos){
int contador =0;
cout << "Productos seleccionados:" << endl;
for (int i=0; i < Pprodcutos; i++){
contador ++;

cout << "Producto No: " << contador <<" "<< cantidaddelosarticulos[i].nombreArticul << endl;
cout << "Cantidad de productos: " << cantidaddelosarticulos[i].cantidad <<endl;
cout << "Precio del producto por cantidad (c/u): $" << cantidaddelosarticulos[i].precio <<endl;
cout << "Precio total del producto: $" << cantidaddelosarticulos[i].costoPorArticulo << endl;
    }
}
//En esta funcion se calcula el total de los productos comprados.
void TOTAL (costoPorArticulo cantidaddelosarticulos[], int Pproductos){
float eltotal = 0;
for (int i=0; i< Pproductos; i++){
eltotal = eltotal + cantidaddelosarticulos[i].costoPorArticulo;
    }
cout << endl;
cout << "Gracias por comprar en MOICHAL, tu toal es de: $" << eltotal <<endl;
system("pause");
}
