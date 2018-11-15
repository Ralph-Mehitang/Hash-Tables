#include <iostream>
#include <fstream>
#include "Dictionary.h"
#include <cctype>
#include<string>
#include <limits>
#include <iomanip>
//constructor
//const int size_table = 466546;
Dictionary::Dictionary(){

	hashable=new hashtable*[size];
	top=new hashtable*[size];
	bucketsize=new int[size];
	for (int i = 0; i <size; i++)
	{
		hashable[i]=NULL;
		top[i]=NULL;
		bucketsize[i]=0;
	}
	total=0;
}

bool ::Dictionary:: isfull(){
	//implement code 
}

bool Dictionary::isempty(int k){
	if(k>=0&&k<size){
		return hashable[k]==NULL;
	}

	else
		return true;

}

int Dictionary:: hash_table(string word){
int seed=131;
long total=0;
for (int i = 0; i < word.length(); i++)
{
	total=(total*seed) + word[i];
}
total=total % size;

return abs(total); //absolute value function change later
}

void Dictionary::insert(string nancy){
if(!isfull()){
	int k=hash_table(nancy);
	hashtable *enter=hashable[k];
	if(enter==NULL){
		enter=new hashtable;
		enter->word=nancy;
		enter->key=k;
		enter->next= NULL;
		enter->prev= NULL;
		hashable[k]=enter;
		top[k]=enter;

	}
	else{
		while(enter !=NULL)
			enter=enter->next;
		enter= new hashtable;
		enter->word=nancy;
		enter->key=k;
		enter->next=NULL;
		enter->prev=top[k];
		top[k]->next=enter;
		top[k] = enter;
	}
		bucketsize[k]++; //increment the bucketsize
		total++; //increment the total number of words
}
}

int Dictionary::buckets(int key){

return bucketsize[key];
}

int Dictionary :: table_size(){
return size;

}

int Dictionary:: totalval(){

	return total;
}


void Dictionary :: print(){
	int largestbucket=-9999999;
	int largestindex=0;
	int smallestbucket=9999999;
	int smallestindex=0;
	double usedbuckets=0;
	for (int i = 0; i <table_size(); i++)
	{
		if (!isempty(i))
		{
			if(smallestbucket>buckets(i)){
				smallestbucket=buckets(i);
				smallestindex=i;
			}
			if (largestbucket<buckets(i)){
				largestbucket=buckets(i);
				largestindex=i;
			}
			usedbuckets++;
			
		}
	}
	cout<<"Stats:"<<endl;
	cout<<"Total words in Dictionary "<<totalval()<<endl;
	cout<<"Size of hash table = "<<table_size()<<endl;
	cout<<"Largest bucket size : "<<largestbucket<<endl;
	cout<<"smallest bucket size : "<<smallestbucket<<endl;
	cout <<"total bucket used ="<<usedbuckets<<endl;
	cout<<"average number of nodes in each bucket "<<totalval()/usedbuckets<<endl;

}
void Dictionary:: userinput(){
	string input;
	cout<<"Please enter a sentence"<<endl;
	getline(cin,input);
}
/*
void Dictionary::spellcheck(hashtable node, string word){
		int result=0;
	int suggestion=0;
	string text[256]; //using all ascii characters to check for unique characters ex.don't
	string userinput;
	string currword;
	char r;
	cout<<"Please enter a sentence: ";
	getline(cin,userinput);
	//splits each word from the inputed string into individual workds to see if they are spelled correctly
	char* split=strtok(userinput.c_str(),DELIMITERS);
	while(split!=NULL){
		currword=split;
		currword=lowercase(currword);
		result+=spellcheck(hashtable,currword)
	}
	if (result>0)
	{
		cout<<"The number of words that were splled incorrectly:"<<result<<endl;
		result=0;
			}
}
//converts to lowercase
void Dictionary::lowercase(string word){
	for (int i = 0; i < word.length; i++)
	{
		word[x] =lowercase(word[x]);
	}
	return word;
}
*/
Dictionary::~Dictionary(){
total=0;
int check=0;
while(!isempty(check)){
	while(!isempty(check)){
		hashtable *tmpval=hashable[check];
		hashable[check]=hashable[check]->next;
		delete tmpval;
	}
	bucketsize=0;
}
}

