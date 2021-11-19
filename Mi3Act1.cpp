#include <stdio.h>

int main(){
    int temp;
    printf("Please put Temperature:");
    scanf("%d", &temp);
    if(temp < 0){
       printf("The weather is freezing");      
}
  else if(temp >= 0 && temp <= 10){
         printf("The weather is very cold");
}
  else if(temp >= 10 && temp <= 20){
         printf("The weather is cold");
}
  else if(temp >= 20 && temp <= 30){
         printf("The weather is normal");
}
  else if(temp >= 30 && temp <= 40){
         printf("The weather is hot");
}
  else if(temp>=40){
         printf("The weather is very hot");
}
  return 0;
}