// Calculate the average of n numbers---->
#include<iostream>
using namespace std;

int main()
    {
        int n;
        cout<<"You want to Calculate the average numbers:  ";
        cin>>n;
        
        cout<<"Enter the Numbers:"<<endl;

        for(int i=0;i<=n;i++)
        {
            
            cout<<"num "<<i<<endl;
            int arr[i]; // ERROR ??
            for(int j=1;j<=n;j++)
            {
                cin>>arr[j];
            }
        }
        return 0;
    }