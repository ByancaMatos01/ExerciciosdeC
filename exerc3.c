/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
    int main()
{
    char matriz [10][10];
    int l,c;
    
   
   for(l= 0; l <10; l++)
   {
        for(c=0; c<10; c++)
        {            
          if( c == 3 && l>0 && l <9 )
          {
            
          
            matriz[l][c]= 'x';
          } else
          {
              matriz[l][c] = '0';
                }
            
        }
       
   }
      
    for(l= 0; l <10; l++)
   {
        for(c=0; c<10; c++)
        {
            printf("%c ", matriz[l][c]);
        }
        printf("\n");
   }
    printf(" nome : Davi Queiroz");
   
    return 0;

}
