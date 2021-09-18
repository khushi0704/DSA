#include <iostream>
using namespace std;
int main(){
    char sentence[1000]; // max length : 1000
   //  cout<<"enter a sentence : ";
   //  cin>>sentence; // how are you
   //  cout<<sentence; // how
    
   // accept 1 char at a time , can read vergything including spaces
   // cin.get() for input

    char temp=cin.get(); // reads one input char from buffer 
   /*  ex : hello _ world
     first cin.get reads h , put its in temp */
     int len = 0;
     while(temp!='#'){ // EOL

        sentence[len++]=temp;

        // update thr value of temp

        temp=cin.get();

      }
      sentence[len]='\0'; // whenever we get a new line char , it is replaced by the null chr


     /*while(temp!='\n'){ // EOL
        len++;
        cout<<temp;
        // update thr value of temp
        temp=cin.get();
             }*/
     /*while(temp!='#'){ // EOL
        len++;
        cout<<temp;
        // update thr value of temp
        temp=cin.get();
             }
             suppose input = hello *ou press enter*
             hello is printed 
             next line : how are you
             o/p - how are you
             next line - damn#
             o/p - damn 
            program is finished now after line ended with a # 
            since while loop was terminated after a hash
             */


            // alternative
    
   cout<<sentence;
   cout<<"length = "<<len; // you dont get output from input buffer till you hit enter


/*
I/P
hello mic testing 123
oh this is still working
maybe we need to end the line
with a hash #
 O/P
hello mic testing 123
oh this is still working
maybe we need to end the line
with a hash length = 90
*/
    return 0;
}