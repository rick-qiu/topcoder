/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=3924
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

class CommunicableDisease {
public:
    string findSource(vector<string> contact, string results);
};

string CommunicableDisease::findSource(vector<string> contact, string results) {
    string ret;
    return ret;
}


int test0() {
    vector<string> contact = {"1", "2", "0"};
    string results = "CCN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "CNN";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> contact = {"1 2", "2 3", "3 0", "0 1", "1 2"};
    string results = "CCCCN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IIIIN";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> contact = {"1 7", "2 0", "3 1", "4 2", "5 3", "6 4", "7 5", "0 6"};
    string results = "CCCNNNNN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "NCNNNNNN";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> contact = {"1 7", "0 2", "3 1", "4 2", "5 3", "6 4", "7 5", "0 6"};
    string results = "CCCNNNNC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IINNNNNN";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> contact = {"1 7 3", "0 2 5", "3 1 6", "4 2 7", "5 3 0", "6 4 1", "7 5 2", "0 6 3"};
    string results = "CCCCCCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IIIIIIII";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> contact = {"1", "0"};
    string results = "CN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> contact = {"0 4 15 11 14 15 5 15 22", "21 2 4 3 14 22 16 32 16", "22 24 20 23 9 10 18 34 8", "4 20 15 25 30 14 33 7 15", "11 23 27 33 4 3 9 10 27", "5 12 27 30 9 31 26 17 0", "9 0 17 29 20 16 1 18 24", "30 28 26 5 2 27 16 12 26", "5 7 18 34 23 0 10 12 27", "2 26 25 1 6 14 2 15 30", "27 14 30 19 19 25 12 31 11", "8 22 6 23 18 0 16 23 2", "0 23 19 12 26 20 20 1 20", "8 33 13 31 27 24 14 15 18", "28 20 5 30 19 12 0 28 12", "0 2 4 23 14 3 18 6 3", "25 3 2 29 21 23 2 0 33", "18 34 5 22 31 29 32 11 32", "16 21 17 31 27 12 18 10 6", "6 25 7 29 10 29 22 9 4", "30 10 9 18 15 1 30 13 32", "5 23 34 33 33 2 21 25 28", "31 21 6 10 23 32 26 10 22", "11 11 27 18 21 15 30 10 18", "8 8 21 10 0 32 27 13 10", "7 7 28 17 19 2 26 12 14", "26 3 4 30 13 34 16 34 19", "6 4 17 8 6 28 26 2 13", "16 22 19 16 3 20 22 29 4", "5 21 5 13 30 25 10 24 27", "24 19 11 33 13 22 28 15 11", "5 19 28 9 28 10 31 11 32", "15 14 31 1 34 21 1 23 7", "15 7 15 21 11 14 19 16 14", "33 31 19 33 33 25 29 34 12"};
    string results = "CNNNNCNCCNCNNNCNCNCCNCCCNCNNCNNCNCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "INVALID";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> contact = {"4", "1", "24", "1", "20", "32", "12", "9", "8", "13", "29", "8", "5", "19", "31", "26", "1", "0", "23", "9", "33", "31", "16", "9", "34", "6", "34", "9", "1", "3", "16", "6", "24", "1", "1", "0"};
    string results = "NCNNNNNNNCNNNNNNCNNCCNNNNNNNNNNNNCNN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "NINNNNNNNNNNNNNNCNNCCNNNNNNNNNNNNINN";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> contact = {"13 20 14 5 4", "22 15 5 20 14", "20 25 24 13 8", "6 8 18 0 21", "10 2 10 25 4", "5 19 23 21 13", "10 21 24 13 20", "6 20 16 7 19", "15 25 17 15 21", "2 24 16 0 4", "16 7 19 5 15", "8 13 14 22 20", "20 15 15 16 18", "3 11 24 17 2", "19 22 9 21 16", "4 11 20 4 20", "5 20 6 21 19", "1 13 23 1 0", "4 23 13 25 0", "13 10 14 8 23", "22 2 1 12 23", "8 25 25 18 5", "23 1 22 5 20", "1 24 2 21 1", "21 9 14 1 1", "13 7 23 22 14", "7 5 2 19 15"};
    string results = "CNNNCCNNCCCNNCCCCNNCCCCCNNN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNNNNNNNNNNCNNNNNNNNNNNN";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> contact = {"18 21 17 9 18 1 7 0 3", "15 5 21 2 16 13 2 18 8", "15 16 3 1 1 17 19 6 3", "3 21 13 6 0 17 8 14 14", "21 5 8 18 10 16 3 8 8", "2 13 11 14 2 3 20 18 4", "11 11 9 10 11 12 12 3 1", "3 5 13 19 8 2 3 11 14", "7 12 4 11 1 2 8 0 3", "6 7 7 7 20 1 4 0 10", "3 16 4 3 4 11 21 9 8", "3 19 15 6 6 2 20 14 7", "22 1 9 9 10 12 8 6 14", "13 22 13 20 3 10 17 3 21", "5 22 21 19 18 8 14 22 18", "22 9 17 0 12 8 20 4 13", "5 12 17 20 20 18 8 12 1", "8 16 20 3 8 18 2 7 10", "11 10 14 15 4 5 4 16 19", "14 19 14 17 2 12 8 8 7", "22 20 20 17 9 16 15 11 8", "5 2 9 7 14 13 15 11 0", "11 17 20 22 7 13 22 0 13", "8 9 6 22 19 16 9 0 5"};
    string results = "CCCCCCCCCCCCCCCCCCCCCCCN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IIIIIIIIIIIIIIIIIIIIIIIN";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> contact = {"8 4", "27 14", "26 1", "3 23", "17 26", "22 2", "8 8", "7 7", "5 20", "1 5", "16 16", "27 0", "24 18", "23 17", "25 26", "14 12", "20 0", "14 9", "12 24", "15 6", "6 22", "6 20", "6 10", "12 22", "4 16", "9 3", "1 1", "3 20", "10 13"};
    string results = "NNNNNNCNNNNNCNNCNNCCNNNNCNNNN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNNNNNNNNNNNNNNCCNNNNNNNNN";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> contact = {"18 21 17 9 18 1 7 0 3", "15 5 21 2 16 13 2 18 8", "15 16 3 1 1 17 19 6 3", "3 21 13 6 0 17 8 14 14", "21 5 8 18 10 16 3 8 8", "2 13 11 14 2 3 20 18 4", "11 11 9 10 11 12 12 3 1", "3 5 13 19 8 2 3 11 14", "7 12 4 11 1 2 8 0 3", "6 7 7 7 20 1 4 0 10", "3 16 4 3 4 11 21 9 8", "3 19 15 6 6 2 20 14 7", "22 1 9 9 10 12 8 6 14", "13 22 13 20 3 10 17 3 21", "5 22 21 19 18 8 14 22 18", "22 9 17 0 12 8 20 4 13", "5 12 17 20 20 18 8 12 1", "8 16 20 3 8 18 2 7 10", "11 10 14 15 4 5 4 16 19", "14 19 14 17 2 12 8 8 7", "22 20 20 17 9 16 15 11 8", "5 2 9 7 14 13 15 11 0", "11 17 20 22 7 13 22 0 13", "8 9 6 22 19 16 9 0 5"};
    string results = "CCCCCCCCCCCCCCCCCCCCCCCN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IIIIIIIIIIIIIIIIIIIIIIIN";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> contact = {"0", "2", "1"};
    string results = "CNN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "CNN";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> contact = {"5", "31", "40", "45", "8", "18", "21", "6", "43", "2", "38", "8", "37", "37", "32", "32", "8", "37", "8", "33", "24", "44", "41", "33", "6", "34", "20", "2", "27", "33", "1", "8", "0", "1", "3", "28", "26", "5", "42", "44", "19", "16", "34", "44", "35", "37", "9", "13"};
    string results = "CCNCNCCCCCCCCCCCCCCCCCCNNCCCCCCCCCCCCCCCNCCCCCCN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IININIICINCCCCCCICICNICNNCCNCCCIIIIICIICNIIIIICN";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> contact = {"2 2 1 2", "0 0 3 3", "3 2 1 2", "3 1 0 0", "3 2 2 1"};
    string results = "CCCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IIIIC";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> contact = {"5", "31", "40", "45", "8", "18", "21", "6", "43", "2", "38", "8", "37", "37", "32", "32", "8", "37", "8", "33", "24", "44", "41", "33", "6", "34", "20", "2", "27", "33", "1", "8", "0", "1", "3", "28", "26", "5", "42", "44", "19", "16", "34", "44", "35", "37", "9", "13"};
    string results = "CCNCNCCCCCCCCCCCCCCCCCCNNCCCCCCCCCCCCCCCNCCCCCCN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IININIICINCCCCCCICICNICNNCCNCCCIIIIICIICNIIIIICN";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> contact = {"12 1", "17 11", "10 5", "24 39", "25 23", "30 16", "20 20", "23 35", "31 39", "19 31", "22 22", "4 35", "34 32", "15 20", "1 34", "17 12", "9 25", "31 7", "0 25", "34 22", "19 20", "13 38", "17 31", "20 35", "12 38", "27 13", "27 32", "0 21", "6 5", "14 9", "16 27", "31 3", "26 0", "13 0", "34 34", "20 12", "7 2", "0 34", "39 0", "39 33"};
    string results = "CCNCCCCCNCCCCCCCCCNCCCCCCCCCCCCCCCCCNCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IINIIIIINICIIIIIIINIIIIIIIIICCIIIIIINCII";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> contact = {"7", "1", "10", "24", "8", "17", "1", "24", "33", "36", "38", "13", "1", "31", "35", "12", "18", "6", "7", "10", "30", "37", "12", "30", "13", "1", "13", "5", "31", "4", "18", "25", "38", "7", "25", "28", "21", "37", "25"};
    string results = "CCNCCCCCCCCNCCCNCCCCCCCCCCNNCCCCNCCCCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "CINCICIIICINIICNCIICCICCIINNICIINICIIII";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> contact = {"3 42", "19 6", "33 39", "21 36", "1 38", "21 22", "21 46", "24 3", "2 16", "3 18", "11 9", "47 14", "43 6", "6 18", "47 38", "45 35", "46 11", "45 45", "37 10", "47 5", "3 19", "36 46", "46 26", "30 40", "17 3", "47 34", "3 13", "44 16", "20 21", "45 8", "22 43", "20 38", "38 33", "39 47", "21 32", "27 34", "24 5", "31 42", "24 9", "19 17", "23 46", "20 15", "32 37", "37 16", "9 28", "10 19", "8 20", "20 14"};
    string results = "NCCCNCCNCCCCNNCCCCCCCCNNCNNCCCNNCCCCCCNCNCCCCCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "NCIINNINIIIINNNIIIIIIINNINNIICNNNIIIINNINCICIIII";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> contact = {"4 16 32 20 23", "36 24 20 38 15", "21 5 35 10 21", "5 39 10 16 10", "21 36 42 5 21", "23 43 32 42 4", "22 15 13 10 11", "4 14 42 7 39", "33 30 11 25 13", "13 38 15 16 22", "32 35 20 18 28", "38 42 37 0 21", "6 21 8 6 15", "38 1 19 37 13", "1 18 25 12 25", "0 16 8 19 4", "16 5 41 33 5", "36 26 24 32 23", "36 23 14 2 0", "18 23 38 35 37", "4 10 37 4 20", "11 0 35 5 21", "42 5 24 20 32", "31 35 21 21 3", "21 41 31 4 12", "40 29 37 36 4", "16 37 15 21 12", "17 1 29 28 33", "30 13 41 11 31", "22 5 18 16 38", "20 19 15 16 24", "29 37 11 43 42", "22 15 6 15 10", "42 36 21 41 33", "4 27 36 39 15", "40 10 8 28 25", "22 31 23 12 34", "43 37 8 25 35", "6 41 10 8 19", "25 13 28 6 16", "31 28 5 13 23", "13 0 41 24 20", "24 25 18 24 2", "38 13 30 39 9"};
    string results = "NNCCCCNNNNNNCNNCCNNNNCNCCNNCCCNCNCCNCNCCNNCN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNCNNNNNNNNN";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> contact = {"15 42 29 42 6 23 30", "46 42 15 24 42 46 48", "22 33 42 12 33 32 37", "40 48 24 0 5 25 48", "12 12 23 45 36 1 10", "47 39 45 38 20 32 8", "7 8 15 22 30 42 30", "10 33 21 8 11 47 21", "27 4 32 24 2 2 3", "14 30 7 20 21 6 13", "36 14 7 4 4 22 26", "36 37 29 24 8 19 0", "41 34 24 8 0 25 17", "19 6 23 28 33 1 21", "3 3 14 33 23 7 37", "37 43 11 48 38 0 35", "8 25 10 10 29 45 10", "10 38 19 13 19 19 22", "46 26 39 5 7 47 7", "2 15 23 13 48 17 23", "9 36 0 38 3 36 32", "36 0 23 41 26 39 33", "46 30 31 42 37 15 16", "23 10 30 11 45 47 14", "15 14 29 2 8 11 48", "13 14 24 18 6 12 36", "47 6 14 42 42 6 28", "10 20 31 36 45 27 43", "0 26 14 21 41 9 42", "31 45 2 24 37 1 45", "2 42 5 20 17 44 22", "41 12 1 5 48 22 7", "26 14 1 17 0 36 17", "32 11 31 7 35 14 25", "24 4 18 33 0 16 47", "14 3 1 44 44 6 46", "5 15 12 2 17 47 26", "1 37 4 48 6 28 46", "42 20 13 14 30 21 41", "30 32 4 23 35 23 3", "28 8 43 31 43 20 16", "48 16 27 5 38 26 19", "32 41 3 31 43 13 24", "32 9 26 37 19 42 45", "25 28 34 47 18 37 3", "36 26 13 11 45 44 0", "17 37 24 35 27 11 37", "30 19 13 29 23 26 14", "38 10 14 18 34 29 15"};
    string results = "CCCCNCCCCNNCNCCNNCCNNCNCCCNNNNCNCCNCCCNNNNCNCNCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNCNNNNNNNNNNNNN";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> contact = {"39", "12", "23", "33", "6", "36", "41", "45", "7", "18", "11", "7", "45", "27", "28", "46", "14", "28", "5", "25", "39", "44", "26", "16", "26", "45", "25", "1", "3", "5", "16", "0", "40", "20", "27", "30", "30", "1", "10", "20", "8", "5", "17", "44", "27", "35", "26", "28"};
    string results = "NCCCCCCCNNNCCNNNCNNNCNNCCCCCNNCNNCCCCNNCNCNCCCNN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "NICCCIIINNNCINNNNNNNINNICIIINNINNICIINNININCIINN";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> contact = {"40", "7", "1", "24", "25", "30", "21", "24", "13", "27", "8", "24", "3", "36", "20", "41", "5", "25", "6", "18", "5", "33", "30", "20", "9", "34", "8", "18", "26", "18", "13", "37", "26", "21", "16", "25", "41", "23", "0", "37", "7", "41"};
    string results = "CCCCCCCCCCCNCCCCCCCCCCCCCCCCCCCCCCCCCCNNCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "CICICIIIIICNCICCICICIICIIIIICCICCIICIINNII";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> contact = {"6 7", "11 22", "12 18", "18 17", "29 19", "12 10", "36 37", "20 13", "34 24", "39 12", "5 33", "12 22", "25 34", "35 8", "4 25", "32 9", "20 9", "11 38", "13 27", "24 13", "20 28", "19 14", "11 1", "34 33", "24 0", "22 40", "10 8", "11 40", "14 4", "22 11", "32 1", "6 33", "24 32", "5 20", "15 12", "28 37", "32 17", "37 37", "7 3", "35 2", "16 18"};
    string results = "CCCCNCCCCCCCCCCNNCNCCCCNCNNNCCCCCCCCCCCCN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IINNNIIIICIININNNINIICININNNNCCCIINNIICIN";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> contact = {"14", "35", "21", "39", "15", "14", "2", "3", "44", "16", "18", "42", "24", "7", "8", "24", "11", "25", "19", "32", "21", "10", "41", "19", "20", "29", "18", "36", "5", "37", "11", "36", "28", "33", "27", "32", "18", "8", "10", "17", "17", "33", "23", "25", "23"};
    string results = "CCCNCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "CCINCICNNCIICCIIIIIIIICIIICIIICCIICIIICCCIICN";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> contact = {"7 2 7", "33 14 30", "17 14 32", "12 25 24", "5 26 35", "2 28 17", "30 26 14", "27 33 15", "28 25 9", "1 17 13", "32 7 14", "16 23 16", "0 30 13", "12 32 24", "7 6 6", "11 16 11", "15 4 34", "1 12 22", "20 23 0", "4 35 13", "11 8 32", "8 30 1", "8 8 23", "10 26 22", "10 28 18", "9 30 34", "24 13 33", "32 16 35", "10 33 13", "8 9 26", "21 33 22", "8 16 0", "20 17 13", "29 9 32", "21 32 6", "8 3 19"};
    string results = "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIICIIII";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> contact = {"18 3 27", "39 38 9", "22 16 9", "22 18 14", "16 5 1", "31 12 3", "1 3 26", "13 23 32", "5 23 8", "16 35 30", "23 40 39", "33 11 14", "39 33 22", "18 17 23", "19 14 26", "39 24 1", "38 17 26", "39 29 8", "7 15 28", "29 18 12", "3 1 32", "13 22 2", "11 8 15", "8 13 18", "6 20 30", "21 12 15", "21 2 29", "4 40 18", "22 11 40", "15 17 28", "3 20 5", "8 31 10", "8 17 23", "21 37 29", "1 11 36", "5 1 2", "32 34 35", "40 31 35", "14 36 8", "17 21 27", "3 11 25"};
    string results = "NCNNNNNNCNNNNCCCNCCNNNNCNNCNCNNNNNNCCNCNN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNNNNNNNNNCNNNNNNNNNINNNNNNNNNNNNNNCNN";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> contact = {"23 25 35 1 44", "32 21 16 24 35", "36 10 11 25 28", "10 6 37 0 6", "20 25 9 35 17", "29 11 37 37 38", "16 12 32 43 31", "7 37 12 19 38", "27 24 24 34 7", "41 27 5 28 5", "20 0 11 13 9", "15 14 38 36 9", "40 4 20 31 37", "39 4 36 16 0", "34 32 0 11 25", "6 26 14 7 25", "14 5 11 13 28", "17 44 45 31 18", "0 11 40 9 26", "42 21 34 41 21", "22 46 17 27 23", "5 14 34 4 36", "32 44 42 16 9", "12 31 24 14 11", "39 0 42 37 16", "14 16 34 9 32", "4 21 10 18 40", "27 25 5 7 18", "43 22 43 29 34", "24 30 17 41 11", "16 24 32 40 13", "46 19 34 1 9", "40 17 44 2 27", "11 30 34 39 18", "31 41 38 16 11", "45 40 27 27 42", "2 29 37 30 7", "37 28 22 21 39", "19 43 41 46 39", "14 18 1 36 36", "32 43 7 38 26", "3 11 11 34 15", "6 13 11 21 9", "46 31 24 39 29", "36 9 13 37 16", "3 27 34 29 44", "38 28 28 4 21"};
    string results = "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IIIIIIIICIIIIIIIIIIIIIIIIIIIIIIIICIIIIIIIIIIIII";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> contact = {"32 0 6", "17 42 47", "6 8 10", "19 41 5", "17 12 4", "35 24 45", "38 13 46", "42 1 37", "11 13 0", "35 49 3", "12 7 45", "14 41 4", "41 37 4", "33 26 28", "14 7 5", "15 5 23", "23 26 8", "36 22 26", "32 30 24", "48 38 5", "15 20 30", "29 5 28", "35 30 39", "30 27 47", "24 16 24", "38 20 15", "29 11 14", "31 21 20", "41 25 24", "23 38 8", "1 44 7", "19 48 19", "27 23 20", "11 32 14", "39 2 20", "13 2 39", "15 33 49", "11 14 36", "36 41 0", "9 5 26", "47 10 40", "30 24 37", "38 37 31", "14 18 10", "11 40 46", "33 12 2", "3 4 25", "45 12 38", "24 24 25", "8 24 15"};
    string results = "CNCCCCCCCNCNCCCNNNNNCNCCCCCNCNCCCCNCCCCCCCCNCCCCNC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "CNCNNIINNNINIIINNNNNNNCNNNNNNNNNNNNINNCNCCCNNICINN";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> contact = {"2 18 17", "24 8 23", "37 26 36", "39 34 34", "22 25 19", "14 35 22", "40 38 6", "37 39 8", "34 5 6", "35 33 24", "6 8 31", "25 11 18", "12 26 34", "11 36 17", "4 13 19", "13 1 36", "4 21 33", "24 2 35", "33 22 22", "1 38 5", "20 39 16", "23 9 37", "24 3 40", "22 34 13", "2 12 11", "3 19 36", "13 33 26", "36 27 15", "6 15 13", "21 2 16", "33 10 19", "38 2 18", "15 8 14", "17 13 9", "0 16 26", "40 0 1", "7 11 10", "23 30 14", "5 39 12", "16 17 35", "28 39 40"};
    string results = "CCCCCCCCCCCCCCCCCCCCCNCCCCCCCNCNCCCCCCCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IIIIIIIIIINIIIIINIIICNIIIIICINNNCIIIIIINI";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> contact = {"5 23", "23 18", "7 46", "3 38", "11 44", "34 33", "10 22", "27 7", "4 29", "45 35", "41 4", "26 8", "9 27", "2 2", "44 27", "38 37", "4 35", "5 39", "44 16", "11 30", "13 27", "41 28", "20 36", "12 44", "3 26", "32 13", "35 29", "11 20", "19 28", "20 6", "22 22", "2 38", "6 6", "22 16", "26 45", "25 6", "37 22", "13 30", "37 32", "4 35", "23 12", "8 30", "17 8", "18 40", "14 27", "13 11", "25 35"};
    string results = "NCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "NCIIIIIIIIIIIIICIIIIICIICIIIIIICIIIIIIIIIICCIII";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> contact = {"0 45 20", "4 3 35", "14 14 19", "48 25 25", "49 22 2", "48 29 45", "37 23 5", "47 6 5", "42 40 34", "1 12 23", "13 14 43", "25 4 3", "0 27 4", "28 31 29", "27 31 8", "8 8 26", "27 21 7", "10 0 36", "22 20 27", "12 44 6", "5 5 3", "22 13 42", "41 6 22", "38 26 20", "24 43 2", "25 44 3", "36 43 47", "3 40 3", "37 40 2", "49 30 11", "12 0 32", "19 10 22", "44 35 10", "34 48 12", "18 29 41", "4 37 11", "45 42 2", "4 35 17", "37 33 29", "49 33 21", "48 1 15", "3 47 22", "32 17 30", "11 24 28", "37 19 18", "32 35 44", "39 27 12", "35 49 29", "25 42 26", "5 36 25"};
    string results = "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IIIIIIIIICIIIIIICIIIIIIIIIIIIIIIIIIIIIIIIIIIIICIII";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> contact = {"27", "0", "27", "6", "24", "23", "5", "3", "3", "19", "8", "3", "25", "33", "27", "25", "33", "21", "4", "8", "21", "11", "34", "5", "10", "15", "4", "16", "14", "31", "34", "16", "35", "17", "31", "0"};
    string results = "CCCCCCCCCNCCNCNCCNNNCCCNCCCCNNNCNCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "ICCIINCCINIINCNIINNNCICNIICINNNINNIC";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> contact = {"5", "10", "37", "15", "42", "14", "12", "39", "40", "29", "6", "11", "8", "34", "4", "29", "2", "20", "42", "2", "9", "7", "42", "10", "37", "38", "42", "1", "22", "34", "29", "32", "11", "31", "12", "8", "5", "18", "6", "18", "14", "10", "37"};
    string results = "NNNNNNNNNNCNNNNNNCNNCNNNNNNNNNNNNNNNNNNNNCN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNNNNNNNNNNNNNCNNNNNNNNNNNNNNNNNNNNNNNCN";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> contact = {"46 38 13", "41 25 24", "21 20 3", "5 21 48", "42 7 47", "41 17 5", "38 11 27", "3 18 6", "7 48 6", "1 19 11", "12 25 1", "44 42 12", "14 28 32", "32 6 21", "37 7 5", "23 42 25", "28 20 2", "7 46 16", "37 35 47", "11 25 14", "39 41 41", "14 39 42", "31 22 43", "48 39 0", "11 13 38", "22 13 9", "12 49 23", "12 24 18", "36 47 31", "13 47 28", "27 33 30", "3 34 38", "10 44 39", "39 5 3", "30 23 28", "48 46 1", "30 34 5", "0 11 24", "46 26 37", "32 36 12", "35 19 9", "7 49 39", "29 39 47", "49 49 1", "1 10 49", "8 43 15", "48 12 5", "44 19 27", "46 44 4", "20 8 20"};
    string results = "NCNCCCCNCCCNCNNCCCNNCNNNNCNNCNCCCCCNCNNCNCNCNCNNCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNCNNNNCNNNNNNNNNINNNNNNNNNNNNINNCNNNNNNINCNNNI";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> contact = {"13", "39", "40", "40", "12", "13", "33", "1", "39", "3", "11", "7", "12", "8", "8", "33", "21", "16", "12", "37", "12", "28", "12", "10", "38", "32", "35", "44", "3", "34", "37", "6", "34", "3", "24", "37", "8", "44", "6", "37", "13", "38", "11", "43", "9"};
    string results = "NNNNNCNNNNNCCCNNNNCNCNCNNNNNNCNNNNCNNNNNNNCNN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNNCNNNNNNINNNNNCNCNCNNNNNNCNNNNNNNNNNNNCNN";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> contact = {"20 29 20 39", "8 36 40 3", "36 44 32 42", "13 28 37 14", "4 29 27 5", "25 45 42 46", "0 12 10 33", "30 36 10 5", "0 38 45 27", "40 46 3 7", "38 8 15 31", "31 28 42 11", "12 37 19 28", "1 32 32 42", "8 0 6 22", "25 46 34 14", "25 45 18 15", "45 28 2 4", "41 4 6 28", "25 17 17 42", "10 46 32 38", "22 25 23 17", "27 5 21 37", "23 30 6 11", "18 40 5 6", "24 16 28 29", "34 20 42 38", "31 14 47 46", "20 11 7 21", "13 42 16 38", "46 0 10 4", "12 41 11 15", "17 41 44 22", "47 0 35 23", "36 11 29 2", "38 39 8 27", "12 17 26 46", "41 9 2 29", "38 21 9 5", "10 34 20 31", "40 21 9 18", "38 47 44 37", "5 47 37 18", "34 1 47 7", "24 4 31 38", "15 10 31 12", "37 24 22 46", "39 29 6 15"};
    string results = "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCNCCCCCCCCCCCCCCCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IIIIIIINIIIIIIIIIIIIIIINIIIIIINIIIIIIIIIIIICIIII";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> contact = {"3 9 36", "5 23 10", "29 43 6", "8 42 46", "26 48 25", "48 14 19", "26 9 4", "42 3 33", "25 43 28", "6 31 17", "16 1 12", "14 4 21", "20 20 41", "34 3 7", "30 46 47", "47 1 24", "44 24 29", "36 22 1", "23 41 41", "11 3 26", "20 0 18", "38 18 35", "41 37 35", "33 7 5", "17 46 33", "38 33 47", "44 46 1", "42 11 0", "9 15 14", "23 12 27", "1 44 29", "17 24 6", "30 39 46", "38 29 17", "14 15 12", "33 17 16", "22 10 32", "19 14 19", "35 7 48", "11 44 2", "46 16 24", "32 17 33", "43 21 42", "43 10 14", "47 15 33", "45 15 22", "45 7 41", "36 0 33", "41 32 46"};
    string results = "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCNCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IIIIIIIIIIIIICIIIIIIIIIIIIIIIIIIIIIIIIIICIIIINNII";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> contact = {"12 4", "24 17", "20 20", "41 13", "1 42", "43 27", "3 32", "5 10", "37 20", "9 0", "38 30", "7 17", "29 27", "26 20", "31 35", "24 16", "20 23", "24 12", "7 43", "19 19", "31 44", "23 4", "39 1", "38 10", "6 39", "29 4", "6 34", "34 14", "42 17", "23 20", "19 24", "1 21", "36 15", "29 7", "3 39", "26 43", "2 14", "32 27", "14 33", "25 8", "37 20", "31 25", "7 15", "38 4", "42 25"};
    string results = "CCCCCNCCCCNNCCCCCCNNCCNCCCCCNCNCCCCCCCCCCNCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IIINININICNNIIIICINNINNNIIIINNNIICIIIIIICNNII";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> contact = {"42 4 1 25 1", "25 11 8 45 45", "35 13 33 35 28", "25 36 19 33 33", "7 18 15 41 41", "37 18 19 11 42", "5 21 21 3 33", "12 22 31 14 36", "8 0 5 9 40", "12 11 11 38 1", "17 8 8 30 32", "41 32 34 2 11", "24 41 24 13 28", "18 43 0 18 35", "10 25 4 31 17", "20 1 12 3 7", "26 38 46 19 11", "27 12 8 12 15", "34 41 3 31 26", "37 36 31 3 1", "25 25 22 18 9", "42 33 46 15 43", "27 12 43 37 3", "7 17 30 3 35", "36 34 45 17 7", "31 38 16 44 11", "15 18 46 32 25", "27 41 7 29 27", "9 8 4 22 20", "16 19 18 15 6", "31 17 16 19 16", "39 8 4 16 35", "7 42 11 11 1", "30 21 42 30 23", "19 23 23 43 27", "22 20 9 27 9", "28 35 22 3 15", "20 31 14 8 27", "8 41 24 46 45", "19 4 9 37 5", "21 22 45 43 37", "36 3 16 45 45", "32 27 7 1 0", "17 6 12 31 41", "7 0 25 11 17", "46 44 18 9 38", "13 41 41 15 8"};
    string results = "CCCCCCCCCCNCCCCCCCCCCNCCCCCCCCNCCCCCCCCCCCNCCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "NINIINNININIIINIIINIINININIININNNNNININCNINNIII";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> contact = {"8 13", "1 12", "11 24", "17 46", "47 18", "32 20", "45 9", "18 8", "32 12", "27 44", "36 20", "37 31", "39 0", "0 28", "1 22", "31 40", "16 29", "46 29", "34 47", "23 27", "10 45", "31 4", "22 31", "2 37", "1 39", "21 32", "25 1", "39 38", "21 47", "36 7", "0 17", "22 37", "4 31", "27 23", "48 34", "13 22", "20 4", "4 46", "15 24", "7 16", "40 36", "12 47", "19 8", "0 8", "49 10", "44 42", "20 2", "0 27", "12 8", "6 18"};
    string results = "NNCCCNCNCCCNNNNNCCCNCCNNNNNCCCNNNNCNCNCCCNCNNCCCCN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNCINCNNNINNNNNIIININNNNNNCCNNNNNCNINNNCNNNNNINNN";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> contact = {"14 1 41 38 23 17", "26 27 38 19 15 15", "16 16 12 24 11 15", "34 5 9 37 34 4", "14 35 21 13 13 29", "34 33 9 9 3 33", "42 6 11 14 31 15", "29 8 14 27 31 39", "31 10 28 13 37 20", "23 42 13 23 35 32", "22 25 10 14 27 29", "21 42 19 31 15 24", "37 11 36 39 38 6", "41 29 27 11 5 27", "29 15 12 24 27 9", "37 31 29 31 30 6", "0 6 4 39 24 9", "18 1 7 25 12 41", "11 32 8 14 15 7", "34 0 12 18 12 7", "36 19 34 2 31 6", "6 32 36 30 20 27", "14 14 19 22 42 14", "20 3 12 35 35 23", "11 18 17 18 13 11", "26 22 11 14 11 32", "24 32 13 29 37 7", "35 37 6 33 30 29", "11 5 17 15 21 35", "12 17 1 15 0 0", "30 18 23 21 25 5", "3 11 31 25 15 14", "11 32 20 27 30 13", "7 21 2 22 14 8", "28 4 39 38 17 13", "38 2 24 36 1 11", "2 15 13 4 21 28", "36 35 36 34 10 14", "37 42 30 8 4 32", "35 12 20 25 23 4", "40 1 25 25 18 36", "1 6 36 13 36 5", "17 19 36 14 35 13"};
    string results = "CCCNCCCCCCCCCCCCNCCNCCCCCCNCCCCCCCCCCCCCNCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "NNNNINNNNNNNNNNINNNNNINNNNNINNINNCNINIIINNN";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> contact = {"27 27 32", "6 1 8", "23 14 18", "15 4 15", "10 29 15", "6 27 12", "12 6 4", "30 4 1", "3 21 9", "22 16 11", "11 29 2", "5 16 20", "22 32 11", "0 14 27", "28 0 11", "2 25 14", "23 24 11", "13 6 26", "6 1 1", "27 14 28", "0 18 3", "12 28 27", "30 20 18", "3 27 21", "28 16 15", "21 26 29", "24 12 11", "1 18 21", "10 28 17", "19 6 9", "3 11 16", "7 5 6", "17 16 26"};
    string results = "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IIIIIIIIIIIIIIIIIIIIIIIIIIIIIIICI";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> contact = {"37 13 46", "27 48 4", "22 38 0", "47 35 25", "42 7 32", "22 18 4", "27 44 49", "30 18 30", "22 20 2", "2 29 19", "33 1 12", "48 46 26", "44 5 28", "36 31 45", "8 22 47", "15 16 26", "44 37 15", "10 28 16", "2 1 16", "18 44 29", "46 32 5", "39 16 11", "46 11 18", "36 2 1", "20 32 31", "27 30 13", "1 31 24", "7 43 0", "18 37 25", "12 43 34", "38 37 5", "28 48 26", "31 24 15", "0 47 32", "2 35 9", "11 14 8", "35 15 13", "34 24 40", "27 7 28", "17 28 19", "5 46 2", "29 29 24", "11 43 1", "35 27 14", "10 10 0", "1 16 34", "32 21 9", "25 10 1", "8 6 41", "24 23 14"};
    string results = "CCCNCCNNNCCCCCCCCCCCNCCCCCCNCCCCCCCNNCCCCCNNCCCCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "ININNINNNIININNIIIIINIINNNININNIIINNNNNIINNNIIICNC";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> contact = {"1 31", "48 21", "26 6", "10 38", "12 22", "0 5", "33 14", "4 0", "8 35", "43 3", "10 4", "0 12", "43 11", "7 23", "48 8", "13 3", "32 46", "32 29", "12 48", "27 34", "43 36", "7 19", "18 0", "11 3", "35 44", "40 6", "43 10", "47 33", "48 18", "10 25", "12 22", "5 15", "0 34", "4 0", "12 4", "14 0", "15 19", "21 27", "47 37", "13 36", "12 42", "41 38", "11 26", "39 7", "10 21", "32 4", "6 47", "33 35", "8 41", "49 37"};
    string results = "CCNCCNCCCCCCCCCCCCCCNCCCCNCCNCNCCCCCCCCCCCCCCCCCCN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IINIINIIICIIIIIICCIINIIICNIINNNNIIIIIIIICIIIICIIIN";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> contact = {"19 24", "8 4", "8 13", "28 25", "15 22", "27 29", "24 29", "29 10", "27 25", "17 33", "33 6", "9 3", "34 14", "6 3", "14 9", "15 20", "26 22", "19 7", "2 20", "12 32", "20 13", "32 3", "26 34", "20 22", "15 7", "2 17", "33 0", "22 10", "23 16", "21 29", "34 23", "15 0", "0 6", "21 3", "21 24"};
    string results = "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "ICIIICIIIIICIIIIIICIIIIIIIIIIICCIII";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> contact = {"0 12 24 23", "16 12 10 25", "0 5 8 28", "32 14 11 36", "32 3 31 19", "35 37 17 12", "23 25 37 5", "20 33 16 35", "3 33 26 33", "35 25 0 32", "12 25 3 23", "36 14 12 18", "37 18 15 33", "30 23 23 3", "29 13 34 23", "35 36 31 3", "6 10 33 15", "29 10 0 27", "33 4 4 12", "34 30 24 11", "11 18 3 8", "11 29 32 35", "24 27 32 21", "14 33 11 19", "36 9 15 17", "18 30 18 24", "4 20 36 12", "31 32 33 9", "0 32 37 11", "35 27 12 9", "8 33 23 11", "26 7 35 23", "9 24 34 15", "34 16 33 30", "9 9 33 9", "21 21 34 26", "11 0 26 8", "36 17 24 33"};
    string results = "CNNCNCCCCCNCCCCCCCCCCCCCCCCCNCCCCCCCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "INNINICNIININIIINNNINICIINNINIICIIIIII";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> contact = {"31 15 33", "31 19 31", "14 6 14", "20 7 9", "8 31 20", "37 39 40", "12 24 0", "16 30 30", "40 10 17", "21 8 0", "17 12 11", "17 3 17", "40 20 20", "31 25 22", "2 21 21", "1 20 24", "9 5 2", "4 3 17", "8 6 36", "11 31 28", "28 11 25", "17 13 30", "19 25 39", "12 14 6", "23 21 20", "10 22 5", "11 23 17", "27 10 31", "6 11 9", "15 22 29", "2 29 23", "33 25 16", "6 1 14", "40 22 28", "16 30 5", "34 32 10", "4 10 9", "12 18 23", "23 11 30", "23 19 25", "7 7 9"};
    string results = "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IIIIIIIIIIIIIIIIIIIIIIIIIICCIIIIIIICIICII";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> contact = {"46 43 17 44 43", "6 25 42 28 43", "35 11 3 38 31", "19 16 3 3 5", "40 27 4 45 20", "6 4 9 8 36", "25 2 46 39 22", "9 46 24 8 28", "29 42 31 39 16", "12 7 7 27 23", "34 27 42 23 3", "19 26 7 10 26", "21 37 7 16 9", "36 13 0 20 1", "4 1 30 29 10", "39 3 24 8 25", "28 15 45 13 8", "12 9 0 44 44", "24 18 4 31 9", "13 20 8 9 6", "32 19 1 29 21", "6 41 15 18 0", "7 43 22 15 24", "1 23 30 10 21", "28 26 20 19 24", "38 2 29 20 5", "0 16 7 36 19", "5 36 10 47 3", "1 23 40 1 15", "10 24 41 43 15", "41 8 32 37 0", "2 22 46 39 19", "43 47 22 16 44", "39 13 44 1 45", "15 7 2 2 14", "32 10 21 16 11", "6 37 11 45 42", "1 2 36 1 27", "28 4 14 44 45", "44 4 1 3 39", "46 34 31 47 44", "19 14 11 42 36", "36 25 15 3 36", "39 15 18 45 27", "29 34 36 19 1", "30 10 7 18 37", "11 10 0 15 19", "15 0 32 44 39"};
    string results = "CCCCCCCCCCCCNCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IIIIIIIIINIINIIIINIIIIIIIIIIIIIIICIIIIIIIIIIIIII";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> contact = {"27 40", "26 21", "29 21", "38 20", "5 39", "27 16", "28 8", "18 40", "36 17", "7 36", "24 39", "23 34", "36 36", "8 6", "12 18", "30 2", "2 0", "38 21", "25 39", "25 36", "18 10", "14 24", "23 1", "34 31", "34 4", "36 8", "31 40", "0 8", "5 22", "23 13", "22 13", "26 6", "22 9", "13 15", "1 7", "9 33", "2 34", "40 12", "39 29", "40 0", "17 22"};
    string results = "CCCNCCCCCCCNCCNCCCCCCCCCNCCCNCCCCCCNCCNCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "IIINCINIIINNIINIINICCNIINIIINIIICCINICNII";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> contact = {"0 16 31 32", "7 30 4 28", "29 28 19 22", "23 15 0 2", "3 11 21 32", "22 27 13 30", "6 4 4 22", "12 17 27 0", "26 30 9 11", "7 12 6 16", "1 31 18 2", "8 27 20 27", "24 27 22 22", "24 0 17 26", "20 7 25 22", "28 9 13 6", "4 4 18 4", "7 21 12 14", "26 15 23 13", "7 1 31 29", "24 12 13 7", "2 13 2 9", "6 21 8 24", "6 31 23 25", "22 28 11 32", "24 6 10 10", "26 14 8 31", "24 4 19 21", "11 0 28 15", "24 29 5 11", "23 21 2 19", "1 1 31 18", "24 26 11 6"};
    string results = "CCCNCNCCCCNCNCNNCNCCCCCNCNNCCCCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "CNNNNNINNNNCNNNNINNNNNCNNNNNNNNCN";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> contact = {"37", "14", "26", "2", "2", "35", "45", "19", "44", "40", "6", "23", "30", "33", "3", "0", "9", "23", "3", "10", "23", "15", "1", "21", "1", "45", "42", "41", "6", "44", "37", "27", "31", "12", "22", "27", "15", "22", "12", "12", "19", "26", "13", "30", "40", "10"};
    string results = "CCNCNCCNNNCNCNNNNCCNCNCCCNCCNCCCCNNCNCNNCCNNCN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "CNNNNCNNNNCNCNNNNCCNCNINCNNINCIICNNININNNCNNCN";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> contact = {"25", "42", "34", "27", "6", "32", "35", "8", "4", "5", "25", "4", "4", "9", "17", "1", "12", "29", "16", "20", "24", "12", "0", "24", "23", "1", "14", "9", "41", "36", "13", "35", "0", "7", "30", "5", "19", "17", "21", "43", "36", "20", "27", "9", "27"};
    string results = "CCNNCCCNNNNNCCNNCNNNNNNNNCNNNNCCNNNCCNNNCNNNN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "CNNNININNNNNINNNCNNNNNNNNCNNNNCCNNNCNNNNCNNNN";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> contact = {"0", "1", "2", "0", "4"};
    string results = "CCCCN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "ICCCN";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> contact = {"1", "2", "0"};
    string results = "NNN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "NNN";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> contact = {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"};
    string results = "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "ICCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> contact = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30"};
    string results = "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> contact = {"1 2", "1 1", "2 2"};
    string results = "CCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "CII";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> contact = {"1", "2", "3", "4", "5", "6", "7", "8", "9", "8", "7", "6", "5"};
    string results = "CCCNNNNNNNNNN";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "CCNNNNNNNNNNN";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> contact = {"0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0", "0"};
    string results = "CCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
    CommunicableDisease* pObj = new CommunicableDisease();
    clock_t start = clock();
    string result = pObj->findSource(contact, results);
    clock_t end = clock();
    delete pObj;
    string expected = "ICCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCCC";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=6521&pm=3924
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
#define FOREACH(it,c) for(typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
typedef long long LL;
typedef vector<int> VI;
typedef vector<string> VS;
template<class T> inline int size(const T&c) { return c.size(); }
template<class A,class B> inline bool contains(const A&a, const B&b) {
  return find(a.begin(),a.end(),b)!=a.end();
}
int s2i(string s) { istringstream i(s); int x; i>>x; return x; }
VS split(string s,string del=" ") {
  s+=del[0];
  string w;
  VS res;
  FOREACH(it,s) {
    if(!contains(del,*it)) w+=*it;
    else if(w!="") { res.push_back(w); w=""; }
  }
  return res;
}
VI s2vi(string s,string del=" ") {
  VS v=split(s,del);
  VI res; FOREACH(it,v) res.push_back(s2i(*it));
  return res;
}
 
int n;
int nrounds;
vector<VI> edge; // [i][round]
LL from[64];
LL from2[64];
 
void cFrom() {
  REP(i,n) from[i] = 1LL<<i;
  REP(r,nrounds) {
    REP(i,n) from2[i]=from[i];
    REP(i,n) from2[edge[i][r]] |= from[i];
    REP(i,n) from[i]=from2[i];
  }
}
 
struct CommunicableDisease {
 
  // MAIN
  string findSource(vector <string> contact, string results) {
    n = size(contact);
    edge.resize(n);
    REP(i,n) edge[i]=s2vi(contact[i]);
    nrounds = size(edge[0]);
    cFrom();
    LL zero = 0;
    REP(i,n) {
      if(results[i]!='C') 
        zero |= from[i];
    }
    LL must = 0;
    REP(i,n) if(results[i]=='C') {
      LL a = from[i] &~ zero;
      if(!a) return "INVALID";
      if((a&(a-1))==0) must |= a;
    }
    string res;
    REP(i,n) {
      if(zero&(1LL<<i)) res+='N';
      else if(must&(1LL<<i)) res+='C';
      else res += 'I';
    }
    return res;
  }
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/