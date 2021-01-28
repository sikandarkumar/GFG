#include<bits/stdc++.h>

using namespace std;

int main(){

    vector<int>v;

    for(int i=0;i<5;i++){
        v.push_back(i);
    }

    for(auto x:v){
        cout<<x<<endl;
    }


    return 0;
}


//g++ -std=c++11 template.cpp -o template