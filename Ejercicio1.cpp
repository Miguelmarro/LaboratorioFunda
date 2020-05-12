# include  < iostream >

usando el  espacio de nombres  estándar ;

int  main () 
{

    int numero1;
    int numero2;
    int numero3;

    cout << " Ingresar el primer número " << endl;
    cin >> numero1;
    cout << " Ingresar el segundo número " << endl;
    cin >> numero2;
    cout << " Ingresar el tercer número " << endl;
    cin >> numero3;

    cout << endl << endl;
    int promedio = (numero1 + numero2 + numero3) / ( 3 );
    cout << " El promedio de los tres números es: " << promedio << endl;
    
    return  0;
}