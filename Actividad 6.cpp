#include <iostream> //biblioteca
using namespace std; //espacio de nombre estandar
int main() //funcion principal
{
	//variables
	int precioArticulo;
	int vecesArticulo;
	float dineroAbonar;
	
		cout<<"********************************************************************************"<<endl;
	cout<<endl;
	cout<<"Programa para calcular dinero a abonar con un articulo"<<endl;								//funcion del programa
	cout<<endl;
	cout<<"********************************************************************************"<<endl;
	cout<<endl;
	
	cout<<"El valor del articulo es de: "; //pide al usuario que ingrese el valor del articulo que va a comprar
	cin>>precioArticulo;
	cout<<endl;
	cout<<"¿Cuantos articulos se va a llevar?"<<endl; //pide al usuario la cantidad de articulos que se va a llevar
	cin>> vecesArticulo;
	
	dineroAbonar= precioArticulo * vecesArticulo; //asginandole valor a la variable
	cout<<endl;
	cout<<"El dinero a abonar es: "<<dineroAbonar; //mostrando en pantalla el resultado de la operacion
	
	
	return 0;
	
	
}
