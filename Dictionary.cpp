#include <iostream>
#include <fstream>
#include "Dictionary.h"
void Dictonary:: readin(){
ofstream myfile;
myfile.open("english.txt");
myfile<<"writing this to a file"<<endl;
myfile.close();

}