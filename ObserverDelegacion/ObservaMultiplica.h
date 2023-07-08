#pragma once
#include "Observador.h"

class ObservaMultiplica : public Observador {
public:
	ObservaMultiplica(Subject* sub, double x) : Observador(sub, x) {
	}

	virtual ~ObservaMultiplica() {
	}

	string toString() {
		stringstream s;
		double v1 = subj->getVal1();
		s << "Al multiplicar el valor " << v1 << " por " << valor2 << " da "
			<< multiplica(v1) << endl;
		return s.str();
	}

	double multiplica(double& val1) {
		return val1*valor2;
	}
};
