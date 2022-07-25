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
*
* SOURCES:
*   [1] https://www.doc.ic.ac.uk/lab/cplus/cstyle.html
*******************************************************************************/

/* ======================== INCLUDE FILES =================================== */
#include "main.hpp"

using namespace std;

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


/* ======================= DEFINE GLOBAL DEFAULT VALUES ===================== */

// Any global variables that are to be externed to be defined in this ..
// .c file. If desired, the global value can be initalized.


/* ======================= FUNCTION DEFINITIONS ============================= */

// The function prototype goes into the corresponding .h file. The ..
// definitions are given here. If this is the main.c file, the main() ..
// function should be first.


// Driver program
int main()
{
    int A[N][N] = { {5, -2, 2, 7},
                    {1, 0, 0, 3},
                    {-3, 1, 5, 0},
                    {3, -1, -9, 4}};
 
    int adj[N][N];  // To store adjoint of A[][]
 
    float inv[N][N]; // To store inverse of A[][]
 
    cout << "Input matrix is :\n";
    display(A);
 
    cout << "\nThe Adjoint is :\n";
    adjoint(A, adj);
    display(adj);
 
    cout << "\nThe Inverse is :\n";
    if (inverse(A, inv))
        display(inv);
 
    return 0;
}