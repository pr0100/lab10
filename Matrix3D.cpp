#include "Matrix3D.h"

Matrix3D::Matrix3D() : MatrixBase(3)
{
	for (int i = 0; i < matrixSize; i++)
		for (int j = 0; j < matrixSize; j++)
			matrix[i][j] = 0;
}

int Matrix3D::element(unsigned int i, unsigned int j) const
{
	return matrix[i][j];
}

int& Matrix3D::element(unsigned int i, unsigned int j)
{
	return matrix[i][j];
}