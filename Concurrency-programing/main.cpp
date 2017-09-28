//
//  main.cpp
//  Concurrency-programing
//
//  Created by Imad Collin on 2017-09-28.
//  Copyright © 2017 Imad Collin. All rights reserved.
//

#include <iostream>
#include <thread>
using namespace std;
class C{
public:
    void operator()(){
        cout<<"Method from the class "<<endl;
    }
};
int main(int argc, const char * argv[]) {
    C c;
    thread t(c);
    t.join();
    
    std::cout << "Hello, World!\n";
    return 0;
}
