#include <iostream>
using namespace std; 

int main(){
	int CLA, CAT, ANT,SAL, RES;
RES = 0;
	cout << "Ingresar su clave "<<endl;
	cin >> CLA;
	
	cout <<"Ingrese categoria del trabajador"<<endl;
	cin >>CAT;	
	
	cout <<"Ingrese antiguedad del trabajador"<<endl;
	cin >> ANT;
	
	cout <<"Ingrese el salario del trabajador"<<endl;
	cin >> SAL; 
	
	 if ( (CAT == 3 || CAT == 4) && ANT >= 5)// categoria 3 y 4 antiguedad mayor a 5 años
	 {
		RES = 1; 
	 } else 
	 {
		 if (CAT == 2 && ANT >= 7)// categoria 2 con antiguedad mayor a 7 años
			 RES = 1; 
	 }
	 
	 if (RES==1)
	 {
		 cout << "El trabajador reune las condicones para el puesto"<<endl;
	 }else
		 cout << "El trabajador no reune las condicones para el puesto"<<endl;
	 
	return 0;

}
