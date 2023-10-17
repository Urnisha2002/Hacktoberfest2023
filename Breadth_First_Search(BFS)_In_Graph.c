//BFS traversal
#include<stdio.h>
int q[10],f=0,r=-1;
void insert(int item)
{
	q[++r]=item;
}
int del()
{
	return q[f++];
}
void bfs(int a[][10],int n,int s)
{
	//a[][] ->Adjacency matrix
	//n->no of vertex
	//s->starting vertex
	int v[n]={0},d,i;
	insert(s);
	v[s]=1;
	while(f<=r)
	{
		d=del();
		printf("\t%d",d);//3
		for(i=0;i<n;i++)
		{
			if(a[d][i]==1 && v[i]==0)
			{
				insert(i);
				v[i]=1;
			}
		}
	}
}
int main()
{
	int a[10][10],n,i,j,s;
	printf("\nEnter no of vertex: ");
	scanf("%d",&n);
	printf("\nEnter adjacency matrix: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter starting vertex: ");
	scanf("%d",&s);
	bfs(a,n,s);
}
