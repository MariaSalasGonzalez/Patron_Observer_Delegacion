#include "Subject.h"
#include "ObservaEleva.h"
#include "ObservaMultiplica.h"
#include "ObservaDivide.h"

int main() {
	cout << "---Ejercicio de Observer #2--" << endl;
	cout << "-----------------------------" << endl;
	cout << "Crear un subject...." << endl;
	Subject* subj = new Subject(10); //con vec interno de 10 posiciones
	cout << endl;
	cout << "Crear los observadores..." << endl;
	Observador* ob1 = new ObservaEleva(subj, 4);
	Observador* ob2 = new ObservaMultiplica(subj, 7);
	Observador* ob3 = new ObservaDivide(subj, 5);
	cout << "Ahora vamos a setear el valor del subject a ver que pasa" << endl;
	cout << "Lo seteamos con un nuevo valor de 5" << endl;
	subj->setVal1(5);
	cout << endl;
	cout << "Llamando al toString del subject... entonces..." << endl;
	cout << endl;
	cout << subj->toString() << endl;
	system("pause");
	return 0;
}