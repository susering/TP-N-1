#include <iostream> //biblioteca
using namespace std; //nombre de espacio estandar
int main () //funcion principal
{
	//variables
	int base; 
	int altura;
	float area;
	cout<<"Este programa calcula el area del triangulo al proveerle el valor de la base y la altura (sin especificar la medida)"<<endl; //indica la funcion del programa
	cout<<endl;
	cout<<"Por favor ingrese el valor de la base: "; //pide al usuario que ingrese un valor para la base
	cin>>base;
	cout<<"Ahora ingrese el valor de la altura: "; // pide que ingrese valor para la altura
	cin>>altura;
	
	
	area = base * altura; //indica el valor de la area luego de retener los valores de la base y la alturq
	
	
	cout<<endl;
	cout<<"El area del triangulo es de: "<<area / 2<<endl; //calcula el area del triangulo usando el valor de la linea anterior dividido por 2. 
	cout<<endl;
	cout<<"Disclaimer: El programa solamente calcula el valor de la base, no provee la unidad."; //aviso al usuario
	
	return 0;
}

