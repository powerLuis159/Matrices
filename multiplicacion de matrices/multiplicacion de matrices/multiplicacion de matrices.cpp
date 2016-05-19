// multiplicacion de matrices.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#define VALOR_A 100
#define VALOR_B 200
#define VALOR_C 300

int main()
{
	//hacer lo que haga falta
	int **a;
	a = new int*[VALOR_A];
	for (int i = 0; i < VALOR_A; i++)
	{
		a[i] = new int[VALOR_B];
	}
    return 0;
}

