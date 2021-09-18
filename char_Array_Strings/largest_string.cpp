#include <iostream>
#include <cstring>
using namespace std;

// problem - read N strings and print the largest string.Each string can have upto 1000 chars

int main(){
    int n;
    char max[1000]; // got output cannot convert char* to char in strcp when didnt mention capacity 
    char temp[1000];
    int largest=0;
    cout<<"enter number of strings : "<<endl;
    cin>>n;
    while(n--){
        cin.getline(temp,1000,'.'); // reads till a dot is encountered
        int maximum= strlen(temp);
        if(largest<maximum){
            largest=maximum;
            strcpy(max,temp);
        }
    }
    cout<<"largest string : "<<max<<" with length :"<<largest;

    /* IMPORTANT NOTE */
    /*
    
     if you don't add '.' as a termination , then it will automatically read \n as a chr
     to explain better :


    you input :
    3
    khushi jain
    khushi
    output :
    khushi jain 
     it finishes at just two input because the input buffer is reading it as
     |  3   \n  khushijain  \n  khushi  \n   |


     still if you'd like to continue it that way then write code as :


     
        write  cin.get(); after int n; so it reads \n
       and eliminate the dot cin.getline(temp,1000);

    */
    return 0;
}