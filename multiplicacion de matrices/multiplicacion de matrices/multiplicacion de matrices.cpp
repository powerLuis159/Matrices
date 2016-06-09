// multiplicacion de matrices.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>
//de la operacion con matrices A*B=C
#define VALOR_A 1000 //numero de filas de la matriz A y C.
#define VALOR_B 1200	//numero de columnas de la matriz A y numero de filas de la matriz B.
#define VALOR_C 1500 //numero de columnas de la matriz B y C.

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

void multiplicar2(int **mA, int **mB, int **mC, int m, int n, int p)
{
	for (int k = 0; k < p; k++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int i = 0; i < m; i++)
			{
				mC[i][k] += mA[i][j] * mB[j][k];
			}
		}
	}
}

void multiplicar3(int **mA, int **mB, int **mC, int m, int n, int p)
{
#pragma omp parallel for
	for (int k = 0; k < p; k++)
	{
		for (int j = 0; j < n; j++)
		{
			for (int i = 0; i < m; i++)
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
	//multiplicar(a, b, c, VALOR_A, VALOR_B, VALOR_C);
	multiplicar2(a, b, c, VALOR_A, VALOR_B, VALOR_C);
	multiplicar3(a, b, c, VALOR_A, VALOR_B, VALOR_C);

    return 0;
}

