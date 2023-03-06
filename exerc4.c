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
    int linha, coluna;
    
    for(linha = 0; linha < 10; linha++){
        for(coluna = 0; coluna < 10; coluna ++){
            if(linha == 0 && coluna < 10){
                matriz[linha][coluna] = 'x';
           }else
           if(coluna == 0 && linha < 10){
                matriz[linha][coluna] = 'x';
           }else 
            if(linha == coluna){
                matriz[linha][coluna] = 'x';
            }
               
            else {
                matriz [linha][coluna] = '0';
            }
        }
    }
    
     for(linha = 0; linha < 10; linha++){
          for(coluna = 0; coluna < 10; coluna++){
              printf("%c", matriz[linha][coluna]);
              
          }
          printf("\n");
      }

    return 0;
}
