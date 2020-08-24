/*
 * main.cpp
 *
 *  Created on: 20 ago. 2020
 *      Author: Gustavo Rivero
 */

// Se incluye la librería 'iostream' para manejar métodos de entrada y salida de textos.
#include <iostream>

/*
 * Se incluye la clase 'AckermannFunction.h' para implementar el método de la función recursiva de
 * Ackermann.
 */
#include "AckermannFunction.h"

// Se maneja el espacio de trabajo estándar 'std'.
using namespace std;

// Método main()
int main(){

	/*
	 * Se declara e inicializa la variable que permitirá conocer si el usuario desea
	 * realizar el procedimiento de nuevo (Variable 'respuesta').
	 */
	int r = 0;

	do{

		// Se declara el objeto 'ackermann' de la clase 'AckermannFunction'.
		AckermannFunction ackermann = AckermannFunction();

		/*
		 * Se declaran e inicializan las variables a utilizar para el método o función
		 * de Ackermann. Entre estas variables tenemos el número 'm' y el número 'n'.
		 */
		int m = 0, n = 0;

		// Encabezado
		cout << "\n - FUNCIÓN RECURSIVA DE ACKERMANN - \n";
		cout << "La función recursiva de Ackermann tiene la forma 'A(m, n)'.\n" << endl;

		// Ingresar el valor de 'm'
		cout << "Ingrese un número 'm': ";
		cin >> m;
		ackermann.setM(m);

		// Ingresar el valor de 'n'
		cout << "Ingrese un número 'n': ";
		cin >> n;
		ackermann.setN(n);

		// Se muestra la forma en la que se aplicará la función de Ackermann y el valor obtenido.
		cout << "\nEl valor obtenido por la función de Ackermann es;" << endl;
		cout << "A( "
				<< ackermann.getM() <<", " 									// Valor de 'm'.
				<< ackermann.getN() << ") = " 								// Valor de 'n'.
				<< ackermann.function(ackermann.getM(), ackermann.getN());	// Valor de la función.

		/*
		 * Se ejecuta un ciclo 'do-while' con el fin de que el usuario solo ingrese un valor entre '0' o
		 * '1' y poder continuar con la ejecución del programa..
		 */
		do{

			// Se pregunta al usuario si desea ejecutar la función de Ackermann de nuevo con otros valores.
			cout << "\n\n¿Desea volver a usar la función recursiva de Ackermann?";
			cout << "\n(0) No.\n(1) Si.\nIngrese su respuesta: ";
			cin >> r;

			/*
			 * Si el usuario ingresa un valor distinto a '0' o '1' se muestra mensaje solicitando valores
			 * admitibles.
			 */
			if(r != 0 && r != 1)
				cout << "\nIngrese uno de los números que se muestran en pantalla para continuar "
						"con la ejecución del programa.";

			/*
			 * Si el usuario ingresa un valor distinto a '0' o '1' se repíte el ciclo 'do-while' hasta que
			 * el usuario ingrese un valor admitible.
			 */
		}while(r != 0 && r != 1);

		// Se evalúa la respuesta dada por el usuario.
	} while(r == 1);

	// Fin del método main().
	return 0;

}
