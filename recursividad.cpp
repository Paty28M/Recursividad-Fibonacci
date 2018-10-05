#include<iostream>
#include<locale>
/*Sandra Patricia Martínez Legorreta*/
/*ICO-22 INGENERIA EN COMPUTACION*/
using namespace std;
int main()

{
    char reintento;
    int numero, inicio, final;
     inicio= 0;
     final = 1;
    int fibo;
    cout<<"\tNumeros de FIBONACCI"<<endl;
     cout<<"\tEJEMPLO DE RECURSIVIDAD"<<endl;
     cout<<"Elaborado por:Sandra Patricia Martínez Legorreta"<<endl;
     cout<<"ICO-22"<<endl;
     cout<<"\n Introduce el rango de numeros de Fibonacci: ";
     cin>>numero; //valor introducido por el usuario
     cout<<"Serie de numeros de Fibonacci hasta: 
"<<numero<<"elementos"<<endl;
    do
    {
    for (int i = 0; i < numero ; i++) //Llenar nuevo arreglo
    {
        if (i<=1)
            fibo=i;
        else
        {
            fibo=inicio+final;
            inicio=final;
            final = fibo;
        }
        cout << fibo << "\t ";
        }
     cout<< "\n ¿Quieres volver intentar?"<<endl<<endl;
	cout<<" Presiona 1 para volver empezar"<<endl;
	cout<<"Presiona 0 para salir"<<endl;
	cin>>reintento;
    }while (reintento=='1'); //repite el programa
    cout<<"Fin del programa"<<endl;
    return 0;
}

