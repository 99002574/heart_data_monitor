#include "heart.h"
#include<vector>
#include<fstream>
#include<sstream>
#include<string>
#include "pbPlots.hpp"
#include "supportLib.hpp"
using namespace std;
vector<string> database;
string word;
string line;
double data[25]; 
int count;
long int i,j;
fstream fin;
int displayBetween(int begTime, int endTime, string fname){
    count=0;    
    fin.open(fname.c_str(), ios::in);
    if(!fin.is_open()){
        return -1;
    }
    while(!fin.eof()){
    getline(fin, line); 
    stringstream s(line);
    
    while (getline(s, word, ',')) { 
        database.push_back(word); 
    }
    }    
    for (i = 0; i < database.size()-1; i++){
        if(i%4==0){
            if(stoi(database[i+3]) >= begTime && stoi(database[i+3]) <= endTime){
                count++;                
            }            
        }
    }    
    fin.close();
    return count;

}
