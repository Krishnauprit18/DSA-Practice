#include<iostream>
using namespace std;

int main(){
int a[5],i,num,flag,pos;
cout<<"Enter the elements in the array";
for(i=0;i<5;i++){
cin>>a[i];
}
cout<<"The array is:"<<endl;
for(i=0;i<5;i++){
    cout<<a[i]<<endl;
}
cout<<"Enter the number to search"<<endl;
cin>>num;

cout<<"The number you want to search is"<<num<<endl;

for(i=0;i<5;i++){
 if(a[i]==num){
    flag=1;
    pos=i+1;
    break;
 }
}

if(flag==1){
    cout<<"Number Found at position: "<<endl;
        cout<<pos;
}
else{
    cout<<"Number not found"<<endl;
}
return 0;
}
