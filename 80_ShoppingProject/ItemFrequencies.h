#ifndef ITEM_FREQUENCIS_H
#define ITEM_FREQUENCIES_H

#include<string>
#include<vector>
using namespace std;

class ItemFrequencies
{
    public:
        void addItems(string item);
        void printFrequencies() const;

    private:
        vector<string>items;
        vector<int>frequencies;
        int indexOfItem(string item) const; 
};

#endif