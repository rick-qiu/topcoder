/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1968
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

class SkipRope {
public:
    vector<int> partners(vector<int> candidates, int height);
};

vector<int> SkipRope::partners(vector<int> candidates, int height) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> candidates = {102, 99, 104};
    int height = 100;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {99, 102};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> candidates = {102, 97, 104};
    int height = 100;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {97, 102};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> candidates = {101, 100, 99};
    int height = 100;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 101};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> candidates = {75, 117, 170, 175, 168, 167, 167, 142, 170, 85, 89, 170};
    int height = 169;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {170, 170};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> candidates = {134, 79, 164, 86, 131, 78, 99, 150, 105, 163, 150, 110, 90, 137, 127, 130, 121, 93, 97, 131, 170, 137, 171, 153, 137, 138, 92, 103, 149, 110, 156};
    int height = 82;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {79, 86};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> candidates = {129, 167, 153, 121, 81, 123, 170, 108, 116, 156, 137, 81, 155, 145, 111, 136, 98, 100, 160};
    int height = 137;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {136, 137};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> candidates = {162, 133, 143, 140, 148, 94, 81, 165, 86, 140, 160, 100, 129, 77, 142, 125, 108, 112};
    int height = 164;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {162, 165};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> candidates = {119, 87, 89, 98, 137, 118, 158, 172, 92, 117, 122, 142, 129, 141, 169, 141, 140};
    int height = 166;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {169, 172};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> candidates = {84, 96, 86, 153, 157, 122, 155, 137, 94, 94, 114, 140, 103};
    int height = 126;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {122, 137};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> candidates = {97, 78, 111, 164, 87, 82, 135, 114, 132, 173, 129, 170, 90, 75, 139, 106, 125, 112, 75, 157, 98};
    int height = 133;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {132, 135};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> candidates = {124, 121, 77, 105, 134, 155, 81, 153, 77, 175, 137, 145, 138, 80, 162, 169, 137, 140, 138, 145, 148, 87, 78, 163, 153, 171, 112, 92, 130, 156, 114, 149, 86, 160, 105, 77};
    int height = 122;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {121, 124};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> candidates = {120, 128, 120, 133, 97, 160, 91, 101, 155, 91, 88, 162, 139, 102, 89, 132, 102, 77, 111};
    int height = 155;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {155, 160};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> candidates = {120, 105, 167, 86, 85, 150, 163, 159, 102, 124, 83, 161};
    int height = 89;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {85, 86};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> candidates = {84, 126, 138, 172, 91, 162, 163, 140, 148, 113, 95, 148, 131};
    int height = 123;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {126, 131};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> candidates = {133, 146, 82, 98, 152, 107, 84, 124, 100, 157, 162, 81, 123, 160, 142, 117, 170, 115, 156, 121, 163, 139, 88, 142, 104, 146, 86, 81, 105, 80, 99};
    int height = 81;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {81, 81};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> candidates = {144, 163, 137, 111, 116, 111, 92, 158, 103, 142, 142, 109, 109, 81, 87, 143, 167};
    int height = 121;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {111, 116};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> candidates = {111, 125, 138, 112, 127, 100, 153, 161, 78, 92, 131, 89};
    int height = 161;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {153, 161};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> candidates = {85, 152, 162, 151, 96, 137, 78, 141, 165, 94, 149, 105, 147, 99, 100, 131, 97, 79, 90, 115, 83, 170, 165, 92, 93, 94, 132, 152, 158, 118, 148, 137, 123, 117, 97, 146, 114, 159, 159, 95, 121, 80, 90, 75, 142, 127, 102, 120, 141, 78};
    int height = 83;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {83, 85};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> candidates = {149, 112, 109, 124, 87, 163, 153, 150, 167, 105, 136, 105, 165, 138, 159, 101, 115, 99, 154, 114, 75, 171, 166, 128, 104, 145};
    int height = 160;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {159, 163};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> candidates = {103, 149, 140, 141, 98, 115, 134, 166, 130, 136, 118, 123, 141, 104, 154, 88, 139, 118, 157, 144, 121, 117, 171, 111, 171, 174, 90, 169, 156, 78, 133, 167, 82};
    int height = 102;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {103, 104};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> candidates = {171, 81, 107, 158, 155, 116, 87, 156, 85, 109, 83, 77, 86, 78, 174, 145, 147, 89, 113, 75, 127, 125, 108, 134, 123, 129, 95, 135, 81, 113, 138, 139};
    int height = 161;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {156, 158};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> candidates = {170, 92, 152, 126, 116, 155, 116, 145, 131, 93, 123, 175, 76, 78, 88, 78, 146, 104, 171, 159, 112, 86, 133, 150, 81, 110, 76, 92, 167, 136, 76, 160};
    int height = 135;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {133, 136};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> candidates = {125, 138, 77, 110, 97, 160, 109, 163, 82, 167, 117, 130, 143, 91, 98, 116, 142, 175, 149, 92, 81, 125, 134, 113, 132, 109, 79, 169, 141, 130, 144, 164, 79, 149, 156};
    int height = 149;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {149, 149};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> candidates = {117, 174, 171, 156, 150, 117, 94, 170, 138, 95, 103, 98, 127, 119, 147, 142, 88, 104};
    int height = 126;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {119, 127};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> candidates = {157, 130, 174, 143, 132, 163, 114, 154, 126, 77, 124, 175, 137, 171, 122, 111, 93, 107, 100, 135, 85, 112, 155, 110, 101, 104, 165, 92, 87, 80, 127, 90, 125, 106, 149, 92, 139, 136, 93, 166, 158, 80, 156};
    int height = 133;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {132, 135};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> candidates = {105, 89, 108, 77, 82, 162, 139, 163, 100, 154, 125, 122, 75, 144, 96, 86, 169, 146, 97, 127, 168, 98, 86, 154, 86, 138, 118, 173, 168, 139, 157, 162, 91, 161, 145, 134, 156, 133, 134, 80, 94, 129, 80, 84};
    int height = 142;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {144, 145};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> candidates = {168, 160, 104, 107, 93, 174, 138, 152, 76, 152, 159, 83, 156, 159, 97, 103, 132, 99, 161, 123, 107, 75};
    int height = 157;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {156, 159};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> candidates = {119, 139, 152, 139, 133, 152, 98, 174, 81, 150, 128, 103, 78, 131, 111, 160, 114, 137, 114, 101, 87, 84, 94, 165, 87};
    int height = 175;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {165, 174};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> candidates = {136, 149, 96, 98, 82, 89, 118, 97, 109, 100, 169, 165, 173, 95, 125, 101, 111, 88, 111, 171, 139, 107, 75, 123, 95, 85, 150, 82, 171, 79};
    int height = 149;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {149, 150};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> candidates = {174, 83, 128, 115, 85, 100, 163, 98, 164, 149, 175, 78, 122, 150, 137, 108, 77, 117, 139, 81, 162, 147, 110, 83, 76, 152, 108, 156, 135, 131, 167, 95, 129, 134, 131, 143, 80, 115, 107, 118, 92, 135, 100, 137, 113, 83};
    int height = 109;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {108, 110};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> candidates = {83, 156, 81, 143, 155, 79, 78, 107, 97, 135, 121};
    int height = 161;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {155, 156};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> candidates = {88, 81, 118, 82, 125, 109, 97, 99, 100, 131, 132, 94, 157, 170, 116, 95, 158, 154, 167, 101, 135, 161};
    int height = 172;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {167, 170};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> candidates = {115, 82, 125, 93, 138, 111, 149, 101, 107, 116, 160, 137, 142, 95, 100, 173, 143, 159, 150, 132, 119, 110, 86, 135, 96, 157, 111, 76, 121, 93, 116, 147, 83};
    int height = 130;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {132, 135};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> candidates = {85, 112, 85, 151, 144, 76, 79, 132, 144, 156, 93, 137, 108, 111, 84, 106, 165, 83, 140, 137, 75, 101, 163, 118, 158, 148, 171, 97, 175, 131, 159};
    int height = 135;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {137, 137};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> candidates = {150, 87, 175, 169, 86, 135, 163, 99, 88, 118, 118, 136, 136, 110, 123, 117, 97, 129, 154, 95, 83, 152, 123, 125, 128, 84, 152, 144, 85, 165, 141, 148, 153, 125, 165, 88, 91};
    int height = 98;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {97, 99};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> candidates = {101, 173, 167, 155, 129, 175, 110, 173, 169, 167, 137, 112, 166, 136, 124, 115, 167, 110, 111, 99, 110};
    int height = 171;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {173, 173};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> candidates = {152, 90, 106, 122, 127, 102, 81, 85, 172, 171, 159, 150, 94, 92};
    int height = 158;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {152, 159};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> candidates = {144, 110, 87, 91, 164, 144, 126, 173, 137, 150, 106, 80, 110, 128, 91, 172, 98, 98, 123, 77, 130, 166, 161, 158, 158, 172, 142, 154};
    int height = 104;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {106, 110};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> candidates = {82, 105, 112, 147, 112, 77, 93, 127, 158, 95, 151, 139, 103, 103, 174, 112, 95, 108, 109, 162, 164, 118, 119, 121, 156, 150, 169, 127, 171, 102, 123, 149, 132, 108, 83, 148, 174};
    int height = 99;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {102, 103};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> candidates = {110, 87, 101, 137, 149, 85, 77, 113, 124, 75, 136, 87, 97, 99, 96, 139, 149, 102, 160, 110, 97, 151, 106, 81, 149, 166, 91, 162};
    int height = 99;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {99, 101};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> candidates = {86, 110, 141, 147, 119, 156, 108, 90, 102, 125, 86, 146, 149, 140, 101, 136, 140, 161, 116, 165, 93, 95, 129};
    int height = 153;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {149, 156};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> candidates = {100, 163, 100, 122, 102, 100, 119, 109, 169, 143, 79, 94, 81, 151, 87, 82, 153, 160, 164, 119, 144, 165, 159, 151, 93, 107};
    int height = 159;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {159, 160};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> candidates = {159, 155, 123, 84, 87, 97, 75, 100, 123, 82, 79, 164, 129, 133, 161, 169, 156, 166, 92, 90, 82, 149, 86, 174, 167, 133, 169, 89, 161, 125, 82, 149, 87, 174, 158, 140, 146, 160, 130, 158, 159, 115, 174, 76, 164, 111, 89, 138};
    int height = 90;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {89, 90};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> candidates = {159, 113, 78, 172, 77, 147, 118, 84, 141, 108, 133, 100, 116, 79, 151, 115};
    int height = 154;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {151, 159};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> candidates = {84, 138, 129, 170, 142, 112, 136, 174, 130, 148, 163, 159, 150, 149, 154, 153, 103, 83, 80, 108, 161, 133, 105, 137, 122, 174, 157, 101, 140, 107, 88, 141, 163, 84, 118, 115, 140, 161, 141, 132, 99, 164, 98, 174, 151, 146, 101, 121, 87};
    int height = 111;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {108, 112};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> candidates = {136, 88, 136, 83, 115, 162, 157, 95, 172, 114, 108, 104, 95, 149, 134, 105, 106, 100, 109, 86, 100, 117, 90, 132, 108, 114, 155, 141, 112, 168, 160, 150, 139, 154, 103, 150, 78, 95, 163, 158, 117};
    int height = 157;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {157, 158};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> candidates = {128, 155, 108, 101, 154, 84, 128, 87, 100, 172, 134, 144, 95, 134, 122, 127, 130, 175, 89, 173, 82, 75, 140, 77, 76, 95, 166};
    int height = 149;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {144, 154};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> candidates = {132, 166, 102, 126, 168, 105, 129, 101, 111, 143, 79, 84, 118, 108, 153, 105, 93, 171, 114, 122, 94, 101, 168, 169, 105, 108, 175, 147, 84, 92, 127, 111, 116, 129, 122, 157, 168, 134, 97, 142, 149, 151, 158, 121, 114, 166, 131, 173, 119, 125};
    int height = 166;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {166, 166};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> candidates = {103, 86, 112, 164, 93, 94, 167, 175, 149, 84, 158, 135, 91, 90, 79, 136, 81, 95, 116, 118, 83, 122, 151, 145, 128, 101, 137, 143, 132, 102, 121, 82, 146, 120, 122, 171, 83, 145, 95, 129, 135, 91, 174, 99, 117, 108, 168, 157, 114, 144};
    int height = 168;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {167, 168};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> candidates = {141, 90, 90, 174, 151, 114, 111, 164, 151, 93, 89, 85, 125, 154, 94, 145, 91, 135, 91, 135, 165, 111, 159, 163, 119, 137, 102, 89, 156, 101, 143, 98, 158, 174, 167, 81, 116, 110, 167, 151, 122, 173, 120, 122, 147, 105, 155};
    int height = 129;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {125, 135};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> candidates = {98, 85, 76, 126, 159, 86, 142, 154, 165, 130, 145, 124, 116};
    int height = 94;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {86, 98};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> candidates = {125, 85, 99, 89, 110, 135, 130, 116, 93, 153, 91, 161, 141, 100, 125, 111, 162, 127, 138, 113, 173, 86, 110, 87, 149, 142, 171, 175, 163, 91, 105, 129, 171, 115, 105, 101, 170};
    int height = 80;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {85, 86};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> candidates = {160, 173, 126, 159, 151, 81, 94, 123, 146, 112, 163, 145, 120, 118, 142, 120, 119, 113};
    int height = 105;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {112, 113};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> candidates = {135, 140, 115, 154, 127, 139, 126, 129, 123, 88, 118, 147, 115, 165, 83, 156, 142, 117, 135, 85, 158, 140, 87, 109, 122, 105, 76, 85, 83, 127, 148, 140, 98, 145, 98, 92, 94, 76, 132, 124, 160};
    int height = 120;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {118, 122};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> candidates = {81, 171, 127, 121, 122, 107, 98, 142, 159, 114, 174, 132, 151, 148, 159, 115, 120, 98, 163, 124, 148, 83, 76, 86, 113, 78, 87, 172, 143, 97, 109, 116, 75};
    int height = 108;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {107, 109};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> candidates = {119, 76, 88, 123, 174, 145, 143, 173, 123, 174, 106, 163, 120, 143, 114, 89, 175, 160, 102, 132, 76, 105, 97, 157, 161, 97, 132, 77, 89, 85, 147, 144, 84, 98};
    int height = 135;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {132, 132};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> candidates = {127, 91, 92, 148, 155, 153, 88, 149, 112, 128, 170, 105, 136, 94, 132, 87, 96, 122, 156, 107, 131, 105, 77, 100, 162, 150, 140, 131, 92, 136, 102, 103, 127, 147, 130, 148, 86, 136, 119, 100, 122, 146, 94, 158, 85, 140, 130};
    int height = 146;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {146, 147};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> candidates = {82, 163, 95, 162, 140, 158, 151, 120, 104, 75, 168, 125, 170, 150, 116, 161, 82, 149, 99, 166, 126, 108, 145, 159, 159, 136, 89, 134, 106, 108, 112, 173, 84, 153, 143, 158};
    int height = 122;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {120, 125};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> candidates = {127, 109};
    int height = 152;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {109, 127};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> candidates = {134, 147, 134, 89, 128, 158, 139, 88, 83, 157, 97, 80, 98, 80};
    int height = 79;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {80, 80};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> candidates = {136, 146, 80, 156, 131, 113, 168, 137, 168, 151, 163, 161, 141, 149, 136, 76, 131, 104, 90, 170, 115, 82, 101, 87, 162, 86, 175, 173, 150, 155, 85, 82, 84, 115, 143, 82, 122, 157, 174};
    int height = 84;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {84, 85};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> candidates = {83, 139, 156, 164, 140, 156, 101, 76, 170};
    int height = 157;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {156, 156};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> candidates = {116, 77, 104, 156, 142, 121, 150, 138, 106, 172, 89};
    int height = 102;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {104, 106};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> candidates = {103, 148, 108, 110, 152, 153, 147, 130, 121, 86, 142, 173, 116, 97, 151, 173, 169, 94, 163};
    int height = 91;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {86, 94};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> candidates = {132, 175, 127, 174, 136, 160, 88, 93, 167, 94, 104};
    int height = 91;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {93, 94};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> candidates = {83, 154, 136, 124, 136, 159, 169, 166, 113, 174, 85, 78, 86, 169, 154, 86, 87, 171, 95, 114};
    int height = 152;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {154, 154};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> candidates = {102, 116, 173, 166, 119, 112, 83, 118, 97, 85, 112, 98, 133, 160, 81, 164, 92, 172, 85, 135, 116, 151, 136, 89, 102, 160};
    int height = 94;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {92, 97};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> candidates = {171, 145, 78, 99, 106, 170, 142, 89};
    int height = 90;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {89, 99};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> candidates = {175, 166, 152, 163, 75, 100, 140, 153, 77, 169, 110, 88, 155, 93, 146, 104, 81, 94, 149, 83, 96, 147, 163, 174, 92, 117, 118, 90, 76, 165, 133, 101, 83, 99, 123, 149, 129, 106, 165, 174, 102, 110, 150, 117};
    int height = 166;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {165, 166};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> candidates = {108, 77, 135, 105, 77, 130, 160, 82, 105, 113, 85, 101, 147, 80, 115, 112, 153, 78};
    int height = 138;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {130, 135};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> candidates = {170, 128, 159, 168, 91, 110, 99, 92, 113, 115, 107, 135, 170, 117, 153, 127, 130, 86, 140, 144, 103, 88, 120, 147, 100, 138, 81, 146, 129, 170};
    int height = 83;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {81, 86};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> candidates = {155, 91, 83, 76, 162, 134, 102};
    int height = 169;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {155, 162};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> candidates = {112, 105, 129, 127, 123, 131, 138, 156, 162, 144, 141, 163, 168, 86, 144, 149, 123, 159, 101, 160, 149, 88, 112, 144, 128, 154, 78, 116, 148, 109, 133, 115, 135, 144, 151, 118, 78, 84, 143, 78};
    int height = 138;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {138, 141};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> candidates = {86, 143, 166, 167, 129, 134, 146, 146, 77, 147, 137, 94, 140, 164, 86, 151, 98, 155, 122, 139, 110, 132, 145, 161, 136, 111, 121};
    int height = 159;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {155, 161};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> candidates = {153, 95, 76, 95, 75, 101};
    int height = 139;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {101, 153};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> candidates = {128, 102, 86, 173, 81, 99, 125, 104, 84, 133};
    int height = 126;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {125, 128};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> candidates = {83, 118, 114, 152, 175, 113, 128, 86, 92, 173, 143, 119, 94, 139, 155, 168, 154, 127, 135, 118, 93, 168, 134, 150, 90, 154, 84, 114, 124, 100};
    int height = 138;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {135, 139};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> candidates = {155, 166, 75, 96, 159, 110, 172, 134, 156, 79, 102, 86, 163, 160, 138, 158, 173, 137, 114, 112, 95, 99, 158, 117, 173, 83, 103, 101, 145, 144, 125, 123, 95, 94, 136, 133, 114, 170, 88, 159, 87, 105, 111, 166, 124, 120, 147, 75, 173};
    int height = 157;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {158, 158};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> candidates = {121, 161, 168, 124, 89, 95, 128, 109, 80, 110, 155, 84, 88, 146, 80, 127, 108, 130, 131, 125, 169, 97, 100, 152, 100, 168, 152, 164, 95};
    int height = 116;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {110, 121};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> candidates = {164, 85, 107, 126, 77, 168, 114, 76, 121, 107, 121, 171, 79, 175, 141, 120, 82, 90, 119, 88, 86, 99, 135, 130};
    int height = 168;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {168, 171};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> candidates = {130, 151, 119, 128, 90, 108, 166, 113, 86, 114, 169, 139, 120, 107, 91, 174, 125, 123};
    int height = 92;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {90, 91};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> candidates = {126, 122, 90, 112, 92, 84, 118, 111, 119, 142, 121, 130, 145, 157, 104, 108, 171};
    int height = 145;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {142, 145};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> candidates = {143, 145, 162, 151, 87, 87, 98, 137, 114, 167, 137, 96, 95, 109, 79};
    int height = 106;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {109, 114};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> candidates = {168, 80, 172, 144, 167, 94, 169, 130, 163, 159, 138, 78, 154, 127, 112};
    int height = 155;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {154, 159};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> candidates = {131, 150, 162, 94, 149, 164, 154, 76, 143, 149, 165, 156, 142, 103, 80, 86, 140};
    int height = 147;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {149, 149};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> candidates = {113, 87, 82, 102, 132, 86, 142, 150, 117, 146, 94, 85, 155, 123, 174, 118, 129, 103, 102, 89, 106, 139, 136, 129, 155, 128, 90, 99, 151, 77, 94, 90, 147, 122, 114, 175, 151, 87};
    int height = 90;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {90, 90};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> candidates = {109, 103, 158, 94, 117, 152, 162, 130, 93, 88, 104, 85, 158, 161, 168, 114, 153, 164, 126, 132, 161, 99};
    int height = 114;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {114, 117};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> candidates = {103, 97, 104, 146, 111, 140, 171, 86, 171, 113};
    int height = 169;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {171, 171};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> candidates = {141, 91, 172, 123, 94, 153, 159, 169, 106, 138, 93, 121, 129, 112, 132, 173, 79, 107, 152, 114, 123, 173, 143, 144, 152, 101, 92, 162, 149, 89, 79, 101, 163, 83, 111, 119, 103, 123, 159, 170, 141, 94, 165, 113, 146, 115, 80, 169, 147, 89};
    int height = 99;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {101, 101};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> candidates = {159, 123, 169, 169, 128, 166, 128, 173, 150, 139, 88, 169, 88, 158, 101, 145, 125, 121, 94, 132};
    int height = 134;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {132, 139};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> candidates = {160, 103, 164, 89, 140, 173, 88};
    int height = 75;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {88, 89};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> candidates = {100, 130, 170, 118, 76, 165, 124, 84, 130};
    int height = 75;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {76, 84};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> candidates = {162, 117, 120, 174, 85, 75, 149, 169, 94, 134, 169, 128, 149, 97, 131, 120, 121, 107, 90, 82, 122, 125, 168, 174, 155, 86, 159, 102, 158, 156, 174, 164, 82, 130, 142, 140};
    int height = 142;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {140, 142};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> candidates = {98, 87, 158, 76, 148};
    int height = 105;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {87, 98};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> candidates = {141, 148, 159, 132, 90, 162, 158, 88, 142, 101, 86, 105, 163, 161, 165, 124, 107, 164, 103, 152, 107, 106, 97, 104, 128, 173};
    int height = 90;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {88, 90};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> candidates = {118, 174, 126, 111, 160, 135, 154, 120, 98, 138, 107, 159, 83, 103, 84, 147, 79, 109, 90, 124, 138, 83, 151, 122, 148, 174, 175, 115, 78, 110, 157, 122, 110, 138, 103, 156, 162};
    int height = 134;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {135, 138};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> candidates = {157, 168, 86, 92, 92, 97, 118, 83, 139, 109, 143, 99, 132, 129, 175, 115, 149, 125, 124, 172};
    int height = 166;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {168, 172};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> candidates = {146, 173, 79, 79, 148, 107, 105, 171, 89, 84, 153, 98, 154, 148, 157, 148, 172, 169, 164, 142, 101, 98, 96, 163};
    int height = 155;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {154, 157};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> candidates = {170, 154, 83, 84, 125, 101, 137, 98, 156, 75, 131, 107, 141, 154, 127, 144, 136, 157, 166, 129, 133, 135, 170, 145, 120, 104, 134, 153, 97, 125, 166, 103, 109, 152};
    int height = 91;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {97, 98};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> candidates = {155, 109, 132, 76, 161, 96, 142, 78};
    int height = 115;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {109, 132};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> candidates = {102, 99};
    int height = 100;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {99, 102};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> candidates = {101, 100, 99};
    int height = 100;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 101};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> candidates = {100, 110, 90};
    int height = 100;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 110};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> candidates = {77, 76, 75};
    int height = 76;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {76, 77};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> candidates = {98, 102};
    int height = 100;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {98, 102};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> candidates = {100, 100, 100, 102};
    int height = 101;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 102};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> candidates = {75, 100};
    int height = 100;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {75, 100};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> candidates = {76, 76, 76, 76, 76, 76};
    int height = 76;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {76, 76};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> candidates = {104, 98, 101};
    int height = 100;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {98, 101};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> candidates = {75, 117, 170, 175, 168, 167, 167, 142, 170, 85, 89, 170};
    int height = 169;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {170, 170};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> candidates = {100, 99, 101, 99};
    int height = 100;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 101};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> candidates = {75, 117, 168, 170, 175, 167, 167, 142, 170, 85, 89, 170};
    int height = 169;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {170, 170};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> candidates = {170, 174, 175};
    int height = 75;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {170, 174};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> candidates = {102, 99, 104};
    int height = 100;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {99, 102};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> candidates = {97, 103, 103};
    int height = 100;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {103, 103};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> candidates = {134, 79, 164, 86, 131, 78, 99, 150, 105, 163, 150, 110, 90, 137, 127, 130, 121, 93, 97, 131, 170, 137, 171, 153, 137, 138, 92, 103, 149, 110, 156};
    int height = 82;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {79, 86};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> candidates = {78, 79, 80, 100};
    int height = 80;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {79, 80};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> candidates = {75, 76, 76, 76};
    int height = 75;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {75, 76};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> candidates = {99, 100, 101};
    int height = 100;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100, 101};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> candidates = {99, 99, 99, 101, 101, 101};
    int height = 100;
    SkipRope* pObj = new SkipRope();
    clock_t start = clock();
    vector<int> result = pObj->partners(candidates, height);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {101, 101};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test83() == 0 ? ++passed : ++failed;
    test84() == 0 ? ++passed : ++failed;
    test85() == 0 ? ++passed : ++failed;
    test86() == 0 ? ++passed : ++failed;
    test87() == 0 ? ++passed : ++failed;
    test88() == 0 ? ++passed : ++failed;
    test89() == 0 ? ++passed : ++failed;
    test90() == 0 ? ++passed : ++failed;
    test91() == 0 ? ++passed : ++failed;
    test92() == 0 ? ++passed : ++failed;
    test93() == 0 ? ++passed : ++failed;
    test94() == 0 ? ++passed : ++failed;
    test95() == 0 ? ++passed : ++failed;
    test96() == 0 ? ++passed : ++failed;
    test97() == 0 ? ++passed : ++failed;
    test98() == 0 ? ++passed : ++failed;
    test99() == 0 ? ++passed : ++failed;
    test100() == 0 ? ++passed : ++failed;
    test101() == 0 ? ++passed : ++failed;
    test102() == 0 ? ++passed : ++failed;
    test103() == 0 ? ++passed : ++failed;
    test104() == 0 ? ++passed : ++failed;
    test105() == 0 ? ++passed : ++failed;
    test106() == 0 ? ++passed : ++failed;
    test107() == 0 ? ++passed : ++failed;
    test108() == 0 ? ++passed : ++failed;
    test109() == 0 ? ++passed : ++failed;
    test110() == 0 ? ++passed : ++failed;
    test111() == 0 ? ++passed : ++failed;
    test112() == 0 ? ++passed : ++failed;
    test113() == 0 ? ++passed : ++failed;
    test114() == 0 ? ++passed : ++failed;
    test115() == 0 ? ++passed : ++failed;
    test116() == 0 ? ++passed : ++failed;
    test117() == 0 ? ++passed : ++failed;
    test118() == 0 ? ++passed : ++failed;
    test119() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7567771&rd=4665&pm=1968
********************************************************************************
#include <string> 
#include <vector> 
#include <iostream> 
#include <sstream> 
#include <ostream> 
#include <set> 
#include <map> 
#include <algorithm> 
#include <string.h> 
 
using namespace std; 
 
int my_height; 
 
int sortfunc(int ia, int ib) 
{ 
  int a = ia-my_height; 
  int b = ib-my_height; 
  if (a<0) a=-a; 
  if (b<0) b=-b; 
  if (a != b) return a<b; 
  return ia > ib; 
} 
 
class SkipRope { 
  public: 
 
  vector <int> partners(vector <int> candidates, int height) { 
    vector <int> ret; 
 
    my_height = height; 
 
    sort(candidates.begin(), candidates.end(), sortfunc); 
 
    ret.resize(2); 
    ret[0] = candidates[0]; 
    ret[1] = candidates[1]; 
 
    sort(ret.begin(), ret.end()); 
 
    return ret; 
  } 
 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/