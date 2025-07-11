#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
int freq[n];
for(int i=0;i<n;i++){
    cin>>a[i];
    freq[i]=0;
}
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(freq[j]==0 && a[i]==a[j]){
            freq[j]=1;

        }
    }
}
for(int i=0;i<n;i++){
    if(freq[i]==0){
        cout<<a[i]<<" ";
    }
}

}
