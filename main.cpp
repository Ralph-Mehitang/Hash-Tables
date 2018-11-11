#include <iostream>
#include "Dictionary.h"
#include <fstream>
using namespace std;


int main(){
	ofstream myfile;
myfile.open("english.txt");
myfile<<"writing this to a file"<<endl;
myfile.close();
	return 0;
}