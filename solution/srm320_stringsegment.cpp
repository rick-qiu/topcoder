/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6442
*******************************************************************************/
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

class StringSegment {
public:
    double average(string s);
};

double StringSegment::average(string s) {
    double ret;
    return ret;
}


int test0() {
    string s = "aaabbaaac";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.25;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string s = "aabbccdd";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string s = "abba";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string s = "a";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string s = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string s = "bcbc";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string s = "zxcvbnmlkjhgfdsaqwertyuiop";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string s = "xzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzx";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 15.666666666666666;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string s = "eeecabbccccbdbbaaabbbcaaaabbbdbccccddddabeeaaabbbe";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1739130434782608;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string s = "abecccccddddddcbeeeeccaaeeeeaeccccccddeebbbdddbaaa";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string s = "dccbbbbebeacdbbbbdbaaaabbeeeeaaddeeeeaabbbeeecdccc";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0833333333333335;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string s = "bedbbbeebccceecccdddddaaaadceedabaebbbbeeeeccaaaaa";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1739130434782608;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string s = "bdddddcbbbbeeaaeeeeeedddaaaeeeedcccddddccccceebcc";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8823529411764706;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string s = "ccbbceaaaaaaeeebbbddddcacbbbddddccaddcbbbaaaabbb";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.4;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string s = "adcdaaaadddedaadaaabbccccbbcccbddaabcceeeecaaaaa";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0869565217391304;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string s = "bbbeeaaaddddebdddaabbbdbddcedcccabdccccbaacbbbbbdc";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9230769230769231;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string s = "eecbcdbbbbbeddddaaddddccbabceeaddcddddeddddddeebb";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0416666666666665;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string s = "bdeeabbbbbddddccccabbbbbeccccdddaabbeccccbbbbabbcc";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string s = "bbbbddddddddddddddddddccccceeeeaaaadaaaabddddddd";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 5.333333333333333;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string s = "bbbddddddddaaaaadddeeeeeeeeeeddbcccccdeeeedddaaaee";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8461538461538463;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string s = "eeaaaacccccdddddbcccccaacccccccccaaaaaeaaaaabaa";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 3.6153846153846154;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string s = "dddddccceeddddaaddddeeeeaaaaaabbbbbccccaaaaaaaaeed";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8461538461538463;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string s = "bbbbbccccceeeebbbbbbbbbbbbbaaaaabbbbbeeeeeceeeeaa";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 4.9;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string s = "bbbbddcccccccccaaeeeeebbbbbdccaaaaaddddcceeddddd";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 3.6923076923076925;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string s = "aaaaaeeedddddddddeebbbbccddddbbbccccccccdddcdccccc";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8461538461538463;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string s = "aaaacccccccccbbbbaaaaaaaeeeeacaaaceebbbbbbbbbeeee";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 4.083333333333333;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string s = "aaaabaeeeeacccccbbbeeeeeaaaaaaaaaaaaacccddddee";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 3.8333333333333335;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string s = "eeaeeedddaaaaaddddaadddeeebbccaaaaaeeeeebbbbee";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 3.066666666666667;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string s = "vvvvvvvvvvvvvvvvwvzzzzzyyzzzzzvzzzzxxyyyyyyvvzzz";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string s = "xxxxxxxxxxxwwwzzzzzzvvvzwwwxxxzzzvvvvvvzzzzxxzzz";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string s = "xxxxxxxxxxxxxyyyyzzzzzzzzzzzvvvvwwxxxxwwwxxxxxyy";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 5.333333333333333;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string s = "wwwwwwwyyyyxxxxwwwwwwwwvwwwwwzzzzzzzyyywwwwyyxxxx";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 4.454545454545454;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string s = "xxxxxxxxxxxxxxxxxxxxxxyyyyyyyyyyywwwwyvvxxxxxzzzzz";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 7.142857142857143;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string s = "xxxxxxxxxxxxxxxxyyyyxxxxxvvvxxxxxxwwwwwyyyyvvvvv";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string s = "xxxxwwwwvvvwwwwyyyyyxxxzzzzyyxxxxyxxzyyyyyyxxzzzzv";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 3.125;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string s = "wwwwwwwwwwwwvvvvyxxxxvvvvvvzxxxyyyzzzzzzzzxxxxxxxy";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 4.545454545454546;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string s = "yyyyyyyyyyyyyyyyyyyyyyyvvvvvzzxyyyyzzwwwwzxvvvvv";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 4.8;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string s = "zzzzzzzxvvvvvyyyyyyywwwzxzvxxzzzzzxxyyyyxwwxzzzz";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.823529411764706;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string s = "dddddcccccgggrrrrddddeeeeaaauuuuunnggpooooyyyoo";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 3.357142857142857;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string s = "wwwxzzzzzaassssggghmmggnnnnnppppnnkkmmmmuuuuukkk";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string s = "fffffallgggggzkkkkddddcccccleeeejjjjmmnnrrryyzziii";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9411764705882355;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string s = "nnzzzzzaxxaaadddwwwwdzffffsssswwwwttovnhhhhsssss";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6666666666666665;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string s = "eeeaaammmddxxxdddddvvvvcccuudddddcccxxaaaadssstttt";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 3.125;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string s = "bbbgggnnnvvppgggjjjjggmmmmmxxxxxbbbccccyyyycccqqh";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0625;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string s = "dddddwwwwxxxxzqqqqqllllvvvbwxxxxxiiifffclllzmmuuuu";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.9411764705882355;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string s = "wwwwssffiuuuuusssssooooolllsssssshhhhcccchhhhhllo";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string s = "llllgfpppuuuuusssuuuccyyvvvvhhhpppppuurrrwiiixxxx";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8823529411764706;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string s = "jjjwwwwxxxbbbbkknnneeeellllljtttttuuuppoooowllbbbb";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 3.125;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string s = "mmmmmtppppnnnnmmmmdyyyyysvvpnnnnmmbbbrfffuuuhheeek";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6315789473684212;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string s = "hhhhsvvvvvooowfwggiiavoooqooooiisssqqqqqqqetddddd";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.45;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string s = "jlllllttmmjjjjxxxxxtttggggkkkkktttttiiiiillllldiii";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 3.5714285714285716;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string s = "aaoooossssskkkkffaahhhhmooooolllaaaiiiitwwwwlllvv";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0625;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string s = "rrrpppppyyyzyyyyooooouuuutttttwwwwlllllrrrlllzzzz";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 3.769230769230769;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string s = "ddttbuufffvccccssssssssszzzmiiiiiooooovvvvvgbbbbbp";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 3.125;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string s = "kkkkkvvheemmmmmddddvvvgjjjjsssssxxxammuuqhhhhhkkk";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.8823529411764706;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string s = "fffffaaaqkkklllllzzzttjaaaaeefuuuuukkkkklljjqddd";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.823529411764706;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string s = "eeevvvvvhhhhhhwfffffuuuuuxxxxfffffppssyyyylljjjj";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 3.6923076923076925;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string s = "eeeerrrrxxxzzzaaappmmmmwwrrroouuutqaaaayglllldj";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.473684210526316;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string s = "abcabcabc";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string s = "aaabbb";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string s = "dlsjflsdajfldjflajdlfajdfd";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string s = "aaaa";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string s = "aaabbbccccd";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 2.75;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string s = "a";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string s = "abba";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3333333333333333;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string s = "aaaaaaa";
    StringSegment* pObj = new StringSegment();
    clock_t start = clock();
    double result = pObj->average(s);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}



