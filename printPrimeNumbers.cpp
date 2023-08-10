#include <iostream>
bool isPrime(int num){
    if(num<=1)
    return false;
    for(int i=2; i*i<=num;i++){
        if(num%i==0)
        return false;
    }
    return true;
    }
int main(){
    int count=0;
    for(int num=2;count<10;num++){
        if(isPrime(num)){
            std::cout<<num<<std::endl;
            count++;
        }
    }
    return 0;
}
