#ifndef RECTANGULO_H
#define RECTANGULO_H
#include "Forma.h"
class Rectangulo: public Forma{
public:
	double ladoMenor;
	double ladoMayor;
	double area;
	double perimetro; 
	Rectangulo();
	~Rectangulo();
	void obtenerLados(float a, float b);
	void imprimir();
	double calcularArea();
	double calcularPerimetro();
	void escalaLados(double escala);
	
};

#endif

