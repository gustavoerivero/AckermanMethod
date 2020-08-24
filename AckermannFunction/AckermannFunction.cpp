/*
 * AckermannFunction.cpp
 *
 *  Created on: 20 ago. 2020
 *      Author: Gustavo Rivero
 */

#include "AckermannFunction.h"

// Constructor: Se inicializan las variables.
AckermannFunction::AckermannFunction() {
	m = 0, n = 0;
}

// Métodos 'set':
void AckermannFunction::setM(int m){
	this->m = m;
}

void AckermannFunction::setN(int n){
	this->n = n;
}

// Métodos 'get':
int AckermannFunction::getM(){
	return m;
}

int AckermannFunction::getN(){
	return n;
}

// Función recursiva de Ackermann:
int AckermannFunction::function(int m, int n){

	// Si 'm' = 0:
	if(m == 0)
		return (n + 1);
	else{

		// Si 'm' <> 0 y 'n' = 0:
		if(n == 0)
			return function(m - 1, 1);

		// Si 'm' <> 0 y 'n' <> 0:
		else
			return function(m - 1, function(m, n - 1));

	}

}
