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
    
    cout<<sum(8); 
    
}

//OUTPUT:
/*
36
*/
