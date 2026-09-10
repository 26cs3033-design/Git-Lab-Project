#include<stdio.h>

int main(){
    int a,b,choice;

    printf("Enter first number:");
    scanf("%d",&a);
   printf("Enter second number:");
   scanf("%d",&b);
   printf("add\n");
   printf("sub\n");
   printf("mul\n");
   printf("div\n");

   printf("Enter your choice:");
   scanf("%d",&choice);

   if (choice==1)
   printf("Result=%d\n",a+b);
   else if(choice==2)
   printf("Result=%d\n",a-b);
else if(choice==4){
    if(b!=0)
    printf("Cannot divide by zero.\n");
}
  else
  printf("Invalid choice.\n");
   return 0;
}