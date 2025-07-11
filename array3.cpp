#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cin>>a[i];
}
int max=a[0];
for(int i=1;i<n;i++){
 if(a[i]>max){
    max=a[i];
 }
}
int s_max=a[0];
for(int i=1;i<n;i++){
    if(a[i]>s_max && a[i]<max){
        s_max=a[i];
    }
}
if(max==s_max){
    cout<<"-1";
}else{
cout<<s_max;
}
}
