#include "Rectangulo.h"

Rectangulo::Rectangulo() {
	
}

Rectangulo::~Rectangulo() {
	
}
void Rectangulo::obtenerLados(float a,float b){
	if (a>b){
		obtenerNombreDeLaForma("Rectangulo");
		ladoMayor=a;
		ladoMenor=b;
	}
	else if (a<b){
		obtenerNombreDeLaForma("Rectangulo");
		ladoMayor=b;
		ladoMenor=a;
	}
	else{
		obtenerNombreDeLaForma("Rectangulo");
		ladoMayor=a;
		ladoMenor=b;
	}
}
void Rectangulo::imprimir(){
	cout<<"Nombre de la  figura: "<<nombreForma<<endl;
	cout<<"Color: "<<Color<<endl;
	cout<<"Centro de la forma (coordenada): ("<<Punto[0]<<","<<Punto[1]<<")"<<endl;
	cout<<"Los lados miden: "<<ladoMayor<<"u y "<<ladoMenor<<"u"<<endl;
}
double Rectangulo::calcularArea(){
	area=ladoMayor*ladoMenor;
	return area; 
}
double Rectangulo::calcularPerimetro(){
	perimetro=(2*ladoMayor)+(2*ladoMenor);
	return perimetro;
}
void Rectangulo::escalaLados(double escala){
	ladoMayor=ladoMayor*(sqrt(escala));
	ladoMenor=ladoMenor*(sqrt(escala));
}
