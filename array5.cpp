#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++){
cin>>a[i];
}
int target;
cin>>target;
int freq=0;
for(int i=0;i<n;i++){
    if(a[i]==target){
        freq++;
    }
}
cout<<freq;

}
