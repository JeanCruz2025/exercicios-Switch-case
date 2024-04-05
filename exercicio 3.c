/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main () {

int mes; 

printf("CALCULO DE DIAS DO MES\n");
printf("Digite um mes:\n");
scanf("%i" , &mes);

switch (mes) {
  case 2: 
    printf("Este mes tem 28 dias");
    break;
  case 4: 
    printf("Este mes tem 30 dias");
    break;
  case 6: 
    printf("Este mes tem 30 dias");
    break;
  case 9: 
    printf("Este mes tem 30 dias");
    break;
  case 11: 
    printf("Este mes tem 30 dias");
    break;
  case 1: 
    printf("Este mes tem 31 dias");
    break;
  case 3: 
    printf("Este mes tem 31 dias");
    break;
  case 5: 
    printf("Este mes tem 31 dias");
    break;
  case 7: 
    printf("Este mes tem 31 dias");
    break;
  case 8: 
    printf("Este mes tem 31 dias");
    break;
  case 10: 
    printf("Este mes tem 31 dias");
    break;
  case 12: 
    printf("Este mes tem 31 dias");
    break;
    
  default:
    printf("O mes digitado nao existe");}
}
