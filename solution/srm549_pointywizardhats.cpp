/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11965
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

class PointyWizardHats {
public:
    int getNumHats(vector<int> topHeight, vector<int> topRadius, vector<int> bottomHeight, vector<int> bottomRadius);
};

int PointyWizardHats::getNumHats(vector<int> topHeight, vector<int> topRadius, vector<int> bottomHeight, vector<int> bottomRadius) {
    int ret;
    return ret;
}


int test0() {
    vector<int> topHeight = {30};
    vector<int> topRadius = {3};
    vector<int> bottomHeight = {3};
    vector<int> bottomRadius = {30};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> topHeight = {4, 4};
    vector<int> topRadius = {4, 3};
    vector<int> bottomHeight = {5, 12};
    vector<int> bottomRadius = {5, 4};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> topHeight = {3};
    vector<int> topRadius = {3};
    vector<int> bottomHeight = {1, 1};
    vector<int> bottomRadius = {2, 4};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> topHeight = {10, 10};
    vector<int> topRadius = {2, 5};
    vector<int> bottomHeight = {2, 9};
    vector<int> bottomRadius = {3, 6};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> topHeight = {3, 4, 5};
    vector<int> topRadius = {5, 4, 3};
    vector<int> bottomHeight = {3, 4, 5};
    vector<int> bottomRadius = {3, 8, 5};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> topHeight = {1, 2, 3, 4, 5};
    vector<int> topRadius = {2, 3, 4, 5, 6};
    vector<int> bottomHeight = {2, 3, 4, 5, 6};
    vector<int> bottomRadius = {1, 2, 3, 4, 5};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> topHeight = {2};
    vector<int> topRadius = {3};
    vector<int> bottomHeight = {3};
    vector<int> bottomRadius = {2};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> topHeight = {1};
    vector<int> topRadius = {1};
    vector<int> bottomHeight = {10000};
    vector<int> bottomRadius = {10000};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> topHeight = {10000};
    vector<int> topRadius = {10000};
    vector<int> bottomHeight = {10000};
    vector<int> bottomRadius = {10000};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> topHeight = {1};
    vector<int> topRadius = {10};
    vector<int> bottomHeight = {10};
    vector<int> bottomRadius = {10};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> topHeight = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> topRadius = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> bottomHeight = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> bottomRadius = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> topHeight = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> topRadius = {9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999, 9999};
    vector<int> bottomHeight = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> bottomRadius = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> topHeight = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> topRadius = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> bottomHeight = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    vector<int> bottomRadius = {10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000, 10000};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> topHeight = {1};
    vector<int> topRadius = {1};
    vector<int> bottomHeight = {1};
    vector<int> bottomRadius = {1};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> topHeight = {10000};
    vector<int> topRadius = {10000};
    vector<int> bottomHeight = {1};
    vector<int> bottomRadius = {1};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> topHeight = {1};
    vector<int> topRadius = {10000};
    vector<int> bottomHeight = {10000};
    vector<int> bottomRadius = {1};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> topHeight = {10000};
    vector<int> topRadius = {1};
    vector<int> bottomHeight = {1};
    vector<int> bottomRadius = {10000};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> topHeight = {4594, 9402, 168, 4467, 9580, 1284, 9644, 7454, 122, 6146, 5593, 6656, 7367, 8313, 8820, 6502, 1316, 4835, 5584, 8857, 8113, 2343, 5274, 5135, 1760, 1273, 20, 2280, 4989, 4298, 3114, 142, 6882, 1283, 9316, 7715, 6758, 57, 274, 2268, 4826, 880};
    vector<int> topRadius = {2595, 8463, 157, 2596, 4393, 4243, 5631, 141, 8586, 6470, 7705, 6374, 7602, 2093, 6071, 5949, 4745, 9960, 4564, 5376, 1982, 4307, 73, 1328, 2610, 3408, 591, 8774, 9940, 5940, 7061, 1549, 9895, 3161, 6207, 653, 6279, 7215, 3139, 9701, 2337, 4538};
    vector<int> bottomHeight = {3230, 2740, 1196, 8692, 2467, 6943, 796, 8716, 4283, 1581, 5987, 7582, 8748, 5098, 1625, 232, 6928, 4123, 5704, 2269, 9168, 1824, 806, 8423, 1156, 8128, 5528, 4613, 5704, 1018, 4872, 8610, 1354, 6382, 114, 2110, 1175, 3684, 4114, 1371, 6398, 6134};
    vector<int> bottomRadius = {7664, 4466, 9901, 6932, 6084, 690, 3990, 7710, 2986, 1670, 5382, 1319, 9905, 4343, 7889, 8756, 6306, 3125, 9857, 9225, 4391, 2295, 9147, 3044, 7071, 9917, 3130, 9459, 5482, 1475, 5002, 5293, 4523, 4781, 564, 5778, 1014, 7712, 1554, 5953, 9289, 6847};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> topHeight = {9542, 3318, 8175, 8849, 2389, 2743, 722, 664, 9171, 2666, 122, 9518, 5415};
    vector<int> topRadius = {3409, 1995, 6983, 1613, 7064, 4296, 4595, 2628, 2151, 3724, 7936, 3528, 6408};
    vector<int> bottomHeight = {3769, 2647, 2473, 414, 968, 3584, 2355, 1501, 1570, 853, 5505, 8279, 2960};
    vector<int> bottomRadius = {8111, 9993, 948, 2905, 9158, 1773, 1570, 4967, 8596, 4259, 1433, 300, 1141};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> topHeight = {9799, 4412, 2008, 5839, 9382, 2481, 7735, 2988, 9183, 8339, 2800, 921, 4528, 309, 2409, 4233, 7504, 1783, 5980, 2205, 8381, 5601, 8978, 7124, 62, 9115, 3050, 3478, 3107};
    vector<int> topRadius = {1144, 5641, 5750, 8487, 2934, 693, 5472, 8831, 2732, 1408, 2705, 6661, 7577, 4583, 3168, 9870, 6543, 3525, 9865, 513, 6814, 3219, 7270, 2903, 7673, 7049, 6848, 935, 7810};
    vector<int> bottomHeight = {9144, 5030, 2580, 8156, 192, 8627, 1593, 5902, 7450, 8116, 2588, 5280, 1577, 6213, 5875, 7284, 3938, 7736, 2679, 3527, 8028, 6876, 9744, 9159, 7829, 9687, 4659, 5951, 4041};
    vector<int> bottomRadius = {2841, 9749, 9429, 6397, 4552, 2859, 3327, 6553, 9895, 7952, 491, 1411, 722, 7087, 1867, 1156, 9874, 8034, 4222, 9774, 438, 8572, 2855, 8375, 3444, 9327, 7707, 3233, 1565};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> topHeight = {9992, 1161, 2155, 8044, 1785, 4550, 271, 8492, 2791, 7210};
    vector<int> topRadius = {1181, 7451, 6998, 12, 2329, 9513, 6832, 2256, 6717, 1252};
    vector<int> bottomHeight = {3986, 665, 3214, 8914, 4203, 2972, 4462, 6929, 7922, 7158};
    vector<int> bottomRadius = {9707, 9423, 9945, 597, 8145, 8312, 9049, 5570, 8203, 7106};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> topHeight = {8939, 9526, 9125, 3885, 4114, 7399, 2465, 1220, 2874, 3831, 1768, 4175, 3095, 5582, 8600};
    vector<int> topRadius = {7555, 5982, 7060, 8101, 3149, 3008, 5190, 9422, 6905, 8451, 4107, 1468, 1170, 8147, 9859};
    vector<int> bottomHeight = {3437, 8298, 8872, 9152, 1749, 5329, 5633, 1643, 1117, 9397, 6080, 2258, 7666, 73, 2215};
    vector<int> bottomRadius = {8599, 6342, 7949, 9648, 8621, 3120, 8411, 3744, 5442, 4949, 5785, 184, 9424, 6821, 5804};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> topHeight = {2453, 5865, 3722, 3062, 5732, 6942, 1272, 7670, 352, 2868, 8159, 1710, 9381, 5094, 2814, 5089, 1312, 7447, 2707, 9097, 7298, 6341, 6706, 8259};
    vector<int> topRadius = {8825, 5799, 668, 8553, 8207, 4541, 2737, 888, 1605, 5447, 6678, 7545, 3156, 4754, 9966, 7130, 9229, 9508, 8343, 551, 3824, 6991, 63, 6454};
    vector<int> bottomHeight = {9715, 9103, 1175, 9664, 5034, 8037, 7806, 256, 1716, 6921, 2672, 4050, 437, 635, 806, 7585, 6545, 7449, 3830, 1905, 2798, 1767, 3029, 9858};
    vector<int> bottomRadius = {7718, 1874, 8938, 1036, 2839, 4298, 9187, 6964, 8202, 8163, 6958, 6702, 3077, 8745, 9557, 9626, 8081, 9326, 312, 7844, 5610, 4414, 7323, 5410};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> topHeight = {5379, 9405, 5341, 5283, 1687, 2987, 8259, 4831, 7005, 3700, 8429, 2198, 9689, 2926, 3949, 3524, 1426, 2654, 7896, 9998, 6116, 1677, 6323, 1565, 3499, 2359, 7216, 8877, 8466, 4, 1715, 7503, 7524, 6185, 5230, 4758, 8444, 3325, 1430, 7485};
    vector<int> topRadius = {7803, 259, 6515, 8592, 3784, 7574, 4660, 1245, 8422, 7096, 8078, 2210, 4257, 2058, 6740, 61, 5299, 3206, 3504, 9687, 1126, 1385, 92, 1884, 5978, 8985, 8188, 5657, 1786, 1037, 7781, 1325, 5191, 1730, 1791, 4516, 3873, 3645, 2028, 4693};
    vector<int> bottomHeight = {6693, 5082, 6543, 6983, 5579, 5558, 2589, 2799, 4378, 722, 2538, 2933, 1444, 5754, 2371, 6694, 8179, 646, 3642, 1967, 5370, 1674, 169, 4057, 2774, 831, 157, 5667, 5136, 9052, 2909, 6420, 9581, 9616, 6862, 7966, 5139, 5308, 2277, 9921};
    vector<int> bottomRadius = {5079, 6621, 7581, 2587, 6659, 8568, 3125, 4794, 940, 519, 9886, 9000, 7367, 6892, 3520, 1281, 3989, 6485, 6099, 834, 4365, 4779, 8841, 2153, 6504, 6641, 9197, 3200, 7491, 6503, 4781, 4563, 9852, 9317, 4768, 7852, 2171, 8379, 6669, 6392};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> topHeight = {5450, 2652, 7656, 3550, 4504, 4958, 4815, 1773, 2939, 4387, 4290, 6183, 3054, 9294, 7253, 5746, 2278, 5115, 5636, 6027, 2707, 6029, 7435, 5158, 9289, 1049, 1797, 4007, 1262, 6567, 1739, 3972, 3267, 6171, 1194};
    vector<int> topRadius = {2891, 1025, 6431, 3529, 713, 1370, 4258, 688, 1764, 8026, 7424, 5666, 9735, 2562, 4901, 6157, 4826, 4648, 7770, 3901, 9878, 6943, 4622, 2503, 3794, 7731, 7627, 6340, 6047, 8770, 6738, 4499, 5661, 6720, 9838};
    vector<int> bottomHeight = {6676, 1711, 4000, 6108, 2448, 58, 8934, 8321, 1380, 2831, 5675, 7378, 9092, 2996, 1521, 8960, 3558, 6221, 2970, 7876, 6707, 6232, 2171, 410, 8657, 7857, 2211, 8778, 5846, 4020, 3160, 4658, 9719, 9137, 705};
    vector<int> bottomRadius = {680, 9656, 1506, 5785, 9763, 2382, 1605, 6688, 2213, 231, 1525, 4779, 9632, 2319, 3134, 1209, 2833, 5940, 9061, 4754, 8227, 313, 1091, 285, 3409, 1173, 5117, 3261, 8072, 2662, 490, 8130, 756, 2451, 4264};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> topHeight = {5470, 7108, 7624, 4792, 4740, 7349, 2622, 4443, 7276, 6987, 2207, 4010, 9083, 5174, 5534, 5870, 6642, 8799, 3516, 9614, 9506, 846, 6684, 3842, 7597, 883, 8556, 1293, 5346, 5923, 2924, 2721, 853, 3405, 2735, 3036, 3269, 3219};
    vector<int> topRadius = {1564, 7889, 5713, 2344, 6085, 91, 4225, 3961, 9386, 3046, 5476, 2678, 505, 2736, 7267, 8924, 5131, 667, 6207, 8459, 6063, 7704, 6373, 7499, 9733, 2715, 1267, 9979, 6847, 567, 8900, 1131, 1044, 1158, 6477, 723, 9373, 4905};
    vector<int> bottomHeight = {6807, 79, 2305, 372, 3307, 9291, 9072, 6587, 4276, 4931, 6142, 5998, 9962, 3999, 2846, 3973, 7869, 6841, 8316, 7321, 2763, 356, 8213, 7359, 7842, 2911, 8013, 2744, 2688, 4093, 2046, 3496, 1765, 5673, 3907, 422, 4472, 4960};
    vector<int> bottomRadius = {4407, 3493, 4069, 8123, 7773, 8641, 8136, 8976, 5497, 4921, 7661, 8238, 9893, 2986, 5340, 9333, 6217, 1458, 6224, 9433, 3029, 9902, 5430, 8635, 5356, 5866, 8363, 5896, 4200, 8685, 8570, 7696, 8908, 4649, 7197, 4251, 6045, 6496};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> topHeight = {8554, 9530, 5191, 1558, 5495, 2003, 3466, 8698, 1933, 6655, 8709, 7410, 3645, 2099, 7442, 2628, 1828, 242, 4828, 632, 55, 8558, 478, 2463, 2401, 3712, 6113, 4791, 4836, 3039};
    vector<int> topRadius = {1609, 9164, 4916, 4036, 3363, 48, 9329, 9725, 2999, 487, 4866, 9515, 5002, 1815, 6079, 1030, 9028, 425, 2021, 8236, 6378, 309, 5250, 5192, 379, 4780, 8578, 2733, 7287, 4626};
    vector<int> bottomHeight = {8928, 7497, 7713, 2772, 3102, 8841, 8558, 7478, 7260, 9394, 1983, 7062, 476, 9267, 1000, 9216, 2874, 2269, 979, 7059, 523, 4873, 2546, 2277, 2520, 5121, 4148, 2913, 528, 9191};
    vector<int> bottomRadius = {1907, 9687, 7381, 7911, 285, 64, 9331, 4165, 9559, 3751, 6005, 4829, 5145, 6733, 3200, 7640, 9381, 3571, 6290, 4253, 8566, 9240, 6173, 5598, 6765, 2506, 5482, 4641, 3149, 2529};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> topHeight = {4646};
    vector<int> topRadius = {1526};
    vector<int> bottomHeight = {9231};
    vector<int> bottomRadius = {9617};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> topHeight = {9090, 5783, 1835, 2780, 6414, 8512, 6368, 6046, 2218, 5519, 8526, 8910, 4570, 328, 7727, 3253, 4811, 1026, 2427, 4174, 1728, 8488, 1476, 296, 1276, 9561, 1708, 533, 1502, 2356, 2894, 5415, 3233, 1147, 4188, 4668, 4551, 7838, 637, 486, 1111};
    vector<int> topRadius = {5396, 4440, 7679, 4979, 6247, 3243, 7718, 1787, 5203, 6935, 3592, 9752, 2181, 5208, 6350, 4374, 4718, 403, 2193, 9483, 4057, 4074, 1118, 8705, 1477, 1136, 4181, 1389, 3428, 2470, 6730, 3588, 5056, 5391, 9161, 7741, 1706, 1570, 5124, 4414, 7156};
    vector<int> bottomHeight = {3623, 9479, 5635, 5447, 4891, 4758, 2167, 484, 1716, 5410, 6398, 3801, 3889, 3692, 8431, 6319, 6929, 9696, 5450, 4290, 9294, 722, 3439, 3149, 8738, 1963, 5949, 5522, 4634, 1318, 6763, 1253, 7271, 6003, 2024, 7991, 888, 7634, 2680, 619, 4538};
    vector<int> bottomRadius = {5436, 9935, 6583, 3712, 4330, 4823, 2080, 6149, 5776, 7969, 935, 7195, 4489, 7154, 4046, 3709, 3373, 8388, 2261, 571, 2365, 849, 9717, 594, 4284, 7271, 7800, 6854, 2224, 9161, 2162, 6296, 8536, 537, 6495, 4822, 5053, 4827, 7145, 7038, 7825};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> topHeight = {2063, 8309, 7365, 7095, 6082, 2855, 7136, 1775, 2056, 9244, 8889, 7933, 4006, 3823, 3303, 5795, 4083, 3380, 8377, 9506, 9934, 655, 6011, 9880, 2789, 171, 9304, 7470, 9512, 7335, 9252, 4053, 3752, 718, 9706, 7174};
    vector<int> topRadius = {2312, 6005, 3743, 5495, 2919, 261, 2926, 2322, 8686, 6783, 3308, 947, 2712, 4136, 8514, 8185, 3539, 7723, 735, 1865, 8440, 8652, 5045, 3911, 6913, 2599, 1122, 3157, 1151, 838, 9115, 1024, 3763, 6724, 3212, 8834};
    vector<int> bottomHeight = {5557, 3495, 7265, 7665, 7814, 3477, 1723, 366, 4159, 4511, 100, 663, 6864, 6756, 6190, 6099, 1214, 1871, 354, 9989, 9444, 7042, 4320, 2520, 2666, 8317, 9161, 2672, 5186, 1261, 371, 720, 684, 2097, 7293, 5751};
    vector<int> bottomRadius = {3808, 9159, 1556, 3845, 3937, 2757, 613, 324, 85, 1366, 7996, 3888, 7230, 3407, 1515, 1271, 4693, 6860, 4205, 8614, 6650, 3424, 601, 9717, 3305, 13, 2640, 1955, 8839, 8019, 5344, 7814, 8829, 9922, 2309, 3688};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> topHeight = {3633, 5016, 7898, 4165, 7220, 7948, 6718, 7024, 585, 3622, 602, 5364, 6061, 7772, 2793, 595, 6941, 5098, 8999, 7574, 1473, 320, 9957, 2698, 25, 7543, 8324, 8658};
    vector<int> topRadius = {4773, 3384, 7575, 5872, 4544, 5731, 3379, 7859, 2251, 543, 7243, 4115, 8741, 3668, 8156, 9405, 4797, 3306, 402, 2818, 2558, 1445, 4774, 3424, 8688, 9367, 5989, 1889};
    vector<int> bottomHeight = {4216, 3151, 1291, 9068, 216, 9990, 3924, 3212, 4187, 5102, 455, 7214, 9360, 2021, 2772, 6070, 7993, 6144, 3978, 2636, 192, 2545, 2393, 6654, 1766, 4284, 9392, 8018};
    vector<int> bottomRadius = {8214, 6684, 4901, 307, 7041, 6412, 9062, 4706, 7328, 1555, 9746, 7627, 3694, 372, 3428, 7572, 1622, 1892, 1254, 8065, 2502, 1133, 3041, 3876, 9673, 5335, 9433, 7140};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> topHeight = {5326, 6464, 8502, 1572, 7899, 7364, 5927};
    vector<int> topRadius = {819, 899, 3621, 468, 1345, 2633, 1014};
    vector<int> bottomHeight = {3924, 271, 1152, 6641, 8071, 9991, 6972};
    vector<int> bottomRadius = {9767, 8953, 2248, 4908, 2788, 2567, 6803};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> topHeight = {8513, 212, 2765, 7073, 6542, 2758, 9200, 7648, 4607, 3121, 1754, 6357, 385, 5377, 3737, 6310, 5520, 7086, 3341, 9391, 6395, 8648, 3504, 7917, 5500, 9827, 7290, 3024, 3188, 8905, 9605, 6940, 2065, 4388};
    vector<int> topRadius = {5566, 9040, 5288, 2653, 6912, 2363, 5652, 7469, 455, 8052, 4506, 8958, 6790, 115, 8237, 213, 3192, 1846, 5383, 9541, 1990, 8251, 9243, 5085, 4540, 5919, 9276, 6465, 1398, 2914, 9570, 4961, 1264, 6471};
    vector<int> bottomHeight = {4152, 9795, 4849, 5550, 7054, 3077, 4951, 8615, 9669, 116, 686, 4425, 9180, 4964, 2113, 5057, 9606, 3289, 1268, 5909, 1371, 5994, 7024, 7004, 6209, 7327, 4123, 3571, 1668, 686, 1234, 1565, 3543, 3782};
    vector<int> bottomRadius = {8939, 5574, 5131, 2389, 6210, 2388, 9390, 8514, 3084, 3376, 3770, 4489, 8040, 2811, 7798, 9236, 859, 7258, 333, 6753, 5655, 3263, 6812, 9704, 4175, 6675, 6774, 2971, 6507, 7193, 8503, 2954, 4846, 5944};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> topHeight = {8503, 6155, 2270, 816};
    vector<int> topRadius = {8449, 1197, 8272, 5691};
    vector<int> bottomHeight = {8876, 697, 6118, 3353};
    vector<int> bottomRadius = {534, 4188, 3642, 3637};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> topHeight = {3498, 8345, 1628, 8071, 734, 8545, 184, 7568, 163, 3121, 6882, 7648, 4431, 8092, 6345, 9984};
    vector<int> topRadius = {8186, 9062, 1020, 5227, 6378, 3490, 2254, 3087, 241, 5681, 8746, 3640, 1289, 406, 1333, 3179};
    vector<int> bottomHeight = {2540, 8165, 1464, 5788, 6591, 6217, 5689, 8760, 2220, 4730, 13, 5945, 4702, 6661, 6082, 8179};
    vector<int> bottomRadius = {191, 3312, 5807, 4044, 1192, 4889, 2260, 7397, 8401, 6863, 2459, 325, 4011, 8435, 2006, 1494};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> topHeight = {8994, 2444, 229, 1483, 2103, 9688, 6049, 7031, 4235, 5881, 1927, 9275, 7286, 7668, 7032};
    vector<int> topRadius = {71, 9665, 1006, 1360, 9004, 720, 6357, 336, 2125, 7163, 8403, 2168, 3720, 8183, 1255};
    vector<int> bottomHeight = {4586, 4865, 8057, 3554, 408, 7921, 1144, 7795, 3350, 3171, 4410, 4802, 6427, 2321, 6876};
    vector<int> bottomRadius = {7303, 5398, 3748, 3701, 6274, 8777, 6053, 5034, 9904, 4125, 9717, 6181, 7840, 7567, 1511};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> topHeight = {2688, 9788, 2629, 6631, 6693, 7110, 9520, 475, 3955, 678, 5838, 4802, 7595, 278, 5030, 6398, 6870, 1858, 5695, 1291, 1389, 9416, 6035, 3587, 8333, 2618, 9487, 8096, 3813, 1232, 905, 4216};
    vector<int> topRadius = {1398, 6257, 1585, 5636, 9221, 5512, 1826, 1579, 2050, 8335, 1735, 460, 6255, 69, 4559, 6164, 3672, 2032, 1940, 431, 5055, 6793, 7185, 2252, 5008, 1742, 885, 6630, 8064, 6193, 3059, 565};
    vector<int> bottomHeight = {9959, 8532, 7335, 3736, 9009, 313, 5654, 4946, 18, 3605, 6472, 3148, 7128, 6396, 5491, 3606, 2672, 8396, 5596, 5597, 6198, 6196, 1850, 7927, 1587, 2432, 8150, 2519, 460, 8300, 4470, 4330};
    vector<int> bottomRadius = {6904, 2601, 7503, 7929, 1987, 3360, 2910, 7230, 6454, 9939, 4453, 5070, 6582, 4614, 3788, 3568, 1224, 2592, 4870, 4588, 7762, 8565, 8579, 1939, 886, 6078, 6450, 3491, 917, 3223, 7181, 1821};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> topHeight = {7600, 2927, 6968, 4413, 3149, 4843, 9554, 3978, 8921, 4615};
    vector<int> topRadius = {7007, 9912, 701, 337, 620, 5821, 13, 9743, 1496, 6798};
    vector<int> bottomHeight = {8750, 4658, 2003, 2750, 2453, 4077, 4227, 5216, 4918, 2183, 5334, 7198, 3321, 7355, 182, 5881, 2722, 6802, 1885, 5886, 100, 302, 8169, 7724, 112, 2312, 1944, 354, 522, 6124, 9200, 8004, 2221, 3953, 3874, 2364, 7329, 1081};
    vector<int> bottomRadius = {2411, 1341, 9003, 553, 432, 4653, 8256, 7274, 106, 4730, 6350, 6837, 9633, 8615, 6143, 4917, 5580, 2862, 2129, 7653, 4721, 8792, 6880, 2079, 4509, 9881, 1077, 8369, 322, 6556, 5375, 2430, 3253, 6212, 5018, 8210, 4341, 7870};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> topHeight = {3978, 9876, 1597, 7330, 5779, 7691, 2502, 6416, 4315, 6210, 7965, 3109};
    vector<int> topRadius = {8530, 6401, 4585, 1353, 382, 1788, 8271, 8990, 442, 3190, 6895, 5073};
    vector<int> bottomHeight = {2948, 9941, 9049, 4666, 8073, 3744, 6676, 925, 2957, 4048, 5752, 387, 71, 9855, 4570, 4726, 1445};
    vector<int> bottomRadius = {3862, 7379, 5666, 4584, 5107, 4082, 7158, 3996, 8896, 5880, 521, 3515, 7550, 4670, 1874, 5193, 3089};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> topHeight = {7004, 7707, 9537, 9405, 8693, 954, 8253, 3838, 5529};
    vector<int> topRadius = {3754, 4392, 1940, 9175, 8476, 6423, 8632, 9214, 9774};
    vector<int> bottomHeight = {8650, 790, 4600, 7236, 7806, 487, 7204, 6043, 6140, 156, 5921, 8978, 5627, 6720, 8185, 6751, 6824, 8386};
    vector<int> bottomRadius = {6472, 4427, 2082, 4154, 613, 8250, 7751, 4020, 1288, 5126, 4201, 1854, 5428, 8679, 405, 1578, 6682, 225};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> topHeight = {9975, 3203, 6498, 1634, 6221, 539, 8509, 7028, 9077, 9612, 7513, 8444, 7541, 8476, 4769, 7895, 9763, 1837, 1483, 1821, 7983, 4146, 4123, 1820, 4388, 500, 8197, 7295, 3899, 4555, 437, 8555, 5094, 4176, 5399, 2438, 9766, 3667, 7474, 7689, 4940, 6057, 3444, 3982, 8538, 153, 3903};
    vector<int> topRadius = {6746, 1379, 4857, 4063, 9765, 3680, 7579, 5800, 8897, 3835, 4497, 3135, 3196, 863, 7872, 2777, 4226, 9648, 9674, 9835, 425, 9839, 1367, 6369, 985, 5131, 6850, 7040, 2930, 9506, 9275, 1811, 5804, 1016, 2765, 385, 704, 1662, 6870, 6844, 4281, 4029, 5022, 5851, 3741, 1471, 8238};
    vector<int> bottomHeight = {5914, 8856, 1813, 8256, 2013, 5124, 5887, 2714, 9803, 7269, 379, 5548, 6645, 7733, 1057, 9283, 82, 3654, 6245};
    vector<int> bottomRadius = {6268, 7468, 6942, 3039, 6807, 2527, 8711, 7824, 76, 4652, 274, 8320, 2752, 6265, 5574, 3448, 3725, 4619, 6720};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> topHeight = {5861, 7057, 5118, 393, 7345, 2924, 5574, 3524, 5846, 1081, 9706, 7988, 8455, 9300, 8028};
    vector<int> topRadius = {6332, 9172, 664, 7130, 9350, 3549, 2571, 9534, 3462, 7053, 5918, 9015, 8841, 9666, 5615};
    vector<int> bottomHeight = {1204, 4312, 8710, 434, 4798, 810, 3083, 8859, 5363, 210, 7927, 9988, 9623, 6618, 7062, 8461, 2204, 4914};
    vector<int> bottomRadius = {7464, 2132, 1790, 3137, 8386, 3876, 5790, 7697, 899, 5970, 6841, 8122, 3781, 9540, 5035, 5533, 9287, 7305};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> topHeight = {5707, 1541, 7801, 6295, 3207, 1021, 3196, 1138, 7856, 942, 843, 9811, 8570, 5211, 764, 627, 2466, 3066, 7451, 831, 9082, 2517, 4527, 6557, 502, 3261, 5103, 8728, 8270, 9894, 9006, 9482, 7056, 7899, 404};
    vector<int> topRadius = {9928, 3226, 8175, 5868, 2804, 3703, 655, 3374, 2989, 6795, 3963, 7361, 4687, 2048, 5987, 3595, 6618, 576, 9751, 294, 5528, 837, 20, 8723, 3987, 7359, 8735, 7334, 551, 1515, 1517, 8372, 9124, 4157, 3259};
    vector<int> bottomHeight = {9599, 9622, 8152, 8883, 3745, 9437, 8326, 9146, 8688, 1906, 5765, 6983, 5305, 700, 4145, 5119, 401, 1528, 795, 2838, 9618, 1044, 4134, 4464, 2686};
    vector<int> bottomRadius = {6255, 8597, 5517, 3857, 5830, 7341, 2319, 8131, 7015, 2823, 6363, 8245, 3090, 6718, 4329, 8286, 6701, 3583, 8289, 7275, 3825, 7202, 8311, 102, 1598};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> topHeight = {1502, 3766, 792, 46, 7286, 4063, 335, 1763, 8666, 1573, 6951, 2331, 3145, 6063, 7720, 9203, 5001, 5294, 7170, 3136, 2696, 7625, 3361};
    vector<int> topRadius = {9026, 1345, 7757, 9355, 276, 359, 1513, 7451, 6452, 671, 8646, 3605, 4077, 4257, 2309, 8583, 2140, 1070, 58, 545, 7124, 4970, 4036};
    vector<int> bottomHeight = {7176, 715, 7328, 2470, 1428, 8708};
    vector<int> bottomRadius = {9389, 1208, 8404, 2800, 5929, 3421};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> topHeight = {9154, 7640, 6113, 4279, 983, 7784, 6834, 8006, 4742, 799, 7970, 3935, 8315, 2791, 1895, 6240, 626, 95, 3110, 4680, 5185, 3898, 2230, 2054, 7099, 7348, 4580, 5590, 4276, 6539, 3067, 7993, 8712, 8295, 992};
    vector<int> topRadius = {7421, 3042, 5754, 5498, 794, 865, 7458, 6487, 1517, 6723, 6811, 8980, 969, 3115, 6610, 9175, 2914, 7387, 7657, 5699, 1359, 965, 1404, 7965, 5343, 7026, 4009, 2941, 8626, 388, 3262, 129, 8316, 5205, 410};
    vector<int> bottomHeight = {4111, 1849, 6058, 4522, 8995, 4269, 3077, 5415, 3014, 3081, 9699};
    vector<int> bottomRadius = {7814, 4042, 7626, 2846, 4200, 3339, 2369, 5147, 3623, 9144, 9095};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> topHeight = {4486, 8543, 6604, 7977, 6946, 6405, 3858, 7625, 8912, 345, 864, 16, 8740, 2301, 3983, 9328, 5891, 631, 8777, 1156, 8078, 1397, 4068, 6280, 9696, 3906, 5428, 5898, 1717, 3522, 4977, 7764, 7625, 4237, 7068, 1698, 3501, 4590, 6206, 8528, 2852, 3126, 4377, 8694, 8456, 3768};
    vector<int> topRadius = {9860, 5445, 4114, 7273, 8542, 2873, 8969, 2187, 1776, 835, 5851, 7661, 1914, 7258, 2933, 884, 7771, 3278, 4956, 3907, 7490, 8179, 6241, 8187, 5552, 9238, 2736, 340, 3988, 6196, 4514, 9214, 5269, 1313, 3243, 2734, 5766, 3761, 1442, 2701, 4240, 1432, 1599, 7155, 9347, 4162};
    vector<int> bottomHeight = {2850, 3841, 9830, 8438, 4850, 808, 8846, 4250, 6384, 9082, 3103, 9123, 9647, 787, 2672, 663, 7514, 3860, 7182};
    vector<int> bottomRadius = {8835, 6790, 6365, 9178, 2900, 6012, 7412, 3530, 7202, 4663, 1594, 421, 3389, 6075, 9977, 9395, 8581, 3357, 908};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> topHeight = {5, 6191, 8149, 5435, 6624, 6502, 2189, 8110, 7434, 2690, 2973, 6528, 4276, 5339, 8748, 2851, 4205, 2185, 6241, 4102, 2824, 6447, 1960, 8776, 5286, 588, 3046, 791, 6135, 7098, 8840, 3337, 2626, 8900, 1054, 744, 8716, 4668, 1290, 8639, 8519, 8482, 9546};
    vector<int> topRadius = {1415, 8727, 9050, 6289, 1298, 9173, 979, 3702, 5132, 9585, 9524, 8787, 3445, 8375, 615, 2158, 1291, 6281, 22, 1546, 1932, 3628, 9041, 8329, 2480, 5056, 9234, 8703, 5327, 9645, 5436, 8524, 355, 7562, 4499, 2301, 756, 6581, 7053, 2331, 9593, 3132, 937};
    vector<int> bottomHeight = {5170, 2887, 7913, 3319, 738, 5319, 9746, 3075, 8099, 5173, 5830, 524, 5264, 1299, 2135, 6911, 5480, 9953};
    vector<int> bottomRadius = {476, 3765, 8671, 5305, 7817, 7501, 6602, 4664, 7672, 8261, 9938, 9704, 9519, 1450, 8769, 7842, 7597, 6592};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> topHeight = {9859, 7448, 8306, 6727, 821, 7131, 8486, 9626, 1405, 171, 7109, 6440, 5872, 8994, 1450, 1357, 1072, 829, 9984, 5276, 8123, 2912, 7749, 9084, 4690, 162, 4512, 3184, 1175, 6476, 5754, 837, 8509, 261, 9168, 1916, 8787, 5908, 6145, 9243, 2462};
    vector<int> topRadius = {5519, 8552, 1884, 7503, 9419, 5991, 8440, 6511, 9697, 7694, 8708, 7619, 8364, 6217, 3902, 3702, 584, 7181, 4028, 2366, 3874, 454, 6009, 6065, 6163, 3362, 7654, 7683, 9180, 5794, 673, 1994, 8754, 396, 624, 7485, 306, 8439, 2841, 6239, 6064};
    vector<int> bottomHeight = {1238, 1784, 340, 9778, 1196, 6131, 599, 4415, 8635, 7564, 4969, 872, 4888, 199, 1372, 5581, 990};
    vector<int> bottomRadius = {4782, 9479, 5876, 5593, 7779, 4368, 6051, 7905, 2384, 9912, 7393, 736, 782, 696, 2135, 9044, 1716};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 17;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> topHeight = {9275, 6198, 1220, 3879, 2283, 3610, 7216, 6618, 4876, 9321, 651, 237, 1228, 7711, 6760, 8801, 1265, 5534};
    vector<int> topRadius = {161, 8785, 20, 9203, 6560, 8276, 2405, 4420, 2015, 9623, 1230, 2062, 7984, 1448, 6809, 3550, 6619, 2229};
    vector<int> bottomHeight = {4876, 6192, 5686, 7682, 889, 919};
    vector<int> bottomRadius = {7631, 2642, 510, 2953, 5062, 6051};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> topHeight = {6868, 880, 7250, 6524, 8549, 1799, 9893, 7664, 1104, 2785, 2723, 8411, 130, 8652, 4777, 787, 9460, 2349, 826, 223, 6414, 9883, 4010, 2519, 2443, 3845, 7815, 9664, 1109, 1056, 8819, 1794, 322, 4993, 4972, 7207, 9939, 328, 1546, 3579, 8940, 5171, 8359, 1320, 8667, 6437};
    vector<int> topRadius = {7401, 4331, 9912, 5101, 9552, 4360, 1980, 1084, 2746, 2596, 1302, 1977, 1613, 6206, 5636, 5907, 437, 8076, 7456, 6455, 7052, 5214, 6749, 6730, 5232, 4977, 9084, 464, 7056, 8547, 9590, 294, 4765, 7972, 7250, 7284, 3708, 6457, 6795, 1170, 4093, 1575, 7398, 7831, 9497, 7601};
    vector<int> bottomHeight = {9027, 4337, 6276, 2031, 9595, 835, 4940, 3300, 8975, 8410, 7232, 3201, 7181, 4873, 4305, 1367, 167, 9345, 3854, 8421, 5891, 1350, 202, 4695, 347, 9238, 1089, 6145, 2300, 3745, 5918, 1772, 6565, 9299, 5744, 9443, 8266, 6489, 7500, 8599, 4719, 4031};
    vector<int> bottomRadius = {3643, 9004, 7321, 7487, 3686, 4449, 3154, 5045, 5966, 9103, 4887, 7720, 6344, 2075, 7987, 2505, 5566, 2664, 6269, 2172, 8503, 4781, 371, 4732, 6601, 4046, 8858, 8852, 9539, 5211, 8379, 8955, 3290, 693, 7499, 5156, 9585, 3268, 8716, 8726, 6121, 7277};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> topHeight = {3339, 7743, 3016, 5949, 6013, 6334, 8468, 8001, 9350, 1155, 968, 9443, 8461, 1979, 8960, 5818, 1779, 4522, 639, 714, 4852, 1402, 1890};
    vector<int> topRadius = {2598, 194, 2125, 741, 6380, 4246, 2452, 9283, 2834, 4606, 6921, 6910, 4414, 6836, 8235, 651, 3028, 327, 3799, 9335, 3887, 7007, 2753};
    vector<int> bottomHeight = {9664, 4985, 6538, 1198, 910, 1614, 2217, 1085, 1903, 6943, 575, 5271, 5944, 8986, 388, 8391, 454, 6890, 6109, 8590, 214, 6662, 8740, 3581, 6553, 6853, 8658, 7561, 1372, 8371, 4780, 2436, 7508, 3392, 6598, 8394, 1152, 3263, 4337, 9571, 7752, 4238};
    vector<int> bottomRadius = {7782, 247, 184, 2887, 6148, 5862, 6835, 128, 9797, 957, 7661, 3947, 9555, 3086, 8331, 6096, 932, 7750, 6079, 7319, 8638, 4412, 6070, 8977, 1431, 7803, 3714, 6357, 8599, 1883, 6669, 385, 7089, 6050, 55, 9985, 2723, 4516, 9788, 6921, 9779, 102};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> topHeight = {8578, 732, 3144, 69, 1864, 1966, 4683, 166, 3160, 1854};
    vector<int> topRadius = {656, 7194, 5112, 4787, 443, 528, 900, 8428, 8742, 3016};
    vector<int> bottomHeight = {1762, 4553, 2402, 2438};
    vector<int> bottomRadius = {8366, 4791, 7198, 3127};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> topHeight = {2940, 4637, 9030, 7286, 5077, 5317, 8326, 4925, 6573, 7714, 38, 3649, 2851, 5871};
    vector<int> topRadius = {3417, 1232, 6654, 5272, 3751, 2703, 2488, 5129, 7111, 6912, 6121, 159, 7065, 7574};
    vector<int> bottomHeight = {1288, 960, 140, 7332, 2667, 2022, 8302, 9231, 1861, 6233, 2971, 8315, 1187, 9706, 2171, 2830, 751};
    vector<int> bottomRadius = {3099, 2450, 2474, 7950, 4528, 1119, 5026, 3965, 1372, 3919, 9116, 5058, 4378, 4577, 3953, 5391, 4584};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> topHeight = {4712, 8506, 4675, 8547, 9177, 6611};
    vector<int> topRadius = {1639, 9935, 7240, 387, 6816, 4230};
    vector<int> bottomHeight = {7164, 2802, 6040, 8517, 1966, 4024, 2042, 8262, 4239, 9289, 7356, 1899, 2833, 113, 9325, 1405, 3214, 8209, 7057, 5218, 3826, 9176, 2580, 8391, 3000, 7119, 3488, 1361, 3907, 6698, 7535, 647, 2636, 4951, 6814, 1350, 3710, 5106, 2878, 7040, 8074, 8565, 4415, 7328, 926, 9265, 5973, 7234, 607, 6687};
    vector<int> bottomRadius = {9618, 5315, 5255, 9929, 1368, 9448, 875, 5494, 822, 134, 3087, 5645, 5433, 1262, 4908, 2598, 600, 7369, 4635, 6129, 2932, 4589, 1137, 8692, 6827, 9765, 8689, 2622, 3867, 8452, 9829, 8605, 431, 7924, 2715, 3217, 1393, 5711, 8886, 6047, 6815, 7701, 8470, 3696, 4141, 2346, 2452, 8768, 534, 9175};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> topHeight = {6845, 8765, 453, 1286, 3426, 5288, 4574, 93, 5794, 1030, 8579, 6321, 1888, 3810, 5046, 250, 9360, 6263, 5520, 9381, 3248, 4712, 8649, 8754, 9919, 2486, 6225, 7490, 8304, 5866};
    vector<int> topRadius = {4453, 5144, 6806, 2062, 938, 9709, 5755, 6383, 125, 8930, 753, 151, 1205, 7964, 1884, 1763, 2893, 9355, 7371, 826, 8880, 5801, 7973, 9294, 6257, 2252, 195, 4139, 6771, 1509};
    vector<int> bottomHeight = {3255, 7348, 6676, 6277, 9987, 2049, 4569, 5372, 2010, 2297, 6520, 9859};
    vector<int> bottomRadius = {7069, 6058, 6857, 1970, 1548, 9514, 4807, 2118, 7781, 6653, 2568, 1222};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> topHeight = {3253, 843, 7500, 2354, 1710, 3283, 4512, 566, 2343, 2944, 9642, 8050, 4928};
    vector<int> topRadius = {7147, 8643, 1301, 1475, 1916, 2399, 1758, 7568, 3577, 6641, 5716, 4919, 2994};
    vector<int> bottomHeight = {6789, 2248, 7480, 346, 1873, 5058, 6429, 4688, 7199, 7439, 9387, 1574, 3174, 635, 9424, 1312, 5464, 3794, 482, 1080};
    vector<int> bottomRadius = {5051, 2060, 4608, 3618, 1818, 5929, 3951, 7108, 4664, 3709, 2747, 1000, 6081, 5805, 6604, 7762, 688, 5549, 9889, 9776};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> topHeight = {6343, 7213, 3973, 2758, 9009, 1635, 4136, 3010, 6385, 516, 2310, 2636, 4463, 9728, 6250, 8456, 665, 8319, 9394, 1679, 202, 8669, 3557, 6574, 892, 1667, 2174};
    vector<int> topRadius = {1672, 5299, 2536, 3727, 2068, 6602, 495, 830, 8604, 1223, 4719, 303, 3394, 6894, 9735, 3548, 1442, 9611, 5756, 4554, 4978, 6696, 3309, 4929, 492, 6061, 6963};
    vector<int> bottomHeight = {8483, 3689, 9951, 2298, 2404, 2338, 68, 729};
    vector<int> bottomRadius = {6446, 4514, 7318, 6659, 1400, 1875, 5526, 4760};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> topHeight = {3565, 3556, 1795, 9103, 2208, 2786, 6307, 8006, 4857, 3150, 614, 8841, 1375, 1325, 69, 635, 2704, 2907, 2266, 6856, 261, 7496, 1603, 6012, 1421, 7177, 2938, 6401, 7985, 3559, 9512, 7399, 6422, 3541, 2928, 4685, 4136, 819, 7682, 4332, 6626, 5669, 2334, 8857};
    vector<int> topRadius = {4369, 6699, 9669, 2031, 8022, 4748, 2032, 1132, 5265, 4160, 7545, 7735, 4249, 2804, 7264, 5202, 2658, 5120, 6462, 7952, 9559, 5469, 9968, 2325, 3844, 8582, 6919, 9792, 142, 1720, 8993, 6086, 6752, 713, 6607, 2684, 1131, 344, 2347, 1501, 5010, 3769, 4425, 3316};
    vector<int> bottomHeight = {6373, 3422, 3560, 5951, 7039, 4742, 6605, 6918, 3241, 4004, 3264, 2091, 5391, 6760, 7039, 454, 1119, 6357, 266, 2412, 878, 203, 6790, 945, 4449, 9471, 5620, 6755, 3126, 9265, 1069, 7796, 6305, 3890, 315, 3341, 9337, 9393, 2627, 4009, 2465, 2945, 4053, 1411};
    vector<int> bottomRadius = {1490, 238, 6981, 1120, 2682, 5584, 4929, 5791, 3445, 7275, 3149, 6016, 8182, 4894, 6550, 507, 2594, 1800, 7876, 8164, 7190, 9670, 1490, 5739, 7569, 5006, 4541, 2162, 1224, 3451, 515, 9332, 3682, 8539, 3309, 7880, 57, 9530, 7238, 1310, 9697, 5109, 5109, 2666};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> topHeight = {1292, 6925, 401, 3515, 7651, 4425, 382, 7460, 79, 8595, 1863, 6143, 2096, 5720, 9295, 7168, 3646, 1153, 5639, 3199, 5904, 5613, 9707, 4391, 6947, 2075, 5438, 8925, 2071, 5720, 4243, 2316, 9706, 3784, 6485, 281, 6967, 6961, 1329, 1483, 3812, 8281, 2718, 4513};
    vector<int> topRadius = {287, 522, 5065, 2676, 6564, 861, 7318, 4264, 8327, 9267, 9070, 2115, 4779, 3148, 5768, 7024, 6790, 6737, 513, 1637, 3872, 9980, 4537, 7605, 4695, 347, 5996, 5624, 4156, 8455, 3858, 6517, 9782, 140, 2609, 9787, 3432, 7391, 5781, 9902, 8076, 1116, 9362, 1321};
    vector<int> bottomHeight = {3643, 531, 400, 3260, 2114, 4331, 1040, 8888, 4880, 7550, 2964, 2673, 6547, 9887, 1378, 8962, 7299, 87, 5242, 8187, 1212, 9010, 7475, 9441, 9016, 5141, 9862, 4497, 5389, 2237, 8360, 7297, 4356, 5531, 9146, 7791, 4658, 1459, 8873, 3759, 8453, 8636, 2617, 2346};
    vector<int> bottomRadius = {8446, 7550, 7687, 7244, 9838, 433, 448, 8727, 8981, 4708, 8510, 4131, 9388, 3833, 9003, 9542, 517, 6938, 790, 8588, 9074, 4557, 4491, 4579, 2952, 929, 853, 8680, 4770, 489, 5326, 6116, 7609, 6018, 8674, 5393, 9865, 8443, 4959, 1042, 31, 4609, 9203, 1542};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> topHeight = {7020, 9583, 9224, 8864, 9836, 2262, 4286, 9461, 8289, 8841, 1794, 1621, 9645, 3577, 6422, 8891, 7771, 2262, 9246, 7836, 8705, 1499, 7730, 9036, 9929, 4703, 4065, 8897, 8980, 8062, 3126, 6818, 4314, 2472, 8762, 6911, 6824, 3944, 3774, 8417, 8290, 5309, 7558, 8609};
    vector<int> topRadius = {5397, 2953, 3477, 6211, 8619, 1446, 1519, 4151, 5950, 5411, 1455, 359, 6204, 3533, 2129, 1521, 1893, 377, 2024, 3143, 1006, 815, 4295, 3656, 6715, 4295, 1226, 8247, 4059, 7689, 1064, 1733, 4108, 1383, 3461, 1583, 283, 1379, 2934, 2566, 4449, 1509, 7148, 83};
    vector<int> bottomHeight = {1066, 2976, 1001, 6465, 2308, 2288, 62, 2182, 4071, 4413, 1955, 1545, 404, 1695, 2062, 5169, 2811, 713, 156, 1775, 2524, 2377, 7392, 1076, 3746, 2461, 276, 3506, 4356, 4414, 48, 4063, 2950, 4561, 1744, 1566, 2363, 4424, 4171, 4097, 2207, 1668, 1481, 8934};
    vector<int> bottomRadius = {1927, 7736, 4922, 8387, 6688, 5109, 1620, 3612, 9988, 9629, 7929, 8790, 2412, 1884, 9823, 7111, 3784, 1043, 3156, 7740, 7217, 8233, 8554, 9497, 5200, 9564, 8041, 8339, 8789, 8809, 3856, 4951, 4931, 5677, 8607, 7954, 8832, 7746, 7274, 6631, 2259, 4611, 1971, 8941};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> topHeight = {9607, 354, 8364, 5399, 1366, 3496, 7461, 4757, 6993, 8782, 1901, 6442, 8013, 4964, 9826, 2149, 6712, 9894, 5905, 6307, 642, 1626, 7142, 5470, 2317, 5826, 3278, 6684, 6577, 684, 1996, 2999, 4905, 4553, 7179, 871, 9755, 5045, 429, 5238, 9034, 3523, 9755, 5754};
    vector<int> topRadius = {6964, 8950, 9319, 4225, 7518, 5666, 9634, 5977, 3994, 8432, 1761, 3820, 1160, 6952, 2299, 6819, 4517, 7599, 8871, 1265, 3044, 241, 516, 5576, 9705, 5880, 8542, 346, 7840, 8819, 568, 2582, 9087, 9143, 3888, 8854, 4905, 4192, 8985, 4783, 4615, 7974, 5137, 7734};
    vector<int> bottomHeight = {7593, 6322, 4920, 3815, 823, 9536, 7265, 3491, 7631, 8882, 1822, 7554, 9369, 5266, 2945, 8407, 6171, 9715, 9321, 6295, 5278, 3090, 6887, 2053, 5148, 3706, 9603, 66, 7202, 4026, 3252, 4855, 278, 7030, 8782, 3291, 1921, 6283, 4672, 9562, 9617, 1238, 594, 3900};
    vector<int> bottomRadius = {3955, 368, 6284, 1932, 9356, 9677, 5197, 7237, 9931, 6642, 6128, 3984, 5301, 1405, 7453, 8960, 5572, 9747, 240, 1116, 9885, 9641, 4459, 8959, 4910, 547, 8212, 1542, 6662, 4570, 4651, 7503, 5521, 8714, 1889, 5358, 9746, 690, 6506, 2878, 7411, 983, 4375, 2277};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> topHeight = {8102, 3214, 4791, 5214, 6906, 1101, 1071, 3478, 3364, 319, 6874, 4116, 9238, 9486, 6020, 250, 4694, 5459, 6713, 234, 6922, 6557, 5613, 2841, 8780, 4202, 4529, 4969, 5906, 7501, 2482, 2572, 4250, 536, 1738, 134, 793, 6241, 5405, 4945, 2831, 8029, 2433, 6322};
    vector<int> topRadius = {201, 1116, 3982, 9445, 2863, 8141, 1810, 7079, 6157, 9883, 8434, 1616, 5584, 4242, 8801, 1316, 9149, 711, 5441, 8812, 1161, 5252, 7762, 6610, 9118, 3817, 2539, 1224, 1785, 8681, 1279, 5847, 7427, 6417, 5867, 7711, 8362, 4212, 7323, 3288, 575, 7726, 3339, 8213};
    vector<int> bottomHeight = {579, 161, 8567, 5362, 9122, 3872, 3990, 1230, 6615, 6158, 4396, 4306, 4539, 9257, 2376, 8200, 6672, 3906, 3050, 4228, 4114, 9691, 5862, 2275, 366, 6062, 9594, 3807, 6384, 5418, 2188, 8749, 3169, 3976, 1529, 1526, 91, 9276, 3874, 7682, 390, 311, 2561, 6208};
    vector<int> bottomRadius = {6982, 6661, 587, 6734, 1919, 3140, 6961, 5474, 4, 6665, 6038, 7974, 2459, 2444, 1500, 3342, 1006, 7765, 8933, 9059, 5459, 3400, 7102, 440, 3917, 4869, 6459, 8734, 9098, 1830, 917, 8589, 4793, 7263, 8253, 2689, 3184, 8778, 2292, 6534, 3254, 425, 1885, 2845};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> topHeight = {5364, 9991, 4345, 9788, 6441, 9700, 9862, 6112, 8507, 7806, 9229, 9801, 9758, 8104, 3874, 7527, 6033, 6047, 1137, 9221, 8500, 6890, 5851, 3312, 9303, 4128, 3926, 5985, 7139, 1058, 7831, 8139, 1182, 7807, 7982, 9405, 4495, 9802, 6657, 8210, 6318, 8517, 6484, 9824};
    vector<int> topRadius = {3953, 1499, 3305, 1000, 3953, 6348, 4385, 3060, 1109, 551, 7284, 4902, 3634, 1190, 633, 4982, 2354, 2157, 1050, 9151, 1487, 521, 1713, 1634, 2467, 1479, 1738, 3124, 945, 329, 5362, 2557, 525, 7540, 1325, 5101, 3482, 5229, 4059, 3859, 6027, 5724, 3566, 2062};
    vector<int> bottomHeight = {5436, 3090, 3815, 3830, 6976, 6818, 423, 5046, 428, 1269, 843, 3977, 7459, 6352, 3190, 3959, 4072, 7149, 7574, 1015, 1673, 2355, 4483, 99, 1944, 5658, 1871, 248, 3213, 4049, 2224, 6439, 541, 436, 1612, 5079, 2303, 4657, 1441, 136, 2227, 2264, 3098, 1757};
    vector<int> bottomRadius = {7695, 3869, 5095, 7508, 7873, 9243, 2851, 8567, 1367, 3146, 5093, 7401, 9049, 9332, 4041, 5652, 4112, 8780, 9257, 6283, 6379, 3523, 6657, 2398, 3378, 7666, 7224, 5641, 9671, 6575, 7767, 7887, 5901, 2530, 9846, 7148, 3191, 5000, 4367, 1920, 2491, 6203, 6128, 2900};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> topHeight = {8502, 7025, 7366, 9032, 4036, 825, 355, 2028, 8148, 7243, 3921, 8089, 8205, 8979, 4275, 9492, 8942, 9186, 8345, 6519, 3875, 8226, 2280, 9854, 2530, 3057, 2767, 7554, 9232, 3415, 7552, 2291, 9636, 4529, 2971, 3993, 8438, 7115, 6554, 9064, 7482, 8594, 9417, 5978};
    vector<int> topRadius = {4231, 4710, 4265, 528, 2522, 862, 138, 609, 7634, 973, 2066, 6397, 7937, 1462, 1394, 5943, 2956, 6364, 8209, 3903, 244, 5934, 2409, 3449, 2134, 67, 1711, 305, 1684, 936, 388, 340, 110, 1495, 2927, 1408, 1687, 345, 2173, 1123, 6558, 2668, 2404, 558};
    vector<int> bottomHeight = {963, 4221, 3037, 6864, 404, 6812, 1165, 2183, 7130, 2750, 3123, 471, 2399, 1730, 2111, 6230, 3915, 876, 2038, 1514, 3547, 2925, 2757, 55, 44, 489, 2870, 3763, 4819, 1351, 5210, 3605, 156, 2190, 2697, 136, 4922, 5025, 2299, 3644, 691, 1642, 7594, 1587};
    vector<int> bottomRadius = {6233, 6507, 6792, 9450, 3078, 7306, 9501, 4089, 9636, 9556, 8400, 6156, 3126, 6418, 2706, 7012, 9425, 8923, 5720, 2908, 7267, 9850, 3579, 6080, 8705, 9184, 6046, 5010, 9837, 4021, 6955, 7605, 6207, 6340, 6173, 7991, 6933, 9188, 3702, 6483, 2002, 4066, 8672, 2811};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> topHeight = {2447, 5548, 910, 8771, 2814, 6857, 5941, 5164, 4454, 6578, 4796, 9514, 2711, 5051, 4886, 677, 2099, 6167, 4242, 7737, 5492, 1528, 8529, 9490, 5058, 1373, 8393, 4890, 4633, 6129, 724, 54, 1000, 5784, 7277, 9736, 291, 7161, 3409, 3394, 1328, 6579, 605, 960};
    vector<int> topRadius = {9669, 1953, 2886, 3445, 106, 4724, 9578, 3875, 9524, 6170, 2016, 6489, 7248, 7075, 3128, 7148, 5367, 5886, 2991, 2249, 5993, 7342, 4613, 914, 5402, 8766, 3460, 8114, 2586, 2634, 469, 9532, 5422, 9441, 5102, 9774, 5396, 9185, 5798, 5831, 2409, 3248, 8900, 2941};
    vector<int> bottomHeight = {5897, 3779, 1055, 9468, 3613, 8699, 7795, 5994, 1174, 7737, 4398, 1506, 3088, 3512, 9986, 5693, 6526, 7292, 9316, 4993, 2602, 5305, 8018, 4473, 2950, 4937, 7166, 9381, 3673, 6830, 6784, 218, 320, 861, 2492, 429, 4607, 7523, 5670, 511, 6855, 9801, 6457, 2910};
    vector<int> bottomRadius = {4192, 9747, 5438, 8527, 4927, 6054, 2485, 6531, 1906, 5188, 4191, 9051, 9651, 1381, 9575, 2069, 2933, 766, 3897, 8211, 5330, 8868, 4447, 3051, 9583, 8404, 3028, 6579, 5208, 6903, 4347, 4844, 5657, 8738, 7354, 2033, 2837, 499, 9767, 6542, 3442, 139, 8085, 7198};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> topHeight = {8853, 1808, 9500, 1098, 1463, 8858, 801, 8249, 3279, 2083, 7159, 275, 3273, 7744, 8476, 9208, 3885, 2556, 7736, 7318, 3978, 8922, 4723, 4237, 2971, 2060, 7322, 1230, 199, 7253, 5924, 2581, 1107, 3241, 7769, 6842, 7204, 9349, 2580, 7253, 4063, 9683, 4571, 8373};
    vector<int> topRadius = {7847, 8993, 3661, 8688, 5413, 3108, 4899, 5328, 9868, 3729, 328, 1767, 3778, 9925, 3522, 2366, 8721, 1605, 7905, 6239, 1806, 4346, 7637, 2506, 4953, 5130, 8011, 5562, 2506, 7759, 5512, 3142, 8757, 6558, 5296, 9252, 3901, 9385, 1557, 5457, 9532, 4868, 4710, 2379};
    vector<int> bottomHeight = {4274, 2879, 4945, 6813, 9022, 3345, 8617, 7483, 8211, 4997, 1546, 4526, 9572, 6138, 1498, 9174, 1027, 9246, 6725, 4387, 5270, 6678, 6014, 8062, 4552, 8188, 4271, 4241, 1482, 1869, 1355, 8484, 1168, 2517, 720, 3014, 6988, 1766, 8367, 9085, 1457, 3471, 6466, 3398};
    vector<int> bottomRadius = {4336, 1867, 4656, 5617, 4185, 4463, 9555, 1450, 8691, 3650, 3856, 2791, 9813, 2579, 6590, 4978, 8126, 3723, 8607, 2604, 4796, 196, 9741, 4260, 1713, 7166, 9849, 7638, 8075, 9037, 9013, 5416, 7164, 2731, 6109, 1475, 9545, 3855, 2674, 2568, 4592, 8501, 7824, 5927};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> topHeight = {2015, 3589, 4452, 4096, 3415, 9130, 7431, 2821, 8230, 5620, 6960, 3465, 6247, 3834, 4268, 3328, 569, 2916, 5340, 8494, 6683, 5189, 3564, 6234, 8071, 4158, 8532, 1591, 25, 7689, 6805, 9733, 8811, 4647, 6681, 8678, 3290, 5735, 4864, 2257, 332, 7940, 4107, 6099};
    vector<int> topRadius = {8257, 388, 1259, 4550, 9821, 8447, 3245, 5864, 9980, 8964, 8760, 1080, 3941, 907, 767, 6119, 6318, 100, 5398, 8270, 926, 991, 498, 6664, 8855, 6204, 2283, 1140, 1454, 6605, 1480, 9067, 3297, 8509, 9203, 9101, 1797, 1202, 6819, 9999, 6224, 1895, 9037, 2452};
    vector<int> bottomHeight = {4742, 9277, 5822, 9048, 9161, 8585, 8140, 8220, 8567, 4557, 779, 9849, 2852, 3522, 9724, 9174, 5692, 1745, 6295, 8594, 3936, 2345, 7483, 3415, 1772, 5722, 2234, 3683, 8679, 3033, 5757, 7126, 7808, 2450, 8354, 243, 3075, 476, 8034, 3038, 6411, 4258, 5504, 7203};
    vector<int> bottomRadius = {5159, 1703, 1326, 8478, 3243, 8931, 4204, 7619, 1497, 568, 9392, 2447, 2827, 6475, 4056, 3597, 3916, 2309, 1768, 4862, 806, 9185, 1776, 5184, 1386, 798, 9741, 7867, 54, 5999, 9908, 497, 1647, 6775, 8915, 7374, 3830, 4638, 8848, 4236, 9223, 4754, 1586, 6325};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> topHeight = {8081, 96, 5023, 5999, 3449, 4554, 2881, 7938, 2817, 7979, 4508, 3142, 521, 7418, 7220, 8641, 9800, 7141, 8266, 9444, 1669, 5876, 1565, 4037, 6572, 4383, 2805, 8541, 1274, 4380, 6938, 7637, 303, 4869, 5273, 1434, 1736, 3415, 6248, 909, 6254, 6999, 9330, 1826};
    vector<int> topRadius = {5183, 4388, 531, 5561, 7194, 530, 2429, 2754, 7074, 3499, 5423, 5533, 9744, 5886, 4347, 6650, 9967, 7654, 576, 4379, 8677, 9865, 242, 784, 7822, 6101, 6066, 3041, 8935, 1337, 4648, 9977, 1430, 9761, 3837, 4724, 9944, 9055, 7328, 1471, 9132, 6358, 1617, 7725};
    vector<int> bottomHeight = {7724, 1316, 2028, 7148, 8230, 523, 5067, 7971, 9144, 9846, 5683, 162, 5444, 5740, 5516, 4256, 3893, 5531, 8344, 8319, 606, 2917, 9739, 1552, 7030, 9743, 849, 5193, 1782, 3659, 212, 4656, 3153, 1528, 9587, 1490, 7614, 6838, 6192, 4427, 9876, 4225, 7769, 8626};
    vector<int> bottomRadius = {735, 7295, 4141, 4981, 9459, 1128, 8245, 1020, 8320, 3340, 2165, 2035, 5791, 948, 2537, 5101, 5598, 4868, 1495, 5553, 1128, 9, 9251, 5753, 9740, 7628, 4405, 8835, 7672, 9190, 4624, 3530, 7493, 4147, 1928, 9984, 9549, 8055, 9645, 495, 3477, 3391, 4051, 5469};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> topHeight = {9933, 1822, 900, 2986, 5182, 4029, 4424, 6465, 5097, 6577, 266, 2185, 6852, 347, 2750, 5390, 9207, 2676, 2929, 8006, 2409, 8408, 7369, 6284, 7184, 5187, 1141, 5484, 960, 5410, 9158, 5806, 366, 6955, 9522, 9668, 9174, 7374, 6879, 519, 3719, 4557, 2278, 9999};
    vector<int> topRadius = {4380, 2331, 9185, 395, 5968, 3514, 7276, 3109, 8889, 656, 406, 5200, 3662, 5876, 6171, 2660, 6572, 8930, 6248, 3319, 1448, 5914, 5345, 8683, 4023, 9334, 9112, 1986, 5805, 5038, 9813, 6907, 9395, 5835, 2282, 6759, 3061, 515, 4471, 4739, 3336, 6929, 9947, 2603};
    vector<int> bottomHeight = {5971, 2996, 7210, 6960, 713, 445, 7366, 3406, 6603, 1167, 493, 6741, 3762, 7910, 8176, 9688, 8996, 4415, 3673, 6879, 4201, 6919, 9638, 1115, 1630, 4101, 1945, 7749, 3083, 4531, 979, 900, 1520, 8015, 8020, 8454, 5273, 2020, 5322, 4838, 7633, 5164, 6943, 6749};
    vector<int> bottomRadius = {3178, 7984, 5043, 797, 6964, 7930, 4401, 676, 638, 4978, 877, 4359, 3217, 5616, 7535, 2915, 8068, 4862, 5517, 5489, 7940, 2379, 6970, 9030, 3812, 6690, 9337, 5090, 4690, 4824, 247, 9336, 9998, 3342, 9394, 3149, 9066, 4468, 2869, 106, 3675, 6234, 9492, 3114};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> topHeight = {7866, 8574, 9859, 7120, 6015, 6517, 7739, 6635, 8321, 3298, 9853, 8040, 9709, 5688, 2905, 6251, 7261, 7846, 5757, 4444, 2761, 5757, 3073, 7316, 1365, 9786, 9830, 6340, 9301, 9061, 9136, 9703, 9679, 4357, 4545, 7149, 8551, 4199, 7525, 7108, 3209, 7329, 4086, 5507};
    vector<int> topRadius = {947, 5515, 527, 34, 3511, 4620, 4733, 5086, 95, 255, 6376, 5270, 6360, 1916, 2161, 2572, 2048, 4675, 4516, 2664, 1564, 3405, 561, 3947, 60, 2731, 8843, 3264, 7448, 2539, 6491, 741, 246, 3731, 3442, 311, 5607, 4020, 3516, 1558, 803, 5272, 2349, 2035};
    vector<int> bottomHeight = {6615, 16, 1424, 4260, 8162, 6788, 6553, 1465, 784, 6904, 3556, 1945, 7495, 522, 1696, 66, 149, 4044, 243, 4579, 125, 3514, 1276, 1761, 1613, 591, 1143, 21, 6520, 5933, 3038, 70, 9835, 1610, 2800, 1829, 4885, 4382, 1872, 1814, 568, 51, 1963, 4799};
    vector<int> bottomRadius = {7817, 6262, 2519, 8577, 9290, 7791, 6661, 6449, 8127, 8258, 5078, 6619, 7959, 3714, 6087, 9517, 953, 4562, 8802, 6940, 6987, 9496, 8282, 8023, 8373, 684, 4530, 1388, 6823, 7240, 4124, 8723, 9890, 3886, 3172, 6792, 5380, 4573, 8719, 2052, 6571, 8110, 6453, 9259};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> topHeight = {6191, 7742, 4410, 559, 6753, 9290, 4111, 2922, 156, 3835, 5676, 9040, 9103, 6163, 6024, 8858, 326, 452, 6012, 3785, 6510, 2252, 9451, 3782, 6204, 3766, 9264, 6486, 4214, 7260, 8036, 8118, 614, 1187, 9338, 4053, 1779, 6918, 9762, 2097, 2218, 376, 1806, 4501};
    vector<int> topRadius = {4569, 3997, 3180, 4916, 4739, 2222, 2093, 1303, 9662, 1194, 8152, 2336, 9908, 549, 8058, 5397, 9921, 5630, 4542, 3880, 1772, 4660, 407, 8669, 3462, 3466, 4243, 427, 7591, 7350, 7353, 9976, 5074, 3663, 4002, 2645, 8303, 9188, 8448, 1982, 262, 3540, 2332, 5916};
    vector<int> bottomHeight = {103, 9882, 5621, 9974, 3305, 9413, 6358, 4265, 9189, 3519, 1683, 131, 1586, 7041, 2967, 7832, 8198, 4563, 2971, 8213, 206, 7774, 5269, 7249, 595, 4964, 8035, 7831, 2656, 4821, 230, 3670, 6473, 1483, 3111, 8975, 8464, 3061, 7178, 4185, 9621, 5716, 6825, 6554};
    vector<int> bottomRadius = {2973, 2597, 7060, 5135, 3951, 757, 3693, 5696, 6573, 3406, 521, 1171, 5278, 6446, 367, 3892, 2053, 4677, 4051, 407, 1790, 66, 6932, 5713, 6116, 5295, 5838, 3065, 299, 9746, 9304, 9529, 4125, 7085, 4856, 4092, 3697, 1617, 6746, 8790, 6595, 5038, 8963, 4920};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> topHeight = {3720, 7126, 6747, 6454, 6873, 8025, 9553, 6543, 1063, 6173, 8467, 4021, 8901, 7525, 4818, 8051, 9647, 2794, 5434, 7117, 1622, 1760, 7410, 9708, 9334, 8630, 8084, 5564, 4205, 9232, 5474, 8432, 2349, 8392, 4450, 6375, 5023, 4156, 7308, 8689, 8454, 9388, 9283, 8826};
    vector<int> topRadius = {794, 4134, 3443, 1756, 711, 5672, 2421, 6179, 706, 5149, 885, 3589, 5172, 235, 2907, 3555, 6423, 2440, 469, 107, 640, 1303, 2931, 4038, 4425, 1851, 811, 3653, 2293, 2748, 4668, 6492, 1155, 5931, 1493, 2915, 4260, 2510, 1424, 5491, 1419, 4506, 5571, 491};
    vector<int> bottomHeight = {4967, 3342, 469, 6698, 8505, 2440, 7394, 184, 2755, 462, 6014, 9805, 2423, 4921, 139, 634, 4339, 7029, 2315, 5967, 1410, 3228, 7103, 3749, 4480, 184, 2884, 890, 6777, 1294, 1649, 180, 59, 1168, 1951, 6421, 407, 3784, 8161, 2504, 2539, 7613, 324, 4638};
    vector<int> bottomRadius = {7748, 7860, 4359, 6873, 8720, 7080, 9903, 8427, 9089, 4190, 7327, 9825, 5551, 6677, 2414, 5016, 8946, 8013, 6350, 8836, 6899, 6254, 7626, 7876, 6790, 348, 5489, 2826, 9184, 5298, 1941, 1147, 5513, 7109, 2333, 9788, 2369, 8345, 8512, 7838, 5543, 9805, 8849, 8439};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> topHeight = {8633, 6374, 9320, 9155, 4493, 3369, 9890, 8610, 6621, 9370, 8971, 913, 3586, 9823, 8822, 7240, 9258, 6152, 7069, 2436, 7901, 9587, 6468, 4087, 9406, 9986, 6108, 8372, 5128, 5207, 7483, 2116, 3833, 9788, 6911, 4226, 6886, 6326, 8382, 8238, 4786, 1622, 9621, 3768};
    vector<int> topRadius = {4941, 5183, 2612, 9743, 4384, 3416, 3908, 1546, 2156, 2939, 581, 40, 461, 2663, 3355, 4355, 4504, 2875, 6932, 983, 6044, 8182, 2188, 3261, 2146, 4942, 393, 7156, 2657, 20, 3750, 1299, 3662, 5052, 793, 2765, 2440, 3022, 3338, 4849, 3478, 292, 5404, 952};
    vector<int> bottomHeight = {761, 208, 1590, 1809, 2615, 1321, 1722, 1285, 1375, 1838, 2069, 2868, 3731, 542, 2946, 2393, 423, 1711, 2080, 3812, 5740, 5362, 5505, 5597, 919, 2810, 1920, 255, 2576, 2758, 2846, 836, 4863, 5315, 362, 317, 487, 889, 2832, 71, 1235, 5363, 4009, 4271};
    vector<int> bottomRadius = {4141, 5972, 9866, 7766, 4326, 4750, 5518, 3671, 7087, 1984, 4007, 8770, 7860, 826, 3949, 7267, 5472, 9221, 9505, 7424, 9784, 9958, 7360, 9180, 5019, 8499, 7154, 8796, 5037, 3780, 9505, 2132, 5636, 8630, 7231, 6585, 674, 2028, 8573, 7817, 3740, 5999, 5882, 9598};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> topHeight = {285, 3942, 5291, 6133, 7158, 2150, 8712, 653, 2972, 8966, 2787, 5144, 5954, 5637, 4374, 949, 2864, 4948, 1368, 9803, 411, 5288, 7578, 1894, 7, 5061, 3643, 4163, 3955, 3999, 1181, 9772, 7651, 9927, 530, 3062, 5207, 3528, 824, 8442, 4251, 673, 6619, 193};
    vector<int> topRadius = {7350, 2493, 9865, 2250, 2261, 8885, 1320, 6532, 9077, 3945, 3578, 6314, 9599, 1388, 8091, 4188, 9736, 5492, 1894, 7148, 6478, 1401, 6236, 9178, 7526, 8355, 6743, 9524, 7660, 391, 7128, 7826, 848, 3930, 4131, 2820, 2455, 1443, 3322, 9631, 351, 6453, 7676, 9090};
    vector<int> bottomHeight = {2798, 2062, 4835, 975, 25, 5632, 2639, 1867, 2207, 207, 9135, 928, 761, 9214, 9322, 7378, 6346, 9859, 3816, 9563, 6429, 6151, 3510, 4069, 3048, 1262, 5730, 1048, 697, 80, 6551, 1744, 3656, 728, 5521, 5363, 7597, 702, 5802, 1166, 1225, 5191, 6013, 8854};
    vector<int> bottomRadius = {7936, 1691, 5525, 9649, 2773, 2083, 9466, 8612, 3151, 8044, 2308, 5089, 1345, 1965, 1028, 5197, 838, 866, 1249, 4080, 2889, 7642, 6496, 5575, 5800, 4173, 1658, 7073, 6591, 1837, 57, 7237, 7236, 7708, 6581, 2156, 3816, 1145, 4464, 2160, 4940, 5320, 6765, 7448};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> topHeight = {2993, 5753, 2227, 4828, 9285, 6860, 9205, 2949, 3104, 8470, 4196, 5656, 5671, 9614, 6429, 2617, 6359, 6259, 7478, 7151, 3769, 8966, 8226, 4678, 9477, 9176, 8827, 3877, 8403, 9019, 9578, 4665, 9595, 6309, 4725, 7313, 4967, 3857, 4633, 7584, 9265, 5690, 5471, 3082};
    vector<int> topRadius = {2798, 5369, 831, 3171, 1284, 5085, 1941, 771, 1947, 8647, 3338, 2421, 3925, 5367, 6349, 833, 2983, 3448, 795, 5697, 1892, 8771, 3135, 4360, 537, 3963, 8729, 3962, 7800, 858, 5973, 646, 1431, 446, 741, 5382, 4445, 923, 3581, 5883, 9419, 5493, 2830, 1703};
    vector<int> bottomHeight = {4431, 1495, 2895, 7243, 2718, 1585, 1612, 882, 2645, 6015, 4692, 4538, 1129, 2853, 3045, 195, 1159, 2669, 2106, 422, 2025, 4506, 155, 1349, 1776, 6070, 3950, 2220, 363, 7792, 4818, 323, 4727, 791, 706, 5581, 2376, 3964, 277, 741, 2717, 8376, 1179, 275};
    vector<int> bottomRadius = {6244, 4670, 3281, 9690, 7823, 6024, 1654, 1304, 5757, 8724, 9546, 4783, 8716, 6373, 5648, 6605, 7103, 5480, 5944, 2566, 9421, 8963, 4880, 7000, 2698, 7001, 6266, 7108, 6979, 8320, 5478, 8530, 7126, 8345, 3821, 6652, 7639, 9259, 2722, 5975, 7116, 8803, 4348, 5722};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> topHeight = {6529, 8103, 7614, 9482, 6747, 2940, 9496, 7792, 6443, 7212, 4918, 4413, 8731, 9582, 3136, 9022, 3241, 4351, 9035, 4662, 7620, 6557, 5854, 2735, 9213, 2455, 7753, 1557, 1580, 5863, 8292, 8605, 5689, 8005, 9300, 9835, 4280, 6285, 9634, 7920, 4691, 7343, 7326, 9671};
    vector<int> topRadius = {2530, 4548, 6498, 6097, 1855, 1575, 5116, 3199, 5917, 6779, 4570, 2378, 1449, 6182, 2276, 5568, 890, 1883, 566, 4151, 1678, 2355, 4449, 975, 4546, 249, 5266, 1079, 1452, 752, 2412, 2604, 1621, 1212, 7542, 4582, 1609, 2452, 172, 1889, 4206, 4093, 4793, 253};
    vector<int> bottomHeight = {5665, 1879, 104, 5552, 3053, 5505, 882, 2795, 1590, 2876, 1913, 293, 160, 5039, 4772, 4538, 2079, 2079, 3000, 2928, 2270, 9839, 6885, 2954, 2976, 795, 61, 1840, 2246, 2651, 5730, 7901, 7656, 3470, 3732, 95, 3374, 5700, 57, 1287, 8324, 3438, 3380, 5557};
    vector<int> bottomRadius = {8331, 7552, 9980, 9404, 5896, 5790, 7401, 7191, 4552, 7003, 6514, 1277, 8731, 9452, 6562, 8570, 4376, 5875, 9640, 5887, 3473, 9967, 8464, 7314, 6095, 5859, 7426, 8959, 7748, 7772, 5519, 7543, 7224, 6505, 7884, 4850, 9131, 7830, 5054, 1815, 8150, 9387, 9344, 9704};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> topHeight = {6501, 2122, 8424, 7195, 8946, 5084, 3019, 1164, 8902, 8759, 7520, 7282, 5635, 8901, 2617, 6282, 8202, 9190, 5174, 7943, 4371, 8191, 5386, 4469, 9757, 4317, 7619, 9250, 955, 9193, 7967, 9988, 3269, 5647, 5421, 4562, 2859, 6855, 4343, 9516, 7471, 5290, 6627, 8056};
    vector<int> topRadius = {6998, 1186, 7371, 1897, 6253, 1982, 2431, 651, 9378, 5730, 3560, 5949, 3796, 3324, 1703, 2627, 4340, 6890, 3130, 1740, 3452, 5080, 1376, 2350, 6862, 4186, 3444, 8622, 404, 4734, 8095, 8012, 65, 5870, 2530, 3670, 106, 5323, 2420, 8236, 3018, 690, 3460, 4371};
    vector<int> bottomHeight = {4024, 2279, 5131, 2268, 2116, 8724, 1583, 1237, 2337, 2331, 2294, 2272, 2030, 5796, 3068, 6019, 194, 209, 2814, 1790, 823, 830, 4222, 6221, 2206, 2807, 1189, 1435, 1424, 1258, 3235, 5610, 5185, 3652, 112, 4402, 2042, 4151, 5455, 2053, 1564, 1576, 2225, 516};
    vector<int> bottomRadius = {5113, 7580, 7594, 8344, 4156, 9676, 9300, 5935, 7180, 3233, 9758, 6669, 3506, 7146, 8520, 6528, 1290, 9332, 8256, 6858, 6184, 9338, 5502, 8025, 2434, 3259, 7615, 2226, 6655, 4440, 5308, 6140, 8690, 5192, 9172, 6840, 2314, 9259, 8014, 6764, 3549, 7735, 4303, 8100};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> topHeight = {7152, 1855, 1555, 7169, 2620, 6918, 6523, 5183, 9831, 9387, 9991, 2782, 1529, 4687, 9843, 6071, 2878, 6784, 9904, 5287, 8787, 6308, 8917, 5629, 3882, 7033, 2496, 5099, 5559, 7682, 9536, 9171, 5529, 7020, 7550, 4524, 4838, 9955, 8631, 4237, 6048, 9414, 9104, 6596};
    vector<int> topRadius = {5687, 1322, 299, 1113, 1997, 6505, 432, 1524, 5812, 5955, 2297, 1688, 737, 1649, 5115, 2021, 1700, 2179, 8230, 662, 2618, 464, 170, 4198, 1477, 4062, 1447, 2777, 2870, 3216, 5741, 5794, 1264, 2188, 3888, 2569, 1678, 2517, 8160, 3668, 4532, 7758, 4986, 1682};
    vector<int> bottomHeight = {8012, 4909, 4695, 3339, 5753, 3674, 77, 890, 3786, 5452, 4211, 5055, 6733, 2563, 7742, 1989, 1021, 1595, 3313, 267, 50, 7243, 80, 114, 36, 2468, 4605, 1351, 3226, 4228, 2095, 683, 6629, 2118, 875, 1409, 68, 5067, 987, 70, 299, 438, 2160, 5251};
    vector<int> bottomRadius = {8110, 6807, 7156, 7844, 7903, 4574, 6161, 5394, 4419, 6139, 6675, 9136, 7994, 6025, 8409, 4067, 3924, 6892, 7893, 323, 3232, 7305, 5909, 1557, 5027, 7267, 7084, 2211, 6429, 7069, 7529, 4897, 8050, 9839, 6710, 6518, 8293, 6542, 9025, 8156, 9298, 6142, 8651, 9736};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> topHeight = {2700, 2166, 36, 1014, 2108, 1015, 1568, 6319, 2407, 5127, 5471, 4363, 9103, 6278, 4764, 9616, 6387, 5578, 4254, 2700, 5606, 4078, 3694, 7420, 4314, 3318, 525, 1248, 7940, 3028, 7126, 8210, 7221, 6536, 1770, 9331, 2397, 5628, 2931, 3305, 313, 1429, 5381, 4270};
    vector<int> topRadius = {8018, 793, 5016, 2043, 6626, 927, 2080, 2007, 9463, 1746, 3858, 4144, 298, 616, 7195, 4281, 3978, 6448, 2078, 3633, 5263, 1874, 391, 6162, 9853, 566, 9753, 9008, 6707, 4365, 8760, 9852, 4229, 8324, 6286, 4689, 2619, 4343, 44, 6912, 3007, 3755, 9800, 7087};
    vector<int> bottomHeight = {2149, 7159, 377, 186, 3056, 1637, 3043, 851, 9564, 8990, 146, 2429, 7372, 2743, 8986, 5344, 5809, 8526, 3548, 3328, 9467, 7954, 6178, 7318, 9725, 9450, 1654, 1654, 6237, 2987, 6513, 7704, 9188, 1384, 5279, 7133, 8927, 559, 6323, 3122, 879, 6130, 9511, 6883};
    vector<int> bottomRadius = {6668, 9576, 2640, 1834, 6160, 588, 4878, 3151, 8051, 8527, 7080, 4495, 6743, 7777, 4355, 2913, 9838, 9692, 1144, 8240, 7214, 1088, 95, 7481, 1026, 7296, 3644, 5625, 3673, 3486, 7958, 3804, 514, 254, 6673, 9701, 7913, 5281, 8289, 1155, 572, 8950, 4334, 95};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> topHeight = {6446, 8079, 7578, 8358, 8091, 4981, 3085, 4664, 8647, 5409, 6201, 4525, 8371, 6599, 9809, 7332, 4522, 9441, 3114, 6415, 8967, 9392, 6240, 3043, 2329, 5552, 1806, 9974, 3361, 6699, 5355, 5509, 6450, 9508, 6773, 5042, 7395, 5342, 6132, 9618, 8543, 6112, 9510, 2700};
    vector<int> topRadius = {6072, 5288, 8990, 7270, 7278, 782, 2336, 5131, 4699, 3987, 7546, 5441, 5596, 5497, 3372, 3480, 405, 8721, 3926, 5523, 9223, 5227, 6175, 264, 1815, 6136, 98, 3270, 3950, 1836, 4329, 121, 3013, 9827, 4538, 2586, 2104, 6899, 7914, 3822, 1926, 927, 3867, 3469};
    vector<int> bottomHeight = {2261, 1494, 3931, 2528, 2608, 434, 2128, 3072, 4215, 1587, 4033, 1683, 1283, 4184, 708, 548, 841, 1596, 6771, 1618, 1557, 4356, 6875, 2536, 2160, 3671, 4484, 2476, 1550, 2978, 1556, 444, 162, 150, 4071, 4139, 4405, 1430, 3, 2541, 5045, 2132, 240, 4171};
    vector<int> bottomRadius = {5899, 9892, 7389, 7473, 8377, 9116, 5561, 7299, 7878, 4052, 9081, 8311, 9417, 8570, 9755, 6441, 7069, 8615, 8788, 7212, 3104, 7201, 8896, 3603, 6821, 5052, 6335, 6035, 7719, 5032, 3278, 9265, 2157, 9827, 6171, 8629, 7654, 9542, 3248, 5683, 7965, 4496, 887, 6235};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> topHeight = {3985, 145, 7206, 2475, 6500, 6373, 5712, 6383, 4225, 108, 8246, 9008, 3163, 2378, 2132, 5199, 9563, 6445, 1470, 7708, 5008, 7952, 770, 7090, 3335, 9331, 29, 3128, 3293, 5336, 9434, 9388, 7029, 4762, 6121, 4549, 6797, 6717, 4626, 5447, 8112, 275, 8587, 7086};
    vector<int> topRadius = {5368, 963, 2522, 5040, 9236, 927, 9432, 2983, 7783, 6073, 8587, 5852, 8988, 2645, 7256, 8936, 7657, 6254, 1716, 5337, 2610, 648, 7407, 6686, 3550, 9321, 937, 4691, 656, 9618, 5654, 8580, 5014, 2559, 5131, 2532, 5708, 1533, 603, 6858, 5925, 4611, 1335, 3049};
    vector<int> bottomHeight = {2352, 8347, 7195, 7486, 8760, 4799, 9690, 6527, 1850, 9206, 8195, 7561, 4872, 8611, 7323, 7650, 7271, 5533, 5385, 3359, 5680, 9007, 4802, 5393, 7925, 313, 3464, 7083, 1119, 5819, 3483, 3778, 4715, 1346, 6810, 8769, 233, 5535, 6161, 6956, 3944, 5143, 4433, 490};
    vector<int> bottomRadius = {8629, 5898, 3691, 6277, 6287, 4396, 9375, 6915, 5538, 1233, 3633, 2110, 3092, 7163, 5712, 9748, 3093, 828, 8338, 1946, 6718, 7650, 8250, 5751, 8101, 7088, 6685, 8020, 9415, 5685, 6045, 5412, 967, 3476, 4448, 4805, 9783, 2939, 969, 217, 399, 9417, 6208, 7743};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> topHeight = {4355, 4426, 5007, 8445, 3442, 5929, 588, 3972, 130, 2215, 2762, 5868, 3593, 7105, 1020, 6178, 2260, 5127, 3398, 7548, 7143, 5080, 7244, 1762, 9504, 9409, 3859, 4601, 9196, 1209, 943, 2753, 7607, 9804, 2939, 6314, 9812, 1981, 549, 1169, 4759, 4013, 7399, 479};
    vector<int> topRadius = {4847, 5572, 5019, 6998, 9698, 9456, 3515, 9969, 4789, 9999, 691, 4451, 2086, 3489, 408, 8155, 7198, 9122, 2519, 6762, 6782, 1041, 8540, 6661, 9940, 5739, 3997, 3384, 1248, 6296, 322, 9653, 2440, 484, 8837, 1981, 2889, 6552, 8265, 195, 9125, 8717, 4461, 3884};
    vector<int> bottomHeight = {9497, 3734, 9245, 9294, 2773, 8517, 2095, 3195, 8748, 6857, 3787, 6856, 2050, 8036, 412, 1299, 9589, 8333, 4376, 4751, 5937, 1117, 1006, 6551, 2588, 2293, 2243, 2286, 1695, 3175, 941, 234, 6271, 6508, 7816, 985, 6357, 8099, 6171, 6436, 8881, 5658, 6195, 3673};
    vector<int> bottomRadius = {3241, 7239, 9578, 466, 2048, 8311, 3817, 4012, 2795, 1424, 953, 5479, 6385, 4901, 8990, 8614, 5689, 8585, 1344, 807, 51, 3648, 2220, 7549, 7497, 9180, 7665, 1269, 8244, 8753, 4976, 830, 986, 2880, 5732, 9122, 5275, 8668, 5559, 8396, 3272, 7679, 4631, 6357};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> topHeight = {2677, 5755, 6216, 5855, 4197, 3583, 9641, 7645, 7656, 7740, 5665, 4845, 6364, 9615, 7473, 4261, 9030, 2778, 9334, 9661, 7274, 8019, 6674, 4161, 8415, 5850, 7225, 7751, 5738, 4442, 7117, 5965, 7270, 2486, 8437, 7663, 8250, 4454, 2594, 7680, 3312, 9954, 9853, 4278};
    vector<int> topRadius = {157, 4721, 2139, 4550, 2682, 1810, 7071, 43, 152, 22, 2819, 3214, 5265, 8655, 6574, 2090, 7280, 452, 7003, 5283, 418, 961, 3276, 1653, 2515, 1324, 5717, 840, 2793, 3745, 2671, 2801, 817, 2326, 7263, 4440, 5043, 2412, 928, 4065, 2603, 4417, 1796, 873};
    vector<int> bottomHeight = {1433, 2547, 13, 1514, 1822, 5339, 4650, 1563, 368, 615, 4211, 1988, 6423, 5553, 638, 2749, 2368, 3238, 414, 637, 577, 190, 3586, 4904, 6348, 8206, 5361, 751, 523, 4992, 3001, 6143, 5709, 1857, 7246, 4020, 313, 2164, 3891, 2113, 5846, 4810, 9340, 4805};
    vector<int> bottomRadius = {5484, 3305, 5378, 2168, 7852, 5341, 5493, 9975, 8413, 8896, 5362, 3783, 9671, 5348, 3637, 6982, 9559, 5243, 5602, 4034, 5392, 6724, 6732, 8319, 6034, 8116, 7658, 2362, 703, 9572, 4861, 9888, 9317, 8088, 8262, 5974, 5368, 5651, 8738, 5367, 7240, 6976, 9474, 5410};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> topHeight = {8054, 1408, 6271, 6634, 8023, 5321, 2734, 7402, 1847, 1520, 7259, 354, 4777, 4197, 168, 7805, 4387, 3466, 5962, 8685, 2295, 8585, 5702, 375, 7749, 8565, 9324, 9237, 210, 9768, 7359, 2874, 6528, 2206, 1322, 7015, 1379, 1799, 9541, 2758, 4857, 8294, 8794, 3655};
    vector<int> topRadius = {318, 2532, 7889, 9840, 5292, 3434, 5552, 7105, 7183, 2836, 1247, 5650, 4455, 5363, 903, 3237, 6237, 5777, 1628, 1841, 4993, 6826, 5201, 4667, 5851, 2243, 8063, 7815, 9912, 1913, 8947, 4910, 3996, 7590, 3467, 3194, 4094, 1399, 4954, 8982, 1517, 6758, 3434, 4257};
    vector<int> bottomHeight = {8880, 5765, 7533, 5605, 366, 9963, 2287, 170, 362, 3727, 3008, 2442, 9086, 2742, 1739, 9962, 4852, 1192, 9943, 9245, 2395, 3023, 6619, 7431, 7901, 3613, 4474, 6768, 2076, 4060, 2880, 6025, 9419, 9689, 5672, 3864, 945, 1140, 5212, 7735, 9227, 4589, 9773, 2459};
    vector<int> bottomRadius = {499, 4323, 6057, 2306, 1774, 9152, 2136, 5573, 5328, 7904, 5094, 4065, 8092, 6388, 4728, 1839, 4192, 6808, 2662, 2727, 7913, 3920, 8186, 3686, 4745, 6215, 8236, 5527, 863, 5187, 5465, 5883, 6171, 3782, 4426, 804, 2943, 4281, 6282, 1707, 5785, 27, 7500, 3630};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> topHeight = {4460, 9062, 5676, 4586, 7897, 8078, 7109, 1190, 9713, 7190, 4413, 9155, 6446, 1454, 4364, 5610, 5769, 5276, 9754, 2811, 9919, 7879, 6282, 4520, 8499, 5683, 5571, 7080, 9512, 8627, 7584, 9832, 8642, 6354, 8282, 4097, 2341, 4313, 9301, 2037, 8572, 4295, 8328, 7788};
    vector<int> topRadius = {2918, 6315, 524, 1614, 5154, 5821, 1966, 334, 4705, 3757, 49, 8283, 1221, 1185, 299, 2879, 976, 3899, 6367, 1210, 6948, 3967, 4205, 3639, 3456, 1800, 2021, 182, 4103, 1733, 1438, 5708, 2716, 3528, 424, 919, 1284, 1155, 5471, 1337, 3957, 3395, 1958, 148};
    vector<int> bottomHeight = {409, 4705, 1407, 5939, 5549, 4932, 708, 3875, 4653, 2875, 8349, 9590, 4291, 4423, 3105, 2282, 7101, 2643, 3696, 6736, 6177, 631, 1348, 1137, 2028, 5815, 1546, 396, 111, 515, 2931, 6652, 2250, 2150, 3032, 2784, 7705, 2205, 3947, 3199, 3146, 739, 1621, 6031};
    vector<int> bottomRadius = {5490, 9030, 7625, 7288, 7177, 8858, 7511, 4697, 6062, 3785, 7721, 9186, 6859, 5134, 6931, 7695, 7132, 6765, 4238, 6716, 9985, 5443, 1555, 6459, 4272, 9810, 3803, 1478, 9183, 4144, 7854, 9299, 4487, 8422, 4866, 3872, 7251, 4863, 8631, 5745, 9366, 4103, 9236, 7017};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> topHeight = {5571, 7537, 3696, 7109, 6097, 9683, 9661, 4180, 7326, 2154, 7698, 2798, 6617, 9308, 9459, 8103, 3218, 5637, 5337, 6600, 9646, 8025, 9323, 3820, 6494, 6245, 6977, 7266, 8227, 7925, 9925, 9775, 2928, 9703, 4991, 8945, 1164, 8008, 7627, 9956, 5491, 6093, 3831, 7349};
    vector<int> topRadius = {3889, 4704, 1231, 7981, 4217, 5939, 6717, 4030, 4771, 1947, 4433, 42, 6389, 7184, 6435, 131, 3195, 5498, 3365, 339, 2352, 1870, 851, 2256, 7421, 106, 179, 2306, 1904, 1831, 2916, 6538, 2384, 5466, 4462, 877, 1091, 2251, 1587, 1456, 5585, 3432, 50, 7890};
    vector<int> bottomHeight = {1176, 1622, 627, 1114, 1161, 8290, 1618, 4222, 1505, 4664, 1705, 6036, 6906, 3658, 1356, 2688, 1791, 2562, 3065, 1264, 4200, 2532, 4137, 657, 1611, 1692, 971, 2294, 3765, 1091, 2619, 6629, 106, 3545, 4046, 4437, 2544, 922, 567, 676, 4078, 1219, 4721, 229};
    vector<int> bottomRadius = {4088, 8060, 8217, 1713, 9918, 9872, 5856, 9467, 8602, 6460, 8358, 8457, 8232, 5831, 4787, 3228, 9138, 7225, 4032, 9142, 8437, 8072, 6442, 7709, 7696, 2105, 1619, 4272, 4595, 5556, 9114, 9130, 878, 5979, 8586, 7786, 4661, 1596, 4236, 8931, 7325, 8367, 8591, 9511};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> topHeight = {7087, 8430, 9906, 621, 1000, 2625, 8415, 8749, 335, 1568, 5886, 2555, 752, 3654, 7945, 7886, 7232, 4719, 6046, 4736, 752, 7396, 1504, 9222, 2824, 1558, 1549, 1630, 3846, 3625, 6825, 5058, 5236, 8546, 9886, 9012, 5372, 5109, 7252, 8250, 143, 7611, 2849, 8362};
    vector<int> topRadius = {4577, 2904, 5645, 201, 9382, 6837, 9775, 1892, 5500, 7213, 9458, 8457, 8126, 9978, 7554, 5398, 4027, 2110, 1643, 9700, 2242, 9824, 5743, 4931, 3445, 8644, 2162, 2898, 4774, 957, 5089, 4174, 6248, 7229, 8537, 65, 328, 4755, 2714, 8533, 9252, 9611, 4440, 6675};
    vector<int> bottomHeight = {5514, 2985, 6861, 7431, 1089, 507, 7491, 3820, 9190, 7851, 4660, 2001, 505, 9081, 7410, 3172, 5317, 4560, 3648, 7751, 2565, 7884, 2127, 9740, 6449, 1533, 548, 2356, 1288, 5902, 5274, 7478, 947, 1260, 6917, 3495, 665, 6888, 1289, 6210, 6546, 1182, 6436, 3939};
    vector<int> bottomRadius = {4572, 1290, 1260, 8713, 3615, 6844, 6360, 6008, 5688, 2027, 1637, 9764, 9201, 345, 3338, 8709, 3024, 8324, 9593, 9502, 4223, 4273, 2434, 6528, 8106, 9204, 1719, 3041, 5, 1585, 3812, 9046, 1997, 1131, 5614, 5373, 6413, 6489, 5426, 6268, 2163, 358, 4834, 5300};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> topHeight = {6930, 7407, 5972, 8970, 538, 2245, 1916, 1960, 2651, 3837, 3716, 5861, 2923, 7703, 2909, 3787, 7045, 5183, 9162, 151, 9053, 3417, 14, 8950, 6150, 4192, 2201, 6159, 1057, 3218, 4718, 3715, 4167, 2030, 9707, 58, 4342, 6754, 2940, 6208, 6372, 3319, 9002, 6140};
    vector<int> topRadius = {4836, 4200, 7451, 9046, 7632, 5646, 8152, 2697, 86, 6962, 1325, 4710, 9915, 8647, 3419, 6197, 2081, 837, 6319, 766, 4599, 7227, 8263, 5221, 9074, 6093, 6135, 4739, 6367, 2321, 6778, 5205, 1021, 178, 8576, 2610, 9758, 3295, 8351, 5987, 2546, 2841, 1029, 1287};
    vector<int> bottomHeight = {1118, 4552, 5626, 3824, 7906, 118, 7183, 9322, 2237, 4925, 9852, 8114, 9043, 708, 1350, 6694, 3604, 6471, 9649, 9397, 2525, 4492, 362, 5763, 4691, 6988, 6973, 8985, 6618, 1888, 4110, 8517, 4219, 2699, 2516, 3559, 4901, 8890, 1114, 2241, 4188, 3340, 7323, 3413};
    vector<int> bottomRadius = {9592, 3162, 3997, 8204, 1253, 9240, 8845, 1645, 3611, 2401, 2161, 696, 7221, 4080, 782, 4615, 3136, 9001, 7775, 9133, 7466, 6475, 7936, 1791, 9528, 758, 195, 2548, 3300, 4788, 5882, 4506, 1572, 3954, 5766, 3756, 5739, 6688, 3846, 9828, 5618, 5730, 6842, 9577};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> topHeight = {8089, 9765, 8452, 7130, 7163, 5942, 9395, 4183, 5953, 9200, 1212, 2069, 4033, 6310, 7466, 6750, 9305, 2687, 9038, 7815, 8127, 9697, 5049, 7397, 8455, 9318, 5915, 5355, 7753, 2481, 5955, 9550, 6567, 3604, 7059, 9129, 8420, 7877, 7733, 6645, 4703, 9622, 5960, 7344};
    vector<int> topRadius = {7128, 4843, 6085, 2662, 5634, 384, 843, 3008, 5135, 302, 855, 1108, 538, 856, 5895, 2336, 166, 1563, 3931, 1302, 5273, 5757, 1496, 5917, 1127, 5436, 4327, 3768, 3775, 43, 4496, 4193, 1094, 1952, 5031, 2001, 6038, 987, 5927, 339, 1010, 564, 916, 664};
    vector<int> bottomHeight = {1196, 1081, 1093, 505, 3976, 4612, 816, 5388, 3626, 970, 9686, 3922, 6302, 4749, 1011, 4448, 3878, 1021, 5903, 1592, 5132, 8135, 639, 5879, 5318, 2400, 3327, 8500, 645, 6334, 3765, 3195, 2991, 5715, 3106, 934, 383, 6865, 3134, 6678, 2625, 7941, 1763, 6189};
    vector<int> bottomRadius = {2325, 4967, 7617, 4655, 9471, 9977, 1678, 7971, 7709, 5287, 9090, 5981, 8387, 9651, 9367, 5724, 8492, 7013, 5865, 4497, 4529, 9600, 8771, 7095, 5424, 2218, 7674, 8416, 9808, 7932, 7670, 5719, 3347, 8676, 6409, 3345, 5942, 9096, 8024, 7546, 7861, 9395, 5993, 6814};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> topHeight = {9972, 8190, 7423, 7310, 2534, 4817, 5825, 9721, 9482, 9188, 3294, 7464, 2816, 8733, 7117, 9043, 8223, 5402, 8277, 8327, 9424, 8583, 6415, 1701, 8968, 5210, 8032, 6586, 7271, 8521, 9904, 6972, 4749, 8485, 8383, 6452, 7376, 6371, 7016, 4004, 8268, 7334, 4063, 6801};
    vector<int> topRadius = {8087, 4039, 730, 3336, 169, 4164, 5193, 3632, 2158, 4911, 2427, 1384, 2501, 6674, 66, 1168, 6857, 3135, 4893, 2285, 3501, 4418, 4212, 119, 4855, 21, 6742, 5680, 685, 1817, 7654, 1347, 2477, 6691, 5587, 540, 4856, 4538, 4213, 2447, 554, 4463, 3530, 5676};
    vector<int> bottomHeight = {2189, 71, 5029, 4096, 4505, 7074, 311, 1961, 1848, 4734, 7893, 4598, 2126, 4538, 3870, 7670, 2761, 3053, 1253, 1024, 1560, 80, 8417, 2262, 2414, 1973, 4075, 2639, 3427, 488, 3025, 239, 3829, 2754, 1454, 3364, 1628, 4650, 8663, 963, 908, 6568, 3592, 4352};
    vector<int> bottomRadius = {7664, 9489, 7780, 7437, 9134, 6768, 6246, 5404, 2121, 8755, 7598, 7902, 7080, 8930, 9411, 9358, 9195, 2969, 9923, 8215, 6288, 8106, 9639, 5752, 5335, 7898, 7749, 8146, 4430, 8911, 4723, 8362, 7841, 3465, 7366, 6214, 2976, 5734, 9807, 920, 2836, 7018, 8398, 7796};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> topHeight = {123, 214, 232, 323, 342, 343};
    vector<int> topRadius = {123, 123, 232, 123, 323, 434};
    vector<int> bottomHeight = {545, 322, 123, 545, 777, 999};
    vector<int> bottomRadius = {323, 443, 123, 656, 767, 888};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> topHeight = {999, 999, 999, 10000, 10000, 10000};
    vector<int> topRadius = {10000, 10000, 10000, 1, 2, 3};
    vector<int> bottomHeight = {2324, 2323, 234, 5454, 323, 232};
    vector<int> bottomRadius = {1, 2, 3222, 434, 5454, 23};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> topHeight = {30};
    vector<int> topRadius = {3};
    vector<int> bottomHeight = {3};
    vector<int> bottomRadius = {30};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> topHeight = {4, 4};
    vector<int> topRadius = {4, 3};
    vector<int> bottomHeight = {5, 12};
    vector<int> bottomRadius = {5, 4};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> topHeight = {123, 214, 232, 323, 342, 343};
    vector<int> topRadius = {123, 123, 232, 123, 323, 434};
    vector<int> bottomHeight = {545, 322, 123, 545, 777, 999};
    vector<int> bottomRadius = {323, 443, 123, 656, 767, 888};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> topHeight = {4297, 2038, 4991, 2811, 4381, 782, 3084, 1691, 3579, 8027, 5790, 1626, 4744, 141, 1493, 5841, 8924, 1553, 6476, 5612, 1308, 2053, 410, 1447, 5385, 129, 474, 2920, 3486, 1024, 313, 759, 5567, 3439, 2229, 2264, 3759, 3547, 4172, 479, 4078, 6459, 2806, 261, 5047, 308, 4818, 5171, 4882, 6829};
    vector<int> topRadius = {3735, 2582, 2807, 5887, 3093, 279, 2639, 9769, 3562, 8788, 5633, 3143, 9422, 1247, 7527, 8187, 8996, 1710, 3947, 7427, 7621, 1984, 1327, 5791, 6181, 57, 6815, 4445, 9862, 2537, 2007, 2347, 1883, 9917, 4925, 1794, 6648, 5980, 8267, 3076, 2794, 3412, 6153, 994, 8509, 86, 4355, 4550, 3962, 8278};
    vector<int> bottomHeight = {4211, 7203, 7460, 6883, 2982, 8138, 2912, 4796, 5358, 8923, 1418, 4154, 8090, 7271, 5136, 1590, 611, 1076, 4688, 8851, 4781, 3931, 5594, 1200, 8632, 1199, 1672, 8610, 6270, 128, 3547, 2404, 2734, 913, 1350, 6885, 1435, 3748, 9437, 3268, 4356, 3035, 1221, 2135, 5796, 1835, 7309, 4103, 1069, 5200};
    vector<int> bottomRadius = {3661, 9129, 6565, 5586, 3615, 4577, 6100, 3386, 1914, 7636, 8193, 4135, 8858, 7075, 9929, 3158, 5431, 5426, 6572, 8923, 5266, 2396, 7404, 6996, 8345, 3883, 6693, 9883, 2780, 1844, 5400, 6802, 6778, 5856, 4177, 2329, 4139, 8283, 7479, 5780, 7345, 6015, 7854, 1463, 3062, 4025, 2041, 3709, 4079, 8767};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> topHeight = {7750, 2568, 9881, 5391, 7825, 4723, 6095, 5671, 1549, 7862, 2495, 5754, 1732, 5971, 9040, 717, 487, 1498, 2568, 8687, 3264, 9775, 1943, 9643, 5420, 3156, 4480, 2231, 7086, 7759, 27, 4803, 4719, 4435, 2555, 8497, 975, 5747, 2689, 7073, 3492, 7958, 4025, 3912, 4659, 7493, 5022, 7623};
    vector<int> topRadius = {417, 7947, 6961, 3259, 8289, 9281, 416, 4809, 6439, 1955, 6316, 8617, 3926, 7475, 3747, 8178, 9273, 1605, 5639, 9931, 6465, 9708, 9167, 7162, 349, 9638, 308, 1044, 1828, 5617, 3707, 7671, 288, 6205, 5236, 3895, 9330, 8734, 2387, 1204, 8370, 4329, 7860, 1557, 1883, 323, 6220, 5437};
    vector<int> bottomHeight = {9166, 3588, 8890, 8120, 3440, 5288, 1297, 1390, 3999, 5428, 8223, 4528, 6830, 3756, 7512, 2494, 6582, 8880, 7945, 9398, 6554, 378, 9936, 1475, 1572, 3431, 8815, 5340, 5101, 3762, 407, 6916, 5910, 8158, 5415, 2685, 3790, 3612, 6911, 9226, 5763, 2439, 3382, 2766, 3066, 4063, 8901, 4852, 3296};
    vector<int> bottomRadius = {4788, 3883, 6664, 9437, 9594, 9022, 2170, 920, 4202, 3698, 6914, 7851, 8366, 1711, 6005, 9092, 9528, 8720, 9285, 8293, 6752, 1539, 7990, 5456, 8483, 6682, 5981, 4613, 4563, 5516, 2402, 8674, 3079, 1120, 2512, 6328, 2467, 8148, 5240, 9431, 5501, 1573, 9041, 4302, 5545, 9029, 5033, 6225, 9254};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> topHeight = {3};
    vector<int> topRadius = {3};
    vector<int> bottomHeight = {1, 1};
    vector<int> bottomRadius = {2, 4};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> topHeight = {8773, 1890, 4341, 3144, 8630, 2927, 3365, 5883, 1041, 7969, 660, 8143, 7631, 6384, 7401, 7925, 3250, 5481, 7620, 2620, 5160, 2282, 2724, 4941, 3236, 5036, 7251, 1281, 8109, 603, 1436, 9991, 816, 7623, 4005, 3010, 9633, 9501, 5328, 9385, 7319, 672, 1923, 6091, 7786, 6865, 8532, 2094, 8321, 1675};
    vector<int> topRadius = {3537, 9140, 4398, 9872, 5638, 7046, 8875, 8353, 3759, 3284, 894, 9665, 156, 2675, 4397, 2850, 7680, 4857, 5991, 364, 892, 8127, 1910, 1247, 100, 469, 5679, 3124, 7812, 6089, 5319, 5694, 9627, 3772, 8264, 7432, 8155, 8998, 3881, 8471, 7269, 3552, 3963, 398, 1973, 8120, 5130, 5612, 5396, 2025};
    vector<int> bottomHeight = {936, 664, 3297, 4878, 8433, 8987, 3559, 6517, 6071, 5188, 8184, 5098, 6861, 1881, 6850, 225, 9329, 7155, 6456, 8409, 5571, 7090, 9224, 3422, 8979, 8119, 819, 7224, 982, 3992, 9994, 4584, 704, 9596, 8553, 5233, 1471, 8576, 3223, 2576, 9857, 5973, 8395, 1621, 6403, 5171, 4669, 7834, 4768, 543};
    vector<int> bottomRadius = {3429, 866, 1255, 9657, 4334, 4824, 5623, 3998, 8655, 4517, 8802, 2555, 2444, 1358, 8288, 8809, 7089, 1985, 9009, 3657, 2809, 1351, 2361, 4356, 9052, 1289, 9194, 9060, 7616, 7002, 725, 531, 5927, 5047, 4891, 6719, 4407, 2334, 4729, 6919, 7180, 3957, 7328, 501, 9019, 466, 6478, 7556, 2532, 601};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> topHeight = {249, 9784, 8915, 3116, 7548, 5136, 1786, 7986, 1262, 4703, 2549, 9070, 5214, 7722, 9797, 2878, 4501, 5031, 8473, 9740, 5459, 7612, 6069, 9392, 3146, 2885, 4867, 9478, 6592, 1807, 7022, 9064, 7411, 9243, 5886, 4678, 6391, 4295, 2660, 6027, 4894, 3901, 4374, 5329, 5550, 1834, 3690, 3542, 909, 9744};
    vector<int> topRadius = {3409, 5224, 893, 5213, 9396, 1570, 5537, 1119, 743, 3126, 9131, 6848, 5790, 5159, 1719, 6720, 6948, 2068, 8429, 3601, 6722, 7100, 3457, 1636, 1173, 7646, 2345, 3760, 4025, 5163, 3693, 3824, 1615, 9653, 2012, 2693, 9276, 4215, 3758, 5842, 2093, 1026, 5400, 1111, 8694, 8421, 3423, 2400, 1849, 1360};
    vector<int> bottomHeight = {6603, 9991, 8010, 1037, 6627, 6809, 9769, 2161, 8686, 1727, 9847, 433, 7183, 6258, 2851, 3055, 7593, 9785, 3230, 9267, 1493, 2849, 5923, 5587, 7892, 3187, 1294, 5945, 1950, 3654, 400, 794, 98, 4795, 7395, 9376, 5037, 1830, 8706, 2597, 8291, 3209, 5163, 6343, 8832, 2847, 9933, 3103, 6153, 8546};
    vector<int> bottomRadius = {5057, 5690, 4547, 9107, 1728, 8721, 2779, 7245, 5784, 1516, 609, 3060, 8564, 4620, 5164, 6274, 1518, 6385, 2328, 4142, 7593, 6530, 4301, 3562, 980, 6289, 6102, 3359, 343, 6396, 1930, 2410, 9078, 9733, 5387, 7256, 7873, 1418, 2282, 6303, 916, 3259, 3343, 6948, 6401, 772, 5932, 6431, 9504, 7231};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> topHeight = {16, 14, 12};
    vector<int> topRadius = {8, 7, 6};
    vector<int> bottomHeight = {5, 6, 7};
    vector<int> bottomRadius = {5, 6, 7};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> topHeight = {999, 999, 999, 10000, 10000, 10000};
    vector<int> topRadius = {10000, 10000, 10000, 1, 2, 3};
    vector<int> bottomHeight = {2324, 2323, 234, 5454, 323, 232};
    vector<int> bottomRadius = {1, 2, 3222, 434, 5454, 23};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> topHeight = {8488, 1525, 1434, 3197, 6966, 3441, 1746, 9349, 5449, 8169, 4232, 5392, 3894, 4721, 7273, 7167, 6312, 3311, 4148, 9663, 7378, 4383, 4992, 1845, 6662, 3766, 9937, 9285, 8893, 1722, 2335, 4289, 9667, 6387, 2479, 3337, 3446, 5215, 7264, 8169, 6331, 8938, 7647, 1362, 6659, 3636, 7869, 1492, 5178, 9741};
    vector<int> topRadius = {7355, 4281, 5772, 2931, 8757, 9729, 8369, 7987, 5427, 7124, 9286, 5536, 6248, 4594, 9731, 4864, 9385, 5581, 9961, 1117, 1882, 1595, 5332, 9649, 7815, 5567, 6721, 1793, 1385, 5317, 2511, 4438, 6353, 6716, 3716, 9773, 8638, 4279, 7225, 1571, 8917, 6367, 5568, 2621, 4814, 6812, 5345, 2272, 8199, 1154};
    vector<int> bottomHeight = {9134, 7531, 3549, 6562, 4415, 4645, 5993, 9876, 3741, 2264, 1528, 7438, 5197, 7222, 3547, 1632, 7258, 7924, 9853, 6798, 6664, 2554, 6425, 8873, 3555, 7149, 2391, 2614, 2517, 5368, 9157, 5341, 7231, 2238, 5427, 8947, 7247, 4376, 2718, 8939, 3749, 2961, 9697, 7272, 2293, 6563, 5276, 5985, 5128, 2511};
    vector<int> bottomRadius = {1387, 4857, 8212, 7659, 2625, 6357, 8471, 2248, 2853, 4331, 4553, 7214, 3763, 6359, 1981, 4934, 4275, 4743, 3829, 5354, 5151, 6321, 5276, 9978, 3312, 5349, 5528, 2297, 9117, 2582, 1883, 6291, 9526, 2711, 4281, 3493, 2755, 6332, 2638, 5527, 9283, 3622, 1756, 5833, 4938, 3477, 7791, 3114, 2997, 2296};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> topHeight = {4, 1};
    vector<int> topRadius = {4, 2};
    vector<int> bottomHeight = {2};
    vector<int> bottomRadius = {4};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> topHeight = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> topRadius = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> bottomHeight = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> bottomRadius = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> topHeight = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> topRadius = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> bottomHeight = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    vector<int> bottomRadius = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> topHeight = {5};
    vector<int> topRadius = {3};
    vector<int> bottomHeight = {4};
    vector<int> bottomRadius = {3};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> topHeight = {10000, 20, 19, 11, 14, 12};
    vector<int> topRadius = {18, 8, 7, 4, 5, 6};
    vector<int> bottomHeight = {9999, 15, 9998, 19, 13, 16, 10, 19};
    vector<int> bottomRadius = {3, 6, 3, 9, 7, 6, 5, 9801};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> topHeight = {2};
    vector<int> topRadius = {1};
    vector<int> bottomHeight = {1};
    vector<int> bottomRadius = {1};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> topHeight = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25};
    vector<int> topRadius = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25};
    vector<int> bottomHeight = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25};
    vector<int> bottomRadius = {1, 1, 2, 2, 3, 3, 4, 4, 5, 5, 6, 6, 7, 7, 8, 8, 9, 9, 10, 10, 11, 11, 12, 12, 13, 13, 14, 14, 15, 15, 16, 16, 17, 17, 18, 18, 19, 19, 20, 20, 21, 21, 22, 22, 23, 23, 24, 24, 25, 25};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> topHeight = {7, 18, 12, 33, 93, 30, 36, 97, 31, 86, 36, 87, 42, 92, 91, 6, 20, 23, 34, 78, 33, 90, 85, 89, 66, 53, 31, 91, 68, 96, 32, 75, 66, 96, 9, 60, 27, 45, 9, 58};
    vector<int> topRadius = {83, 98, 97, 25, 42, 89, 83, 62, 12, 18, 92, 45, 60, 77, 86, 78, 31, 69, 21, 99, 17, 54, 27, 84, 50, 36, 96, 77, 33, 5, 87, 68, 3, 85, 46, 97, 74, 29, 59, 38};
    vector<int> bottomHeight = {99, 4, 35, 12, 81, 21, 90, 64, 42, 64, 16, 59, 18, 43, 43, 68, 31, 91, 98, 16, 97, 85, 84, 52, 22, 30, 50, 48, 12, 61, 86, 63, 17, 21, 75, 51, 94, 18, 15, 88, 82, 83, 48};
    vector<int> bottomRadius = {52, 26, 43, 20, 9, 35, 70, 25, 84, 56, 62, 36, 30, 92, 38, 79, 56, 52, 17, 20, 69, 91, 47, 20, 85, 17, 36, 74, 51, 19, 74, 3, 98, 69, 76, 7, 56, 46, 85, 40, 54, 47, 29};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> topHeight = {99, 8};
    vector<int> topRadius = {20, 7};
    vector<int> bottomHeight = {100, 10};
    vector<int> bottomRadius = {100, 11};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> topHeight = {30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
    vector<int> topRadius = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    vector<int> bottomHeight = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    vector<int> bottomRadius = {30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30, 30};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> topHeight = {42, 8468, 6335, 6501, 9170, 5725, 1479, 9359, 6963, 4465, 5706, 8146, 3282, 6828, 9962, 492, 2996, 1943, 4828, 5437, 2392, 4605, 3903, 154, 293, 2383, 7422, 8717, 9719, 9896, 5448, 1727, 4772, 1539, 1870, 9913, 5668, 6300, 7036, 9895, 8704, 3812, 1323, 334, 7674, 4665, 5142, 7712, 8254, 6869};
    vector<int> topRadius = {5548, 7645, 2663, 2758, 38, 2860, 8724, 9742, 7530, 779, 2317, 3036, 2191, 1843, 289, 107, 9041, 8943, 9265, 2649, 7447, 3806, 5891, 6730, 4371, 5351, 5007, 1102, 4394, 3549, 9630, 2624, 4085, 9955, 8757, 1841, 4967, 7377, 3932, 6309, 6945, 2440, 4627, 1324, 5538, 1539, 6119, 2083, 2930, 6542};
    vector<int> bottomHeight = {4834, 1116, 4640, 9659, 2705, 9931, 3978, 2307, 1674, 2387, 5022, 8746, 6925, 9073, 6271, 5830, 6778, 5574, 5098, 6513, 3987, 3291, 9162, 8637, 2356, 4768, 3656, 5575, 4032, 2053, 7351, 1151, 6942, 1725, 3967, 3431, 1108, 192, 8008, 1338, 5458, 2288, 7754, 384, 4946, 8910, 2210, 9759, 4222, 8589};
    vector<int> bottomRadius = {6423, 4947, 7507, 3031, 6414, 9169, 901, 2592, 8763, 1656, 7411, 6360, 7625, 538, 1549, 6484, 7596, 4042, 3603, 4351, 292, 837, 9375, 1021, 4597, 4022, 7349, 3200, 9669, 4485, 8282, 4735, 54, 2000, 6419, 7939, 6901, 3789, 8128, 468, 3729, 4894, 4649, 2484, 7808, 2422, 4311, 6618, 2814, 9515};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> topHeight = {2};
    vector<int> topRadius = {1};
    vector<int> bottomHeight = {2};
    vector<int> bottomRadius = {1};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> topHeight = {100, 100};
    vector<int> topRadius = {1, 1};
    vector<int> bottomHeight = {1, 1};
    vector<int> bottomRadius = {100, 100};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> topHeight = {1};
    vector<int> topRadius = {1};
    vector<int> bottomHeight = {2};
    vector<int> bottomRadius = {2};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> topHeight = {9706, 5126, 6819, 7374, 1788, 1912, 2118, 6262, 1031, 4524, 2506, 9168, 3108, 1610, 765, 8974, 9611, 7956, 8970, 6647, 3558, 5141, 6284, 4745, 899, 2712, 5754, 6182, 2388, 216, 6814, 4636, 5490, 7049, 7640, 9078, 2840, 7804, 3401, 7659, 3653, 9110, 1355, 5880, 4943, 931, 5413, 7857, 7001, 7448};
    vector<int> topRadius = {595, 6180, 1863, 9278, 1332, 4159, 8708, 6101, 8813, 1858, 2846, 731, 1526, 8007, 8063, 2555, 7134, 1079, 8698, 8, 9423, 6596, 5757, 2145, 3420, 3702, 9863, 5533, 6228, 5019, 5728, 6437, 5112, 4831, 9733, 8005, 2609, 3631, 5472, 4340, 7004, 1973, 1697, 6817, 4135, 1968, 6340, 4969, 9069, 9019};
    vector<int> bottomHeight = {2187, 3802, 4190, 2897, 2928, 668, 4311, 9438, 489, 224, 7225, 9724, 3356, 2527, 6009, 6531, 908, 2720, 3050, 7000, 1824, 4786, 691, 4204, 7804, 1635, 1127, 9312, 7365, 9641, 8211, 1760, 2459, 8887, 8292, 6025, 3262, 5395, 8820, 3126, 6705, 7934, 4665, 5694, 7348, 2299, 7907, 2806, 3677, 3623};
    vector<int> bottomRadius = {6990, 6368, 9905, 9759, 6536, 8344, 1317, 2965, 9695, 4198, 3536, 6192, 3198, 2871, 31, 4098, 2095, 9435, 3120, 7083, 2534, 2534, 9208, 9431, 460, 6281, 7517, 3076, 6242, 8212, 8026, 2144, 7595, 3351, 7047, 439, 9520, 3728, 986, 9124, 5946, 1994, 6488, 2104, 904, 1332, 3936, 4664, 2780, 553};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> topHeight = {668, 29, 680, 85, 42, 46, 827, 817, 517, 727, 667, 88, 62, 965, 3, 687, 22, 663, 722, 65, 310, 416, 93, 874, 125, 42, 746, 763, 424, 532, 807, 269, 39, 603, 908, 308, 482, 13, 137, 631, 15, 810, 85, 557, 291, 294, 997, 153, 55, 346};
    vector<int> topRadius = {709, 29, 492, 73, 32, 115, 440, 959, 7, 705, 996, 53, 270, 40, 29, 424, 919, 867, 660, 499, 487, 197, 463, 63, 159, 23, 14, 393, 38, 926, 48, 49, 603, 808, 99, 831, 293, 61, 279, 800, 353, 449, 883, 51, 316, 576, 73, 58, 337, 98};
    vector<int> bottomHeight = {419, 898, 829, 852, 817, 231, 450, 926, 659, 230, 521, 941, 561, 148, 163, 656, 6, 793, 36, 755, 399, 147, 71, 947, 19, 570, 639, 664, 76, 516, 952, 476, 616, 529, 235, 571, 906, 465, 558, 93, 162, 55, 550, 470, 331, 924, 351, 334, 926, 911};
    vector<int> bottomRadius = {738, 37, 338, 279, 394, 37, 75, 165, 592, 950, 136, 506, 38, 5, 338, 624, 665, 9, 609, 569, 282, 86, 1, 74, 653, 195, 877, 827, 397, 57, 250, 61, 175, 20, 944, 12, 942, 290, 420, 566, 86, 586, 217, 451, 616, 610, 65, 17, 894, 75};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> topHeight = {10, 10, 5};
    vector<int> topRadius = {2, 5, 3};
    vector<int> bottomHeight = {2, 9, 7};
    vector<int> bottomRadius = {3, 6, 3};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> topHeight = {1};
    vector<int> topRadius = {1};
    vector<int> bottomHeight = {1};
    vector<int> bottomRadius = {1};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> topHeight = {5, 4, 3, 2};
    vector<int> topRadius = {5, 4, 3, 2};
    vector<int> bottomHeight = {1, 1, 1, 1};
    vector<int> bottomRadius = {4, 3, 2, 1};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> topHeight = {9654, 9075, 3262, 4163, 8676, 5132, 3580, 4590, 5012, 294, 3100, 1868, 6198, 4698, 1005, 6277, 2232, 9847, 8862, 7571, 9194, 5069, 2202, 3379, 6210, 605, 2375, 228, 4249, 9635, 7942, 1241, 5348, 1438, 5583, 7305, 2484, 1733, 6576, 5407, 8492, 2911, 4238, 3150, 511, 98, 99, 10, 50, 40};
    vector<int> topRadius = {534, 8353, 5095, 4549, 9387, 3465, 8320, 2100, 8763, 6471, 4329, 5984, 3251, 1750, 7789, 6628, 1859, 8353, 6834, 8200, 6611, 3114, 6010, 7982, 5805, 188, 8325, 7823, 9610, 3156, 9141, 8786, 1691, 8558, 4305, 1731, 8950, 5368, 1807, 5319, 2683, 5495, 7764, 3310, 499, 98, 99, 20, 50, 30};
    vector<int> bottomHeight = {6875, 8984, 1039, 5324, 84, 980, 4334, 5952, 4547, 2627, 3883, 1423, 3905, 2141, 2422, 9899, 7507, 1054, 4388, 5585, 4511, 6383, 8287, 8835, 5814, 7751, 2561, 2160, 1435, 6288, 370, 8849, 158, 798, 353, 6310, 1426, 4597, 4004, 502, 1895, 1522, 2864, 3150, 499, 97, 98, 30, 50, 20};
    vector<int> bottomRadius = {1525, 4893, 1193, 1436, 8942, 2717, 8950, 2507, 9162, 1511, 8705, 1632, 1918, 1978, 5149, 9150, 7212, 1394, 533, 1197, 6272, 8122, 4220, 4698, 1308, 4260, 6597, 8314, 1848, 589, 4901, 4856, 8652, 8097, 6864, 6585, 9711, 8479, 564, 611, 6711, 7273, 1590, 3310, 511, 97, 98, 40, 50, 10};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> topHeight = {4};
    vector<int> topRadius = {4};
    vector<int> bottomHeight = {5};
    vector<int> bottomRadius = {5};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> topHeight = {3};
    vector<int> topRadius = {2};
    vector<int> bottomHeight = {8};
    vector<int> bottomRadius = {4};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> topHeight = {7};
    vector<int> topRadius = {5};
    vector<int> bottomHeight = {6};
    vector<int> bottomRadius = {5};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> topHeight = {36, 82, 27, 39, 20, 81, 49, 78, 100, 5, 46, 88, 93, 14, 34, 8, 8, 65, 15, 24, 15, 19, 72, 54, 13, 17, 75, 88, 80, 20, 15, 88, 62, 41, 12, 77, 30, 64, 88, 38, 56, 72, 74, 32, 20, 22, 85, 70, 87, 23};
    vector<int> topRadius = {75, 91, 21, 87, 23, 34, 30, 19, 31, 64, 71, 17, 16, 62, 96, 90, 44, 60, 16, 8, 29, 51, 10, 25, 40, 50, 34, 89, 92, 97, 58, 84, 94, 91, 97, 84, 31, 98, 100, 90, 72, 57, 4, 23, 76, 89, 71, 13, 4, 52};
    vector<int> bottomHeight = {14, 100, 84, 35, 26, 19, 12, 28, 94, 91, 96, 45, 38, 10, 58, 39, 79, 87, 17, 60, 43, 14, 80, 64, 36, 84, 60, 89, 35, 42, 1, 81, 26, 8, 50, 59, 100, 33, 12, 11, 20, 41, 34, 45, 33, 55, 58, 25, 52, 49};
    vector<int> bottomRadius = {47, 80, 17, 92, 67, 18, 68, 55, 70, 47, 85, 86, 51, 33, 4, 80, 15, 31, 24, 30, 26, 83, 56, 74, 26, 67, 70, 6, 61, 16, 43, 41, 65, 55, 43, 15, 89, 73, 34, 77, 27, 60, 64, 42, 36, 94, 85, 100, 88, 73};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> topHeight = {7182, 3767, 2517, 4825, 4164, 7858, 24, 393, 932, 3182, 5873, 5496, 7356, 2809, 7591, 3585, 6714, 577, 2870, 9459, 1591, 317, 7031, 686, 2587, 9278, 2788, 3465, 1909, 1435, 3257, 8658, 745, 3457, 8255, 6626, 8269, 6410, 8668, 6005, 5439, 5454, 1615, 386, 459, 7018, 5776, 1873, 4927, 7497};
    vector<int> topRadius = {6748, 404, 9326, 6615, 7203, 3801, 4682, 3231, 4179, 965, 3786, 1424, 8972, 9977, 118, 9872, 3315, 1689, 4924, 2007, 3122, 7122, 1341, 1849, 4950, 2297, 9259, 7294, 1288, 3755, 4947, 7542, 3279, 786, 3897, 9302, 1642, 8715, 8645, 1260, 9957, 9658, 1830, 6194, 1365, 1190, 6732, 3681, 5383, 6442};
    vector<int> bottomHeight = {1799, 9936, 7622, 3138, 1915, 9167, 506, 8417, 8510, 6692, 9838, 537, 1507, 1328, 8990, 964, 5600, 2081, 2754, 3402, 8118, 901, 8399, 2659, 8711, 6374, 8005, 9116, 2928, 5174, 1557, 7847, 7180, 8132, 6289, 1536, 3924, 8660, 4235, 6012, 4203, 7062, 5127, 1485, 5618, 5615, 1283, 9960, 2299, 4700};
    vector<int> bottomRadius = {8899, 880, 9825, 3183, 7469, 1362, 405, 7408, 1904, 3123, 9633, 7937, 1949, 79, 9988, 338, 4139, 1784, 7951, 4523, 3692, 365, 5141, 1641, 677, 7013, 2951, 3003, 9435, 4432, 9536, 4934, 6376, 7747, 7637, 6623, 2142, 4574, 5046, 6308, 2398, 3893, 5276, 9207, 2574, 4340, 3504, 9441, 2460, 8140};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> topHeight = {3};
    vector<int> topRadius = {3};
    vector<int> bottomHeight = {5};
    vector<int> bottomRadius = {5};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> topHeight = {4, 7, 4, 9, 2, 1, 7, 9, 8, 7};
    vector<int> topRadius = {6, 2, 3, 10, 6, 7, 2, 6, 5, 2};
    vector<int> bottomHeight = {4, 9, 6, 1, 10, 3, 2, 4, 4, 6};
    vector<int> bottomRadius = {3, 10, 1, 5, 9, 6, 8, 4, 4, 1};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> topHeight = {100};
    vector<int> topRadius = {10};
    vector<int> bottomHeight = {100, 50};
    vector<int> bottomRadius = {10, 20};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> topHeight = {9504, 7449, 5201, 3459, 6619};
    vector<int> topRadius = {581, 9797, 4799, 5282, 9590};
    vector<int> bottomHeight = {8010, 7158, 473, 3623, 8539, 2293, 6039, 4180, 8191};
    vector<int> bottomRadius = {9658, 7959, 6192, 9816, 2889, 9157, 1512, 6203, 2635};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> topHeight = {30};
    vector<int> topRadius = {30};
    vector<int> bottomHeight = {3};
    vector<int> bottomRadius = {30};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> topHeight = {4999};
    vector<int> topRadius = {5000};
    vector<int> bottomHeight = {9996};
    vector<int> bottomRadius = {9998};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> topHeight = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    vector<int> topRadius = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40};
    vector<int> bottomHeight = {2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21};
    vector<int> bottomRadius = {4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> topHeight = {2};
    vector<int> topRadius = {10};
    vector<int> bottomHeight = {10};
    vector<int> bottomRadius = {100};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> topHeight = {1, 1};
    vector<int> topRadius = {3, 4};
    vector<int> bottomHeight = {1, 1};
    vector<int> bottomRadius = {5, 4};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> topHeight = {3};
    vector<int> topRadius = {3};
    vector<int> bottomHeight = {4};
    vector<int> bottomRadius = {4};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> topHeight = {2};
    vector<int> topRadius = {10};
    vector<int> bottomHeight = {1};
    vector<int> bottomRadius = {10};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> topHeight = {10};
    vector<int> topRadius = {3};
    vector<int> bottomHeight = {5};
    vector<int> bottomRadius = {3};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> topHeight = {5};
    vector<int> topRadius = {4};
    vector<int> bottomHeight = {3};
    vector<int> bottomRadius = {4};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> topHeight = {447, 249, 908, 479, 498, 555, 382, 414, 123, 499, 402, 1, 493, 19, 328, 889, 159, 925, 202, 547, 368, 178, 953, 510, 772, 292, 52, 892, 84, 693, 603, 988, 638, 92, 558, 901, 70, 309, 731, 634, 732, 839, 55, 998, 316, 958, 860, 722, 44, 450};
    vector<int> topRadius = {128, 537, 757, 173, 724, 505, 270, 53, 795, 606, 402, 879, 914, 208, 162, 875, 634, 330, 138, 119, 667, 906, 700, 280, 309, 922, 304, 826, 972, 705, 133, 581, 997, 455, 895, 741, 740, 292, 584, 624, 100, 834, 397, 217, 416, 786, 967, 996, 246, 774};
    vector<int> bottomHeight = {972, 667, 221, 706, 950, 382, 394, 961, 932, 602, 982, 227, 756, 51, 659, 693, 191, 486, 310, 93, 676, 100, 91, 656, 279, 339, 44, 697, 276, 144, 146, 683, 312, 514, 229, 297, 570, 526, 726, 743, 940, 975, 411, 569, 956, 9, 546, 70, 5, 978};
    vector<int> bottomRadius = {863, 741, 309, 644, 46, 159, 562, 292, 24, 183, 797, 809, 436, 206, 369, 902, 629, 674, 681, 865, 938, 141, 320, 926, 432, 22, 959, 249, 929, 330, 919, 36, 751, 526, 765, 785, 513, 386, 641, 182, 911, 598, 299, 500, 990, 850, 210, 137, 882, 480};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> topHeight = {12};
    vector<int> topRadius = {2};
    vector<int> bottomHeight = {2};
    vector<int> bottomRadius = {2};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> topHeight = {3};
    vector<int> topRadius = {3};
    vector<int> bottomHeight = {7};
    vector<int> bottomRadius = {1};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> topHeight = {5};
    vector<int> topRadius = {1};
    vector<int> bottomHeight = {2, 2};
    vector<int> bottomRadius = {1, 2};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> topHeight = {20};
    vector<int> topRadius = {10};
    vector<int> bottomHeight = {10};
    vector<int> bottomRadius = {10};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> topHeight = {10, 18, 20, 12, 3, 30, 40, 21, 11, 111, 2021, 1000, 1221, 1232, 123, 1, 322, 1212, 1232, 1242, 123, 121, 11, 111, 243, 675, 954, 234, 234, 7546, 2342, 122, 5446, 2342, 22, 546, 234, 11, 4545, 2124, 5665, 10000, 1111, 2543, 1243, 1234, 5644, 2342, 6433, 2341};
    vector<int> topRadius = {1232, 3452, 12, 34, 12, 12, 10, 101, 32, 123, 123, 543, 123, 453, 1234, 123, 5435, 123, 543, 123, 564, 1231, 5443, 1254, 1532, 1235, 1232, 4521, 4535, 1231, 5431, 1231, 5643, 1, 4, 1, 7, 9, 6, 435, 765, 234, 7456, 2342, 765, 2323, 7546, 7456, 8456, 32};
    vector<int> bottomHeight = {1200, 1234, 4531, 210, 2342, 1212, 121, 12, 435, 123, 543, 123, 453, 123, 12, 45, 123, 123, 1231, 253, 123, 10, 21, 54, 123, 123, 123, 5432, 123, 54, 12, 54, 123, 54, 12, 76, 76, 437, 564, 875, 5435, 245, 23, 56, 23, 73, 234, 654, 23, 52};
    vector<int> bottomRadius = {2134, 643, 1234, 762, 123, 643, 1257, 6542, 6453, 6, 4312, 6542, 6432, 565, 2346, 7754, 234, 7623, 7345, 2342, 6345, 234, 6435, 7654, 243, 754, 23, 654, 234, 6723, 23, 654, 32, 8, 65, 956, 345, 10000, 453, 6546, 234, 7542, 23, 546, 23, 20, 234, 754, 2342, 52};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> topHeight = {100};
    vector<int> topRadius = {30};
    vector<int> bottomHeight = {20};
    vector<int> bottomRadius = {30};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> topHeight = {200};
    vector<int> topRadius = {100};
    vector<int> bottomHeight = {1};
    vector<int> bottomRadius = {1};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> topHeight = {2, 4};
    vector<int> topRadius = {1, 3};
    vector<int> bottomHeight = {4, 3};
    vector<int> bottomRadius = {4, 2};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> topHeight = {10, 7, 6, 6, 8, 4, 7, 1};
    vector<int> topRadius = {4, 4, 10, 10, 4, 1, 2, 2};
    vector<int> bottomHeight = {9, 4, 9, 9, 3, 1, 9, 4};
    vector<int> bottomRadius = {7, 1, 9, 6, 2, 6, 10, 7};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> topHeight = {10};
    vector<int> topRadius = {4};
    vector<int> bottomHeight = {9};
    vector<int> bottomRadius = {6};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> topHeight = {2, 2, 2};
    vector<int> topRadius = {1, 4, 4};
    vector<int> bottomHeight = {3, 1, 1};
    vector<int> bottomRadius = {100, 2, 1};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> topHeight = {10, 10};
    vector<int> topRadius = {2, 5};
    vector<int> bottomHeight = {2, 9};
    vector<int> bottomRadius = {3, 6};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> topHeight = {9201, 2841, 8368, 4221, 394, 6175, 2556, 5322, 401, 6813, 5883, 7304, 2881, 2188, 5236, 1150, 1414, 8764, 9037, 2068, 8308, 7217, 6260, 7366, 8897, 2176, 3095, 5735, 4951, 2182, 572, 4540, 1059, 8146, 7354, 4989, 9768, 6438, 9438, 8792, 5868, 7833, 5191, 9917, 7946, 24, 5530, 5187, 5215, 1};
    vector<int> topRadius = {2671, 6466, 4973, 391, 3170, 5830, 7915, 1633, 10000, 10000, 1282, 6538, 5239, 4331, 2978, 66, 5317, 8361, 923, 6875, 6185, 9, 1364, 2605, 7636, 1086, 232, 275, 2842, 3355, 3828, 4381, 7795, 4571, 9403, 5948, 139, 2505, 6770, 1160, 4129, 6936, 2339, 1037, 9580, 3229, 2094, 1929, 8561, 7008};
    vector<int> bottomHeight = {3459, 7152, 1758, 366, 4250, 9513, 5651, 4698, 9052, 5022, 8483, 2295, 5191, 2319, 4472, 5647, 8349, 9072, 3340, 7264, 406, 3399, 1184, 9834, 4714, 8111, 7593, 4146, 5447, 2568, 4558, 2002, 5121, 6516, 9612, 2614, 4925, 8667, 4338, 593, 7013, 2968, 6246, 502, 5447, 5466, 3742, 6031, 7846, 4468};
    vector<int> bottomRadius = {4519, 5354, 8887, 525, 2033, 4934, 2821, 9664, 544, 5563, 2750, 2542, 8861, 4319, 2740, 6391, 4243, 3874, 9917, 2917, 6947, 2851, 4115, 7889, 2161, 9144, 6996, 4427, 3717, 2154, 7347, 9015, 5258, 2999, 9734, 906, 5634, 1838, 4886, 8321, 2368, 1334, 6514, 7915, 2397, 3960, 4876, 4522, 9988, 96};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> topHeight = {5};
    vector<int> topRadius = {2};
    vector<int> bottomHeight = {3};
    vector<int> bottomRadius = {2};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> topHeight = {3285, 4725, 5220, 15, 2073, 992, 4403, 7730, 7760, 9836, 3754, 7900, 6080, 8643, 3237, 5319, 2145, 8009, 3492, 8421, 8807, 7057, 6773, 5949, 8003, 9031, 5652, 4558, 436, 1954, 783, 1129, 9989, 9124, 5952, 7650, 7263, 6280, 3184, 1762, 9014, 4173, 3895, 3967, 3816, 6407, 4870, 9789, 9320, 7133};
    vector<int> topRadius = {1247, 7689, 8676, 8920, 599, 1005, 4904, 713, 1761, 4968, 985, 4183, 6273, 1775, 9891, 4958, 9423, 2987, 2838, 2043, 4212, 1316, 5952, 2397, 7168, 3999, 3221, 2988, 2076, 1105, 6213, 9277, 1062, 2871, 832, 1154, 8561, 6874, 8373, 3822, 7285, 4475, 7431, 542, 652, 1474, 5428, 3298, 6964, 428};
    vector<int> bottomHeight = {2343, 7299, 5662, 7827, 6640, 5343, 488, 7708, 8624, 7388, 4973, 962, 8741, 256, 3287, 946, 1161, 764, 7251, 7004, 4633, 3119, 1731, 5666, 2038, 8264, 8284, 1471, 6152, 2367, 6214, 6890, 4041, 5181, 5664, 1394, 1961, 5214, 3217, 2093, 2999, 2953, 5154, 8564, 2014, 4782, 9688, 9070, 2141, 4389};
    vector<int> bottomRadius = {8580, 5807, 9852, 6633, 880, 3394, 9768, 5797, 7029, 9235, 8949, 191, 6415, 1809, 7440, 6587, 3901, 2860, 5655, 1161, 4215, 5933, 8733, 2431, 5550, 7975, 5903, 8213, 9076, 9631, 5209, 8368, 84, 3006, 1413, 132, 9656, 4562, 5826, 8988, 7223, 8600, 5320, 1214, 7654, 16, 5668, 1359, 8380, 6919};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> topHeight = {3, 4, 5};
    vector<int> topRadius = {5, 4, 3};
    vector<int> bottomHeight = {3, 4, 5};
    vector<int> bottomRadius = {3, 8, 5};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> topHeight = {9009, 8624, 9261, 9778, 3392, 7187, 1763, 786, 1205, 7614, 7504, 1321};
    vector<int> topRadius = {6499, 5802, 266, 7897, 3796, 8570, 9956, 6553, 9253, 1089, 6752, 9661};
    vector<int> bottomHeight = {3490, 34, 7847, 7577, 9103, 2978, 519, 2028, 8211, 8397, 606, 7417, 3419, 1193, 5920, 5646, 4270, 8531, 3352, 219, 7774, 9287, 5749, 1992, 807, 8875, 4706, 1664, 8468, 9161, 516, 6761, 1857, 6791, 4124};
    vector<int> bottomRadius = {6721, 3882, 6228, 8172, 3223, 2419, 9729, 7, 3906, 8337, 2425, 9888, 3714, 8309, 1198, 6004, 2001, 2793, 9810, 4, 3430, 5763, 5696, 9851, 8070, 934, 213, 2510, 903, 8360, 5053, 9649, 354, 1727, 3774};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> topHeight = {2, 200};
    vector<int> topRadius = {3, 10};
    vector<int> bottomHeight = {1000, 400};
    vector<int> bottomRadius = {100, 700};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> topHeight = {5};
    vector<int> topRadius = {4};
    vector<int> bottomHeight = {4};
    vector<int> bottomRadius = {4};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> topHeight = {1};
    vector<int> topRadius = {1};
    vector<int> bottomHeight = {2};
    vector<int> bottomRadius = {1};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> topHeight = {10000};
    vector<int> topRadius = {1};
    vector<int> bottomHeight = {500};
    vector<int> bottomRadius = {1};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> topHeight = {10, 10, 10};
    vector<int> topRadius = {5, 5, 3};
    vector<int> bottomHeight = {7, 2, 2};
    vector<int> bottomRadius = {6, 4, 4};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> topHeight = {10000, 100};
    vector<int> topRadius = {5000, 2};
    vector<int> bottomHeight = {10000, 1};
    vector<int> bottomRadius = {10000, 3};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> topHeight = {4, 3};
    vector<int> topRadius = {1, 2};
    vector<int> bottomHeight = {2, 1};
    vector<int> bottomRadius = {3, 4};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> topHeight = {3, 6};
    vector<int> topRadius = {6, 10};
    vector<int> bottomHeight = {2, 2};
    vector<int> bottomRadius = {12, 8};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> topHeight = {42, 9170, 6963, 3282, 2996, 2392, 293, 9719, 4772, 5668, 8704, 7674, 8254, 2663, 8724, 2317, 289, 9265, 5891, 5007, 9630, 8757, 3932, 4627, 6119, 4834, 2705, 1674, 6925, 6778, 3987, 2356, 4032, 6942, 1108, 5458, 4946, 4222, 7507, 901, 7411, 1549, 3603, 9375, 7349, 8282, 6419, 8128, 4649, 4311};
    vector<int> topRadius = {8468, 5725, 4465, 6828, 1943, 4605, 2383, 9896, 1539, 6300, 3812, 4665, 6869, 2758, 9742, 3036, 107, 2649, 6730, 1102, 2624, 1841, 6309, 1324, 2083, 1116, 9931, 2387, 9073, 5574, 3291, 4768, 2053, 1725, 192, 2288, 8910, 8589, 3031, 2592, 6360, 6484, 4351, 1021, 3200, 4735, 7939, 468, 2484, 6618};
    vector<int> bottomHeight = {6335, 1479, 5706, 9962, 4828, 3903, 7422, 5448, 1870, 7036, 1323, 5142, 5548, 38, 7530, 2191, 9041, 7447, 4371, 4394, 4085, 4967, 6945, 5538, 2930, 4640, 3978, 5022, 6271, 5098, 9162, 3656, 7351, 3967, 8008, 7754, 2210, 6423, 6414, 8763, 7625, 7596, 292, 4597, 9669, 54, 6901, 3729, 7808, 2814};
    vector<int> bottomRadius = {6501, 9359, 8146, 492, 5437, 154, 8717, 1727, 9913, 9895, 334, 7712, 7645, 2860, 779, 1843, 8943, 3806, 5351, 3549, 9955, 7377, 2440, 1539, 6542, 9659, 2307, 8746, 5830, 6513, 8637, 5575, 1151, 3431, 1338, 384, 9759, 4947, 9169, 1656, 538, 4042, 837, 4022, 4485, 2000, 3789, 4894, 2422, 9515};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> topHeight = {28, 40};
    vector<int> topRadius = {29, 40};
    vector<int> bottomHeight = {1, 3};
    vector<int> bottomRadius = {50, 30};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> topHeight = {999, 999, 999, 10000, 10000, 10000, 123};
    vector<int> topRadius = {10000, 10000, 10000, 1, 2, 3, 564};
    vector<int> bottomHeight = {2324, 2323, 234, 5454, 323, 232, 31};
    vector<int> bottomRadius = {1, 2, 3222, 434, 5454, 23, 789};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> topHeight = {3, 2, 6, 7, 3, 9, 8, 2};
    vector<int> topRadius = {7, 4, 9, 1, 6, 6, 4, 10};
    vector<int> bottomHeight = {5, 10, 4, 3, 6, 8, 7};
    vector<int> bottomRadius = {9, 5, 3, 6, 8, 10, 6};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> topHeight = {1, 12};
    vector<int> topRadius = {10, 100};
    vector<int> bottomHeight = {15, 2};
    vector<int> bottomRadius = {165, 30};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> topHeight = {500};
    vector<int> topRadius = {100};
    vector<int> bottomHeight = {800};
    vector<int> bottomRadius = {200};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> topHeight = {4, 1};
    vector<int> topRadius = {2, 1};
    vector<int> bottomHeight = {3, 4};
    vector<int> bottomRadius = {4, 3};
    PointyWizardHats* pObj = new PointyWizardHats();
    clock_t start = clock();
    int result = pObj->getNumHats(topHeight, topRadius, bottomHeight, bottomRadius);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test120() == 0 ? ++passed : ++failed;
    test121() == 0 ? ++passed : ++failed;
    test122() == 0 ? ++passed : ++failed;
    test123() == 0 ? ++passed : ++failed;
    test124() == 0 ? ++passed : ++failed;
    test125() == 0 ? ++passed : ++failed;
    test126() == 0 ? ++passed : ++failed;
    test127() == 0 ? ++passed : ++failed;
    test128() == 0 ? ++passed : ++failed;
    test129() == 0 ? ++passed : ++failed;
    test130() == 0 ? ++passed : ++failed;
    test131() == 0 ? ++passed : ++failed;
    test132() == 0 ? ++passed : ++failed;
    test133() == 0 ? ++passed : ++failed;
    test134() == 0 ? ++passed : ++failed;
    test135() == 0 ? ++passed : ++failed;
    test136() == 0 ? ++passed : ++failed;
    test137() == 0 ? ++passed : ++failed;
    test138() == 0 ? ++passed : ++failed;
    test139() == 0 ? ++passed : ++failed;
    test140() == 0 ? ++passed : ++failed;
    test141() == 0 ? ++passed : ++failed;
    test142() == 0 ? ++passed : ++failed;
    test143() == 0 ? ++passed : ++failed;
    test144() == 0 ? ++passed : ++failed;
    test145() == 0 ? ++passed : ++failed;
    test146() == 0 ? ++passed : ++failed;
    test147() == 0 ? ++passed : ++failed;
    test148() == 0 ? ++passed : ++failed;
    test149() == 0 ? ++passed : ++failed;
    test150() == 0 ? ++passed : ++failed;
    test151() == 0 ? ++passed : ++failed;
    test152() == 0 ? ++passed : ++failed;
    test153() == 0 ? ++passed : ++failed;
    test154() == 0 ? ++passed : ++failed;
    test155() == 0 ? ++passed : ++failed;
    test156() == 0 ? ++passed : ++failed;
    test157() == 0 ? ++passed : ++failed;
    test158() == 0 ? ++passed : ++failed;
    test159() == 0 ? ++passed : ++failed;
    test160() == 0 ? ++passed : ++failed;
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22926251&rd=15171&pm=11965
********************************************************************************
#line 5 "PointyWizardHats.cpp" 
#include <cstdlib> 
#include <cctype> 
#include <cstring> 
#include <cstdio> 
#include <cmath> 
#include <algorithm> 
#include <vector> 
#include <string> 
#include <iostream> 
#include <sstream> 
#include <map> 
#include <set> 
#include <queue> 
#include <stack> 
#include <fstream> 
#include <numeric> 
#include <iomanip> 
#include <bitset> 
#include <list> 
#include <stdexcept> 
#include <functional> 
#include <utility> 
#include <ctime> 
using namespace std; 
 
#define PB push_back 
#define MP make_pair 
 
#define REP(i,n) for(i=0;i<(n);++i) 
#define FOR(i,l,h) for(i=(l);i<=(h);++i) 
#define FORD(i,h,l) for(i=(h);i>=(l);--i) 
 
typedef vector<int> VI; 
typedef vector<string> VS; 
typedef vector<double> VD; 
typedef long long LL; 
typedef pair<int,int> PII; 
 
int g[100][100]; 
int vis[100]; 
int match[100]; 
 
class PointyWizardHats 
{ 
        public: 
        int n, m; 
        bool find(int x) 
        { 
            for(int i = 0; i < m; ++i) 
            { 
                if(g[x][i] && !vis[i]) 
                { 
                    vis[i] = 1; 
                    if(match[i] == -1 || find(match[i])) 
                    { 
                        match[i] = x; 
                        return 1; 
                    } 
                } 
            } 
            return 0; 
        } 
        int getNumHats(vector <int> toph, vector <int> topr, vector <int> btmh, vector <int> btmr) 
        { 
            n = toph.size(); 
            m = btmh.size(); 
            memset(g, 0, sizeof(g)); 
            for(int i = 0; i < n; ++i) 
            { 
                for(int j = 0; j < m; ++j) 
                { 
                    if(topr[i] >= btmr[j])  continue; 
                    if(btmr[j] * toph[i] > topr[i] * btmh[j])  g[i][j] = 1; 
                } 
            } 
            int cnt(0); 
            memset(match, -1, sizeof(match)); 
            for(int i = 0;i < n; ++i) 
            { 
                memset(vis, 0, sizeof(vis)); 
                if(find(i))  ++cnt; 
            } 
            return cnt; 
        } 
 
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/