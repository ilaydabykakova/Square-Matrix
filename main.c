#include<stdio.h>
#include<string.h>
 
void check_magic_square(int limit);

// Driver program to test above function
int main()
{
	
 int num;
 
 printf("\nEnter A Number:\t");
 
 scanf("%d", &num);
 
 check_magic_square(num);
 
     return 0;
}
 // A function to generate sized magic squares
void check_magic_square(int limit)
{
 int num, sum, i, j;
 int matrix[limit][limit];// = {{2,7,6},{9,5,1},{8,1,6}};
      // set all slots as 0
     memset(matrix, 0, sizeof(matrix));
     j = limit - 1;
     i = limit / 2;
     // Loop to start placing numbers in the magic square
     for(num = 1; num <= limit * limit;)
     {
         if((i == -1) && (j == limit))//3rd condition
           
		   {
             j = limit - 2;
             
             i = 0;
             
                  }
         
         else
         { 
		 //1st condition helper if next number goes to out of square's right side
             if(j == limit)
                 {
                 	
                 j = 0;
                 
                  }
        //1st condition helper if next number is goes to out of square's upper side          
             if(i < 0)
                 {
               
			    i = limit - 1;
			    
                 }
         }
         if(matrix[i][j]) //2nd condition
         {
             j = j - 2;
             i++;
             continue;
         }
         else     //set number
             {
             	
        matrix[i][j] = num++;
        
                 }
         j++;  
         i--;
     }
     
      sum = (limit * (limit * limit + 1)) / 2;
      
     printf("\nSum of Each Row:\t%d\n", sum);
     printf("\nSum of Each Column:\t%d\n", sum);
     // print magic square
     printf("\nSquare Matrix\n");
     
     
     for(i = 0; i < limit; i++)
     {
         for(j = 0; j < limit; j++)
             {
       printf("%d\t", matrix[i][j]);
                      }
                      
         printf("\n");
 }
}
