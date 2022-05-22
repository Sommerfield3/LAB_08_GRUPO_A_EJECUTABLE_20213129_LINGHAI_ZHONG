/*2. Defina una clase Elipse derivada de forma. Recordatorio: una elipse queda
definida por su radio mayor (R) y su radio menor (r), tal que el área de una elipse
es igual a p*(R*r).*/
#include<iostream>
#include "Elipse.h"
using namespace std;

int main (int argc, char *argv[]) {
	Elipse elipse1;
	elipse1.cambiarCoordenadasCentroFigura(50,35);
	elipse1.obtenerOCambiarColor("Azul");
	elipse1.obtenerRadios(20,15);
	elipse1.imprimir();
	cout<<"Area del rectangulo: "<< elipse1.calcularArea()<<" u^2"<<endl;
	cout<<"Perimetro del rectangulo: "<< elipse1.calcularPerimetro()<<" u"<<endl;
	system("pause");
	return 0;
}

