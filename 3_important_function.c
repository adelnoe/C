#include <stdio.h>
#include <math.h>
//receives one floating-point number x and displays the result of calculating the function on the screen (rounding to one digit after the decimal point). Add a check for the input data so the program only receives numbers. For errors, display "n/a"
int main(void){
double x,y;
char endline;
if ((scanf("%lf",&x)==1)&&(scanf("%c",&endline)==1)&&(endline=='\n')){

//7e-3 * x^4 + ((22.8 * x^⅓ - 1e3) * x + 3) / (x * x / 2) - x * (10 + x)^(2/x) - 1.01. 

y=7*pow(10,-3)*pow(x,4)+((22.8*pow(x,1/3)-pow(10,3))*x+3)/(x*x/2)-x*pow((10+x),2/x)-1.01;

printf("%.1lf",y);
}
else printf("n/a");

return 0;
}