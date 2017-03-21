//
//  main.cpp
//  DRAWRECT
//
//  Created by Yang on 2017. 3. 21..
//  Copyright © 2017년 MyandB. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    int count;
    cin >> count;
    int x[4], y[4];
    while(count--) {
        for (int i = 0; i < 3; i++) {
            cin >> x[i] >> y[i];
        }

        x[3] = (x[0] == x[1]) ? x[2] : (x[0] == x[2] ? x[1] : x[0]);
        y[3] = (y[0] == y[1]) ? y[2] : (y[0] == y[2] ? y[1] : y[0]);
        
        cout << x[3] << " " << y[3] << endl;
    }
    return 0;
}
