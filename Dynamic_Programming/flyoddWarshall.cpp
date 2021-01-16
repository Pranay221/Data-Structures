#include "bits/stdc++.h"
using namespace std;
#define INF 99999


void floydwar(int graph[][10], int v)
{
  int dist[v][v];
  for(int i=0;i<v;i++) for(int j=0;j<v;j++) dist[i][j]=graph[i][j];
  for(int k=0;k<v;k++)
  {
    for(int i=0;i<v;i++)
    {
      for(int j=0;j<v;j++)
      {
        if(dist[i][j]>dist[i][k]+dist[k][j]) dist[i][j]=dist[i][k]+dist[k][j];
      }
    }
  }
  cout<<endl<<"The following matrix shows the shortest distance between every pairs of vertices: "<<endl;
  for(int i=0;i<v;i++)
  {
    for(int j=0;j<v;j++)
    {
      if(dist[i][j]==INF) cout<<"INF"<<" ";
      else cout<<dist[i][j]<<" ";
    }
    cout<<endl;
  }

}



int main(int argc, char const *argv[])
{
  int v;
  cout<<"Enter the number of vertices: ";
  cin>>v;
  int graph[10][10];
  cout<<endl<<"Enter the weighted graph: ";
  for(int i=0;i<v;i++) for(int j=0;j<v;j++) cin>>graph[i][j];
  cout<<endl;
  floydwar(graph,v);
  return 0;

  //floydwar(graph,v);
}
