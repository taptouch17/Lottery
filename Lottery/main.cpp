//
//  main.cpp
//  Lottery
//
//  Created by Jelani Nicholls on 08/06/2018.
//  Copyright © 2018 Tap. TOUCH. All rights reserved.
//

#include <iostream>
#include "RandomGenerator.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    int num = 0;
    RandomNumbers r;
    while (num != 7) {
        int randomNumber = r.randomNumber();
        bool is = r.pushOnArray(randomNumber);
        if (!is) {
            cout << randomNumber << endl;
           num += 1;
        }
        
    }
    return 0;
}
