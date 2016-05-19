// multiplicacion de matrices.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
//de la operacion con matrices A*B=C
#define VALOR_A 100 //numero de filas de la matriz A y C.
#define VALOR_B 200	//numero de columnas de la matriz A y numero de filas de la matriz B.
#define VALOR_C 300 //numero de columnas de la matriz B y C.

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
	//iniciando matrices
	int **a,**b,**c;
	a = new int*[VALOR_A];
	for (int i = 0; i < VALOR_A; i++)
	{
		a[i] = new int[VALOR_B];
	}
	b = new int*[VALOR_B];
	for (int i = 0; i < VALOR_B; i++)
	{
		b[i] = new int[VALOR_C];
	}
	c = new int*[VALOR_A];
	for (int i = 0; i < VALOR_A; i++)
	{
		c[i] = new int[VALOR_C];
	}

	//multiplicacion normal
	multiplicar(a, b, c, VALOR_A, VALOR_B, VALOR_C);

    return 0;
}

