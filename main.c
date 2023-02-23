#include<stdio.h>
#include <stdlib.h>
#include <math.h>
#define N 100

int encrypt(int num)
{
   int i,x[4];
   for (i=0;i<4;i++)
   {
      x[i]=((num+7)%10);
      num=num/10;
   }
    return x[2]+(10*x[3])+(100*x[0])+(1000*x[1]);
}

int decrypt(int num2)
{
   int i,x[4];
   for (i=0;i<4;i++)
   {
      x[i]=((num2+13)%10);
      num2=num2/10;
   }
    return x[2]+(10*x[3])+(100*x[0])+(1000*x[1]);
}

int printEncryption(){
    while(1){
    printf("Enter a four-digit number to be encrypted: ");
    int number;
    scanf("%d",&number);
    if ((1 + (int)log10(number))==4){
      printf("Encrypted number is %d\n", encrypt(number));
      return 0;
    }
    else if (number == 0000){
        printf("\nPROGRAM TERMINATED\n");
       exit(1);
    }
    else{
      printf("WRONG ENTRY.\n");
    }
    }
}

int printDecryption(){
    while(1){
    
    printf("Enter a four-digit encrypted number: ");
    int number2;
    scanf("%d",&number2);
    if ((1 + (int)log10(number2))==4){
      printf("Decrypted number is %d\n", decrypt(number2));
      return 0;
    }
    else if (number2 == 0000){
        printf("\nPROGRAM TERMINATED\n");
        exit(1);
    }
    else{
      printf("WRONG ENTRY.\n");
    }
    }
}

int main(){
    printf("Welcome to Encryption & Decryption Program!\n");
    printf("*******************************************\n\n");
    while(1){
    printEncryption();
    printDecryption(); 
    printf("\nEnter 0000 anytime to stop. To continue,\n");
    }
    return 0;
}

