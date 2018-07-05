#include <iostream>
using namespace std;

//declaracion de la funcion
int cuadrado(int x);

int main(){
	//declaracion de variables locales:
	int a=17;
	int resp;
	// llamo la fun multiplicacion
	resp=cuadrado(a);
	cout <<"El numero "<<a<<" al cuadrado da:"<<resp<<endl;

	return 0;
}

int cuadrado(int x)
{
	int result;
	result=x*x;
	return result;
}

