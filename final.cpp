#include <iostream>
#include <stdio.h>

using namespace std;

const int longCad = 20;

struct costoPorArticulo{
	char nombreArticul[longCad + 1];
	int cantidad;
	float precio;
	float totalproducto;
};

void rellenar(costoPorArticulo [], int);
void preciototal(costoPorArticulo[],int);
void mostrardatos(costoPorArticulo[],int);
float preciofinal(costoPorArticulo[],int);

int main(){
	int numproducto;
	cout<<"Ingrese el numero de productos a comprar: ";
	cin>>numproducto;
	cout<<endl;
	costoPorArticulo compras[numproducto];
	
	rellenar(compras,numproducto);
	preciototal(compras,numproducto);
	mostrardatos(compras,numproducto);
	cout<<"El total de su compra es: "<<preciofinal(compras,numproducto);
	
	return 0;
}

void rellenar(costoPorArticulo compras[],int numproducto){
	for(int i=0; i<numproducto; i++){
		fflush(stdin);
		cout<<"ingrese el nombre de su producto: ";
		cin.getline(compras[i].nombreArticul,longCad + 1,'\n');
		cout<<"ingrese la cantidad de productos que lleva del mismo: ";
		cin>>compras[i].cantidad;
		cout<<"ingrese el precio de sus productos: $";
		cin>>compras[i].precio;
	}
}

void preciototal(costoPorArticulo compras[],int numproducto){
	for(int i=0; i<numproducto; i++){
		compras[i].totalproducto=compras[i].cantidad*compras[i].precio;
	}
}

void mostrardatos(costoPorArticulo compras[],int numproducto){
	for(int i=0; i<numproducto; i++){
		cout<<"\nnombre: "<<compras[i].nombreArticul<<endl;
		cout<<"cantidad: "<<compras[i].cantidad<<endl;
		cout<<"precio unitario: $"<<compras[i].precio<<endl;
		cout<<"total por producto: $"<<compras[i].totalproducto<<endl;		 
	}
}

float preciofinal(costoPorArticulo compras[],int numproducto){
	float suma=0;
	for(int i=0; i<numproducto; i++){
		suma=suma+compras[i].totalproducto;
	}
	return suma;
}


