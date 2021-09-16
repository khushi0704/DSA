#include <iostream>
#include<cstring>
using namespace std;
int main(){
    char word[50];
    char copy[50];
    int count=0;
    cin>>word;
    int n = strlen(word);
    for(int i=0;i<n;i++){
    copy[n-i-1]=word[i];
    
    }
    copy[n]='\0'; // VERY imp to temrinate the string with a null character
 /*   for(int i=0;i<n;i++){
    cout<<i<<" "<<copy[i]<<" "<<word[i];
    
    }
    */
    int m  = strcmp(word,copy);
    cout<<m;
    
   /* if(m==0){
    	cout<<"it is a palindrome";
    }
    else{
    	cout<<"not a palindrome";
    }*/
    
    return 0;
}
