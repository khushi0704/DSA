// Write a C program to print the frequency of the digits in given alphanumeric string.
#include <iostream>
#include <vector>
using namespace std;

int main() {
	string strng="a11472o5t6";
	cout<<strng<<endl;
int arr[10];
for(int j=0;j<10;j++){
	arr[j]=0;
}
for(int i=0;i<=strng.length();i++){
	if(strng[i]>=48 and strng[i]<=57){
		int m=(int)strng[i]-'0';
		arr[m]++;
	//	cout<<typeid(strng[i]).name()<<" ";
	}
}
for(int z=0;z<10;z++){
	cout<<arr[z]<<" ";
}
return 0;
}