#include <iostream>
#include <cstdlib>


using std::cout;
using std::endl;

int numerosparmenor89(int y);

int main(){
  int i, numeroal, resp;
  int contador=0;

    for(i=0;i<1000;i++)
    {
          while(contador<=25){
	  numeroal = rand() % 100 + 1;
          resp=numerosparmenor89(numeroal);
          if(resp!=-1)
            {
    	      cout << i << " " << numeroal << endl;  	
	      contador++;      		 	 
            }
	}
     }	


 return 0;
}

int numerosparmenor89(int y)
{
	int resp;
	resp=-1;
	int modulo;
	modulo=y%2;
	if(y<=89&&modulo==0)
	{
		resp=y;	
	}
	return resp;
}
