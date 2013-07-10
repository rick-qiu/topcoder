/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4487
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

class Flush {
public:
    double size(vector<int> suits, int number);
};

double Flush::size(vector<int> suits, int number) {
    double ret;
    return ret;
}


int test0() {
    vector<int> suits = {2, 2, 2, 2};
    int number = 2;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1428571428571428;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> suits = {1, 4, 7, 10};
    int number = 22;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> suits = {13, 13, 13, 13};
    int number = 49;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> suits = {13, 13, 13, 13};
    int number = 26;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 8.351195960938014;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> suits = {13, 13, 13, 13};
    int number = 0;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
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
    vector<int> suits = {8, 2, 6, 13};
    int number = 5;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 2.6879457707043914;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> suits = {2, 1, 7, 8};
    int number = 7;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 3.692684766214178;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> suits = {11, 10, 10, 13};
    int number = 44;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> suits = {13, 10, 9, 2};
    int number = 23;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 9.064637860149622;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> suits = {0, 4, 0, 11};
    int number = 15;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> suits = {11, 10, 0, 5};
    int number = 19;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 8.539715719063546;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> suits = {3, 3, 4, 12};
    int number = 21;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 11.454545454545455;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> suits = {8, 3, 6, 5};
    int number = 13;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 5.069675525712677;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> suits = {13, 1, 1, 6};
    int number = 13;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 8.053943682736252;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> suits = {12, 6, 2, 7};
    int number = 16;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 7.193079864502667;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> suits = {4, 7, 9, 11};
    int number = 23;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 8.41418898491201;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> suits = {0, 7, 0, 0};
    int number = 5;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 5.0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> suits = {5, 2, 2, 12};
    int number = 15;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 8.571428571428571;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> suits = {3, 13, 5, 8};
    int number = 24;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 10.758620689655173;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> suits = {8, 9, 4, 2};
    int number = 9;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 4.169051261028647;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> suits = {12, 4, 12, 3};
    int number = 1;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> suits = {8, 13, 4, 6};
    int number = 27;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 11.32258064516129;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> suits = {13, 11, 6, 6};
    int number = 11;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 4.674274494078361;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> suits = {11, 4, 13, 9};
    int number = 5;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 2.5291433526727642;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> suits = {6, 12, 9, 12};
    int number = 29;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 9.793681675360492;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> suits = {6, 9, 3, 3};
    int number = 2;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2714285714285714;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> suits = {9, 3, 5, 3};
    int number = 2;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 1.2736842105263158;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> suits = {6, 0, 6, 2};
    int number = 2;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 1.3406593406593406;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> suits = {7, 13, 3, 7};
    int number = 7;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4360207289517635;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> suits = {2, 3, 11, 9};
    int number = 0;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> suits = {13, 13, 13, 13};
    int number = 26;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 8.351195960938014;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> suits = {13, 13, 13, 13};
    int number = 49;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 13.0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> suits = {4, 4, 4, 4};
    int number = 4;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 1.9692307692307693;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> suits = {13, 13, 13, 13};
    int number = 47;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 12.73625450180072;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> suits = {1, 2, 0, 0};
    int number = 3;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> suits = {11, 7, 4, 1};
    int number = 11;
    Flush* pObj = new Flush();
    clock_t start = clock();
    double result = pObj->size(suits, number);
    clock_t end = clock();
    delete pObj;
    double expected = 5.46901953881359;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=301937&rd=7220&pm=4487
********************************************************************************
// Powered by photosynthesis
// FilterC++
 
#line 5 "Flush.cpp"
 
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <numeric>
#include <sstream>
#include <utility>
#include <map>
 
#define fu(i,m,n) for(typeof(m) i=m; i!=(n); i++)
#define fd(i,n) for(int i=(n)-1; i>=0; i--)
#define fa(i,x) fu(i,(x).begin(),(x).end())
 
#define i64 long long
using namespace std;
 
double bi(double a, double b) {
  if(b<0 || b>a) return 0;
  if(b==0) return 1;
  return bi(a-1,b-1)*a/b;
}  
 
struct Flush { 
  double size(vector <int> s, int n) { 
    double ret=0;
    double y=0;
    fu(a,0,s[0]+1)
    fu(b,0,s[1]+1)
    fu(c,0,s[2]+1)
    fu(d,0,s[3]+1)
    if(a+b+c+d==n){
      double t= 1.0*bi(s[0],a)*bi(s[1],b)*bi(s[2],c)*bi(s[3],d);
      ret += max(max(a,b),max(c,d))*t;
      y+=t;
    }
    return ret/y;
 
 
  } 
 
  
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/