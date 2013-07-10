/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6124
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

class Aquarium {
public:
    int peaceful(int minSize, int maxSize, vector<int> fishSizes);
};

int Aquarium::peaceful(int minSize, int maxSize, vector<int> fishSizes) {
    int ret;
    return ret;
}


int test0() {
    int minSize = 1;
    int maxSize = 12;
    vector<int> fishSizes = {1};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int minSize = 1;
    int maxSize = 36;
    vector<int> fishSizes = {3};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int minSize = 1;
    int maxSize = 1000;
    vector<int> fishSizes = {10, 100, 500};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int minSize = 5;
    int maxSize = 880;
    vector<int> fishSizes = {1, 3, 9, 27, 243, 729};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int minSize = 3;
    int maxSize = 997;
    vector<int> fishSizes = {10, 11, 12, 13, 14, 16, 82, 83, 84, 85, 720, 730, 740, 750, 760, 770};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 147;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int minSize = 2;
    int maxSize = 999;
    vector<int> fishSizes = {941, 797, 120, 45, 7, 120};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int minSize = 1;
    int maxSize = 1000;
    vector<int> fishSizes = {1, 1000};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 590;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int minSize = 1;
    int maxSize = 1000;
    vector<int> fishSizes = {1, 500, 1000};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 539;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int minSize = 1;
    int maxSize = 791;
    vector<int> fishSizes = {1, 4, 12, 25, 79, 556, 625, 800, 801, 950, 952, 954, 956, 958, 980, 1000};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int minSize = 1;
    int maxSize = 1000;
    vector<int> fishSizes = {2, 2, 2, 2, 8, 8, 8, 8, 64, 64, 64, 64, 1000};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 379;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int minSize = 777;
    int maxSize = 777;
    vector<int> fishSizes = {777};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int minSize = 50;
    int maxSize = 50;
    vector<int> fishSizes = {1, 1000};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int minSize = 2;
    int maxSize = 999;
    vector<int> fishSizes = {3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 3, 3, 3, 3, 3, 4, 3, 3, 111, 111, 111, 111, 112, 113, 111, 112, 113, 111, 111, 112, 121, 122, 122, 111, 111, 111, 111, 111, 113, 111, 112, 113, 111, 112, 999, 1000, 999};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 41;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int minSize = 82;
    int maxSize = 888;
    vector<int> fishSizes = {2, 40, 800};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 488;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int minSize = 1;
    int maxSize = 1000;
    vector<int> fishSizes = {164, 1, 89, 7, 89, 75, 875, 8, 58, 96, 58, 958, 93, 58, 95, 89};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int minSize = 1;
    int maxSize = 1000;
    vector<int> fishSizes = {659, 10, 705};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 662;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int minSize = 200;
    int maxSize = 500;
    vector<int> fishSizes = {4, 87, 2, 187, 5, 7, 18, 907, 506, 56, 75, 760, 567, 45, 70, 745, 6, 607, 450, 74, 507, 54, 768, 360, 754, 40, 7, 41, 2, 785, 999};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int minSize = 1;
    int maxSize = 1000;
    vector<int> fishSizes = {347, 2, 8, 7, 9, 897, 52, 5, 89, 57, 5, 87, 28, 7, 987, 89, 78, 97, 8, 977, 8, 8, 97, 89, 89};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int minSize = 1;
    int maxSize = 1000;
    vector<int> fishSizes = {1000};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 599;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int minSize = 1;
    int maxSize = 444;
    vector<int> fishSizes = {2, 22, 22, 2, 2, 2, 2, 2, 22, 22, 2, 2, 2, 22, 2, 2, 2, 22, 22, 2, 22, 2, 2, 2, 22, 2, 22, 22, 2, 2, 2, 22, 2, 2, 2, 2, 22, 222, 22, 2, 2, 222, 22, 2, 2, 22, 22, 222};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 226;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int minSize = 10;
    int maxSize = 100;
    vector<int> fishSizes = {1};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 90;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int minSize = 12;
    int maxSize = 879;
    vector<int> fishSizes = {59, 39, 39, 35, 78, 58, 97, 57, 36, 57, 68, 56, 78, 35, 87};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int minSize = 1;
    int maxSize = 1000;
    vector<int> fishSizes = {2, 4, 8, 16, 32, 64, 128, 256, 512};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int minSize = 10;
    int maxSize = 100;
    vector<int> fishSizes = {2, 500};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int minSize = 1;
    int maxSize = 1000;
    vector<int> fishSizes = {75, 87, 578, 4, 5, 6, 746, 75, 6, 84, 76, 97, 5, 67, 53, 675, 36, 7, 8, 56, 87, 56, 8, 7, 683, 7, 56, 8, 75, 368, 7, 35, 3, 5, 553, 5};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int minSize = 2;
    int maxSize = 999;
    vector<int> fishSizes = {941, 797, 120, 45, 7, 120};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int minSize = 1;
    int maxSize = 1000;
    vector<int> fishSizes = {1000};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 599;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int minSize = 1;
    int maxSize = 12;
    vector<int> fishSizes = {1};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int minSize = 1;
    int maxSize = 791;
    vector<int> fishSizes = {1, 4, 12, 25, 79, 556, 625, 800, 801, 950, 952, 954, 956, 958, 980, 1000};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int minSize = 1;
    int maxSize = 10;
    vector<int> fishSizes = {11};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int minSize = 3;
    int maxSize = 997;
    vector<int> fishSizes = {10, 11, 12, 13, 14, 16, 82, 83, 84, 85, 720, 730, 740, 750, 760, 770};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 147;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int minSize = 3;
    int maxSize = 1000;
    vector<int> fishSizes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 6, 3, 7, 4, 3, 4, 6, 7, 5, 4, 3, 2, 3, 4, 5, 6, 7, 7, 5, 4, 4, 54, 5, 6, 7, 7, 5, 4, 43, 4, 4, 4, 46, 6, 5, 45, 5};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 475;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int minSize = 1;
    int maxSize = 1000;
    vector<int> fishSizes = {10, 100, 500};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int minSize = 1;
    int maxSize = 1;
    vector<int> fishSizes = {1};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
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
    int minSize = 1;
    int maxSize = 1000;
    vector<int> fishSizes = {719, 727, 733, 739, 743, 751, 757, 761, 769, 773, 787, 797, 809, 811, 821, 823, 827, 829, 839, 853};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 645;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int minSize = 1;
    int maxSize = 2;
    vector<int> fishSizes = {11};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int minSize = 1;
    int maxSize = 12;
    vector<int> fishSizes = {100};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int minSize = 1;
    int maxSize = 1000;
    vector<int> fishSizes = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 5, 1, 9, 1};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 910;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int minSize = 3;
    int maxSize = 1000;
    vector<int> fishSizes = {2, 3, 4, 5, 6, 7, 8, 9, 7, 6, 5, 4, 3, 2, 3, 4, 5, 6, 7, 8, 9, 8, 7, 6, 5, 4, 3, 3};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 910;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int minSize = 1;
    int maxSize = 5;
    vector<int> fishSizes = {11};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int minSize = 12;
    int maxSize = 12;
    vector<int> fishSizes = {6};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int minSize = 1;
    int maxSize = 36;
    vector<int> fishSizes = {3};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
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
    int minSize = 1;
    int maxSize = 111;
    vector<int> fishSizes = {10};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int minSize = 1;
    int maxSize = 3;
    vector<int> fishSizes = {37};
    Aquarium* pObj = new Aquarium();
    clock_t start = clock();
    int result = pObj->peaceful(minSize, maxSize, fishSizes);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21247993&rd=9814&pm=6124
