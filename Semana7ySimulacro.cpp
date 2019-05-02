// SimulacroDibujo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <conio.h>
#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	//Entrada
	int n;
	cout << " Ingrese un numero postivo menor a 11: ";
	cin >> n;

	//Test
	/*Numero positivo mayor a 11*/

	//Lógica
	for (int j = 0; j < n; ++j) {
		for (int i = 0; i < n - j - 1; ++i)
			cout << "  ";
		for (int i = 0; i < 2 * j + 1; ++i)
			cout << i+1 << " ";
		cout << endl;
	}

	for (int j = n - 2; j >= 0; --j) {
		for (int i = 0; i < n - j - 1; ++i)
			cout << "  ";
		for (int i = 0; i < 2 * j + 1; ++i)
			cout << i+1<<" ";
		cout << endl;
	}
	//Salida
	_getch();
}

/*Pregunta 9 Hoja 5*/
/*


*/

/*Simulacro 4*/
/*
	//Entrada
	int n = 0;
	cout << "Ingrese un numero menor a 10: " << endl;
	cin >> n;

	//Test
	//Número entero mayor a 0

	//Lógica
int i, k = 0;

for (i = 0; i < n; i++)
{
	for (k = 0; k < n; k++)
	{
		if (i == 0 || i == (n - 1) || k == 0 || k == (n - 1))
		{
			cout << "*";
		}
		else
		{
			cout << " ";
		}
	}
	cout << endl;
}

//Salida

_getch();

*/

/*Pregunta 7 Hoja 5 */
/*
#include <windows.h>

void GoToXY(int column, int line)
{
	COORD coord;
	coord.X = column;
	coord.Y = line;

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	if (!SetConsoleCursorPosition(hConsole, coord))
	{
		cout << "Error";
	}
}

int main()
{
//Entrada
	int n = 0;
	int aux = 5;
	cout << "Ingrese un numero menor a 10: " << endl;
	cin >> n;

	//Test
	//Número entero mayor a 0

	//Lógica
	int i, k,j = 0;
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < aux; i++)
		{
			for (k = 0; k < aux; k++)
			{
				if (j >= 1)
				{
					GoToXY((7 * j + k ), (2 + i));
				}
				if (i == (aux - 1) || k == 0 || (i == k))
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	//Salida
	_getch();
}
*/