#include <iostream>
using namespace std;
double PROMEDIOS(double altura[]){
double suma = 0;
    for(int i=0;i<25;i++){
    suma += altura[i];
    }
    double promedio = (suma/25);
    return promedio;
}
void RESULTADO(double media, double altura[]){
    int arriba = 0;
    int bajo = 0;
    
    for(int i=0;i<25;i++){
        if(altura[i]>media){
            arriba++;
        } else if(altura[i] == media){
           bajo++;
        } else{
           bajo++;
        }
    }
cout << "La media de estaturas es: " << media << endl;
cout << "Estaturas arriba de la media son: " << arriba << endl;
cout << "Estaturas abajo de la media son: " << bajo <<endl;
}
int main(void){
double alturas[25];
    cout << endl << "--Calcular media de estatura de estudiantes--" << endl << endl;
    cout << "Ingresa la altura de los 25 estudiantes: " << endl;
    for(int i=0;i<25;i++){
        cin>> alturas[i];
    }
    RESULTADO(PROMEDIOS(alturas), alturas);
    
    system("pause");
    return 0;
}