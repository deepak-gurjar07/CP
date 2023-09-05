#include <iostream>
using namespace std;

bool isPelendrome(int n){
    if (n<0 || (n%10==0 && n!=0))
        return false;
    int reversedNum =0;
    while (n> reversedNum)
    {
        int pop = n%10;
        reversedNum =reversedNum*10 + pop;
        n=n/10;
    }
    return (n==reversedNum || n==reversedNum/10);  
}

int main(){
    cout<<"This program will check if the given number is pelendrom or not, if the number is pelendrome it will return true/1 else it will return false/0"<<endl;
    cout<<"-----------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
    int num;
    cout<<"Enter the number you want to check for pelendrome: ";
    cin>>num;
    bool result =isPelendrome(num);
    cout<<result;
    return 0;
}