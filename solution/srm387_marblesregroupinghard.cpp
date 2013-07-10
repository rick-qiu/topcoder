/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=8538
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

class MarblesRegroupingHard {
public:
    int minMoves(vector<string> boxes);
};

int MarblesRegroupingHard::minMoves(vector<string> boxes) {
    int ret;
    return ret;
}


int test0() {
    vector<string> boxes = {"0"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> boxes = {"77 97", "8 0"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> boxes = {"6 97 7", "73 45 0", "67 45 63"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> boxes = {"88 55 47 92", "0 0 59 0", "69 0 61 75", "2 94 4 0"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 330;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> boxes = {"97 94 0 99", "1 72 46 45", "0 10 47 75", "0 92 76 20", "2 25 98 22"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 559;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> boxes = {"0 4 47 76 5 52", "48 0 0 86 15 53", "0 0 0 0 38 70", "94 72 51 38 31 22", "0 24 98 5 0 0", "0 42 68 9 86 73"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 757;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> boxes = {"62 0 81", "0 84 63", "1 23 0", "0 0 74", "88 85 90", "27 24 92", "24 0 43"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 597;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> boxes = {"0 95 32 34 71 64 51 0", "52 0 51 47 13 15 95 7", "13 50 0 67 92 12 53 0", "6 13 55 27 91 0 0 40", "94 66 88 33 9 0 88 96", "0 98 44 25 69 11 1 59", "44 0 94 5 28 96 72 9", "0 94 64 94 79 29 91 0"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 2046;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> boxes = {"0 14 15 22 60", "94 52 0 0 45", "99 0 1 45 15", "68 58 0 34 36", "83 0 0 0 0", "9 0 0 0 0", "5 0 0 0 25", "96 0 30 9 17", "0 65 20 0 69"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 790;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> boxes = {"60 16 0 0 92 77", "84 14 0 0 0 0", "75 85 30 90 64 17", "37 0 41 36 86 25", "97 78 50 0 82 44", "23 79 70 59 59 54", "0 63 41 10 0 55", "58 20 0 0 52 0", "0 64 80 66 61 0", "4 61 0 68 94 9"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 1913;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> boxes = {"0 39 0 70 0 0 35 0 80 9 0", "2 10 53 26 0 0 19 16 9 0 93", "0 13 99 0 0 57 73 0 0 0 0", "33 0 1 0 0 43 10 34 40 58 22", "35 0 90 0 0 0 33 4 81 46 0", "0 34 0 98 69 26 0 0 0 0 89", "98 84 0 97 63 2 62 96 0 88 34", "0 62 88 0 50 1 4 3 45 11 6", "19 95 0 63 42 0 0 0 59 0 30", "82 81 20 69 66 82 95 36 46 57 85", "61 95 72 0 70 43 56 0 76 92 61"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 3204;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> boxes = {"0 12 51 85 87 0 21 99", "42 52 73 97 85 12 94 55", "0 35 93 73 89 79 10 56", "56 34 39 46 86 87 4 83", "39 52 85 71 26 67 0 32", "0 0 65 84 91 0 49 0", "0 38 19 32 26 56 22 0", "0 58 14 0 0 90 54 0", "0 0 68 38 1 96 0 54", "33 6 23 63 1 36 0 0", "92 91 0 23 46 62 11 57", "16 0 36 0 20 34 49 75"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 3134;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> boxes = {"25 29 79 0 0 0 60 4 43 58 0 79", "0 67 0 0 0 19 0 14 66 0 68 40", "0 84 88 0 83 40 48 21 36 89 0 39", "42 0 0 18 26 17 0 0 0 0 88 45", "6 35 41 0 20 85 98 23 13 79 49 7", "28 65 95 80 67 0 81 24 13 30 0 2", "0 24 2 9 55 0 20 0 24 88 63 0", "12 60 68 0 56 30 52 65 96 74 42 0", "62 1 0 77 3 0 34 88 0 0 1 70", "1 96 79 36 9 57 48 99 77 0 0 80", "13 0 86 0 13 45 10 80 0 62 88 37", "20 0 3 0 66 0 91 96 0 67 0 8", "43 61 44 88 88 35 0 0 81 0 41 81"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 4430;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> boxes = {"0 30 64 72 3 83", "19 79 47 90 96 87", "68 86 31 0 91 57", "89 18 0 11 28 50", "0 0 48 0 97 0", "58 56 69 54 47 75", "60 45 50 10 84 89", "13 12 7 40 73 21", "41 12 21 7 99 54", "0 50 17 10 21 0", "0 34 70 0 0 71", "0 0 94 33 4 78", "0 40 1 0 0 0", "22 0 0 0 35 0"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 2474;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> boxes = {"94 95 46 94 68 42 66 0 61 0 48", "93 0 0 0 93 77 45 11 21 56 72", "23 91 28 4 91 18 14 0 82 38 84", "0 93 19 61 2 60 20 2 9 0 93", "0 35 0 61 13 68 44 24 6 0 10", "90 40 0 0 42 93 0 0 85 1 81", "66 37 93 56 58 90 52 7 75 65 20", "26 85 0 0 91 6 43 79 82 42 0", "0 35 58 0 23 39 0 22 3 63 0", "64 76 0 38 0 0 34 55 48 53 84", "72 53 58 69 85 0 10 71 48 0 5", "39 30 0 69 43 40 97 47 57 85 0", "22 90 65 0 0 12 81 91 79 76 0", "0 48 23 24 0 25 53 81 10 62 98", "0 82 72 0 0 52 0 42 30 17 31"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 5631;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> boxes = {"33 33 0 25 0 1 0 37 39 0 0 42 0", "68 63 67 58 63 3 0 25 19 0 55 0 18", "48 47 51 30 0 0 0 19 10 0 79 0 0", "4 0 56 93 57 83 97 67 23 81 60 0 58", "11 13 54 6 98 0 96 74 24 0 76 67 23", "46 88 0 18 0 84 0 37 17 6 13 0 17", "52 36 37 13 13 97 0 87 5 0 25 8 73", "8 89 0 89 55 0 12 30 87 15 89 50 59", "0 23 72 0 26 78 35 37 91 98 0 0 43", "64 3 0 48 0 18 0 0 52 22 27 54 36", "74 30 0 16 30 5 0 37 82 0 0 0 0", "0 83 0 21 62 40 0 31 0 69 44 73 78", "33 17 48 94 39 30 31 34 85 0 80 30 42", "0 0 67 22 42 9 78 35 0 44 43 46 57", "73 0 78 2 0 54 83 22 2 0 87 12 82", "61 47 0 17 50 32 85 6 0 0 63 9 82"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 5955;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> boxes = {"29 23 3", "0 0 55", "6 60 23", "97 84 7", "0 95 13", "73 37 61", "0 87 24", "0 19 17", "30 36 0", "79 89 61", "98 74 90", "92 0 19", "12 35 23", "91 67 0", "0 0 52", "0 97 90", "0 31 56"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 1751;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> boxes = {"72 0 42 69 62 31 41", "0 0 7 85 0 77 6", "90 0 60 31 14 87 36", "0 68 0 58 0 49 78", "0 11 26 69 24 0 58", "0 0 91 47 51 49 10", "79 1 0 9 0 9 35", "63 51 76 36 55 26 0", "14 72 43 0 0 10 21", "83 14 97 64 31 0 96", "27 0 60 5 60 42 46", "79 0 37 0 54 0 60", "0 23 82 50 49 15 73", "0 38 26 79 90 74 88", "40 76 5 0 0 96 42", "60 49 0 97 11 92 0", "0 21 0 17 25 70 32", "0 73 11 36 28 37 0"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 3926;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> boxes = {"52 89 38 81 64 52", "0 95 51 57 0 85", "0 0 0 0 34 91", "95 82 49 97 55 20", "78 60 7 78 0 83", "0 0 84 8 39 75", "96 0 85 3 85 45", "47 63 0 89 5 50", "64 0 84 71 68 65", "11 12 53 84 19 0", "0 0 46 33 82 88", "12 28 80 0 85 11", "0 46 92 25 77 42", "97 0 38 40 99 93", "0 19 0 0 18 0", "0 49 63 31 64 43", "93 27 0 75 33 48", "94 57 44 30 25 19", "36 0 57 54 44 43"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 4408;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> boxes = {"24 99 0 16 52 72 43 90 87 0 12 17 61", "2 1 51 0 77 0 69 53 0 50 0 91 7", "30 6 13 25 0 56 21 94 0 84 0 3 83", "90 0 50 0 11 57 52 0 0 18 0 47 0", "89 89 0 75 47 22 0 75 0 39 0 27 0", "99 95 0 19 0 0 61 1 86 0 0 91 80", "0 0 0 4 51 0 98 11 0 37 90 55 0", "84 0 56 34 43 90 18 0 81 90 0 0 39", "34 0 0 0 0 38 64 0 77 12 54 0 63", "99 95 26 46 36 0 0 44 0 92 59 0 49", "82 24 37 53 2 38 64 0 41 23 0 70 0", "6 52 6 0 0 51 0 7 10 9 40 0 93", "66 13 63 30 46 0 0 87 73 96 52 0 25", "98 3 0 28 80 4 72 0 9 37 59 48 0", "0 89 71 98 74 3 91 0 71 82 2 0 96", "18 87 77 21 41 41 42 99 84 0 54 92 12", "69 0 62 93 50 21 31 40 66 0 18 0 24", "51 24 0 94 0 0 42 15 31 80 75 0 79", "0 38 0 0 0 0 0 41 0 83 27 95 13", "56 0 11 97 18 78 5 42 78 4 44 7 94"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 8129;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> boxes = {"0 27 0 40 49 0 18 0 65 86 0 3 0", "49 0 0 7 80 7 82 73 72 12 29 69 0", "0 92 48 97 6 71 24 27 1 0 32 50 52", "14 72 1 0 32 81 76 17 52 93 24 44 95", "94 57 79 0 0 35 0 82 60 74 10 90 42", "5 49 89 0 52 27 0 55 0 64 53 0 0", "71 1 58 91 78 30 0 9 55 0 92 77 15", "38 56 11 48 49 69 81 38 69 6 0 45 0", "16 0 38 74 0 76 79 0 77 0 90 29 0", "57 0 37 40 0 64 0 41 35 36 33 47 7", "32 0 16 0 65 93 57 93 89 50 0 4 0", "0 0 0 99 10 0 21 88 67 2 21 13 17", "90 65 0 0 0 46 4 0 0 89 19 66 5", "24 56 9 70 37 0 0 0 14 30 0 0 60", "66 70 0 67 94 25 11 16 23 68 48 1 77", "53 0 80 91 83 24 39 0 61 55 59 57 0", "0 0 0 92 42 27 0 37 0 0 0 25 95", "64 0 0 54 16 51 43 0 0 25 69 60 90", "24 0 86 67 82 39 12 56 85 39 62 93 0", "67 57 98 96 17 84 3 0 73 90 19 11 0", "21 0 41 87 0 80 37 31 32 14 46 0 0"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 8794;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> boxes = {"0 0 65 88 86 62 14 3 0 17 0 60", "34 0 84 38 94 54 86 0 49 47 25 0", "63 0 0 22 0 0 87 0 57 12 94 0", "28 0 59 83 0 83 5 25 76 10 61 49", "82 62 39 86 43 72 33 8 0 27 44 39", "0 14 63 37 7 46 77 0 16 39 40 43", "0 0 87 6 46 30 48 74 55 0 94 40", "7 92 68 0 20 66 0 0 32 18 75 15", "16 49 0 71 18 88 90 4 27 46 17 50", "1 39 22 0 20 0 0 0 29 87 59 94", "71 13 0 30 45 99 37 7 43 0 27 6", "33 27 45 2 87 65 89 69 0 92 78 59", "0 62 77 0 36 8 0 0 53 63 79 19", "93 0 0 13 63 74 0 5 0 21 0 2", "13 78 33 0 72 0 11 75 38 60 52 13", "75 0 20 95 27 55 71 27 21 0 6 20", "0 5 60 88 0 37 70 73 0 54 60 51", "13 0 0 69 42 72 13 2 17 0 0 69", "10 20 81 7 98 31 84 61 0 59 46 0", "1 76 96 61 0 62 0 31 0 86 73 74", "17 85 89 0 19 12 61 37 24 80 32 76", "37 99 12 0 88 85 29 17 0 0 17 29"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 8587;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> boxes = {"77 50 43", "82 37 60", "38 38 0", "89 74 8", "76 84 0", "30 64 0", "34 50 49", "0 7 25", "79 49 18", "0 63 0", "23 42 76", "89 98 49", "78 93 0", "71 0 59", "0 85 52", "57 69 0", "79 33 31", "35 41 15", "0 0 42", "26 89 12", "28 39 99", "0 1 6", "92 22 32"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 2598;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> boxes = {"41", "0", "32", "38", "0", "5", "0", "0", "74", "91", "70", "86", "43", "53", "0", "0", "0", "0", "12", "0", "85", "0", "83", "0"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 622;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> boxes = {"10", "2", "22", "48", "94", "88", "23", "83", "11", "92", "24", "0", "74", "0", "0", "0", "0", "73", "0", "86", "59", "0", "77", "0", "0"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 772;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> boxes = {"36", "0", "86", "95", "37", "39", "0", "60", "0", "8", "7", "0", "0", "13", "86", "0", "10", "0", "10", "4", "98", "1", "71", "71", "44", "20"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 698;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> boxes = {"27 41 25", "65 8 53", "21 54 0", "0 62 33", "30 69 7", "41 0 0", "0 0 78", "77 11 98", "71 66 15", "94 52 53", "19 0 93", "23 0 56", "0 72 0", "25 60 0", "59 77 84", "48 0 0", "3 44 30", "0 56 19", "0 92 0", "1 0 98", "56 34 71", "46 3 75", "64 92 0", "44 97 0", "8 36 0", "0 79 97", "90 0 87"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 2800;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> boxes = {"76 73 0 19 85 90 50 82 0 78 74 0", "0 0 98 66 62 88 36 0 0 0 93 0", "81 23 62 37 64 46 0 14 44 0 35 85", "87 0 0 0 32 49 39 48 0 0 21 93", "13 0 86 1 0 91 87 70 39 85 42 96", "65 0 47 35 0 25 5 90 77 30 60 6", "0 24 93 9 0 6 4 0 59 94 53 0", "0 69 0 20 19 80 87 0 78 0 90 16", "0 8 0 0 93 81 31 10 58 15 26 48", "60 0 9 69 0 6 65 0 0 45 93 92", "97 40 0 83 30 97 0 56 0 65 81 93", "1 0 96 77 67 0 37 79 76 34 0 6", "0 87 45 64 78 9 42 0 55 70 36 65", "85 0 4 0 38 80 91 89 97 41 0 93", "26 23 32 0 73 50 72 56 0 80 0 7", "48 12 2 55 1 32 65 48 16 0 90 18", "54 28 13 0 15 37 32 59 1 62 0 26", "34 17 75 73 32 0 64 88 91 42 8 43", "0 0 0 0 0 0 36 63 65 16 49 42", "63 0 0 58 24 70 82 0 16 81 9 30", "83 0 70 47 44 75 11 14 33 94 68 0", "0 42 14 2 80 57 0 97 3 36 0 43", "57 0 28 0 14 78 4 0 98 0 0 69", "61 24 68 93 29 0 0 75 25 99 97 0", "91 0 11 0 42 0 28 85 16 15 41 16", "99 0 54 9 0 0 31 0 48 0 0 0", "17 0 52 50 91 4 0 42 82 0 28 11", "85 53 0 53 8 0 0 0 37 43 50 0"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 11266;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> boxes = {"43 0 78 58 0 0 9 80 0", "39 5 0 93 0 39 60 0 56", "86 0 0 32 83 92 98 64 17", "57 65 25 21 0 8 0 0 86", "95 4 3 0 10 33 93 66 17", "0 18 57 60 0 70 51 38 32", "51 0 15 36 86 17 33 0 96", "17 14 53 0 87 91 53 0 50", "48 45 93 37 37 17 21 74 8", "98 78 14 99 50 7 68 84 0", "0 84 87 8 49 3 0 85 7", "0 62 65 60 3 52 87 0 36", "64 0 1 27 0 30 69 40 85", "0 42 53 86 0 36 0 0 0", "32 0 35 18 38 0 10 49 0", "36 0 6 25 13 37 0 0 42", "51 87 0 21 21 42 27 32 83", "38 0 24 0 64 0 38 29 0", "97 0 37 0 93 94 16 98 0", "0 39 0 36 0 14 89 0 49", "14 0 5 59 43 0 0 0 66", "0 0 92 0 89 84 2 0 31", "87 55 44 0 0 93 0 51 73", "65 39 51 83 0 50 55 97 0", "85 10 32 0 9 52 73 40 51", "0 22 81 0 15 92 0 57 0", "0 82 75 0 11 41 5 76 13", "85 49 38 95 52 41 38 13 0", "39 85 56 50 36 0 0 94 0"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 8469;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> boxes = {"31 57 43 0 42 81 0 8 0 69 10 0", "0 0 87 33 0 61 0 88 53 53 14 34", "97 0 12 56 91 0 59 0 0 73 78 65", "80 23 31 0 0 0 41 80 0 70 9 0", "12 56 34 0 3 93 82 15 15 0 30 52", "0 48 0 0 0 93 0 0 0 49 0 71", "79 0 27 0 3 0 4 40 0 30 0 7", "26 68 62 0 46 20 0 18 98 91 80 0", "50 67 0 0 38 0 57 60 97 69 11 33", "0 0 0 5 40 73 99 5 90 47 81 59", "93 84 23 0 61 27 9 85 0 78 19 0", "66 61 2 0 89 50 0 72 0 33 94 19", "0 95 32 54 46 0 32 91 80 78 63 15", "0 98 75 0 38 89 49 38 0 29 11 75", "47 45 0 84 74 0 68 67 11 16 6 91", "97 11 0 87 88 0 0 0 60 92 29 18", "0 65 61 16 28 23 37 0 0 37 76 93", "0 84 0 35 76 56 59 93 0 44 21 51", "50 1 44 64 11 0 0 0 0 0 57 11", "56 72 62 34 0 37 0 71 88 95 62 60", "44 34 76 39 0 6 39 12 91 6 83 97", "0 12 22 89 1 1 14 1 89 36 0 69", "0 25 61 45 1 0 86 50 94 17 77 20", "16 81 0 0 97 58 44 82 20 24 94 43", "16 60 26 82 0 87 33 58 68 60 50 47", "0 55 87 0 39 23 3 36 7 77 58 93", "33 34 68 59 92 0 0 74 86 54 0 27", "56 23 77 70 0 98 14 71 39 44 24 91", "0 95 95 91 34 62 36 51 0 60 89 70", "24 45 0 23 52 2 0 48 6 0 0 93"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 12757;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> boxes = {"0 0 39 0 17 52 0 81 0 0 38 5 0 78", "0 1 6 78 9 70 46 47 21 51 23 0 55 0", "30 98 9 17 70 0 4 3 0 92 0 26 62 92", "52 86 75 18 0 97 0 25 72 0 31 47 28 4", "53 0 54 21 92 2 35 95 76 0 24 23 0 93", "27 53 92 27 8 25 17 0 73 41 58 0 27 43", "0 64 83 21 92 69 92 0 17 0 77 0 6 0", "6 26 0 50 56 48 49 76 65 50 90 28 0 79", "86 64 91 7 96 0 36 0 91 30 29 46 78 0", "0 0 89 21 30 52 17 0 6 74 0 8 11 0", "0 87 0 0 0 96 71 8 0 0 27 57 61 56", "82 59 13 93 64 0 94 79 43 8 0 25 0 83", "0 43 7 0 65 39 0 30 59 0 59 89 80 94", "0 75 99 30 22 44 30 67 66 77 21 0 0 15", "60 0 59 0 44 63 0 10 0 41 14 62 98 4", "0 63 65 0 41 23 97 57 32 43 0 0 31 98", "43 49 0 0 2 74 91 83 2 0 0 33 0 16", "96 0 7 59 0 0 1 46 0 0 69 0 56 39", "91 4 0 0 26 82 0 20 56 59 56 95 65 7", "5 35 84 0 57 46 26 0 3 90 45 38 6 0", "35 35 54 0 0 54 31 60 42 77 86 33 43 61", "69 0 3 27 66 0 57 83 0 87 48 72 23 0", "55 17 28 37 0 0 68 14 3 20 25 59 82 47", "39 0 0 0 0 61 61 57 25 86 49 0 0 28", "81 56 41 40 90 0 0 32 23 93 0 3 57 29", "88 0 7 60 0 0 89 8 98 57 0 49 91 0", "0 72 56 74 30 84 83 37 0 46 60 93 0 3", "82 0 3 37 20 50 99 0 0 28 0 0 7 64", "50 0 0 76 51 78 56 79 30 0 0 38 0 74", "0 0 0 64 20 91 29 96 28 87 67 72 0 63", "88 77 0 0 17 28 68 0 38 72 85 69 36 70"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 14482;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> boxes = {"62 66 87 71 91 58 96 34", "73 0 28 67 24 56 0 0", "73 0 72 0 65 41 0 90", "20 99 21 56 17 47 0 11", "88 42 49 44 0 15 31 81", "0 95 90 7 0 0 0 26", "61 0 29 92 0 65 0 31", "49 0 66 23 0 46 77 74", "85 0 47 22 0 59 28 60", "15 81 11 53 0 0 76 9", "96 0 0 21 71 89 0 34", "0 0 0 18 27 47 19 0", "18 61 6 91 58 20 90 0", "92 56 46 96 0 96 21 89", "0 0 25 64 93 86 0 0", "58 93 8 98 56 47 99 68", "55 93 0 0 30 86 76 98", "0 7 0 82 0 1 74 69", "11 93 29 22 78 71 85 29", "82 0 9 72 75 71 73 0", "95 68 99 5 75 25 64 77", "3 81 41 57 18 0 77 15", "0 53 51 0 0 28 0 57", "0 73 32 2 59 0 33 41", "0 22 74 1 17 37 21 74", "19 51 0 23 0 0 91 0", "76 98 0 0 56 5 38 0", "0 19 20 95 0 20 10 83", "15 0 8 94 97 0 81 0", "3 7 34 0 0 74 66 68", "43 0 26 3 0 0 58 11", "16 1 93 77 0 25 3 56"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 9039;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> boxes = {"0 3 0 55 7 25 4 87 31 91 94 64", "71 0 75 76 0 49 30 21 50 68 40 98", "94 42 10 36 64 0 26 44 0 37 6 0", "0 61 59 45 1 68 15 36 70 32 0 98", "19 0 0 0 56 88 0 13 0 43 17 0", "81 56 96 27 5 42 11 0 0 96 77 15", "0 79 50 78 20 0 8 0 78 83 36 91", "91 84 67 0 0 92 67 0 0 0 0 46", "0 0 33 54 11 20 0 77 17 0 0 0", "23 15 13 13 92 12 0 61 47 55 0 79", "0 0 29 49 9 1 95 75 29 16 0 0", "0 22 64 45 43 86 0 56 96 0 0 7", "94 28 0 0 26 23 74 2 15 0 23 76", "83 72 0 0 56 21 81 63 18 8 75 2", "0 74 19 0 37 76 31 56 20 76 68 29", "66 80 16 35 80 0 71 79 49 87 35 54", "52 0 0 69 0 90 22 90 71 95 43 14", "24 30 40 93 64 0 83 96 21 94 92 89", "41 0 53 88 16 95 41 95 96 0 33 20", "92 4 0 46 93 47 98 86 19 0 18 0", "28 9 41 49 72 64 0 0 5 50 0 84", "59 87 0 0 64 93 87 45 96 69 0 0", "47 1 35 0 99 0 0 49 0 0 0 17", "86 65 85 10 0 17 5 32 55 90 40 0", "11 0 94 70 0 95 0 0 11 96 0 48", "72 51 0 0 53 19 87 77 0 93 4 65", "0 11 75 30 0 0 98 76 10 41 25 0", "43 0 0 27 0 67 7 82 45 18 37 0", "17 57 0 12 0 33 6 69 9 97 74 13", "5 25 65 51 18 16 0 28 26 0 23 68", "56 11 0 68 0 66 43 16 23 82 18 3", "87 69 98 57 96 0 71 0 83 0 0 92", "48 1 17 4 0 2 97 40 0 38 27 0"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 13524;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> boxes = {"45 74 0 41 0", "0 80 0 48 44", "20 19 31 0 95", "20 96 64 0 0", "81 76 0 21 63", "0 62 57 21 9", "35 0 83 59 5", "61 89 66 61 20", "95 3 76 58 57", "34 47 64 0 99", "94 9 13 40 50", "0 11 93 64 0", "47 95 82 0 66", "56 86 65 12 80", "60 3 36 23 38", "21 0 42 68 17", "23 14 26 0 8", "85 20 31 0 75", "22 61 46 12 20", "0 0 33 85 93", "90 0 11 29 54", "4 0 87 63 77", "0 25 0 29 0", "0 28 82 70 79", "47 0 80 46 84", "72 0 10 73 54", "35 0 61 8 78", "54 49 18 43 78", "85 0 48 36 99", "0 73 74 80 61", "13 75 10 36 18", "0 34 41 24 50", "0 89 0 59 87", "2 52 62 50 0"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 6412;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> boxes = {"38 0 0 45 77 61 0 0 8 87 65 53 0 2", "0 97 79 37 70 0 69 35 95 11 75 96 77 29", "39 32 0 24 63 22 91 71 0 63 92 59 12 0", "34 0 0 71 88 13 60 56 0 22 29 89 81 53", "69 95 65 0 94 98 84 37 0 87 16 0 58 18", "82 0 36 88 0 54 82 40 6 0 34 44 80 2", "33 58 7 95 83 87 0 0 79 35 0 51 22 84", "7 0 30 57 33 4 0 26 44 55 67 31 88 42", "62 58 62 93 91 0 1 0 44 23 95 0 55 57", "35 8 22 26 76 0 78 54 0 46 42 0 0 64", "93 54 58 0 89 89 0 0 57 0 98 3 24 0", "9 0 0 23 82 18 0 46 0 0 94 84 19 18", "78 12 6 45 0 80 16 69 59 76 35 0 66 0", "0 68 77 13 15 0 52 72 0 0 18 65 23 0", "0 0 73 53 0 95 91 44 27 96 85 0 99 85", "93 29 4 89 27 44 27 17 21 6 0 8 3 91", "0 46 73 94 60 59 15 50 18 75 74 88 46 93", "0 0 0 94 93 26 21 83 54 62 0 89 59 77", "32 98 0 44 34 38 56 20 0 61 29 94 52 57", "52 60 0 22 0 5 38 0 50 98 12 75 0 81", "23 0 41 18 36 87 49 32 62 43 22 74 0 97", "0 0 30 79 16 73 61 0 75 51 64 13 45 0", "11 0 14 2 0 1 2 16 84 37 95 45 48 33", "10 0 0 35 0 85 28 76 99 74 76 32 52 8", "60 0 96 0 95 26 59 13 0 0 44 42 97 48", "34 7 77 25 91 85 35 78 32 99 7 29 18 15", "61 50 43 22 42 63 64 50 9 94 42 22 21 33", "58 0 41 10 16 0 27 67 83 27 14 37 98 47", "37 60 60 76 71 2 84 32 27 39 82 84 0 94", "15 98 69 82 36 66 0 97 62 39 0 65 62 67", "0 41 0 43 0 0 94 0 0 58 0 0 27 33", "53 90 71 91 85 0 32 86 40 60 11 0 99 28", "79 62 0 0 79 0 14 62 87 76 35 0 70 0", "0 40 73 48 0 63 0 0 63 5 30 18 47 51", "75 6 58 69 33 57 66 0 12 0 46 0 65 10"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 18618;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> boxes = {"76 49 0 0 0 58 2 73 80 2", "17 42 80 0 31 12 47 36 19 0", "42 23 19 32 35 29 0 11 19 10", "30 3 52 47 0 0 41 62 8 75", "85 42 31 3 89 28 98 46 40 2", "0 91 85 23 37 14 11 4 39 47", "15 0 60 11 83 2 91 36 95 86", "40 64 0 24 21 27 38 86 50 12", "0 0 61 71 12 80 23 89 27 98", "85 2 0 59 0 81 91 4 22 27", "50 0 42 72 64 78 9 3 20 45", "48 44 0 69 0 11 8 88 47 20", "0 33 0 0 7 41 99 17 43 39", "33 9 0 33 78 50 63 38 54 51", "11 11 16 28 72 48 0 0 7 0", "59 91 0 3 0 0 11 65 0 62", "59 81 28 75 77 95 36 69 52 83", "9 11 38 10 55 65 29 32 24 0", "13 22 0 15 6 1 68 39 50 62", "28 7 94 91 64 0 28 96 72 0", "16 41 5 62 11 0 71 81 0 71", "34 0 25 59 0 0 44 87 30 20", "18 36 0 82 69 0 9 52 85 23", "0 74 96 69 5 83 77 17 90 0", "33 49 67 0 0 99 13 0 92 60", "48 86 17 64 61 0 5 99 9 76", "0 85 83 0 63 64 68 0 78 81", "0 8 6 13 0 71 5 20 0 99", "81 87 20 0 42 66 0 0 56 89", "6 0 0 19 62 69 82 43 97 19", "78 0 0 0 0 0 21 50 0 0", "66 0 77 0 66 45 16 0 62 19", "62 0 92 0 40 46 33 38 84 49", "18 22 56 0 44 0 97 75 47 29", "59 98 67 44 0 0 45 30 18 15", "0 90 0 32 37 77 4 66 0 45"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 12333;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> boxes = {"19 35", "4 28", "55 76", "54 0", "30 0", "35 5", "72 10", "0 43", "97 20", "17 34", "0 54", "92 33", "16 23", "5 14", "70 17", "55 45", "82 14", "61 2", "66 0", "0 33", "92 0", "96 30", "16 80", "0 0", "96 56", "74 0", "0 67", "24 94", "27 10", "66 36", "65 0", "97 70", "0 28", "0 0", "0 71", "0 75", "56 0"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 2451;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> boxes = {"96", "17", "46", "26", "60", "33", "44", "0", "64", "23", "0", "26", "56", "59", "10", "65", "0", "55", "0", "65", "35", "0", "0", "95", "41", "90", "0", "41", "22", "22", "49", "34", "12", "0", "90", "50", "37", "54"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 1321;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> boxes = {"0 0 0 0 0 61 75", "91 17 62 0 0 0 39", "79 72 0 4 24 33 94", "72 78 88 31 46 0 90", "13 77 89 17 37 58 85", "0 0 49 0 42 29 25", "91 84 16 37 57 18 5", "64 58 82 0 0 92 0", "7 90 80 98 31 87 70", "67 86 77 0 4 0 0", "37 23 0 0 92 0 65", "0 70 20 91 91 70 71", "75 0 17 0 54 0 0", "7 82 35 70 72 0 47", "0 34 76 35 16 64 0", "43 0 52 56 44 8 90", "17 0 11 0 0 98 0", "40 0 0 22 76 6 25", "0 90 0 65 98 62 66", "84 28 0 0 25 0 79", "48 0 64 0 99 44 18", "6 89 81 0 84 30 5", "64 0 0 0 94 0 72", "0 61 15 0 11 47 30", "83 0 39 38 1 22 45", "17 0 21 54 18 0 31", "79 75 3 66 52 0 96", "0 67 30 0 0 26 78", "0 56 57 0 93 82 87", "48 90 31 0 66 79 67", "24 25 0 80 71 0 24", "72 0 61 0 46 1 12", "0 95 49 27 53 35 28", "71 0 54 53 34 16 60", "75 0 89 0 1 52 88", "0 32 0 64 13 0 60", "0 7 0 70 0 0 11", "0 62 0 0 0 55 0", "0 22 14 51 32 0 66"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 9225;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> boxes = {"69 4 71 98 0 93 1 0 77 32", "20 0 39 58 84 23 16 56 0 0", "0 0 0 45 0 65 31 28 70 6", "13 0 69 0 66 0 84 0 53 80", "69 4 89 62 0 31 0 35 71 91", "44 0 21 52 70 80 38 20 64 0", "0 0 0 25 45 0 38 0 0 0", "9 48 46 35 78 42 13 0 55 0", "30 0 0 12 30 15 49 17 36 88", "99 32 85 37 30 47 55 80 7 20", "43 82 0 82 2 60 44 46 69 2", "20 39 27 44 26 1 63 15 57 10", "16 0 5 0 6 35 60 0 0 90", "36 44 23 82 11 33 99 0 58 0", "95 36 17 96 97 27 54 21 16 0", "0 56 0 52 18 20 57 89 20 94", "46 0 89 92 25 26 0 10 0 79", "34 0 64 47 10 14 11 53 81 0", "93 19 40 94 64 3 45 76 86 0", "72 95 36 0 86 87 0 69 92 79", "0 62 81 85 53 33 41 73 43 65", "0 39 53 0 93 91 12 8 84 4", "96 0 62 0 5 0 0 8 0 65", "89 73 25 17 23 0 65 0 98 63", "0 33 65 36 0 95 68 69 18 34", "45 61 78 0 81 32 72 11 52 8", "0 15 49 0 41 15 70 94 40 68", "0 50 21 87 91 80 43 12 26 42", "88 35 96 62 84 94 72 99 0 91", "65 95 0 73 18 0 60 0 83 68", "50 69 59 74 89 25 88 0 94 7", "51 38 22 89 22 0 4 0 1 35", "87 33 51 20 67 91 97 44 92 45", "31 0 10 29 23 4 0 70 0 54", "32 0 76 0 0 73 0 56 17 16", "0 90 0 61 98 20 3 51 73 0", "71 79 27 0 0 52 34 77 22 94", "0 53 23 50 39 19 77 26 44 0", "9 81 53 18 1 92 97 25 13 0", "32 4 99 48 97 0 99 76 36 35"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 14960;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> boxes = {"1 0 0 0", "24 46 0 45", "50 28 0 58", "12 2 3 59", "67 27 0 0", "0 0 19 9", "30 0 0 0", "38 61 32 20", "18 96 54 39", "0 74 1 31", "14 17 3 99", "18 3 90 65", "54 44 11 66", "16 89 47 64", "40 65 89 92", "99 92 6 39", "7 0 0 36", "99 84 16 81", "74 60 6 55", "7 65 58 5", "0 55 0 49", "0 0 87 94", "40 0 0 47", "0 36 98 90", "10 30 89 0", "0 74 1 51", "25 8 61 0", "34 70 54 51", "0 72 70 27", "0 81 77 17", "83 48 64 13", "72 28 52 6", "76 50 6 17", "20 28 78 0", "39 97 52 39", "45 50 51 53", "65 0 45 0", "83 50 0 68", "92 10 0 98", "77 0 72 65", "93 8 0 11"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 5828;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> boxes = {"62 10 96 95 53", "90 0 77 39 18", "80 89 0 96 28", "71 57 0 13 81", "73 62 78 51 63", "1 0 72 38 38", "95 29 86 0 0", "31 97 47 0 53", "73 0 15 0 27", "29 25 9 0 0", "0 30 8 91 19", "20 47 0 65 70", "1 0 74 99 0", "43 39 67 0 4", "92 46 95 28 54", "92 0 85 95 98", "0 92 63 61 43", "52 9 11 33 0", "42 95 0 0 79", "62 20 0 38 0", "66 0 83 56 13", "18 0 15 0 0", "0 0 0 25 0", "98 83 78 33 11", "35 47 88 16 81", "10 42 27 0 74", "40 0 21 84 26", "22 37 80 0 50", "48 0 2 0 66", "4 74 75 80 0", "24 0 9 87 74", "10 0 35 13 6", "36 0 31 0 92", "0 6 0 0 25", "20 22 28 19 0", "44 0 81 0 0", "32 84 0 10 65", "21 73 75 10 46", "50 13 0 7 67", "57 67 0 79 0", "70 90 42 65 35", "0 20 49 0 39"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 7257;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> boxes = {"0 0 36 0 0 0 55 5 85 19 38", "82 40 11 30 33 0 87 5 83 18 0", "36 95 58 0 18 94 45 53 0 0 64", "55 0 99 79 43 89 52 77 0 48 69", "62 43 74 0 66 77 10 0 53 0 16", "60 97 70 6 37 0 89 72 88 38 0", "33 0 42 43 19 0 17 17 26 85 14", "19 79 0 0 86 31 16 60 26 44 19", "4 89 38 0 95 52 0 78 69 23 36", "82 64 0 54 94 52 87 0 0 76 50", "14 0 31 60 88 26 71 90 73 88 80", "51 85 79 55 37 42 44 85 10 43 11", "0 7 61 3 73 0 33 75 13 67 52", "0 3 36 38 0 21 70 70 0 0 92", "33 56 85 13 34 72 63 0 0 74 10", "96 86 84 57 52 53 8 97 55 0 92", "46 0 99 71 34 80 90 2 0 97 67", "51 7 60 0 77 26 65 24 14 14 0", "61 32 0 0 98 2 19 0 45 29 63", "0 0 95 85 0 32 0 81 95 61 0", "0 37 99 0 40 39 10 28 8 87 0", "0 27 4 83 52 10 0 93 5 7 92", "0 0 15 0 16 78 33 89 99 93 0", "84 0 86 72 46 56 2 0 49 0 34", "0 52 70 12 98 9 73 89 4 65 0", "0 56 71 44 50 0 16 23 89 80 44", "25 0 0 0 86 34 7 7 39 49 2", "0 58 59 0 0 73 63 63 0 19 56", "52 13 57 63 47 32 18 0 57 62 62", "0 91 91 44 24 48 34 84 23 80 71", "26 56 0 4 0 0 0 14 34 21 65", "4 7 24 18 59 0 96 91 23 20 86", "90 87 0 82 97 34 46 0 47 17 71", "46 25 0 87 6 57 71 0 0 67 90", "50 0 0 32 86 0 38 91 49 59 0", "86 0 0 77 47 86 77 0 93 91 38", "15 72 0 0 0 86 95 0 64 60 54", "0 53 27 23 0 16 6 91 89 0 2", "40 20 61 19 62 77 71 62 40 0 54", "55 0 0 5 43 94 0 81 17 50 0", "40 0 26 4 0 86 0 90 0 39 23", "79 83 28 87 99 78 37 46 36 33 63", "88 92 73 89 0 0 70 0 0 24 8"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 17950;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> boxes = {"37 53 0 94 37 0 0 57 77", "78 8 26 5 0 7 46 93 19", "0 61 25 0 50 21 76 0 53", "91 27 82 64 43 0 56 59 0", "36 0 45 4 18 69 76 94 0", "0 0 36 35 0 0 77 0 73", "19 0 17 54 36 34 6 65 1", "45 0 21 0 76 0 0 82 0", "83 88 18 56 44 0 27 2 52", "0 55 61 85 25 76 0 10 37", "98 18 52 9 0 35 47 23 0", "48 0 0 0 0 25 0 94 53", "91 0 25 7 82 8 0 96 36", "0 64 0 82 21 93 61 57 82", "62 0 19 0 41 90 12 43 8", "0 51 37 14 43 0 68 83 0", "11 20 86 0 46 62 57 60 35", "20 61 0 96 55 83 0 0 0", "53 26 0 30 0 0 0 0 0", "3 56 57 0 0 86 0 0 0", "16 30 0 0 77 98 62 52 0", "13 0 82 93 19 0 0 91 33", "0 0 0 35 78 99 0 67 65", "0 52 0 89 1 10 9 12 0", "75 37 77 14 0 0 0 18 22", "9 70 50 62 35 37 36 0 27", "73 51 95 29 81 13 72 39 73", "75 10 29 18 0 92 80 0 9", "3 65 0 78 9 0 73 59 68", "15 97 0 68 34 54 10 0 96", "58 78 0 3 81 15 0 95 98", "0 61 0 0 69 0 54 53 28", "34 37 82 9 29 4 94 30 79", "0 48 16 62 82 46 0 71 0", "0 0 66 20 75 66 0 51 2", "57 79 62 2 22 61 40 76 53", "28 0 50 52 0 32 0 75 33", "23 82 7 76 34 0 72 6 68", "18 54 11 27 0 62 29 29 0", "0 5 88 53 44 0 0 30 0", "99 2 92 0 0 7 10 87 89", "10 36 49 0 67 0 0 0 69", "75 83 89 81 50 0 44 49 84", "0 84 4 0 0 59 0 0 58"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 13041;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> boxes = {"83 72 0 0 0 57 73 28 46 77 64 0 0 98", "47 13 57 19 47 63 60 15 46 18 0 36 36 0", "36 86 77 14 90 91 76 43 59 86 42 0 0 45", "60 46 68 77 46 71 78 15 11 43 0 0 0 60", "68 0 33 10 6 85 93 43 0 0 0 80 64 80", "96 67 40 0 0 0 28 46 0 5 14 80 74 83", "0 45 0 23 60 18 91 69 0 12 81 93 5 5", "0 71 26 72 23 0 0 0 93 37 28 97 79 38", "0 39 62 98 27 22 80 70 0 5 5 0 81 23", "0 0 0 57 98 45 21 93 5 9 53 30 38 87", "46 58 29 0 45 8 77 27 90 63 52 3 0 1", "12 38 0 50 0 44 58 2 0 91 94 0 0 50", "79 68 10 61 0 0 60 9 58 33 79 15 31 88", "0 68 21 42 0 0 33 0 0 33 52 25 46 5", "0 6 26 0 80 82 11 64 5 0 13 30 46 24", "60 48 62 14 87 1 21 3 0 83 0 70 35 0", "19 95 0 90 81 34 46 0 0 35 0 96 33 1", "0 16 55 0 0 95 84 2 20 36 0 64 31 39", "96 33 3 0 58 57 61 0 41 78 24 79 0 0", "98 81 68 71 91 69 14 82 1 0 43 79 17 69", "75 0 0 21 25 83 6 22 79 0 0 6 40 75", "39 22 9 49 54 0 0 3 78 43 0 84 0 12", "3 69 28 42 0 17 5 0 4 0 52 4 0 43", "0 35 97 90 77 82 27 63 38 62 0 34 83 88", "0 0 70 0 54 74 59 0 87 55 89 72 2 92", "38 0 46 25 72 87 15 37 90 41 82 69 13 0", "0 60 0 0 0 82 20 0 8 8 42 0 83 42", "0 4 0 91 67 26 40 83 10 56 0 55 85 0", "57 20 83 51 31 0 44 18 73 0 0 7 0 48", "7 1 33 36 2 36 62 0 60 62 56 0 0 0", "78 40 37 3 21 25 82 30 58 50 61 7 88 0", "6 10 64 51 59 12 32 68 42 92 0 5 49 89", "0 51 23 15 84 35 71 37 0 0 0 66 44 30", "36 65 75 33 3 73 0 60 97 55 0 63 25 0", "10 71 50 36 47 9 70 0 0 47 0 0 21 3", "16 1 97 64 50 0 57 76 29 67 0 0 0 7", "38 0 8 0 10 57 24 0 46 48 0 0 9 44", "0 0 30 0 50 39 50 8 0 66 0 56 16 17", "86 47 0 36 88 65 44 0 0 36 0 70 79 18", "42 0 0 0 23 19 0 30 0 0 62 0 68 51", "0 0 41 62 0 16 36 82 49 0 83 0 11 81", "13 25 66 95 0 0 5 0 0 79 82 28 76 0", "73 65 95 94 48 21 24 0 50 68 25 0 0 79", "85 14 98 76 53 0 36 55 93 0 78 12 48 90", "23 98 86 84 10 24 0 0 90 2 80 54 65 39"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 21524;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> boxes = {"50 62", "65 0", "36 5", "38 61", "2 55", "0 0", "32 55", "12 0", "74 10", "0 23", "0 0", "12 0", "0 61", "27 22", "0 10", "43 42", "51 97", "0 17", "0 64", "54 0", "28 0", "69 0", "56 85", "53 0", "82 31", "0 73", "42 25", "71 78", "63 55", "23 99", "90 9", "27 45", "17 27", "58 36", "80 49", "0 56", "76 0", "54 0", "2 20", "8 16", "0 52", "83 3", "59 28", "0 55", "46 39", "19 14"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 2892;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> boxes = {"21 66 93 32 71", "0 13 92 60 0", "0 66 0 76 25", "52 41 65 1 89", "94 32 2 73 34", "28 46 34 86 53", "22 4 51 14 0", "59 32 70 61 0", "0 0 27 68 64", "88 64 0 33 18", "7 17 99 0 0", "0 94 82 37 11", "95 97 0 92 73", "38 0 57 48 0", "75 60 0 0 16", "70 87 44 0 18", "38 17 10 51 0", "30 64 27 7 0", "34 44 5 0 64", "70 9 0 19 55", "65 68 38 0 0", "9 0 0 55 7", "49 37 67 81 0", "85 13 49 0 60", "64 35 27 69 10", "74 0 64 89 37", "86 57 84 98 95", "54 69 0 66 37", "48 0 45 0 81", "22 47 9 73 87", "31 12 0 51 26", "0 40 0 35 0", "0 28 6 81 66", "7 8 0 67 4", "0 64 70 0 79", "18 0 83 23 63", "42 52 8 78 67", "80 60 40 42 31", "0 18 78 0 59", "65 60 29 91 23", "21 91 50 83 49", "0 94 71 17 35", "48 51 0 97 0", "0 46 69 31 0", "0 52 0 37 49", "42 80 0 21 19", "94 0 2 38 43"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 8624;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> boxes = {"55 78 79 8 62 47 10 52 65", "0 0 71 0 52 86 16 87 44", "92 74 59 78 0 0 13 60 90", "75 50 78 95 55 28 43 19 82", "2 0 9 0 97 36 0 0 10", "68 35 82 64 95 0 45 36 29", "1 88 21 79 0 18 0 88 45", "8 34 90 55 0 0 24 0 89", "87 99 65 84 85 76 28 78 29", "0 89 97 58 0 47 65 0 85", "0 0 30 77 36 68 27 42 26", "24 89 39 52 0 24 76 19 37", "89 76 12 12 0 0 0 63 46", "0 30 6 32 1 1 55 33 50", "23 0 85 66 79 4 74 20 3", "14 0 38 87 22 0 0 63 37", "6 12 95 75 93 23 0 4 0", "25 23 86 44 0 76 0 80 77", "0 49 79 95 0 0 6 45 68", "42 60 36 0 78 22 28 32 34", "37 1 59 0 15 23 0 2 96", "51 4 13 84 54 8 56 0 69", "0 88 92 33 71 62 57 46 0", "0 34 0 0 0 61 17 77 68", "70 40 0 0 0 52 49 26 0", "23 83 78 41 29 90 85 79 22", "29 73 25 88 87 38 58 0 87", "0 69 0 0 53 69 15 26 0", "3 4 25 40 13 0 80 78 1", "81 68 76 73 99 93 0 88 0", "51 3 0 3 29 0 0 0 48", "40 0 49 46 54 0 41 46 64", "51 0 70 98 21 29 72 55 66", "39 86 0 60 61 14 0 25 99", "62 0 4 41 20 0 38 44 66", "15 6 0 97 0 0 61 0 33", "0 89 67 88 28 2 31 0 60", "0 0 33 38 0 86 42 40 43", "82 85 62 62 49 60 23 0 51", "89 64 72 16 26 72 85 19 0", "1 82 37 51 81 96 35 18 10", "41 55 0 35 45 86 0 5 95", "43 0 0 0 12 0 78 54 96", "40 43 0 27 3 0 0 0 51", "0 82 0 44 54 46 20 37 97", "72 2 95 26 17 52 41 96 0", "0 77 53 27 63 18 0 30 60", "44 0 53 47 69 32 0 39 0"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 16010;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> boxes = {"72 0 0 5", "2 81 12 77", "28 73 0 92", "56 24 7 37", "6 0 25 48", "14 0 81 30", "62 0 11 1", "0 0 0 55", "0 0 68 28", "30 34 0 49", "74 37 77 0", "78 0 14 98", "0 0 87 62", "79 36 78 57", "31 64 31 0", "40 2 0 32", "84 52 0 0", "31 0 40 73", "52 93 80 88", "0 57 70 0", "0 10 90 0", "6 0 69 75", "97 0 8 0", "40 80 31 65", "53 0 26 16", "0 77 11 55", "0 47 0 0", "19 0 8 82", "15 83 13 4", "46 57 99 34", "86 0 46 52", "51 37 0 6", "0 64 0 87", "0 82 45 0", "11 51 2 95", "30 0 0 47", "65 41 66 0", "0 50 78 87", "0 73 87 70", "6 35 49 63", "55 0 5 90", "0 0 0 55", "76 81 66 0", "78 97 46 83", "12 12 52 0", "70 94 98 85", "54 4 77 0", "45 8 86 26", "14 93 62 0"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 6916;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> boxes = {"0 0 17 0", "51 17 56 0", "0 50 33 0", "3 38 9 65", "0 0 80 88", "31 40 0 98", "45 97 95 53", "43 11 0 77", "76 96 87 0", "52 57 92 14", "1 0 4 91", "50 3 46 79", "14 99 49 99", "39 6 47 78", "84 52 73 0", "65 21 56 57", "89 96 5 29", "39 0 90 63", "72 52 78 3", "14 98 70 58", "0 69 39 54", "69 44 45 28", "49 11 43 51", "0 39 0 80", "43 55 32 9", "91 0 25 81", "46 55 17 0", "0 10 0 62", "33 58 93 38", "9 23 0 84", "71 27 84 26", "62 55 99 57", "38 79 69 27", "87 77 46 61", "24 40 30 0", "71 86 31 0", "31 40 0 0", "37 3 72 45", "94 0 47 89", "0 79 24 63", "0 44 76 61", "0 98 0 37", "93 7 42 55", "91 97 2 95", "16 18 19 91", "98 10 75 63", "0 40 5 16", "0 72 75 0", "73 44 20 0", "26 21 6 94"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 8182;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> boxes = {"1 5", "1 5"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> boxes = {"1", "1"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> boxes = {"6 97 7", "73 45 0", "67 45 63"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 170;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> boxes = {"38 0 0 45 77 61 0 0 8 87 65 53 0 2", "0 97 79 37 70 0 69 35 95 11 75 96 77 29", "39 32 0 24 63 22 91 71 0 63 92 59 12 0", "34 0 0 71 88 13 60 56 0 22 29 89 81 53", "69 95 65 0 94 98 84 37 0 87 16 0 58 18", "82 0 36 88 0 54 82 40 6 0 34 44 80 2", "33 58 7 95 83 87 0 0 79 35 0 51 22 84", "7 0 30 57 33 4 0 26 44 55 67 31 88 42", "62 58 62 93 91 0 1 0 44 23 95 0 55 57", "35 8 22 26 76 0 78 54 0 46 42 0 0 64", "93 54 58 0 89 89 0 0 57 0 98 3 24 0", "9 0 0 23 82 18 0 46 0 0 94 84 19 18", "78 12 6 45 0 80 16 69 59 76 35 0 66 0", "0 68 77 13 15 0 52 72 0 0 18 65 23 0", "0 0 73 53 0 95 91 44 27 96 85 0 99 85", "93 29 4 89 27 44 27 17 21 6 0 8 3 91", "0 46 73 94 60 59 15 50 18 75 74 88 46 93", "0 0 0 94 93 26 21 83 54 62 0 89 59 77", "32 98 0 44 34 38 56 20 0 61 29 94 52 57", "52 60 0 22 0 5 38 0 50 98 12 75 0 81", "23 0 41 18 36 87 49 32 62 43 22 74 0 97", "0 0 30 79 16 73 61 0 75 51 64 13 45 0", "11 0 14 2 0 1 2 16 84 37 95 45 48 33", "10 0 0 35 0 85 28 76 99 74 76 32 52 8", "60 0 96 0 95 26 59 13 0 0 44 42 97 48", "34 7 77 25 91 85 35 78 32 99 7 29 18 15", "61 50 43 22 42 63 64 50 9 94 42 22 21 33", "58 0 41 10 16 0 27 67 83 27 14 37 98 47", "37 60 60 76 71 2 84 32 27 39 82 84 0 94", "15 98 69 82 36 66 0 97 62 39 0 65 62 67", "0 41 0 43 0 0 94 0 0 58 0 0 27 33", "53 90 71 91 85 0 32 86 40 60 11 0 99 28", "79 62 0 0 79 0 14 62 87 76 35 0 70 0", "0 40 73 48 0 63 0 0 63 5 30 18 47 51", "75 6 58 69 33 57 66 0 12 0 46 0 65 10"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 18618;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> boxes = {"38 0 0 45 77 61 0 0 8 87 65 53 0 2", "0 97 79 37 70 0 69 35 95 11 75 96 77 29", "39 32 0 24 63 22 91 71 0 63 92 59 12 0", "34 0 0 71 88 13 60 56 0 22 29 89 81 53", "69 95 65 0 94 98 84 37 0 87 16 0 58 18", "82 0 36 88 0 54 82 40 6 0 34 44 80 2", "33 58 7 95 83 87 0 0 79 35 0 51 22 84", "7 0 30 57 33 4 0 26 44 55 67 31 88 42", "62 58 62 93 91 0 1 0 44 23 95 0 55 57", "35 8 22 26 76 0 78 54 0 46 42 0 0 64", "93 54 58 0 89 89 0 0 57 0 98 3 24 0", "9 0 0 23 82 18 0 46 0 0 94 84 19 18", "78 12 6 45 0 80 16 69 59 76 35 0 66 0", "0 68 77 13 15 0 52 72 0 0 18 65 23 0", "0 0 73 53 0 95 91 44 27 96 85 0 99 85", "93 29 4 89 27 44 27 17 21 6 0 8 3 91", "0 46 73 94 60 59 15 50 18 75 74 88 46 93", "0 0 0 94 93 26 21 83 54 62 0 89 59 77", "32 98 0 44 34 38 56 20 0 61 29 94 52 57", "52 60 0 22 0 5 38 0 50 98 12 75 0 81", "23 0 41 18 36 87 49 32 62 43 22 74 0 97", "0 0 30 79 16 73 61 0 75 51 64 13 45 0", "11 0 14 2 0 1 2 16 84 37 95 45 48 33", "10 0 0 35 0 85 28 76 99 74 76 32 52 8", "60 0 96 0 95 26 59 13 0 0 44 42 97 48", "34 7 77 25 91 85 35 78 32 99 7 29 18 15", "61 50 43 22 42 63 64 50 9 94 42 22 21 33", "58 0 41 10 16 0 27 67 83 27 14 37 98 47", "37 60 60 76 71 2 84 32 27 39 82 84 0 94", "15 98 69 82 36 66 0 97 62 39 0 65 62 67", "0 41 0 43 0 0 94 0 0 58 0 0 27 33", "53 90 71 91 85 0 32 86 40 60 11 0 99 28", "79 62 0 0 79 0 14 62 87 76 35 0 70 0", "0 40 73 48 0 63 0 0 63 5 30 18 47 51", "75 6 58 69 33 57 66 0 12 0 46 0 65 10", "23 0 41 18 36 87 49 32 62 43 22 74 0 97", "0 0 30 79 16 73 61 0 75 51 64 13 45 0", "11 0 14 2 0 1 2 16 84 37 95 45 48 33", "10 0 0 35 0 85 28 76 99 74 76 32 52 8", "60 0 96 0 95 26 59 13 0 0 44 42 97 48", "34 7 77 25 91 85 35 78 32 99 7 29 18 15", "61 50 43 22 42 63 64 50 9 94 42 22 21 33", "58 0 41 10 16 0 27 67 83 27 14 37 98 47", "37 60 60 76 71 2 84 32 27 39 82 84 0 94", "15 98 69 82 36 66 0 97 62 39 0 65 62 67", "0 41 0 43 0 0 94 0 0 58 0 0 27 33", "53 90 71 91 85 0 32 86 40 60 11 0 99 28", "79 62 0 0 79 0 14 62 87 76 35 0 70 0", "0 40 73 48 0 63 0 0 63 5 30 18 47 51", "75 6 58 69 33 57 66 0 12 0 46 0 65 10"};
    MarblesRegroupingHard* pObj = new MarblesRegroupingHard();
    clock_t start = clock();
    int result = pObj->minMoves(boxes);
    clock_t end = clock();
    delete pObj;
    int expected = 27070;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22696894&rd=11121&pm=8538
********************************************************************************
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
 
class MarblesRegroupingHard {
public:
  int minMoves(vector <string>);
};
 
#define MAXSIZE 100
#define INF 1000000000
int match[MAXSIZE];
bool dfs(int v, int n, int adj[MAXSIZE][MAXSIZE], int mark[], int s[], int t[])
{
  int i;
  s[v] = 1;
  mark[v] = 1;
  for (i = 0; i < n; i++)
    if (adj[v][i])
      if (t[i] = 1, match[i] == -1 || (!mark[match[i]] &&
        dfs(match[i], n, adj, mark, s, t)))
        return match[i] = v, true;
  return false;
}
bool matching(int n, int adj[MAXSIZE][MAXSIZE], int s[], int t[], int sa[])
{
  int i;
  int max = 0;
  int mark[MAXSIZE];
  memset(mark, 0, sizeof(mark));
  for (i = 0; i < n; i++)
    if (!sa[i] && !mark[i] && dfs(i, n, adj, mark, s, t))
    {
      memset(mark, 0, sizeof(mark));
      sa[i] = 1;
    }
    for (i = 0; i < n; i++)
      if (!sa[i])
        return false;
    return true;
}
void weighted(int n, int m, int weight[MAXSIZE][MAXSIZE])
{
  int i, j;
  int size = 0;
  int sa[MAXSIZE], s[MAXSIZE], t[MAXSIZE];
  int cover[2][MAXSIZE];
  int adj[MAXSIZE][MAXSIZE];
  memset(match, -1, sizeof(match));
  memset(sa, 0, sizeof(sa));
  memset(adj, 0, sizeof(adj));
  if (m > n)
    n = m;
  for (i = 0; i < n; i++)
  {
    int index = 0;
    for (j = 1; j < n; j++)
      if (weight[i][index] < weight[i][j])
        index = j;
    cover[1][i] = 0;
    cover[0][i] = weight[i][index];
    adj[i][index] = 1;
  }
  while (!matching(n, adj, s, t, sa))
  {
    memset(s, 0, sizeof(s));
    memset(t, 0, sizeof(t));
    matching(n, adj, s, t, sa);
    int min = INF;
    for (i = 0; i < n; i++)
      for (j = 0; j < n; j++)
        if (s[i] && !t[j] && !adj[i][j])
          if (cover[0][i] + cover[1][j] - weight[i][j] < min)
            min = cover[0][i] + cover[1][j] - weight[i][j];
    for (i = 0; i < n; i++)
      if (s[i])
        cover[0][i] -= min;
    for (i = 0; i < n; i++)
      if (t[i])
        cover[1][i] += min;
    for (i = 0; i < n; i++)
      for (j = 0; j < n; j++)
        if ((s[i] && !t[j]) || (!s[i] && t[j]))
          if ((cover[0][i] + cover[1][j]-weight[i][j])==0)
            adj[i][j] = 1;
          else
            adj[i][j] = 0;
  }
}
  
int arr[50][14] = {0};
 
int MarblesRegroupingHard::minMoves(vector <string> b) {
  int i, j, tn;
  int n, m, sum, len = b.size();
  int weight[MAXSIZE][MAXSIZE];
  memset(weight, 0, sizeof weight);
  for( int i = 0; i < b.size(); i++ ){
    istringstream sin( b[i] );
    int cnt = 0, tp;
    while( sin >> tp ){
      arr[i][cnt] = tp;
      cnt++;
    }
    m = cnt;
  }
  for( int i = 0;i < len; i++ )
    for( int k = 0;k < 14; k++ ){
      int sm = 0;
      for( int j = 0;j < len; j++ )
        if( j != i )
          sm += arr[j][k];
      weight[i][k] = -sm;
    }
  n = b.size();
  weighted(n, m, weight);
  sum = 0;
  for (i = 0; i < max(n, m); i++)
  {
    if (i < m && match[i] < n)
    {
      sum += weight[match[i]][i];
    }
  }
  return -sum;
  
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/