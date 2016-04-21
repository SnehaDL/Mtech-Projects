#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],i,j,k,n,deg[100]; 
    printf("===================================================================\n");
    printf("IMAGE SEGMENTATION USING EULER GRAPHS IMPLEMENTATION-- BY SNEHA\n");
    printf("===================================================================\n");
    printf("1: Check if grapgh is eulerian\n 2: Input the grid graph\n 3: Perform segmentation\n");
    printf("===================================================================\n");
    
    printf("Phase 1:::::::::::::::::::::::::::::::::::::::::\n");
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
    int flag = 0;
    for(i=0;i<n;i++)                            
    {
     if(deg[i]%2 != 0)                               //vertex with odd degree found
	    {
                 printf("graph is not Eulerian, need segmentation\n");
                 flag = 1;
                 }
	    
        }
     
     if (flag == 0)
     {
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
}

else {
     printf("Phase 2:::::::::::::::::::::::::::::::::::::::::\n");
     int g, grid[10][10], mark[10][10];
     printf("Representing the graph as a grid\n");
     printf("Enter the size of the grid\n");
     
     scanf("%d", &g);
     
     printf("Enter the grid graph in terms of values\n");
     for(i=0;i<g;i++)
     {
                     for(j=0;j<g;j++)
                     {
                                     scanf("%d",&grid[i][j]);
                                     }
                                     }
     
     
     for(i=0;i<g;i++)
     {
                     for(j=0;j<g;j++)
                     {
                                     mark[i][j] = grid[i][j];
                                     }
                                     }
     for(i=0;i<g;i++)
     {
                     for(j=0;j<g;j++)
                     {
                                     if(mark[i][j]%2 != 0)
                                     {
                                                    mark[i][j]=0; //an odd degree vertex is marked=1
                                                     }
                                     else
                                     {
                                     mark[i][j]=1; //an even degree vertex is marked=0
                                     
                                     }
                                                                    }
                                     }
     
     printf("The Marked graph is:: 1 for visited and 0 for unvisited is::\n");
     for(i=0;i<g;i++)
     {
                     for(j=0;j<g;j++)
                     {
                                     printf("%d\t\t",mark[i][j]);
                                     }
                                     printf("\n");
                                     }
     
     
     
     printf("Phase 3::::::::::::::::::::::::::::::::::::::::\n");
     int chk = 0;
     for(i=0;i<g;i++)
     {
                     for(j=0;j<g;j++)
                     {
                                     if(mark[i][j]==0)
                                     {
                                                        mark[i][j] = 1;
                                                        grid[i][j]++;
                                                            
                                                   if(chk == 0)  
                                                     {
                                                            chk = 1;
                                                            printf("An edge added from %d%d to ===>", i,j);
                                                            }
                                                   else if (chk == i)  
                                                     {
                                                            chk = 0;
                                                            printf("An edge added from %d%d to ===>", i,j);
                                                            }
                                                            }
                                     }
                                     printf("\n");
                                     }
     
     
     printf("The Marked graph after segmentation\n");
     for(i=0;i<g;i++)
     {
                     for(j=0;j<g;j++)
                     {
                                     printf("%d\t\t",mark[i][j]);
                                     }
                                     printf("\n");
                                     }
     
     
     printf("The graph is succesfully segemnted!!\n");
     printf("Following is the grid graph after segmentation\n");
     for(i=0;i<g;i++)
     {
                     for(j=0;j<g;j++)
                     {
                                     printf("%d\t\t",grid[i][j]);
                                     }
                                     printf("\n");
                                     }
     }
        getch();
}
