#include "MatrixBase.h"
#include <iostream>

MatrixBase::MatrixBase(unsigned int iSize) : m_size(iSize)
{
    matrix = new int* [m_size];
    for (int i = 0; i < m_size; ++i) {
        matrix[i] = new int[m_size];

        for (int j = 0; j < m_size; ++j) {
            matrix[i][j] = 0;
        }
    }
}

unsigned int MatrixBase::size() const
{
    return m_size;
}

void MatrixBase::operator*= (int iMult)
{
    for (int i = 0; i < m_size; i++)
        for (int j = 0; j < m_size; j++)
            matrix[i][j] *= iMult;
}

void MatrixBase::operator+= (MatrixBase& iAdd)
{
    for (int i = 0; i < m_size; i++)
        for (int j = 0; j < m_size; j++)
            matrix[i][j] += iAdd.element(i, j);
}

std::ostream& operator<<(std::ostream& stream, const MatrixBase& iMatrix)
{
    for (int i = 0; i < iMatrix.size(); i++)
    {
        for (int j = 0; j < iMatrix.size(); j++)
        {
            stream << iMatrix.element(i, j) << "\t";
        }
        stream << std::endl;
    }
    return stream;
}