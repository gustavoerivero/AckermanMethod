/*
 * AckermannFunction.h
 *
 *  Created on: 20 ago. 2020
 *      Author: Gustavo Rivero
 */

#ifndef ACKERMANNFUNCTION_H_
#define ACKERMANNFUNCTION_H_

class AckermannFunction {

private:
	// Variables:
	int m, n;

public:
	// Constructor:
	AckermannFunction();

	// M�todos 'set':
	void setM(int m);
	void setN(int n);

	// M�todos 'get':
	int getM();
	int getN();

	// Funci�n recursiva de Ackerman:
	int function(int m, int n);

};

#endif /* ACKERMANNFUNCTION_H_ */
