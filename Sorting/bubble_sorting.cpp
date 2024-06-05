#include<iostream>
using namespace std;
int main(){
    int n,i,j,a[20],k;
    cout<<"Enter the no. of element:";
    cin>>n;
       cout<<"\n"<<"Enter the element";
    for(i=0;i<n;i++){
        cin>>a[i];
    }
        for(i=0;i<n;i++){
            for(j=0;j<i;j++){
                if(a[j]>a[i]){
                    k=a[i];
                    a[i]=a[j];
                    a[j]=k;
                }
            }
        }
        cout<<"sorted array is:\n";
        for(i=0;i<n;i++){
            cout<<a[i]<<"\t";
        }
    return 0;
}