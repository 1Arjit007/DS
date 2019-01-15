#define row 3
#define col 4
#include<stdio.h>
void main()
{
  int mat[row][col],i,j;
  printf("Enter the elements of the matrix(%dx%d) row-wise :\n",row,col);
  for(i=0;i<row;i++)
     for(j=0;j<col;j++)
           scanf("%d",&mat[i][j]);
           
   printf("The matrix that you have enetred is:\n");
   for(i=0;i<row;i++)
     {
       for(j=0;j<col;j++)
             printf("%d",mat[i][j]);
        printf("\n");
      }
      printf("\n");
   }
