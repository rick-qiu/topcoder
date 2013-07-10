/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12379
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

class Mountains {
public:
    int countPlacements(vector<int> heights, vector<string> visibility);
};

int Mountains::countPlacements(vector<int> heights, vector<string> visibility) {
    int ret;
    return ret;
}


int test0() {
    vector<int> heights = {2, 3, 2};
    vector<string> visibility = {"------", "XXXX--", "---XXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> heights = {4, 3, 4};
    vector<string> visibility = {"XXXXX--------", "----------XXX", "----XXXXXXX--"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> heights = {8, 2, 9, 3, 10};
    vector<string> visibility = {"X------", "-------", "------X", "-------", "XXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> heights = {20, 20, 20, 20, 20, 20, 45, 50, 49, 50};
    vector<string> visibility = {"-------------------", "-------------------", "-------------------", "-------------------", "-------------------", "-------------------", "-------------------", "------------XXXXXXX", "XXXXXXX------------", "XXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 973726691;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> heights = {19, 17, 16, 17, 16, 16, 16};
    vector<string> visibility = {"-------XXXXX---", "-------------XX", "-----------XXXX", "XXX------------", "XXXXX----------", "--------XXXXXXX", "XXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> heights = {18, 19, 19, 19, 18, 17, 18, 18, 16};
    vector<string> visibility = {"XXX------------", "---XXXX--------", "-------------XX", "----------XX---", "-----------XXXX", "XXX------------", "---------XXXXXX", "-----XXXXXXXXXX", "XXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> heights = {42, 40, 47, 49, 48, 50, 48, 48, 47, 50};
    vector<string> visibility = {"--------------------------------------------------", "--------------------------------------------------", "XXXXX---------------------------------------------", "--------------------------------------------XXXXXX", "XXXXXXXXXX----------------------------------------", "XXXXXXXXXXXXXXXX----------------------------------", "--------------------------------------XXXXXXXXXXXX", "--------------------------------------------------", "-----------------------------XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 2147405;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> heights = {48, 47, 49, 45, 48, 47, 47, 47, 46, 48};
    vector<string> visibility = {"--------------------------------------------------", "--------------------------------------------------", "XXXXXXX-------------------------------------------", "--------------------------------------------------", "XXXXXXXXXXXXXX------------------------------------", "XXXXXXXXXXXXXXXXXXXXXX----------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-------------------", "---------------------------------------------XXXXX", "-----------------------------------------XXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 496271;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> heights = {50, 47, 48, 49, 49, 49, 49, 49, 50, 49};
    vector<string> visibility = {"----XXXXX-----------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------XXXXXX", "------------------------------------XXXXXXXXXXXXXX", "----------------------------XXXXXXXXXXXXXXXXXXXXXX", "----------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXX------------------------------------------", "---------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 74907;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> heights = {1, 1, 1, 1, 1, 1, 1, 1, 1, 50};
    vector<string> visibility = {"--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 121093759;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> heights = {50, 46, 43, 38, 34, 31, 28, 22, 18, 14};
    vector<string> visibility = {"XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 191234210;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> heights = {50, 50, 50, 50, 50};
    vector<string> visibility = {"XX-----------------------", "---------------------XXXX", "XXXXXXXXX----------------", "-----------------XXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> heights = {50, 50, 50, 50, 50};
    vector<string> visibility = {"XX-----------------------", "---------------------XXXX", "XXXX---------------------", "--------------XXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> heights = {50, 50};
    vector<string> visibility = {"--------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> heights = {50, 50, 50, 50, 50, 50, 50, 50, 50, 50};
    vector<string> visibility = {"XX------------------------------------------------", "XXXX----------------------------------------------", "-----------------------------------------------XXX", "XXXXXXX-------------------------------------------", "XXXXXXXXXXXXX-------------------------------------", "XXXXXXXXXXXXXXXXXXX-------------------------------", "--------------------------------------------XXXXXX", "-----------------------------------XXXXXXXXXXXXXXX", "-------------------------XXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 384;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> heights = {11, 45, 28, 19, 3, 28, 37, 25, 50};
    vector<string> visibility = {"---------------------------------------------", "---------------------------------------------", "---------------------------------------------", "---------------------------------------------", "---------------------------------------------", "---------------------------------------------", "XXXXXXXXXX-----------------------------------", "---------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 619801388;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> heights = {45, 38, 32, 4, 22, 19, 7};
    vector<string> visibility = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX---------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX---------", "-------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX---------------", "-----------------XXXXXXXXXXXXXXXXXXXXXXXXXX", "---------------------------------XXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 1032;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> heights = {26, 6, 18, 5, 34, 2, 5};
    vector<string> visibility = {"----------------------------------------", "----------------------------------------", "----------------------------------------", "---------------------------------XXX----", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-----", "--------------------------------XXX-----", "-----------------------------------XXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 6479;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> heights = {11};
    vector<string> visibility = {"-----------------------XXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> heights = {31, 42};
    vector<string> visibility = {"---------------------XXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> heights = {15, 48, 21, 8, 39, 24, 16};
    vector<string> visibility = {"------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "------------------------------------", "------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX---", "XXXXXXXXXXXXXXXXXX------------------"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 14243820;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> heights = {38, 45, 36, 21, 42, 32, 26};
    vector<string> visibility = {"------------------------------------", "--------------XXXXXXXXXXXXXXXXXXXXXX", "-------------------------XXXXXXXXXXX", "------------------------------------", "XXXXXXXXXXXXXXXXXX------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-----", "------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 6120;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> heights = {46, 14, 14, 38, 7, 20, 33};
    vector<string> visibility = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "------------------------------------------", "------------------------------------------", "-------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "----------------------------------------XX", "------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 3762612;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> heights = {2, 5, 5, 20, 7, 6, 24, 42, 34};
    vector<string> visibility = {"-----------------------------------------------", "-----------------------------------------------", "-----------------------------------------------", "-----------------------------------------------", "-----------------------------------------------", "-----------------------------------------------", "-----------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXX------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 728152763;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> heights = {26, 12};
    vector<string> visibility = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "----------XXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> heights = {43, 36, 50, 50, 30, 16};
    vector<string> visibility = {"XXXXXXXXXXXXXXX------------------------", "XXXXXXXXXX-----------------------------", "------------------------------XXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "----------------XXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 480;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> heights = {10, 11, 27, 34, 30, 50, 49, 40, 25};
    vector<string> visibility = {"---------------------------------------", "---------------------------------------", "---------------------------------------", "---------------------------------------", "---------------------------------------", "-----------------------XXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX------"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 311531415;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> heights = {9, 44, 21, 50, 20, 14};
    vector<string> visibility = {"-------------------------------------------------", "------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-----", "-------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX----------", "------------------------------------XXXXXXXXXXXXX", "----------------XXXXXXXXXXXXXXXXXXXXXXXXXXX------"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 5929;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> heights = {30, 24};
    vector<string> visibility = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 176;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> heights = {43, 29, 46, 27, 36, 38, 42};
    vector<string> visibility = {"---------------XXXXXXX--------------------------", "------------------------------------------------", "-----------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "------------------------------------------------", "-----------------------XXXXXXXXXXXXXXXXXXXXXXXXX", "----------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-----"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 13873;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> heights = {7, 22, 31, 34, 47, 28, 41, 6, 40};
    vector<string> visibility = {"-------------------------------------------", "-------------------------------------------", "-------------------------------------------", "-------------------------------------------", "-----------------XXXXXXXXXXXXXXXXXXXXX-----", "-------------------------------------------", "--------------------------XXXXXXXXXXXXXXXXX", "-------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 565718445;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> heights = {4, 31, 19, 31, 9, 38};
    vector<string> visibility = {"-----------------------------------", "------------------------XXXXXXXXXXX", "-----------------------------------", "-----------------------------------", "-----------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 12186300;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> heights = {23, 14, 49, 41, 15, 41};
    vector<string> visibility = {"------------------------------------------------", "------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX-------------------", "----------------------------XXXXXXXXXXXXXXXXXXXX", "--------------------------------------------XXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 73728;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> heights = {3, 46, 50};
    vector<string> visibility = {"--------------------------------------", "-----------XXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 494;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> heights = {27, 21, 42, 1, 17};
    vector<string> visibility = {"---------------------------------------", "---------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "---------------------------------------", "XXXXXXXXXXXXXXXXXXXXXX-----------------"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 583550;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> heights = {29, 47, 39, 23};
    vector<string> visibility = {"------------------------------------------------", "-------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX---------------"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> heights = {26, 49, 5, 34, 13, 46, 35, 28};
    vector<string> visibility = {"-----------------------------------", "--------------XXXXXXXXXXXXXXXXXXXXX", "-----------------------------------", "-----------------------------------", "-----------------------------------", "XXXXXXXXXXXXXXXXXXXX---------------", "----------------XXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 45704750;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> heights = {35, 25, 45, 24, 40, 1, 16, 28, 15, 44};
    vector<string> visibility = {"--------------XXXXX-------------------------", "--------------------------------------------", "--------------------------------XXXXXXXXXXXX", "--------------------------------------------", "XXXXXXXXXXXXXXXX----------------------------", "--------------------------------------------", "--------------------------------------------", "--------------------------------------------", "--------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 199451580;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> heights = {45, 43, 30};
    vector<string> visibility = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXX----", "XXXXXXXXXXXXXXXXXXXXXXXXXXX-----", "-XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> heights = {17, 22, 22, 12};
    vector<string> visibility = {"----------------XXXXXXXX--------------------", "-------------------XXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXX-----------------", "XXXXXXXXXXXXXXXXXXXXXX----------------------"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> heights = {19, 12, 35, 26, 4, 39, 9, 40, 27};
    vector<string> visibility = {"-------------------------------------------------", "-------------------------------------------------", "-------------------------------------------------", "XXXXXXXXX----------------------------------------", "-------------------------------------------------", "------------------------------XXXXXXXXXXXXXXXXXXX", "-------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-----------", "-------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 670952247;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> heights = {42, 14, 32, 27, 44, 25};
    vector<string> visibility = {"XXXXXXX------------------------", "-------------------------------", "-------------------------------", "-----------------------------XX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 95418;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> heights = {2, 9, 33, 43, 43, 28};
    vector<string> visibility = {"-----------------------------------", "-----------------------------------", "-----------------------------------", "---------------------XXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-----"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 814625;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> heights = {27, 22, 46, 10};
    vector<string> visibility = {"----------------------------------", "----------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXX----------------------"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 30124;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> heights = {17, 16, 40, 39};
    vector<string> visibility = {"-------------------------------------------------", "-------------------------------------------------", "--------------------------------XXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 71775;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> heights = {35, 34, 2, 20, 33, 12};
    vector<string> visibility = {"-----------------------------------XXXXXXXXXXXX", "-------------------------XXXXXXXXXXXXXXXXXXXXXX", "-----------------------------------------------", "-----------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXX-------------------------------"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 48222;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> heights = {18, 32, 25, 43, 9};
    vector<string> visibility = {"--------------------------------------------", "--------------------------------------------", "XXXXXXXX------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "-XXXXXXXXXXXXXXXXX--------------------------"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 15995;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> heights = {19, 29, 47, 12, 9, 33};
    vector<string> visibility = {"-----------------------------------------", "-----------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXX---------------", "-----------------------------------------", "-----------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 22690876;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> heights = {38};
    vector<string> visibility = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 28;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> heights = {46, 22, 20, 32, 29};
    vector<string> visibility = {"----XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "------------------------------------", "------------------------------------", "XXXXXXXXXXXXXXX---------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 14534;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> heights = {23, 17, 42, 21, 30, 19, 7, 23};
    vector<string> visibility = {"-------------------------------", "-------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "-------------------------------", "XXXXXXXXXX---------------------", "-------------------------------", "-------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 260590698;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> heights = {17, 46, 18};
    vector<string> visibility = {"-------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 4795;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> heights = {28, 1};
    vector<string> visibility = {"----XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "---------X----------------------------"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> heights = {25, 2, 45};
    vector<string> visibility = {"-------------------------------------XXXXXX", "-------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 516;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> heights = {23, 2, 31, 18, 46, 24, 8};
    vector<string> visibility = {"---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXX-----------", "------------------XXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 42065694;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> heights = {17, 10, 16, 23};
    vector<string> visibility = {"--------------------XXXXXXXXXXX", "-------------------------------", "-------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 4005;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> heights = {47, 28, 3, 29, 37, 16, 1};
    vector<string> visibility = {"XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "---------------------------------", "---------------------------------", "XXXXXXXXXXXXXXXXX----------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX--", "-------------------------X-------"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 90255;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> heights = {34, 43, 10, 23, 18, 21};
    vector<string> visibility = {"--------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXX--------------------------------------------", "--------------------XXXXXXXXXXXXXX----------------", "-XXXXXXXXXXXXXXXXXXXXXXXXXX-----------------------", "-------------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 627;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> heights = {41, 41, 22, 4, 17};
    vector<string> visibility = {"----------------------------XXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-----", "------------------------XXXXXXXXXXXXXXXXXXXX", "--------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX---------------"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 208;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> heights = {9, 50, 42, 25};
    vector<string> visibility = {"------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-----", "-------------XXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX-"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 144;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> heights = {50, 22, 42, 11, 15, 42, 3};
    vector<string> visibility = {"---------------------------XXXXXXXXXXXXXXXXXXXXXX", "-------------------------------------------------", "-----------------------XXXXXXXXXXXXXXXXXXXXXXXXXX", "-------------------------------------------------", "-------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--------------------------XXXXX------------------"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 1687756;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> heights = {40, 26, 28, 39, 33, 10};
    vector<string> visibility = {"------------XXXXXXXXXXXXXXXXXXX--------------", "---------------------------------------------", "---------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXX----------------------", "----XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "-----------------------------XXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 891;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> heights = {3, 26, 46, 33};
    vector<string> visibility = {"--------------------------------------------", "--------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 834592;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> heights = {39, 32, 22, 19};
    vector<string> visibility = {"XXXXXXXXXXXXXXXXXXXXXXXX-------", "XXXXXXXXXXXXXXXXXXXXX----------", "---------------------------XXXX", "-------XXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> heights = {15, 9, 28, 38, 19};
    vector<string> visibility = {"-----------------------------XXXX", "---------------------------------", "---------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXX----------"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 3646;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> heights = {5, 24, 20, 50, 33, 37, 6, 19, 8, 37};
    vector<string> visibility = {"-----------------------------------------------", "-----------------------------------------------", "-----------------------------------------------", "-------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "----------------XXXXXXXXXXXXXXXXXXXXXXXXXX-----", "-----------------------------------------------", "-----------------------------------------------", "-------------------------------XXXXXXXXXXXXXXXX", "-----------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX----------"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 878342580;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> heights = {23, 6, 10, 16, 46, 10, 34, 50, 32, 1};
    vector<string> visibility = {"-------------------------------------------------", "-------------------------------------------------", "-------------------------------------------------", "-------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX----------------", "-------------------------------------------------", "-------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "-----------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "-------------------------------------X-----------"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 177325403;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> heights = {9, 37, 22, 38, 5, 2, 19, 16, 20, 42};
    vector<string> visibility = {"---------------------------------", "XXXXXXXXXXXXXXXXXX---------------", "---------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXX---------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "---------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 494890282;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> heights = {48, 43, 16, 41, 36, 42, 9, 32, 24, 26};
    vector<string> visibility = {"XXXXXXXXXXXXXXXXXXXXXXXXX-------------------", "------------------------------------XXXXXXXX", "--------------------------------------------", "----XXXXXXXXXXXXXXXXXXX---------------------", "--------------------------------------------", "------------XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX", "--------------------------------------------", "XXXXXXXXXXXXXXXXX---------------------------", "--XXXXXXXXXXXXXXXXXXXXXXXX------------------", "---XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 402688;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> heights = {38, 45, 5, 34, 18, 17, 6, 45, 33, 38};
    vector<string> visibility = {"----------------------------------------XXXXXXXXXX", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "--------------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXX--------------------------", "-----------------------------------------XXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 837499928;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> heights = {10, 44, 39, 15, 14, 12, 4, 20, 27, 20};
    vector<string> visibility = {"----------------------------", "----------------XXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX", "----------------------------", "----------------------------", "----------------------------", "----------------------------", "----------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 7721926;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> heights = {31, 19, 33, 9, 44, 42, 10, 11, 27, 13};
    vector<string> visibility = {"---------------------------------------------", "---------------------------------------------", "----------------------XXXXXXX----------------", "---------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXX---------------------", "--------------------XXXXXXXXXXXXXXXXXXXXXXXXX", "---------------------------------------------", "---------------------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX----", "---XXXXXXXXXXXXXXXXXXXXXXXXX-----------------"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 241056000;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> heights = {43, 24, 1, 49, 48, 49, 2, 6, 27, 23};
    vector<string> visibility = {"-------------------------", "-------------------------", "-------------------------", "XXXXX--------------------", "XXXXXXXXXXX--------------", "XXXXXXXXXXXXXXXXXXXXXXXXX", "-------------------------", "-------------------------", "------------XXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 20703098;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> heights = {7, 48, 32, 41, 6, 27, 34, 45, 29, 41};
    vector<string> visibility = {"------------------------------", "XXXXXXXXXXXXXXX---------------", "------------------------------", "----------------------------XX", "------------------------------", "------------------------------", "------------------------------", "------------XXXXXXXXXXXXXXXXXX", "------------------------------", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 778079946;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> heights = {31, 40, 8, 36, 38, 43, 33, 30, 40, 28};
    vector<string> visibility = {"------------------------", "------------------------", "------------------------", "------------------------", "------------------------", "-----XXXXXXXXXXXXXXXXXXX", "XXXXXX------------------", "------------------------", "XXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 844019397;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> heights = {13, 2, 3, 2};
    vector<string> visibility = {"XXXXXXXXX", "-XXX-----", "----XXXXX", "-----XXX-"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> heights = {44, 49, 48, 48, 48, 48, 48, 47, 48, 48};
    vector<string> visibility = {"--------------------------------------------------", "XXXXXX--------------------------------------------", "------------------------------------------XXXXXXXX", "XXXXXXXXXXX---------------------------------------", "XXXXXXXXXXXXXXXX----------------------------------", "------------------------------------XXXXXXXXXXXXXX", "-------------------------------XXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXX------------------------------", "--------------------------XXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 40442;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> heights = {33, 49, 49, 48, 48, 49, 48, 48, 48, 48};
    vector<string> visibility = {"--------------------------------------------------", "XXXXXX--------------------------------------------", "-------------------------------------------XXXXXXX", "XXXXXXXXXXX---------------------------------------", "XXXXXXXXXXXXXXXX----------------------------------", "------------------------------------XXXXXXXXXXXXXX", "-------------------------------XXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX-----------------------------", "--------------------------XXXXXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 45200;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> heights = {20, 20, 20, 20, 20, 20, 45, 50, 49, 50};
    vector<string> visibility = {"-------------------", "-------------------", "-------------------", "-------------------", "-------------------", "-------------------", "-------------------", "------------XXXXXXX", "XXXXXXX------------", "XXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 973726691;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> heights = {4, 3, 4};
    vector<string> visibility = {"XXXXX--------", "----------XXX", "----XXXXXXX--"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> heights = {50, 46, 42, 38, 34, 30, 26, 22, 18, 14};
    vector<string> visibility = {"XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX", "XXXXXXXXXXXXXXXXXXXXX"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 243093525;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> heights = {50, 45, 40, 35, 30, 25, 20, 15, 10, 5};
    vector<string> visibility = {"XXXXXXXXXXXXX", "XXXXXXXXXXXXX", "XXXXXXXXXXXXX", "XXXXXXXXXXXXX", "XXXXXXXXXXXXX", "XXXXXXXXXXXXX", "XXXXXXXXXXXXX", "XXXXXXXXXXXXX", "XXXXXXXXXXXXX", "--XXXXXXXXX--"};
    Mountains* pObj = new Mountains();
    clock_t start = clock();
    int result = pObj->countPlacements(heights, visibility);
    clock_t end = clock();
    delete pObj;
    int expected = 115622639;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22724173&rd=15487&pm=12379
********************************************************************************
#include<algorithm>
#include<cassert>
#include<complex>
#include<cstdio>
#include<cstring>
#include<iostream>
#include<map>
#include<queue>
#include<set>
#include<sstream>
#include<stack>
#include<string>
#include<vector>
#define FORD(i,a,b) for(int i=(a);i>=(b);--i)
#define REP(i,n) for(int i=0;i<(n);++i)
#define FORE(i,c) for(__typeof(c.begin()) i=(c).begin();i!=(c).end();++i)
#define SZ(x) ((int)(x).size())
#define FI first
#define SE second
 
using namespace std;
typedef long long LL;
 
const int M = 1000*1000*1000+9;
map<vector<int> ,int> states[11];
 
class Mountains {
    public:
        int countPlacements(vector <int> heights, vector <string> visibility) {
            int k = SZ(heights);
            REP(i, k+1) states[i].clear();
            int w = SZ(visibility[0]);
            states[k][vector<int>(w, 0)] = 1;
            FORD(s, k-1, 0) {
                int h = heights[s];
                FORE(it, states[s+1]) {
                    vector<int> st = it->FI;
                    vector<int> st2 = st;
                    LL cnt = it->SE;
 
                    REP(i, w) {
                        int ok = true;
                        REP(j, w) {
                            st2[j] = max(st[j], h-abs(j-i));
                            if ((visibility[s][j] == 'X') ^ (st2[j] > st[j])) {
                                ok = false;
                                break;
                            }
                        }
                        if (ok) states[s][st2] = (states[s][st2] + cnt) % M;
                    }
                }
            }
            int res = 0;
            FORE(it, states[0]) {
                res = (res + it->SE) % M;
            }
            return res;
 
        }
 
};
 
 
 
 
// Powered by FileEdit
// Powered by moj 4.17 [modified TZTester]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/