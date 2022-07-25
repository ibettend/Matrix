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
#include "Matrix_Non_Dynamic_2-0_Library.hpp"

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

// C++ program to find adjoint and inverse of a matrix
//#define N 4
 
// Function to get cofactor of A[p][q] in temp[][]. n is current
// dimension of A[][]
void getCofactor(double* A, double* temp, unsigned long ii_default_row_ulong, unsigned long jj_default_column_ulong, unsigned long square_matrix_order)
{
    unsigned long i = 0, j = 0;
 
    // Looping for each element of the matrix
    for (int row = 0; row < square_matrix_order; row++)
    {
        for (int col = 0; col < square_matrix_order; col++)
        {
            //  Copying into temporary matrix only those element
            //  which are not in given row and column
            if (row != ii_default_row_ulong && col != jj_default_column_ulong)
            {
                temp[i*square_matrix_order + j] = A[row*square_matrix_order + col];
                j++;
 
                // Row is filled, so increase row index and
                // reset col index
                if (j == square_matrix_order - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
 
/* Recursive function for finding determinant of matrix.
   n is current dimension of A[][]. */
double determinant(double* A, unsigned long square_matrix_order_ulong)
{
    double D = 0; // Initialize result
 
    //  Base case : if matrix contains single element
    if (square_matrix_order_ulong == 1)
        return A[0];
 
    double temp[square_matrix_order_ulong*square_matrix_order_ulong]; // To store cofactors
 
    int sign = 1;  // To store sign multiplier
 
     // Iterate for each element of first row
    for (int f = 0; f < square_matrix_order_ulong; f++)
    {
        // Getting Cofactor of A[0][f]
        getCofactor(A, temp, 0, f, square_matrix_order_ulong);
        D += sign * A[f] * determinant(temp, square_matrix_order_ulong - 1);
 
        // terms are to be added with alternate sign
        sign = -sign;
    }
 
    return D;
}
 
// Function to get adjoint of A[N][N] in adj[N][N].
void adjoint(double* A, double* adj, unsigned long square_matrix_order_ulong)
{
    if (square_matrix_order_ulong == 1)
    {
        adj[0] = 1;
        return;
    }
 
    // temp is used to store cofactors of A[][]
    long long sign = 1; 
    double temp[square_matrix_order_ulong*square_matrix_order_ulong];
 
    for (int i=0; i < square_matrix_order_ulong; i++)
    {
        for (int j=0; j < square_matrix_order_ulong; j++)
        {
            // Get cofactor of A[i][j]
            getCofactor(A, temp, i, j, square_matrix_order_ulong);
 
            // sign of adj[j][i] positive if sum of row
            // and column indexes is even.
            sign = ((i+j)%2==0)? 1: -1;
 
            // Interchanging rows and columns to get the
            // transpose of the cofactor matrix
            adj[j*square_matrix_order_ulong + i] = (sign)*(determinant(temp, square_matrix_order_ulong-1));
        }
    }
}
 
// Function to calculate and store inverse, returns false if
// matrix is singular
bool inverse(double* A, double* inverse, unsigned long square_matrix_order_ulong)
{
    // Find determinant of A[][]
    double det = determinant(A, square_matrix_order_ulong);
    if (det == 0)
    {
        cout << "Singular matrix, can't find its inverse";
        return false;
    }
 
    // Find adjoint
    double adj[square_matrix_order_ulong*square_matrix_order_ulong];
    adjoint(A, adj, square_matrix_order_ulong);
 
    // Find Inverse using formula "inverse(A) = adj(A)/det(A)"
    for (int i=0; i<square_matrix_order_ulong; i++)
        for (int j=0; j<square_matrix_order_ulong; j++)
            inverse[i*square_matrix_order_ulong + j] = adj[i*square_matrix_order_ulong + j]/det;
 
    return true;
}


void transposeMatrixDouble(double* matrix, unsigned long square_matrix_order_ulong)
{
    
}

 
// Generic function to display the matrix.  We use it to display
// both adjoin and inverse. adjoin is integer matrix and inverse
// is a float.
template<class T>
void display(T* A, unsigned long square_matrix_order_ulong)
{
    for (int i=0; i<square_matrix_order_ulong; i++)
    {
        for (int j=0; j<square_matrix_order_ulong; j++)
            cout << A[i*square_matrix_order_ulong + j] << " ";
        cout << endl;
    }
}