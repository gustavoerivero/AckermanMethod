/*
 * AckermanMethod.cpp
 *
 *  Created on: 20 ago. 2020
 *      Author: Gustavo Rivero
 */

#include "AckermanMethod.h"

// Constructor: Se inicializan las variables.
AckermanMethod::AckermanMethod() {
	m = 0, n = 0;
}

// Métodos 'set':
void AckermanMethod::setM(int m){
	this->m = m;
}

void AckermanMethod::setN(int n){
	this->n = n;
}

// Métodos 'get':
int AckermanMethod::getM(){
	return m;
}

int AckermanMethod::getN(){
	return n;
}

// Función recursiva de Ackerman:
int AckermanMethod::method(int m, int n){

	// Si 'm' = 0:
	if(m == 0)
		return (n + 1);
	else{

		// Si 'm' <> 0 y 'n' = 0:
		if(n == 0)
			return method(m - 1, 1);

		// Si 'm' <> 0 y 'n' <> 0:
		else
			return method(m - 1, method(m, n - 1));

	}

}
