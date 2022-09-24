#include<iostream>
using namespace std;

/*------------ Relational operators ---------->
    >   Greater than
    >=  Greater than equal to 
    <   Less than
    <=  Less than equal to 
    ==  equal-to (equality)
    !=  not-equal-to (equality)
*/

int main()
    {
        cout<<boolalpha;
        int a = 10;
        int b = 15;
        
        bool c = (a!=b);
        bool areEqual = c;

        int myAge = 19;

        cout<<(a < b)<<endl;
        cout<<areEqual<<endl;
        cout<<"Age >= 21 ? :==> "<<(myAge>=21)<<endl;
        return 0;
    }