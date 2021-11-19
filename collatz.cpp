#include<stdio.h>
int main(){
  int n;
  printf("Input Any Positive Integers:");
  scanf("%d", &n);

  while(n > 1){
    if(n % 2 == 0){ //for even numbers
      n = n / 2;
      printf("Current given value is:%d\n", n);
    }
    else{ //for odd numbers
      n = n * 3 + 1;
      printf("Current given value is:%d\n", n);
    }
  }
  return 0;
}