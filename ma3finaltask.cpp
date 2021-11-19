#include<stdio.h>
int main(){
int choices, price, payment, change;
    printf("Please pick you favorite order");
    printf("\n[1]Coca-cola (18.00) \n[2] Super crunch (10.00) \n[3] Royal (18.00) [4]hansel (8.00)\nChoice:");
    scanf("%d", &choices);
    switch (choices){
    
    case 1:
    price = 18;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Success! Enjoy your Pepsi Sir/Ma'am.\n");
    change = payment-price;  
    printf("\nChange: %d\n", change);  
}
else{ 
    printf("Not enough Funds");
}
    break;
    
    case 2:
    price = 10;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Succes! Enjoy your DrPepper Sir/Ma'am.\n");
    change = payment-price;  
    printf("\nChange: %d\n", change);
}
else{ 

    printf("Not enough Funds");
}
     break;
   
    
     case 3:
    price = 18;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Success! Enjoy your Cocacola Sir/Ma'am.\n");
    change = payment-price;  
    printf("\nChange: %d\n", change);
}
else {
  printf("Not enough Funds");
}
  break;
  
  
  case 4:
    price = 8;
    printf("Please Input payment:");
    scanf("%d", &payment);
    if(payment>=price){
    printf("Success! Enjoy your Cocacola Sir/Ma'am.\n");
    change = payment-price;  
    printf("\nChange: %d\n", change);
}
else {
  printf("Not enough Funds");
}
  break;
   default:
   printf("Purchase unavailable");
}
return 0;
}