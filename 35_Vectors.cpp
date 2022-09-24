#include<iostream>
#include<vector>
#include<string>
using namespace std;


int main()
{
    vector<int>someVec;
    vector<string>anotherVec(3);

    // push_back(): is member function or method to add elements at the end of the vector
    someVec.push_back(1);
    someVec.push_back(2);
    someVec.push_back(3);
    someVec.push_back(4);
    
    cout<<"someVec size: "<<someVec.size()<<endl;

    anotherVec[0]="Ricky";
    anotherVec[1]="Roy";
    anotherVec[2]="James";

    anotherVec.push_back("Vicky");

    for(int num: someVec)
    {
        cout<<num<<endl;
    }// end of range-based for loop

    cout<<endl;
    cout<<"\nsize of anotherVec: "<<anotherVec.size()<<endl;

    for(auto b: anotherVec)
    {
        cout<<b<<endl;
    }// end of range-based for loop

    cout<<"\nFront and back: "<<endl;
    cout<<"front: "<<anotherVec.front()<<endl;
    cout<<"back: "<<anotherVec.back()<<endl;

    anotherVec.pop_back();
    anotherVec.insert(anotherVec.begin(),"Jon");

    cout<<"now front is: "<<anotherVec.front()<<endl;
    cout<<"now back is: "<<anotherVec.back()<<endl;

    return 0;
}
/* vector: - vectors are same as dynamic arrays with the ability to resize itself automatically when an 
             element is added OR deleted,
           - with there storage being automatically handled by the conatiner
           - vectors are placed in contagius storage so that they can be acced and traversed using iterators 

  -Member function--->
   front(): which returns the front element
   back(): which returns the back element 
   pop_back(): which deletes the element which is as the end of the vector
   insert(): insert a element at any specific location within the vector, it takes two arguments
   begin(): insert the element at the beginning of the vactor
*/ 
