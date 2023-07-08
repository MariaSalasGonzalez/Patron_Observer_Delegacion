#include "Subject.h"

Subject::Subject(int tamano) {
	cout << "Creando un sujeto" << endl;
	can = 0;
	tam = tamano;
	vec = new Observador*[tam];
	for (int i = 0; i < tam; i++) //para limpiar el vector
		vec[i] = NULL;
}

Subject:: ~Subject() {
	cout << "Eliminando el sujeto" << endl;
	for (int i = 0; i < can; i++)
	delete vec[i];
	delete[] vec;
}

void Subject::attach(Observador* obsPtr) {
	if (can < tam)
		vec[can++] = obsPtr;
}

void Subject::setVal1(double val1) {
	valor1 = val1;
}
double Subject::getVal1() {
	return valor1;
}

string Subject::toString() {
	stringstream s;
	s << "---Listado de Observer---" << endl
	  << "-------------------------" << endl;
	for (int i = 0; i < can; i++)
		s << vec[i]->toString() << endl;
	return s.str();
}