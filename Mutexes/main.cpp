//
//  main.cpp
//  Mutexes
//
//  Created by Imad Collin on 2017-09-28.
//  Copyright © 2017 Imad Collin. All rights reserved.
//

#include <iostream>
#include <thread>
std::mutex mu;
using namespace std;
int x;
class C{
public:
    void operator()(){
        mu.lock();
        for(int i=0;i<100;i++){
            cout<<i<<endl;
        }
        mu.unlock();
        
    }
};

int main(int argc, const char * argv[]) {
    C c;
    
    thread t(c);
    thread t2(c);
    
    if(t.joinable())
        t.join();
    if(t2.joinable())
        t2.join();
    
    return 0;
}

