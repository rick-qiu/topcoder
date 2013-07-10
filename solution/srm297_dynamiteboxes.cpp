/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6168
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

class DynamiteBoxes {
public:
    double getProbability(int height, int dangerousClusterSize);
};

double DynamiteBoxes::getProbability(int height, int dangerousClusterSize) {
    double ret;
    return ret;
}


int test0() {
    int height = 1;
    int dangerousClusterSize = 1;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9375;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int height = 1;
    int dangerousClusterSize = 2;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5625;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int height = 1;
    int dangerousClusterSize = 3;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3125;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int height = 1;
    int dangerousClusterSize = 4;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0625;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int height = 1;
    int dangerousClusterSize = 5;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int height = 2;
    int dangerousClusterSize = 1;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.99609375;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int height = 2;
    int dangerousClusterSize = 2;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.86328125;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int height = 2;
    int dangerousClusterSize = 3;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.69921875;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int height = 2;
    int dangerousClusterSize = 4;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.51171875;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int height = 3;
    int dangerousClusterSize = 6;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.439697265625;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int height = 3;
    int dangerousClusterSize = 7;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.302978515625;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int height = 10;
    int dangerousClusterSize = 15;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2844286304543857;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int height = 30;
    int dangerousClusterSize = 28;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1650298245829558;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int height = 24;
    int dangerousClusterSize = 9;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9733089907984582;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int height = 25;
    int dangerousClusterSize = 15;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6903910319928076;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int height = 30;
    int dangerousClusterSize = 121;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int height = 30;
    int dangerousClusterSize = 1;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int height = 2;
    int dangerousClusterSize = 1;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.99609375;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int height = 6;
    int dangerousClusterSize = 24;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 5.9604644775390625E-8;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int height = 3;
    int dangerousClusterSize = 3;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.859130859375;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int height = 10;
    int dangerousClusterSize = 5;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9774791877916869;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int height = 10;
    int dangerousClusterSize = 12;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.47678915627147944;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int height = 10;
    int dangerousClusterSize = 20;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10997145969122357;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int height = 10;
    int dangerousClusterSize = 30;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 8.332200595759787E-4;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int height = 1;
    int dangerousClusterSize = 121;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int height = 15;
    int dangerousClusterSize = 18;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.29437221377808725;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int height = 30;
    int dangerousClusterSize = 1;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int height = 30;
    int dangerousClusterSize = 10;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9762525388430822;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int height = 27;
    int dangerousClusterSize = 17;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5960931387368702;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int height = 5;
    int dangerousClusterSize = 6;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7011480331420898;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int height = 9;
    int dangerousClusterSize = 2;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999505102314288;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int height = 9;
    int dangerousClusterSize = 4;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9897641579882475;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int height = 8;
    int dangerousClusterSize = 7;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8076985066290945;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int height = 8;
    int dangerousClusterSize = 11;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.44327822723425925;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int height = 8;
    int dangerousClusterSize = 13;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3057946553453803;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int height = 8;
    int dangerousClusterSize = 15;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.20625532558187842;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int height = 8;
    int dangerousClusterSize = 17;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1319829821586609;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int height = 8;
    int dangerousClusterSize = 18;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10094104520976543;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int height = 15;
    int dangerousClusterSize = 51;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 1.4391727479884375E-8;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int height = 30;
    int dangerousClusterSize = 30;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.12479774445489643;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int height = 29;
    int dangerousClusterSize = 29;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.13733040320492726;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int height = 11;
    int dangerousClusterSize = 39;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 6.946203257029993E-8;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int height = 24;
    int dangerousClusterSize = 5;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999374345466958;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int height = 5;
    int dangerousClusterSize = 1;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9999990463256836;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int height = 5;
    int dangerousClusterSize = 2;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9954118728637695;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int height = 5;
    int dangerousClusterSize = 3;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9694929122924805;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int height = 5;
    int dangerousClusterSize = 4;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9065961837768555;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int height = 5;
    int dangerousClusterSize = 5;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.8157243728637695;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int height = 5;
    int dangerousClusterSize = 6;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7011480331420898;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int height = 5;
    int dangerousClusterSize = 7;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5835123062133789;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int height = 5;
    int dangerousClusterSize = 8;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4780397415161133;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int height = 5;
    int dangerousClusterSize = 9;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3855609893798828;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int height = 5;
    int dangerousClusterSize = 10;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.30373191833496094;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int height = 5;
    int dangerousClusterSize = 11;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.22811126708984375;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int height = 5;
    int dangerousClusterSize = 12;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.15743255615234375;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int height = 5;
    int dangerousClusterSize = 13;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.09514522552490234;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int height = 5;
    int dangerousClusterSize = 14;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.047659873962402344;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int height = 5;
    int dangerousClusterSize = 15;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.018891334533691406;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int height = 5;
    int dangerousClusterSize = 16;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005722999572753906;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int height = 5;
    int dangerousClusterSize = 17;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0012807846069335938;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int height = 5;
    int dangerousClusterSize = 18;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0122528076171875E-4;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int height = 5;
    int dangerousClusterSize = 19;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 2.002716064453125E-5;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int height = 5;
    int dangerousClusterSize = 20;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 9.5367431640625E-7;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int height = 30;
    int dangerousClusterSize = 120;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 7.52316384526264E-37;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int height = 30;
    int dangerousClusterSize = 60;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0012988848638603332;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int height = 30;
    int dangerousClusterSize = 30;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.12479774445489643;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int height = 29;
    int dangerousClusterSize = 19;
    DynamiteBoxes* pObj = new DynamiteBoxes();
    clock_t start = clock();
    double result = pObj->getProbability(height, dangerousClusterSize);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5071246252017507;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7433858&rd=9818&pm=6168
********************************************************************************
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <numeric>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <queue>
 
using namespace std;
 
double d[2][16][130][130];
int num[16]={0,1,1,2,1,2,2,3,1,2,2,3,2,3,3,4};
int a1[4];
int now;
int ds1;
double ans;
//int a2[4][2];
 
class DynamiteBoxes
{
public:
void fang(int x,int y,int z,double p)
{
  if ((y>=ds1)||(z>=ds1)) ans+=p;
  else d[1-now][x][y][z]+=p;
}
 
double getProbability(int height, int ds)
{
  int i,j,k,l,o,p,n,k1,l1,q,tmp1,x,y,xx,yy;
  double tmp,tmpp;
  ds1=ds;
  n=height;
  memset(d[0],0,sizeof(d[0]));
  d[0][0][0][0]=1;
  now=0;
  ans=0;
  tmp=1.0/16;
  for (i=0;i<n;i++)
  {
    memset(d[1-now],0,sizeof(d[1-now]));
    for (j=0;j<16;j++)
    {
      for (p=0;p<4;p++)
        if ((j&(1<<p))!=0) a1[p]=1;
        else a1[p]=0;
      for (k=0;k<ds;k++)
        for (l=0;l<ds;l++)
          if (d[now][j][k][l]>0)
          {
            tmpp=d[now][j][k][l]*tmp;
            if ((k==0)&&(l==0))
            {
              for (o=0;o<16;o++)
              {
                if ((o==9)||(o==6)) fang(o,1,1,tmpp);
                else fang(o,num[o],0,tmpp);
              }
              continue;
            }
            if (l==0)
            {
              for (o=0;o<16;o++)
              {
                if ((o==6)||(o==9))
                {
                  if (o==6)
                  {
                    x=1;y=2;
                  }
                  else
                  {
                    x=0;y=3;
                  }
                  if (a1[x]+a1[y]==0)
                  {
                    fang(o,1,1,tmpp);
                  }
                  else if (a1[x]+a1[y]==2)
                  {
                    fang(o,k+2,0,tmpp);
                  }
                  else
                  {
                    if (a1[x]==1)
                    {
                      fang(o,k+1,1,tmpp);
                    }
                    else 
                    {
                      fang(o,1,k+1,tmpp);
                    }
                  }
                }
                else
                {
                  tmp1=num[o];
                  for (q=0;q<4;q++)
                    if ((a1[q]==1)&&((o&(1<<q))!=0))
                    {
                      tmp1+=k;break;
                    }
                  fang(o,tmp1,0,tmpp);
                }
              }
              continue;
            }
            if (j==6)
            {
              xx=1;yy=2;
            }
            else
            {
              xx=0;yy=3;
            }
            for (o=0;o<16;o++)
            {
              if ((o==6)||(o==9))
              {
                if (o==6)
                {
                  x=1;y=2;
                }
                else
                {
                  x=0;y=3;
                }
                if (a1[x]+a1[y]==0)
                {
                  fang(o,1,1,tmpp);
                }
                else
                {
                  fang(o,k+1,l+1,tmpp);
                }
              }
              else
              {
                tmp1=num[o];
                if ((o&(1<<xx))!=0) tmp1+=k;
                if ((o&(1<<yy))!=0) tmp1+=l;
                fang(o,tmp1,0,tmpp);
              }
            }
          }
    }
    now=1-now;
  }
  return ans;
}
};

********************************************************************************
*******************************************************************************/