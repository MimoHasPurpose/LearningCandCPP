// my_class.h
#ifndef MY_CLASS_H // include guard
#define MY_CLASS_H
#include<bits/stdc++.h>
using namespace std;
namespace N
{
    class my_class
    {
    public:
        void do_something(){
            cout<<"Hello World"<<endl;
        }
        vector<int> ans(vector<int> a){
            vector<int> output;
            for(int i=0;i<a.size();i++){
                output.push_back(a[i]+1);
            }
            return output;
        }
    };
}
void something(){
    cout<<"something"<<endl;
}

#endif /* MY_CLASS_H */