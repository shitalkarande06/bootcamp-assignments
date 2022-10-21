#include<iostream>
using namespace std;

int main(){

    // initialize two numbers.
    int x, y ;
    
    cout << "enter two no : " << endl;
    cin>> x >> y;

    //condition to check whether numbers are equal or not.  
    if(x == y){
        cout<< "Numbers are equal "<< endl;
    }else{
        cout<< "Numbers are not equal ";
    }
  
    return 0;
}
