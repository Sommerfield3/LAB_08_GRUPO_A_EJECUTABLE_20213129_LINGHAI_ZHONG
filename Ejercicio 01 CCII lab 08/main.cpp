/*1. Defina una clase Forma que tenga los siguientes miembros de datos:
- Color
- Coordenada del centro de la forma (objeto Punto)
- Nombre de la forma (char *)
Y, al menos, las siguientes funciones miembro:
- Imprimir
- Obtener y cambiar el color
- Mover la forma (o sea, su centro)
Defina una clase derivada Rect�ngulo que tenga los siguientes miembros como
datos:
- Lado menor.
- Lado mayor.
Y, al menos, las siguientes funciones miembro:
- Imprimir. Debe imprimir qu� se trata de un rect�ngulo mostrando su nombre,
color, centro y lado. Deber�a usarse la funci�n Imprimir de la clase base para
realizar parte de este trabajo.
- Calcular el �rea (lado menor * lado mayor).
- Calcular el per�metro. (2 * lado menor + 2 * lado mayor).
- Cambiar el tama�o del rect�ngulo. Recibe como par�metro un factor de escala.
As�, por ejemplo, si el factor vale 2, el rect�ngulo duplicar� su tama�o y si es 0,5
se reducir� a la mitad.
Realice un programa que pruebe el funcionamiento de estas clases. Debe crear
objetos y comprobar el correcto funcionamiento de las funciones miembro.*/
#include<iostream>
#include "Rectangulo.h"
using namespace std;

int main (int argc, char *argv[]) {
	Rectangulo figura1;
	double escalaTam=4;
	figura1.obtenerLados(10,15);
	figura1.cambiarCoordenadasCentroFigura(30,40);
	figura1.obtenerOCambiarColor("Amarillo");
	figura1.imprimir();
	cout<<"Area del rectangulo: "<<figura1.calcularArea()<<" u^2"<<endl;
	cout<<"Perimetro del rectangulo: "<<figura1.calcularPerimetro()<<" u"<<endl;
	figura1.escalaLados(escalaTam);
	cout<<"Aplicamos la escala x"<<escalaTam<<" a cuanto ocupa (area) el rectangulo."<<endl;
	cout<<"Erea del rectangulo: "<<figura1.calcularArea()<<" u^2"<<endl;
	cout<<"Perimetro del rectangulo: "<<figura1.calcularPerimetro()<<" u"<<endl;
	system("pause");
	return 0;
}

