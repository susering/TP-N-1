#include <iostream> //Se ingresa la biblioteca
using namespace std; //espacio de nombre standard
int main() //funcion prioritaria. el compilador saltea funciones anteriores para priorizar la ejecución de esta. luego de ejecutar la primaria se ejecuten las otras funciones con normalidad
{
	//variables
	int numero1;
	int numero2;
	
	cout<<"Ingrese un numero entero "<<endl; //salida de información. forma de texto pidiendo un numero entero (<<) //"endl" se utiliza para que la siguiente linea de codigo ocurra un renglon abajo
	
	cin>>numero1;							 //entrada de información. pide número entero (>>)
	cout<<endl;
	cout<<"Ingrese un segundo numero entero "<<endl; //salida de información. forma de texto pidiendo un numero entero (<<)
	
	cin>>numero2;									 //entrada de información. pide número entero (>>)
	cout<<endl;
	cout<<"El resultado de la suma es "	<<numero1 + numero2<<endl; //salida de información. muestra el resultado de la operación aritmética "suma" (v1 + v2 = r)

	cout<<"El producto de la multiplicacion es "<<numero1 * numero2; //salida de información. muestra el resultado de la operación aritmética "multiplicación" (v1 * v2 = r)
	
	return 0; //indica al programa que no devuelva información.
	}
