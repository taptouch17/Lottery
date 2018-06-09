//
//  RandomGenerator.cpp
//  Lottery
//
//  Created by Jelani Nicholls on 08/06/2018.
//  Copyright © 2018 Tap. TOUCH. All rights reserved.
//

#include "RandomGenerator.hpp"
#include <iostream>
#include <random>
#include <algorithm>

using namespace std;

vector<int> RandomNumbers::getArray() {
    return randomArray;
}

RandomNumbers::RandomNumbers() {
    randomArray.resize(0);
}


int RandomNumbers::randomNumber() {
    random_device device;
    mt19937 engine{device()};
    uniform_int_distribution<int> distribution(1,30);
    int number = distribution(engine);
    return number;
}

bool RandomNumbers::pushOnArray(int num) {
    vector<int>::iterator it = find(randomArray.begin(), randomArray.end(), num);
    if (it != randomArray.end()) {
        return true;
    }
    else {
        randomArray.push_back({num});
        return false;
    }
}
