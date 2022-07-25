/*H FILE************************************************************************
* FILENAME: main.h      DESIGN REF: ~
*
* PROGRAM NAME: 08July2021_Morning_Ex
*
* DESCRIPTION:
*
*
* AUTHOR: Isaac Bettendorf          START DATE:    08 July 2021
*                                   LAST MODIFIED: 08 July 2021
* CHANGES:
*   *** No changes have been made to this file. - 08 July 2021
*   1)
*
* VERSION:
*
* SOURCES:
*   [1] https://www.doc.ic.ac.uk/lab/cplus/cstyle.html
*******************************************************************************/

// It is best practice to include header guards.
#ifndef MATRIX_NON_DYNAMIC_2_0_LIBRARY_H
#define MATRIX_NON_DYNAMIC_2_0_LIBRARY_H

#include <stdio.h>
#include<bits/stdc++.h>

using namespace std;
/* ======================== INCLUDE FILES =================================== */
// Only include headers that EXAMPLE_C_FILE.c or EXAMPLE_C_HEADER_FILE.h ..
// relies on.

/* ======================== CONSTANTS ======================================= */

// Where constants are declared (const). This can also be an array of constants.
// #define, enum, or any constant structure declaration goes here.


/* ======================== USER DEFINED DATA TYPES ==========================*/


/* ======================== GLOBAL VARIABLE ================================= */

// Extern global variables goes here.
// It is good practice to only use static global variables only have a scope ..
// of the .c file it is declared in. This means, unless it is absolutely ..
// necessary, do not use global variables.

/* ======================= FUNCTION PROTOTYPES ============================== */

/* ======================= OTHER MICROS ======================================*/

// Any macro that does not belong in the other catagory.

/* ===========================================================================*/

// End header guard scope.

void getCofactor(double* A, double* temp, unsigned long ii_default_row_ulong, unsigned long jj_default_column_ulong, unsigned long square_matrix_order);

double determinant(double* A, unsigned long square_matrix_order_ulong);

void adjoint(double* A, double* adj, unsigned long square_matrix_order_ulong);

bool inverse(double* A, double* inverse, unsigned long square_matrix_order_ulong);

template<class T>
void display(T* A, unsigned long square_matrix_order_ulong);

#endif
