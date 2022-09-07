//
//  main.cpp
//  cplus-cli
//
//  Created by Abhay Sinha on 9/4/22.
//

#include <iostream>
#include <string>
#include "my_logger.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    int i = 203;
    string s = to_string(i);
    // insert code here...
    std::cout << s << " Hello, World!\n";
    log("Let's log this.");
    return 0;
}
