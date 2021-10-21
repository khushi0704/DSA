#include<iostream>
using namespace std;
int main(){
    /* usually local var are stored in static memory/ stack
     which is created & destroyed by the compiler after the prgm is over
     dynamic memory allocation
     dynamic memory is allocated at run time unlike static 
     memory which is created and destroyed by compiler
    */
    int *arr = new int[100];
// arr[2]=*(arr+2);
// dynamic memory is stored in heap and deleted only by programmer
delete [] arr;
// if the programmer forgets to delete it  then a case of memory leak arises
// we have wasted that part of memory and we dont have address to ease it
int *x=new int[100];
//x(i)=x(i-1)+2;

   return 0;
}
