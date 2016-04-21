#include <stdio.h>
#include <stdlib.h>

int min (int x, int y)
{
     if (x < y)
        {
               return x;
               }
     else
         {
               return y;
               }
               
               }
               
                    
int main()
{
    
    int m1[10][10],i,j,k,m2[10][10],mult[10][10],r1,c1,r2,c2, i_0 =0, k_0 =0, j_0 = 0, b=2, step = 0;

    printf("===========================================================\n");
    printf("MULTI-CORE CACHE OPTIMIZATION USING CACE BLOCKIG TECHNIQUE\n");
    printf("=============================================================\n");
     
    printf("Enter number of rows and columns of first matrix (less than 10)\n");
    scanf("%d%d",&r1,&c1);
    
    printf("Enter number of rows and columns of second matrix (less than 10)\n");
    scanf("%d%d",&r2,&c2);

    if(r2==c1)
    {
        printf("Enter rows and columns of First matrix \n");
        printf("Row wise\n");
        for(i=0;i<r1;i++)
            for(j=0;j<c1;j++)
                scanf("%d",&m1[i][j]);

        printf("First Matrix is :\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                printf("%d\t",m1[i][j]);
            printf("\n");
        }

        printf("Enter rows and columns of Second matrix \n");
        printf("Row wise\n");
        for(i=0;i<r2;i++)
            for(j=0;j<c2;j++)
                scanf("%d",&m2[i][j]);

        printf("Second Matrix is:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
                printf("%d\t",m2[i][j]);
            printf("\n");
        }




for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                mult[i][j] = 0;
                }
                }
                
                
				 
        printf("Multiplication of the Matrices:\n");

        for(i_0=0;i_0<r1;i_0+b)
        {
            for(j_0=0;j_0<c2;j_0+b)
            {
                
                for(k_0=0;k_0<r1;k_0+b)
                {
                                    step = min((i_0 + b), r1); 
                                    for(i=i_0; i<step; i++)
                                    {
                                               step = min((j_0 + b), c2);
                                               for (j=j_0; j<step; j++)
                                               {
                                                   step = min((k_0 + b), r1); 
                                                   
                                                   for(k=k_0; k<step; k++)
                                                   {
                                                              
                                                              mult[i][j]+=m1[i][k]*m2[k][j];
                                                              
                                                              }
                                                              }
                                                              }
                                                              }
            }
        }
    
    
    
    for(i=0; i< r1; i++)
    {
             for(j=0; j< c2; j++)
             {
                      printf("%d\t",mult[i][j]);    
            }
            
            printf("\n");
}

}
    else
    {
        printf("Matrix multiplication cannot be done");
    }
    
    getch();    

}
