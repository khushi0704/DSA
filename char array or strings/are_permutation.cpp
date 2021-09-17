#include <iostream>
using namespace std;
bool arePermutation(string A, string B)
{
    if(A.length()!=B.length()){
        return false;
    }
   	int count=0;
	for(char x: A){
		for(char y: B){
			if(x==y){
				count++;
				break;
			}
		}
	}
	if(count==A.length()){
	    return true;
	}
	return false;
}