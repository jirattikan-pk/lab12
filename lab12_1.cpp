#include<iostream>
using namespace std;

int fibonacci(int x);

int main(){
    int x;
    cin >> x;
    cout << fibonacci(x);
    return 0; 
}

int fibonacci(int x){
    int y=0;
    if(x<0) return y;
    else if(x==0) return 0;
    else if (x==1) return 1;
    else {
        y = fibonacci(x-1) + fibonacci(x-2);
        return y;
    }
    
}
