//Mishree Kalaria
//24070123052
//Batch: A2


#include<iostream>
using namespace std;


int sum(int n){
    if(n<=1){ 
        return 1;
    }
    else{
        return (n+sum(n-1)); 
    }
}

int main(){
    int a,M;
    cout<<"Enter a number: ";
    cin>>M;
    M=sum(a);
    cout<<a;
    return 0;  
}

//OUTPUT:
/*
Enter a number: 8
36
*/
