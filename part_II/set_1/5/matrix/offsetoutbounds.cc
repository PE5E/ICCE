#include "matrix.ih"

bool Matrix::offsetOutBounds()
{
	return xtrPrm.d_rowOffset > d_nRows || xtrPrm.d_colOffset > d_nCols;
}