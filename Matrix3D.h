#pragma once
#include "MatrixBase.h"

class Matrix3D : public MatrixBase
{
public:
	Matrix3D();
	virtual int element(unsigned int i, unsigned int j) const;
	virtual int& element(unsigned int i, unsigned int j);
private:
	int matrix[3][3];
	static constexpr int matrixSize = 3;
};