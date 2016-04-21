#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include <math.h>


void print_elapsed_time()
{
        double elapsed ;
        double resolution ;

        // Obtain and display elapsed execution time
        elapsed = (double) clock() / CLK_TCK ;
        resolution = 1.0 / CLK_TCK ;

        printf("Elapsed time: %8.4f sec (%6.4f sec resolution)\n", elapsed, resolution) ;
}



int main()
{
    
    int i,j,k,mult[10][10],r1,c1,r2,c2, b[10],c[10];

    printf("===========================================================\n");
    printf("NAIVE MATRIX MULTIPLICATION\n");
    printf("=============================================================\n");
     
    /*printf("Enter number of rows and columns of first matrix (less than 10)\n");
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

      */
       r1=r2=c1=c2=2;
       int m1[2][2]={1,1,1,1};
       int m2[2][2]={2,2,2,2};

       printf("First Matrix is :\n");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
                printf("%d\t",m1[i][j]);
            printf("\n");
        }


      /*  printf("Enter rows and columns of Second matrix \n");
        printf("Row wise\n");
        for(i=0;i<r2;i++)
            for(j=0;j<c2;j++)
                scanf("%d",&m2[i][j]);

       */

        printf("Second Matrix is:\n");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
                printf("%d\t",m2[i][j]);
            printf("\n");
        }

        printf("Multiplication of the Matrices:\n");

        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                mult[i][j]=0;
                for(k=0;k<r1;k++)
                {
                    mult[i][j]+=m1[i][k]*m2[k][j];
                    for(int t=0;t<30000;t++)
        {
                          printf("");
                          }
                          }
                printf("%d\t",mult[i][j]);
            }
            printf("\n");
        }
    
    
    

      print_elapsed_time();
                
    getch();    

}
