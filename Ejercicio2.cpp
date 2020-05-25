#include "iostream"
using namespace std;

int main ()
{

 int num;

cout <<"Colocar numero para saber si es para o impar" << endl;
cin >> num;

 if (num % 2==0)
{
    cout << num << "Es numero par";
    } else{
    cout << num << "Es numero impar";
} 

 return 0;

}