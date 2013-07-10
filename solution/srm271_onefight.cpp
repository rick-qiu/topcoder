/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4518
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

class OneFight {
public:
    int monsterKilling(vector<int> life, vector<int> damage, int yourDamage);
};

int OneFight::monsterKilling(vector<int> life, vector<int> damage, int yourDamage) {
    int ret;
    return ret;
}


int test0() {
    vector<int> life = {3};
    vector<int> damage = {10};
    int yourDamage = 2;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> life = {5, 1};
    vector<int> damage = {5, 3};
    int yourDamage = 3;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> life = {1, 5};
    vector<int> damage = {3, 5};
    int yourDamage = 3;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> life = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<int> damage = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int yourDamage = 100;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 2201;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> life = {6, 34, 21, 79, 31, 5, 8, 23, 9, 100};
    vector<int> damage = {1, 65, 95, 32, 48, 9, 3, 13, 100, 4};
    int yourDamage = 4;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 6554;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> life = {2, 3, 4};
    vector<int> damage = {1, 1, 0};
    int yourDamage = 3;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> life = {1, 2, 3, 4, 5};
    vector<int> damage = {0, 0, 0, 2, 1};
    int yourDamage = 1;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> life = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> damage = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int yourDamage = 1;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 550001;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> life = {20, 5, 21, 29, 37, 84};
    vector<int> damage = {81, 47, 22, 88, 54, 19};
    int yourDamage = 61;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 844;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> life = {40, 64, 28, 81, 97, 17, 49, 85, 18, 29};
    vector<int> damage = {5, 45, 96, 51, 97, 97, 76, 54, 16, 51};
    int yourDamage = 9;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 12917;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> life = {16};
    vector<int> damage = {99};
    int yourDamage = 27;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> life = {46, 33, 20, 5};
    vector<int> damage = {12, 0, 82, 52};
    int yourDamage = 86;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 223;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> life = {58, 2, 34, 64, 100};
    vector<int> damage = {45, 89, 63, 28, 41};
    int yourDamage = 64;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 709;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> life = {45, 71, 64, 35, 46, 16, 78, 19, 44, 24};
    vector<int> damage = {35, 22, 74, 74, 57, 28, 63, 78, 56, 98};
    int yourDamage = 75;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 2728;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> life = {49, 26, 74, 62, 82, 84};
    vector<int> damage = {55, 35, 97, 32, 40, 64};
    int yourDamage = 89;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 918;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> life = {36, 64, 15, 89, 5, 67, 67, 27, 6, 47};
    vector<int> damage = {27, 35, 79, 14, 50, 94, 3, 30, 56, 68};
    int yourDamage = 49;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 2134;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> life = {17, 60};
    vector<int> damage = {91, 84};
    int yourDamage = 75;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 260;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> life = {75, 75, 37, 22, 34, 20, 8, 3, 7};
    vector<int> damage = {42, 83, 35, 0, 49, 95, 66, 5, 21};
    int yourDamage = 93;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 1263;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> life = {52, 62, 5, 29, 63};
    vector<int> damage = {83, 92, 69, 46, 40};
    int yourDamage = 14;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 2723;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> life = {34, 28, 63};
    vector<int> damage = {1, 50, 11};
    int yourDamage = 27;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 163;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> life = {77, 65, 86, 59, 50, 17, 71, 66, 93, 38};
    vector<int> damage = {23, 30, 78, 24, 36, 95, 79, 65, 68, 5};
    int yourDamage = 39;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 3893;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> life = {68, 8, 83, 29, 39, 76, 42};
    vector<int> damage = {22, 29, 56, 64, 81, 45, 27};
    int yourDamage = 44;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 1319;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> life = {7, 71, 67, 87, 96, 11, 93, 59, 77, 95};
    vector<int> damage = {87, 100, 72, 85, 85, 43, 34, 4, 61, 68};
    int yourDamage = 52;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 4756;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> life = {22, 95, 66, 8, 50, 68};
    vector<int> damage = {94, 94, 74, 23, 90, 13};
    int yourDamage = 32;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 1994;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> life = {77, 8, 56, 60, 46, 5, 4, 58};
    vector<int> damage = {93, 45, 1, 39, 44, 68, 87, 17};
    int yourDamage = 100;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 1233;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> life = {51, 28, 72, 24};
    vector<int> damage = {37, 38, 28, 26};
    int yourDamage = 36;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 407;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> life = {49, 26, 69, 90, 49, 17, 83, 82};
    vector<int> damage = {49, 47, 73, 43, 85, 40, 10, 46};
    int yourDamage = 73;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 1586;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> life = {52, 33, 97, 59, 44};
    vector<int> damage = {81, 74, 24, 58, 37};
    int yourDamage = 10;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 3556;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> life = {25, 2};
    vector<int> damage = {51, 27};
    int yourDamage = 34;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> life = {6};
    vector<int> damage = {3};
    int yourDamage = 37;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> life = {83, 88, 63, 91};
    vector<int> damage = {65, 49, 32, 58};
    int yourDamage = 30;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 1486;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> life = {28, 51, 70, 58, 66, 69, 89, 73, 71, 43};
    vector<int> damage = {63, 84, 37, 87, 3, 41, 60, 73, 59, 4};
    int yourDamage = 35;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 4275;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> life = {32, 38, 72, 71, 16, 68, 90, 78, 67, 45};
    vector<int> damage = {61, 95, 61, 27, 35, 64, 18, 80, 59, 64};
    int yourDamage = 77;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 2760;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> life = {74, 10, 51, 79, 59, 33};
    vector<int> damage = {31, 24, 45, 75, 70, 55};
    int yourDamage = 21;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 2465;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> life = {83, 14, 7, 16, 74, 38, 75, 66, 28};
    vector<int> damage = {33, 19, 100, 59, 99, 34, 44, 3, 77};
    int yourDamage = 33;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 2539;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> life = {79, 52, 16, 3, 61, 42};
    vector<int> damage = {87, 74, 60, 41, 60, 66};
    int yourDamage = 78;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 1436;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> life = {12, 91, 80};
    vector<int> damage = {6, 68, 52};
    int yourDamage = 37;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 559;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> life = {40, 63};
    vector<int> damage = {91, 30};
    int yourDamage = 35;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 303;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> life = {62, 30, 18, 31, 9, 65};
    vector<int> damage = {93, 88, 100, 0, 31, 29};
    int yourDamage = 55;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 1007;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> life = {66, 83, 72, 61, 31};
    vector<int> damage = {27, 53, 79, 18, 21};
    int yourDamage = 74;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 559;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> life = {67, 1, 86, 20, 24, 19, 31, 6};
    vector<int> damage = {31, 31, 4, 17, 31, 71, 12, 19};
    int yourDamage = 1;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 11965;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> life = {94, 59, 40, 36, 6};
    vector<int> damage = {97, 93, 61, 0, 78};
    int yourDamage = 78;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 918;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> life = {37, 88, 26};
    vector<int> damage = {19, 5, 57};
    int yourDamage = 93;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 111;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> life = {58, 18, 79, 74, 68, 7, 47};
    vector<int> damage = {23, 81, 85, 70, 72, 9, 20};
    int yourDamage = 12;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 5031;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> life = {81, 33, 31, 34, 68, 21};
    vector<int> damage = {76, 4, 37, 8, 90, 80};
    int yourDamage = 100;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 691;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> life = {60, 67, 50, 100, 67, 79, 39, 24};
    vector<int> damage = {32, 95, 99, 56, 64, 33, 19, 14};
    int yourDamage = 37;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 2805;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> life = {63, 89};
    vector<int> damage = {74, 94};
    int yourDamage = 41;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 619;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> life = {19, 70, 2};
    vector<int> damage = {52, 87, 2};
    int yourDamage = 6;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 1635;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> life = {68, 38, 83, 5, 4, 74, 99};
    vector<int> damage = {53, 57, 19, 73, 60, 61, 2};
    int yourDamage = 32;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 1660;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> life = {98, 99, 83, 4, 60, 99, 44};
    vector<int> damage = {92, 89, 23, 70, 5, 94, 66};
    int yourDamage = 52;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 2133;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> life = {87, 16, 92, 9, 99};
    vector<int> damage = {97, 64, 78, 66, 15};
    int yourDamage = 27;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 1767;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> life = {90, 10, 45, 60, 3, 51, 36, 36, 21, 15};
    vector<int> damage = {40, 32, 46, 51, 96, 28, 42, 5, 56, 94};
    int yourDamage = 15;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 3928;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> life = {80, 6, 64, 90, 95, 76, 84, 81};
    vector<int> damage = {95, 28, 30, 45, 44, 4, 88, 31};
    int yourDamage = 79;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 2085;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> life = {96, 14, 33, 45, 26, 16, 48};
    vector<int> damage = {50, 10, 15, 23, 20, 75, 16};
    int yourDamage = 12;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 2228;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> life = {12, 6};
    vector<int> damage = {87, 17};
    int yourDamage = 7;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 226;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> life = {30, 2, 15, 58, 7, 69, 14, 37, 35, 96};
    vector<int> damage = {22, 77, 61, 23, 40, 69, 8, 67, 34, 46};
    int yourDamage = 50;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 2221;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> life = {18, 83, 17, 60, 56, 4, 76, 71, 12, 35};
    vector<int> damage = {94, 22, 26, 51, 95, 63, 70, 98, 91, 43};
    int yourDamage = 43;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 3944;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> life = {9, 59, 78, 42, 75, 52, 97, 9, 18, 14};
    vector<int> damage = {19, 44, 90, 7, 13, 52, 38, 100, 52, 37};
    int yourDamage = 67;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 2112;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> life = {10, 11};
    vector<int> damage = {18, 20};
    int yourDamage = 10;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> life = {3, 5, 6};
    vector<int> damage = {3, 4, 5};
    int yourDamage = 3;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> life = {6, 34, 21, 79, 31, 5, 8, 23, 9, 100};
    vector<int> damage = {1, 65, 95, 32, 48, 9, 3, 13, 100, 4};
    int yourDamage = 4;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 6554;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> life = {5, 1};
    vector<int> damage = {5, 3};
    int yourDamage = 3;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> life = {100, 6, 34, 21, 79, 31, 5, 8, 23, 9};
    vector<int> damage = {1, 65, 32, 48, 95, 4, 9, 13, 3, 100};
    int yourDamage = 4;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 6646;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> life = {12, 15, 99, 13, 98};
    vector<int> damage = {1, 1, 1, 90, 1};
    int yourDamage = 1;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 1611;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> life = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> damage = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int yourDamage = 1;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 550001;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> life = {100, 95, 91, 99, 92, 93, 98, 97, 94, 96};
    vector<int> damage = {100, 99, 98, 97, 96, 95, 94, 93, 92, 91};
    int yourDamage = 1;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 491152;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> life = {1, 99};
    vector<int> damage = {1, 2};
    int yourDamage = 2;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 104;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> life = {5, 5, 5, 100};
    vector<int> damage = {100, 100, 100, 10};
    int yourDamage = 5;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 831;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> life = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    vector<int> damage = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    int yourDamage = 7;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 82501;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> life = {1, 100};
    vector<int> damage = {10, 20};
    int yourDamage = 100;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> life = {1, 5, 10};
    vector<int> damage = {5, 5, 19};
    int yourDamage = 4;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 108;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> life = {8, 15};
    vector<int> damage = {1, 2};
    int yourDamage = 1;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> life = {99, 1};
    vector<int> damage = {99, 50};
    int yourDamage = 99;
    OneFight* pObj = new OneFight();
    clock_t start = clock();
    int result = pObj->monsterKilling(life, damage, yourDamage);
    clock_t end = clock();
    delete pObj;
    int expected = 200;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=293874&rd=8068&pm=4518
********************************************************************************
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <iostream>
#include <cmath>
 
using namespace std;
 
#define rep(i,n) for(int i=0; i<(n); i++)
typedef vector<int> vi;
#define vall(v) v.begin(),v.end()
 
class OneFight {
public:
  int monsterKilling(vector <int>, vector <int>, int);
};
 
int OneFight::monsterKilling(vector <int> life, vector <int> damage, int yourDamage) {
  int n=life.size();
  
  vi dp((1<<n),100000000);
  dp[0]=0;
  rep(i,(1<<n)) if (i) {
    int tot=0;
    rep(j,n) if (i&(1<<j)) tot += damage[j];
    
    rep(j,n)
    dp[i] <?= dp[i&~(1<<j)]+((life[j]+yourDamage-1)/yourDamage)*tot;
  }  
  
  return dp[(1<<n)-1]+1;
}
 
 
//Powered by [KawigiEdit]

********************************************************************************
*******************************************************************************/