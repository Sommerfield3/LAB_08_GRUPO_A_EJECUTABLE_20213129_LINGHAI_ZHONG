#ifndef ELIPSE_H
#define ELIPSE_H
#include "Forma.h"
class Elipse:public Forma{
public:
	double radioMenor;
	double radioMayor;
	double area;
	double perimetro; 
	Elipse();
	~Elipse();
	void obtenerRadios(float a, float b);
	void imprimir();
	double calcularArea();
	double calcularPerimetro();
private:
};

#endif

