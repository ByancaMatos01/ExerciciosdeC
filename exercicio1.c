/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    for (int i = 0; i < 16; i++) {
        printf("A ordem Crescente é: %d \n", i);
    }
    
    for (int i = 15; i >= 0; i--) {
        printf("A ordem Decrescente  é: %d \n", i);
    }
    return 0;
}

