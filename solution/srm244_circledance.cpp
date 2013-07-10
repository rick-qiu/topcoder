/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4507
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

class CircleDance {
public:
    int arrangeDancers(vector<int> heights);
};

int CircleDance::arrangeDancers(vector<int> heights) {
    int ret;
    return ret;
}


int test0() {
    vector<int> heights = {180, 183, 178, 185};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> heights = {170, 180, 190};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> heights = {180, 180, 180, 180, 180};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> heights = {184, 165, 175, 186, 192, 200, 176, 192, 194, 168, 205, 201};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> heights = {155, 192, 169, 162, 174, 155, 180, 184, 150, 180, 192, 198, 199};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> heights = {171, 189, 206, 164, 196, 205, 168, 175, 202, 170, 159, 151, 173, 153, 198, 184, 169, 168, 153};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> heights = {173, 163, 156, 199, 156, 193, 206};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> heights = {179, 189, 156, 150, 186, 199, 170, 171, 202, 208, 205, 151, 207, 172, 193};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> heights = {161, 154, 164};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> heights = {159, 171, 183, 154};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> heights = {152, 158, 179, 187, 174, 206, 165, 195, 161, 167, 186, 182, 174, 153, 203};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> heights = {188, 181, 196, 183, 167, 175, 189, 181, 168, 210};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> heights = {204, 161, 207, 165, 179, 164, 151, 178, 160, 180, 194, 157, 173};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> heights = {209, 171, 182, 180, 165, 190, 199, 151, 153, 207, 169, 177};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> heights = {154, 208, 160, 204, 190, 206, 210, 156, 169, 208, 197};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> heights = {151, 173, 151};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> heights = {179, 151, 168, 157};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> heights = {189, 155, 191, 203, 155, 169, 175, 175, 205, 183, 185, 200, 171, 198};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> heights = {162, 151, 187, 209, 197, 172, 159, 189, 194, 163, 186};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> heights = {172, 208, 153, 176, 197, 205, 206, 165, 156, 172, 189, 210};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> heights = {159, 168, 175, 209, 203, 153, 207, 159, 198};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> heights = {195, 190, 190, 201, 210, 168};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> heights = {201, 169, 150, 163, 161, 171};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> heights = {182, 198, 208, 164, 209, 185, 204, 157, 199, 164, 169, 179, 166, 158, 190, 152};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> heights = {210, 209, 208, 207, 206, 205, 204, 203, 202, 201, 200, 199, 198, 197, 195};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> heights = {210, 209, 208, 207, 206, 205, 204, 203, 202, 201, 200, 199, 198, 197, 195, 194};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> heights = {170, 180, 190};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> heights = {184, 165, 175, 186, 192, 200, 176, 192, 194, 168, 205, 201};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> heights = {180, 183, 178, 185};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> heights = {156, 200, 197, 203, 199, 198, 186, 196, 189, 205, 190, 156, 189, 190, 191, 192, 193, 194, 200, 210};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> heights = {150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150, 150};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> heights = {151, 161, 171, 210, 198, 167, 188, 197, 190, 200, 209, 208, 150, 152, 187, 199, 201, 205, 153, 154};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> heights = {150, 150, 151, 151, 152, 152, 153, 153, 154, 154, 155, 155, 156, 156, 157, 157, 158, 158, 159, 159};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> heights = {184, 165, 175, 186, 192, 200, 176, 192, 194, 168, 205, 201, 201, 201, 201, 201, 201, 201, 201, 201};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> heights = {150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 169, 168, 167, 166, 165, 164, 163, 162, 161, 160};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> heights = {202, 192, 152, 198, 152, 173, 203, 174, 166, 195, 200, 168, 193, 202, 163, 187, 189, 185, 157, 166};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> heights = {200, 199, 197, 194, 190, 185, 179, 172, 160, 159, 157, 157, 190, 160, 159, 158, 157, 156, 155, 154};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> heights = {184, 165, 175, 186, 192, 200, 176, 192, 194, 168, 205, 201, 176, 195, 205, 201, 194, 184, 181, 199};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> heights = {184, 165, 175, 186, 192, 200, 176, 192, 194, 168, 205, 201, 175, 185, 186, 194, 195, 195, 187, 193};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> heights = {151, 152, 153, 160, 171, 184, 192, 193, 194, 195};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> heights = {161, 204, 187, 155, 199, 201, 165, 188, 174, 150, 191, 159, 163, 209, 187, 185, 162, 159, 173, 191};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> heights = {184, 165, 175, 186, 192, 200, 176, 192, 194, 168, 205, 201, 180, 180, 180, 180, 180, 180, 180, 180};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> heights = {184, 165, 175, 186, 192, 200, 176, 192, 194, 168, 186, 162, 177, 182, 199, 209, 179, 199, 192, 166};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> heights = {177, 196, 157, 195, 172, 182, 154, 207, 179, 164, 152, 186, 160, 162, 160, 192, 196, 178, 192, 153};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> heights = {155, 155, 155, 167, 194, 185, 175, 201, 193, 167, 201, 209, 168, 183, 192, 183, 164, 193, 200, 192};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> heights = {157, 210, 201, 170, 191, 195, 181, 200, 163, 188, 191, 166, 206, 177, 184, 174, 204, 206, 163, 202};
    CircleDance* pObj = new CircleDance();
    clock_t start = clock();
    int result = pObj->arrangeDancers(heights);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14970299&rd=7219&pm=4507
********************************************************************************
# include <string> 
# include <vector> 
# include <algorithm> 
# include <cstdlib> 
# include <cmath> 
# include <cstdio> 
# include <iostream> 
# include <cstring> 
# include <sstream> 
# include <set> 
# include <queue> 
# include <map> 
# include <deque> 
# include <numeric> 
# include <utility> 
# include <functional> 
 
using namespace std ; 
 
class CircleDance 
{ 
public : 
  int arrangeDancers ( vector <int> heights ) 
  { 
    sort ( heights . begin ( ) , heights . end ( ) ) ; 
    int ans = 0 ; 
    int i ; 
    int n = heights . size ( ) ; 
    for ( i = 0 ; i < n - 2 ; ++ i ) 
      if ( heights [ i + 2 ] - heights [ i ] > ans ) 
        ans = heights [ i + 2 ] - heights [ i ] ; 
    if ( heights [ 1 ] - heights [ 0 ] > ans ) 
      ans = heights [ 1 ] - heights [ 0 ] ; 
    if ( heights [ n - 1 ] - heights [ n - 2 ] > ans ) 
      ans = heights [ n - 1 ] - heights [ n - 2 ] ; 
    return ans ; 
  } 
   
  
} ; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/