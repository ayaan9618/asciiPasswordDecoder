//this is password decoder
//reverse string password into actual password

#include <stdio.h>
 
int main(void) {
 
 int respass[8];
 char pass[8];
 int k =7;

 // user inputing reverse ascii
 for (int i = 0; i < 8; i++)
 {
   printf("Enter Number: ");
    scanf("%d", &respass[i]);
 }


 // conerting ascii into char and revering it 
 for (int j = 0; j < 8; j++)
 {
    pass[k]=(char)respass[j];
    k--;
 }
 
 // printing the password
 printf("the correct password is\n");

 for (int p = 0; p < 8; p++)
 {
   printf("%c",pass[p]); 
 }
 
   
}
