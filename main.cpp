
// Se incluye la librería 'iostream' para manejar métodos de entrada y salida de textos.
#include <iostream>

// Se incluye la clase 'AckermanMethod.h' para implementar el método de la función recursiva de Ackerman.
#include "AckermanMethod.h"

// Se maneja el espacio de trabajo estándar 'std'.
using namespace std;

// Método main()
int main(){

	AckermanMethod ackerman = AckermanMethod();

	/*
	 * Se declara e inicializa la variable que permitirá conocer si el usuario desea
	 * realizar el procedimiento de nuevo (Variable 'respuesta').
	 */
	int r = 0;

	do{

		/*
		 * Se declaran e inicializan las variables a utilizar para el método o función
		 * de Ackerman. Entre estas variables tenemos el número 'm' y el número 'n'.
		 */
		int m = 0, n = 0;

		// Encabezado
		cout << "\n - FUNCIÓN RECURSIVA DE ACKERMAN - \n";
		cout << "La función recursiva de Ackerman tiene la forma A(m, n).\n" << endl;

		// Ingresar el valor de 'm'
		cout << "Ingrese un número 'm': ";
		cin >> m;
		ackerman.setM(m);

		// Ingresar el valor de 'n'
		cout << "Ingrese un número 'n': ";
		cin >> n;
		ackerman.setN(n);

		// Se muestra la forma en la que se aplicará la función de Ackerman y el valor obtenido.
		cout << "\nEl valor obtenido por la función de Ackerman es;" << endl;
		cout << "A( "
				<< ackerman.getM() <<", " 								// Valor de 'm'.
				<< ackerman.getN() << ") = " 							// Valor de 'n'.
				<< ackerman.method(ackerman.getM(), ackerman.getN());	// Valor de la función de Ackerman.

		// Se pregunta al usuario si desea ejecutar la función de Ackerman de nuevo con otros valores.
		cout << "\n\n¿Desea volver a usar la función recursiva de Ackerman?";
		cout << "\n(0) No.\n(1) Si.\nIngrese su respuesta: ";
		cin >> r;

		// Se evalúa la respuesta dada por el usuario.
	} while(r == 1);

	// Fin del método main().
	return 0;

}



