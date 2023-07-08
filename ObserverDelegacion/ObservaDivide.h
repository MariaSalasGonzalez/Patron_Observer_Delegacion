#pragma once
#include "Observador.h"

class ObservaDivide : public Observador {
public:
	ObservaDivide(Subject* sub, double x) : Observador(sub, x) {
	}

	virtual ~ObservaDivide() {
	}

	string toString() {
		stringstream s;
		double v1 = subj->getVal1();
		s << "Al dividir el valor " << v1 << " entre " << valor2 << " da "
		  << divide(v1) << endl;
		return s.str();
	}

	double divide(double& val1) {
		return val1 / valor2;
	}
};
