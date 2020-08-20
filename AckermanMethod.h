/*
 * AckermanMethod.h
 *
 *  Created on: 20 ago. 2020
 *      Author: Gustavo Rivero
 */

#ifndef ACKERMANMETHOD_H_
#define ACKERMANMETHOD_H_

class AckermanMethod {

private:
	// Variables:
	int m, n;

public:
	// Constructor:
	AckermanMethod();

	// Métodos 'set':
	void setM(int m);
	void setN(int n);

	// Métodos 'get':
	int getM();
	int getN();

	// Función recursiva de Ackerman:
	int method(int m, int n);

};

#endif /* ACKERMANMETHOD_H_ */
