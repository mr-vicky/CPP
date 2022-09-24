#include<iostream>
#include<vector>
#include<stdexcept>
using namespace std;

int main()
{
	vector<int>myNums;

	// myNums.resize(myNums.max_size() + 1);

	try
	{
		myNums.resize(myNums.max_size() + 1);
	}
	catch(const length_error& err)
	{ 
		cout << err.what() << endl; //OR cerr << err.what() << endl;
	}

	cout << "Yey its a big vector!" << endl;
	return 0;
}