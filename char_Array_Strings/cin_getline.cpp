#include <iostream>
using namespace std;

// reading sentence using getline function
int main(){
    char paragraph[1000]; // can store upto 1000 chs
    // could have checked our len doesn't exceed the sentence array , additional check
    // oh , but looks like getline automtically does this work for us , once 1000 is reached , it automatically terminates and stops 
    // reading input

    // getline - for large inputs and paragraphs
    cin.getline(paragraph,1000,'.'); // stops when it sees a dot
    cout<<paragraph<<endl;
return 0;


/* I/P I/0 
this is a paragraph about strin .
this is a paragraph about strin
*/
}