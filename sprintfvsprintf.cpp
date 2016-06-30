// This is the test program for us to understand sprintf function .
// the number of variables passing to this function is arbitrary .
#include <stdio.h>

int main()
{
//   This sprintf function which prints variable to a string (butter in memory ), than to standard output
//   The main different between the printf you familiar with is ,it has an extra buffer parameters
    char szBuffer [100] ;
    sprintf (szBuffer, "The sum of %i and %i is %i", 5, 3, 5+3) ;
    puts (szBuffer) ;
//  This is the standard print function , which print variables to the standard output ,using variables and variable formats
    printf( "The sum of %i and %i is %i", 5, 3, 5+3);
}
