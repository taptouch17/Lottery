//
//  RandomGenerator.hpp
//  Lottery
//
//  Created by Jelani Nicholls on 08/06/2018.
//  Copyright © 2018 Tap. TOUCH. All rights reserved.
//

#ifndef RandomGenerator_hpp
#define RandomGenerator_hpp

#include <iostream>
#include <vector>

using namespace std;

class RandomNumbers {
private:
    vector<int> randomArray;
public:
    vector<int> getArray();
    bool pushOnArray(int);
    RandomNumbers();
    int randomNumber();
};

#endif /* RandomGenerator_hpp */
