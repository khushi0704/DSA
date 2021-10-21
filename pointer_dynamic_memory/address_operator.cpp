#include <iostream>
using namespace std;
int main(){
    /* most powerful aspect of c++
     address of operator - &
    AND - used for bitwise 
&x - give us the adress of variable x
when you print an address , that number is printed as an hexadecimal 
0 1 a b etc
third use - reference variable 
*/
int x=10;
float y =10;
// if memeor adress if x is 54 then y is 58
cout<< &x<<endl;
cout<< &y<<endl;
    return 0;
}