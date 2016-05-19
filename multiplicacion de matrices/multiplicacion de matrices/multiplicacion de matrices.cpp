// multiplicacion de matrices.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#define VALOR_A 100
#define VALOR_B 200
#define VALOR_C 300

void multiplicar(int **mA, int **mB, int **mC, int m, int n, int p)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int k = 0; k < p; k++)
			{
				mC[i][k] += mA[i][j] * mB[j][k];
			}
		}
	}
}

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

