#include <iostream>
using namespace std;

//********************
// Declare Function Prototypes
//********************
void getAmounts(int& begin, int& end);
int getNextPrime(int begin);
int getPrevPrime(int end);
bool isPrime(int n);


// ******************************
// Implement all your functions here
// ******************************

void getAmounts(int& begin, int& end){
    do{
        cout << "Two integers (begin <<< end): ";
        cin >> begin >> end;
    } while (begin >= end);
}

bool isPrime(int n){
    if(n <= 1) return false;
    for (int i = 2; i*i <=n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int getNextPrime(int begin){
    int current = begin +1;
    while(true){
        if(isPrime(current)) return current;
        current++;
    }
}

int getPrevPrime(int end){
    for(int current = end - 1; current >= 2; current--){
        if(isPrime(current)) return current;
    }

    return -1;
}
