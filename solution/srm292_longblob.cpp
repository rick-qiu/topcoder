/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4434
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

class LongBlob {
public:
    double maxLength(vector<string> image);
};

double LongBlob::maxLength(vector<string> image) {
    double ret;
    return ret;
}


int test0() {
    vector<string> image = {"0010", "1001", "0011", "0111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 4.242640687119285;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> image = {"101010101"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> image = {"011111111111111110", "011111111111011110", "111111111111111110"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0990195135927845;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> image = {"011111111111111110", "011111111111010110", "111111111111111110"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 6.082762530298219;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> image = {"0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 33.94112549695428;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> image = {"1111111111111111111111111", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 33.94112549695428;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> image = {"1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> image = {"00", "00"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> image = {"01010101010"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> image = {"0101", "1010", "0101"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 3.605551275463989;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> image = {"01011", "11100", "01110", "11111", "01011", "11111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 5.656854249492381;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> image = {"11111", "11111", "11111", "11111", "11111", "11111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> image = {"11111", "11111", "01011", "11111", "11111", "11111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 4.123105625617661;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> image = {"11111", "11111", "01011", "11111", "11111", "01111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> image = {"11111", "01011", "11111", "11111", "01111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 4.47213595499958;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> image = {"1111111110001111111111", "1111111101110111111111", "1111111011111011111111", "1111110111111101111111", "1111101111111110111111", "1111011111111111011111", "1111111111011111111111", "1111111111011111111111", "1111111111011111111111", "1111111111011111111111", "1111111111011111111111", "1111111111000000000000"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 15.811388300841896;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> image = {"1111111100001111111111", "1111111001110111111111", "1111110011111011111111", "1111100111111101111111", "1111001111111110111111", "1111101111011111011111", "1111111111011111111111", "1111111111011111111111", "1111111111011111111111", "1111111111011111111111", "1111111111011111111111", "1111111111000000000000"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 18.384776310850235;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> image = {"1111111", "1111111", "1111111", "1111111", "1111111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> image = {"0101010101010101010101010", "1010101010101010101010101"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> image = {"0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> image = {"0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> image = {"001100100111", "001100100111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 9.055385138137417;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> image = {"110011"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> image = {"1111001111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> image = {"1001"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> image = {"10011111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> image = {"0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000", "0000000000000000000000000"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 33.94112549695428;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> image = {"0000000", "1100010", "0100010", "0000010", "0000010", "1010000", "0100101", "0000001", "0001110", "0000100", "0011000", "1110001", "1100001", "0111001", "1010001", "0100100", "0100000", "0100101", "0100100", "0010000", "0101110"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 20.8806130178211;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> image = {"111010101010"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> image = {"101111111111110001", "111111111111001101", "110001010101011100", "111111111111111111", "111011110001010000", "011111001100100111", "010100111101110001", "111011111101111100", "101101110111011110", "110111101100111111", "011111111111101101", "110010111100110011", "111110101111111000", "111111001011110011", "011011111101001111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 16.15549442140351;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> image = {"0011", "0110", "0000", "1000", "0110", "1010", "0101", "0001", "1011", "1000", "1010", "1000", "1000", "0000", "1100", "0000", "0101", "0000", "1011", "1101", "0110", "0000"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 21.213203435596427;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> image = {"1010010010000000110010", "0010001100000000000001", "0100001000000110001001", "1000000000000000001010", "0011101011011001100000", "1010010000000001001001", "0000010000100001000100", "1000010000001000000000", "1000000000010000101100", "0010001100000100000000", "0011001000001010000000", "0101001010100010110000", "1100000000011000110000", "0000001111000010001011", "0001000101010100000011", "0000000010000000000001", "0000010010110001001000", "0011100100110000000000"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 27.018512172212592;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> image = {"0100111111000111100110001", "1110111011111111111111010", "1100110101111101110010101", "1101111111001010111011111", "1111111001111001000111110", "1011010111111010111101000", "1001111111110011111010011", "1011110101011111100100110"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 12.529964086141668;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> image = {"000000000", "011000000", "100001000", "010000101", "001000000", "000001000", "010001000", "100111110", "001000101", "111000000", "010000000", "100000010", "100010001", "001001101", "000110001", "100000100", "010001111", "000110010", "000010010", "010100100", "001000010"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 21.540659228538015;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> image = {"1111010111111101011111", "0000111111010111111111", "1011111111111111111111", "1110111111111111111111", "1111111111111111111111", "1111111111111111111111", "0110111111111001111111", "1111101110111111111111", "1111111011111010111111", "1111111101111111110111", "1111111111111111101111", "1111111111111111111011", "1110111111110011111101", "1111111111111111111111", "1111111110101110111111", "1111111111111101111111", "1101111111111101111110", "0111111011111111111110", "1111011110111111111111", "1111111110111111111110"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 8.06225774829855;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> image = {"10001000110000001", "00000011110010000", "00011001001001001", "00000101000010001", "11100001010001010", "10001100001001100", "01100000011000110", "00010001000010011", "00010110000000000", "01110100001000100", "00000100000001010", "01111100010010010", "01011000100000100", "00000001000000110", "01000001001100000", "11000100011010100"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 21.93171219946131;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> image = {"1111111111101", "1111011111111", "1111011111111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 4.123105625617661;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> image = {"100010"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> image = {"11", "11", "11", "11", "01", "01", "11", "10"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0990195135927845;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> image = {"00101101110", "11101111111", "11111111101"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> image = {"010111100010011101010111", "111000111110110100010000", "110001000001010000000000", "000000000001000110001000", "010100100000100101001110", "000111111010001011000100", "110001000010001110110110", "001100100111000001000100", "100000001001110000111101", "000010001100111110011010", "101011100101111010001000", "101000001000111010110100", "101101100010010100100001", "000000110100110010011101", "001010010100011111110000"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 26.92582403567252;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> image = {"1111011111101101101010", "1111111011111111111111", "1111111111111111111011", "1111111111111101100100", "1110011111111111111011", "0111111011111111101111", "0110011110110111010111", "1110111110111101110011", "1111101111111110111111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> image = {"111101010111010111", "110111111010111101", "110011110111100001", "111011011110111111", "111101101110111010", "001111011101011011", "110011101111101101", "101111111110111111", "111101111111011111", "101111011111011011", "011111101001011111", "011101111111111111", "011111010101111111", "111111111010011110", "111111101101010010", "111100111110111111", "101110111110111111", "111111111011101101", "111111011110011111", "111111101110111011", "111011111111111110"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 11.045361017187261;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> image = {"0000001011001001000", "1000010000111000000", "0010010001010000000", "0001000010000000000", "0100000000001000000", "0010010100010000100", "0011100001000010010", "0100100111000110101", "1000010101000000011", "1000100010110011110", "0001110000000100111", "0000111110011110100"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 21.095023109728988;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> image = {"100", "000", "100", "111", "110", "000", "100", "100", "010", "000", "010", "010", "100"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 12.165525060596439;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> image = {"0", "0", "0", "1"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> image = {"111110111111101101", "101111111111111011", "111111111111111111", "111111011110001101", "111011110111001110", "111111101111111101", "011100111111101011", "111110010011101111", "111011111110111111", "101111110011111110", "111110111101111111", "011011111111101111", "111110111011111001", "111011111000111101", "111111111111111111", "111101011111110101"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 9.899494936611665;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> image = {"001101101010001", "001001101000000", "110011100000000", "000000100000000", "000011000010110", "111001100110000", "010100010011100", "100100100000001", "011110111111000", "001001011001001", "100100010010101", "000000101000100", "100010100110011", "010101110001101", "000011100001000", "100000000000101", "000001110100110"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 21.2602916254693;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> image = {"000111111000110101100", "101111000111001111111", "110010111101111000101", "001100110101111100001", "101001101001001110000", "001110111011011001010", "110101111001101111111", "101111111010001011110", "011111111010000111100", "000100111011111111011", "001000101100111100110", "100101001000011001001", "111011111011110100000", "001101110101110110011", "100110111111111000011", "101010111011110111111", "011011110111011111101", "001010101111100110011", "110100111011110110011"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 17.11724276862369;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> image = {"0011010111011000010001", "0101110101100010100011", "1111000010100010010010", "0100000110001101000100", "0101000000001101100111", "0001000101001001001000", "0001101010101011001110", "0010001000000000000110", "1111000111100110010110", "1010011011100101000000", "1011000110111000100001", "1011110000100001011000", "1100100100011001101001", "1001010110100000101001", "0001111101010100111001"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 25.238858928247925;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> image = {"11100101101011100100", "11011111011111001111", "11110101001001001000", "11010010000011110011", "11111110110011101100", "10111111011000111111", "01010100000110000111", "10011110111111101101", "10110101010110110011", "01011111110111111110", "10110101011101110011", "11000111100010101110", "10111011111110100111", "11010000111011111001", "00000010101111011111", "00001101010111110111", "11111010111001110110", "11011110111011111111", "00001110001011111111", "11111100101100100111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 17.26267650163207;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> image = {"010111011101010", "100001000010000", "001100010001001", "000010100000000", "010100000000000", "000010000000000", "001000000010100", "100010101100011", "010010000001010", "101010010101010", "010000000101001", "001100000000000", "000000000010001", "000000000010000", "001000000000010", "000100100000101", "001010010010000", "011000100000001"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 22.02271554554524;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> image = {"010000110010000100", "000110100101000000", "001110000101000101", "101110000001000000", "100100100001000001", "100000001010000101", "000001010000100100", "001000010100000000", "010101010000000010", "011100100000001000", "101001001110000000", "100000000010010010", "100000100100000000", "100000110000000000", "100110001001110000", "000110011110010001", "001011001011000001", "011010100100100101", "100000001000100000", "100001000000000010", "000000001010011000", "000000001011001101", "000001001000100100", "100101001000001000", "000100000000010000"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 29.410882339705484;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> image = {"10010001001010000001001", "00101001101000000100110", "11100010000000100100110", "01010000001101111010100", "00110011011100000010110", "00110001011010011000100", "00000000010011000001010", "00111001110010101101110", "01110100000110101100110", "00101110110100010100101", "10000000101110100000000", "00001101000001010100111", "00010110010101110110000", "00001001100110110100010", "11110100110100000100000", "11101010010001000101010", "10101010110110010000011", "11111110100001000110110", "10111001000001001010011", "01110010011001000000000", "10011100011111001100011"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 29.732137494637012;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> image = {"1100100011110010011101111", "0001101101101111011111011", "0000010000010000001100001", "0100110000011110011110000", "1010101001100001010011000", "0001011001001000100101000", "1100011110110100110001100", "1100010011001101000100011", "1000101101101111100010101", "1111000100001100010001001", "0111101010100000000110010", "0111101010000100000100101", "0001001011101000001101000", "0001101000010100010000001", "0001000010111000000011111", "0011101001000000100010111", "0010000011011001110101010", "0100000000000100000100100", "0110100101001100100010000"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 30.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> image = {"1011110001111010000", "1100001111011001010", "1100011010111001101", "0000000010101101111", "1010111100011000110", "1111001000000000100", "0011000001000010010", "1001100101001010111", "0000100101100100010", "0100000110000110110", "0100110001001001010", "0110000010110011010", "1110001110111101110", "1111111000011100000", "1000000110101000001", "0011000100000001000", "1110111010111110101", "0101001111100110111", "1011010110111111011", "0010100110001100100", "1111011100111111000", "0011000000010101010", "0111110011001000100", "0101001101011000000"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 27.202941017470888;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> image = {"0010010001011101000", "0010101100000100100", "0001100111001001010", "1010011001111100011", "0010000010111000001", "0000000100101111001", "0100001110000010100", "0000101001000000001", "0000000000011001101", "0011000011001001100", "1110000000010000000", "0010011100101011100", "1101000010010100010", "0010001000000011101", "1010111100000101010"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 22.80350850198276;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> image = {"100001111000110010111", "110010111100000100011", "110101011001111010001", "100000011001110001100", "101000011010110000100", "101010001010010001001", "101100110001000000110", "101111010000000100100", "101000101010000000010", "000011101001000001010", "100100110011111101010", "101011010010110010100", "100100101000110101001", "100100000000110001111", "101001111111111110011", "001011000010101100110", "011000011100000110111", "001110100001110100000", "100111100100110110001", "011010111111010110100", "011111111011000101000"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 28.284271247461902;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> image = {"11100011100001100000011", "10101111000111001000010", "10110000000000010000000", "00110100001010000011100", "00110001011010001100111", "01101011001000101111000", "00000011101011101110010", "00000111110110011110110", "10110111101000000001001", "01110101000100000000100", "10110001000000110010100", "10100110010101010110110", "00000000010010001100101", "00001010011001000101100", "00000100001100010000111", "01010101111110100011011"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 26.627053911388696;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> image = {"100101111001101101", "000100001000001110", "100100100010111010", "101011111101010001", "111000011111110000", "110010111100011110", "001101110111101110", "010010111100101111", "001100101010000010", "110110101010010001", "011100110100110010", "011100100001001010", "010101100000110110", "101000001000101111", "011010101110111100", "000010110001110111", "110100011011010100", "000101000100011011", "000000100011001000", "101010110111001111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 24.839484696748443;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> image = {"11101101111110110111001", "10011111110101101001111", "01001110110111111111000", "11111111111110011111101", "11011111111011101110111", "10101111110101111111011", "00101111011111101111111", "01111111110101110111111", "11111111111111111111110", "00111111110111001111111", "10011111111001111101010", "11010111111111011111111", "11101111011111100111111", "11011111111011111111111", "01100111010011111111111", "11111111111010011111110", "10011111100111111110111", "01111011111100011110101", "11110111011011101111100", "11111100101111111101111", "11111011110110101111111", "11111111101111111111110", "11011101111111111111011", "11111111111010111111111", "11111111111111111111011"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 12.041594578792296;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> image = {"0011001101010110110", "0000111110001011111", "0011111111111001000", "1001000000001000000", "1000010010010010111", "0011011011000011000", "1101011000110111101", "0001001011100100000", "1011101101101111110", "1100000000100011101", "0001101011010010000", "0001001110010000001", "0101011100101000111", "1101101111110111000", "1101001110001000000"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 22.80350850198276;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> image = {"1010000100001000", "0110000000000101", "0000101000000100", "0001000100001100", "0010010010000100", "0000011011110010", "0100101000010001", "0000010011000000", "1000000001010110", "1010011010111001", "1011000001000110", "0000100000000100", "0100000100001000", "0001000001000010", "1010000011000001", "1000100000001100", "1001001010000100", "0100001100001000", "0000100010000110", "0110000000000010"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 24.20743687382041;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> image = {"10000001001000000000", "01010000110000011010", "01100011101010100100", "00010000101000100101", "01000101101011110010", "00001010001011100010", "01000000100101110000", "01001000000001101100", "11100001010100000000", "00101011010000000010", "00001001000000000000", "00001001000110101000", "00110000101000000000", "00001100000100000001", "10100110001101001000"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 23.600847442411894;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> image = {"010000010011111001", "110011001010111011", "011110010001010010", "110101000111000010", "110110011000110100", "110001110011001000", "011001101000011110", "100100001111010110", "111010111100110011", "110111011101010110", "011100011011101101", "110100000101011010", "001000001111000111", "101000011010010010", "110010110100111101", "010000101111011101"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 21.93171219946131;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> image = {"11001101101111101111001", "11101000000111110111001", "00011111111101110001011", "11100110100100100100110", "01111101010011101111010", "11100011001010111001110", "11011111111100110010111", "11001111111000111100011", "10100101111111101011111", "11111111100110110110111", "10110010010110100110110", "11100110111001001010010", "11001010100011100000110", "11010011110111111000000", "10111010101101100111001", "01111010011111001101110", "10101000010010001101011", "11011111111101010101110", "11100001110110011011001", "00101111101010110100111", "01101111111010101010101", "01101111101010110100001", "01110000110011110010101"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 21.95449840010015;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> image = {"0001000000000001111", "0000001100001100001", "0001000101101000000", "1000010100000011011", "0000001110000100111", "0110000000001000000", "0101000000101000000", "0000000000000111010", "1011000110011110000", "1001010011000000000", "0000000011000100000", "0001110000001001100", "1100001001100011000", "0000010000001011000", "0010001100001000010", "0000000000001000000", "0001000000010100010", "1000001010000000000", "0100000000011010101", "0011001000010100000", "0100000000000000101", "0000000001000001001", "0000001000000010001"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 28.42534080710379;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> image = {"1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> image = {"0111110111110111110111110", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "0111110111110111110111110", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "0111110111110111110111110", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "0111110111110111110111110", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "0111110111110111110111110", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> image = {"0111110111110111110111110", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "0111110111110111110111110", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "0111110111110111110111110", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "0111110111110111110111110", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "0111110111110111110111110"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> image = {"1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> image = {"01011", "11100", "01110", "11111", "01011", "11111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 5.656854249492381;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> image = {"11", "11"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4142135623730951;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> image = {"1111110011111011110000101", "1011110100111101010010111", "1110011011111001111110101", "1000101010111110011111001", "0110000110111100100010101", "1011111011101101100111110", "1111010101110110101111110", "0000110110101111101100111", "1110111110110111010010111", "0000111111100111111110110", "1010011111100010101110111", "1110110000111111100111011", "1010111111101010111111011", "1011111100111111101011110", "1101110111011111000101101", "0111111011111100101111101", "1111110111111011111010010", "1111111110111111111111110", "1111111110111011101011110", "1100011010101111111011111", "1111111001010111111101111", "1100111110111110000101011", "0111010001001011110011001", "1110110110111110111101101", "0110011101110110111101011"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 13.341664064126334;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> image = {"1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1110000000011111111111111", "1110111111011111111111111", "1110101111011111111111111", "1111111111100000000010010", "1111100111111111111111111", "1111110111111111111111111", "1111110111111111111111111", "1111110111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 22.20360331117452;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> image = {"1111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> image = {"0111111111111100000000000", "0111111111111101111111111", "0111111111111101111111111", "0111111111111101111111111", "0111111111111101111111111", "0111111111111101111111111", "0111111111111101111111111", "0111111111111101111111111", "0111111111111101111111111", "0111111111111101111111111", "0111111111111101111111111", "0111111111111101111111111", "0111111111111101111111111", "0111111111111101111111111", "0111111111111101111111111", "0111111111111101111111111", "0111111111111101111111111", "0111111111111101111111111", "0111111111111101111111111", "0111111111111101111111111", "0111111111111101111111111", "0111111111111101111111111", "0111111111111101111111111", "0111111111111101111111111", "0000000000111101111111111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 33.94112549695428;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> image = {"1111111111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> image = {"1010101010101010101010101", "0101010101000101000101010", "1010101010101010001010101", "0101010101010101010101010", "1010101010001010101010101", "0101010101101100101101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "0110101010101110101010010", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101", "0101010101010101010101010", "1010101010101010101010101"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 12.165525060596439;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> image = {"1111111111111111111111111", "1111111111111111111111111", "1111111111111110111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111011111111111111111", "1111111111111111111111111", "1111111111111111110111111", "1111111111111111110111111", "1111111111111111110111111", "1101111111111111110111111", "1111111111111111110111111", "1111111111111111110111111", "1111111111111111111111111", "1111111101010100000111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111111111111111111111111", "1111101111111111110111111", "1111111111111111111111111", "1111110111111111111111111", "1111111111111111111111111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 12.206555615733702;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> image = {"111", "111", "111"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 2.23606797749979;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> image = {"000"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> image = {"1111110000000000"};
    LongBlob* pObj = new LongBlob();
    clock_t start = clock();
    double result = pObj->maxLength(image);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test66() == 0 ? ++passed : ++failed;
    test67() == 0 ? ++passed : ++failed;
    test68() == 0 ? ++passed : ++failed;
    test69() == 0 ? ++passed : ++failed;
    test70() == 0 ? ++passed : ++failed;
    test71() == 0 ? ++passed : ++failed;
    test72() == 0 ? ++passed : ++failed;
    test73() == 0 ? ++passed : ++failed;
    test74() == 0 ? ++passed : ++failed;
    test75() == 0 ? ++passed : ++failed;
    test76() == 0 ? ++passed : ++failed;
    test77() == 0 ? ++passed : ++failed;
    test78() == 0 ? ++passed : ++failed;
    test79() == 0 ? ++passed : ++failed;
    test80() == 0 ? ++passed : ++failed;
    test81() == 0 ? ++passed : ++failed;
    test82() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=310333&rd=9813&pm=4434
********************************************************************************
#include <algorithm> 
#include <cmath> 
#include <iostream> 
#include <queue> 
#include <string> 
#include <vector> 
 
using namespace std; 
 
 
int R, C; 
int a[25][25]; 
int bio[25][25][5]; 
 
const int dr[4] = { -1, 0, 1, 0 }; 
const int dc[4] = { 0, 1, 0, -1 };  
 
struct state { 
   int r, c, x; 
}; 
 
class LongBlob {  
   public:  
    
   void update( queue<state> &Q, state &A ) { 
      if( bio[A.r][A.c][A.x] ) return; 
      bio[A.r][A.c][A.x] = 1; 
      Q.push( A ); 
   } 
 
   int solve( int r, int c ) { 
      state A; 
      A.r = r; A.c = c; A.x = 4 - (a[r][c]=='1'); 
      int ret = 0; 
 
      queue<state> Q; 
      memset( bio, 0, sizeof bio ); 
      for( update( Q, A ); !Q.empty(); Q.pop() ) { 
         A = Q.front(); 
         ret >?= (A.r-r)*(A.r-r) + (A.c-c)*(A.c-c); 
         for( int d = 0; d < 4; ++d ) { 
            state B; 
            B.r = A.r + dr[d]; 
            B.c = A.c + dc[d]; 
            if( B.r < 0 || B.r >= R ) continue; 
            if( B.c < 0 || B.c >= C ) continue; 
            B.x = A.x - (a[B.r][B.c]=='1');  
            if( B.x < 0 ) continue; 
             
            update( Q, B ); 
         } 
      } 
 
      return ret; 
   } 
 
   double maxLength(vector <string> image) {  
      R = image.size(); 
      C = image[0].size(); 
      for( int r = 0; r < R; ++r )  
         for( int c = 0; c < C; ++c )  
            a[r][c] = image[r][c]; 
 
      int ret = 0; 
      for( int r = 0; r < R; ++r )  
         for( int c = 0; c < C; ++c )  
            ret >?= solve( r, c ); 
       
      return sqrt((double)ret); 
   }  
 
 
 
 
 
    
 
};  
 
 
 
// Powered by FileEdit
// Powered by moj 3.0 beta 7 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/