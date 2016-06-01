//
//  Header.h
//  leetcode_8
//
//  Created by 王青龙 on 6/1/16.
//  Copyright © 2016 王青龙. All rights reserved.
//

#ifndef Header_h
#define Header_h

#incude<string>

class Solution{
public:
    int myAtoi(string str){
        long result = 0;
        int indicator = 1;
        int i = str.find_first_not_of(' ');
        if (str[i]=='+') {
            indicator = +1;
            ++i;
        }
        if (str[i]=='-') {
            indicator = -1;
            ++i;
        }
        while (str[i]>'0'&&str[i]<'9') {
            result = result*10 + (str[i]-'0');
            if (result*indicator>=INT_MAX) {
                return INT_MAX;
            }
            if (result*indicator<=INT_MIN) {
                return INT_MIN;
            }
        }
        return result*indicator;
    }
};

#endif /* Header_h */
