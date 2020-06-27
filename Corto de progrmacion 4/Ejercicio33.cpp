#include <iostream>
using namespace std;
void Matriz(double matriz[][5], int estudiantes){
    for(int i=0;i<estudiantes;i++){
        cout << endl << "Ingresar las notas del estudiante " << i+1 << ":" << endl;
        for (int x=0;x<5;x++){
            cin >> matriz[i][x];
        }
    }
} //Aqui se calcula cuantos y si esta aprobado o reprobado.
void NOTAS(double nota[][5], int est12){
    double promedio;
    for(int i=0;i<est12;i++){
        promedio = 0;
        for (int x=0;x<5;x++){
            promedio += (nota[i][x] * 0.20);
        }
        if(promedio>=6){
            cout << "El estudiante " << i+1 << " Esta aprobado con promedio de: " << promedio << endl;
        } else{
            cout << "El estudiante " << i+1 << " Esta reprobado con promedio de: " << promedio << endl;
        }
    }
} //Aqui se ingresa la cantidad de estudiantes.
int main(){
    int estudiante = 0;
    cout << endl << "Ingrese el numero de estudiantes: ";
    cin >> estudiante;
    double notas[estudiante][5] = {0};
    Matriz(notas, estudiante);
    NOTAS(notas, estudiante);

system("pause");
return 0;
}