//Author: Yue Wu yzw5627@psu.edu
//Collabaraoter: Shengyou Jiang sjj5492@psu.edu
//Collabaraoter: Michael Artlip mva5905@psu.edu
//Collabaraoter: Joel John jmj6182@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *cel = readline("Enter temperature in celsius: "); 
  double c = atof(cel); 
  double f = c * 9/5 + 32; 
  printf("%f° in Celsius is equicalent to %f° Fahrenheit. \n",c, f); 

  return 0; 
}