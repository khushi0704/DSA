#include <iostream>
//#include <vector>
using namespace std;
class Vector{

int *arr;
int cs; // current size of the array
int ms; // maximum size of the array

// contructor , destruction , functions

public:
Vector(){
    cs=0;
    ms=1;
    arr= new int[ms]; 
}
void push_back(int d){
      // two cases
      // if the current space in array is same as the maximum space , i.e array is full
      if(cs==ms){
        // create another array , copy elem of old array , delete the old array
        int *oldArr = arr;
        ms=2*ms;
        arr=new int[ms];
        for(int i=0;i<cs;i++){
            arr[i]=oldArr[i];
        }
        delete [] oldArr;
      }
        arr[cs]=d;
        cs++;
  }  
void pop_back(){
    // delete the last element
    if(cs>=0){
        cs--;
    }
}
bool isEmpty(){
    return cs==0;
}
};
int main(){
    Vector v;
    return 0;
}
