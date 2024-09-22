#include<stdio.h>
/*
Arrays -> collection of similar data types stored at contiguous memory locations
-C language have 0-based indexing

*/
 int main(){
    // int marks1 = 97;
    // int marks = 98;
    // int marks = 89;

   // int marks[]= {97,98,89}; //arrays example
   int marks[3];
   printf("enter phy : ");
   scanf("%d", &marks[0]);

   printf("enter che : ");
   scanf("%d", &marks[1]);

   printf("enter math : ");
   scanf("%d", &marks[2]);

  /*printf("enter math : ");
   scanf("%d", &marks[3]);//getting error after compling then it is rumtime error */
   
printf("phy = %d,che = %d,math = %d\n", marks[0], marks[1], marks[2]);

   return 0;
 }