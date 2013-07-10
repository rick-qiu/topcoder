/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11508
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

class NewItemShop {
public:
    double getMaximum(int swords, vector<string> customers);
};

double NewItemShop::getMaximum(int swords, vector<string> customers) {
    double ret;
    return ret;
}


int test0() {
    int swords = 1;
    vector<string> customers = {"8,1,80 16,100,11", "12,10,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 19.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int swords = 2;
    vector<string> customers = {"8,1,80 16,100,11", "12,10,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 21.8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int swords = 1;
    vector<string> customers = {"0,90,25 2,90,25 4,90,25 6,90,25", "7,100,80"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 90.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int swords = 3;
    vector<string> customers = {"17,31,41 20,59,26 23,53,5", "19,89,79", "16,32,38 22,46,26", "18,43,38 21,32,7"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 135.5121414;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int swords = 5;
    vector<string> customers = {"1,1,10", "2,2,9", "3,3,8", "4,4,7", "5,5,6", "6,6,5", "7,7,4", "8,8,3", "9,9,2", "10,10,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 2.1999744634845344;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int swords = 11;
    vector<string> customers = {"0,1,33 12,2,33", "1,3,33 13,4,33", "2,5,33 14,6,33", "3,7,33 15,8,33", "4,9,33 16,10,33", "5,11,33 17,12,33", "6,13,33 18,14,33", "7,15,33 19,16,33", "8,17,33 20,18,33", "9,19,33 21,20,33", "10,21,33 22,22,33", "11,23,33 23,24,33"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 98.85255290184591;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int swords = 13;
    vector<string> customers = {"0,1,33", "12,2,33", "1,3,33", "13,4,33", "2,5,33", "14,6,33", "3,7,33", "15,8,33", "4,9,33", "16,10,33", "5,11,33", "17,12,33", "6,13,33", "18,14,33", "7,15,33", "19,16,33", "8,17,33", "20,18,33", "9,19,33", "21,20,33", "10,21,33", "22,22,33", "11,23,33", "23,24,33"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 98.75855192990302;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int swords = 9;
    vector<string> customers = {"10,70,48 23,92,51", "1,78,72 17,33,27", "3,24,48 22,89,51", "4,21,17 12,50,82", "7,19,35 8,93,64", "5,16,93 6,27,6", "11,59,11 16,56,88", "13,47,30 14,72,69", "2,72,65 9,68,34", "15,17,23 19,99,20 21,54,56", "0,66,43 18,60,26 20,42,29"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 586.1334211642184;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int swords = 8;
    vector<string> customers = {"2,74,61 14,61,38", "0,56,65 15,36,34", "10,81,41 18,57,58", "7,36,19 17,24,80", "6,31,30 9,65,69", "12,24,48 13,41,51", "3,54,45 16,79,54", "11,28,85 22,26,14", "8,27,84 19,44,15", "1,56,44 20,80,55", "5,60,41 21,69,58", "4,81,69 23,4,30"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 506.7731138663713;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int swords = 4;
    vector<string> customers = {"20,54,7", "3,40,88 19,100,1", "5,98,57 18,51,30", "8,95,8", "21,57,13", "6,52,50 14,60,31", "16,61,58", "7,42,75", "17,2,74", "15,39,78", "1,94,49 9,59,34", "23,16,39", "10,45,42", "0,60,28", "11,59,16 12,80,41", "4,55,17 13,78,61 22,49,14", "2,73,71"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 300.45063361175045;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int swords = 16;
    vector<string> customers = {"14,27,41", "19,81,35", "9,72,79", "16,67,14", "18,95,3", "7,44,89", "3,83,58", "20,63,19", "1,29,45", "6,14,85", "17,76,56", "15,34,58", "5,73,78", "13,7,20", "22,56,50", "11,80,73", "4,56,21", "21,25,43", "10,61,99", "2,74,57 12,56,34", "0,65,6 8,23,10 23,60,40"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 613.9796921625986;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int swords = 1;
    vector<string> customers = {"15,16,19", "18,96,98", "12,88,15 19,77,34", "3,53,76", "10,15,89 23,94,2", "14,62,10 20,13,7", "1,27,69 11,8,13", "0,83,46 4,13,13", "21,54,33", "16,72,82", "17,67,48", "5,38,21", "7,43,8 13,99,29", "2,97,94", "9,60,100", "6,45,13 22,22,79"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 96.9494306365091;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int swords = 20;
    vector<string> customers = {"17,45,93", "4,33,34 9,25,33", "18,100,62 22,83,1", "19,18,17 21,60,2", "13,93,97", "1,100,82", "12,48,18", "0,95,6", "3,50,34 14,81,1", "5,92,24", "2,35,83", "7,45,32", "15,75,97", "20,68,26", "8,35,91", "16,100,70", "23,2,53", "10,4,99", "11,82,91", "6,73,28"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 690.66;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int swords = 15;
    vector<string> customers = {"14,1,91", "19,50,43", "15,66,95", "6,98,33", "12,33,1", "21,95,91", "22,25,74", "0,13,56", "1,69,56", "20,47,31", "23,42,61", "17,45,48", "18,63,15", "3,48,58 16,34,33", "4,41,12", "5,66,73", "13,61,58", "8,89,13 9,48,86 11,41,1", "2,64,24", "7,97,17 10,8,40"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 555.6041008394546;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int swords = 19;
    vector<string> customers = {"0,73,92", "19,70,57", "11,95,7", "20,14,50", "18,45,19", "16,32,24 17,61,49 23,34,26", "1,86,21 3,2,9 6,81,7 21,38,28", "8,12,12", "12,28,42 15,41,13", "4,68,14 9,74,5", "5,49,31 14,31,63", "7,80,76", "13,44,30 22,58,6", "2,79,13 10,18,41"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 371.82000000000005;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int swords = 23;
    vector<string> customers = {"1,82,34 18,57,8", "0,77,4 13,47,5 15,79,33 19,2,30", "6,27,7 8,82,24 10,11,34 20,80,28", "3,67,16 4,20,74 22,80,3", "5,52,8 7,72,16 16,40,15 17,75,54"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 202.34999999999997;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int swords = 5;
    vector<string> customers = {"6,53,40", "13,64,46", "2,15,37", "14,82,44", "1,52,55 11,77,34", "22,87,42", "20,44,61", "19,2,57", "17,71,72", "23,61,44", "5,11,37", "15,95,53", "18,56,9", "21,8,34", "8,26,39", "16,2,68", "10,81,13", "9,1,92", "0,46,65", "12,73,77", "3,5,90", "7,12,31", "4,91,50"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 351.6609686366079;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int swords = 10;
    vector<string> customers = {"17,58,29", "19,66,20", "3,22,91", "14,96,5", "21,6,21", "9,93,1", "6,19,8", "18,24,99", "2,61,30", "8,57,62", "23,34,25", "11,11,96", "7,70,14", "0,77,16", "12,2,42", "22,5,64", "16,95,79", "20,78,60", "4,5,96", "1,56,40", "10,49,6 13,4,91", "15,95,89", "5,12,82"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 415.8138705267142;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int swords = 24;
    vector<string> customers = {"1,60,23", "18,17,19", "3,21,50 7,56,6", "19,48,25", "13,62,62", "14,78,19", "9,17,76 21,54,2", "16,64,12", "17,41,41", "6,46,4 15,35,47", "5,56,7 22,17,36", "10,73,5 20,44,27", "0,26,34 12,39,8 23,14,31", "11,38,92", "4,1,50 8,16,15", "2,99,90"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 321.76;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int swords = 12;
    vector<string> customers = {"6,79,63 9,2,6 11,53,10", "3,9,92", "17,39,57 21,61,3", "1,45,70 2,33,7", "8,90,4 15,67,1 23,20,47", "7,88,55 14,89,19", "4,47,7 13,34,25 16,56,15 18,38,37 22,41,14", "0,35,24", "10,80,15 12,54,16", "19,62,17 20,12,4"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 280.37;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int swords = 11;
    vector<string> customers = {"15,85,26 18,2,12 20,6,34", "14,37,12", "12,31,75", "4,3,23 13,70,4", "21,90,55", "9,100,1 10,2,51 19,42,10 22,68,36", "0,91,7 6,5,11 7,42,40 17,45,36", "5,24,23 11,4,51", "1,45,5 2,95,35 8,27,14 23,60,13", "3,45,36"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 246.51999999999995;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int swords = 12;
    vector<string> customers = {"10,100,31", "5,81,95", "9,37,92", "6,53,84", "4,10,77 12,98,15", "13,60,18", "11,21,97", "14,19,19 18,68,78", "0,25,27", "15,33,8 23,76,73", "8,58,10", "16,57,77", "7,35,11 17,1,39", "19,90,66", "3,47,61", "20,65,31", "22,2,4", "2,80,58 21,76,26", "1,60,31"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 599.0603938738437;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int swords = 23;
    vector<string> customers = {"15,5,25 19,62,64", "2,40,3 10,99,72", "0,19,64 4,2,34", "14,13,92", "20,53,97", "12,32,9 17,26,30", "1,69,78 13,60,22", "9,42,20", "6,17,21 7,1,43", "5,25,11 11,72,21 18,9,38", "3,17,1 23,70,99", "8,18,15 21,34,83", "16,70,64"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 446.20000000000005;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int swords = 19;
    vector<string> customers = {"0,36,49", "15,77,100", "14,85,84", "18,40,50", "4,67,37 9,8,9 23,68,6", "1,53,4 7,57,61", "19,84,72", "8,3,16 22,53,50", "3,45,24", "17,13,18", "20,95,69", "2,35,26 11,59,9 21,94,10", "10,54,95", "5,20,58", "6,85,54", "16,79,41", "12,99,33", "13,45,52"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 639.7399999999998;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int swords = 4;
    vector<string> customers = {"1,19,76", "13,86,22", "20,52,44", "15,65,22 18,2,37 19,57,41", "9,36,24", "5,73,70 22,43,25", "0,45,6 3,45,57", "8,3,83 14,76,16", "16,20,35", "10,74,38", "4,49,42", "2,88,2 11,38,19 12,6,42 23,62,7", "7,97,3 17,21,84", "6,16,8"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 218.78787731575486;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int swords = 22;
    vector<string> customers = {"1,44,40", "4,11,58 16,88,26", "23,53,95", "15,72,21 18,8,3 21,2,20", "13,20,88", "9,68,66", "3,87,50 7,82,8 17,79,18", "19,17,5", "20,69,71", "0,94,42 6,55,25 10,42,21", "11,26,13 12,60,17", "5,14,68", "14,43,78", "2,62,94", "22,89,20", "8,28,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 484.61999999999995;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int swords = 17;
    vector<string> customers = {"20,65,100", "19,82,45 22,25,15", "13,26,88", "9,64,29 10,74,5", "2,95,18 14,92,43", "12,5,17 23,61,82", "8,36,64 21,62,27", "16,66,34", "6,71,13", "3,5,51 7,65,7", "0,47,88 18,69,3", "15,5,14 17,60,75", "11,46,36", "1,7,30", "4,19,38"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 451.88;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int swords = 15;
    vector<string> customers = {"7,21,64", "13,60,41", "22,65,59", "5,31,74", "10,87,11", "3,3,2", "9,28,38", "6,7,34", "2,82,11", "20,21,93", "12,46,85", "8,91,54", "23,54,97", "14,83,76", "18,38,27", "17,57,91", "0,16,27", "1,52,33", "4,28,23", "21,88,6", "11,28,59", "19,53,93", "15,32,99", "16,18,44"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 552.6641983448753;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int swords = 19;
    vector<string> customers = {"16,47,92", "6,78,32", "21,21,33", "0,47,1", "14,76,45", "4,87,51", "13,15,16", "2,93,26", "5,7,71", "3,60,32 15,88,19", "22,38,5", "17,54,92", "23,76,94", "8,1,12", "9,69,48", "19,61,38", "1,66,43", "7,74,90", "18,6,87", "10,86,91", "12,37,16", "11,77,47", "20,30,76"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 644.4497669781341;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int swords = 16;
    vector<string> customers = {"12,93,92", "4,28,32", "17,84,36", "18,30,70", "22,38,54", "5,44,4", "21,79,57", "15,17,96", "8,38,92", "19,2,20", "13,6,53", "7,10,59", "2,62,100", "16,14,32", "6,88,76", "14,37,62", "3,82,54", "1,81,69", "23,47,45", "0,60,49 20,15,8", "10,79,12", "9,54,66", "11,74,32"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 649.8887765171092;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int swords = 18;
    vector<string> customers = {"3,1,4 6,92,70", "5,34,83", "2,71,13 9,28,10 13,41,34 14,65,30 18,65,3", "17,69,2 19,89,65", "10,82,38 22,74,31 23,26,7", "1,18,11 7,95,63", "0,33,17 8,70,29 16,37,46"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 359.98999999999995;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int swords = 23;
    vector<string> customers = {"14,68,13", "3,1,15", "2,86,3", "5,47,81", "17,22,60", "22,15,89", "8,66,100", "12,14,63", "11,51,84", "7,97,34", "23,13,87", "0,11,28", "9,12,84", "1,51,19", "19,33,75", "13,11,90", "15,35,6", "4,96,17 21,25,80", "10,47,74", "18,34,12", "16,32,41", "6,70,78", "20,57,56"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 472.55999999999995;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int swords = 16;
    vector<string> customers = {"5,76,97", "3,70,9", "7,34,33", "20,55,30", "12,28,20 16,83,47 19,97,25", "9,89,28", "22,76,91", "18,95,38", "8,20,25 17,98,57", "4,86,24 15,92,30", "6,60,12", "2,56,13 14,16,54", "0,28,52 10,84,30", "11,45,30 21,69,55 23,3,4"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 530.3300000000002;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int swords = 1;
    vector<string> customers = {"5,29,41 6,69,13", "13,36,9 22,73,23", "8,87,16 21,57,51", "4,74,70 14,88,10", "16,40,82", "10,16,47 15,64,47 17,77,1", "2,55,33 3,96,49", "0,90,16 1,54,31 11,39,3 18,70,47", "9,50,22 19,89,10 20,54,2 23,43,9"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 85.62283017451337;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int swords = 5;
    vector<string> customers = {"12,13,53 18,2,40", "8,82,37", "10,67,95", "3,73,5 22,83,7", "15,23,54", "21,60,31", "23,6,54", "0,34,12 4,60,11 6,9,30 11,54,24", "5,80,93", "13,19,32", "20,47,15", "9,47,17 17,39,37 19,52,36", "16,37,40", "1,40,17", "2,34,86", "14,2,83", "7,50,50"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 283.8498310620113;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int swords = 14;
    vector<string> customers = {"2,68,59 22,34,2", "18,14,32", "20,81,11", "16,91,54", "17,19,82", "1,17,28", "9,41,33 14,59,65", "8,67,16", "0,8,47", "10,82,66 12,83,25", "7,42,1", "4,41,90", "5,90,54 11,65,5", "19,23,95", "13,29,12 23,12,71", "15,68,45", "3,15,21 6,66,10 21,18,19"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 431.68136143817753;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int swords = 1;
    vector<string> customers = {"7,31,52", "16,76,59", "0,66,6 17,87,69", "14,30,98", "9,44,68", "19,31,5", "5,32,15", "4,95,58", "13,69,98", "12,15,56", "2,75,71 18,5,11", "10,18,95", "20,37,4 23,87,16", "1,80,18 15,31,36", "11,20,37", "21,99,93", "6,61,47 8,4,44", "3,57,73", "22,84,94"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 97.655664;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int swords = 14;
    vector<string> customers = {"14,14,14", "15,4,44", "11,77,99", "23,48,42", "2,50,88", "6,92,49", "5,69,23", "4,85,21", "22,25,69", "8,18,84", "19,36,24", "10,5,57", "18,75,53", "9,11,88", "1,6,58", "12,32,29", "3,10,96", "13,43,45", "0,32,9", "16,86,80", "20,62,54 21,27,15", "7,4,26", "17,68,13"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 474.2794144271082;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int swords = 16;
    vector<string> customers = {"18,76,57 22,78,21", "9,83,19 10,9,10", "1,73,44 14,8,22 20,26,2", "3,44,50", "13,67,82", "6,7,72", "2,74,50 8,54,36", "4,42,65 7,53,14 11,12,8", "16,78,81", "0,43,41 15,68,14", "12,60,45 21,39,42", "5,9,67"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 424.61000000000007;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int swords = 1;
    vector<string> customers = {"21,9,55 22,36,12", "2,20,74 19,36,14"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 20.9524;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int swords = 1;
    vector<string> customers = {"5,7,68 18,21,16", "6,39,51 13,23,32"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 27.8212;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int swords = 1;
    vector<string> customers = {"8,7,68 18,52,9", "10,14,70 19,37,16"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 16.7312;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int swords = 1;
    vector<string> customers = {"2,9,58 6,34,19", "3,52,38 12,14,45"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 28.8682;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int swords = 1;
    vector<string> customers = {"8,9,58 16,33,26", "10,32,31 20,38,27"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 23.4326;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int swords = 1;
    vector<string> customers = {"12,15,34 14,30,44", "4,40,37 23,32,20"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 27.737000000000002;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int swords = 1;
    vector<string> customers = {"4,14,73 15,9,15", "0,22,67 10,33,20"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 21.5155;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int swords = 1;
    vector<string> customers = {"9,21,48 16,8,32", "5,51,39 22,26,36"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 30.906;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int swords = 1;
    vector<string> customers = {"12,14,70 20,29,16", "5,13,37 18,59,21"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 19.681599999999996;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int swords = 1;
    vector<string> customers = {"17,18,56 19,26,25", "12,41,49 15,16,16"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 28.5458;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int swords = 1;
    vector<string> customers = {"17,29,34 21,35,38", "4,15,33 22,38,27"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 26.032799999999998;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int swords = 1;
    vector<string> customers = {"17,30,33 23,37,36", "4,33,45 6,10,28"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 27.621000000000002;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int swords = 1;
    vector<string> customers = {"1,42,36 20,8,39", "5,15,68 15,63,10"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 26.3664;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int swords = 1;
    vector<string> customers = {"1,27,56 19,14,15", "7,77,26 11,20,37"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 28.197000000000003;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int swords = 1;
    vector<string> customers = {"21,54,28 22,38,19", "2,7,67 23,63,11"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 26.012900000000002;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int swords = 1;
    vector<string> customers = {"5,26,57 22,20,21", "12,43,47 15,14,19"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 26.082099999999997;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int swords = 1;
    vector<string> customers = {"3,30,51 4,30,32", "18,16,31 21,29,24"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 26.9264;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int swords = 1;
    vector<string> customers = {"12,43,35 21,58,22", "8,22,46 11,9,32"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 27.81;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int swords = 1;
    vector<string> customers = {"14,40,49 23,10,26", "2,15,67 7,35,14"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 23.992000000000004;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int swords = 1;
    vector<string> customers = {"7,28,72 20,13,11", "3,51,30 21,34,20"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 31.568999999999996;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int swords = 1;
    vector<string> customers = {"11,40,50 12,14,36", "7,19,26 16,25,44"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 26.8104;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int swords = 1;
    vector<string> customers = {"12,30,68 17,15,21", "5,31,48 22,10,25"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 27.401000000000003;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int swords = 1;
    vector<string> customers = {"4,33,60 5,28,21", "14,12,42 20,16,36"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 27.732;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int swords = 1;
    vector<string> customers = {"18,59,34 20,28,36", "12,16,64 13,10,18"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 30.14;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int swords = 1;
    vector<string> customers = {"4,75,46 5,93,4 12,7,23 13,65,11 15,36,13 17,60,3", "1,58,63 6,77,2 8,76,1 9,80,21 19,7,12 22,65,1", "7,79,42 11,96,1 16,17,50 20,66,1 21,19,2 23,87,4", "0,88,14 2,61,36 3,79,15 10,46,33 14,40,1 18,36,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 73.64402824;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int swords = 4;
    vector<string> customers = {"1,66,14 5,61,30 7,79,53 10,43,1 16,26,1 19,87,1", "8,56,75 12,76,11 15,6,1 17,37,6 18,11,1 22,71,6", "0,84,72 3,74,1 4,13,24 13,15,1 20,29,1 23,37,1", "2,84,84 6,8,2 9,31,10 11,7,1 14,21,2 21,74,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 268.18;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int swords = 3;
    vector<string> customers = {"3,65,11 6,58,1 13,51,86 14,30,1 15,31,1", "5,2,18 7,21,74 9,80,3 18,23,5", "2,80,46 17,85,6 19,98,12 20,26,31 22,88,5", "1,41,60 4,20,18 8,60,1 11,14,1 16,70,20", "0,73,8 10,9,77 12,33,13 21,54,1 23,25,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 165.0282886036;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int swords = 5;
    vector<string> customers = {"1,69,25 10,28,52 15,83,7 17,82,15 19,82,1", "4,63,55 16,52,1 18,46,40 21,92,4", "0,51,86 9,47,1 14,95,2 20,79,1 23,96,10", "3,42,94 6,42,1 7,75,2 12,44,1 22,81,2", "2,66,85 5,77,2 8,33,1 11,97,11 13,71,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 277.42;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int swords = 4;
    vector<string> customers = {"3,37,83 6,78,7 11,67,9 12,88,1", "2,10,13 7,59,82 10,76,4 19,2,1", "15,51,56 16,84,27 17,75,9 23,40,8", "1,61,75 14,72,11 21,9,8 22,47,6", "4,87,42 5,49,4 8,43,53 13,21,1", "0,41,70 9,64,22 18,10,1 20,64,7"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 245.25516570477402;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int swords = 6;
    vector<string> customers = {"0,87,9 2,11,53 5,15,2 9,48,36", "7,83,37 8,8,61 12,2,1 23,71,1", "1,43,34 6,96,1 16,53,63 17,49,2", "3,83,58 11,8,18 15,70,23 20,8,1", "4,88,97 13,94,1 19,69,1 21,37,1", "10,88,91 14,51,1 18,6,2 22,50,6"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 354.3399999999999;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int swords = 2;
    vector<string> customers = {"3,27,73 13,57,2 23,55,25", "0,41,97 2,99,1 6,12,1 7,58,1", "8,65,81 9,8,11 12,99,2 22,90,6", "10,29,86 15,63,2 20,70,12", "1,64,92 5,94,7 16,18,1", "14,50,1 17,47,97 19,87,1 21,73,1", "4,29,82 11,57,14 18,62,4"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 132.26565496653546;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int swords = 7;
    vector<string> customers = {"0,81,98 8,27,1 18,65,1", "6,40,92 15,15,6 19,86,1 20,72,1", "1,75,27 2,5,71 17,35,1 21,69,1", "10,1,96 11,20,1 23,34,3", "7,43,58 12,4,1 14,64,3 16,55,38", "4,39,98 5,66,1 9,60,1", "3,99,91 13,7,1 22,88,8"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 331.08;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int swords = 5;
    vector<string> customers = {"9,39,52 13,95,20 22,29,28", "1,3,91 12,99,7 20,33,2", "0,25,21 7,74,75 19,8,4", "6,88,96 15,49,1 18,5,3", "10,91,22 14,70,30 16,36,48", "5,80,98 11,40,1 21,10,1", "2,62,55 4,71,27 8,17,18", "3,93,16 17,22,81 23,11,3"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 364.9733174247524;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int swords = 8;
    vector<string> customers = {"6,65,92 7,48,1 9,15,7", "10,8,1 17,51,22 22,41,77", "1,100,84 15,6,4 16,24,12", "18,10,95 20,40,2 23,57,3", "3,77,79 4,63,17 11,39,4", "0,56,90 8,63,1 14,58,9", "2,38,57 5,91,1 13,6,42", "12,17,4 19,78,21 21,43,75"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 407.08;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int swords = 7;
    vector<string> customers = {"9,46,98 19,56,1 22,51,1", "1,32,80 13,61,1 21,28,19", "4,46,99 12,48,1", "3,66,22 7,55,28 16,13,50", "2,28,9 10,63,2 17,35,89", "5,46,77 11,42,23", "0,78,87 18,53,1 20,2,12", "6,29,33 14,100,21 15,47,46", "8,15,50 23,41,50"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 343.5295546268968;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int swords = 9;
    vector<string> customers = {"5,41,17 9,92,51 16,33,32", "2,28,98 8,9,2", "0,57,72 7,15,10 12,69,18", "6,33,98 10,83,1 13,98,1", "17,94,94 20,1,5 23,87,1", "14,42,95 22,97,5", "11,58,99 21,11,1", "4,35,64 18,92,33 19,14,3", "1,99,78 3,97,21 15,13,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 523.6400000000001;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int swords = 5;
    vector<string> customers = {"0,49,99 23,31,1", "12,100,84 15,13,10 16,98,6", "3,35,86 9,19,14", "5,49,30 6,11,69 14,6,1", "13,62,95 19,26,4 22,85,1", "7,72,98 17,86,2", "2,59,11 21,7,89", "10,5,77 11,68,20 20,5,3", "1,16,99 18,71,1", "4,13,99 8,81,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 312.5190020955824;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int swords = 10;
    vector<string> customers = {"2,52,99 15,35,1", "12,74,98 23,10,2", "7,95,37 18,88,63", "1,52,39 6,93,60 17,59,1", "4,91,87 13,5,9 20,17,4", "3,95,46 22,4,54", "5,98,99 16,47,1", "9,90,98 10,29,1 19,99,1", "0,92,85 21,7,15", "8,15,80 11,36,19 14,99,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 704.02;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int swords = 3;
    vector<string> customers = {"15,93,89 20,79,11", "10,85,65 13,96,35", "1,11,70 12,34,30", "14,4,87 16,9,13", "2,2,64 7,24,28 18,27,8", "4,7,68 23,92,32", "3,96,86 8,60,14", "6,42,62 17,31,38", "0,42,99 11,6,1", "21,44,94 22,92,6", "5,44,95 9,48,1 19,74,4"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 274.1353856;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int swords = 11;
    vector<string> customers = {"8,75,98 21,31,2", "14,89,99 15,54,1", "19,20,81 22,72,19", "6,72,99 12,61,1", "3,10,75 4,62,19 23,75,6", "0,29,99 18,80,1", "13,40,71 20,20,29", "1,36,94 17,56,6", "7,42,69 10,40,31", "5,47,99 16,11,1", "2,34,37 9,69,61 11,1,2"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 531.94;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int swords = 6;
    vector<string> customers = {"15,50,82 22,48,18", "0,67,99 9,74,1", "11,24,96 13,67,4", "5,85,99 10,47,1", "4,4,88 19,34,12", "18,83,99 23,1,1", "2,21,73 21,39,27", "3,33,56 8,71,44", "7,63,53 16,43,47", "14,11,62 20,59,38", "6,47,95 17,9,5", "1,40,57 12,63,43"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 406.3603718533947;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int swords = 12;
    vector<string> customers = {"8,50,45 16,97,55", "12,85,92 18,10,8", "7,56,97 20,82,3", "0,12,44 19,35,56", "9,66,98 11,12,2", "6,91,91 13,3,9", "1,9,10 23,36,90", "15,51,98 22,77,2", "17,78,99 21,59,1", "2,29,99 3,75,1", "5,85,97 10,13,3", "4,80,77 14,33,23"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 728.6300000000002;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int swords = 5;
    vector<string> customers = {"7,15,91 16,34,9", "20,52,100", "4,21,89 5,97,11", "6,6,78 19,44,22", "10,19,44 23,83,56", "3,8,26 11,79,74", "9,5,67 12,6,33", "14,76,99 21,33,1", "13,20,100", "8,42,96 22,63,4", "0,45,99 1,9,1", "15,53,96 17,43,4", "2,77,99 18,60,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 350.10534456354543;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int swords = 13;
    vector<string> customers = {"22,27,100", "9,79,85 13,70,15", "6,46,48 20,91,52", "3,66,94 12,1,6", "15,100,98 17,56,2", "0,40,97 14,30,3", "4,38,98 5,21,2", "11,63,97 23,65,3", "19,6,100", "7,18,35 10,8,65", "1,91,94 21,42,6", "2,82,96 18,55,4", "8,59,58 16,26,42"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 707.3100000000001;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int swords = 8;
    vector<string> customers = {"17,27,100", "2,39,97 23,45,3", "10,86,100", "21,73,100", "14,90,37 16,64,63", "7,39,92 13,82,8", "8,87,99 20,58,1", "4,36,20 6,88,80", "3,55,92 15,63,8", "12,51,99 22,10,1", "0,27,100", "11,91,98 19,13,2", "5,2,99 9,80,1", "1,12,85 18,2,15"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 596.7175347905793;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int swords = 14;
    vector<string> customers = {"22,74,100", "3,97,19 14,65,81", "23,44,100", "20,64,100", "6,22,84 21,10,16", "4,73,87 9,86,13", "12,3,98 16,27,2", "7,73,100", "11,91,99 18,98,1", "13,19,52 19,70,48", "5,98,83 17,55,17", "2,69,99 8,9,1", "0,94,90 10,91,10", "1,25,31 15,65,69"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 864.27;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int swords = 8;
    vector<string> customers = {"8,43,100", "5,65,99 18,87,1", "0,79,64 9,31,36", "12,27,100", "6,97,100", "11,1,88 23,44,12", "3,88,28 14,54,72", "1,99,100", "4,16,99 22,58,1", "19,12,100", "16,69,97 21,85,3", "13,9,99 15,49,1", "2,39,99 20,77,1", "7,60,99 10,73,1", "17,92,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 612.7204937792001;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int swords = 15;
    vector<string> customers = {"3,11,100", "7,56,99 14,77,1", "12,19,100", "5,63,73 11,97,27", "4,1,98 13,36,2", "9,51,100", "0,25,93 21,87,7", "1,41,39 2,43,61", "6,86,99 20,97,1", "23,73,100", "16,36,100", "10,32,100", "18,11,99 22,85,1", "8,21,98 15,24,2", "17,30,91 19,36,9"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 573.1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int swords = 13;
    vector<string> customers = {"16,14,36 18,60,64", "3,33,99 11,21,1", "7,80,100", "0,37,100", "23,29,100", "6,84,99 14,98,1", "19,98,100", "2,87,83 21,95,17", "9,36,100", "20,45,96 22,99,4", "1,54,97 5,26,3", "12,87,100", "15,24,100", "8,61,77 13,7,23", "4,58,98 10,82,2", "17,7,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 803.53908;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int swords = 16;
    vector<string> customers = {"15,1,100", "11,47,100", "3,2,96 16,16,4", "9,56,25 17,29,75", "20,28,100", "4,32,100", "0,64,100", "7,3,23 12,2,77", "1,32,100", "19,67,100", "5,52,99 23,56,1", "18,72,100", "13,67,99 14,84,1", "6,19,76 22,83,24", "8,3,96 10,79,4", "2,35,99 21,10,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 577.9000000000001;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int swords = 7;
    vector<string> customers = {"5,59,80 17,20,20", "9,86,100", "12,56,100", "13,77,93 23,28,7", "7,81,100", "20,61,100", "21,2,100", "6,2,94 8,27,6", "11,14,98 22,64,2", "16,49,100", "0,82,87 4,47,13", "2,32,90 14,38,10", "18,53,100", "3,26,72 19,44,28", "1,10,100", "10,98,100", "15,9,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 538.3546208;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int swords = 17;
    vector<string> customers = {"12,78,7 18,40,93", "10,6,100", "19,66,98 23,50,2", "1,84,99 21,58,1", "0,88,96 14,47,4", "22,2,100", "6,45,100", "7,55,100", "15,28,100", "8,24,100", "11,6,100", "13,22,99 16,42,1", "5,95,69 17,51,31", "3,42,100", "4,87,80 20,16,20", "2,64,100", "9,19,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 745.8000000000001;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int swords = 2;
    vector<string> customers = {"6,2,99 13,76,1", "19,56,100", "15,70,100", "7,71,99 8,52,1", "14,58,78 21,21,22", "4,87,100", "18,71,100", "5,81,100", "16,39,100", "23,6,100", "2,67,100", "12,58,100", "11,5,100", "3,83,97 20,100,3", "1,25,96 9,67,4", "22,89,100", "17,77,100", "0,26,95 10,60,5"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 176.39000000000001;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int swords = 18;
    vector<string> customers = {"3,43,100", "12,72,83 21,25,17", "9,1,100", "1,71,80 13,23,20", "14,55,100", "7,21,100", "6,49,100", "4,75,75 16,47,25", "19,23,100", "2,47,100", "20,62,100", "0,32,83 8,20,17", "22,55,100", "23,60,100", "5,23,16 11,14,84", "10,80,100", "15,14,65 18,83,35", "17,47,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 819.9600000000002;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int swords = 4;
    vector<string> customers = {"1,93,100", "13,64,53 19,85,47", "18,19,100", "11,22,100", "6,88,100", "9,44,99 17,95,1", "8,90,100", "23,56,100", "0,78,100", "7,55,60 14,97,40", "12,25,100", "3,51,100", "20,71,97 22,51,3", "4,38,50 5,43,50", "2,54,100", "15,100,100", "10,5,100", "21,81,100", "16,45,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 373.8;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int swords = 19;
    vector<string> customers = {"20,9,100", "4,57,96 23,17,4", "5,76,100", "8,27,100", "14,63,93 15,21,7", "1,73,100", "13,13,100", "10,81,100", "6,15,82 17,85,18", "18,64,100", "11,96,100", "12,82,100", "0,60,100", "2,15,100", "19,94,84 22,38,16", "16,52,100", "9,42,100", "3,33,100", "7,57,80 21,75,20"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 1011.6999999999998;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int swords = 17;
    vector<string> customers = {"23,84,100", "20,98,100", "11,12,100", "2,31,100", "16,44,100", "4,53,100", "3,24,100", "5,89,82 14,95,18", "22,21,100", "7,4,100", "19,24,100", "8,97,80 9,30,20", "18,1,100", "12,100,100", "10,50,96 17,66,4", "1,73,100", "0,35,100", "13,58,99 21,93,1", "15,68,100", "6,74,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 1011.67;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int swords = 20;
    vector<string> customers = {"6,25,100", "21,18,100", "4,64,96 9,85,4", "18,71,100", "16,52,100", "23,23,100", "7,80,100", "13,97,100", "1,87,99 19,7,1", "20,32,100", "3,34,100", "12,56,100", "8,89,96 22,91,4", "0,98,100", "15,93,77 17,28,23", "14,75,100", "5,48,100", "10,7,100", "11,5,100", "2,1,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 1040.1699999999998;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int swords = 16;
    vector<string> customers = {"6,45,61 20,17,39", "7,74,100", "17,39,100", "11,25,100", "9,55,100", "10,90,99 21,67,1", "12,54,73 18,35,27", "4,36,100", "19,56,100", "22,99,100", "23,7,100", "0,24,100", "8,63,100", "2,50,100", "1,8,100", "14,54,100", "16,80,100", "5,44,100", "13,5,100", "15,1,100", "3,99,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 948.8399999999999;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int swords = 21;
    vector<string> customers = {"13,20,100", "6,26,100", "15,55,49 16,25,51", "19,80,100", "21,67,100", "1,96,99 12,81,1", "8,15,100", "2,33,100", "9,89,100", "3,41,100", "23,77,100", "14,90,100", "7,62,100", "0,84,99 18,71,1", "22,9,100", "20,45,100", "5,92,100", "11,94,100", "10,60,100", "17,92,100", "4,93,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 1304.42;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int swords = 20;
    vector<string> customers = {"15,64,100", "18,31,100", "16,62,100", "8,78,100", "3,3,100", "0,99,100", "21,67,100", "14,82,100", "5,55,81 19,4,19", "12,68,100", "13,56,100", "20,79,100", "2,17,100", "1,16,70 9,15,30", "7,10,100", "6,16,100", "22,9,100", "10,66,100", "23,68,100", "4,4,100", "17,30,100", "11,75,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 1038.01;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int swords = 22;
    vector<string> customers = {"21,17,100", "2,8,14 18,13,86", "23,50,100", "9,22,100", "16,42,100", "20,61,100", "6,87,100", "1,68,100", "10,27,100", "22,92,100", "7,90,100", "11,32,100", "13,1,79 19,87,21", "0,74,100", "8,75,100", "12,3,100", "17,18,100", "14,97,100", "15,62,100", "3,96,100", "5,64,100", "4,93,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 1201.36;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int swords = 8;
    vector<string> customers = {"12,51,100", "10,88,100", "22,48,100", "0,28,100", "21,51,100", "20,35,100", "7,70,100", "17,64,100", "23,15,100", "5,14,75 14,53,25", "6,27,100", "4,40,100", "3,13,100", "11,15,100", "19,62,100", "15,25,100", "16,11,100", "13,70,100", "8,97,100", "9,25,100", "2,25,100", "1,9,100", "18,43,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 553.5;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int swords = 23;
    vector<string> customers = {"2,80,100", "21,56,100", "16,14,100", "8,69,100", "17,64,100", "23,12,100", "9,33,100", "5,13,100", "15,64,100", "0,8,100", "4,8,100", "19,37,100", "6,23,99 14,55,1", "22,77,100", "1,74,100", "3,59,100", "10,35,100", "13,38,100", "11,86,100", "18,92,100", "12,14,100", "7,19,100", "20,36,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 1011.3199999999999;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int swords = 21;
    vector<string> customers = {"5,76,100", "19,14,100", "0,37,100", "15,98,100", "7,82,100", "17,46,100", "6,85,100", "16,25,100", "22,78,100", "9,46,100", "3,68,100", "18,18,100", "21,32,100", "20,55,100", "2,77,100", "10,48,100", "14,48,100", "13,27,100", "23,56,100", "8,92,100", "11,85,100", "4,59,100", "1,83,100", "12,40,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 1318.0;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int swords = 24;
    vector<string> customers = {"11,20,100", "9,46,100", "1,29,100", "22,75,100", "21,50,100", "13,39,100", "20,68,100", "5,11,100", "14,36,100", "4,64,100", "7,40,100", "16,13,100", "15,15,100", "2,45,100", "6,33,100", "12,13,100", "23,88,100", "3,83,100", "19,66,100", "17,76,100", "8,20,100", "18,62,100", "0,58,100", "10,60,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 1110.0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int swords = 1;
    vector<string> customers = {"0,1,1", "1,1,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0199;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int swords = 1;
    vector<string> customers = {"0,100,100", "23,1,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int swords = 1;
    vector<string> customers = {"0,1,1", "23,100,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int swords = 1;
    vector<string> customers = {"0,1,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int swords = 1;
    vector<string> customers = {"0,100,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int swords = 1;
    vector<string> customers = {"16,1,1", "15,1,1", "2,1,1", "22,1,1", "13,1,1", "20,1,1", "8,1,1", "18,1,1", "5,1,1", "10,1,1", "6,1,1", "23,1,1", "9,1,1", "0,1,1", "4,1,1", "3,1,1", "14,1,1", "19,1,1", "7,1,1", "17,1,1", "21,1,1", "12,1,1", "1,1,1", "11,1,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 0.2143218591927811;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int swords = 1;
    vector<string> customers = {"1,50,50", "5,50,50", "13,50,50", "10,50,50", "4,50,50", "6,50,50", "0,50,50", "17,50,50", "18,50,50", "15,50,50", "20,50,50", "3,50,50", "7,50,50", "2,50,50", "21,50,50", "14,50,50", "12,50,50", "23,50,50", "16,50,50", "8,50,50", "9,50,50", "22,50,50", "11,50,50", "19,50,50"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 49.99999701976776;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int swords = 1;
    vector<string> customers = {"12,100,100", "4,100,100", "2,100,100", "8,100,100", "17,100,100", "20,100,100", "13,100,100", "14,100,100", "7,100,100", "23,100,100", "0,100,100", "6,100,100", "3,100,100", "5,100,100", "1,100,100", "10,100,100", "16,100,100", "9,100,100", "18,100,100", "22,100,100", "19,100,100", "21,100,100", "15,100,100", "11,100,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 100.0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int swords = 12;
    vector<string> customers = {"12,1,1", "1,1,1", "16,1,1", "19,1,1", "9,1,1", "11,1,1", "22,1,1", "4,1,1", "10,1,1", "18,1,1", "14,1,1", "8,1,1", "0,1,1", "2,1,1", "20,1,1", "15,1,1", "6,1,1", "3,1,1", "23,1,1", "17,1,1", "7,1,1", "21,1,1", "5,1,1", "13,1,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 0.24;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int swords = 12;
    vector<string> customers = {"9,50,50", "3,50,50", "0,50,50", "10,50,50", "14,50,50", "20,50,50", "11,50,50", "12,50,50", "17,50,50", "16,50,50", "15,50,50", "4,50,50", "13,50,50", "6,50,50", "8,50,50", "2,50,50", "5,50,50", "1,50,50", "21,50,50", "19,50,50", "18,50,50", "7,50,50", "23,50,50", "22,50,50"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 551.6459226608276;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int swords = 12;
    vector<string> customers = {"10,100,100", "21,100,100", "2,100,100", "23,100,100", "18,100,100", "1,100,100", "22,100,100", "0,100,100", "3,100,100", "6,100,100", "9,100,100", "5,100,100", "19,100,100", "13,100,100", "14,100,100", "12,100,100", "8,100,100", "11,100,100", "17,100,100", "15,100,100", "4,100,100", "16,100,100", "20,100,100", "7,100,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 1200.0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int swords = 24;
    vector<string> customers = {"23,1,1", "20,1,1", "22,1,1", "10,1,1", "6,1,1", "13,1,1", "3,1,1", "2,1,1", "15,1,1", "12,1,1", "14,1,1", "7,1,1", "5,1,1", "19,1,1", "1,1,1", "0,1,1", "8,1,1", "18,1,1", "17,1,1", "16,1,1", "11,1,1", "9,1,1", "4,1,1", "21,1,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 0.24;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int swords = 24;
    vector<string> customers = {"3,50,50", "12,50,50", "7,50,50", "22,50,50", "18,50,50", "17,50,50", "10,50,50", "4,50,50", "2,50,50", "16,50,50", "0,50,50", "21,50,50", "13,50,50", "6,50,50", "11,50,50", "23,50,50", "1,50,50", "8,50,50", "14,50,50", "20,50,50", "5,50,50", "19,50,50", "9,50,50", "15,50,50"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 600.0;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int swords = 24;
    vector<string> customers = {"7,100,100", "15,100,100", "9,100,100", "3,100,100", "23,100,100", "8,100,100", "4,100,100", "21,100,100", "19,100,100", "6,100,100", "10,100,100", "5,100,100", "13,100,100", "18,100,100", "14,100,100", "2,100,100", "22,100,100", "12,100,100", "20,100,100", "17,100,100", "11,100,100", "0,100,100", "16,100,100", "1,100,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 2400.0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int swords = 1;
    vector<string> customers = {"0,3,4 3,8,5 5,4,5 7,3,6 9,7,7 13,5,7 15,5,5 20,3,3"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 2.08;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int swords = 1;
    vector<string> customers = {"0,9,6 2,1,7 3,5,3 6,8,8 9,7,4 13,2,6 17,1,1 22,5,8", "1,8,5 4,1,4 5,5,4 7,4,8 8,7,9 12,2,9 16,6,3 20,2,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4376;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int swords = 2;
    vector<string> customers = {"0,4,3 4,7,7 5,1,8 6,3,7 8,3,4 16,7,4 18,6,3 21,4,6", "1,1,1 2,5,1 3,4,9 7,4,6 9,9,2 13,6,3 15,3,7 20,9,6"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 3.4900000000000007;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int swords = 1;
    vector<string> customers = {"2,6,9 3,2,7 4,4,3 6,5,6 7,1,9 12,1,8 17,2,3 19,2,5", "0,8,3 1,1,5 5,1,8 8,2,8 9,6,9 15,4,6 20,8,8 22,1,1", "10,7,7 11,7,6 13,1,4 14,2,5 16,8,7 18,3,1 23,4,9"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 3.553706;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int swords = 2;
    vector<string> customers = {"0,2,2 2,8,2 5,2,2 6,6,5 8,4,6 14,8,6 17,3,7 23,2,2", "1,8,6 3,4,3 4,7,8 7,8,4 9,1,4 12,1,1 16,4,4 22,1,8", "10,8,8 11,3,9 13,3,8 15,2,1 18,3,8 19,1,2 21,7,4"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 4.822631999999999;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int swords = 3;
    vector<string> customers = {"1,5,4 5,2,8 6,5,5 7,4,9 9,7,5 15,8,3 18,8,5 19,8,1", "0,9,2 2,8,3 3,3,2 4,2,1 8,3,3 12,7,9 17,4,9 21,3,3", "10,3,3 11,4,8 13,9,7 16,1,1 20,4,3 22,9,5 23,8,3"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 5.569999999999999;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int swords = 11;
    vector<string> customers = {"1,90,50 13,100,50", "2,90,46 14,100,50", "3,90,47 15,100,50", "4,90,45 16,100,50", "5,90,42 17,100,50", "6,90,43 18,100,50", "7,90,41 19,100,50", "8,90,48 20,100,50", "9,90,49 21,100,50", "10,90,46 22,100,50", "11,90,32 23,100,50", "0,90,39 12,100,50"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 1028.3863907233736;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int swords = 20;
    vector<string> customers = {"0,72,84", "1,81,90", "2,76,86", "3,30,73", "4,78,82", "5,97,88", "6,92,83", "7,59,100", "8,71,75", "9,20,79", "10,55,76", "11,74,76", "12,59,80", "13,77,90", "14,21,92", "15,64,72", "16,85,86", "17,6,97", "18,33,72", "19,71,90", "20,3,74", "21,45,73", "22,81,95", "23,67,72"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 1172.7805080785372;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int swords = 9;
    vector<string> customers = {"3,25,51 18,81,47", "1,88,93", "16,56,97", "9,41,47 11,36,44", "7,6,95", "10,43,97", "17,55,43 23,23,53", "8,18,93", "15,53,94", "6,73,46 13,37,53", "2,2,92", "22,62,95", "4,52,56 19,76,38", "21,87,91", "0,25,93", "5,51,49 14,26,42", "12,95,98", "20,10,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 605.5804202426024;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int swords = 4;
    vector<string> customers = {"17,31,41 20,59,26 23,53,5", "19,89,79", "16,32,38 22,46,26", "18,43,38 21,32,7", "1,31,41 2,59,26 3,53,5", "4,31,41 5,59,26 6,53,5", "7,31,41 8,59,26 9,53,5"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 194.9407019008653;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int swords = 24;
    vector<string> customers = {"0,1,1", "1,1,1", "2,1,1", "3,1,1", "4,1,1", "5,1,1", "6,1,1", "7,1,1", "8,1,1", "9,1,1", "10,1,1", "11,1,1", "12,1,1", "13,1,1", "14,1,1", "15,1,1", "16,1,1", "17,1,1", "18,1,1", "19,1,1", "20,1,1", "21,1,1", "22,1,1", "23,1,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 0.24;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int swords = 12;
    vector<string> customers = {"0,1,50 12,2,50", "1,1,50 13,2,50", "2,1,50 14,2,50", "3,1,50 15,2,50", "4,1,50 16,2,50", "5,1,50 17,2,50", "6,1,50 18,2,50", "7,1,50 19,2,50", "8,1,50 20,2,50", "9,1,50 21,2,50", "10,1,50 22,2,50", "11,1,50 23,2,50"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 18.0;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int swords = 20;
    vector<string> customers = {"1,1,10", "2,2,9", "3,3,8", "4,4,7", "5,5,6", "6,6,5", "7,7,4", "8,8,3", "9,9,2", "10,10,1", "11,1,10", "12,2,9", "13,3,8", "14,4,7", "15,5,6", "16,6,5", "17,7,4", "18,8,3", "19,9,2", "20,10,1", "21,1,10", "22,2,9", "23,3,8", "0,23,10"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 7.220000000000001;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int swords = 24;
    vector<string> customers = {"1,1,1", "2,2,2", "3,3,3", "4,4,4", "5,5,5", "6,6,6", "7,7,7", "8,8,8", "9,9,9", "10,10,10", "11,11,11", "12,12,12", "13,13,13", "14,14,1", "15,15,15", "16,16,16", "17,17,17", "18,18,18", "19,19,19", "20,20,20", "21,12,21", "22,22,22", "23,23,23", "0,1,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 39.53999999999999;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int swords = 24;
    vector<string> customers = {"12,54,93", "1,83,22", "9,17,19", "2,96,48", "0,27,72", "11,39,70", "7,13,68", "21,100,36", "4,95,4", "15,12,23", "18,34,74", "5,65,42", "14,12,54", "13,69,48", "23,45,63", "16,58,38", "6,60,24", "3,42,30", "20,79,17", "17,36,91", "8,43,89", "19,7,41", "22,43,65", "10,49,47"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 523.69;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int swords = 24;
    vector<string> customers = {"1,1,1", "2,2,2", "3,3,3", "0,1,1", "4,1,1", "5,1,1", "6,1,1", "7,1,1", "8,1,1", "9,1,1", "10,1,1", "11,1,1", "12,1,1", "13,1,1", "14,1,1", "15,1,1", "16,1,1", "17,1,1", "18,1,1", "19,1,1", "20,1,1", "21,1,1", "22,1,1", "23,1,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3499999999999999;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int swords = 24;
    vector<string> customers = {"0,7,49 23,77,24", "1,7,49 22,77,24", "2,7,49 21,77,24", "3,7,49 20,77,24", "4,7,49 19,77,24", "5,7,49 18,77,24", "6,7,49 17,77,24", "7,7,49 16,77,24", "8,7,49 15,77,24", "9,7,49 14,77,24", "10,7,49 13,77,24", "11,7,49 12,7,24"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 246.12000000000006;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int swords = 23;
    vector<string> customers = {"0,1,1", "1,1,1", "2,1,1", "3,1,1", "4,1,1", "5,1,1", "6,1,1", "7,1,1", "8,1,1", "9,1,1", "10,1,1", "11,1,1", "12,1,1", "13,1,1", "14,1,1", "15,1,1", "16,1,1", "17,1,1", "18,1,1", "19,1,1", "20,1,1", "21,1,1", "22,1,1", "23,1,1"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 0.24;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int swords = 24;
    vector<string> customers = {"0,50,20", "1,40,20", "2,30,20", "3,20,20", "4,10,20", "5,60,20", "6,70,20", "7,80,20", "8,90,20", "9,100,30", "10,46,15", "11,64,15", "12,46,34", "13,64,48", "14,18,34", "15,43,48", "16,24,49", "17,24,34", "18,73,46", "19,18,34", "20,18,30", "21,14,34", "22,75,46", "23,78,15"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 325.5999999999999;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int swords = 24;
    vector<string> customers = {"0,1,1", "1,2,2", "2,3,3", "3,4,4", "4,5,5", "5,6,6", "6,7,7", "7,8,8", "8,9,9", "9,10,10", "10,11,11", "11,12,12", "12,13,13", "13,14,14", "14,15,15", "15,16,16", "16,17,17", "17,18,18", "18,19,19", "19,20,20", "20,21,21", "21,22,22", "22,23,23", "23,24,24"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 49.00000000000001;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int swords = 24;
    vector<string> customers = {"0,10,10", "1,10,10", "2,10,10", "3,10,10", "4,10,10", "5,10,10", "6,10,10", "7,10,10", "8,10,10", "9,10,10", "10,10,10", "11,10,10", "12,10,10", "13,10,10", "14,10,10", "15,10,10", "16,10,10", "17,10,10", "18,10,10", "19,10,10", "20,10,10", "21,10,10", "22,10,10", "23,10,10"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 24.000000000000004;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int swords = 1;
    vector<string> customers = {"8,1,80 16,100,11", "12,10,100"};
    NewItemShop* pObj = new NewItemShop();
    clock_t start = clock();
    double result = pObj->getMaximum(swords, customers);
    clock_t end = clock();
    delete pObj;
    double expected = 19.0;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=14540&pm=11508
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <list>
#include <complex>
#include <cstdio>
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef complex<double> pnt;
typedef pair<int, int> pii;
 
#define RA(x) (x).begin(), (x).end()
#define FE(i, x) for (typeof((x).begin()) i = (x).begin(); i != (x).end(); i++)
#define SZ(x) ((int) (x).size())
 
template<class T>
void splitstr(const string &s, vector<T> &out)
{
    istringstream in(s);
    out.clear();
    copy(istream_iterator<T>(in), istream_iterator<T>(), back_inserter(out));
}
 
class NewItemShop
{
public:
    double getMaximum(int swords, vector <string> customers);
};
 
struct hour
{
    int cust;
    int next;
    int price;
    double prob;
    double tprob;
 
    hour() : cust(-1), next(-1), price(0), prob(0.0), tprob(1.0) {}
};
 
static int N;
static hour hours[24];
static map<pair<int, pii>, double> cache;
 
static double recurse(int swords, int time, int mask)
{
    pair<int, pii> key(swords, pii(time, mask));
    if (cache.count(key))
        return cache[key];
 
    double ans = 0.0;
    if (time == 24)
        ans = 0.0;
    else
    {
        hour &h = hours[time];
        int cmask = 1 << h.cust;
        if (h.cust == -1 || (mask & cmask))
            ans = recurse(swords, time + 1, mask);
        else
        {
            double p = h.prob / h.tprob;
            int mask2 = mask;
            if (h.next != -1)
                mask2 |= cmask;
            double base = recurse(swords, time + 1, mask);
            double reject = recurse(swords, time + 1, mask2);
            double yes = reject;
            if (swords > 0)
            {
                double accept = recurse(swords - 1, time + 1, mask2) + h.price;
                if (accept > yes) yes = accept;
            }
            ans = base * (1.0 - p) + yes * p;
        }
    }
    return cache[key] = ans;
}
 
double NewItemShop::getMaximum(int swords, vector <string> customers)
{
    cache.clear();
    fill(hours, hours + 24, hour());
 
    N = SZ(customers);
    int cidx = 0;
    vector<double> rprob(24);
    FE(s, customers)
    {
        vector<string> parts;
        splitstr(*s, parts);
        reverse(RA(parts));
 
        int t, c, p;
        int next = -1;
        int sprob = 0;
        FE(part, parts)
        {
            sscanf(part->c_str(), "%d,%d,%d", &t, &c, &p);
            hours[t].cust = cidx;
            hours[t].prob = p / 100.0;
            hours[t].price = c;
            hours[t].next = next;
            next = t;
            sprob += p;
        }
        rprob[cidx] = (100 - sprob) / 100.0;
        cidx++;
    }
    for (int t = 23; t >= 0; t--)
        if (hours[t].next != -1)
            hours[t].tprob = hours[t].prob + hours[hours[t].next].tprob;
        else if (hours[t].cust != -1)
            hours[t].tprob = hours[t].prob + rprob[hours[t].cust];
    return recurse(swords, 0, 0);
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/