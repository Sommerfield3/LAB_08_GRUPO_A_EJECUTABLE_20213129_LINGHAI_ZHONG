#include "Elipse.h"

Elipse::Elipse() {
	
}

Elipse::~Elipse() {
	
}
void Elipse::obtenerRadios(float a, float b){
	if (a>b){
		obtenerNombreDeLaForma("Elipse");
		radioMayor=a;
		radioMenor=b;
	}
	else if (a<b){
		obtenerNombreDeLaForma("Elipse");
		radioMayor=b;
		radioMenor=a;
	}
	else{
		obtenerNombreDeLaForma("Circulo");
		radioMayor=a;
		radioMenor=b;
	}
}
void Elipse::imprimir(){
	cout<<"Nombre de la  figura: "<<nombreForma<<endl;
	cout<<"Color: "<<Color<<endl;
	cout<<"Centro de la forma (coordenada): ("<<Punto[0]<<","<<Punto[1]<<")"<<endl;
	cout<<"Los radios miden: "<<radioMayor<<"u y "<<radioMenor<<"u"<<endl;
}
double Elipse::calcularArea(){
	area=(3.14159265358979323846)*(radioMayor*radioMenor);
	return area;
}
double Elipse::calcularPerimetro(){
	perimetro=(3.14159265358979323846)*(radioMayor+radioMenor);
	return perimetro;
}