int main(int argc, char* argv[]) {
    int passed = 0;
    int failed = 0;
    test0() == 0 ? ++passed : ++failed;
    test1() == 0 ? ++passed : ++failed;
    test2() == 0 ? ++passed : ++failed;
    test3() == 0 ? ++passed : ++failed;
    test4() == 0 ? ++passed : ++failed;
    test5() == 0 ? ++passed : ++failed;
    test6() == 0 ? ++passed : ++failed;
    test7() == 0 ? ++passed : ++failed;
    test8() == 0 ? ++passed : ++failed;
    test9() == 0 ? ++passed : ++failed;
    test10() == 0 ? ++passed : ++failed;
    test11() == 0 ? ++passed : ++failed;
    test12() == 0 ? ++passed : ++failed;
    test13() == 0 ? ++passed : ++failed;
    test14() == 0 ? ++passed : ++failed;
    test15() == 0 ? ++passed : ++failed;
    test16() == 0 ? ++passed : ++failed;
    test17() == 0 ? ++passed : ++failed;
    test18() == 0 ? ++passed : ++failed;
    test19() == 0 ? ++passed : ++failed;
    test20() == 0 ? ++passed : ++failed;
    test21() == 0 ? ++passed : ++failed;
    test22() == 0 ? ++passed : ++failed;
    test23() == 0 ? ++passed : ++failed;
    test24() == 0 ? ++passed : ++failed;
    test25() == 0 ? ++passed : ++failed;
    test26() == 0 ? ++passed : ++failed;
    test27() == 0 ? ++passed : ++failed;
    test28() == 0 ? ++passed : ++failed;
    test29() == 0 ? ++passed : ++failed;
    test30() == 0 ? ++passed : ++failed;
    test31() == 0 ? ++passed : ++failed;
    test32() == 0 ? ++passed : ++failed;
    test33() == 0 ? ++passed : ++failed;
    test34() == 0 ? ++passed : ++failed;
    test35() == 0 ? ++passed : ++failed;
    test36() == 0 ? ++passed : ++failed;
    test37() == 0 ? ++passed : ++failed;
    test38() == 0 ? ++passed : ++failed;
    test39() == 0 ? ++passed : ++failed;
    test40() == 0 ? ++passed : ++failed;
    test41() == 0 ? ++passed : ++failed;
    test42() == 0 ? ++passed : ++failed;
    test43() == 0 ? ++passed : ++failed;
    test44() == 0 ? ++passed : ++failed;
    test45() == 0 ? ++passed : ++failed;
    test46() == 0 ? ++passed : ++failed;
    test47() == 0 ? ++passed : ++failed;
    test48() == 0 ? ++passed : ++failed;
    test49() == 0 ? ++passed : ++failed;
    test50() == 0 ? ++passed : ++failed;
    test51() == 0 ? ++passed : ++failed;
    test52() == 0 ? ++passed : ++failed;
    test53() == 0 ? ++passed : ++failed;
    test54() == 0 ? ++passed : ++failed;
    test55() == 0 ? ++passed : ++failed;
    test56() == 0 ? ++passed : ++failed;
    test57() == 0 ? ++passed : ++failed;
    test58() == 0 ? ++passed : ++failed;
    test59() == 0 ? ++passed : ++failed;
    test60() == 0 ? ++passed : ++failed;
    test61() == 0 ? ++passed : ++failed;
    test62() == 0 ? ++passed : ++failed;
    test63() == 0 ? ++passed : ++failed;
    test64() == 0 ? ++passed : ++failed;
    test65() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22652595&rd=10000&pm=6442
********************************************************************************
#include<iostream> 
#include<string> 
#include<vector> 
using namespace std; 
class StringSegment 
{ public: 
  double average(string s) 
 {  
char c; 
c=s[0]; 
double n=1,d; 
  for(int i=1;i<s.length(); i++) 
  {  
  if(c!=s[i]) 
 {  
 c=s[i]; n++; 
 } 
         } 
          
       
         d=(double)s.length()/n; 
         return d; 
         } 
         };

********************************************************************************
*******************************************************************************/