#include<iostream>
using namespace std;
int main()
{
    cout<<"Package A:\n-$8p per month\n-includes 2 jam per month\n- each additional jam on the top of the 2 is $5 each\n\n";
    cout<<"Package B:\n-$12p per month\n-includes 4 jam per month\n- each additional jam on the top of the 4 is $4 each\n\n";
    cout<<"Package C:\n-$15p per month\n-includes 6 jam per month\n- each additional jam on the top of the 6 is $3 each\n\n";
    // cin.get();

    char ch;
    int costTotal ;
    float totalJam, extra;
    cout<<"Enter the which package you want(A/B/C): ";
    cin>>ch;
    if(ch == 'A' || ch == 'B' || ch == 'C')
    {
        cout<<"\nplease enter how many jams you have purchased in the month:\n";
        cin>>totalJam;
    }
    else 
    cout<<"Invalid choice...";

    switch(ch)
    {
        case 'A': 
                    
                   extra = 0;
                   extra = totalJam - 2;
                   if(totalJam>=2)
                   {
                       costTotal = (4*2)+(5*extra);
                   }
                   else 
                   {  
                         costTotal = 4*totalJam; 
                   }                  
                  cout<<"\nTotal Cost = "<<costTotal<<"$";
                  break;
        
        case 'B' : extra = 0;
                   extra = totalJam - 4;
                   if(totalJam>=4)
                   {
                       costTotal = (3*4)+(4*extra);
                   }
                   else 
                   {  
                         costTotal = 3*totalJam; 
                   }                  
                  cout<<"/nTotal Cost = "<<costTotal<<"$";
                  break;
        
        case 'C'  : extra = 0;
                   extra = totalJam - 6;
                   if(totalJam>=4)
                   {
                       costTotal = (2.5*6)+(3*extra);
                   }
                   else 
                   {  
                         costTotal = 2.5*totalJam; 
                   }                  
                  cout<<"\nTotal Cost = "<<costTotal<<"$";
                  break;
            
        // default: 
        //           cout<<"Invalid choice! please try again...\n";


    }
    return 0;
}
