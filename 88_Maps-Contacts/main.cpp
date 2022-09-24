#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	map<string, string>contacts;

	contacts["Vivek Sarade"] = "8432854950";
	contacts["Nitesh Mali"] = "8938957488";
	contacts["Prathamesh Amundkar"] = "9685746990";

	for (auto element : contacts)
	{
		cout << element.first << " = " << element.second << endl;	
	}

	return 0;
}