#include <iostream>
using namespace std;

int main(){


int dia, mes, año;
int fecha;

cout << "Ingrese el año, mes y dia: " <<endl;
cout << "año: " <<endl; 
cin >> año;
cout << "mes: " <<endl; 
cin >> mes;
cout << "dia: " <<endl; 
cin >> dia;

fecha = (año * 10000) + (mes * 100) + dia;

cout << fecha <<endl;


    return 0;
}