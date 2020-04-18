// Project2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>;
using namespace std;

int main()
{
	//This Program for Multiplication of 2 matrix follow multiplication rules of matrix
	cout << "Multiplication of Matrix";
	double   abc = 0,element;
	int rA, cA, rB, cB,row, column,k ;
	double A[100][100];
	double B[100][100];
	double C[100][100];
	cout << "Enter Row in matric A :";
	cin >> rA;
	cout << "Enter column in matric A :";
	cin >> cA;
	cout << "Enter Row in matric B :";
	cin >> rB;
	cout << "Enter column in matric C :";
	cin >> cB;
		//Enter of Matrix A
		for (row = 0; row < rA; row++)
			{
				for (column = 0; column < cA; column++)
					{
					cout << "Enter Element for " << row + 1 << column + 1 << " position ";
					cin >> element;
					A[row][column] = element;
					}
			}
		cout << "matric A is complete" << endl<<endl;
		//Enter of Matrix B
		for (row = 0; row < rB; row++)
		{
			for (column = 0; column < cB; column++)
			{
				cout << "Enter Element for " << row + 1 << column + 1 << " position ";
				cin >> element;
				B[row][column] = element;
			}
		}
		cout << "matric B is complete" << endl << endl;
		//Check condition for multiplication
		// column of A is equal to Row of B then it multiply  AxB
		//column of B is equal to Row of A then it multiply  BxA


		if (cA == rB)
		{
			for (row = 0; row < rA; row++)
			{
				for (column = 0; column < cB; column++)
				{
					abc = 0;
					for (k = 0; k < cA; k++)
					{
						abc = abc + A[row][k] * B[k][column];
						C[row][column]=abc;
						
					}
					cout << " " << C[row][column] << " ";
				}
				cout << endl<<endl;
			}
		}
		else if(rA == cB)
		{
			for (row = 0; row < rB; row++)
			{
				for (column = 0; column < cA; column++)
				{
					abc = 0;
					for (k = 0; k < cB; k++)
					{
						abc = abc + B[row][k] * A[k][column];
						C[row][column] = abc;

					}
					cout << " " << C[row][column] << " ";
				}
				cout << endl << endl;
			}
		}
		else
		{
			cout << "Your cannot follow rulles of Matric Check number of row And Column ";
		}

		
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
