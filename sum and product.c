#include<stdio.h>
 
int main() {
   int a[10][10], b[10][10], c[10][10], row,column, k;
   int sum = 0;
 
   printf("\nEnter First Matrix :  \n");
   for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) {
         scanf("%d", &a[row][column]);
      }
   }
 
   printf("\nEnter Second Matrix: \n");
   for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) {
         scanf("%d", &b[row][column]);
      }
   }
 
   printf("The First Matrix is: \n");
   for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) {
         printf(" %d ", a[row][column]);
      }
      printf("\n");
   }
 
   printf("The Second Matrix is : \n");
   for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) {
         printf(" %d ", b[row][column]);
      }
      printf("\n");
   }
   printf("sum of matrices is\n");
   for(row=0; row<3; row++)
   {
   	for(column=0; column<3; column++)
   	{
   		c[row][column]=a[row][column]+b[row][column];
   		printf("%d",c[row][column]);
   		
	   }
   }
 
   //Multiplication Logic
   for (row = 0; row <= 2; row++) {
      for (column = 0; column <= 2; column++) {
         sum = 0;
         for (k = 0; k <= 2; k++) {
            sum = sum + a[row][k] * b[k][column];
            
         }
         c[row][column] = sum;
        
      }
   }
   
   
 
   printf("\nMultiplication Of Two Matrices : \n");
   for (row = 0; row < 3; row++) {
      for (column = 0; column < 3; column++) {
         printf(" %d ", c[row][column]);
      }
      printf("\n");
   }
 
   return (0);
}
