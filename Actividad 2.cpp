#include <iostream> //biblioteca
using namespace std; //espacio de nombre estándar
int main()
{
	//variables
	float lado; //variables
	
	cout<<"Este es un programa que calcula el perimetro de un cuadrado ingresando el valor de un lado"<<endl; //mensaje indicando el funcionamiento del programa
	cout<<endl;
	cout<<"Porfavor ingrese el valor del lado del cuadrado: ";  //pide al usuario que ingrese un valor numerico
	cin>> lado;
	cout<<endl;
	cout<<"El perimetro del cuadrado es: "<<lado * 4; //calcula el perimetro multiplicando el valor ingresado anteriormente
	
	return 0;
}
