/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2239
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

class BinaryQuipu {
public:
    int fewestKnots(vector<string> inventory);
};

int BinaryQuipu::fewestKnots(vector<string> inventory) {
    int ret;
    return ret;
}


int test0() {
    vector<string> inventory = {"bsb", "bbs", "sbbs", "sbs"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> inventory = {"s", "b"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> inventory = {"bs", "sb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> inventory = {"bs", "sb", "bb", "ss"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> inventory = {"bssbs", "ssbs", "sbb", "bbs", "sbs", "ssbb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> inventory = {"bbbsssbbsbbssbbbbs", "bssssbbbbsbbsbbbbbbsbbsbsssbbbsbbbbbsbbssbsb", "sbbbbbsbbbsbsssbssssbssbbsssssssbbssss", "sbbbbbsbsbssbssbsssbsbbsbssbsbbbsbsbs", "bsbbbbbssbsbbbbsbbs", "bbsbbsbsssbsbbsbbssbbbsbsssbsbbsbsbssbsbsssbsbsbs"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 181;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> inventory = {"bssbsssbbb", "bbbbbssbssbsssbbsbbbbsssbsbbs", "ssbssbsbsbssbsssssbbssbssbb", "bbsssbbbsssssssbbs", "bbbsbsbsbbsssssbsbbsssbbbsbsbbsssbsbbssbss", "bbssbssbsbsbbbbbsbbbbsbssbbsbsbbbsbbbsbbsbbbsssb", "sbssssbbbsbssbsbbbb", "sbsbbbb", "sbsbsbbssbsbbbsbssbsbbbsbbsbbbbbsssbbsbsbbbbbssss", "ssbbsbsbsbbbbbsbsbbbbssbs"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 236;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> inventory = {"sbssbbsbbsssbbbsbbssbbbssssbssbssbssbbsssbsbsbbb", "bbbbsssbsbsbsbbbbbbsbbbbbbbbssbbssssssssbss", "bssssbbssbbbsssbbsbsssbbbbbbsbbsb", "ssbbbbbsb", "sssbbbssssbs", "bssbsbsssssbbbsbsssbsbbbsssbbsbbbb", "bssssss", "bbsssbbsbbssssbssbsssbbbsbbbbssbbbsbs", "sbssbsbbbsssbsbbb", "bbsbsbsbbsssssbsssbsbbsbbssssbsbbsbssssbbb", "sbbbsb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 237;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> inventory = {"sbbssbbbssbbssbsbsbbbsb", "bssbbbbbsssbsbbsbbbssbbssbsbsbsbbb", "sbbbbbbbsbbsssssbbsbbbsssbsbbsbs", "sbssbbbsss", "sssbsbbbs", "bbbsbsssbssbssbbsbsssssbbbbbbsbsbbbssbbsssss", "sbsbbbsssssssssbsssbsbssbsbssbss", "bbbsssb", "sssssssbbssbbbssbbssssbbssbssbbbbb", "ssssbbsbsbssbbsssssbsssbsbbbbsbbbbbbsssbbbbsbsssss", "bbssssbsbbbbbssbb", "ssbbbbbssssbsbsbbbsssbsbbbbbssssbsbsbbssbbssssb", "sbsbbssssssbbbbbsb", "bbsssbsbbssbbbssbbbssssbbbsssb", "bsssbbsbbsbsssssbsbssbssbbbbbsbbbbbb", "sbbbssbbsbssssbbbbbsbbbbssbbb", "bbssbbsbsbbbbbbbbsbsbssssssbbsbbbbbbsssbssssbsb", "ssbsssbsbsbssbbbb", "bbbssbsbssbsbsbbsbbsbbsssbssbbsbbbbsss", "bsbsbbsbsbsssbbsbbsbbbbbsbsbbb", "sbssbbsbbssbbbssbssbbbbsbbbbbbb", "bbsbsssssbssssbsbbsbsssbssbbbssbbsbbssbss", "bsssbbbsbbbsssbssbbsbsbsbsbbsbsbssbbbss", "sbbbbsbbsssbbbsssssbss", "ssbssbbbbsb", "sbbbssbbbbbbbsbsbbbssbbbsbssbbssbsbbssbbsbbbs"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 593;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> inventory = {"sssssbbbbsssbs", "ssbsssbbbbssbssbsbsbssbssbsssbsssbbssssbbsbs"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> inventory = {"bbbbsbbssbssbsbbsssbssbssbssbsssbs", "bssbbbssbbbbbssssbsbssbssbbssssbss", "sssbbsbbsbssbbbssssbbbbssbbsbbsbbsbsbssbssbsbbbbs", "ssssssbssssbbssssbssssbbbbsssbbsbbsbbssbssssbssbb", "sssssbbbssbbssbsbssbssbssbssssbsssbb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 187;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> inventory = {"bbsbsssbsssbbsssbbbb", "ssssbsbbsbsbsbsbsbssbsbbsbbbsbsbssssbsbbsb", "sbsbsbbbssbssssssbbssbbssssbsbssssbbsbssbbbss", "sbbbssssbbsssbbsssbbbbbbbbbssssbbbsbbsbsbbbsb", "sssbbsbsbsbsbsbbsssssbbsbbbbbbbbbbsb", "bsbbbbssbbbsssbbbbsbssssbbssbbbbsssbsbbssbbbsbsbbs"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 221;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> inventory = {"ssssssbbbsbbssbssssbbbbbsbbssbsssbbsbsss", "bbbsbsbbbbsbsbsb", "sbbsbbbbsssbbbsbsbsssb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> inventory = {"bbbsssbbbbssbbsbs", "bsbbsbsbbbsbss", "bbbbsbbssbsbssbbsssbbsbsssssssbbbssssbbbsss", "sbbbsbbbbsbbssssbssbssbssbsb", "sbsbbssbsssbssbssbbssbbbbbbssbbsbsbsbbsbbbsssb", "bsbsbbssssbbsbsbsbbbbbssbbbbbbbbssbbbbbssssbbbbbb", "bbbsssbssbbssssbsbbsssbsbbssbbbsbssbbsssbbsbbssb", "bbsbbbbssbssbssbbbsbssbbbbsbbbbbsbbbsbbsbb", "ssbsssbsbbsbsbssssssss", "bssbbbbbbbsbbbsbbbbsbbsbbsbbbbs", "bbssbssbbbsbbsbb", "bbbbbsssbsbbsbbbssbbsbbbbbsssssbbsbssb", "bsbbss", "bsbsbbbsssbsbsbbb", "sbsbsbbsssbbbbbsbbbsbbssss", "ssbsbbsbbsbbbbsssssssssssbsssbbssbbbbb", "bbsbbsbbsbsbsbbssssbbsssbs", "bsbbsbbsssbsssssbssssbsbssbssbssbbsbsss", "sbbssbsbbsbbsbssbbssbbsbssbsbbssbbbbss", "sbbsbssbbbss", "bsbsbs", "bsbssssbsssbsbbbsbbbbbbbbsss", "sbsbbbbbbssbsbssssbbbbbbbsbbbbsbssss", "bssbsbbbsbsbbssss", "bssssbssbs", "bsbbsbbbbbsbssbbbsbsbsbbbbsbsbbbsssb", "bssbsbbbssssssssbbssbbbbbsbbb", "sssbsbss", "bsbbsbssbbbbbbbbbbb", "ssbbbsbbsssbbssbbssbsbb", "bbssbssbsbssbsb", "bbsbbsbbsssbssbsbbssssbssbbssbbbsbbsb", "bssbsbbbsbsbsbsbb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 614;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> inventory = {"sbssssbbsbbbsbssbbbbbbbsssbbbsssbbbbsbbbsss", "sbbbssbbs", "bsbbbssbbsbbbsbsbbsssbbbsbsbsssbs"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> inventory = {"sbbbssssbbsbbsssbbsbbbsbssbssssbbssssssb", "ssssbsssbssbbbsbsbbsbs"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 62;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> inventory = {"sssbssssbsbsbbssssbbsssbs", "sbbbb", "bbsbssss"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> inventory = {"ssbbbssbbbsssbbbsbbssbsbsbsb", "sssbbbbbsss", "sbbsbbssbssbbssbbbbbssssbsbbbbsbsbbsbbbbbsbbbsb", "bssbsbbs", "sbbssssbbbsssbssbbbs", "bsssssbbssbbbbbbssbsbbbbsssbsbsss", "bbssssssbsssbsbsbsbbsbbsssssssbsssbsbssb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 164;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> inventory = {"bsssbbbbsssssbbbbsbsssbssssbbbssbssbssbbbsbsbbb", "bssbbbbsbsssssbbsbbbsbbsbbbss", "sbbbssssbsbbbssssbbssbssb", "ssssbbbbbbssbsbbsbbsbbbsbbb", "bssbsbbsbs", "ssssbssbssbsbssbsssbssbbsbssssbsbsssssssssb", "bsbbbsssbbssbssbbbbbbsbsbbbsbsbbssbbb", "bbbbbbssb", "bbsssbbbbsbssbs", "bbsssbsbssss"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 208;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> inventory = {"bbbbbbbbb", "bsbssbbbbbbssbbbssbssbbbbbss", "sbsssbssbsbsbsbssbsbbbbbbssbssbbbssbsbsb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 76;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> inventory = {"sssbbbssssbsbbssssbbbbbbsbssbsbsbsbsbbsbssbbbbbssb", "bssbsssssssssbsbsbbssbssbbbbs", "sssbbbsbbsb", "ssbbsbsbssbbbsbbbbsbbssbssbbsbssbbssssb", "sbbsssbbsbbssbbsssbs", "ssssbbbssbbsbsssbsssbsssbsbbssbssbs", "sbbssbbssbsssbbsbsbsbbssbsbsbsssbssss", "bsbbbssbssbbbsss", "bsbbbbbssbsb", "ssbsbbsssssbbssbbbbssbsbbssssbsbbsbbsbsb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 240;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> inventory = {"bssbssbbbbbbbbssssbsbssbbsbbsbssbbbbbbsbbbssbsb", "sbbsbbbbsbbsssbssbssbbbbb", "sbsbsbsbbssbsssbsbbssbsssbbb", "bbsbbb", "sbbssbssbsbbsssbsbssbbbbsbbbbsbbsbssb", "sbbbbbbbsbbbbbsbssbsbsssssbsssb", "ssbbsssbbbsbbbsbsbsbsbssbssbbssbbbbssssbbsbbb", "bbsbsssbsb", "bbbbbsbssbbssbbbbbbbssbs", "sbsssssbbsbbssbsbbbbsbbbsbsbb", "bssbsssssssbssbbbsbsbsbsbbbbsbsssbsbbsbbs", "sbbbssbbssbsssbsbsbsbbbbssbsb", "ssbbssbsbbsssbsbbssssbbsbbbsssssbbssssssbbbsssbsb", "bbbbsbbsbbbsbsbbbbssbsssbsssbssssssbb", "sssbbsssbb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 361;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> inventory = {"bsssbbbbbbsbbsbssssbbsbsssbbbbbssssbsssssssssb", "sbbbsssbsssssbsssbsbbsssbsssssbbsbsssssssbbsbbbsb", "sssbsbssbbbbssbbsbsbsb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> inventory = {"sbbbbbsbbbsbbbsssssssbsb", "ssbbssssssbbssbbs", "sssbbssbbssssbbbbsssbbbbbbbsssssbbbssbbsbbs", "sbssbsssbssbb", "sbsbsbssbssbbbbssssbbbbbbbbbb", "ssbssbbbsbbbsbsbbbbbbsbbsbbbssbssbsssbsbsbbsbss"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 155;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> inventory = {"sssbssbsbbsbbbssbssbsssssss", "bsbsbbbbbbsbbsbssbsbss", "sssbbsbbsbsbsbbs", "sbssbbsbssbsbbbsbbssssbssbssssbsb", "bbbbsbssbbsbbbbbbsbbbssbbbbbbsbbsbsssbbbbsbss", "sssssbsssbsssbbsbbsbbbbbbsbbsbsbbbbssbbsb", "bsbbsbbbbssbbbbbsbbbb", "bbbbbsbbsbsbssbssbsssbbbbbbsbsbssb", "bbbssbsbsbbbbbbsbsssbbbsssbbbssbsbb", "bbbsbbssbbbb", "sssssssssbbbssbbbsssbbssbsbs", "bsbbbssssbbsbb", "bsbbsbsbbssssssbbssbsbbsbsbsbsssbsbsbbbssbbbsssbb", "bssbbsbsssssbbssssbbbbssbbsbsbsbssbsbsb", "bsbssb", "sbbsssbbssbsbbbbbsbbsssbbbbbbss", "bssbssssbbsssssbbsbsbssbs", "sbbbsbssssbbbbbsbsssssssb", "ssbbsbsssbsbsssssbsbsbsssbbsssbsbsb", "sssbsbbsbssbbssssssbsssbsbbbbssssbsb", "bssbsbssssbsssbbbsbssbbbsbsssbssbbbsbsbsbsbbb", "sbsbbbssbbbssssbsbbssbsbbsssssbsssbssbs", "bsbsbsbbssssbsbsbbbbsbsssbbbsbsssbb", "ssssbbbbbsb", "ssbbbbbbbssbssbbsbbbsssssb", "bsssssbsbbbbsssbsbsbbbbs", "bbssbsbsssssbbbbsbbsb", "ssbbssssbbbsssbbbsbsbssbbbss"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 615;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> inventory = {"bsssssbbbsbbssbbbsbbssbsbsssssbbbbssbbbss", "ssbbbbbbbssbbbbsbsbssssbsbbsbbsbbbbs", "sssbbsbsssbbb", "ssbsbssssbbssbssssbbssbsbb", "sbsbbbbsbsbbbsbssbsbsbsbsbbssssbssbsbssbssbbbbsbb", "bsbsbbsssbbsbsbbbssb", "bsssssbbssssbssbbsbbsbsssssbsbbbsbbbbsb", "bsssbsbbssssssbsbssbsbbb", "sbbbsbbssbsbsbbbb", "bbsbsbbssbbbbbbbbsb", "ssssbss", "sssbsbsbbsbsbbsssssbssssbsbbsssssbbbbs", "bsbbbssbbsbbbsssssssbbs", "sbbssbsbsbbbbsbbbsb", "bsssbbbssb", "bbbbbbbssbbbsssbsbsbssssbsssbssssssbssbbb", "bsbsbss", "bbssbbbbbsbbsbsbbbssssbbsbbbssbbbssb", "bsbbbssssssssbsssbsbbbsssbbss", "ssbsbssssbbbbsb", "bsssbsbsssssbssssbbbbsbsssssss", "bbbsssssbbs", "ssbsbbbsbbssbsbssbbbsbssbsbbssssssbssssssssbbbb", "bssssbbssbbssbbbsssbbbsbbbssbsbsbb", "bssbsbssbssssssbbbbbbbssssb", "bbbssbbbbbssbbbsbbb", "sssssbsbbsssssssbsbsb", "bssbbssbsbbssbssbbssbsss", "ssbbsbsbssbsbbbsbbbsbsbbbsb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 535;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> inventory = {"ssbbsbbssssssbbbssbsbbsssbsbs", "bbbbbsssbbssbsbsss", "bbsbssssbbbsbsbbbssbbbbbbsssssbsbbssbbbssbbb", "sssbssssbbsbbs", "bsbbbbssbbbssbssbbsbsssbb", "bbssssbbbssssbbbsbssbbbbsbsbssbsbsbsss", "bsbbssbss", "ssbssbbbbs"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> inventory = {"bsbbbsbbsbbsbbbbbbssbsbbbsbbbbbsbsbssbss", "bbsbbbsssbssssbsbbbbss", "ssbsbsb", "bbbsbsssbbsbsbsssbsbssbssssbssbbbbbsssssbsbsbbs", "bbbbsbsbbbsbssssbbbbsbsb", "ssbsbssbsbsss", "bbsbssbsbbbssssbsbss", "bsbsbbsbsssbsbsbbbss"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 159;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> inventory = {"ssbssbsbbssbbsbbssssbsbbbssbbsbbssbbs", "sbbssbbbsbbbssbbbsbbsbsbssssss", "sbsbbsbbbbsbbbbssbsbbsbssbssbbsbsbsssb", "bssbbs", "ssbbsbbssbbsbsbsbbbbbbbbssbssb", "ssbbbbbbbb", "ssbsbbbsssbbbssbsbsssbbs", "bssssbbbsbsbbssssbssssbbsbbsssssbbbsbbsbbbssbbbb", "ssbssbssbsssbbbbssbbbbssbssbsbbssbbs", "bbbbbsbsssssbbss", "ssbsssb", "bsbbssssbssbbbbbbssbssbbsbssssss", "sbsbsssssbbssssbsssbbbssbbbsbsbbbbbsbbsbsbbbsssb", "sbsbbbbbbsbbbbsssb", "sbbsbbbssbbsbbb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 297;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> inventory = {"bssbbsbbsssb", "bsbbbbbbsbssbsbbsbsbssbbsb", "sbsbbbb", "bsbbssbbssbsbsbbbsbbbbbbbbsbsbbsbb", "sbsbsbbssbbbssbsbsbssb", "ssssbbbbbbbsbsbssbssbbbbbbbsbbbsbsbsssbsbbsbsss", "bsbsbbssssbbssssbsbbb", "bsbbsssbbsbsbsbbbbbbb", "sbbbssbbbbs", "bbbbbbbsbbsbsbbbsbbsbbsbsbssbsssssbbssb", "sbbbssbsbssbss", "ssbbbbbbs", "bsbsbssbbs", "sbsssbbsssbbbssbsssbbssbbsbbsssbbsssbs", "bbbssbsbsbsssssb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 251;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> inventory = {"bsbbsbsbsssssbb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> inventory = {"sbssbsbbbsbbsbsbsbbsbsb", "sbbsbsbsssssbsbsbsbsbssbbbssbsbbbbbsbbsssbbbssbb", "bbbssbsssssbssbsbbbssbbsbbssbssbbssbbbbbssb", "bbbsssbbsbbssbbssssbbbbbsbbsbsbbbbbbbb", "bbsbssbbs", "sbsssssbsbbbbbsbbbsbssbbsbbbbbbbsbsssssssbsbs", "ssbsbsssbbssbsssbs", "bbsbssbbbbssbbbbssssbsbbbbsssbsbsbbbsbssssb", "ssbsssssbbsbsbbbssbbssbsssbbbssbbsssbsbbb", "bsbbbsbbsssbbsssbssbsbssssbbbssbb", "bbssssbbbbssssssbbbbbsbbbbbbsbbsbsssb", "ssbbsbbbbbssssssbsbbsssssssbbsbbsssbbbbsbsss", "bsbbssssbbbb", "sbsssbbbbbsbbsbssbsbsbssssbbbbbsbssbbbbsbssbsssbbb", "ssbbbbbsbbsbssbsbbsssbsbbbsbb", "bsbsbbsbssssssbssbbbsbbsssssb", "ssssbsbsbbsbbbssbbbsbssbbbsbbbsss", "ssbsbbssbssbsbbbssbbssbssbbsssssbbssssbb", "bbbbsbbsbbbbbbbbbsbbsbsbbsbssbssb", "bssbbsssbbbbbsssbbsbssbbbbsbsbsbssbb", "sbsbssbbsbbbssbbbsbbssss", "sssbbs", "bbsssbbsbssssbsbssbbbbsbbbbbssbbbbbbbbbsssbbbsbb", "bbbsbbssbssbbsb", "bssbbbbsbbbssssbbssbsbbsbbbbsbsbsbsbb", "ssbssbsb", "sssbsbsbbssbbssbsbsbbbbsssbbbsbbbbbbbbsbbbss", "bsssbbbsbssssssbbbbbbbsssbbsbbbbsbbbbbsbsbbs", "bbsssbbsbsbbbsbbbbbssbbbsssssssbssb", "sbbsbbbbsssssbbssbsbssbbssssbbsbsssssssssss", "ssbbbbssssssbsbbsbbsbsbssbssbbbbbbbbsbbbb", "bbbbbssbsbsbsbbs", "sbbbbsb", "sbssbbbbssbsbsssssbbsbbsbsbsssb", "bsbbbssbsbsbssbbssbssbbbssbs", "bbsbsbsbbsssbsbb", "bsssss", "bssbbssbsbbssssbsssssbsssbbsbbbbsssbsbbsssbbbs", "ssbbsbssbssssbbbbbssssssbsbbsbbss"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 919;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> inventory = {"bsbsbsbsbbbsbbsbbbbsssbsssbbbbssb", "bbsbbbb", "sbsssbssbbbsbbssssbsbb", "bssbbbbbbssbsssssssssbssbsssbbsbbsssssbbbsbbb", "bssbbbssbsssbbssbssssbbssbbsbsbbs", "bbsssbbsssbbsssbsbsssbbsbsbssb", "ssbsbbbsbssssbbssbsssssssssssbssbbsbsbsbbbssssbsss", "sbsbssbssbsssssbbbbbbsbsbbbbsbssbbsbsbsbbs", "sbsbsbsbbsbss", "sbssbsbssbbsbssssbsbssbbsbbsssssbsbbbsssbsbssbb", "bsbbssssssss", "sbsbssbbbsbsbbbsssssbssbbsbbbssbbbsbbbbbbsssbbb", "sbb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 317;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> inventory = {"sbsbssssbssssssbsbssbbbsssbsssbbsssssbsbbsbbsss", "bbbbbsbb", "bssssbsssbbsssssbsbsbsbbsssbbs", "bbsssbsbbbbsbsbbssbbbbbbbsbsssbsb", "sbbbbbsbbsbbbbbssbbsss", "sbsbsbbsssssbbbssssbbsssbssbbbbbsbbbbbbbssbbsbsb", "sbsbbssbbbsbbsbbbsbbbsssbssbbssbbbbssssbs", "ssbssbsbsbsbbsssbssbbbbbsbbb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 227;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> inventory = {"bsbsbsbssbsbsbbssbsbssbsbbbbsbb", "bsbbbsbssbbs", "bbssbbsbssbs", "bsbsbssbbbssbssbb", "bsbbbbbbsssbssbsb", "ssbbssssbsbssbbsbssbbsssb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> inventory = {"bbsbbsbsbsbbsbbsbbsbbbbsssbbbbs", "bsbsssbsssbsbbssss", "ssbsssbssbsbsssbbbsbsbbbsbbssssbsbssssssbssbss", "bssbssbsbssbsbsssssbssssbbbbbssssbbsbbbssbsbsb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 136;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> inventory = {"sbbbssbbbsbbbssssbssbbssssbbsbbs", "bsbbbssssssbbsbsssbbbsbbbsbbbbsb", "bssbsssbbsssbbsbbsssbssbss", "ssbsbssssbbbbbbbbsbsbsbbbsbbbbssssbbsssbssbbsssbbb", "bbbb", "sbbsbsssbsbssbbssbssbsbbbss", "bsbssssbbbssbbbssbbbsssbbsbbbsbsbbss", "bssssbbbsbssssbbsbbssbsss", "sssssbbbsssbbsssbsb", "bbsbbssbsbsbssbsbsbbssbs", "sbssbsbbssbssbsssbsssbsssbsbbsbbsssbssbbsbbsssbssb", "sbsbsbsbsssbbsbsbbsssbbsbsbsbsssssbbbbbsbsssbbs", "sssbsbssssbbsbbsbbbsssssbbsbbs", "bbsssbsssbbssbbbbbbssbbbsssbbsbsb", "sbsbbbbsbssbbsbbsbssbbsbsbssbbbbbbsbsbbbssbsbbsbss", "bssbbssss", "bbsbsssbsssss", "bbssssbbbbsbbbsbsbbbbbbsssbsssbsssssbb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 450;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> inventory = {"bsbsbsbbsssbsssbssbbbbsbbssssssbsbsbsbsbb", "bsbbbssssssbbbsbbssbbbsssssssbssbbs", "bssbsbbbbbsbbsssbssbbsbbbsbss", "bbbbbsbssbbssbbssbbbbssbssbsssbssb", "sssbsssbbsbssbbb", "bsbsbsbbbbsbsbssssbbsbbbbbsbbsbssbsssssbsssb", "sbssbb", "bbssbbssbbssssbbssssssbsbsbbbbssb", "ssbb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 208;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> inventory = {"sbbsssbsbbbbssssbbbsssbbss", "ssbsssbbbsbbbssbbsbssbs", "bssssbbsbssbsbsbbsbsssbbbsbsbbbbssbbbb", "ssssbsssbssbbbssssbbbsbssssbsssbbsb", "sbsbbbbsssbssbsbbbbbbbsbbssssbsbssbs", "sssbsbbbssbbbbsbsssbbbsbsbssbssbbsbbssssbsssbs", "ssbssbbbsb", "ssbbbbssbssbsssbb", "bbbsbbssssbssssssbbbbbssbbsbbbbbbsbsbbbsbsbsbbsssb", "sbbbbsbsbssbbbbsbssbsssssbssbbsb", "ssssbsbssbsbbssbbsssbbs", "bsbbbbsssssbssssbbbbbbssbbbbbb", "bbbssbbbsbbb", "bsbssbbbsssbssbsbbssbbssbsbssbbbbbsbsbbbbssbss", "sbbsbbbbsssbbsss"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 361;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> inventory = {"bsbbsbsbsbbbbbsssbbsbbs", "bssbsbsssbbbbssssbssbbss"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> inventory = {"bb", "bssbbbsbsbbsssbsbbsssssssbbsssbbsb", "sbsssbbbsbs", "sbsssbssbsbbssbbsbssbbssbbbssbsbbssbbss", "ssbbbssbbssbbbbbsbssbsbsbsbbssb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> inventory = {"sbsbsssbbb", "sbbsbbbbssbbbbsbssbsssssbsbsssbsbssb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> inventory = {"bbssssbbsssssssssbbsssbbbssbsbbbbsssbs", "bsbsbbssbbbbssbsssbbbbsssbbssbsbbsbsssss", "bssbsbbsbssbbbbbbssssssbsbbssssbbssbbbsbbssss", "bsssssbsbbbsbssbsbssb", "bssbsssbbssbsbssbbssbbbsbsssbbssssb", "bsbsbbbsbsbbsbsss", "bbsbbbsbssbssbsbsbssbbbbsb", "bbsssbbbbbssbbsbsbbsssbbbbsbbbbsbsbssbsbbsbsbsb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 229;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> inventory = {"bbbsbssssbsssbsbbbbbssbbbsbsss", "bbbbsssbsbssbbs", "bssbsbbsbsssbbbsbsbbsbssbbbbssbssss", "bbbbsbsbsbbbssbsssbsbbbbsbbbsbbbs", "bbbsbbsssb", "bbbbbb", "bbsssssbbsbbsbs"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 115;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> inventory = {"ssbbssbsssssbbsbsbbssbbsb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> inventory = {"bbbbbbsbsbbbsbsbbbsssbbbssbbbsbbsssbbsssbbb", "ssssssbbbssbbssbbbbsbsssssbbsbbsbbbsbbbbsssbsbsbb", "sbbssssss", "sssssssbsbsbbbbssssbsbbsbsssbbb", "bbssbsbssbb", "sbssbsbbbsbbbbsssb", "bbssssbsssbbsbbbbsbbsbbbbbbbssbssssbbsbs", "bsbbbssbsbssbbbssb", "sbsbsbsbbbsbbsbbsbsbbssbbbssss", "bsbssssbsssbsssb", "sbbbssbbbsbbbbb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 227;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> inventory = {"bssssbbssbsbbsssssbssbbsbbbssbsssbsbsbs", "bbbsssb", "ssssbbb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> inventory = {"bbssbssbsssbbsbbsbssssssbssssssbbssssb", "bbssbssbsbsbbbsbbssbbsssbssbbbbbssbb", "sbsssbbsssbbsbbbsbsb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 83;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> inventory = {"bsbssbssssbbbbbsbbbbsbbbsbsbbbbbsbbsssssbbbsbsssb", "sbbbbbbbbssbssssssbbsbssbbsssbbbssssbbsbsb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> inventory = {"bbbbbsbbsbbsbbss", "sbbbssbbbbssbbsbbbsbbssbsssbbs", "bbsssbbbsssssbb", "sssbsbbssbbsbbsbbssssbsbssbssbbsbsbbsbbbbbb", "bbbbbsbbbbsbsbbs", "bsbsbbbssbbbsbbbssssssbbsbssbbssbsbbbbbbsbssbssssb", "bbssbssssssssbsbssbssssbbbbs", "bssbbbsbsbsssssbbsbbbsbsbssbbbsbbbbbs", "ssssbsbbsbsssbs", "sbsbsbsbssbssbssbbssbsssbssbbbsssbbsssbsbbbbs", "bbssbsbbbbbsbbbbbsbsssbsbbsbbb", "sbbbbssssbsbssbbssbbbbs", "sbsbbbbssbbbs", "bbbbssbssbbbbbsbssssbsbbssbsbsbsbsbbsssbsbbbsbsbb", "bssbbsbbbbsbsssbbssbbsbsssss", "sbbbsbssbbbbsbbsbsbs"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 362;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> inventory = {"bs", "s"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> inventory = {"bbbsssbbsbbssbbbbs", "bssssbbbbsbbsbbbbbbsbbsbsssbbbsbbbbbsbbssbsb", "sbbbbbsbbbsbsssbssssbssbbsssssssbbssss", "sbbbbbsbsbssbssbsssbsbbsbssbsbbbsbsbs", "bsbbbbbssbsbbbbsbbs", "bbsbbsbsssbsbbsbbssbbbsbsssbsbbsbsbssbsbsssbsbsbs"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 181;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> inventory = {"bbb", "sbbb"};
    BinaryQuipu* pObj = new BinaryQuipu();
    clock_t start = clock();
    int result = pObj->fewestKnots(inventory);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4680&pm=2239
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
#include <set> 
using namespace std; 
#define foreach(i,c) for(typeof((c).begin()) i=(c).begin(); i!=(c).end(); i++) 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
set<VS> seen[2]; 
int ret = 0; 
 
void doit(const VS &a, char c) { 
  if( !a.size() ) return; 
  if( c != 'X' && seen[c=='s'].count(a) ) return; 
  if( c != 'X' ) seen[c=='s'].insert(a); 
  ret++; 
  if( a[0] == "" ) return; 
  VS b; 
  int i; 
  for( i = 0; i < a.size(); i++ ) { 
    if( a[i][0] == 's' ) break; 
    b.push_back(a[i].substr(1)); 
  } 
  doit(b, 'b'); 
  b.clear(); 
  for( ; i < a.size(); i++ ) { 
    b.push_back(a[i].substr(1)); 
  } 
  doit(b, 's'); 
} 
 
class BinaryQuipu { 
public: 
int fewestKnots(vector <string> a) { 
  sort(a.begin(), a.end()); 
  doit(a, 'X'); 
  return ret; 
} 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/