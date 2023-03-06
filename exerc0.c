/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int m [10][10];
    int l , c;
    for (l=0;l<10;l++)
    {
        for(c=0;c<10;c++)
        {
            if (l > c)
            {
                m[l][c]='X';
                
            }else
            
            {
                m[l][c]='0'; 
            }
        }
        
     }
    

    for(l =0;l<10;l++)
    {
        for(c=0;c<10;c++)
        {
            printf("%c", m[l][c]);
        }
        printf("\n");
        
    }
    return 0;
}

