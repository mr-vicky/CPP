#include<iostream>
using namespace std;
int main()
{
    char whichPackage;
    int howManyJans=0;
    int monthlyFee=0;
    int jamIncluded=0;
    int jamPrice=0;
    int totalCost;

    cout<<"Which package you owe (A/B/C): ";
    cin>>whichPackage;

    cout<<"\nhow many jams you have purchased: ";
    cin>>howManyJans;

    if(whichPackage == 'A' || whichPackage == 'a')
    {
        jamIncluded = 2;
        jamPrice= 5;
        monthlyFee= 8;       

    }
    else if(whichPackage=='B' || whichPackage == 'b')
    {
       jamIncluded = 4;
       jamPrice= 4;
       monthlyFee= 12;
    }
    else if(whichPackage == 'C' || whichPackage == 'c')
    {  
        jamIncluded = 6;
        jamPrice= 3;
        monthlyFee= 15;
    }

    if(howManyJans >= monthlyFee)
    {
        // if the jams are more than the included amount
        totalCost = monthlyFee + ((howManyJans-jamIncluded)*jamPrice);
    }
    else
    {
        totalCost = monthlyFee;
    }

    cout<<"Total price is $"<<totalCost;

    return 0;
}