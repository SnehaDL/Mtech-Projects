vTask:Given an undirected or a directed graph,find 
a path or circuit that passes through each edge 
exactly once.                                                           
 
What 's Euler Path and Euler Circuit in Graphs ?
 
First let's see the conditions for undirected graph: 
An undirected graph has an eulerian circuit if and 
only if it is connected and each vertex has an even
degree (degree is the number of edges that are adja-
-cent to that vertex). An undirected graph has an 
eulerian path if and only if it is connected and all
vertices except 2 have even degree. One of those 2 
vertices that have an odd degree must be the start 
vertex, and the other one must be the end vertex.
For a directed graph we have: 
A directed graph has an eulerian circuit if and only
if it is connected and each vertex has the same in- 
-degree as out-degree.A directed graph has an eulerian
path if and only if it is connected and each vertex 
except 2 have the same in-degree as out-degree, and 
one of those 2 vertices has out-degree with one greater
than in-degree(this is the start vertex), and the other
vertex has in-degree with one greater than out-degree  
(this is the end vertex).
 
 Algorithm for undirected graphs: 
Start with an empty stack and an empty circuit (eulerian path).
- If all vertices have even degree - choose any of them.
- If there are exactly 2 vertices having an odd degree - choose one of them.
- Otherwise no euler circuit or path exists.
If current vertex has no neighbors - add it to circuit, remove the last vertex from the stack and set it as the current one. Otherwise (in case it has neighbors) - add the vertex to the stack, take any of its neighbors, remove the edge between selected neighbor and that vertex, and set that neighbor as the current vertex.
Repeat step 2 until the current vertex has no more neighbors and the stack is empty.
Note that obtained circuit will be in reverse order-
from end vertex to start vertex.
 
Algorithm for Directed graphs: 
Start with an empty stack and an empty circuit (eulerian path).
- If all vertices have same out-degrees as in-degrees - choose any of them.
- If all but 2 vertices have same out-degree as in-degree, and one of those 2 vertices has out-degree with one greater than its in-degree, and the other has in-degree with one greater than its out-degree - then choose the vertex that has its out-degree with one greater than its in-degree.
- Otherwise no euler circuit or path exists.
If current vertex has no out-going edges (i.e. neighbors) - add it to circuit, remove the last vertex from the stack and set it as the current one. Otherwise (in case it has out-going edges, i.e. neighbors) - add the vertex to the stack, take any of its neighbors, remove the edge between that vertex and selected neighbor, and set that neighbor as the current vertex.
Repeat step 2 until the current vertex has no more out-going edges (neighbors) and the stack is empty.
Note that obtained circuit will be in reverse order
- from end vertex to start vertex.
 
Algorithm  To Find Euler Path For Un-Directed Graph:
 
Eular_path (G);  For Each Vertex v ϵ V (G)  
 
            Enter No. of Adjacent Vertex.  
 
        If (vertex % 2=1)  
 
                  Count++;  
 
If (count=2)  
 
            Print Graph contains Euler path.  
 
Else  
 
            Print Euler path doesn’t exist.
     
 
Description
 
Loop runs for each vertex of the graph. Takes input 
asa number of adjacent node of vertex for which loop
is running.
Count number of node which has odd number of adjacent.
If two vertices have odd number of adjacent then graph 
has Euler path Otherwise not.
 
 
 
Working Code For undirected graphs:
 
/*program to find whether a euler path exists in 
a graph or not*/
 
#include<stdio.h>
#include<conio.h>
int main()
{
    int a[10][10],i,j,k,n,ver, temp,count=0;
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
 printf("enter the no. of adjacent vertices of vertex
 %d\n",i+1);           
 //entering adjacent vertices
 scanf("%d",&ver);
 printf("enter vertices nos. which are adjacent to vertex
 %d\n",i+1);
        for(j=0;j<ver;j++)
        {
               scanf("%d",&temp);
               a[i][temp-1]=1;  
   
        if(ver%2==1)  //if degree is odd
            count++;
    }
    printf("the adjacency matrix for the graph is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {   //displaying adjacency matrix
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    if(count==2) //if no. of vertex with odd degree is 2
        printf("graph has a euler path\n");
    else
        printf("graph doesnt has a euler path\n");
}
 
Complexity :
The complexity of both algorithms is O(N+M), where 
N is the number of vertices and M is the number of
edges.
 
Further Tasks: Implement The Same For Directed Graph.
 
Applications:
 
A postman has to visit a set of streets in order to 
delivermails and packages.It is needed to find a path
that starts and ends at the post-office, and that 
passes through each street (edge) exactly once. This 
way the postman will deliver mails and packages to 
all streets he has to, and in the same time will 
spend minimum efforts/time for the road.
