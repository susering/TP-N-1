#include <iostream> //Se ingresa la biblioteca
using namespace std; //espacio de nombre standard
int main() //funcion prioritaria. el compilador saltea funciones anteriores para priorizar la ejecuci�n de esta. luego de ejecutar la primaria se ejecuten las otras funciones con normalidad
{
	//variables
	int numero1;
	int numero2;
	
	cout<<"Ingrese un numero entero "<<endl; //salida de informaci�n. forma de texto pidiendo un numero entero (<<) //"endl" se utiliza para que la siguiente linea de codigo ocurra un renglon abajo
	
	cin>>numero1;							 //entrada de informaci�n. pide n�mero entero (>>)
	cout<<endl;
	cout<<"Ingrese un segundo numero entero "<<endl; //salida de informaci�n. forma de texto pidiendo un numero entero (<<)
	
	cin>>numero2;									 //entrada de informaci�n. pide n�mero entero (>>)
	cout<<endl;
	cout<<"El resultado de la suma es "	<<numero1 + numero2<<endl; //salida de informaci�n. muestra el resultado de la operaci�n aritm�tica "suma" (v1 + v2 = r)

	cout<<"El producto de la multiplicacion es "<<numero1 * numero2; //salida de informaci�n. muestra el resultado de la operaci�n aritm�tica "multiplicaci�n" (v1 * v2 = r)
	
	return 0; //indica al programa que no devuelva informaci�n.
	}
