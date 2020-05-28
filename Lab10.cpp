/*
	Strelkov Stanislav
	RI-280002
*/
#include <iostream>;
#include "MatrixBase.h"
#include "Matrix2D.h"
#include "Matrix3D.h"

using namespace std;

void fillElements(MatrixBase& matrix)
{
	for (int i = 0; i < matrix.size(); i++)
		for (int j = 0; j < matrix.size(); j++)
			matrix.element(i, j) = i * matrix.size() + j + 1;
}

int main()
{
	Matrix2D m2a, m2b;
	Matrix3D m3a, m3b;
	fillElements(m2a);
	fillElements(m2b);
	fillElements(m3a);
	fillElements(m3b);
	cout << "m2a\n" << m2a << endl;
	cout << "m2b\n" << m2b << endl;
	cout << "m3a\n" << m3a << endl;
	cout << "m3b\n" << m3b << endl;

	m2a *= 5;
	cout << "product m2a by 5\n" << m2a << endl;
	m2a += m2b;
	cout << "sum m2a and m2b\n" << m2a << endl;
	m3a *= 10;
	cout << "product m3a by 10\n" << m3a << endl;
	m3a += m3b;
	cout << "sum m3a and m3b\n" << m3a << endl;
}