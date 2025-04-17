//  will be implementing some functions using random functions.
#ifndef MY_CLASS_H // include guard
#define MY_CLASS_H
#include<bits/stdc++.h>
using namespace std;
namespace N
{
    class randgen
    {
    public:
    int a;
    int b;
    
    void n_rand_values(int a){
        for(int i=0;i<=a;i++){
            srand(time(0));
            cout<<rand()<<" ";
        }
        cout<<endl;
    }
    void values_les_b(int b){
        srand(time(0));
        cout<<rand()%b<<endl;
        cout<<b<<endl;
    }
         
        
    };
}

#endif /* MY_CLASS_H */