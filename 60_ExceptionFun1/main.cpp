#include<iostream>
#include<string>
#include<stdexcept>
#include<vector>
using namespace std;

int main()
{
	vector<string>names(5);

	names.at(0) = "Prasad";
	names.at(1) = "Nitesh";
	names.at(2) = "Sanket";
	names.at(3) = "Prathamesh";
	names.at(4) = "Yash";

	for (auto name : names)
	{
		cout << name << endl;
	}

	try
	{
		// exception ?
	names.at(5) = "Vicky";
	}
	catch (const out_of_range& arr)
	{
		cout << arr.what() << endl;                      
	}
	
	
	
	return 0;
}