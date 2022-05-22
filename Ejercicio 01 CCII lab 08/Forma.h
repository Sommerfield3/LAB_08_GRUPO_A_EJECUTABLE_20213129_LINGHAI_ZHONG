#ifndef FORMA_H
#define FORMA_H
#include <iostream>
#include <cmath>
using namespace std;
class Forma {
public:
	string Color;
	double Punto[2]={0,0};
	char *nombreForma;
	Forma();
	~Forma();
	void obtenerOCambiarColor(string c);
	void cambiarCoordenadasCentroFigura(double x,double y);
	void obtenerNombreDeLaForma(const char nombre[]);
	virtual void imprimir();

	
	
	
private:
};

#endif

