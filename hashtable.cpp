#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "hashtable.h"


hashtable::hashtable(){
readin();
}

void hashtable::readin(){

for(int i=0; i<size;i++){
	Hashtable[i]= new hash;
	Hashtable[i]->word="nothing";
	Hashtable[i]->next=NULL; //set it to the null val
}

ifstream infile("english.txt");//cll in dictionary file
string word;
while(!infile.eof()){
	infile>>word;
	insert(word);
}
}
void hashtable::insert(string word){
int val=hashtable(word);

if(Hashtable[val]->word=="nothing")
{
	//the hashtable is empty so just add word

	Hashtable[val]->word=word;
}

else {
	hashnode n = Hashtable[val];
	hashnode h = new hash;
	h->word=word;
	h->next=NULL;
	while(n->next!=NULL){
		n=n->next;
	}
	n->next=h;
	
}
}

int hashtable::buckets(int value){
	int count=0;
	//if hash value is empty then return 0 for it is empty
	if(Hashtable[value]->word=="nothing"){
		return count;
	}
	else{
		count++;
		hashnode node=Hashtable[value];
		while(node->next!=NULL){
			count++;
			node=node->next;
		}
	
	}
return count;
}
