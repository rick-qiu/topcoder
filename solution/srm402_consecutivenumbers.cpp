/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8302
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

class ConsecutiveNumbers {
public:
    vector<int> missingNumber(vector<int> numbers);
};

vector<int> ConsecutiveNumbers::missingNumber(vector<int> numbers) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> numbers = {10, 7, 12, 8, 11};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> numbers = {3, 6};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> numbers = {5, 6, 7, 8};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 9};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> numbers = {1000000000};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {999999999, 1000000001};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> numbers = {1, 6, 9, 3, 8, 12, 7, 4, 11, 5, 10};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> numbers = {5, 5};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> numbers = {1};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> numbers = {2, 2, 4};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> numbers = {1, 6, 9, 3, 8, 12, 7, 4, 11, 5, 10};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> numbers = {1, 3, 5};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> numbers = {5, 2, 1, 2};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> numbers = {1, 4};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> numbers = {1, 1};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> numbers = {472, 467, 471};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> numbers = {86393090, 86393072, 86393083, 86393071, 86393093, 86393081, 86393068, 86393099, 86393102, 86393073, 86393104, 86393075, 86393086, 86393082, 86393088, 86393098, 86393080, 86393091, 86393087, 86393094, 86393096, 86393076, 86393067, 86393089, 86393106, 86393066, 86393097, 86393077, 86393105, 86393078, 86393101, 86393069, 86393092, 86393103, 86393084, 86393074, 86393070, 86393095, 86393100, 86393079};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {86393085};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> numbers = {1};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> numbers = {7485, 7482, 7484};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7483};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> numbers = {166};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {165, 167};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> numbers = {98773594, 98773608, 98773604, 98773602, 98773610, 98773598, 98773603, 98773600, 98773606, 98773601, 98773607, 98773599, 98773597, 98773605, 98773596, 98773609, 98773611, 98773595, 98773613};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {98773612};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> numbers = {95, 97, 92, 98, 93, 96, 91, 99, 90};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {94};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> numbers = {611, 602, 603, 604, 616, 610, 609, 606, 608, 601, 614, 607, 615, 613, 612, 600};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {605};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> numbers = {42431495, 42431490, 42431485, 42431482, 42431468, 42431489, 42431476, 42431467, 42431480, 42431484, 42431487, 42431477, 42431494, 42431488, 42431496, 42431463, 42431486, 42431493, 42431462, 42431472, 42431471, 42431479, 42431483, 42431478, 42431481, 42431475, 42431461, 42431473, 42431491, 42431464, 42431474, 42431469, 42431466, 42431492, 42431470};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {42431465};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> numbers = {92, 83, 67, 78, 74, 95, 66, 56, 64, 59, 63, 81, 80, 58, 55, 77, 68, 79, 54, 61, 90, 82, 75, 91, 73, 89, 65, 96, 70, 62, 88, 86, 72, 93, 94, 71, 60, 69, 85, 87, 76, 53, 57};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {84};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> numbers = {46675953, 46675952, 46675964, 46675950, 46675967, 46675962, 46675955, 46675968, 46675956, 46675954, 46675942, 46675969, 46675960, 46675941, 46675965, 46675940, 46675946, 46675945, 46675970, 46675947, 46675959, 46675949, 46675963, 46675961, 46675957, 46675951, 46675958, 46675971, 46675966, 46675948, 46675943};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {46675944};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> numbers = {886219, 886247, 886237, 886248, 886223, 886220, 886241, 886242, 886228, 886239, 886226, 886224, 886225, 886234, 886243, 886221, 886216, 886235, 886233, 886231, 886215, 886240, 886222, 886229, 886232, 886246, 886230, 886236, 886218, 886244, 886245, 886217, 886227};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {886238};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> numbers = {25496, 25502, 25508, 25510, 25515, 25499, 25495, 25524, 25519, 25493, 25513, 25525, 25526, 25494, 25523, 25522, 25503, 25492, 25521, 25517, 25491, 25518, 25504, 25489, 25505, 25507, 25516, 25500, 25497, 25512, 25498, 25509, 25511, 25514, 25490, 25520, 25501};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {25506};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> numbers = {76157441, 76157425, 76157427, 76157413, 76157426, 76157436, 76157410, 76157431, 76157447, 76157435, 76157414, 76157409};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> numbers = {84207060, 84207055, 84207062, 84207056, 84207066, 84207063, 84207059, 84207061, 84207058, 84207064, 84207057, 84207065};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {84207054, 84207067};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> numbers = {6, 2, 4, 8};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> numbers = {4612618, 4612617};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4612616, 4612619};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> numbers = {870192503, 870192496, 870192497, 870192511, 870192509, 870192501, 870192513, 870192494, 870192512};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> numbers = {993255830, 993255861, 993255839, 993255821, 993255829, 993255857, 993255828, 993255855, 993255850, 993255852, 993255836, 993255843, 993255848, 993255851, 993255818, 993255858, 993255826, 993255849, 993255838, 993255832, 993255831, 993255824, 993255844, 993255837, 993255835, 993255854, 993255842, 993255827, 993255833, 993255841, 993255820, 993255822, 993255846, 993255862, 993255863, 993255825, 993255819, 993255834, 993255856, 993255817, 993255847, 993255845, 993255840, 993255860, 993255823, 993255853, 993255859};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {993255816, 993255864};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> numbers = {47, 56, 34, 23, 42, 55, 13, 48, 51, 50, 33, 12, 19, 40, 54, 24, 46, 30, 35, 36, 10, 22, 21, 11, 53, 28, 49, 17, 32, 41, 14, 16, 45, 25, 26, 9, 29, 15, 39, 43, 27, 52, 44, 20, 38, 18, 37, 31};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 57};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> numbers = {3};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> numbers = {27435, 27434, 27446, 27443, 27432, 27442, 27441, 27433, 27445, 27430, 27438, 27437, 27429, 27440, 27444, 27436, 27431, 27439};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27428, 27447};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> numbers = {209198190, 209198191, 209198226, 209198200, 209198218, 209198192, 209198228, 209198189, 209198188, 209198196, 209198231, 209198205, 209198203, 209198227, 209198194, 209198216, 209198232, 209198195, 209198224, 209198212, 209198210, 209198208, 209198215, 209198187, 209198202, 209198222, 209198197, 209198229, 209198221, 209198185, 209198186, 209198219, 209198230, 209198201, 209198213, 209198207, 209198209, 209198217, 209198233, 209198199, 209198220, 209198211, 209198193, 209198198, 209198214, 209198225, 209198204, 209198223};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {209198206};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> numbers = {3127105, 3127098, 3127112, 3127115, 3127110, 3127107, 3127106, 3127099, 3127111, 3127104, 3127113, 3127117, 3127114, 3127116, 3127108, 3127101, 3127109, 3127103, 3127097, 3127100};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3127102};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> numbers = {16675, 16680, 16673, 16677, 16668, 16669, 16674, 16670, 16682, 16676, 16678, 16667, 16671, 16672, 16681};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16679};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> numbers = {8, 6, 4, 10, 9, 2, 3, 1, 5, 7};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> numbers = {767, 762, 760, 766, 770, 764, 771, 758, 763, 761, 769, 759, 768};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {765};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> numbers = {66523439, 66523448, 66523466, 66523469, 66523455, 66523450, 66523472, 66523458, 66523454, 66523445, 66523462};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> numbers = {2612, 2615, 2622, 2618, 2620, 2609, 2621, 2624, 2614};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> numbers = {59304, 59298, 59321, 59309, 59326, 59300, 59324, 59322, 59319, 59308, 59318, 59330, 59302, 59312, 59315, 59328, 59311, 59310, 59320, 59297, 59301, 59329, 59305, 59327, 59317, 59306, 59307, 59296, 59314, 59323, 59303, 59325, 59313, 59299, 59316};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {59295, 59331};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> numbers = {2804, 2781, 2784, 2787, 2805, 2798, 2789, 2783, 2801, 2790, 2795, 2794, 2792, 2808, 2803, 2791, 2793, 2802, 2809, 2786, 2807, 2785, 2806, 2800, 2799, 2782, 2797, 2788, 2796};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2780, 2810};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> numbers = {244505, 244497, 244493, 244489, 244491, 244502, 244490, 244494, 244488, 244495, 244506, 244499, 244503, 244500, 244496, 244501, 244492, 244486, 244487, 244504};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {244498};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> numbers = {7718, 7715, 7725, 7732, 7733, 7713, 7734, 7717, 7739, 7730, 7736, 7721, 7719, 7731, 7740, 7716, 7741, 7743, 7722, 7738, 7737, 7727, 7729, 7735, 7728, 7723, 7714, 7742, 7726, 7720, 7724};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7712, 7744};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> numbers = {32780843, 32780822, 32780846, 32780811, 32780818, 32780810, 32780833, 32780825, 32780826, 32780828, 32780848, 32780842, 32780812, 32780829, 32780816, 32780838, 32780809, 32780831, 32780852, 32780851, 32780823, 32780821, 32780820, 32780830, 32780817, 32780836, 32780849, 32780847, 32780837, 32780824, 32780832, 32780835, 32780827, 32780808, 32780819, 32780840, 32780841, 32780834, 32780850, 32780813, 32780814, 32780845, 32780839, 32780815};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {32780844};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> numbers = {6233316, 6233312, 6233314, 6233318, 6233315, 6233317, 6233319, 6233313};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6233311, 6233320};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> numbers = {7, 3, 2, 5, 6, 1};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> numbers = {61, 60, 58, 57, 59};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {56, 62};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> numbers = {601, 597, 596, 619, 625, 595, 615, 624, 613, 593, 609, 614, 626, 623, 629, 598, 622, 594, 620, 610, 618, 608, 611, 612, 592, 607, 616, 604, 600, 605, 606, 603, 627, 628, 621, 602, 617};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {599};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> numbers = {97595625, 97595608, 97595617, 97595623, 97595600, 97595619, 97595598, 97595622, 97595606, 97595599, 97595604, 97595609, 97595610, 97595607, 97595605, 97595611, 97595620, 97595624, 97595614, 97595601, 97595621, 97595597, 97595615, 97595602, 97595618, 97595603, 97595613, 97595612};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {97595616};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> numbers = {59710097, 59710093, 59710088, 59710104, 59710101, 59710094, 59710091, 59710102, 59710096, 59710105, 59710100, 59710103, 59710090, 59710095, 59710085, 59710092, 59710099, 59710098, 59710089, 59710087};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {59710086};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> numbers = {389649018, 389648993, 389649004, 389649009, 389649016, 389648996, 389649011, 389649021, 389649000, 389649008, 389649015, 389649002, 389649028, 389648999, 389649007, 389649026, 389648995, 389649027, 389649014, 389648990, 389649022, 389649023, 389648992, 389649005, 389649006, 389649025, 389648998, 389649017, 389649013, 389649001, 389649024, 389649020, 389649010, 389649012, 389648991, 389649029, 389648994, 389648997, 389649003};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {389649019};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> numbers = {10, 13, 36, 22, 9, 5, 26, 28, 25, 37, 16, 8, 24, 35, 6, 19, 23, 12, 11, 27, 3, 31, 29, 14, 34, 15, 33, 17, 32, 18, 30, 20, 7, 21};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> numbers = {8050701, 8050693, 8050700, 8050690, 8050705, 8050697, 8050675, 8050699, 8050676, 8050691, 8050706, 8050674, 8050684, 8050683, 8050681, 8050686, 8050682, 8050685, 8050680, 8050677, 8050692, 8050702, 8050695, 8050673, 8050698, 8050689, 8050694, 8050678, 8050707, 8050687, 8050703, 8050688, 8050696, 8050704};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8050679};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> numbers = {731, 725, 738, 728, 726, 733, 718, 721, 736, 732, 722, 714, 737, 717, 743, 735, 744, 734, 720, 723, 727, 713, 739, 729, 742, 741};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> numbers = {9126, 9104, 9103, 9081, 9080, 9110, 9125, 9123, 9083, 9098, 9090, 9109, 9099, 9112, 9111, 9107, 9084, 9097, 9106, 9105, 9108, 9124, 9085, 9087, 9117, 9086, 9101, 9120, 9089, 9093, 9082, 9122, 9115, 9096, 9114, 9095, 9119, 9118, 9102, 9092, 9094, 9116, 9113, 9121, 9091, 9100};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9088};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> numbers = {45534, 45539, 45544, 45530, 45517, 45525, 45526, 45536, 45519, 45538, 45524, 45518, 45532, 45522, 45535, 45513, 45531, 45543, 45542, 45537, 45514, 45523, 45516, 45540, 45533, 45527, 45515, 45521, 45529, 45520, 45528, 45545};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {45541};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> numbers = {4, 6, 1, 5, 2, 3, 8, 7};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> numbers = {87, 49, 65, 46, 77, 57, 53, 71, 56, 70, 52, 84, 48, 86, 62, 76, 81, 73, 51, 59, 47, 64, 78, 80, 72, 55, 58, 85, 82, 69, 67, 79, 74, 54, 50, 83, 68, 61, 66, 88, 63, 60};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {75};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> numbers = {38939, 38954, 38948, 38951, 38961, 38947, 38960, 38952, 38958, 38956, 38942, 38953, 38950, 38955, 38959, 38946, 38941, 38943, 38957, 38962, 38944, 38938, 38940, 38945};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38949};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> numbers = {18622, 18625, 18609, 18629, 18621, 18616, 18633, 18602, 18626, 18604, 18613, 18632, 18614, 18630, 18605, 18638, 18600, 18606, 18615, 18639, 18597, 18624, 18618, 18634, 18635, 18636, 18610, 18631, 18620, 18611, 18607, 18612, 18617, 18608, 18598, 18627, 18637, 18628, 18601, 18623, 18640, 18619, 18603};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {18599};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> numbers = {571, 596, 570, 580, 608, 600, 597, 609, 574, 581, 598, 613, 594, 604, 601, 603, 612, 595, 592, 591, 610, 606, 599, 605, 602, 611, 590, 572, 576, 579, 573, 585, 586, 582, 607, 583, 593, 577, 588, 584, 587, 578, 575};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {589};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> numbers = {1, 3, 2, 4, 5};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> numbers = {266, 275, 273, 255, 250, 254, 269, 276, 274, 267, 265, 272, 268, 271, 249, 256, 253, 248, 246, 263, 259, 264, 257, 247, 252, 251, 262, 258, 270, 260, 245};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {261};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> numbers = {1};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> numbers = {72263, 72267, 72280};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> numbers = {92095, 92120, 92118, 92107, 92098, 92124, 92116, 92125, 92105, 92110, 92093, 92102, 92109, 92119, 92128, 92131, 92097, 92111, 92096, 92100, 92121, 92113, 92126, 92117, 92130, 92099, 92114, 92122, 92103, 92123, 92127, 92106, 92104, 92133, 92132, 92094, 92112, 92101, 92108, 92115};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {92129};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> numbers = {71052199, 71052200, 71052206, 71052203, 71052220, 71052186, 71052183, 71052215, 71052195, 71052194, 71052202, 71052176, 71052174, 71052208, 71052192, 71052190, 71052188, 71052221, 71052197, 71052218, 71052185, 71052180, 71052207, 71052217, 71052214, 71052210, 71052193, 71052209, 71052222, 71052196, 71052198, 71052211, 71052181, 71052213, 71052205, 71052216, 71052182, 71052179, 71052175, 71052177, 71052189, 71052187, 71052212, 71052201, 71052178, 71052191, 71052184, 71052219};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {71052204};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> numbers = {70011065, 70011047, 70011053, 70011051, 70011050, 70011062, 70011060, 70011055, 70011066, 70011049, 70011039, 70011041, 70011058, 70011064, 70011040, 70011067, 70011044, 70011046, 70011054, 70011048, 70011059, 70011057, 70011056, 70011068, 70011069, 70011042, 70011045, 70011061, 70011043, 70011063};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70011052};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> numbers = {855100506, 855100496, 855100509, 855100503, 855100481, 855100491, 855100490, 855100498, 855100502, 855100487, 855100499, 855100488, 855100493, 855100483, 855100485, 855100486, 855100497, 855100500, 855100482, 855100494, 855100501, 855100484, 855100504, 855100505, 855100489, 855100495, 855100507, 855100492};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {855100508};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> numbers = {665428735, 665428737, 665428738, 665428736};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {665428734, 665428739};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> numbers = {84477738, 84477731, 84477726, 84477736, 84477737, 84477740, 84477742, 84477741, 84477733, 84477739, 84477743, 84477744, 84477734, 84477730, 84477727, 84477729, 84477728, 84477745, 84477732, 84477735};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {84477725, 84477746};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> numbers = {75334425, 75334431, 75334429, 75334430, 75334427, 75334432, 75334428, 75334426};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {75334424, 75334433};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> numbers = {4962847, 4962870, 4962841, 4962858};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> numbers = {759626, 759638, 759623, 759632, 759635, 759642, 759627, 759622, 759618, 759650, 759629, 759621, 759648, 759649};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> numbers = {58362553, 58362557, 58362568, 58362551, 58362559, 58362576, 58362577, 58362584, 58362594};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> numbers = {3};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> numbers = {38315, 38297, 38272, 38270, 38306, 38289, 38298, 38301, 38291, 38299, 38276, 38277, 38302, 38282, 38308, 38287, 38307, 38293, 38317, 38275, 38311, 38269, 38294, 38305, 38296, 38292, 38288, 38278, 38281, 38271, 38285, 38314, 38303, 38283, 38280, 38295, 38273, 38312, 38284, 38274, 38310, 38300, 38290, 38316, 38309, 38286, 38304, 38279};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {38313};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> numbers = {798803, 798814, 798809, 798810, 798804, 798812, 798808, 798807, 798802, 798815, 798813, 798805, 798811, 798806};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {798801, 798816};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> numbers = {49, 63, 51, 69, 59, 72, 68, 57, 55, 54, 61, 65, 60, 53, 75, 56, 67, 50, 52, 71, 62, 48, 64, 74, 73, 47, 58, 66, 70};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {46, 76};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> numbers = {2};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> numbers = {847193, 847196, 847202, 847201, 847191, 847197, 847194, 847192, 847195, 847203, 847200, 847198};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {847199};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> numbers = {1, 4, 3};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> numbers = {95657, 95626, 95615, 95611, 95646, 95654, 95648, 95610, 95639, 95634, 95642, 95655, 95650, 95638, 95647, 95652, 95628, 95653, 95644, 95629, 95624, 95656, 95651, 95627, 95619, 95617, 95614, 95649, 95612, 95643, 95618, 95620, 95616, 95645, 95632, 95622, 95640, 95658, 95633, 95659, 95636, 95635, 95621, 95630, 95625, 95613, 95631, 95641, 95623};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {95637};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> numbers = {8847, 8844, 8870, 8837, 8857, 8858, 8834, 8852, 8835, 8845, 8851, 8868, 8859, 8865, 8836, 8849, 8839, 8861, 8873, 8840, 8830, 8855, 8872, 8833, 8866, 8829, 8867, 8877, 8846, 8853, 8871, 8854, 8838, 8850, 8856, 8862, 8831, 8863, 8841, 8848, 8876, 8843, 8874, 8864, 8832, 8842, 8860, 8869};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8875};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> numbers = {9682, 9679, 9680, 9681, 9678};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9677, 9683};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> numbers = {231602878, 231602853, 231602891, 231602861, 231602850, 231602875, 231602845, 231602857, 231602873, 231602884, 231602886, 231602876, 231602881, 231602851, 231602883, 231602864, 231602890, 231602868, 231602866, 231602871, 231602882, 231602863, 231602888, 231602872, 231602852, 231602865, 231602893, 231602860, 231602858, 231602885, 231602846, 231602867, 231602869, 231602854, 231602887, 231602856, 231602848, 231602859, 231602879, 231602849, 231602870, 231602855, 231602880, 231602862, 231602874, 231602892, 231602877, 231602847};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {231602889};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> numbers = {1290, 1274, 1277, 1270, 1271, 1283, 1284, 1285, 1278, 1291, 1281, 1280, 1276, 1275, 1282, 1288, 1272, 1292, 1273, 1289, 1279, 1287, 1286};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1269, 1293};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> numbers = {815268, 815275, 815262, 815304, 815270, 815286, 815276, 815281, 815263, 815265, 815277, 815294, 815266, 815283, 815290, 815272, 815280, 815278, 815271, 815299, 815307, 815279, 815305, 815284, 815261, 815292, 815297, 815273, 815274, 815285, 815295, 815282, 815302, 815267, 815264, 815289, 815301, 815269, 815293, 815291, 815303, 815298, 815308, 815309, 815306, 815300, 815288, 815296};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {815287};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> numbers = {282534, 282540, 282519, 282517, 282528, 282533, 282544, 282526, 282527, 282537, 282516, 282522, 282529, 282545, 282521, 282518, 282538, 282520, 282525, 282536, 282523, 282543, 282535, 282539, 282524, 282532, 282530, 282531, 282542};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {282541};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> numbers = {5, 17, 8, 15, 25, 14, 18, 27, 26, 31, 9, 12, 13, 11, 4, 24, 10, 22, 16, 19, 23, 28, 20, 33, 29, 34, 32, 6, 30, 21};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> numbers = {5618, 5613, 5625, 5612, 5630, 5605, 5616, 5631, 5629, 5628, 5634, 5622, 5627, 5619, 5620, 5610, 5615, 5626, 5608, 5607, 5633, 5623, 5621, 5611, 5617, 5614, 5606, 5609, 5624};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5632};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> numbers = {10463222, 10463220, 10463227, 10463223, 10463229, 10463226, 10463225, 10463224, 10463221, 10463228};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10463219, 10463230};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> numbers = {582388415, 582388410, 582388416, 582388413, 582388409, 582388418, 582388411, 582388408, 582388412, 582388407, 582388405, 582388422, 582388414, 582388420, 582388406, 582388401, 582388403, 582388404, 582388419, 582388421, 582388402};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {582388417};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> numbers = {1};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> numbers = {1393775, 1393776, 1393774, 1393773};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1393772, 1393777};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> numbers = {228, 235, 246, 226, 222, 223, 251, 249, 219, 227, 217, 240, 248, 211, 213, 231, 225, 216, 250, 229, 233, 234, 212, 239, 244, 224, 245, 243, 237, 242, 236, 232, 230, 252, 253, 221, 220, 241, 218, 238, 247, 215};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {214};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> numbers = {180548, 180554, 180564, 180563, 180552, 180565, 180556, 180566, 180555, 180557, 180561, 180558, 180559, 180546, 180562, 180545, 180553, 180547, 180549, 180550, 180560};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {180551};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> numbers = {4715914, 4715926, 4715930, 4715915, 4715913, 4715924, 4715927, 4715923, 4715912, 4715918, 4715925, 4715919, 4715917, 4715929, 4715921, 4715928, 4715922};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> numbers = {720993};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {720992, 720994};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> numbers = {894438, 894442, 894432, 894435, 894444, 894433, 894440, 894429, 894430, 894428, 894436, 894443, 894434, 894439, 894441, 894431};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {894437};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> numbers = {23, 6, 22, 1, 26, 20, 24, 14, 11, 2, 27, 12, 9, 3, 19, 18, 7, 25, 16, 15, 31, 10, 29, 30, 28, 13, 5, 21, 4, 17};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> numbers = {486591111, 486591112, 486591120, 486591131, 486591132, 486591115, 486591118, 486591126, 486591124, 486591123, 486591119, 486591130, 486591117, 486591135, 486591109, 486591113, 486591108, 486591125, 486591134, 486591122, 486591129, 486591127, 486591114, 486591121, 486591128, 486591116, 486591110};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {486591133};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> numbers = {2626117, 2626098, 2626105, 2626084, 2626114, 2626096, 2626082, 2626122, 2626092, 2626121, 2626086, 2626110, 2626093, 2626080, 2626103, 2626106, 2626077, 2626090, 2626124, 2626102, 2626095, 2626118, 2626107, 2626113, 2626100, 2626120, 2626078, 2626089, 2626099, 2626109, 2626111, 2626104, 2626088, 2626081, 2626119, 2626112, 2626101, 2626123, 2626075, 2626115, 2626087, 2626079, 2626097, 2626076, 2626083, 2626108, 2626116, 2626085, 2626094, 2626091};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2626074, 2626125};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> numbers = {569198432, 569198466, 569198442, 569198457, 569198464, 569198429, 569198435, 569198438, 569198427, 569198452, 569198465, 569198448, 569198459, 569198453, 569198431, 569198451, 569198443, 569198458, 569198454, 569198461, 569198445, 569198463};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> numbers = {5516, 5520, 5526, 5513, 5519, 5515, 5522, 5527, 5528, 5523, 5521, 5517, 5518, 5514, 5525};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5524};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> numbers = {213117492, 213117491, 213117495, 213117494, 213117493, 213117490};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {213117489, 213117496};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> numbers = {73298033, 73298035, 73298032};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {73298034};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> numbers = {1};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> numbers = {907237816, 907237821, 907237809, 907237815, 907237806, 907237803, 907237818, 907237811, 907237800, 907237807, 907237804, 907237808, 907237814, 907237802, 907237810, 907237822, 907237817, 907237805, 907237812, 907237819, 907237813, 907237801};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {907237820};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> numbers = {1, 1000000000};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> numbers = {1, 2, 4, 6, 8};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> numbers = {999999996, 999999997, 999999998, 1000000000, 777777777, 565656565};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> numbers = {1000001, 1000002};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1000000, 1000003};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> numbers = {6, 6};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> numbers = {8, 6, 4};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> numbers = {2, 2};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> numbers = {1, 2, 2};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> numbers = {1, 1};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> numbers = {1, 1, 2, 2};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> numbers = {3, 3};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> numbers = {1, 3, 4, 6};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> numbers = {2, 2, 2};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> numbers = {1, 2, 4, 5, 7, 8};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> numbers = {1000000000};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {999999999, 1000000001};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> numbers = {2, 3, 4, 6, 8, 9, 10};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> numbers = {1, 2};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> numbers = {1, 2, 3, 4, 5};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> numbers = {1};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> numbers = {1, 3, 5, 7};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> numbers = {3};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> numbers = {1, 3, 5};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> numbers = {2, 4, 6, 8};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> numbers = {2, 3, 4, 6, 6};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> numbers = {5, 5, 5};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> numbers = {1, 2, 1000000000};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> numbers = {1, 3, 5, 6, 7};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> numbers = {3, 6, 4, 5, 5, 6};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> numbers = {100, 100, 100};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> numbers = {3, 1};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> numbers = {1, 2, 1};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> numbers = {12, 14, 16};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> numbers = {3, 5, 7, 9};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> numbers = {3, 4, 6, 7, 9, 10};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> numbers = {1, 3, 5, 7, 9};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> numbers = {2, 2, 4};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> numbers = {2, 4, 4};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> numbers = {1, 2, 4, 6};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> numbers = {1, 2, 3};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> numbers = {2, 3, 3, 5};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> numbers = {1, 2, 4, 6, 8, 9};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> numbers = {1, 2, 3, 5, 6, 7, 9, 10};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> numbers = {1, 2, 3, 5, 6, 7, 8, 10, 11, 12};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> numbers = {2, 4, 6};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> numbers = {1, 2, 4, 5, 6, 8, 9};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> numbers = {1, 2, 3, 4};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5};
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> numbers = {999999996, 999999997, 999999998, 1000000000, 777777777, 565656565, 111111111};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> numbers = {1, 1, 4};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> numbers = {1, 1, 1};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> numbers = {5, 7, 8, 10, 11};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> numbers = {3, 3, 5, 6};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> numbers = {1, 4, 4, 5};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> numbers = {98, 100, 101, 101, 101};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> numbers = {1, 1, 3};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> numbers = {5, 3, 7, 9, 11};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> numbers = {4, 4, 4, 4};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> numbers = {8, 8, 8};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> numbers = {2, 4, 5, 5, 6};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> numbers = {1, 4, 5, 6, 7};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10};
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> numbers = {1000000000, 1};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> numbers = {1, 4, 4};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> numbers = {3, 5, 7};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> numbers = {1, 2, 4};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> numbers = {1, 1, 1, 4};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> numbers = {3, 5, 6, 7, 9, 10};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> numbers = {101, 101, 101};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> numbers = {10, 2, 3, 6, 4, 7, 9};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> numbers = {3, 3, 5};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> numbers = {10, 7, 12, 8, 11, 13, 15};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> numbers = {2, 2, 2, 2, 2};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> numbers = {1, 4, 4, 2};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> numbers = {5, 6, 8, 10};
    ConsecutiveNumbers* pObj = new ConsecutiveNumbers();
    clock_t start = clock();
    vector<int> result = pObj->missingNumber(numbers);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22662666&rd=12174&pm=8302
