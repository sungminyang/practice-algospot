//
//  main.cpp
//  HelloWorld
//
//  Created by Yang on 2017. 3. 21..
//  Copyright © 2017년 MyandB. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    int num_of_name;
    cin >> num_of_name;
    for (auto i = 0; i < num_of_name; i++) {
        string name;
        cin >> name;
        cout << "Hello, " << name << "!" << endl;
    }
    return 0;
}
