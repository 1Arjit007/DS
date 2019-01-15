#define row 3
#define col 4
#include<stdio.h>
void main()
{
  int i,j,mat1[row][col],mat2[row][col],mat3[row][col];
  printf("Enter matrix mat1(%dx%d)row-wise :\n",row,col);
  for(i=0;i<row;i++)
     for(j=0;j<col;j++)
           scanf("%d",&mat1[i][j]);
   printf("Enter matrix mat2(%dx%d)r0w-wise :\n",row,col);
   for(i=0;i<row;i++)
     for(j=0;j<col;j++)
           scanf("%d",&mat2[i][j]);
    /*Addition*/
    for(i=0;i<row;i++)
       for(j=0j<col;j++)
          mat3[i][j]=mat1[i][j] + mat2[i][j];
    printf("The resultant matrix mat3 is :\n");
    for(i=0;i<row;i++)
    {
      for(j=0;j<col;j++)
          printf("%d',mat3[i][j]);
          printf("\n");
     }
  }
