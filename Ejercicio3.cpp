#include "iostream"
#include "math.h"
using namespace std;

int main ()
{

    float a;
    float b;
    float c;

    cout << "Ingresar el termino a:" << endl;
    cin >> a;
    cout << "Ingresar el termino b:" << endl;
    cin >> b;
    cout <<  "Ingresar el termino c:" << endl;
    cin >> c;

    //float discriminante = (pow(b,2)) - (4*a*c);
    float formula1 = (-b + (sqrt((pow(b,2) - (4*a*c)))))/(2*a);
    float formula2 = (-b - (sqrt((pow(b,2) - (4*a*c)))))/(2*a);
    cout << "Los valores de x son: " << formula1 << " y " << formula2;

    return 0;
}