********************************************************************************
#include <algorithm> 
#include <bitset> 
#include <cmath> 
#include <cstdio> 
#include <cstdlib> 
#include <deque> 
#include <functional> 
#include <iomanip> 
#include <iostream> 
#include <list> 
#include <map> 
#include <numeric> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <utility> 
#include <vector> 
#include <ctime> 
using namespace std; 
#define ABS(x) (x>0?x:-x) 
#define FR(a,l,h) for(a=l; a<=h; a++) 
#define GMAX(x,y) (x>y?x:y) 
#define GMIN(x,y) (x<y?x:Y) 
#define INF 2000000000 
#define RP(a,h) for(a=0; a<h; a++) 
#define SZ(a) (int)a.size() 
typedef vector <int> VI; 
typedef vector <string> VS; 
 
bool eat(int v1, int v2) 
{ 
  return (v1>=v2*2 && v1<=v2*10); 
} 
 
class Aquarium 
{ 
public: 
int peaceful(int minSize, int maxSize, vector <int> fish) 
{ 
  int i, j, ans=0; 
  FR(i, minSize, maxSize) 
  { 
    RP(j, SZ(fish)) 
      if (eat(i, fish[j]) || eat(fish[j], i)) 
        break; 
    if (j==SZ(fish)) 
      ans++; 
  } 
  return ans; 
} 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/