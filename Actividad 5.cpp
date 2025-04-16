#include <iostream> //biblioteca
using namespace std; //nombre de espacio estandar
int main () //funcion principal
{
	//variables
	float n1;
	float n2;
	float n3;
	float n4;
	float suma;
	float promedio;
	
	
	cout<<"Este programa lee cuatro valores para luego sumarlos y mostrar el promedio de estos 4 numeros."<<endl; //explica al usuario lo que hace el programa
	cout<<endl;
	cout<<"Por favor, ingrese los 4 numeros."<<endl; //pide al usuario que ingrese 4 numeros consecutivamente
	cin>>n1>>n2>>n3>>n4;
	
	suma = n1 + n2 + n3 + n4; //se le asignan valores a las variales anteriores
	promedio = suma / 4;
	
	cout<<"La suma de estos 4 numeros es: "<<suma<<", numero el cual al promediarlo da: "<<promedio<<endl; //se muestra en pantalla los resultados
	
	
	return 0;
	}
