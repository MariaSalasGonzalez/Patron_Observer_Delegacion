#pragma once
#include "Observador.h"
using namespace std;

class Observador; //declaracion previa

class Subject {
private:
	double valor1; //importantisimo
	Observador** vec; //contenedor
	int can;
	int tam;
public:
	Subject(int tamano);
	virtual ~Subject();
	void attach(Observador*);
	void setVal1(double); //para setear el subject
	double getVal1();
	string toString();
};