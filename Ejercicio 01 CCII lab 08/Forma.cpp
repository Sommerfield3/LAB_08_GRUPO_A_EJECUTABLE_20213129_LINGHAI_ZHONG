#include "Forma.h"

Forma::Forma() {
	
}

Forma::~Forma() {
	
}
void Forma::imprimir(){
	cout<<"Color: "<<Color<<endl;
	cout<<"Centro de la forma (coordenada): ("<<Punto[0]<<","<<Punto[1]<<")"<<endl;
}
void Forma::obtenerOCambiarColor(string c){
	Color=c;
}
void Forma::cambiarCoordenadasCentroFigura(double x,double y){
	Punto[0]=x;
	Punto[1]=y;
}
void Forma::obtenerNombreDeLaForma(const char nombre[]){
	*nombreForma=*nombre;
}
