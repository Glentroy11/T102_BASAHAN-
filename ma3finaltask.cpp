#include<stdio.h>
int main(){
int choices, price, payment, change;
    printf("Select your order");
    printf("\n[1]Pepsi(P100) \n[2]Dr.Pepper(P120) \n[3]Coca-cola(P95)\nChoice:");
    scanf("%d", &choices);
    switch (choices){
    
    case 1:
    price = 100;
    printf("Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("You have purchase Pepsi.\n");
    change = payment-price;  
    printf("\nChange: %d\n", change);  
}
else{ 
    printf("You dont have enough Funds.");
}
    break;
    
    case 2:
    price = 120;
    printf("Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("You have purchase Dr.Pepper.\n");
    change = payment-price;  
    printf("\nChange: %d\n", change);
}
else{ 

    printf("You dont have enough Funds.");
}
     break;
   
    

  case 3:
    price = 95;
    printf("Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("You have purchase Coca-cola.\n");
    change = payment-price;  
    printf("\nChange: %d\n", change);
}
else {
  printf("You dont have enough Funds.");
}
  break;
   default:
   printf("Invalid Input");
}
return 0;
}
