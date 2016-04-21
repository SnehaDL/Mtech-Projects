#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
int main()
{
    int a[10][10],i,j,k,n,ver, temp,count=0; 
    printf("for a directed graph\n");
    printf("enter the no. of vertices\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
	    for(j=0;j<n;j++)
	    {
		    a[i][j]=0;
	    }
    }
    
    
    for(i=0;i<n;i++)
    {
	    printf("enter the no. of adjacent vertices of vertex %d\n",i+1);     //entering adjacent vertices
	    scanf("%d",&ver);
	    printf("enter vertices nos. which are adjacent to vertex %d\n",i+1);
	    for(j=0;j<ver;j++)
	    {
		       scanf("%d",&temp);
		       a[i][temp-1]=1;                                                  //entering values in adjacency matrix
	    }
	    if(ver%2==1)                                  //if degree is odd
		    count++;
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
    
    if(count==2)                               //if no. of vertex with odd degree is 2
	    printf("graph has a euler path\n");
    else
	    printf("graph doesnt has a euler path\n");
	    
	    
	    getch();
    
        }
