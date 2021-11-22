#include <stdio.h>
double Convert(double radian){
 double pi = 3.000;
 return(radian * (360/pi));
}
int main(){
 double radian = 60;
 double degree = Convert(radian);
 printf("%.5lf", degree);
 return 0;
}