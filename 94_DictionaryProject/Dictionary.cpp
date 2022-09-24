#include"Dictionary.h"
#include<iostream>
using namespace std;

void Dictionary::addDefination(string word, string defination)
{
	auto it = dictionary.find(word);
	if (it != dictionary.end())
	{
		// already in the dictionary
		it->second = defination;
	}
	else
	{
		// new word
		dictionary[word] = defination;
	}
}

string Dictionary::getDefination(string word) const
{
	auto it = dictionary.find(word);

	string result = "";

	if (it != dictionary.end())
	{
		result = it->second;
	}
	else
	{
		result = "NOT FOUND!" ;
	}
	return result;
}

void Dictionary::printAll() const
{
	for (auto pair : dictionary)
	{
		cout << pair.first << ":\t" << pair.second << endl;
	 }
	cout << endl;
}