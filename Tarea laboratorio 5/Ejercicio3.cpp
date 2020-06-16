#include <iostream>

using namespace std;

int main(){
    int año;
    
    cout << "Comprobar el año bisiesto" << endl << endl;
    cout << "Ingresar el año para saber si es bisiesto: ";
    cin >> año;

    if(anoBisiesto(año)==true){
        cout << "El año " << año << "Si es bisiesto.";
    } else{
        cout << "El año " << año << "No es bisiesto.";
    }

}

bool anoBisiesto(int a){

    if(a % 400 == 0){
        return true;
    } else{
        if((a % 4 == 0) && (a % 100 != 0)){
            return true;
        } else{
            return false;
        }
    }
}