#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int numero = 1;
    int nuevo_sueldo;
    int sueldo_inicial = 400;
    
    switch(numero){
        case 1:
            cout<<"PRIMERA CATEGORIA"<<endl;
            cout<<"El sueldo anterior fue: "<<sueldo_inicial<<endl;
            cout<<"Su nuevo sueldo es: "<<sueldo_inicial*15/10<<endl;
            
        break;
        case 2:
        	cout<<"SEGUNDA CATEGORIA CATEGORIA"<<endl;
            cout<<"El sueldo anterior fue: "<<sueldo_inicial<<endl;
            cout<<"Su nuevo sueldo es: "<<sueldo_inicial*10/100<<endl;

        break;
        case 3:
        	cout<<"TERCERA CATEGORIA"<<endl;
            cout<<"El sueldo anterior fue: "<<sueldo_inicial<<endl;
            cout<<"Su nuevo sueldo es: "<<sueldo_inicial*8/100<<endl;
           
        break;
    }
    
	return 0;
}
