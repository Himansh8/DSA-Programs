#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define n 10
int adj[n][n];
bool visited[n];

void adj_mat(){
    int i,sor,dest,edge=n*(n-1);
    for(i=0;i<edge;i++){
        printf("Enter the source and destination (%d %d)",i,i);
        scanf("%d %d",&sor,&dest);
        if(sor==0 && dest==0)
            break;
        if(sor>n || dest>n ||sor<=0 ||dest<=0){
            printf("invalid node");
            i--;
            continue;
        }
        adj[sor][dest]=1;
    }
}

void BFS(){
    int i,que[n],front=-1,rear=-1,start,u;
    for(i=0;i<n;i++)
        visited[i]=false;
    printf("Enter the start node");
    scanf("%d",&start);
    printf("%d\t",start);
    rear++;
    front++;
    que[front]=start;
    for(i=0;i<n;i++){
        u=que[rear];
        while(adj[u][i]==1 && visited[i]==false){
            printf("%d\t",i);
            visited[i]=true;
            que[++rear]=i;
        }
    }
}

int main(){
    adj_mat();
    BFS();
}
