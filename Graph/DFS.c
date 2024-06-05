#include<stdio.h>
#include<stdbool.h>
# define n 10
int adj[n][n];
bool visited[n];

void adj_mat(){
    int i,source,dest,edge=n*(n-1);
    for(i=0;i<edge;i++){
        printf("Enter the source and destination(%d %d)",i,i);
        scanf("%d %d",&source,&dest);
        if(source==0 && dest==0){
            break;
        }
        if(source<=0 ||dest<=0 || source>n || dest>n){
            printf("Invalid node\n");
            i--;
            continue;
        }
        adj[source][dest]=1;
    }
}

void DFS(int node){
    printf("%d\t",node);
    for(int i=0;i<n;i++){
        if(adj[node][i]==1 && visited[i]==false){
        visited[i]=true;
        DFS(i);
        }
    }
}

int main(){
     adj_mat();
    for(int i=0;i<n;i++)
        visited[i]=false;
    int start;
    printf("Ener the start node");
    scanf("%d",&start);
    DFS(start);
}
