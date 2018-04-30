#include <iostream>
#include<string>

#include <cstdlib>
using namespace std;

int main(){
    double x= 120;
    double charge=0.50;
    int n;
    double bal=x;

    cout << "Please enter the amount that you want to withdraw. (Multiple of 5)"<<endl;
    cin >> n;

    if (n<121){
        if (n%5==0){
            bal=x-n-charge;
            cout << "The balance is RM" << bal;
        }
        else{
            cout << "Please enter a value that is multiple of 5 "<<endl;
            cout << "The balance is RM" << bal;
        }
    }
    else
    cout<< "Insufficient balance." <<endl<<"The balance is RM" << bal;
}