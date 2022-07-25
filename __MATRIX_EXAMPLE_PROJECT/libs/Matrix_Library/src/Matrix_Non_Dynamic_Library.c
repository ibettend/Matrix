/*C FILE************************************************************************
* FILENAME: main.c          DESIGN REF: ~
*
* PROGRAM NAME: 12July2021_Morning_Ex
*
* DESCRIPTION:
*   This file gives an example of how a typical C file should be structured.
*   It will illustrate what information belongs inside a C file. There is an
*   example header file ("EXAMPLE_C_HEADER_FILE.h") that illustrates the
*   structure of a header file and what information belongs in it.
*
* AUTHOR: Isaac Bettendorf          START DATE:    12 July 2021
*                                   LAST MODIFIED: 12 July 2021
* CHANGES:
*   *** No changes have been made to this file. - 12 July 2021
*   1)
*
* VERSION:
*s
* SOURCES:
*   [1] https://www.doc.ic.ac.uk/lab/cplus/cstyle.html
*******************************************************************************/

/* ======================== INCLUDE FILES =================================== */
#include "Matrix_Non_Dynamic_Library.h"

// For best practises, only #include the corresponding .h file in the .c file.
// All other .h libraries should go into the #include sector of the ..
//... corresponding .h file.

/* ======================= DEFINE GLOBAL DEFAULT VALUES ===================== */

// Any global variables that are to be externed to be defined in this ..
// .c file. If desired, the global value can be initalized.


/* ======================= FUNCTION DEFINITIONS ============================= */

// The function prototype goes into the corresponding .h file. The ..
// definitions are given here. If this is the main.c file, the main() ..
// function should be first.

/**
 * @brief (m x n)*(n x k) ==> (m x k)
 * 
 * @param row_matrix_size_01_ulong 
 * @param column_matrix_size_01_ulong 
 * @param row_matrix_size_02_ulong 
 * @param column_matrix_size_02_ulong 
 * @return long long 
 */
int possible_matrix_multiplication_output(unsigned long row_matrix_size_01_ulong,
                                            unsigned long column_matrix_size_01_ulong,
                                            unsigned long row_matrix_size_02_ulong,
                                            unsigned long column_matrix_size_02_ulong)
{
    /**
     */
    if (column_matrix_size_01_ulong != row_matrix_size_02_ulong)
    {
        #if VERBOSE_ERROR_OS != 0
        printf("\nERROR: Dimension Mismatch - column of matrix 1 needs to be the\n");
        printf("\tsame size as the row of matrix 2\n");
        #endif
        return -1;
    }
}


/**
 * @brief 
 * 
 * @param matrix 
 */
void TransposeMatrixDouble(Matrix_Double_t* matrix)
{
    unsigned long temp_ulong;

    /*Swap row and columns size.*/
    temp_ulong = matrix->row_ulong;
    matrix->row_ulong = matrix->column_ulong;
    matrix->column_ulong = temp_ulong;

    /*Swap row and column indexes*/
    temp_ulong = matrix->i_inner_array_index_ulong;
    matrix->i_inner_array_index_ulong = matrix->j_outer_array_index_ulong;
    matrix->j_outer_array_index_ulong = temp_ulong;

    return;
}

/**
 * @brief determinant_long = determinant_long + (mat[0][i] * (mat[1][(i+1)%3] * mat[2][(i+2)%3] - mat[1][(i+2)%3] * mat[2][(i+1)%3]));
 * 
 * @param matrix 
 * @return double 
 */
double DeterminateGaussMatrixDouble(Matrix_Double_t* matrix)
{
    /*The matrix must be square to find the determinate.*/
    if (matrix->column_ulong != matrix->row_ulong)
    {
        #if VERBOSE_ERROR_OS != 0
        printf("\nERROR: Matrix must be a square matrix.\n");
        exit(0);
        #endif 
        return -123.1234567890123;
    }

    /*Loop through and find the determinate.*/
    double determinant_double, x[matrix->column_ulong], ratio;

    unsigned long square_dimension_ulong = matrix->row_ulong;

    unsigned long ii_ulong, jj_ulong, kk_ulong;
    for(ii_ulong = 0; ii_ulong < square_dimension_ulong; ii_ulong++)
    {
        if (matrix->Matrix_double[ii_ulong][ii_ulong] == 0.0)
        {
            #if VERBOSE_ERROR_OS != 0
            printf("\nERROR: Matrix must not have 0.0 for elements matrix[i][i]\n");
            exit(0);
            #endif
            return -248.248024802408;
        }

        /*Applying Gauss Elimination.*/
        for(jj_ulong = ii_ulong+1; jj_ulong < square_dimension_ulong; jj_ulong++)
        {
            ratio = (matrix->Matrix_double[jj_ulong][ii_ulong])/(matrix->Matrix_double[ii_ulong][ii_ulong]);

            for(kk_ulong = 0; kk_ulong < square_dimension_ulong; kk_ulong++)
            {
                matrix->Matrix_double[jj_ulong][kk_ulong] = matrix->Matrix_double[jj_ulong][kk_ulong] - ratio*(matrix->Matrix_double[ii_ulong][kk_ulong]);
            }
        }
    }

    /*Find determinate*/
    for(ii_ulong = 0; ii_ulong < square_dimension_ulong; ii_ulong++)
    {
        determinant_double = determinant_double + (matrix->Matrix_double[ii_ulong][ii_ulong]);
    }

    return determinant_double;
}