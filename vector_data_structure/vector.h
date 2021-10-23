template<typename T>
class Vector{
    // Data Structure

T *arr;
int cs; // current size of the array
int ms; // maximum size of the array

// contructor , destruction , functions

public:
Vector(int max_size=1){
    cs=0;
    ms=max_size;
    arr= new T[ms]; 
}
void push_back(int d){
      // two cases
      // if the current space in array is same as the maximum space , i.e array is full
      if(cs==ms){
        // create another array , copy elem of old array , delete the old array
        T *oldArr = arr;
        ms=2*ms;
        arr=new T[ms];
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
bool isEmpty() const{
    return cs==0;
}
T front() const{
    return arr[0];
}
T back() const{
    return arr[cs-1];
}
T at(int i) const{
    return arr[i];
}
int size() const{
    return cs;
}
int capacity() const{
    return ms;
}
// since vaue of i does not change
T operator[](const int i){
    return arr[i];
}
};