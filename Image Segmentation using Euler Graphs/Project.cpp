#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],i,j,k,n,deg[100]; 
    printf("Enter the number of vertices\n");
    scanf("%d", &n);
    
    printf("Enter the adjacency matrix\n");
    
    for(i=0;i<n;i++)
    {
	    for(j=0;j<n;j++)
	    {
		    scanf("%d", &a[i][j]);
	    }
    }    
    
    
    
    printf("the adjacency matrix for the graph is\n");
    for(i=0;i<n;i++)
    {
	    for(j=0;j<n;j++)
	    {
		    printf("%4d",a[i][j]);                     //displaying adjacency matrix
	    }
	    printf("\n");
    }
    
    for(i=0;i<n;i++)
    {
                   deg[i] = 0;
                   }
    
    printf("calculating the degree\n");
    for(i=0;i<n;i++)
    {
                   for(j=0;j<n;j++)
                   {
                                   if(a[i][j] == 1)
                                   {
                                              deg[i] = deg[i] + 1;
                                              }
                                              
                                   }
                              printf("Vertex %d has degree %d\n", i+1, deg[i]);
                                   }
                                   
    printf("\n==========================================================================\n");
    printf("\n\nUsing the Euler theorem which states ==> A non-empty connected graph is Eulerian if and only if it has no vertices of odd degree.\n\n\n\n");  
    printf("\n==========================================================================\n");                         
    for(i=0;i<n;i++)                            
    {
     if(deg[i]%2 != 0)                               //if no. of vertex with odd degree is 2
	    {
                 printf("graph is not Eulerian, need segmentation\n");
                 getch();
                 }
	    
        }
        printf("Graph is eulerian doesnt need any segmentation\n");

        printf("\nthe adjacency matrix for the euler graph is\n");

    for(i=0;i<n;i++)
    {
	    for(j=0;j<n;j++)
	    {
		    printf("%4d",a[i][j]);                     //displaying adjacency matrix
	    }
	    printf("\n");
    }
        getch();
}
