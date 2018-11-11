#ifndef DICTIONARY_H
#define DICTIONARY_H
#include <iostream>

class Dictionary
{

private:
	int buckets;

public:

	Dictionary(){buckets=0;
	} //constructor
	~Dictionary(); //Destructor
	void readin();
};
#endif