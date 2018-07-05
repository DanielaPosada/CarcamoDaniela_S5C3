#include <iostream>
using namespace std;

//declaracion de la funcion
int multiplicacion(int x, int y);

int main(){
	//declaracion de variables locales:
	int a=17;
	int b=31;
	int resp;
	// llamo la fun multiplicacion
	resp=multiplicacion(a,b);
	cout <<"La multiplicacion da:"<<resp<<endl;

	return 0;
}

int multiplicacion(int x,int y)
{
	int result;
	result=x*y;
	return result;
}

