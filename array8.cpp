#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
for(int i=1;i<n;i++){
    if(a[i]!=a[i-1]+1){
        cout<<a[i-1]+1;
        return 0;
    }
}
    cout<<a[n-1]+1;
}
