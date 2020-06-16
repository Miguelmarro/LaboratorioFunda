#include <iostream>
#include <stdio.h>
using namespace std;

int main(){

    int hora, hora24, minuto, segundos;
    string turno;
    char c;

cout << "Introduzca la hora en formato hh.mm.ss" <<endl;
cin>> hora >> c >> minuto >> c >> segundos;

cout << "Turno --AM o PM--" <<endl;
cin >> turno;

hora24 = hora;

if (turno == "AM"){
    if(hora == 12){
        hora = 0;
    }
}
else {
    if (hora >= 1 && hora <=11){
        hora24 = hora + 12;
    }
}

cout << "La hora en formato de 24 horas es: " << hora24 << " : " << minuto << " : " << segundos <<endl;





    return 0;
}