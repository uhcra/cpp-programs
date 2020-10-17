#include <iostream>

using namespace std;

int main()
{
    int j,fact=1,num;    
    cout<<"Enter the number whose Factorial to be calculated: ";    
    cin>>num;    
    for( j=1; j<=num; j++){
        fact = fact * j ;    
    }
    cout<<"\nFactorial of " <<num<<" is: "<<fact<<"."<<endl;  

    return 0;
}