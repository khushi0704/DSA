#include <iostream>
using namespace std;

// Run Length Encoding for String Compression
// if compressed string is bigger than original return original string
// Input : aaabbccddee
// Output :a3b2c2f2e2

//Input : abcd ~ a1b1c1d1(bigger than original)
// Output : abcd
string compressString(string str){
    // time complexity ~ linear since i is incrementing in while loop and also in for loop so it compensates 
    int n=str.length();
    string output;
    for(int i=0;i<n;i++){
        int count=1;
        while(i<n-1 and str[i+1] == str[i]){ // while the repeating ch doesnt reach end && equal to the previous ch
            count++;
            i++;
        }
            output+=str[i];
            output+= to_string(count); 
    }
    if(output.length()<n){
    return output;
    }
    else{
        return str;
    }
}
int main(){

    string s1 = "aaabbccddee";
    cout<<compressString(s1)<<endl;

    string s2 = "abcd";
    cout<<compressString(s2)<<endl;
    return 0;
}