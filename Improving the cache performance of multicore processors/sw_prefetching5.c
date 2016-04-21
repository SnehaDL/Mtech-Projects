#include <stdio.h>
#include <stdlib.h>


void main()
{   
    int m1[10][10],i,j,k,m2[10][10],mult[10][10],r1,c1,r2,c2, b[10],c[10];
    
    printf("===========================================================\n");
    printf("MULTI-CORE CACHE OPTIMIZATION USING SOFTWARE-PREFETCHING TECHNIQUE\n");
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

        printf("Multiplication of the Matrices:\n");

     
        int m1_00 = m1[0][0] , m1_01 = m1[0][1] , m1_10 =  m1[1][0] ,  m1_11 = m1[1][1] ,  m2_00 = m2[0][0] ,  m2_01 = m2[0][1] ,  m2_10 = m2[1][0] ,  m2_11 = m2[1][1]; 
       
        mult[0][0]= m1_00*m2_00 + m1_01*m2_10;
        mult[0][1]= m1_00*m2_01 + m1_01*m2_11;
        mult[1][0]= m1_10*m2_00 + m1_11*m2_10;
        mult[1][1]= m1_10*m2_01 + m1_11*m2_11;
        

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
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
