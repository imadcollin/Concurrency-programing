//
//  main.cpp
//  Mutexes
//
//  Created by Imad Collin on 2017-09-28.
//  Copyright © 2017 Imad Collin. All rights reserved.
//

#include <iostream>
#include <thread>
using namespace std;
int x;
class C{
public:
    void operator()(){
        for(int i=0;i<100;i++){
            cout<<i<<endl;
        }
        
    }
};

int main(int argc, const char * argv[]) {
    C c;
    
    thread t(c);
    for(int i=0;i<100;i++){
        cout<<i<<endl;
    }
    
    if(t.joinable())
        t.join();
    
    return 0;
}

