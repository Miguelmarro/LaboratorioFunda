#include<iostream>

using namespace std ;

int main(){

 int a,b,r,mcd,aux;

 do{
  cout<<"Ingrese primer numero :"<<endl;
  cin>>a;
  cout<<"Ingrese segundo numero :"<<endl;
  cin>>b;

 }while(a<0 && b<0);
 mcd=a;
 aux=b;
 
 do{
  r=mcd%aux;
  mcd=aux;
  aux=r;
 }while(r!=0);
 
 cout<<"El MCD es :"<<mcd<<endl;

 return 0;
}