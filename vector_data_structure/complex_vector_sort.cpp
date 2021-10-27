#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int calculate_marks(vector<int> arr){
    return arr[0]+arr[1]+arr[2];
}
bool compare(pair<string,vector<int>> s1,pair<string,vector<int>> s2){
    vector<int> m1=s1.second;
    vector<int> m2=s2.second;
    return calculate_marks(m1) > calculate_marks(m2);
}

int main(){
    // compares marks of students
    // vector pair
    vector <pair<string,vector<int>>> student_marks={
        // student_marks.first , student_marks.second
        {"Rohan",{34,56,33}},
        {"Yashi",{30,53,30}},
        {"Manu",{15,30,40}},
        {"Naina",{30,15,25}},
        {"Daisy",{20,52,20}},
    };
    int size=student_marks.size();
    sort(student_marks.begin(),student_marks.end(),compare);
 
    for(int i=0;i<size;i++){
        cout<<student_marks[i].first<<" "<<" "<<calculate_marks(student_marks[i].second);
        cout<<endl;
    }    
    return 0;
}