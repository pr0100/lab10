#pragma once
#include "MatrixBase.h"

class Matrix2D : public MatrixBase
{
public:
	Matrix2D();
	virtual int element(unsigned int i, unsigned int j) const;
	virtual int& element(unsigned int i, unsigned int j);
private:
	int matrix[2][2];
	static constexpr int matrixSize = 2;
};
