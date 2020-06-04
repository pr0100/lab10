#include "Matrix2D.h"

Matrix2D::Matrix2D() : MatrixBase(matrixSize)
{
	for (int i = 0; i < matrixSize; i++)
		for (int j = 0; j < matrixSize; j++)
			matrix[i][j] = 0;
}

int Matrix2D::element(unsigned int i, unsigned int j) const
{
	return matrix[i][j];
}

int& Matrix2D::element(unsigned int i, unsigned int j)
{
	return matrix[i][j];
}