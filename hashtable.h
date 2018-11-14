#ifndef HASHTABLE_H
#define HASHTABLE_H
#include <iostream>
using namespace std;

class hashtable
{

private:
	static const long size= 466545;

	typedef struct hash
	{
		string word;
		hash* next;
	}*hashnode;

	hashnode Hashtable[size]; //initializes arr to size

public:
	hashtable();
	~hashtable();
	hashtable(size_t); 
	void readin();
	int modhash(long);
	int mulhash(long);
	void insert(string);
	void print();
	void search(string);
	bool itcontains();
	int buckets(int);// returns the number of buckets in the hash


	
};

#endif