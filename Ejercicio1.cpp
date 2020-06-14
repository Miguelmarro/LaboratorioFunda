#include <iostream>
using namespace std;

double calculoSalario(int h1, int h2){ //Formula para encontrar el salrio
    int horames = 0;
    int horaxmes = 0;
    horames = h1;
    horaxmes = h2;
    double salariototal = ((horames * 1.75) + (horaxmes * 2.50));
    double salarioreal = 0;

if(salariototal >= 500){
        salarioreal = (salariototal)-(salariototal*0.04)-(salariototal*0.0625)-(salariototal*0.10);
    } else{
        salarioreal = (salariototal) - (salariototal*0.04) - (salariototal*0.0625);
    }
    return salarioreal;
}
int main(){
int horas_trab = 0;
int horas_extra = 0;
float salario_t = 0;
float salario_r = 0;
char nombre[50];
cout<< "Empresa tacoplace--Ingrese su nombre: " <<endl; //Empieza a colocar los datos
cin>>nombre;
cout<< "Bienvenido: " <<nombre <<endl;
    
cout <<"Ingrese las horas trabajadas: " <<endl;
cin>>horas_trab;
cout<< "Horas trabajadas: " <<horas_trab <<endl;

cout <<"Ingrese las horas extra trabajadas: " <<endl;
cin>>horas_extra;
cout<< "Horas extra trabajadas: " <<horas_extra <<endl;

cout << "Su salario real es: $" << calculoSalario(horas_trab, horas_extra) <<endl;

    return 0;
}

