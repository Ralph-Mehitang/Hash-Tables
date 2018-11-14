#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <iostream>


class Dictionary
{

private:
	int buckets;
	int key;
	int values;

public:

	Dictionary(){buckets=0;
	} //constructor
	~Dictionary(); //Destructor
	void readin();
	void insert();
	void deletehash();
	void search();
};
#endif