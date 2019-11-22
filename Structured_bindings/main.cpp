//  Structured_bindings
//
//  Based on "C++17 STL Cookbook" by Jacek Galowicz
//  ISBN: 978-83-283-4501-0
//
//  Works with std::pair, std::tuple, struct, array, other containers
//
//  Created by Dawid on 22/11/2019.
//  Copyright © 2019 Ishiguro. All rights reserved.
//

#include <iostream>
#include <utility>

std::pair<int, int> getDoubleAndSquare(int num) {
    return std::make_pair<int, int>(2*num, num*num);
}

int main() {
    
    // Old way to represent results
    const auto result (getDoubleAndSquare(5));
    std::cout << "Double of argument is " << result.first << std::endl
              << "Square of argument is " << result.second << std::endl;
    
    // C++17 way to represent results
    const auto [dbl, sqr] = getDoubleAndSquare(5);
    std::cout << "Double of argument is " << dbl << std::endl
              << "Square of argument is " << sqr << std::endl;
    
    return 0;
}
