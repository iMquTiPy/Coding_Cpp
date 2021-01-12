#include <iostream>
#include<queue>
using namespace std;
bool helper( int adj [][1000], int V)
{ 
    bool visited[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    //vector<bool> visited(V,false);
    queue<int>q;
    q.push(0);
    visited[0]=true;
    while(!q.empty())
    {
        int curr=q.front();
        q.pop();
        for(int i=0;i<V;i++)
        {
            if(visited[i]==false and adj[curr][i]==1)
            {
                q.push(i);
                visited[i]=true;
                
            }
            
            
        }
    }  
    if(q.empty())
       {for(int i =0;i<V;i++)
        {
            if(visited[i]==false)
                return false;
        }
       }
    
        return true;
        
    }
    
    

int main() {
    int V, E;
    cin >> V >> E;

    int adj[1000][1000];
    for(int i=0;i<V;i++)
    {
        for(int j=0;j<V;j++)
        {
            adj[i][j]=0;
        }
    }
    for(int i=0;i<E;i++)
    {
        int a,b;
        cin>>a>>b;
        adj[a][b]=1;
        adj[b][a]=1;

    }
  bool ans=helper(adj,V);
    if(ans==false)
 cout<<"false";
    else
        cout<<"true";
}
