#include<iostream>
#include<iomanip>  // 'iomanip' is a library that is used to manipulate the output of C++ program.
using namespace std;
/* operators------>
    1. Unary operators: Requires 1(single) operand, 
       Ex: ++,--,!,etc.
    2. Binary operators: Requires 2(two) operands, 
       Ex: +,-,*,/,%,
    3. Conditional/Ternary Operators: requires 3(three) operands
*/
int main()
    {
        bool isRaining = false;
        bool isWarm = true;

        cout<<boolalpha;
        cout<<"AND: "<<(isRaining && isWarm)<<endl; // 'Logical AND': &&  ('&': ampersand sign)
        cout<<"OR: "<<(isWarm || isRaining)<<endl;  // 'LOgical OR': ||  ('|': Vertical bar)
        cout<<"NOT: "<<(!isRaining)<<endl;
         
        return 0;
    }