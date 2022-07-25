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
#ifndef MAIN_H
#define MAIN_H
// It is best practice to include header guards.
//#ifndef EXAMPLE_C_HEADER_FILE_H
//#define EXAMPLE_C_HEADER_FILE_H

/* ======================== INCLUDE FILES =================================== */

// Only include headers that EXAMPLE_C_FILE.c or EXAMPLE_C_HEADER_FILE.h ..
// relies on.
#include <iostream>
#include "configuration.hpp"
#include "Matrix_Non_Dynamic_2-0_Library.hpp"
extern "C"
{

    #include <stdio.h>
    #include <stdlib.h> /*system, NULL, EXIT_FAILURE, etc.*/
}

/* ======================== CONSTANTS ======================================= */

// Where constants are declared (const). This can also be an array of constants.
// #define, enum, or any constant structure declaration goes here.


/* ======================== USER DEFINED DATA TYPES ==========================*/

// Definition of data types goes here (struct)


/* ======================== FUNCTION PROTOTYPE ===============================*/

// Function prototypes for public/external functions goes here


/* ======================== GLOBAL VARIABLE ================================= */

// Extern global variables goes here.
// It is good practice to only use static global variables only have a scope ..
// of the .c file it is declared in. This means, unless it is absolutely ..
// necessary, do not use global variables.


/* ======================= OTHER MICROS ======================================*/

// Any macro that does not belong in the other catagory.

/* ===========================================================================*/

// End header guard scope.
#endif
