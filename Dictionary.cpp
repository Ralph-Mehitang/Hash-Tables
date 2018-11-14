#include <iostream>
#include <fstream>
#include "Dictionary.h"

//constructor

Dictionary::Dictionary(){

	hashable=new hashtable*[size];
	top=new hashtable*[size];
	bucketsize=new int[size];
	for (int i = 0; i <size; i++)
	{
		hashable[i]=NULL;
		top[i]=NULL;
		buckets[i]=0;
	}
	total=0;
}

bool ::Dictionary isfull(){
	//implement code 
}

bool Dictionary::isempty(int k){
	if(k>=0&&k<size){
		return hashable[k]==NULL;
	}

	else
		return true;

}

int hashtable(string word){
int s=131;
long total=0;
for (int i = 0; i < word.leght(); i++)
{
	sum=(sum*seed) + word[i];
}
sum=sum%size;

return abs(sum); //absolute value function change later
}

void Dictionary::insert(string nancy){
if(!isfull()){
	int k=hash
}
}