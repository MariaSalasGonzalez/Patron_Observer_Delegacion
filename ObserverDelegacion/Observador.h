#pragma once
#include <iostream>
#include <sstream>
#include "Subject.h"
using namespace std;

class Subject; //Declaracion previa, dependecia cruzada o mutua

class Observador { //Interfaz <<Abstract>>
protected:
	double valor2; //atributo principal observer
	Subject* subj;
public:
	Observador(Subject*, double);
	virtual ~Observador();
	virtual string toString() = 0;
protected: //metodos protected
	Subject* getSubj();
	double getVal2();
};
