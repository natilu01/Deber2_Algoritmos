#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	float minutos;
	float pago1,pago2,pago3,pago4,total;
	
	cout<<"Programa para calcular el valor a pagar por el consumo de telefonia movil"<<endl;
	cout<<"Por favor ingrese el valor de los minutos consumidos"<<endl;
	cin>>minutos;
	
	if (minutos <6 ){
		pago1=minutos*1;
		cout<<"El total a pagar es: "<<pago1<<endl;
	}
	else if (minutos>4&&minutos<8){
		pago2=minutos*0.80;
		cout<<"El valor a pagar es: "<<pago2<<endl;
	}
	else if (minutos>7&&minutos<10){
		pago3=minutos*0.70;
		cout<<"El valo a pagar es: "<<pago3<<endl;
	}
	else if (minutos>9){
		pago4=minutos*0.50;
		cout<<"El valor a pagar es: "<<pago4<<endl;
	}
	else {
		cout<<"GRACIAS"<<endl;
	}
	return 0;
}
