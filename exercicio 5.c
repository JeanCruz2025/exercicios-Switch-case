/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main () {

int mes; 

printf("NOME DO MES\n");
printf("Digite um numero de 1 a 12:\n");
scanf("%i" , &mes);

switch (mes) {
  case 2: 
    printf("Este mes é Fevereiro!");
    break;
  case 4: 
    printf("Este mes é Abril!");
    break;
  case 6: 
    printf("Este mes é Junho!");
    break;
  case 9: 
    printf("Este mes é Setembro!");
    break;
  case 11: 
    printf("Este mes é Novembro!");
    break;
  case 1: 
    printf("Este mes é Janeiro!");
    break;
  case 3: 
    printf("Este mes é Março!");
    break;
  case 5: 
    printf("Este mes é Maio!");
    break;
  case 7: 
    printf("Este mes é Julho!");
    break;
  case 8: 
    printf("Este mes é Agosto!");
    break;
  case 10: 
    printf("Este mes é Outubro!");
    break;
  case 12: 
    printf("Este mes é Dezembro!");
    break;
    
  default:
    printf("O mes digitado nao existe");}
}
