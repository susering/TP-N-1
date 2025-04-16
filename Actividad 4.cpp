#include <iostream> //biblioteca
using namespace std; //nombre de espacio estandar
int main() //funcion principal
{
	//variables
	int n1;
	int n2;
	int n3;
	int n4;
	
	cout<<"Este programa te pide que ingreses cuatro numeros enteros, los dos primeros se sumaran entre si y los ultimos dos se multiplicaran entre si."<<endl; //explica al usuario que hace el programa
	cout<<endl;
	cout<<"Por favor ingrese el primer numero: "; //pide al usuario que ingrese un numero
	cin>>n1;
	cout<<"Ahora ingrese el segunddo numero: "; //pide al usuario que ingrese un numero
	cin>>n2;
	cout<<"Ingrese el tercer numero: "; //pide al usuario que ingrese un numero
	cin>>n3;
	cout<<"Ingrese el ultimo numero: "; //pide al usuario que ingrese un numero
	cin>>n4;
	cout<<endl;
	cout<<"El resultado de la suma entre los dos primeros numeros es: "<<n1 + n2<<endl; //muestra el primer resultado
	cout<<endl;
	cout<<"El resultado de la multiplicacion entre los dos ultimos numeros es: "<<n3 * n4; //muestra el segundo resultado
	
	return 0;
	}