********************************************************************************
#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
 
#include <list>
#include <map>
#include <set>
#include <deque>
#include <stack>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <iomanip>
#include <ctime>
 
using namespace std;
 
typedef vector<int> VI;
typedef vector<string> VS;
typedef vector<VI> VVI;
typedef pair<int,int> pii;
 
typedef long long LL;
 
#define sz size()
#define mp make_pair
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define FOR(i,a,b) for(typeof(a) i=a;i<b;++i)
#define rep(i,n) FOR(i,0,n)
#define dbg(x) cout<<#x<<"="<<x<<endl
 
class ConsecutiveNumbers {
public:
  vector <int> missingNumber(vector <int>);
};
 
vector <int> ConsecutiveNumbers::missingNumber(vector <int> numbers) {
sort(all(numbers));
//int start=numbers[0];
int fg=0;
VI poss;
for(int i=1;i<numbers.sz;i++)
{
  if(numbers[i]!=numbers[i-1]+1)
  {
    if(numbers[i]==numbers[i-1]+2 && fg==0) 
    {
      fg=1; poss.pb(numbers[i]-1);
    }
    else  { poss.clear(); return poss;}
    
  }
}
 
if(poss.sz==1) return poss;
else 
{
  if(numbers[0]>1) poss.pb(numbers[0]-1);
  poss.pb(numbers[numbers.sz-1]+1);
  return poss;
}
    
    
  
  
  
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/