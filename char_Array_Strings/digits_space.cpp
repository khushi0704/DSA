#include <iostream>
using namespace std;

// given a sentencecount the no. of alphabets , digits and spaces

int main(){
    char ch; 
    char sentence[1000]; // read all chars one by one from input buffer
    cout<<"enter a sentence : "<<endl;
    ch=cin.get();   // input the sentence , infut buffer reads one char at once
    int alpha=0;    // stores alphabets count
    int space=0;    // stores space count
    int digit=0;    // stores digits count
    int i=0;        // initially count of sentence is 0
    while(ch!='\n'){
       
        sentence[i++]=ch; // char gets stored in sentence one by one

        if(ch >= '0' and ch <='9'){
            digit++;
        }
        
        else if(ch >= 'a' and ch <='z' or ch >= 'A' and ch <='Z'){
            alpha++;
        }
        else if(ch ==' ' or ch=='\t'){
            space++;
        }
         ch=cin.get(); // reads the next char
    }
    cout<<"sentence = "<<sentence<<endl;
    cout<<"no. of alpha : "<<alpha<<endl;
    cout<<"no. of spaces : "<<space<<endl;
    cout<<"no. of digits : "<<digit<<endl;
    return 0;
}
