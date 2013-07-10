/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2251
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

class RGBColor {
public:
    vector<int> getComplement(vector<int> rgb);
};

vector<int> RGBColor::getComplement(vector<int> rgb) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> rgb = {255, 0, 0};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 255, 255};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> rgb = {115, 115, 143};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {243, 243, 15};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> rgb = {115, 115, 144};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {140, 140, 111};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> rgb = {153, 12, 55};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {102, 243, 200};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> rgb = {126, 129, 107};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {129, 126, 148};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> rgb = {139, 114, 139};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 242, 11};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> rgb = {134, 141, 143};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 13, 15};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> rgb = {28, 225, 135};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {227, 30, 120};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> rgb = {191, 49, 222};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {64, 206, 33};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> rgb = {114, 15, 71};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {141, 240, 184};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> rgb = {102, 135, 89};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {153, 120, 166};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> rgb = {120, 140, 137};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {248, 12, 9};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> rgb = {86, 19, 123};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {169, 236, 132};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> rgb = {133, 161, 216};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {122, 94, 39};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> rgb = {84, 85, 47};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {171, 170, 208};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> rgb = {174, 101, 91};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {81, 154, 164};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> rgb = {114, 137, 136};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {242, 9, 8};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> rgb = {227, 26, 118};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {28, 229, 137};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> rgb = {143, 137, 137};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 9, 9};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> rgb = {31, 63, 54};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {224, 192, 201};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> rgb = {115, 136, 125};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {243, 8, 253};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> rgb = {250, 190, 166};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 65, 89};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> rgb = {228, 134, 142};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27, 121, 113};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> rgb = {41, 109, 78};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {214, 146, 177};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> rgb = {134, 113, 128};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6, 241, 0};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> rgb = {139, 127, 129};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 255, 1};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> rgb = {5, 144, 197};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {250, 111, 58};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> rgb = {220, 83, 205};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {35, 172, 50};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> rgb = {59, 72, 153};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {196, 183, 102};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> rgb = {131, 130, 141};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 2, 13};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> rgb = {143, 122, 133};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 250, 5};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> rgb = {0, 0, 0};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {255, 255, 255};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> rgb = {255, 255, 255};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> rgb = {129, 30, 30};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {126, 225, 225};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> rgb = {128, 128, 128};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 0, 0};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> rgb = {115, 115, 144};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {140, 140, 111};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> rgb = {128, 129, 3};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {127, 126, 252};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> rgb = {1, 1, 128};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {254, 254, 127};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> rgb = {0, 128, 255};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {255, 127, 0};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> rgb = {230, 230, 230};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25, 25, 25};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> rgb = {1, 1, 120};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {254, 254, 135};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> rgb = {130, 130, 130};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 2, 2};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> rgb = {115, 115, 128};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {243, 243, 0};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> rgb = {115, 155, 144};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {140, 100, 111};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> rgb = {1, 1, 1};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {254, 254, 254};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> rgb = {127, 127, 127};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {255, 255, 255};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> rgb = {140, 140, 111};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {115, 115, 144};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> rgb = {120, 120, 120};
    RGBColor* pObj = new RGBColor();
    clock_t start = clock();
    vector<int> result = pObj->getComplement(rgb);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {248, 248, 248};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7479796&rd=4685&pm=2251
********************************************************************************
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
 
using namespace std;
 
class RGBColor
{
public:
  vector <int> getComplement(vector <int> rgb)
  {
    vector<int> ans(rgb.size());
    int i;
    for (i=0;i<rgb.size();i++)
    {
      ans[i] = 255-rgb[i];
    }
 
    bool good = true;
    for (i=0;i<rgb.size();i++)
    {
      if (!(mabs(rgb[i]-ans[i]) <=32))
      {
        good = false;
      }
    }
 
    if (!good)
      return ans;
    else
    {
      for (i=0;i<ans.size();i++)
      {
        if (rgb[i]+128<=255)
          ans[i]=rgb[i]+128;
        else
          ans[i]=rgb[i]-128;
      }
      return ans;
    }
    
  }
 
  int mabs(int x)
  {
    if (x<0)
      return -x;
    return x;
  }
 
 
 
};

********************************************************************************
*******************************************************************************/