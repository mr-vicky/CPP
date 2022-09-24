#include<iostream> 
#include<string>    // including the 'string' library
using namespace std;
int main()
    {
        const double MY_PY = 3.31459; /* we use capitalised snake case
                                         OR capitalised underscore naming convension for constants  */
        int myTaxRate = 4; /*we use camel case Naming convension for
                             normal(other than 'constants') variables */ 
        // MY_PY = 34.23; // error: you cant assign to the variable that is 'const'

        const string MY_NAME = "Vicky";
        // MY_NAME = "Vicky"; // error: you cant change the constant value

        cout<<"MY_PY = "<<MY_PY;        
        return 0;
    }