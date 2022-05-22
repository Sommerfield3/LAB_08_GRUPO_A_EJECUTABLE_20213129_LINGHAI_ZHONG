#ifndef FORMA_H
#define FORMA_H
#include <iostream>
#include <cmath>
using namespace std;
class Forma {
public:
	string Color;
	double Punto[2]={0,0};
	string nombreForma; /*Usé un string, puesto que al usar un puntero a char no cargaba de manera correcta*/
	Forma();
	~Forma();
	void obtenerOCambiarColor(string c);
	void cambiarCoordenadasCentroFigura(double x,double y);
	void obtenerNombreDeLaForma(string nombre);
	virtual void imprimir();
private:
};

#endif

