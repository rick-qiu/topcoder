/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12314
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

class ICPCBalloons {
public:
    int minRepaintings(vector<int> balloonCount, string balloonSize, vector<int> maxAccepted);
};

int ICPCBalloons::minRepaintings(vector<int> balloonCount, string balloonSize, vector<int> maxAccepted) {
    int ret;
    return ret;
}


int test0() {
    vector<int> balloonCount = {100};
    string balloonSize = "L";
    vector<int> maxAccepted = {1, 2, 3, 4, 5};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> balloonCount = {100};
    string balloonSize = "M";
    vector<int> maxAccepted = {10, 20, 30, 40, 50};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> balloonCount = {5, 6, 1, 5, 6, 1, 5, 6, 1};
    string balloonSize = "MLMMLMMLM";
    vector<int> maxAccepted = {7, 7, 4, 4, 7, 7};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> balloonCount = {100, 100};
    string balloonSize = "ML";
    vector<int> maxAccepted = {50, 51, 51};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> balloonCount = {19, 25, 19, 34, 8, 33, 12, 12, 8, 2, 36, 14, 30, 11, 13, 32, 15, 30, 11, 27, 30, 4, 6, 17, 21, 13, 10, 28, 14, 10, 35, 10, 26, 15, 11, 34, 13, 13, 23, 27, 7, 9, 3, 34, 29, 27, 2, 15, 11, 25};
    string balloonSize = "LLMLLMLLMLLMLLLLLLLLLLLLLLMLLLLLLLLMMMLMLMLLLMMLML";
    vector<int> maxAccepted = {43, 1, 27, 12, 48, 43, 26, 17, 46, 32, 49, 50, 1, 19, 15};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> balloonCount = {43, 5, 38, 35, 43, 22, 47, 38, 43, 1, 47, 3, 30, 5, 9, 20, 3, 10, 7, 8, 41, 35, 27, 2, 24, 37, 9, 43, 47, 8, 37, 11, 23, 2, 15, 15, 41, 32, 2, 25, 1, 9, 29, 10, 1, 5, 39, 20, 21, 8};
    string balloonSize = "LLLLLLMLLMLLLLLMLLLLLMLLLLLMLMMLLLLLLLMLLMLLLLLLMM";
    vector<int> maxAccepted = {28, 71, 18, 58, 80, 18, 70, 85, 1, 48, 10};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 142;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> balloonCount = {79, 57, 50, 71, 69, 17, 86, 96, 60, 50, 90, 51, 45, 96, 85, 75, 51, 48, 86, 85, 39, 32, 38, 56, 33, 75, 88, 32, 4, 89, 54, 75, 68, 8, 26, 90, 70, 98, 20, 30, 52, 62, 24, 66, 24, 84, 62};
    string balloonSize = "MMLLMLMMMLLLLLLMMMLLLLLLLLLLMMLMMMLMMLLLMMLLMLM";
    vector<int> maxAccepted = {9, 38, 42, 44, 59, 23, 14, 73, 67, 1, 67, 39, 9, 4, 19};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
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
    vector<int> balloonCount = {34, 87, 26, 9, 35, 70, 49, 65, 50, 67, 62, 83, 71, 27, 62, 19, 78, 33, 37, 54, 5, 7, 64, 87, 49, 14, 37, 43, 42, 48, 76, 52, 81, 73, 46, 1, 9, 60, 39, 58, 10, 9, 83, 24, 17, 39, 31, 1, 52, 1};
    string balloonSize = "MMLLMLMMMLMLLMLMMMMLMMLMMMMLLMMMLMMMLLLMMMMMMLLMMM";
    vector<int> maxAccepted = {34, 7, 4, 1, 31, 23, 18, 37, 21};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
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
    vector<int> balloonCount = {40, 30, 35, 47, 6, 45, 20, 7, 4, 3, 9, 1, 11, 39, 18, 14, 11, 21, 13, 15, 11, 35, 28, 11, 17, 30, 33, 35, 42, 35, 9, 13, 23, 41, 3, 28, 5, 28, 28, 33, 7, 5, 8, 11, 18, 20, 46, 25, 37, 16};
    string balloonSize = "LLLMMMMMMLLMLLMLMMLMLMMLLLMMMMLLLMMMLLMLLMLLMLMMML";
    vector<int> maxAccepted = {2, 47, 28, 54, 45, 55, 47, 31, 36, 7, 19};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> balloonCount = {13, 6, 9, 5, 16, 11, 2, 19, 14, 3, 15, 11, 14, 12, 18, 12, 10, 18, 5, 17, 20, 16, 20, 17, 17, 20, 20, 2, 15, 15, 6, 10, 7, 15, 11, 12, 3, 4, 20, 20, 18, 15, 3, 11, 17, 18, 8, 6, 3, 1};
    string balloonSize = "MMMMMMLMMMMLLMMMLMMMMMMMMMMLMMMLMLMMLMMMMMLMMLLLMM";
    vector<int> maxAccepted = {5, 25, 16, 23, 28, 34, 10, 41, 24, 28, 13, 34, 28, 28, 18};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> balloonCount = {3, 22, 17, 33, 38, 31, 1, 20, 45, 37, 27, 1, 35, 34, 48, 50, 48, 30, 38, 9, 16, 29, 14, 48, 24, 20, 25, 22, 2, 49, 48, 9, 45, 6, 32, 10, 7, 20, 44, 8, 35, 13, 47, 32, 25, 20, 16, 4, 22, 3};
    string balloonSize = "LLLLLLLLLLLLMLLLLLLMLLLLLLLLLLLLLLMMLLLLLLLLMLLLLL";
    vector<int> maxAccepted = {18, 20, 38, 56, 41, 23, 54, 34, 63, 6, 21, 7, 24, 57, 61};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> balloonCount = {10, 58, 13, 41, 60, 36, 2, 51, 28, 33, 5, 44, 58, 31, 21, 68, 37, 25, 61, 30, 18, 49, 31, 43, 61, 43, 25, 12, 10, 52, 54, 70, 13, 25, 46, 14, 10, 4, 55};
    string balloonSize = "LMLMLLLLMLLLLLLLLLMLLLLLLLLLLMLLLLLLLLL";
    vector<int> maxAccepted = {1, 2, 3, 1, 3, 2, 3, 2, 3, 1, 1, 3, 3, 2, 2};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> balloonCount = {21, 4, 16, 8, 10, 8, 18, 18, 15, 2, 11, 15, 15, 18, 16, 1, 4, 21, 2, 7, 15, 17, 23, 7, 6, 21, 1, 1, 5, 21, 13, 18, 3, 13, 2, 16, 7, 14, 22, 2, 21, 13, 20, 16, 12, 19, 6, 6, 3, 18};
    string balloonSize = "MMLMMMMLLLMMLLMMLLMMLLMLLLLMMLLLMMLMLMLMLLLLMLLMLL";
    vector<int> maxAccepted = {16, 15, 8, 11, 17, 9, 18, 13};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
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
    vector<int> balloonCount = {68, 16, 16, 72, 68, 41, 56, 56, 10, 70, 35, 32, 72, 9, 53, 25, 61, 65, 71, 29, 60, 37, 8, 62, 48, 19, 70, 38, 27, 52, 42, 18, 22, 14, 58, 8, 51, 37, 64, 10, 22, 31, 23, 6, 42, 34, 53, 3, 7, 69};
    string balloonSize = "MMMMMMMMMMMMMMMMMMMMMMMMMMMMLMMMMLMMMMMMMMMMMMMMMM";
    vector<int> maxAccepted = {12, 23, 25, 22, 42, 4, 14, 39, 36, 30, 42, 31, 29, 8, 36};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
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
    vector<int> balloonCount = {7, 26, 42, 24, 4, 24, 18, 35, 10, 7, 25, 1, 28, 21, 1, 2, 32, 11, 30, 8, 12, 17, 26, 1, 8, 33, 23, 13, 38, 9, 31, 40, 27, 9, 9, 16, 21, 33, 13, 29, 23, 13};
    string balloonSize = "LMLLLLLLLLMLLLLLLLLLLLLLLMMLLLLLLLLLLLLMLL";
    vector<int> maxAccepted = {11, 42, 4, 63, 30, 41, 77, 60, 60, 10, 77, 44, 69, 68, 57};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 290;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> balloonCount = {22, 19, 19, 2, 6, 31, 7, 9, 21, 33, 21, 29, 30, 24, 15, 32, 37, 23, 24, 8, 11, 22, 9, 12, 5, 18, 1, 28, 19};
    string balloonSize = "MLMMMLMMMLLMLMLMMLMLMMMLLMLLL";
    vector<int> maxAccepted = {18, 33, 4, 4, 16, 4, 20, 10, 26, 32, 6, 24, 19, 8, 5};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
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
    vector<int> balloonCount = {1, 6, 6, 6, 2, 8, 1, 1, 5, 7, 4, 9, 1, 5, 1, 6, 9, 3, 2, 2, 9, 5, 8, 8, 4, 6, 8, 6, 5, 5, 7, 1, 3, 1, 3, 5, 8, 6, 9, 7, 4, 1, 4, 2, 4, 9, 5, 6, 6, 1};
    string balloonSize = "MLLMMLLLMLLLMMMMLMLLLMLLMLLMMLMMLLLLLMLMMLLLMMLLLM";
    vector<int> maxAccepted = {3, 18, 20, 1, 7, 5, 11, 15, 9, 6, 20, 11, 11, 12, 6};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> balloonCount = {17, 9, 32, 16, 19, 11, 9, 1, 30, 7, 14, 13, 8, 18, 27, 32, 33, 28, 22, 30, 16, 2, 8, 36, 20, 9, 30, 27, 8, 2, 16, 9, 31, 13, 23, 28, 14, 27, 8, 17, 16, 3, 12, 26, 1, 13, 3, 29, 32, 17};
    string balloonSize = "LLLLLMLLLLMMLLLMLLLMLLMLLLLLLLLLMLMLLMMLMLLLLLLLLM";
    vector<int> maxAccepted = {19, 31, 61, 7};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> balloonCount = {22, 1, 24, 23, 23, 4, 25, 21, 21, 6, 9, 12, 24, 21, 24, 4, 5, 12, 15, 5, 21, 5, 15, 10, 28, 24, 5, 12, 19, 7, 18, 5, 6, 16, 28, 10, 1, 24, 5, 5, 26, 12, 2, 25, 8};
    string balloonSize = "MMLLLMLMLMMMLMMMMLMMLLLLLMLMLMLLLMLLMMLMMMLMM";
    vector<int> maxAccepted = {57, 55, 44, 60, 15, 26, 63};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 149;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> balloonCount = {75, 17, 87, 77, 30, 46, 87, 2, 44, 74, 11, 1, 44, 35, 64, 44, 1, 67, 36, 83, 57, 38, 36};
    string balloonSize = "LLMLLLLLLMLLLLLLLMMLMLM";
    vector<int> maxAccepted = {25, 72, 3, 22, 46, 88, 9, 40, 13, 35, 46};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> balloonCount = {8, 33, 34, 15, 3, 3, 14, 21, 11, 31, 17, 21, 30, 31, 25, 8, 17, 19, 27, 12, 13, 22, 15, 12, 8, 13, 17, 21, 34, 14, 7, 3, 5, 12, 16, 1, 12, 30, 5, 9, 23, 17, 34, 34, 17, 11, 26, 11, 29, 33};
    string balloonSize = "MMLMMMMLMMMMMMLLLLMMLMMMLLMMMMLLMMLMMLMLLLLMLLMLMM";
    vector<int> maxAccepted = {13, 21, 26, 9, 5, 14, 26, 14, 16, 4, 24, 11, 4};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> balloonCount = {11, 17, 74, 37, 25, 23, 29, 19, 68, 5, 66, 68, 30, 59, 30, 54, 33, 18, 1, 75, 34, 10, 41, 12, 30, 33, 8, 38, 22, 35, 42, 58, 18, 18, 8, 10, 73, 37, 18, 32, 8, 7, 2, 6, 69, 7, 71, 45, 65, 1};
    string balloonSize = "LLLLMLLMLLMLLLLLMLMLLMLMMLLLMLMLLLLLMMMLLMMLLLLLLM";
    vector<int> maxAccepted = {60, 42, 29, 35, 28, 60, 53, 3, 51};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> balloonCount = {10, 91, 15, 85, 94, 16, 73, 52, 43, 1, 12, 65, 80, 30, 38, 22, 93, 61, 7, 2, 56, 76, 13, 62, 58, 54, 21, 77, 37, 35, 32, 57, 53, 19, 30, 25, 12, 85, 3, 93, 14, 16, 98, 20};
    string balloonSize = "MMMMMMMMLMLMMMLMMLMMLMLLLMMMMMMLLLMMMMMMMMLL";
    vector<int> maxAccepted = {4, 7};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
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
    vector<int> balloonCount = {20, 1, 36, 19, 10, 37, 53, 53, 23, 49, 25, 30, 8, 21, 42, 6, 42, 9, 54, 26, 34, 3, 9, 58, 30, 48, 19, 22, 19, 49, 2, 59, 54, 44, 5, 20, 54, 8, 5, 31, 17, 10, 53, 30, 7, 10, 41, 35, 39, 58};
    string balloonSize = "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    vector<int> maxAccepted = {80, 62, 71, 10, 2, 4, 36, 50, 34, 63, 57, 24, 75, 89, 83};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 137;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> balloonCount = {24, 56, 6, 13, 77, 2, 46, 64, 54, 22, 23, 27, 72, 74, 70, 58, 38, 24, 34, 35, 20, 22, 70, 64, 15, 51, 58, 39, 76, 5, 26, 33, 20, 65, 20, 28, 63, 37, 7, 76, 76, 16, 33, 21, 34, 75, 22, 78, 59, 73};
    string balloonSize = "LLLLLLMMMLMMMLLLMLMMMLLLLLLLLLLLLLMMMMMMLMMMLLLLLL";
    vector<int> maxAccepted = {40, 12, 71, 65, 44, 31, 20, 49, 38, 26, 48, 23, 12, 24, 77};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
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
    vector<int> balloonCount = {9, 27, 16, 72, 70, 14, 55, 54, 4, 60, 62, 21, 11, 54, 73, 55, 13, 63, 54, 36, 25, 73, 79, 37, 80, 4, 60, 63, 10, 81, 82, 1, 43, 70, 8, 7, 16, 58, 69, 75};
    string balloonSize = "MMMMLMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    vector<int> maxAccepted = {32, 35, 54, 11};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> balloonCount = {62, 15, 56, 65, 10, 10, 61, 23};
    string balloonSize = "LLLLLLLL";
    vector<int> maxAccepted = {21, 1, 17, 7, 20, 8, 7, 19, 11, 21, 13, 12, 17, 15, 27};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> balloonCount = {25, 12, 21, 10, 23, 13, 46, 31, 30, 11, 37, 16, 48, 23, 41, 18, 7, 41, 49, 8};
    string balloonSize = "LMMMLLMMMLLMLLLLLLMM";
    vector<int> maxAccepted = {20, 14, 39, 25, 38, 36, 19, 13, 8, 15, 28, 37, 14, 24, 37};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> balloonCount = {3, 5, 5, 9, 1, 15, 16, 5, 3, 3, 9, 16, 11, 14, 12, 14, 8, 11, 4, 7, 2, 6, 8, 12, 4, 12, 5, 8, 3, 6, 5, 14, 2, 7, 13, 14, 1, 16, 1, 6, 10, 15, 13, 13, 15, 9, 6, 16, 5, 9};
    string balloonSize = "LLMLMLMMMLMMLLMLMMLMLMMLLMLLMLLLLMLMLLMLMMMLMMMMLM";
    vector<int> maxAccepted = {2};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> balloonCount = {19, 56, 12, 26, 5, 51, 70, 14, 62, 44, 28, 14, 7, 7, 51, 69, 57, 43, 34, 40, 34, 36, 46, 71, 47, 16, 36, 70, 68, 11, 56, 54, 30, 2, 2, 29, 41, 9, 8, 15, 69, 49, 38, 48, 43, 66, 58, 15, 14, 16};
    string balloonSize = "MLLMLMMLMMMLLMMLLMMLMLMMLMLMMLLMLMLLLMLMLMLMMMMLLL";
    vector<int> maxAccepted = {13, 15, 66, 30, 11};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> balloonCount = {19, 2, 57, 19, 35, 28, 45, 82, 59, 13, 79};
    string balloonSize = "MLMLMLLLLLL";
    vector<int> maxAccepted = {15, 43, 24, 41, 29, 18, 39, 38};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> balloonCount = {6, 24, 60, 54, 7, 8, 27, 30, 29, 10, 23, 47, 54, 46, 47, 3, 50, 4, 31, 12, 44, 25, 36, 52, 55, 12, 58, 42, 28, 1, 19, 4, 49, 25, 13, 50, 54, 10, 43, 32, 56, 25, 36, 9, 14, 49, 50, 8, 18, 59};
    string balloonSize = "MMMMMMLMMMMLLMLMMLMLLMMMLMMLLMMMLLMMLMMMLMLMMMMLLM";
    vector<int> maxAccepted = {31, 45, 43, 36};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> balloonCount = {75, 18, 19, 2, 19, 24, 53, 2, 20, 4, 32, 13, 3, 37, 44, 70, 55, 31, 35, 81, 9, 70, 31, 19, 45, 80, 44, 71, 3, 36, 10, 58, 22, 56, 41, 9, 18, 76, 55};
    string balloonSize = "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL";
    vector<int> maxAccepted = {2, 2, 1, 2, 5, 3, 4, 6, 2, 6, 4, 6, 4, 3, 4};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> balloonCount = {25, 13, 9, 23, 3, 17, 1, 26, 18, 24, 22, 11, 4, 8, 21, 18, 18, 17, 1, 22, 25, 16, 3, 24, 17, 17, 4, 12, 14, 25, 1, 13, 24, 10, 13, 25, 10, 12, 20, 25, 26, 29, 13, 6, 5, 5, 10, 21, 16, 6};
    string balloonSize = "LLLLLLLMLLLLLLLLLLLLMLMLLLLMLLMLMLLLLLLLLMLLLLLMLL";
    vector<int> maxAccepted = {74, 58};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> balloonCount = {37, 68, 30, 48, 61, 21, 41, 75, 80, 14, 23, 50, 18, 71, 36, 66};
    string balloonSize = "LMLMMLMLLLMMMLLL";
    vector<int> maxAccepted = {10, 2, 12};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> balloonCount = {21, 34, 4, 13, 3, 32, 28, 38, 38, 12, 20, 28, 10, 39, 7, 18, 25, 21, 11, 9, 3, 11, 28, 22, 5, 36, 22, 5, 21, 19, 19, 3, 22, 36, 18, 2, 14, 32, 24, 11, 2, 12, 11, 17, 3, 19, 12, 11, 15};
    string balloonSize = "MMMMMMMMMMMMMMMLLMMMLMLMMMMMMLMMMMMMMMMLMMMLMMMMM";
    vector<int> maxAccepted = {3};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> balloonCount = {53, 28, 33, 3, 27, 38, 26, 35, 15, 55, 10, 7, 30, 27, 49, 66, 35, 9, 23, 45, 17, 39, 48, 23, 12, 48, 57, 52, 71, 27, 70, 4, 70, 25, 61, 7, 17, 44, 60, 18, 66, 52, 14, 6, 35, 72, 7, 5, 4, 21};
    string balloonSize = "MMLMLLLMMLLLMLMMMMMMMMMLLMLLMMMLMMMMMMMMMMMMLMLMLM";
    vector<int> maxAccepted = {10, 12, 39, 72, 86, 58, 32, 59, 81, 75};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> balloonCount = {42, 2, 34, 9, 21, 13, 37, 8, 20, 17, 6, 48, 12, 40, 29, 23, 14, 27, 9, 2, 54, 43, 1, 22, 23, 39, 44, 1, 10, 3, 53, 45, 24, 5, 26, 20, 15, 24, 12, 28, 23, 48, 25, 15, 21, 4, 17, 27, 53, 50};
    string balloonSize = "LLLLLLLLLLLLLLLLLLMLLLLLLLLLLLLLLLMLMLLLLLLLLLLLLL";
    vector<int> maxAccepted = {15, 24, 15, 8, 8, 19, 10, 8, 22, 9, 17, 5, 10, 6, 20};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> balloonCount = {5, 38, 66, 4, 35, 29, 67, 21, 10, 46, 37, 56, 60, 31, 41, 45, 67, 55, 61, 16, 65, 11, 32, 2, 42, 11, 52, 8, 36, 55, 46, 58, 1, 50, 51, 63, 55, 13, 31, 15, 21, 40, 12, 13, 66, 6, 28, 54, 51, 2};
    string balloonSize = "MMMMMMMMMMMLMMMMMMMMMMMMMMMMMMMMMMMMMMLMMMMMMMMMLM";
    vector<int> maxAccepted = {40, 12, 1, 5, 19, 6, 42, 32, 2, 24, 42, 27, 27, 41, 1};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> balloonCount = {62, 47, 73, 55, 10, 75, 1, 75, 49, 46, 59, 70, 10, 18, 39, 80, 45, 29, 61, 51, 77, 36, 17, 70, 70, 61, 22, 59, 62, 50, 79, 29, 46, 3, 33, 11, 29, 31, 34, 81, 7, 82, 49, 82, 7, 37, 44, 8, 77, 5};
    string balloonSize = "MLMLLLMMLMLLLLMLLLLMLLLLLMLMLLLMLLLLMLLLLLMLLMMMLM";
    vector<int> maxAccepted = {25, 12, 13, 26, 15, 6, 24, 15, 16, 5, 26, 12, 25, 24};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> balloonCount = {4, 8, 16, 16, 22, 18, 19, 24, 21, 22, 5, 16, 12, 13, 9, 25, 21, 6, 6, 15, 5, 22, 16, 2, 10, 15, 26, 18, 10, 13, 11, 26, 27, 9, 16, 8, 2, 26, 7, 17, 23, 5, 18, 5, 3, 7, 2, 26, 10, 17};
    string balloonSize = "MMLMMMMMMMMMMLMMLMMMLMMMMMMMMMMMMMMMMMMMMMMMLMMMLM";
    vector<int> maxAccepted = {43, 41, 43, 30, 3, 47, 46, 27, 9, 3, 17, 46, 24, 19, 38};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 138;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> balloonCount = {1, 29, 17, 34, 6, 12, 46, 12, 1, 23, 42, 30, 6, 13, 21, 42, 50, 24, 4, 19, 49, 20, 12, 39, 8, 30, 1, 36, 4, 35, 47, 2, 20, 30, 32, 20, 6, 8, 29, 41, 36, 3, 11, 29, 14, 38, 17, 46, 23, 37};
    string balloonSize = "MMMMMMMMLMMMMMMMLMMMMLMMMMLMLMMMMMMMMMMMMMMMMMMMMM";
    vector<int> maxAccepted = {56, 35, 43, 6, 5, 41, 13, 17, 5, 32, 53, 50, 28};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> balloonCount = {15, 7, 28, 30, 7, 39, 7, 24, 16, 24, 24, 24, 25, 38, 43, 3, 30, 30, 43, 32, 20, 49, 6, 13, 3, 44, 14, 10, 3, 2, 33, 19, 8, 47, 18, 19, 32, 21, 40, 8, 7, 24, 5, 24, 30, 10, 35, 14, 32, 49};
    string balloonSize = "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    vector<int> maxAccepted = {13, 14, 26, 31};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> balloonCount = {85, 17, 93, 10, 38, 30, 16, 85, 43, 20, 5, 81, 58, 60, 83, 8, 28, 87, 60, 35, 47, 64};
    string balloonSize = "LLLLLLLLLLMLLLLLLLLLML";
    vector<int> maxAccepted = {7, 2, 3, 7, 1, 6, 9, 4, 2, 10, 3, 1, 8, 6, 10};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> balloonCount = {21, 15, 19, 17, 2, 12, 15, 9, 15, 16, 24, 4, 5, 16, 3, 1, 19, 12, 21, 4, 5, 9, 19, 13, 7, 3, 5, 1, 11, 19, 17};
    string balloonSize = "LMLLMLLMMMMLLLLLLLLLLLLLLLLLLML";
    vector<int> maxAccepted = {4, 3, 13, 12, 7, 3, 5, 9, 6, 11, 5, 11, 9, 4, 3};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> balloonCount = {18, 13, 18, 84, 73, 5, 43, 46, 42, 81, 48, 20, 54, 76, 35, 86, 14, 12, 81, 87, 44, 64, 55, 52, 77, 42, 14, 90, 82, 57, 32, 21, 38, 9, 69, 39, 38, 60, 64, 6, 36, 83, 21, 26, 17, 75, 88, 90, 40, 64};
    string balloonSize = "MMMMLLLLMMMMMMLMMMMLLMLLLLMLMMMMLMMLMMMMMLMLLLMMMM";
    vector<int> maxAccepted = {57, 62, 17, 22, 65, 46, 72, 62, 3, 74, 64, 71, 33, 2, 29};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> balloonCount = {4, 53, 35, 48, 23, 17, 14, 33, 17, 5, 11, 16, 5, 40, 44};
    string balloonSize = "MMMLLLLMMMMMMMM";
    vector<int> maxAccepted = {14, 15, 12, 9, 28, 6, 23, 8, 15, 29, 10, 13, 19, 22, 3};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> balloonCount = {25, 46, 21, 6, 8, 11, 15, 44, 17, 37, 14, 23, 10, 21, 33, 47, 28, 16, 26, 12, 18, 10, 48, 26, 29, 40, 3, 43, 40, 19, 8, 27, 2, 40, 16, 15, 45, 13, 41, 7, 2, 30, 32, 18, 15, 5, 17, 33, 15, 24};
    string balloonSize = "MMMMMMMMMMMMMLMMMMMLMMLMMMMMMMLMMMMMMMMMMMLMMMMMMM";
    vector<int> maxAccepted = {20, 33, 14, 37};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> balloonCount = {10, 58, 9, 2, 34, 32, 35, 15, 37, 7};
    string balloonSize = "LLLLLLLLLL";
    vector<int> maxAccepted = {3, 8, 23, 23, 25, 5, 24, 18, 1, 17, 2, 8, 17, 19, 4};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> balloonCount = {33, 33, 70, 90, 12, 37, 7, 40, 59, 7, 23, 12, 9, 92, 18, 91};
    string balloonSize = "LLLLLLLLLLLLLMLL";
    vector<int> maxAccepted = {9, 9, 7, 39, 20, 9, 26, 29, 36, 14, 10, 43, 24, 28, 42};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> balloonCount = {22, 20, 18, 15, 8, 2, 9, 16, 6, 16, 13, 16, 20, 4, 21, 2, 2, 7, 1, 8, 9, 12, 17, 17, 7, 16, 8, 13, 6, 3, 12, 7, 17, 22, 6, 19, 17, 13, 6, 6, 3, 2, 4, 21, 1, 19, 13, 12, 16, 8};
    string balloonSize = "LLLLLLLLLLLLLLLMMLMLLLMLLLLLLMLLLLMMMMLLLLMLLLLLLL";
    vector<int> maxAccepted = {16, 36, 4};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> balloonCount = {82, 45, 54, 74, 23, 73, 37, 58, 7};
    string balloonSize = "MMMMMLMMM";
    vector<int> maxAccepted = {43, 12, 50, 3, 1, 33, 15, 22, 10, 28};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
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
    vector<int> balloonCount = {5, 8, 13, 20, 17, 7, 20, 13, 14, 20, 9, 11, 19, 4, 2, 10, 14, 11, 5, 19, 14, 13, 17, 17, 12, 16, 16, 14, 16, 10, 13, 13, 3, 5, 18, 20, 2, 19, 11, 14, 10, 14, 16, 6, 6, 16, 14, 16, 8, 7};
    string balloonSize = "LMLMMMLLMMMMLLLMMMLMLMMMMLMMLLMMMMLMLMLLMMMMMLLMLM";
    vector<int> maxAccepted = {10, 13, 8, 15, 7, 10, 12, 1, 9, 5, 17, 1, 17, 16, 5};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> balloonCount = {1, 23, 14, 15, 17, 4, 19, 20, 27, 11, 27, 10, 13, 22, 25, 4, 1, 7, 3, 14, 15, 17, 19, 5, 15, 2, 13, 19, 8, 24, 12, 2, 3, 17, 15, 24, 9, 15, 1, 10, 13, 6, 3, 2, 13, 14, 14, 8, 22, 4};
    string balloonSize = "LLMLLLLMLMLMLMLMLMMLLMLLMMLLLMMMLMLLMLMMLLMLLLLMLL";
    vector<int> maxAccepted = {7, 25, 26, 3, 28, 17};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> balloonCount = {1, 4, 1, 9};
    string balloonSize = "LLML";
    vector<int> maxAccepted = {20, 21};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> balloonCount = {1, 3, 5, 2, 1, 3, 1, 2, 5, 2, 5, 4, 5, 4, 1, 5, 3, 1, 3, 5, 5, 3, 5, 4, 5, 2, 3, 3, 5, 4, 3, 4, 4, 1, 2, 4, 2, 5, 1, 1, 5, 5, 3, 1, 4, 3, 4, 5, 3, 4};
    string balloonSize = "MMLLMMLMMMLMMMMMLMMMMMMMMMMLLMLLLMMMLMMLMLMMLMMLMM";
    vector<int> maxAccepted = {43, 8, 51, 25, 54, 28, 17, 22, 34, 33, 24, 31, 37, 36, 40};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> balloonCount = {3, 2, 1, 3, 3, 3, 2, 2, 1, 1, 1, 1, 2, 1, 1, 1, 3, 1, 1, 1, 2, 1, 1, 1, 3, 1, 1, 3, 3, 2, 1, 3, 2, 2, 1, 1, 1, 2, 2, 1, 3, 3, 2, 3, 3, 1, 3, 2, 3, 1};
    string balloonSize = "MMMMMMLLMMMMMMMMLMMMMMMMLMMMMMMMMMMMMMMMMMMMMMLLMM";
    vector<int> maxAccepted = {81, 78, 34, 45, 33, 50};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> balloonCount = {31, 20, 47, 21};
    string balloonSize = "MLMM";
    vector<int> maxAccepted = {10, 24, 27, 25, 15, 9, 17, 14, 18, 17, 20, 10, 12, 4, 2};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> balloonCount = {9, 9, 7, 6, 4, 12, 2, 4, 7, 6, 7, 10, 11, 8, 9, 5, 11, 11, 2, 8, 9, 4, 8, 12, 13, 9, 1, 12, 8, 6, 10, 2, 5, 9, 2, 5, 12, 3, 9, 3, 6, 12, 6, 12, 1, 12};
    string balloonSize = "MMLMLLLMMLMMLMLLLLLLLLLMLLLMLLLLLLLLLLMMMLLLLL";
    vector<int> maxAccepted = {6, 81, 74, 36, 11, 38, 49, 65, 12, 16, 7, 50, 59, 66};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> balloonCount = {17, 13, 11, 2, 14};
    string balloonSize = "MMMMM";
    vector<int> maxAccepted = {78, 53, 43, 26, 19, 49, 61, 27, 21, 45, 38, 23, 36, 52, 67};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> balloonCount = {2, 1, 1, 2, 2, 2, 1, 1, 2, 2, 1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 2, 2, 1, 2, 1, 1, 1, 2, 2, 2, 2, 1, 1, 1, 1, 1, 2, 1, 2, 1, 2};
    string balloonSize = "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL";
    vector<int> maxAccepted = {76, 5, 69, 11, 82, 48, 78, 51, 8, 39, 85, 53, 16, 62, 33};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> balloonCount = {5, 3, 1, 2, 3, 2, 3, 5, 3, 3, 1, 3, 1, 5, 4, 4, 3, 3, 4, 5, 2, 3, 2, 5, 2, 2};
    string balloonSize = "LMMMMMMMMLMLMMMLLMLLMMMMLM";
    vector<int> maxAccepted = {44, 41, 50, 81};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> balloonCount = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    string balloonSize = "MLMMMMMLMLMMMMMMMMMMLMMMMMMMMMLMMMMMMLMLLMMMLMMMMM";
    vector<int> maxAccepted = {15, 3, 10, 13, 7, 4, 10, 4, 15, 10, 10, 18, 12, 9, 11};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> balloonCount = {9, 9, 6, 7, 3, 3, 9, 4, 4, 9, 7, 9, 4, 6, 4};
    string balloonSize = "MMLMMMMLMMMMLLM";
    vector<int> maxAccepted = {20, 8, 9, 4, 4, 40, 15, 27, 3, 18, 28, 36, 27, 26, 31};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> balloonCount = {60, 2, 18, 32, 29, 32, 36, 1, 20, 34, 30, 43, 14, 60, 17, 26, 51, 3, 11, 8, 57, 39, 30, 48, 5, 10, 49, 13, 51, 29, 34, 15, 10, 33, 1, 30, 26, 26, 44, 58, 50, 28, 47, 60, 42, 29, 42, 3, 18, 47};
    string balloonSize = "MMMMMMMMMMMMMLMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    vector<int> maxAccepted = {18, 97, 64, 78, 96, 59, 52, 73, 73, 66, 84, 38, 48, 89, 97};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 295;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> balloonCount = {36, 15, 40, 30, 36, 25, 25, 19, 5, 37, 23, 31, 12, 25, 23, 37, 33, 9, 4, 20, 19, 6, 23, 13, 8, 20, 28, 28, 35, 19, 27, 22, 40, 37, 29, 11, 12, 10, 13, 26, 5, 28, 10, 38, 1, 32, 35, 25, 26, 12};
    string balloonSize = "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMLMMMMMM";
    vector<int> maxAccepted = {50, 34, 45, 29, 19, 52, 41};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 34;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> balloonCount = {33, 52, 4, 34, 4, 57, 56, 43, 7, 22, 11, 30, 6, 36, 2, 50, 55, 5, 59, 51, 47, 51, 59};
    string balloonSize = "MMMMMMMMMMMMMMMMLMMMMML";
    vector<int> maxAccepted = {32, 63, 66, 33, 4, 67, 30, 63, 45, 11, 22, 14, 12, 46, 53};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> balloonCount = {1, 22, 5, 19, 4, 12, 4, 10, 19, 7, 20, 2, 24, 5, 11, 13, 7, 16, 2, 11, 16, 17, 5, 26, 14, 1, 19, 7, 9, 26, 13, 26, 14, 7, 16, 14, 9, 18, 21, 5, 11, 28, 12, 21, 9, 24, 24, 3, 28, 8};
    string balloonSize = "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLMLLML";
    vector<int> maxAccepted = {47, 23, 35, 68, 59, 13, 2, 70, 25, 19, 39, 32, 2, 55, 72};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 259;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> balloonCount = {47, 51, 51, 18, 52, 23, 25, 63, 34, 6, 37, 26, 15, 58, 17, 23, 8, 39, 10, 33, 58, 11, 36, 50, 20, 52, 58, 31, 36, 62, 42, 14, 3, 44, 44, 28, 46, 51, 51, 6, 13, 1, 52, 23, 25, 5, 44, 12, 36, 37};
    string balloonSize = "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLMLLLLLLLLLLLLLLLLLLLL";
    vector<int> maxAccepted = {24, 46, 22, 9, 75, 3, 64, 4, 39, 15, 57};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> balloonCount = {5, 72, 59, 73, 17, 62, 10};
    string balloonSize = "MMMMLMM";
    vector<int> maxAccepted = {6, 10, 25, 5, 26, 15, 7, 7, 19, 14, 22, 20, 28, 4, 15};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 92;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> balloonCount = {4, 35, 15, 12, 1, 41, 51};
    string balloonSize = "MMMMLML";
    vector<int> maxAccepted = {19, 78, 9};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> balloonCount = {2, 43, 22};
    string balloonSize = "LMM";
    vector<int> maxAccepted = {11, 13, 5, 24};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> balloonCount = {35, 35, 50, 4, 10, 31, 13, 6, 32, 38, 42, 51, 16, 41, 30, 14, 28, 38, 40, 51, 11, 45, 21, 12, 45, 14, 35, 38, 27, 10, 14, 14, 7, 30, 14, 31, 45, 18, 39, 4, 43, 21, 31, 25, 20, 49, 9, 50, 47, 4};
    string balloonSize = "LLLLLLLLLLLLLLLLLLLMLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL";
    vector<int> maxAccepted = {50, 59, 29, 48, 56, 69, 50, 24, 30, 44, 44, 44, 27, 41, 56};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> balloonCount = {13, 48, 52, 33, 11, 55, 22};
    string balloonSize = "MLLMLLL";
    vector<int> maxAccepted = {1, 21, 1, 7, 2, 31, 22, 11, 34, 32, 33};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> balloonCount = {2, 7, 11, 10, 4, 8, 4, 6, 8, 21, 7, 13, 5, 11, 3, 14, 4, 6, 6, 12, 19, 1, 6, 24, 4, 10, 3, 10, 6, 26, 8, 6, 9, 17, 13, 14, 1, 21, 3, 22, 14, 3, 12, 4, 19, 8, 12, 18, 10, 21};
    string balloonSize = "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLMLMLLLLLLLLLLLLLLLLLL";
    vector<int> maxAccepted = {88, 37, 41};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> balloonCount = {23, 16, 1, 38, 12, 14, 36, 1, 24, 25, 4, 19, 23, 5, 13, 36, 22, 1, 28, 14, 26, 7, 1, 42, 28, 24, 23, 17, 18, 14, 7, 42, 8, 38, 31, 1, 8, 34, 11, 39, 13, 8, 20, 30, 18, 29, 43, 35, 19, 12};
    string balloonSize = "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLMLLL";
    vector<int> maxAccepted = {27, 8, 26, 17, 25, 41, 37, 35, 19, 24, 3, 44, 51, 25, 20};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> balloonCount = {16, 52, 19, 29, 33, 42, 21, 18, 57, 29, 37, 55, 38, 36, 36, 36};
    string balloonSize = "LLLLLLLLLLLLMLLL";
    vector<int> maxAccepted = {60, 9, 21, 67, 2, 18, 42, 61, 46, 13, 27, 20, 4};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> balloonCount = {12, 10, 4, 4, 18, 20, 16, 22, 24, 18, 23, 12, 4, 3, 23, 12, 7, 13, 13, 15, 4, 13, 5, 18, 12, 14, 16, 13, 1, 3, 2, 6, 13, 15, 22, 24, 22, 9, 1, 12, 16, 22, 8, 2, 16, 23, 15, 1, 1, 9};
    string balloonSize = "MMMMMLMMMMLMMMMMMMMMMMMMLMMMMMMMMMMLMLMMMLMMMLLMMM";
    vector<int> maxAccepted = {35, 36, 15, 31, 3, 14, 27, 28, 16, 38, 4, 34, 31, 43, 47};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 127;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> balloonCount = {1, 20, 27, 7, 19, 9, 19, 5, 27, 1, 18, 21, 11, 11, 15, 22, 27, 22, 19, 21, 11, 1, 8, 8, 6, 18, 19, 16, 15, 27, 9, 20, 24, 13, 2, 18, 1, 6, 26, 29, 8, 27, 11, 8, 17, 8, 14, 20, 15, 2};
    string balloonSize = "LLLLMLLMLLLLMLLLLLMLLMLLMLLLLLLLLLLLLLLLLMLLLMMLMM";
    vector<int> maxAccepted = {12, 55, 31, 58, 47, 87, 35, 85, 57, 49, 44, 62, 27, 36, 41};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 375;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> balloonCount = {64, 54, 45, 6, 49, 44, 2, 62, 16, 11, 7, 50};
    string balloonSize = "LMMMMMLMMMMM";
    vector<int> maxAccepted = {84, 17, 23};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> balloonCount = {4, 2, 14, 17, 10, 10, 13, 10, 8, 3, 9, 7, 10, 7, 2, 16, 6, 6, 13, 17, 1, 17, 16, 1, 6, 18, 16, 11, 4, 6, 17, 7, 1, 14, 11, 14, 9, 16, 6, 1, 8, 17, 6, 15, 15, 5, 18, 5, 6, 2};
    string balloonSize = "LLLLLLLLLLLLLLLLLMLLLMLLLLLLLLLLLLLLLLLLMLLLLLLLLL";
    vector<int> maxAccepted = {45, 30, 69, 52, 2, 40, 6, 36, 10, 11, 13, 41, 56, 47, 15};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 266;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> balloonCount = {46, 57, 33, 47, 52, 30, 30, 62, 51, 9, 22, 60, 46, 2, 18, 37, 28, 58};
    string balloonSize = "LLLLLLMLLLLLLLLLLL";
    vector<int> maxAccepted = {68, 61, 21, 83, 90, 58, 58, 15, 69, 24, 7, 35, 11, 23, 63};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 124;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> balloonCount = {27, 12, 27, 21, 3, 13, 26, 14, 22, 22, 5, 15, 14, 25, 2, 25, 13, 5, 3, 21, 8, 11, 9, 5, 12, 26, 19, 15, 13, 14, 7, 23, 21, 18, 1, 10, 25, 16, 4, 8, 19, 25, 27, 21, 5, 9, 16, 16, 7, 22};
    string balloonSize = "MMLMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    vector<int> maxAccepted = {43, 33, 41, 47, 19, 4, 33, 13, 35, 37, 40, 30, 34, 17};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 122;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> balloonCount = {26, 26, 47, 20, 49, 25, 15, 5, 53, 53, 55, 14, 10, 6, 52, 36, 28, 47, 31, 29, 35, 43, 49, 19, 21, 41, 58, 17, 17, 44, 2, 3, 47, 17, 49, 15, 13, 31, 15, 17, 6, 26, 51, 15, 58, 44, 25, 50, 1, 13};
    string balloonSize = "LLLLLLLLLLLLLLLLLLLLLLLLLLMLLLMLLLLLLLLLLLLLLLLLLL";
    vector<int> maxAccepted = {35, 74, 74, 29, 36, 26, 68, 23, 8};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> balloonCount = {28, 36, 17, 18, 27, 22, 15, 8, 27, 39, 40, 25, 23, 32, 8, 4, 4, 14, 15, 22};
    string balloonSize = "MMLMMMLMLMMMLMMLLMLL";
    vector<int> maxAccepted = {12, 43, 50, 8, 47, 8, 48, 8, 40, 29, 7, 22, 47, 18, 30};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 82;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> balloonCount = {56, 24, 52, 26, 16, 19, 69, 29, 70, 47, 59, 27, 38};
    string balloonSize = "MLLMLMMMMMMLM";
    vector<int> maxAccepted = {41, 38, 11, 13, 8, 50, 48, 26, 54, 52, 36, 34, 5, 51, 53};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 47;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> balloonCount = {27, 63, 13, 44, 46, 23, 47, 53, 22, 31, 70, 7, 28, 76, 31, 49, 3};
    string balloonSize = "LLLMMMLLMLLLLLLML";
    vector<int> maxAccepted = {41, 55, 57, 29, 65, 49, 55, 52, 31, 57, 33, 25, 16, 33, 35};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> balloonCount = {14, 11, 2, 12, 10, 10, 6, 7, 3, 3, 5, 2, 6, 11, 4, 13, 14, 9, 7, 13, 9, 13, 10, 6, 8, 9, 10, 8, 9, 14};
    string balloonSize = "LLLMLMMLLMMLMMMLLLMLMLMMLMLLML";
    vector<int> maxAccepted = {6, 2, 8, 32, 35, 29, 35, 11, 32, 31, 29};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 135;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> balloonCount = {49, 51, 2, 22, 48, 8, 19, 11, 41, 59, 29, 13, 20, 27, 41, 27, 6};
    string balloonSize = "LLLLMLMLMLMLLLLLL";
    vector<int> maxAccepted = {17, 36, 48, 4, 23, 78, 19, 2, 47, 71, 38, 20, 47, 21};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> balloonCount = {14, 12, 10, 1, 11, 5, 10, 5, 1, 10, 10, 5, 5, 1, 6, 10, 11, 7, 1, 2, 4, 6, 12, 14, 4, 11, 10, 1, 6};
    string balloonSize = "LLLLLLMLLLLMLLLLLMLLLLMMLLLLL";
    vector<int> maxAccepted = {53, 51, 61};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> balloonCount = {89, 31, 46, 10, 45, 14, 14, 55, 34, 49, 43, 11, 55, 51, 38, 39, 13, 56};
    string balloonSize = "LLLLLLMMLLMMLLLLLL";
    vector<int> maxAccepted = {67, 9, 69, 69, 78, 58, 73, 6, 91, 78, 95};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> balloonCount = {1, 11, 4, 6, 16, 15, 10, 18, 21, 1, 21, 2, 16, 7, 9, 15, 18, 22, 14, 21, 20, 20, 7, 12, 3, 17, 21, 19, 21, 14, 21, 8, 4, 19, 13, 2, 15, 7, 5, 15, 2, 4, 3, 13, 12, 22, 1, 12, 11, 2};
    string balloonSize = "MMMMMMMMMMMMMMMMMMMMLMLMMMMMLMMMMMMMMMMMMMMMMMMMMM";
    vector<int> maxAccepted = {28, 36, 90, 3, 77, 67, 60, 2, 60, 71, 4, 93};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> balloonCount = {2, 1, 2, 2, 1, 2, 1, 1, 2, 2, 2, 2, 2, 2, 1, 1, 1, 1, 2, 2, 1, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 2, 2, 1, 2, 1, 2, 1, 1, 1, 1, 1, 2, 1, 1, 2, 1, 2, 2, 1};
    string balloonSize = "LMLMLMLLMLLLLLLMLLLLLLMMLLLLLMMLMLLLLLMLLLLLLLLMLL";
    vector<int> maxAccepted = {10, 59};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> balloonCount = {2, 3, 6, 6, 6, 7, 2, 4, 7, 5, 2, 1, 3, 2, 7, 2, 4, 7, 7, 7, 2, 7, 5, 5, 1, 3, 1, 7, 1, 4, 4, 1, 6, 3, 1, 2, 2, 5, 3, 4, 1, 5, 5, 6, 3, 7, 4, 3, 5, 3};
    string balloonSize = "MMMMMMMMMMMMMLMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM";
    vector<int> maxAccepted = {8, 17, 16, 18, 19, 14, 23, 8, 5, 22, 1, 13, 12, 11, 12};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> balloonCount = {3, 19, 10, 18, 12, 17, 6, 6, 30, 25, 27, 20, 8, 35, 28, 10, 21, 24, 9, 9, 33, 18, 3, 7, 19, 15, 26, 24, 23, 11, 18, 11, 21, 17, 14, 20, 6, 21, 14, 31, 23, 2, 22, 35, 22, 9, 32, 10, 19, 18};
    string balloonSize = "MLMLLMLLMMMMLLMMLMLLMLMMLMLMMLMLLLLLMLLLMLLMMLMMML";
    vector<int> maxAccepted = {20, 73, 70, 70, 27, 59, 85, 37, 57, 44, 73, 69, 100, 31, 66};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 468;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> balloonCount = {8, 3, 2, 13, 14, 3, 3, 2};
    string balloonSize = "LMMMLMMM";
    vector<int> maxAccepted = {11, 10, 10, 7, 9, 1};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> balloonCount = {45, 48, 27};
    string balloonSize = "LLM";
    vector<int> maxAccepted = {13, 30, 16, 11, 22, 28};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> balloonCount = {8, 20, 22, 23, 22, 38, 3, 9, 18, 34, 19, 29, 31, 3, 23, 6, 6, 18, 1, 3, 34, 23, 20, 9, 40, 17, 24, 18, 23, 8, 32, 3, 43, 22, 22, 15, 17, 20, 4, 18, 12, 26, 22, 18, 12, 26, 22, 15, 12, 10};
    string balloonSize = "MMMMLMMMMMMMMMMMMMMMMLMLMLMMMMMMMMMMMMMMMMLLMMLMLM";
    vector<int> maxAccepted = {37, 100, 100, 100, 89, 43, 62, 94, 17, 34, 61, 100, 45, 15, 26};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 489;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> balloonCount = {36, 6, 20, 21, 12, 3, 31, 11, 1, 6, 30, 14, 25, 1, 3, 18, 22, 18, 17, 29, 8, 26, 22, 16, 20, 13, 13, 15, 16, 13, 25, 26, 16, 15, 9, 24, 25, 1, 37, 6, 26, 33, 20, 27, 28, 3, 14, 4, 20, 17};
    string balloonSize = "MMMMMMMMMMMMMMMMMMMLMLMMMLMMLMMMMMMMMMLMMMMLMLLMMM";
    vector<int> maxAccepted = {94, 18, 47, 100, 70, 72, 10, 100, 55, 96, 100, 100};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 533;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> balloonCount = {8, 5, 1, 4, 1, 1, 3, 1, 3, 3, 5, 4, 5, 6, 9};
    string balloonSize = "MMMLLLMMLLMLMLM";
    vector<int> maxAccepted = {3, 5, 3, 3, 5, 6, 4, 6, 4, 2, 3, 7, 1, 5, 2};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> balloonCount = {28, 7, 11, 8, 10, 4, 36, 3, 19, 28, 28, 15, 20, 16, 14, 12, 6, 21, 25, 11, 21, 2, 19, 12, 15, 19, 23, 22, 16, 18, 1, 13, 19, 33, 27, 10, 13, 18, 6, 13, 18, 2, 6, 14, 11, 15, 18, 7};
    string balloonSize = "LMLMMMMMMMLMMMMMLMLMMMMMMMMLMLMMMLMMMMMMMMMMMMML";
    vector<int> maxAccepted = {54, 39, 48, 69, 8, 60, 71, 74, 68, 2, 56, 38, 78, 45, 23};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 395;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> balloonCount = {24, 21, 1, 25, 26, 28, 26, 8, 2, 30, 4, 27, 25, 19, 13, 19, 1, 14, 25, 12, 34, 10, 14};
    string balloonSize = "LLLLMLLLLMMMLMMLLLLLLLL";
    vector<int> maxAccepted = {65, 29, 53, 100, 90, 71};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 238;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> balloonCount = {39, 5, 20, 28, 29, 31, 2, 28, 3, 4, 4, 21, 1, 14, 36, 5, 26, 34, 27, 20, 23, 14, 21, 37, 26, 16, 33, 13, 3, 13, 22, 27, 29, 29, 10, 25, 4, 2, 18, 28, 21, 1, 35, 28, 19, 10, 6, 28, 26, 31};
    string balloonSize = "MMMMMMMMMMMMLLLMMMMMMMMMMMMMLMMMMMLLMMMMMMMMLLLMMM";
    vector<int> maxAccepted = {39, 18, 41, 80, 58, 100, 53, 60, 100, 65, 1, 100, 100, 87, 73};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 540;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> balloonCount = {14, 7, 1, 6, 12, 16, 11, 15, 1, 6, 20, 11, 8, 5, 9, 9, 6, 24, 1, 1, 13, 7, 14, 6, 6, 6, 16, 4, 5, 15, 2, 19, 18, 4, 7, 14, 13, 18, 17, 4, 4, 18, 9, 21, 6, 3, 9, 1, 21, 17};
    string balloonSize = "LLLLLLLLLLLMLLLLLLLMLLLLLLLLLLMLLLLLLLLLLLLLLLLLLL";
    vector<int> maxAccepted = {42, 2, 57, 8, 32, 32, 64, 31, 37, 1, 39, 52, 13, 59, 31};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 269;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> balloonCount = {29, 4, 8, 29, 7, 18, 1, 29, 12, 17, 40, 23, 19, 40, 26, 7, 18, 30, 3, 6, 14, 22, 23, 2, 11, 21, 20, 12, 30, 24, 12, 38, 25, 14, 7, 14, 47, 38, 6, 42, 9, 52, 25, 19, 4, 46, 45, 38, 32, 31};
    string balloonSize = "LLLMLMLMLLLMMMLLLLLLLLLLLLLLLMLLLMLLLLLLLLLLLLLLLL";
    vector<int> maxAccepted = {57, 43, 2, 48, 100, 100, 98, 81, 100, 83, 50, 100, 100, 96, 31};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 539;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> balloonCount = {33, 24, 46, 8, 35, 26, 46, 10, 21, 14, 2, 5, 9, 24, 7, 19, 41, 38, 1, 27, 15, 43, 4, 6, 17, 37, 2, 38, 36, 3, 26, 33, 17, 48, 32, 40, 21, 21, 20, 45, 33, 37, 6, 29, 15, 16, 4, 1, 28, 40};
    string balloonSize = "LLMLMLLLMLLLLLLMLLLMLLLLLLLLLLMLLLMLMLLLLMLMMMMMLL";
    vector<int> maxAccepted = {100, 62, 100, 100, 98, 87, 69, 93, 78, 79, 52, 43, 61, 83, 44};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 547;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> balloonCount = {100, 92, 96, 42, 47, 100, 100, 100, 100, 100, 88, 6, 100, 14, 37, 26, 61};
    string balloonSize = "MMMMLMLLMMMMLMMLM";
    vector<int> maxAccepted = {100, 100, 7, 100, 100, 100, 100, 100, 60, 100, 100, 56, 100, 10, 76};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 73;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> balloonCount = {30, 40, 36, 19, 16, 34, 33, 10, 44, 36, 41, 6, 43, 37, 16, 7, 41, 21, 24, 25, 3, 4, 17, 40, 49, 13, 12, 35, 8, 37, 18, 2, 16, 38, 43, 28, 40, 30, 6, 42, 26, 4, 38, 22, 24, 20, 24, 36, 7, 31};
    string balloonSize = "MMMMLLMMLLMMLLLMLMLMMLLMLMLMMMMMMMLMMMLLLLLMMLMMLM";
    vector<int> maxAccepted = {100, 100, 100, 100, 100, 100, 100, 13, 96, 100, 20, 100, 97, 100, 46};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 705;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> balloonCount = {54, 20, 14, 26, 76, 35, 78, 58, 36, 4, 48, 41, 67, 48, 29, 15, 2, 53, 5};
    string balloonSize = "MMMMMMMMMMMMMMLLMML";
    vector<int> maxAccepted = {10, 14, 4, 22, 13, 83, 67, 77, 45, 85, 24, 94, 78, 66, 27};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 123;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> balloonCount = {13, 18, 6, 18, 18, 21, 4, 11, 14, 7, 13, 10, 1, 12, 12, 16, 7, 5, 1, 15, 20, 1, 12, 8, 4, 10, 14, 13, 6, 4, 5, 21, 5, 12, 1, 30, 7, 18, 1, 4, 19, 25, 12, 10, 5, 21, 9, 10, 23, 5};
    string balloonSize = "MMMMMMLMMMLLMLLMMMLMMLLLMMMMMLLLMMMLLMLMMMMMLMLLML";
    vector<int> maxAccepted = {39, 18, 62, 37, 4, 53, 10, 9, 81, 26, 43, 39, 6, 71, 59};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 299;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> balloonCount = {7, 4, 1, 3, 4, 2, 12, 4, 8, 3, 2, 8, 5, 5, 5, 8, 1, 4, 3, 6, 7, 8, 1, 8, 5, 6, 3, 1, 3, 10, 2, 6, 3, 1, 4, 5, 10, 2, 7, 3, 6, 1, 5, 5, 6, 11, 13, 5, 1, 8};
    string balloonSize = "MMMMMMMLMMMMMMMMMLMMLMMMLMLMMMLMMMMLMMMMMLMLMMMMMM";
    vector<int> maxAccepted = {2, 17, 34, 37, 58, 2, 26, 33, 42};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 176;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> balloonCount = {1, 26, 25, 15, 2, 13, 16, 1, 14, 12, 26, 23, 28, 26, 17, 21, 20, 21, 16, 15, 23, 12, 15, 28, 16, 9, 16, 3, 5, 13, 4, 25, 22, 15, 20, 12, 25, 5, 14, 4, 25, 24, 7, 1, 22, 4, 9, 7, 14, 17};
    string balloonSize = "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLMLLLLLLLLLLLLLLLLLLLL";
    vector<int> maxAccepted = {71, 53, 54, 68, 6, 54, 46, 75, 79, 8, 88, 51, 2, 11, 88};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 448;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> balloonCount = {12, 12, 3, 14, 24, 36, 2, 21, 30, 6, 6, 11, 34, 23, 49, 28, 13, 27, 33, 1, 29, 40, 12, 36, 37, 36, 31, 36, 36, 11, 28, 32, 26, 46, 28, 3, 31, 2, 38, 6, 13, 22, 44, 37, 5, 15, 38, 38, 22, 20};
    string balloonSize = "LLLLLLLLLLLLLLLMLLMLMMLLLLLLLLLLLLLLLLLLLLLLLLLLLL";
    vector<int> maxAccepted = {100, 100, 100, 100, 44, 74, 100, 100, 100, 100, 9, 70, 100, 41, 45};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 637;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> balloonCount = {7, 1, 6, 10, 5, 7, 3, 7, 13, 5, 3, 2, 3, 14, 4, 8, 3, 7, 12, 16, 8, 2, 19, 15, 19, 5, 4, 16, 4, 7, 2, 7, 5, 12, 2, 10, 2, 5, 10, 4, 14, 8, 9, 10, 2, 13, 5, 2, 8, 20};
    string balloonSize = "LMLLLLLMLLLMLMLLMMLMLLMMLLLLMMLLLLLLMLLLLMLLLMLLLL";
    vector<int> maxAccepted = {12, 18, 58, 25, 69, 100, 3, 100};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 266;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> balloonCount = {79, 73, 76, 39, 61, 92, 44, 38, 9, 62, 52};
    string balloonSize = "MLLLMMLMLLL";
    vector<int> maxAccepted = {5, 63, 49, 68, 53, 53, 2, 88, 13, 21, 87, 56, 31, 13, 23};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> balloonCount = {18, 71, 17, 24, 52};
    string balloonSize = "LMMMM";
    vector<int> maxAccepted = {24, 2, 2, 12, 13, 9, 9, 17, 13, 10, 2, 3, 17, 23, 26};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> balloonCount = {1, 18, 4, 7, 19, 7, 7, 1, 4, 8, 10, 5, 14, 13, 8, 22, 6, 3, 13, 5, 3, 4, 2, 1, 3, 15, 19, 4, 5, 9, 4, 11, 2, 7, 12, 20, 11, 26, 22, 7, 2, 10, 9, 20, 13, 20, 2, 9, 11, 9};
    string balloonSize = "LLMLLLLMLLLLLLLLLLLLMLLLLLLLLLLMMLMLLLMLLLLLLLLMLL";
    vector<int> maxAccepted = {44, 59, 29, 53, 16, 23, 13, 14, 29, 42, 13, 15, 66, 4, 47};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 210;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> balloonCount = {29, 13, 27, 23, 23, 1, 22, 8, 18, 8, 6, 17, 1, 25, 13, 5, 19, 26, 18, 24, 10, 33, 27, 21, 19, 6, 6, 1, 22, 24, 5, 12, 8, 11, 25, 8, 25, 3, 28, 2, 20, 22, 2, 6, 3, 15, 13, 12, 25, 27};
    string balloonSize = "LLMMLMMMMMMLLMMMLLLMMMLLLLLMMMMLLLMLMLMLLLLMMMLMMM";
    vector<int> maxAccepted = {100, 67, 5, 100, 54, 49, 24, 85, 43, 100, 56, 28, 56};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 443;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> balloonCount = {48, 29, 18, 37, 13, 60, 7, 3, 67, 6, 42, 28, 20, 1, 57, 57, 55};
    string balloonSize = "LLLLMLLLMMLMLLLLL";
    vector<int> maxAccepted = {21, 69, 61, 27, 41, 90, 41, 6, 30, 51, 33, 21, 57};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> balloonCount = {6, 9, 13, 4, 8, 3, 1, 6, 1, 8, 7, 5, 9, 6, 6, 3, 14, 5};
    string balloonSize = "LLMLLLLLLLLMLMLLLL";
    vector<int> maxAccepted = {19, 31, 62, 2};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> balloonCount = {36, 56, 49, 32, 3, 70, 6, 59, 19, 33, 40, 33, 1, 11, 42, 43, 51, 32, 19, 16, 16, 44, 15, 64, 6, 40, 22, 40, 26, 21, 37, 38, 14, 1, 13, 6, 44, 41, 13, 5, 48, 41, 16, 18, 18, 12, 19, 14, 50, 17};
    string balloonSize = "LLLLLLLLLLLLLLLLLLLLLLMLLLLLLLLLLLLLLLLLLLLLLLLLLL";
    vector<int> maxAccepted = {84, 100, 100, 72, 100, 66, 100, 100, 88, 100, 100, 100, 100, 100, 100};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> balloonCount = {41, 20, 21, 33, 29, 33, 30, 12, 65, 8, 6, 45, 50, 11, 12, 31, 39, 6, 69, 24, 9, 53, 46, 19, 52, 11, 44, 9, 39, 3, 43, 36, 34, 45, 24, 46, 22, 12, 31, 14, 39, 47, 14, 14, 58, 22, 31};
    string balloonSize = "MMLLMLLMLMLLMMMLLLMLLMMLLMMMMMLLLLLLLMLLLMMLLLL";
    vector<int> maxAccepted = {100, 100, 100, 100, 100, 100, 100, 100, 52, 50, 100, 100, 100, 100, 100};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> balloonCount = {16, 1, 2, 4, 12, 17, 11, 11, 5, 13, 11, 8, 6, 9, 2, 3, 6, 3, 2, 9, 10, 9, 21, 10, 14, 19, 10, 6, 3, 12, 9, 9, 11, 9, 4, 3, 11, 13, 9, 14, 12, 6, 8, 2, 15};
    string balloonSize = "LLLMLMLLMLLMLMMMLLMLMLLMMMLLLMLMLLMLMMLMMMLMM";
    vector<int> maxAccepted = {59, 72, 85, 62, 59, 38, 12, 13};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> balloonCount = {35, 26, 29, 50, 26, 1, 17, 2, 26, 15, 46, 13, 43, 41, 33, 12, 14, 32, 47, 27, 13, 14, 15, 30, 36, 42, 18, 27, 47, 28, 39, 10, 42, 29, 4, 3, 5, 7, 30};
    string balloonSize = "MMMMLMMMLMMLMMMLMMMMMMLMMMMMMMMMMMLMMLM";
    vector<int> maxAccepted = {39, 100, 21, 100, 100, 42, 39, 73, 100, 84, 100, 100, 76};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> balloonCount = {28, 14, 19, 22, 17, 20, 15, 16, 9, 7, 6, 27};
    string balloonSize = "MMLMMMMMMMMM";
    vector<int> maxAccepted = {83};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 55;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> balloonCount = {71, 1, 6, 78, 15, 50, 74, 77};
    string balloonSize = "MLMMMMMM";
    vector<int> maxAccepted = {1, 2, 3, 1, 2, 2, 4, 3};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
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
    vector<int> balloonCount = {19, 22, 13, 1, 14, 9, 17, 18, 18};
    string balloonSize = "MLMMMMLLL";
    vector<int> maxAccepted = {69, 21};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> balloonCount = {42, 45, 32, 11, 27, 15, 32, 43, 10, 28, 21, 25, 63, 42, 47, 36, 10, 44, 12, 13, 38, 39, 51, 6, 61, 11, 50, 32, 15, 42, 19, 5, 9, 48, 11, 33, 54};
    string balloonSize = "LLLLLLLLLMLLMLLLLLLLLLLLMLLLLLLLLLLLL";
    vector<int> maxAccepted = {37, 91, 53, 76};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> balloonCount = {2, 3, 2, 8, 9, 6, 3, 10, 10, 1, 2, 7, 8, 4, 5, 5, 7};
    string balloonSize = "MMLMMLMMLLMLMLMML";
    vector<int> maxAccepted = {18, 7, 22, 12, 12, 12, 4};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> balloonCount = {33, 3, 44, 42, 29, 43, 17, 30, 42, 25};
    string balloonSize = "LLMLMLLLLL";
    vector<int> maxAccepted = {22, 53, 42, 55, 57};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> balloonCount = {3, 3, 3, 1, 2, 3};
    string balloonSize = "LMLMMM";
    vector<int> maxAccepted = {6, 5};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> balloonCount = {52, 22, 24, 8, 51, 31, 3};
    string balloonSize = "MMMMMMM";
    vector<int> maxAccepted = {9, 11, 8, 2, 2, 3, 3, 5, 11};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
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
    vector<int> balloonCount = {32, 29, 43, 28, 41, 41, 10, 17, 23, 1, 38, 29, 16, 35, 1, 43, 42, 6, 26, 17, 43, 19, 31, 17, 14, 18, 6, 37, 14, 35, 35, 12};
    string balloonSize = "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL";
    vector<int> maxAccepted = {59, 84, 9, 47};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 61;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> balloonCount = {32, 6, 14, 27, 31, 30, 37, 33, 33, 24, 21, 22, 9, 34, 35, 9, 32, 23, 1, 25, 21, 14, 35, 14, 3, 29, 8};
    string balloonSize = "MMMMMMMMMMMMMMMMMMMMMMMMMMM";
    vector<int> maxAccepted = {39, 9, 2, 2, 15, 38, 17};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> balloonCount = {42, 1, 47, 33};
    string balloonSize = "MMMM";
    vector<int> maxAccepted = {12};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
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
    vector<int> balloonCount = {13, 15, 7, 5, 5, 3, 8, 5, 13, 12, 11, 13, 4, 12, 14, 10, 2, 8, 8, 8, 15, 8, 3, 4, 2, 12, 14};
    string balloonSize = "MMMMMMMMMMMMMMMMMMMMMMMMMMM";
    vector<int> maxAccepted = {3, 4, 1, 5, 5, 3};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> balloonCount = {30, 42, 35, 3, 18, 35, 47, 44, 54};
    string balloonSize = "MMMLLMMMM";
    vector<int> maxAccepted = {13, 12, 7, 1, 14, 8, 35, 30};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> balloonCount = {30, 18, 5, 19, 21, 24, 17};
    string balloonSize = "LLLLLLM";
    vector<int> maxAccepted = {15, 2, 18, 35, 9, 10, 15, 11, 11, 8};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> balloonCount = {21, 45};
    string balloonSize = "LL";
    vector<int> maxAccepted = {42};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
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
    vector<int> balloonCount = {61};
    string balloonSize = "M";
    vector<int> maxAccepted = {69, 13, 53, 72, 59, 38, 32, 3, 17, 61, 72, 25, 62};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> balloonCount = {19};
    string balloonSize = "M";
    vector<int> maxAccepted = {20, 11, 6, 8, 26};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> balloonCount = {48};
    string balloonSize = "M";
    vector<int> maxAccepted = {8, 20};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> balloonCount = {72};
    string balloonSize = "L";
    vector<int> maxAccepted = {2, 10, 29, 10};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> balloonCount = {54};
    string balloonSize = "L";
    vector<int> maxAccepted = {4};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
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
    vector<int> balloonCount = {19, 11, 15, 14, 13, 23};
    string balloonSize = "LLMMLM";
    vector<int> maxAccepted = {83};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> balloonCount = {1};
    string balloonSize = "L";
    vector<int> maxAccepted = {8};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> balloonCount = {2, 1, 1, 1, 2, 1, 1, 2, 1, 1, 2, 2, 1, 2, 2, 1, 1, 2};
    string balloonSize = "MLLMMLMLLMLLMLMMLL";
    vector<int> maxAccepted = {59};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> balloonCount = {20, 16, 2, 13, 4, 15, 8, 8, 3, 14, 14, 12, 6, 19, 15, 12, 13, 5, 4, 8, 20, 2, 7, 21, 3, 21, 11, 15, 24, 3, 23, 13, 20};
    string balloonSize = "LLLLLLLMLLLLLLMLLMLMLLLLLMLLMLLLL";
    vector<int> maxAccepted = {1};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
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
    vector<int> balloonCount = {14, 5, 5, 27, 16, 25};
    string balloonSize = "MLLMLL";
    vector<int> maxAccepted = {3};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
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
    vector<int> balloonCount = {74, 22, 50, 57, 59, 35, 26, 45, 70, 74, 22, 40, 39, 33, 56, 45, 4, 31, 50, 17, 10, 8, 34, 50, 67, 41, 8, 33, 74, 1, 50, 54, 68, 17, 46, 24, 1, 30, 24, 28, 7, 25, 52, 66, 65, 47, 18};
    string balloonSize = "LLLLLLLLLLLLLMLLLLLLLLLLLMLMLLLMLLLLLMLLLMLLLLL";
    vector<int> maxAccepted = {87};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> balloonCount = {1};
    string balloonSize = "M";
    vector<int> maxAccepted = {2};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> balloonCount = {1};
    string balloonSize = "L";
    vector<int> maxAccepted = {1};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> balloonCount = {2};
    string balloonSize = "M";
    vector<int> maxAccepted = {1};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> balloonCount = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    string balloonSize = "MLMLMLMLMLMLMLMLMLMLMLMLMLMLMLMLMLMLMLMLMLMLMLMLML";
    vector<int> maxAccepted = {100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100, 100};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> balloonCount = {5, 6, 1, 5, 6, 1, 5, 6, 1};
    string balloonSize = "MLMMLMMLM";
    vector<int> maxAccepted = {7, 7, 4, 4, 7, 7};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> balloonCount = {1, 18, 4, 7, 19, 7, 7, 1, 4, 8, 10, 5, 14, 13, 8, 22, 6, 3, 13, 5, 3, 4, 2, 1, 3, 15, 19, 4, 5, 9, 4, 11, 2, 7, 12, 20, 11, 26, 22, 7, 2, 10, 9, 20, 13, 20, 2, 9, 11, 9};
    string balloonSize = "LLMLLLLMLLLLLLLLLLLLMLLLLLLLLLLMMLMLLLMLLLLLLLLMLL";
    vector<int> maxAccepted = {44, 59, 29, 53, 16, 23, 13, 14, 29, 42, 13, 15, 66, 4, 47};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 210;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> balloonCount = {8, 5, 1, 45, 1, 1, 3, 1, 3, 3, 5, 4, 5, 6, 9};
    string balloonSize = "MMMLLLMMLLMLMLM";
    vector<int> maxAccepted = {3, 5, 3, 3, 5, 6, 4, 6, 4, 2, 3, 7, 1, 5, 2};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> balloonCount = {100, 1, 6, 80, 2, 6, 7, 2, 1, 6, 4};
    string balloonSize = "LLLLLLMMMMM";
    vector<int> maxAccepted = {20, 10, 1, 100, 10, 1, 1, 1, 1, 1, 1, 3, 1, 1, 5};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> balloonCount = {100, 100};
    string balloonSize = "ML";
    vector<int> maxAccepted = {50, 51, 51};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> balloonCount = {1, 1};
    string balloonSize = "LM";
    vector<int> maxAccepted = {2};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> balloonCount = {3, 100};
    string balloonSize = "MM";
    vector<int> maxAccepted = {5, 7};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> balloonCount = {1, 2, 3, 3, 3, 4, 5};
    string balloonSize = "LMMLMMM";
    vector<int> maxAccepted = {3, 4, 5, 6};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> balloonCount = {100};
    string balloonSize = "L";
    vector<int> maxAccepted = {1, 2, 3, 4, 5};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> balloonCount = {3, 6, 10};
    string balloonSize = "MMM";
    vector<int> maxAccepted = {2, 2, 15};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> balloonCount = {17, 10};
    string balloonSize = "ML";
    vector<int> maxAccepted = {10, 8, 8};
    ICPCBalloons* pObj = new ICPCBalloons();
    clock_t start = clock();
    int result = pObj->minRepaintings(balloonCount, balloonSize, maxAccepted);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22838856&rd=15183&pm=12314
********************************************************************************
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <algorithm>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <ctime>
#include <string>
#include <list>
#include <queue>
#include <cassert>
#include <stack>
#include <stdio.h>
#include <string.h>
 
using namespace std;
 
#define pb               push_back
#define mp              make_pair
#define fill(a,v)           memset(a, v, sizeof a)
#define INF              (int)1e9
#define all(x)            x.begin(),x.end()
typedef vector<int> VI;
typedef long long LL;
typedef pair<int, int > PII;
 
 
int solve(VI a,VI b)
{
  int na = a.size();
  int nb = b.size();
  
  int ans = INF;
  int suma = 0;
  int sumb = 0;
  for(int i=0;i<na;i++)
    suma += a[i];
  for(int i=0;i<nb;i++)
    sumb += b[i];
  if(suma < sumb) return INF;
  
  sort(all(a));
  reverse(all(a));
  
  sort(all(b));
  reverse(all(b));
  
  int match = 0;
  for(int i=0;i<min(na,nb);i++)
    match += min(a[i], b[i]);
    
  return sumb - match;
}
  
 
 
class ICPCBalloons 
{
public:
 
 
int minRepaintings(vector <int> bcnt, string bs, vector <int> accnt) 
{
  int n=accnt.size();
  VI meds;
  VI larges;
  for(int i=0;i<bcnt.size();i++)
  {
    if(bs[i]=='M')
      meds.pb(bcnt[i]);
    else
      larges.pb(bcnt[i]);
  }
  
  int ans = INF;
  
  for(int mask=0;mask<(1<<n);mask++)
  {
    VI a,b;
    for(int i=0;i<n;i++)
      if(mask&(1<<i))
        a.pb(accnt[i]);
      else
        b.pb(accnt[i]);
    
    int cur = solve(meds,a) + solve(larges,b);
    ans = min(ans, cur);
  }
  if(ans >= INF)
    ans=-1;
  return ans;
}
 
 
 
};
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
//Powered by KawigiEdit 2.1.8 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/