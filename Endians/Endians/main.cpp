//
//  main.cpp
//  Endians
//
//  Created by Yang on 2017. 3. 21..
//  Copyright © 2017년 MyandB. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int count;
    cin >> count;
    
    unsigned int mask1 = 0xFF000000;
    unsigned int mask2 = 0x00FF0000;
    unsigned int mask3 = 0x0000FF00;
    unsigned int mask4 = 0x000000FF;
    
    unsigned int input;
    unsigned int output;
    
    while (count--) {
        cin >> input;
        
        output = ((input & mask1) >> 24)
                + ((input & mask2) >> 8)
                + ((input & mask3) << 8)
                + ((input & mask4) << 24);
        
        cout << output << endl;
    }
    return 0;
}
