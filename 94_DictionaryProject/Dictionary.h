#ifndef DICTIONARY_H
#define DICTIONARY_H
#include<string>
#include<map>
using namespace std;

class Dictionary
{
	public:
		void addDefination(string word, string definaton);
		string getDefination(string word) const;
		void printAll() const;
	private:
		map<string, string>dictionary;
};

#endif