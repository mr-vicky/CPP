/*
    Arithmetic Operators-->
    +   Addition operator
    -   Substraction operator
    *   Multiplication operator
    /   Division operator
    %   Modulus operator
*/
#include<iostream>
using namespace std;

int main()
    {
       int a = 10;
       int b = 3;
        
    //    cout<<"Enter the value of a and b: "<<endl;
    //    cin>>a;
    //    cin>>b;

       // ---- Arithmetic Operators ---->
       int sum = a + b;
                             // here 'a' and 'b' are 'operands'
                             // + is the operators
       int difference = a - b;
       int product = a * b;
       int quetient = a/b;
       int remainder = a%b;
       int result = 10;
       int myInt = 5;

       //----- Compound Operators -----> 
       result +=10; // OR result = result + 10;
       result *=4;  // OR result = result * 4; 


       cout<<"sum = "<<a<<" +  "<<b<<" = "<<sum<<endl;
       cout<<"difference = "<<a<<" -  "<<b<<" = "<<difference<<endl;
       cout<<"product = "<<a<<" *  "<<b<<" = "<<product<<endl;
       cout<<"quetient = "<<a<<" /  "<<b<<" = "<<quetient<<endl;
       cout<<"remainder = "<<a<<" %  "<<b<<" = "<<remainder<<endl;
       cout<<"result = "<<result<<endl;

       // ---- Increament and Decreament operator---->
       cout<<"myInt = "<<myInt<<endl;

       myInt++; // OR ++myInt; OR myInt +=1; OR myInt= myInt + 1;
       // here the myInt will be increased by 1
       cout<<"myInt after increament = "<<myInt<<endl;
       
       myInt--; // OR --myInt OR myInt -=1; OR myInt = myInt - 1;  
       // here the myInt will be decreased by 1
       cout<<"myInt after decreament = "<<myInt<<endl;

       return 0;
    }  