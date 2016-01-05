//
//  main.cpp
//  SRM 452
//
//  Created by Luis Eduardo Obando on 2016-01-04.
//  Copyright (c) 2016 Luis E. Obando. All rights reserved.
//

#include <iostream>
#include <algorithm>

using namespace std;

class EggCartons {
public:
    int minCartons(int n){
        int ret = -1;
        
        if (n % 2 != 0) return ret;
        if ((n % 6 == 0) || (n % 8 == 0)) return min(n/6, n/8);
        
        for (int i = 1; i < n/8; ++i){
            int rest =  n - i*8;
            for(int j = 1; j <= rest/6 ; ++j){
                if ((i*8 + j*6) == n){
                    if (ret == -1) ret = i+j;
                    ret = min(i+j, ret);
                }
            }
        }
        return ret;
    }
};

