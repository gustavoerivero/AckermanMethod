
// Se incluye la librer�a 'iostream' para manejar m�todos de entrada y salida de textos.
#include <iostream>

// Se incluye la clase 'AckermanMethod.h' para implementar el m�todo de la funci�n recursiva de Ackerman.
#include "AckermanMethod.h"

// Se maneja el espacio de trabajo est�ndar 'std'.
using namespace std;

// M�todo main()
int main(){

	AckermanMethod ackerman = AckermanMethod();

	/*
	 * Se declara e inicializa la variable que permitir� conocer si el usuario desea
	 * realizar el procedimiento de nuevo (Variable 'respuesta').
	 */
	int r = 0;

	do{

		/*
		 * Se declaran e inicializan las variables a utilizar para el m�todo o funci�n
		 * de Ackerman. Entre estas variables tenemos el n�mero 'm' y el n�mero 'n'.
		 */
		int m = 0, n = 0;

		// Encabezado
		cout << "\n - FUNCI�N RECURSIVA DE ACKERMAN - \n";
		cout << "La funci�n recursiva de Ackerman tiene la forma A(m, n).\n" << endl;

		// Ingresar el valor de 'm'
		cout << "Ingrese un n�mero 'm': ";
		cin >> m;
		ackerman.setM(m);

		// Ingresar el valor de 'n'
		cout << "Ingrese un n�mero 'n': ";
		cin >> n;
		ackerman.setN(n);

		// Se muestra la forma en la que se aplicar� la funci�n de Ackerman y el valor obtenido.
		cout << "\nEl valor obtenido por la funci�n de Ackerman es;" << endl;
		cout << "A( "
				<< ackerman.getM() <<", " 								// Valor de 'm'.
				<< ackerman.getN() << ") = " 							// Valor de 'n'.
				<< ackerman.method(ackerman.getM(), ackerman.getN());	// Valor de la funci�n de Ackerman.

		// Se pregunta al usuario si desea ejecutar la funci�n de Ackerman de nuevo con otros valores.
		cout << "\n\n�Desea volver a usar la funci�n recursiva de Ackerman?";
		cout << "\n(0) No.\n(1) Si.\nIngrese su respuesta: ";
		cin >> r;

		// Se eval�a la respuesta dada por el usuario.
	} while(r == 1);

	// Fin del m�todo main().
	return 0;

}



