#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
	string TI;
	int TA;
	double p;
	int k;
	double GA;

	cout<<"ASOCIACION DE VINOCULTORES"<<endl;
	cout<<"Software: CALCULO GANANCIAS"<<endl;
	cout<<"\nIndique de que tipo es la Uva (A o B): ";
	cin>>TI;
	cout<<"\nEspecifique el tamaño (1 o 2): ";
	cin>>TA;
	cout<<"\n Indique el precio de la Uva: S/. ";
	cin>>p;
	cout<<"\nPrecio Ingresado: S/. "<<p;
	cout<<"\nIngresa la cantidad de Kilos vendidos:";
	cin>>k;

	if(TI == "A"){
		if (TA == 1)
		{
			p = p + 0.20;
		}else{
			p = p + 0.30;
		}
	}else{
		if (TA == 1)
		{
			p = p - 0.30;
		}else{
			p = p - 0.50;
		}
	}
	cout<<"\nPrecio Por filtro: "<<p;
	GA = p * k;
	cout<<"\n---------Calculando ----------------\n";
	cout<<"\nTotal de Ganacias:  S/. "<<GA;
	cout<<"\n\t\t FIN"<<endl;
}
