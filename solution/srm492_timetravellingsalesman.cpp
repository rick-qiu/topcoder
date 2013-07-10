/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11049
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

class TimeTravellingSalesman {
public:
    long determineCost(int N, vector<string> roads);
};

long TimeTravellingSalesman::determineCost(int N, vector<string> roads) {
    long ret;
    return ret;
}


int test0() {
    int N = 3;
    vector<string> roads = {"0,1,1 0,2,1 1,2,2"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 6;
    vector<string> roads = {"0,1,2 1,4,2 4,3,3 2,4,4 0,5,3"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 14;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 3;
    vector<string> roads = {"0,2,2"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 4;
    vector<string> roads = {"1,0", ",10", "0 2,1", ",584 3,2", ",754"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1438;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 2;
    vector<string> roads = {"0,1,10000000"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 10000000;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 327;
    vector<string> roads = {"0,315,5 0,298,8 0,194,8 0,232,9 0,105,4 0,44,7 0,4", "2,8 0,261,1 0,119,6 0,169,8 0,252,9 0,18,3 0,300,2", " 0,281,6 0,249,1 0,280,9 0,46,2 0,215,2 0,195,5 0,", "220,2 0,239,1 0,30,4 0,123,2 0,185,3 0,139,5 0,151", ",6 0,10,9 0,303,8 0,277,2 0,118,7 0,48,3 0,309,5 0", ",170,1 0,168,6 0,262,3 0,154,7 0,296,3 0,130,8 0,1", "07,1 0,198,1 0,274,5 0,167,6 0,43,2 0,286,2 0,310,", "4 0,89,9 0,120,6 0,147,8 0,201,2 0,305,4 0,243,7 0", ",157,9 0,66,6 0,22,2 0,307,7 0,177,4 0,1,5 0,86,6 ", "0,28,2 0,26,9 0,58,4 0,211,6 0,62,8 0,257,4 0,230,", "6 0,297,1 0,110,2 0,313,7 0,273,6 0,88,9 0,141,3 0", ",116,9 0,325,9 0,59,5 0,175,7 0,242,6 0,171,9 0,31", "2,8 0,176,2 0,137,2 0,16,8 0,183,4 0,35,4 0,24,4 0", ",253,3 0,200,2 0,17,6 0,314,9 0,37,8 0,134,1 0,75,", "5 0,31,4 0,166,8 0,174,3 0,40,6 0,285,9 0,29,1 0,1", "82,7 0,190,1 0,122,2 0,160,5 0,221,2 0,117,9 0,203", ",1 0,223,6 0,104,9 0,96,9 0,45,9 0,34,9 0,12,7 0,6", "5,5 0,241,8 0,98,4 0,224,6 0,143,3 0,146,4 0,156,4", " 0,132,3 0,73,3 0,39,4 0,112,7 0,127,1 0,64,9 0,53", ",5 0,226,1 0,186,7 0,84,6 0,276,8 0,149,8 0,316,5 ", "0,293,8 0,162,6 0,77,7 0,148,1 0,13,6 0,317,1 0,24", "7,4 0,219,9 0,87,7 0,125,9 0,47,5 0,326,7 0,101,7 ", "0,124,1 0,248,8 0,100,8 0,304,9 0,102,6 0,188,9 0,", "57,1 0,81,2 0,236,8 0,95,3 0,283,8 0,76,2 0,4,1 0,", "99,1 0,284,7 0,21,7 0,135,3 0,32,4 0,61,7 0,179,2 ", "0,272,7 0,282,6 0,264,5 0,218,2 0,184,9 0,299,3 0,", "158,1 0,82,9 0,206,7 0,172,8 0,97,2 0,294,7 0,255,", "5 0,41,3 0,246,8 0,279,6 0,271,8 0,92,6 0,6,2 0,54", ",2 0,19,3 0,113,9 0,196,8 0,50,5 0,245,4 0,260,2 0", ",275,4 0,202,2 0,56,3 0,150,5 0,129,6 0,164,3 0,3,", "6 0,69,7 0,23,3 0,114,4 0,173,1 0,319,3 0,79,2 0,7", "4,8 0,51,8 0,103,6 0,191,3 0,144,9 0,142,3 0,109,7", " 0,233,7 0,321,5 0,244,6 0,256,1 0,234,3 0,8,9 0,", "131,7 0,254,4 0,2,8 0,121,6 0,52,9 0,217,7 0,178,4", " 0,128,8 0,322,3 0,14,1 0,108,9 0,111,8 0,266,6 0,", "5,7 0,7,3 0,306,9 0,235,7 0,49,2 0,140,6 0,209,8 0", ",15,1 0,213,8 0,263,9 0,165,5 0,80,9 0,9,8 0,126,3", " 0,192,4 0,308,3 0,133,4 0,93,7 0,291,1 0,180,2 0,", "55,1 0,85,1 0,301,6 0,159,2 0,265,5 0,72,1 0,94,8 ", "0,320,4 0,25,8 0,38,4 0,311,2 0,20,8 0,27,4 0,63,3", " 0,71,7 0,295,8 0,250,2 0,251,1 0,237,7 0,68,4 0,2", "04,9 0,225,7 0,229,1 0,214,1 0,152,5 0,290,5 0,60,", "9 0,115,1 0,287,7 0,136,6 0,216,1 0,193,4 0,163,6 ", "0,288,1 0,208,5 0,197,6 0,83,6 0,78,9 0,205,4 0,25", "9,1 0,33,2 0,268,3 0,106,1 0,199,2 0,189,7 0,324,3", " 0,67,3 0,270,1 0,212,4 0,207,2 0,181,6 0,323,9 0,", "238,8 0,90,9 0,155,3 0,36,6 0,210,3 0,318,9 0,289,", "6 0,70,6 0,138,1 0,231,5 0,91,8 0,228,3 0,11,7 0,2", "40,6 0,161,9 0,222,2 0,145,4 0,227,4 0,269,2 0,258", ",7 0,267,1 0,278,5 0,292,6 0,153,4 0,187,1 0,302,1"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1640;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 163;
    vector<string> roads = {"0,133,5 0,2,5 0,44,1 0,32,6 0,75,4 0,1", "01,7 0,160,5 0,50,4 0,10,", "5 0,82,4 0,65,7 0,59,4 0,118,3 0,99,2 0,140,", "3 0,94,8 0,90,9 0,84,7 0,64,", "1 0,115,5 0,46,2 0,132,5 0,22,1 0,85,9 0,3,8 0", ",20,5 0,131,6 0,102,5 0,76,2 0,100,2 0,37,3", " 0,80,6 0,24,2 0,61,1 0,86,2 0,35,5 0,124,", "9 0,155,3 0,117,1 0,42,2 0,149,5 0,125,9 ", "0,6,8 0,151,2 0,71,6 0,74,7 0,", "43,2 0,41,5 0,104,1 0,96,4 0,114,2 0,79,2 ", "0,73,4 0,87,8 0,51,5 0,147,7 0", ",112,9 0,145,9 0,135,3 0,150,2 0", ",48,1 0,12,5 0,161,5 0,110,", "9 0,39,2 0,49,1 0,138,1 0,137,9 0,57,6 0,", "69,4 0,106,9 0,91,8 0,38,2 0,30,9 0,78", ",5 0,111,1 0,56,1 0,103,6 0,11,1 0,31", ",8 0,34,7 0,16,3 0,128,5 0,129,8 0,29,", "7 0,25,9 0,26,2 0,121,9 0,148,1 0,154", ",4 0,72,6 0,52,7 0,33,2 0,157,9 0,83,4 ", "0,105,1 0,54,7 0,139,8 0,8,1 0,119,5 0", ",130,2 0,98,5 0,63,9 0,107,1 0,116,1 0,13,", "6 0,92,4 0,120,4 0,156,9 0,70,5 0,108,6 0,109", ",4 0,5,4 0,142,8 0,15,1 0,", "158,4 0,97,8 0,53,2 0,67,4 0,18,9 0,7,9 0,14", ",8 0,19,3 0,95,2 0,60,4 0,9,8 0,40,9 0,153,", "3 0,88,5 0,55,8 0,144,9 0,68,7 0,28,", "4 0,17,5 0,21,9 0,122,4 0,62,1 0,4,9 0,1", "41,8 0,1,9 0,47,1 0,127,3 0,36,4 0", ",152,4 0,58,4 0,113,2 0,134,2 0,77,6 0,159,4 ", "0,66,3 0,143,1 0,126,6 0,45,8 0,9", "3,9 0,162,8 0,136,5 0,81,6 0,146,", "5 0,23,5 0,123,5 0,89,3 0,27,5"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 791;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 163;
    vector<string> roads = {"0,3,5 40,106,4 57,118,5 101,132,5 0,65,8 0,139,6 0", ",133,8 32,112,1 47,145,8 32,83,3 0,141,9 0,142,7 0", ",94,3 69,78,3 101,115,9 0,112,7 26,121,7 0,157,7 0", ",98,1 43,120,7 82,159,8 69,82,4 9,133,6 18,57,3 0,", "59,2 0,90,2 92,101,9 118,156,2 4,49,9 0,50,4 39,99", ",3 77,100,1 7,79,8 0,134,4 0,120,1 0,95,4 97,145,7", " 0,128,4 45,91,7 0,111,4 0,138,6 117,120,3 0,78,7 ", "0,69,5 0,110,4 124,143,2 83,97,2 9,33,2 0,96,9 137", ",156,3 34,128,5 100,101,8 0,162,6 30,139,1 0,13,7", " 41,159,4 0,154,9 19,56,7 101,107,3 66,95,3 0,62,4", " 0,121,1 0,104,7 0,130,2 0,117,1 101,161,9 33,102,", "7 0,12,9 0,122,5 0,28,1 133,142,1 116,146,1 0,4,6 ", "70,138,9 0,51,7 10,103,4 0,2,2 0,108,9 61,138,1 0,", "93,3 0,21,5 86,105,6 82,111,9 0,156,1 84,136,1 0,7", ",6 97,134,6 81,157,9 0,99,2 0,127,3 0,144,8 6,25,5", " 90,100,1 0,58,2 130,156,5 0,19,2 61,131,4 0,135,4", " 0,54,2 0,82,6 0,47,4 35,142,2 0,88,4 86,140,6 0,8", "9,1 0,20,5 94,122,2 1,21,6 0,106,3 0,132,7 0,34,7 ", "26,36,9 0,152,5 7,123,7 0,45,2 0,52,4 34,70,5 0,36", ",9 0,161,7 0,63,5 43,66,4 47,115,6 0,49,8 27,72,1 ", "20,72,5 64,114,5 0,87,3 0,38,8 31,97,2 0,66,7 28,1", "25,2 8,140,4 1,38,4 69,152,6 0,85,7 0,8,4 29,10", "2,2 0,76,9 124,131,4 109,154,5 0,75,3 64,140,1 85,", "143,6 0,84,2 70,139,8 131,157,9 109,160,9 0,30,5 ", "0,74,6 15,91,3 0,118,2 17,93,3 44,114,4 0,129,7 0,", "73,8 0,17,3 74,122,8 63,74,3 143,154,6 0,125,7 0,1", "4,6 61,120,8 0,155,6 0,79,2 13,104,2 0,115,8 5,71,", "8 9,49,2 0,109,9 0,40,3 72,84,6 0,39,4 39,47,5 66,", "148,7 0,159,3 45,161,4 0,42,8 0,44,4 31,159,3 79,9", "1,6 23,29,1 0,100,3 0,33,5 79,157,9 45,131,6 0,35,", "5 0,153,6 4,140,5 0,80,7 0,101,2 0,107,5 0,25,7 0,", "22,1 0,149,4 0,124,4 0,43,2 0,119,7 0,15,4 0,148,6", " 0,151,6 0,67,8 0,77,8 67,97,9 0,31,5 68,89,9 69,7", "0,8 129,147,7 0,18,6 17,105,9 72,138,6 90,145,4 0,", "6,2 85,115,8 0,56,2 30,138,6 0,102,7 0,126,7 0,37,", "7 0,123,6 85,122,4 48,119,7 0,57,6 0,116,6 50,123,", "6 0,70,2 147,148,9 62,70,9 0,61,5 0,147,5 0,137,6 ", "0,92,5 0,55,6 62,136,3 0,32,9 0,64,9 94,159,5 25,1", "61,6 55,95,6 40,69,3 0,24,3 79,146,4 0,46,5 81,103", ",6 1,106,4 29,33,1 0,48,4 0,29,3 0,146,5 25,100,2 ", "108,154,7 0,16,3 106,139,2 138,151,6 40,109,7 8,9,", "8 0,145,6 88,124,8 0,41,7 0,26,5 19,91,9 0,72,2 26", ",141,3 38,97,9 0,131,4 74,110,9 73,76,2 31,70,6 10", "6,138,5 0,83,8 110,146,5 0,10,2 21,51,8 0,143,7 0,", "97,7 0,11,5 0,23,7 2,95,3 6,106,3 58,122,1 0,91,9 ", "0,86,2 139,150,8 0,81,1 0,68,3 39,67,8 0,160,4 0,1", ",7 0,103,2 0,140,3 0,5,7 0,136,9 0,114,9 91,98,2 1", "16,118,7 0,105,1 0,27,8 15,112,4 53,72,8 0,9,8 83,", "108,4 8,90,2 59,128,5 70,122,7 50,65,9 98,125,5 0,", "150,2 0,113,9 58,66,7 0,53,4 0,71,5 0,158,6 0,60,6"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 588;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 81;
    vector<string> roads = {"0,15,4 0,44,6", " 0,32,4 0,19", ",3 0,24,3 0,7", "9,5 0,3,3 0", ",17,5 0,23,9 0,5", "4,5 0,", "73,8 0,27,5 0,61", ",6 0,40,5 0", ",25,4 0,5", "1,6 0,2,4 0,7", ",6 0,53,2 ", "0,35,6 0,", "6,9 0,39,8 0,63", ",7 0,21,2 0,4", "9,7 0,20,6", " 0,60,3 0,59,4 ", "0,72,3 0,77,", "7 0,43,4 0,14", ",6 0,34,1 0,31,8 0,", "36,9 0,16,5 0,", "41,3 0,22,2 0,6", "4,4 0,66,1 0", ",52,8 0,74,3 0,", "68,6 0,3", "7,1 0,47,9", " 0,9,7 0,", "57,2 0,4", "5,8 0,4,3 0", ",5,2 0,50,2 ", "0,1,1 0,62", ",1 0,67,1 0,38,9 0", ",30,6 0", ",65,8 0,29,4 0,6", "9,1 0,56,5 0,80,", "5 0,18,5 0,", "8,9 0,70,6 0,", "33,7 0,76,5 0,", "75,7 0,78,6 0,58", ",3 0,46,5 0", ",55,1 0,12,", "1 0,26,6 0,48,1", " 0,71,2 0", ",28,9 0,13,4 ", "0,11,7 0,10,6", " 0,42,3"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 383;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 81;
    vector<string> roads = {"0,2,3 0,64,3 9,47,1 53,71,6 23,78,9 17,52,2 0,21,6", " 1,64,2 0,43,8 9,30,7 0,56,7 4,8,6 66,75,6 54,63,2", " 11,51,2 3,48,7 20,45,5 28,60,2 3,6,7 36,80,4 49,6", "5,9 0,33,3 17,26,5 35,41,4 0,7,6 40,55,8 13,26,6 0", ",47,3 0,75,3 41,50,5 30,38,9 13,29,2 0,27,9 22,43,", "2 8,26,6 0,42,8 39,42,3 46,55,6 0,46,9 0,16,7 0,40", ",5 15,75,2 42,50,1 16,23,6 0,80,6 12,49,7 49,53,2 ", "27,39,4 9,39,9 2,10,2 18,46,1 0,59,3 34,61,2 11,45", ",1 38,41,9 8,62,3 0,17,6 6,80,5 25,57,1 3,49,2 4,5", "5,9 0,57,4 55,77,3 23,43,6 9,46,9 21,43,6 7,70,6 2", "1,30,8 45,48,3 0,73,8 52,70,4 47,49,6 24,34,6 11", ",62,2 0,63,4 68,78,6 23,55,9 68,80,2 10,68,1 53,64", ",6 52,55,1 0,45,3 17,53,1 15,17,6 29,66,8 15,57,4 ", "0,67,4 11,22,9 14,44,2 37,50,9 0,32,4 0,74,7 75,78", ",2 15,29,6 45,76,8 7,49,3 26,66,1 0,78,5 55,63,7 1", "9,74,2 66,74,3 0,53,2 32,72,2 3,12,9 0,62,2 8,34,2", " 11,76,2 32,65,4 12,20,4 25,45,2 0,65,3 17,33,8 13", ",34,4 16,40,6 73,76,4 0,58,2 0,51,8 32,67,4 31,51,", "2 19,61,3 29,70,6 35,44,3 13,45,4 0,69,5 3,66,1 19", ",32,3 48,51,7 17,66,3 71,76,9 70,80,4 0,23,4 18,45", ",4 31,78,6 22,34,4 50,56,9 17,24,6 34,35,8 0,1,5 3", "7,67,7 53,69,3 34,49,4 52,67,2 55,59,4 0,60,3 0,25", ",5 14,66,6 29,59,5 15,79,8 0,79,6 60,65,5 51,59,8 ", "50,63,4 1,44,6 0,41,5 5,23,6 0,4,7 49,60,8 0,22,7 ", "20,34,7 50,69,4 50,51,9 33,47,9 26,40,1 25,26,2 19", ",75,1 30,43,6 37,75,5 14,72,4 1,45,5 7,34,5 0,31,1", " 0,55,2 0,50,7 63,69,8 1,63,4 10,14,8 9,17,3 7,69,", "9 23,57,9 4,40,4 30,40,6 0,15,2 6,12,1 39,52,2 28,", "67,3 50,59,9 0,19,5 0,61,3 27,62,4 14,42,2 5,76,8 ", "0,14,5 11,75,4 20,43,3 10,37,3 12,41,2 9,27,7 1,16", ",5 13,55,3 0,34,2 28,43,2 35,57,9 0,77,4 33,49,4 ", "29,61,6 17,44,5 0,54,9 15,22,3 34,70,3 0,49,5 22,2", "8,8 16,80,6 55,79,8 53,60,7 17,47,6 22,59,4 51,55,", "9 0,72,7 13,30,5 0,5,2 9,55,9 0,13,6 15,68,3 67,77", ",9 64,65,4 2,80,1 10,53,6 1,20,3 0,26,7 21,52,5 0,", "44,8 41,58,7 27,78,9 72,73,9 0,71,9 32,40,2 37,65,", "7 24,79,8 19,34,3 12,42,4 0,30,2 21,62,1 0,37,4 0,", "24,5 61,62,3 4,37,5 19,23,2 0,39,8 1,24,4 51,76,1 ", "0,35,8 33,62,2 41,73,5 0,38,5 75,80,3 64,69,8 0,48", ",7 22,72,6 0,12,3 12,69,8 0,3,3 0,11,1 0,20,2 18,7", "0,7 10,34,7 46,74,8 10,74,6 0,36,2 6,71,2 11,23,1 ", "22,69,9 39,62,1 42,51,5 0,66,1 40,68,7 56,75,6 44,", "70,5 12,39,3 0,9,4 0,10,1 54,72,2 0,76,2 24,40,4 5", "9,61,4 20,79,4 17,49,6 20,38,3 51,78,4 52,60,2 36,", "47,2 0,70,3 57,70,9 20,25,3 42,56,6 0,29,9 25,51,3", " 44,76,9 48,68,2 0,28,6 0,68,6 16,49,1 0,52,9 5,27", ",6 43,45,3 19,56,3 4,75,4 28,32,6 40,49,2 4,27,2 0", ",18,8 45,53,1 2,46,4 49,57,5 34,38,9 62,69,8 50,54", ",1 5,69,7 22,49,9 38,67,5 0,8,9 58,76,4 49,63,4 29", ",50,6 31,48,4 2,45,5 51,56,3 12,28,3 0,6,3 17,30,6"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 158;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 81;
    vector<string> roads = {"0,60,3 0,31,7 21,62,3 3,", "12,9 0,27,1 4,59,5 ", "0,73,7 0,36,8 16,75,7 0,41,8 ", "34,39,7 42,49,8 0,42,4 ", "0,69,2 21,26,7 26", ",67,7 35,37,2 0,3,8 45", ",80,7 0,43,7 11", ",24,2 0,22,5 30,49,1 ", "0,4,3 5,57,9 0,49,9", " 0,45,4 0,47,5 5", ",25,3 8,47,4 25", ",52,4 0,28,8 43,50,7 0,", "74,6 0,23,7 6,35,1 0", ",32,6 0,76,1 0,1", "7,8 0,34,5 0,6,6 0,72,7 57,", "75,3 50,51,8 0", ",20,3 44,72,7 0,25,9 35,4", "7,6 0,33,9 48,60,6 0,40,7 0,2", ",1 0,21,1 0,8,9 0,", "56,9 0,68,2 54,67,7 0", ",44,7 76,78,7 0,70,6 4,41", ",1 0,79,9 43,78,7", " 11,59,7 0,48,2 0,66,4", " 66,74,3 0,65,6 0,50,8", " 0,1,2 0,24,3 0,78,6 34", ",42,7 35,48,8 0,7,3 50,7", "1,8 16,79,2 0,54,8 ", "0,9,2 0,12,3 0", ",26,3 0,18,9 0,37,8 4", "0,77,2 0,58,8 0,39,7 20,55,8", " 34,73,7 48,77,7 22,27,3 1,80,", "4 7,47,3 49,75,9 0,62,2 0,", "13,8 0,30,9 55,58,5 0,5", "9,7 16,29,4 52,79", ",6 0,77,6 40,73,8 17,79,", "9 0,75,4 37,70,5 0,1", "4,3 0,35,8 0,55,7 1,77,9 0,", "64,4 0,80,3 41,51,5 ", "0,29,4 0,46,9 0,", "15,5 0,51,4 0,52,7 0,", "53,3 31,74,2 0,38,8 0,16,1 ", "62,63,1 0,19,6 21,37,1 16", ",64,9 43,79,7 46,76,5 0", ",67,2 0,57,1 0,11,6 36,62,2 ", "0,71,9 20,27,8 0,61,5 0", ",63,8 0,10,1 0,5,2"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 328;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 40;
    vector<string> roads = {"0,39,5 0,17,5 ", "0,38,6 0,3", "4,9 0,14,4 0", ",18,7 0,15,7 0", ",23,8 0,2", "8,6 0,6,6 0", ",3,2 0,12", ",4 0,13,3 0", ",22,5 0,10,7", " 0,25,7 0,16,2 0,", "2,4 0,24,8 0", ",4,9 0,8,7 0", ",31,9 0,27,9 0,3", "0,6 0,33,", "9 0,32,4 0,35,2 0,", "11,1 0,36,8", " 0,21,8 0,9,", "8 0,20,8 0,", "7,5 0,5,2 0,26,", "7 0,37,5 0,19,6", " 0,1,8 0,29,6"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 232;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 40;
    vector<string> roads = {"22,24,1 1,32,6 23,34,9 20,38,2 5,17,7 7,36,4 13,34", ",2 4,14,8 5,30,7 5,20,9 0,34,5 15,36,4 0,25,2 8", ",37,6 15,16,2 2,18,1 29,36,5 8,27,7 22,34,1 3,5,1 ", "15,24,6 2,31,1 30,38,8 11,16,5 12,20,4 23,32,8 14,", "18,1 0,2,6 1,10,3 13,37,6 10,31,1 3,38,9 7,19,2 6,", "12,9 5,25,1 8,24,5 11,35,7 8,15,3 0,5,4 18,19,4 7,", "12,2 5,31,9 5,22,2 15,27,3 4,38,8 1,2,3 1,14,3 2,2", "9,1 3,13,2 9,12,2 18,23,4 14,21,2 4,20,9 5,8,9 0,1", "4,3 0,18,7 8,18,6 18,33,3 11,39,6 2,25,3 10,29,1 1", "9,30,7 26,33,3 25,36,6 14,22,1 13,32,2 2,24,1 16,3", "6,2 5,29,3 17,31,7 6,22,3 0,17,8 1,19,4 1,28,6 20,", "27,3 10,30,7 14,23,7 12,23,4 16,28,4 21,37,3 1,18,", "3 14,19,8 23,35,5 14,31,4 10,20,4 7,25,5 19,39,9 3", ",35,3 9,13,6 6,16,4 24,26,5 14,24,1 0,9,8 0,29,5 4", ",5,5 13,26,3 4,22,1 14,27,7 16,19,7 0,23,1 18,29,7", " 2,14,6 7,11,2 28,34,2 33,39,8 5,34,1 0,4,5 32,36,", "1 8,19,1 19,32,1 20,25,8 6,17,3 12,19,7 25,26,1 0,", "12,6 2,3,5 10,17,2 10,24,2 18,39,6 9,31,5 8,28,5 0", ",21,1 19,24,9 15,33,6 18,20,2 22,38,4 21,29,1 13,2", "5,8 2,6,2 6,26,2 26,27,5 31,36,7 2,20,8 27,38,4 0,", "26,3 7,37,7 0,38,9 9,27,6 7,38,2 12,25,3 0,27,8 27", ",33,8 5,15,3 0,35,5 22,33,2 27,36,4 33,38,2 0,30,", "5 0,10,1 7,39,9 0,15,7 2,13,2 19,34,5 9,17,2 38,39", ",8 14,32,7 30,32,3 16,35,5 23,30,2 21,30,1 33,37,6", " 3,10,7 4,33,6 33,34,4 9,34,5 0,32,9 10,33,9 26,38", ",9 0,39,6 24,32,7 24,35,2 14,29,2 0,36,9 30,33,5 2", "7,31,9 8,39,2 25,29,1 0,33,8 0,6,2 0,16,9 0,31,5 4", ",12,4 9,11,8 2,32,9 7,31,1 12,33,3 31,37,9 18,30,6", " 8,29,9 1,23,7 6,24,8 17,35,9 21,24,2 9,30,9 3,23,", "9 11,17,5 10,38,6 29,31,4 7,21,1 10,14,2 12,30,1 3", "0,37,1 15,32,2 12,38,4 11,26,2 23,27,5 17,19,1 0", ",7,7 2,22,5 34,35,6 5,35,5 23,26,5 3,30,1 9,25,4 4", ",10,2 15,28,8 11,32,8 14,38,2 4,31,8 17,29,1 29,32", ",3 16,31,5 29,38,3 15,34,7 27,30,7 1,26,6 17,18,2 ", "11,18,3 25,32,2 14,35,9 0,3,3 25,31,5 22,27,3 26,3", "7,9 21,22,1 0,28,9 6,36,2 7,29,1 12,27,3 15,17,6 2", "7,37,1 1,36,1 13,17,8 20,33,2 26,28,9 7,8,6 2,26,4", " 4,17,6 5,28,4 19,38,9 1,35,5 22,29,2 10,36,8 9,18", ",1 6,30,6 8,38,9 18,35,6 0,11,4 5,12,3 12,36,8 32,", "33,2 18,22,8 4,24,7 6,13,5 9,33,2 24,28,1 6,18,7 4", ",23,3 2,37,4 1,13,6 17,27,7 20,32,3 9,36,8 0,20,9 ", "22,31,3 0,1,5 12,21,6 5,32,3 24,39,9 3,12,9 6,10,1", " 13,27,5 3,27,5 7,22,1 1,3,7 0,8,9 10,35,5 22,30,7", " 12,29,5 7,16,8 6,8,4 4,19,7 18,26,8 5,6,1 29,33,2", " 24,34,4 0,37,6 6,7,5 8,22,9 20,30,3 3,21,7 7,30,9", " 9,39,8 0,13,5 12,18,7 9,10,8 22,25,6 8,12,8 4,30,", "7 2,5,8 18,31,3 0,22,9 19,29,3 19,26,8 0,19,6 5,36", ",5 4,15,5 13,21,1 2,7,6 20,26,3 24,36,4 15,22,1 2,", "9,4 0,24,1 5,7,6 11,31,9 13,38,1 11,36,3 15,35,9 2", "1,25,7 12,22,4 27,32,8 18,25,8 4,6,9 24,38,2 4,8,7"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 45;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 40;
    vector<string> roads = {"1,2,5 12,22,3 27,30,4 0,11,9 0,", "30,6 23,24,9 0,31,1 15,26,", "9 0,29,9 0,15,", "8 9,10,5 14,39,7 12,25,1 33,34,", "1 14,25,3 27,34,5 0,19,2 11,", "16,7 0,28,2 9,11,8 14,27,6 2", "1,29,5 20,21,7 20,32,6 0,34,5 ", "16,34,1 10,13,5 32,34,4 2", "0,36,4 4,16,6 0,39,5", " 5,11,7 3,21,2 10,18,9 1,27,9 11,30,", "3 26,32,1 28,31,9 29,30,4 18", ",29,5 3,34,4 0,20,1 2", "7,38,7 5,18,6 11,31,5 10,14,", "1 6,24,3 0,33,8 23,36,6 4", ",39,7 18,30,5 7,32,9 0,17,", "6 0,24,3 0,7,2 6,9,7 6,8,", "7 5,33,8 0,35,3 15,23,7 14,23,2", " 0,36,9 19,29,3 18,26,5 0,26,4", " 8,23,5 0,12,1 0,23,3 14,21", ",9 17,23,2 36,38,7 18,36,6 0,25,3 0,", "22,9 4,37,9 1,37,9 0,21,6 8,1", "6,9 0,5,1 16,39,2 27,39,4", " 19,26,7 10,33,7 12,29,2 12,", "28,3 15,32,9 16,36,9 0,27,6 12,38,8 2,", "15,5 20,24,4 4,26,9 14,26,7 ", "0,16,7 15,21,6 3,1", "9,7 0,10,8 0,6,6 13,22,", "2 13,21,9 3,24,8 17,29,8 0,38", ",5 0,32,6 1,32,4 0,1,9 18,37,", "9 2,39,9 9,31,6 3,20,3 16,25,2 3,", "33,8 9,35,5 0,2,3 4,18,6 0", ",37,1 0,4,9 0,18,4 0,9,6 24,2", "6,4 10,15,4 2,5,7 28,30,1 0,3,6 ", "0,8,8 0,14,8 6,32,6 14", ",38,4 26,27,6 17,34,3 12,24,7 22,3", "2,8 0,13,2 14,33,4 11,25,2"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 97;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 20;
    vector<string> roads = {"0", ",5", ",2 0", ",14,7 ", "0,3,", "8 0,", "13,", "7 ", "0,1,1 ", "0,", "8,3", " 0,", "9,", "1 ", "0,1", "9,8 ", "0,", "2,", "6 0,1", "6,2 ", "0,6,", "2 0", ",15,7 0,1", "2,5 0", ",7,4", " 0,17", ",", "2 0,11", ",5 ", "0,18", ",2 0,", "10,4 0,4", ",3"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 79;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 20;
    vector<string> roads = {"3,5,7 7,19,6 2,5,9 9,15,1 2,8,", "1 12,15,9 0,14,7 6,18,8 0,1", "3,6 2,7,4 0,2,8 1,17,6", " 3,13,1 10,12,5 1,9,1 ", "11,14,6 0,17,4 13,14,9 2,1", "8,2 1,10,7 7,14,6 3,18,3", " 14,16,4 11,17,2 14,19,9 3,17,5 1", "2,14,5 6,10,4 6,14,9 4,7", ",2 4,16,7 3,9,1 14,1", "8,8 6,19,5 0,19,2 3,19,3 4", ",8,7 12,17,2 8,19,6 10,11,3 5,1", "1,6 3,15,5 1,18,9 5,13,1 8,14,", "5 2,12,1 13,18,1 17,19,6 9,1", "1,3 7,10,8 7,18,4 6,7,4 1,", "13,9 12,16,1 11,18,1 7,11,7", " 13,16,6 6,16,9 2,", "10,2 2,4,6 5,14,3 4,13,4 4,", "12,4 0,7,6 0,11,8 10,", "14,3 0,9,3 6,9,6 8,18,9 4,10,2", " 5,19,4 14,15,6 0,12,5 5,9,7 ", "10,18,7 8,9,3 13,17,6 1,11,9", " 11,15,3 3,11,5 0", ",10,9 4,5,7 9,17,9 5,15,7 14", ",17,5 2,17,3 0,15,7 15", ",19,9 7,16,7 7,8,7 6,1", "3,7 1,5,1 9,16,5 1,8,8 3", ",7,3 1,7,1 6,8,2 9,19,5 ", "6,15,7 5,6,5 16,17,8 7,13,3", " 8,16,6 5,12,3 9,18,4 0,1,1 1,4", ",1 15,17,5 4,6,5 10,15,5 1", "1,19,7 8,11,6 1,14,9 0,8,4 4,11,", "8 0,5,5 4,18,1 9,14,1 10,17,5 8,12,5 ", "5,7,1 2,9,1 16,19,9 11", ",13,8 4,15,6 1,16,4 5,17,4 5,", "16,9 7,12,8 12,18,3 1,3,6", " 3,12,3 17,18,5 6,17,9 3,8,2 ", "10,16,9 15,18,4 7,15,2 6,", "12,6 2,3,9 7,9,7 0,3,7 8,17,3 9,10", ",8 4,14,6 8,15,2 4,17,9 0,1", "8,6 3,16,8 18,19,9 12,13,", "4 10,13,6 2,16,2 1,19,2 3,14,3 4,", "9,5 10,19,8 12,19,9 9,12", ",5 1,2,5 2,13,1 2,6,8 1,15,7 ", "8,13,6 2,14,1 13,15,4 15,16,7 6,", "11,3 0,16,8 3,10,8 ", "8,10,3 2,15,9 7,17,3 11,", "12,2 5,18,3 16,18,7 0,4,7 11,1", "6,1 5,10,8 3,4,6 5,8,4", " 0,6,7 9,13,1 4,19,6 2,19,9 ", "3,6,8 2,11,5 1,6,5 1,12,2 13,19,4"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 23;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 20;
    vector<string> roads = {"11,14,1 3,17,8 0,4,2 2,4,2 3,", "9,2 4,9,6 3,13,6 10,11,4 3,16,4 7,1", "4,5 12,15,1 6,10,1 4,6,3 0,2,1 4,1", "1,4 11,16,7 1,12,3 0,14,9 6,14,4", " 3,19,7 7,18,4 9,16,8 2,16,9 1,14,5 8,18,", "3 7,17,7 1,4,7 3,10,4 12,14,1 0,13,6 15,17,1 ", "0,1,4 8,11,3 14,18,7 6,11,6 8,19,2", " 6,7,2 4,16,5 3,11,8 1,10,3 14,15", ",6 10,14,7 14,19,1 5,15,3 5,6,2 9,14,5 3", ",15,3 2,6,5 1,6,3 0,12,5 4,19,2", " 5,17,1 11,18,7 11,12,2 9,19,2 ", "2,18,3 18,19,1 1,18,8 8,9,3 7,13,", "9 12,19,2 0,3,7 9,13,7 16,18,9 3,", "4,6 10,16,7 5,19,1 4,7,1 0,17,7 0", ",15,1 7,8,1 1,13,3 3,14,1 8,16,", "9 8,14,1 6,8,6 1,11,1 0,5,7 2,12,9 8", ",17,6 5,12,4 0,6,3 3,8,6 15,18,3 0,7", ",2 2,13,4 5,10,8 0,18,7 6,12,1 11,19,5", " 10,13,8 4,13,5 2,8,5 13,14,5 1,3,1 7,1", "2,9 4,8,3 3,5,4 5,16,4 0,8,1 2,5,8 9,18,8", " 9,17,6 0,11,2 7,11,9 1,2,1 5,8,7 14,", "17,6 6,16,2 1,19,2 15,16,3 5,", "13,6 0,19,3 16,17,5 10,18,8 6,13,7 4,1", "4,7 5,7,1 6,17,4 10,17,5 7,15,4 6,1", "8,9 2,19,4 0,10,1 15,19,3", " 3,18,1 8,10,4 1,5,4 9,15,8 4,5,1", " 2,7,3 13,17,5 2,15,1 1,7,1 0,9,8 12,1", "6,4 7,9,3 12,13,1 17,19,8 0,16,", "1 2,17,1 5,18,6 2,10,1 9,10,3"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 20;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 10;
    vector<string> roads = {"0,", "2,", "2 ", "0", ",6,1", " ", "0", ",8,", "2", " 0", ",5,6", " 0,", "9", ",9", " 0", ",4,", "2", " 0,", "3", ",6", " 0", ",7,", "1 ", "0,", "1", ",5"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 34;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 10;
    vector<string> roads = {"3,8,7 1,6,1 0,2,7 7,8,1 1,7,5 5,8,", "4 2,3,2 2,8,8 6,7,3 2,4,2 4,6,2 3,5,5 0,4,1 0,", "8,7 0,6,2 3,9,9 1,8,9 0,5,6 4,8,3 5", ",9,8 3,7,2 6,8,8 0,1,4 1,5,9 3,4,8 4,5,3 0,9", ",8 2,6,7 1,3,2 2,9,7 7,9,3 4,7,5 3,6", ",6 0,3,5 0,7,7 5,6,1 4,9,3 1,4,1 2,7", ",8 1,2,8 2,5,2 1,9,3 6,9,2 5,7,9 8,9,8"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 10;
    vector<string> roads = {"3,7,5 1,6", ",6 0,5,5 ", "4,5,5 6", ",7,3 2,9,", "6 5,6,4", " 1,8,3 1,7", ",1 1", ",3,4 1", ",2,7 4", ",8,7", " 2,6,2", " 5,8,3 ", "5,7,6 0", ",1,5 2,", "7,9 6,9", ",7 1,9", ",6 4,6", ",6 1,4,2 ", "1,5,4 2,4,3", " 0,4,2 ", "3,5,7", " 2,8,7 ", "0,8,4 2,5,7", " 3,9,9 ", "4,9,5 3,", "8,5 0,3,", "8 3,4,", "4 0,6,8 0,7", ",3 8,9,7 5", ",9,8 4,7,4 2,3", ",2 7,8,", "5 7,9,", "4 3", ",6,2 0,", "2,1 6,8", ",4 0,9,1"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 10;
    vector<string> roads = {"0,6,5", " 6,8", ",8 0", ",7,2 6,7,", "1 1,2,2", " 0,8,5 2,", "3,5 0,9,", "7 3,8", ",5 6,", "9,", "4 0", ",3,4 0,", "2,6 3,", "7,2 0", ",4,3 0,", "5,5 0,1,8"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 29;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 5;
    vector<string> roads = {"0,2,2 0,1,6", " 0,3,2 0,4,7"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 17;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 5;
    vector<string> roads = {"2,3,", "2 0,4,7", " 1,4", ",8 3,4,", "2 0,1,", "5 0,3,", "4 ", "2,4", ",5", " 1,3", ",8 1,2,", "6 0,2,9"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 5;
    vector<string> roads = {"3", ",4,1 0,", "1", ",5 1", ",4,3", " 0,3", ",1", " 1", ",2,2", " 2", ",3", ",2 0", ",4,", "6 2,4", ",7 1", ",3,", "2 ", "0,2,5"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 5;
    vector<string> roads = {"1,", "3,", "1 ", "0", ",4,", "4", " ", "2,", "4", ",6", " 3", ",4", ",3 ", "0", ",", "2,3", " ", "0,", "3,", "1 2", ",3", ",3", " ", "0,", "1,7", " ", "1", ",4,8", " ", "1,", "2", ",4"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 8;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 2;
    vector<string> roads = {"0", ",1", ",", "2"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 2;
    vector<string> roads = {"0,1,7"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 3;
    vector<string> roads = {"1,", "2", ",", "7", " ", "0", ",", "2,9"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 5;
    vector<string> roads = {"1", ",", "3", ",", "6", " ", "1", ",", "2", ",", "5"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 10;
    vector<string> roads = {"1", ",", "3,", "4", " ", "4", ",", "6", ",3"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 25;
    vector<string> roads = {"2,21,7 4,18,1"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 150;
    vector<string> roads = {"48", ",1", "12,", "9 ", "3", ",99", ",", "5"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 200;
    vector<string> roads = {"12", "3", ",1", "5", "6,", "3"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 300;
    vector<string> roads = {"11", "1,", "19", "7,2"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 400;
    vector<string> roads = {"3", "22", ",", "3", "7", "5", ",", "8"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 1000;
    vector<string> roads = {"8", "2", ",", "1", "5", "1", ",", "5"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 2;
    vector<string> roads = {"0", ",", "1", ",", "7"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 3;
    vector<string> roads = {"0,", "2,6", " ", "1", ",", "2,", "4", " ", "0", ",", "1,7"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 5;
    vector<string> roads = {"2", ",", "3", ",", "9", " ", "1", ",", "3", ",", "2 0", ",", "1", ",", "6", " ", "2,", "4", ",", "3", " ", "0", ",", "3", ",", "5", " ", "0", ",", "4", ",", "3", " ", "1", ",", "2,", "4", " ", "1", ",", "4", ",", "1"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 10;
    vector<string> roads = {"1,2,7 3,7,1 2,4,2 5,9,9 0,8,5 0,6,1 5,6,4 1,8,1"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 25;
    vector<string> roads = {"5", ",", "1", "5", ",", "3", " ", "2", "1", ",", "2", "4", ",", "9", " ", "1", "4", ",", "2", "4", ",", "3", " ", "4", ",", "1", "0", ",", "1", " ", "6", ",", "8", ",", "5", " ", "1", "1", ",", "1", "6", ",", "9"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 150;
    vector<string> roads = {"7", "3", ",1", "0", "3", ",", "8", " ", "3", "9", ",", "1", "0", "1", ",", "1", " ", "7", "2", ",1", "4", "1", ",", "7 ", "1", "0", "9", ",", "1", "2", "3", ",", "9", " ", "7", "2,", "1", "37", ",", "4"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 200;
    vector<string> roads = {"1", "0,", "7", "4", ",", "6", " 9,", "1", "1", "3", ",", "8", " ", "5", "5,", "75", ",", "3 ", "1", "6", "4,", "1", "9", "6", ",1", " 8", ",", "1", "4", "0", ",", "2", " ", "7", ",1", "3", "7,", "5"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 300;
    vector<string> roads = {"2", "3", "1,", "27", "7,", "5 ", "59", ",", "2", "1", "6,", "7 ", "5", "6", ",", "2", "7", "7", ",8 ", "250", ",", "29", "5,1", " ", "14", "3,", "1", "4", "8", ",", "6"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 400;
    vector<string> roads = {"1", "4", "8", ",", "1", "66", ",2", " 2", "51,", "27", "7", ",", "7", " ", "230", ",", "3", "7", "9", ",", "1", " ", "2", "4", "7", ",", "3", "9", "9", ",", "8 ", "28", ",1", "2", "4", ",", "8"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 1000;
    vector<string> roads = {"7", "2", "8", ",9", "5", "4", ",", "9 ", "4", "3", "8", ",", "8", "28", ",", "3", " ", "4", "9", "7,", "8", "90", ",", "6", " ", "81,", "4", "3", "3,", "7", " 5", "75", ",", "9", "94", ",4"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 2;
    vector<string> roads = {"0,1", ",7"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 3;
    vector<string> roads = {"1,2,8 0,1,", "2 0,2,1"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 5;
    vector<string> roads = {"0,", "3,9", " 0", ",1", ",2", " 1,", "4", ",", "8 ", "2", ",4,4", " 3,", "4,", "7", " 1,", "3,4", " 1", ",2", ",8", " 2,", "3,4", " 0,2,", "1 ", "0,4", ",7"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 10;
    vector<string> roads = {"3,5,7", " 8,", "9,4 0,", "4,3 3,", "7,3 1,", "2,", "3 1,3,7", " 5,6,3 0,", "5,4 1,", "9,4", " 0,1,", "9 3,8,8 7", ",8,6 2,", "5,9 1,6,5", " 2,6,8 4,", "9,1 7,9,2", " 0,8,7 4,", "8,2 5,", "9,4 ", "1,5,8 ", "6,8,", "1 0,6", ",4 2,4,", "3 2,8,", "6 6,9,7", " 4,6,9 2,9", ",3 1,7,4", " 5,7,5", " 1,8,", "1 4,7", ",2 3", ",4,5 ", "5,8,9 ", "1,4,", "7 4,", "5,4 0,9", ",1 3,", "6,2 3,9,", "3 2,", "3,3 ", "0,3,3 2,7,4", " 6,7,4", " 0,7,4 ", "0,2,3"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 25;
    vector<string> roads = {"4,16,6 11,18,4 9,16,6 2,13,6 8,24,3 7,18,9 1,6", ",5 4,21,3 9,18,5 4,15,6 2,12,3 14,", "24,9 5,15,3 11,17,5 2,18,6 17,18,", "6 1,7,7 5,23,3 5,12,8 13,22,8 16,18", ",6 12,24,5 10,16,4 8,16,9 3,11,3 9,", "21,8 1,5,6 0,9,1 0,14,9 3,10,2 3", ",21,3 13,23,2 6,20,9 11,2", "2,9 8,15,1 15,23,7 3,4,1 1,22,2 4,12", ",7 15,20,4 1,14,3 18,22,2 8,22,7 8,20,5 13,18,7", " 11,15,3 19,21,7 18,19,9 10,", "17,8 9,15,3 9,24,4 10,20,3", " 1,24,4 6,7,3 7,10,6 18,21", ",2 1,23,9 12,18,4 0,24,4 19,20,9 3,", "17,1 3,18,4 16,24,3 12,17,2 ", "7,24,4 0,20,5 14,22,9 8,18,2", " 0,8,7 20,23,2 11,23,5 2,4,3 7,1", "7,7 5,21,7 10,15,5 0,15,3 ", "12,21,2 17,21,8 2,3,6 9,17", ",8 5,7,3 9,11,6 2,10,6 15,22,", "9 7,20,8 11,14,9 7,15,7 21,23,", "7 6,21,2 6,24,7 9,10,5 3,16,3", " 9,22,5 1,18,6 17,20,6 22,23,8 ", "8,14,8 1,4,3 12,23,3 7", ",12,8 3,7,3 12,22,7 1,11,4", " 3,24,9 18,20,8 19,22,5 4,10,8 22,24,8 1", "1,13,8 7,16,5 1,12,5 13,14,5 1", "2,19,8 4,22,7 10,19,6 2,8,6 10,24,9 0,10,", "1 8,9,5 1,2,6 13,24,1 4,9,3 ", "14,20,5 17,23,1 3,22,4 1,20,9 2,23", ",6 2,7,5 2,17,9 5,11,5 1,10,1 13,20,3 ", "14,23,7 10,23,2 12,14,7 0,12,8 9,13,6 4,23,9"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 49;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 150;
    vector<string> roads = {"45,99,9 67,91,7 21,1", "48,9 29,142,2 26,84,7 45,", "83,3 3,20,1 34", ",120,8 96,119,1 98,104,1 2,", "71,5 35,94,4 106,133,7 63,1", "08,8 17,38,6 0,23,5", " 18,139,8 54,56,1 5", ",61,2 14,137,2 86,91,9 9", "1,101,8 61,1", "12,8 7,56,8 83,100,5 10,17,", "5 55,79,8 26,131,8 ", "52,138,9 42,55,8", " 21,112,8 39,117,6 5", "3,97,4 77,126,8 42,", "67,4 12,143,1 19,94,3 60,124,6", " 19,135,4 22,71,8 73,87,1 ", "7,149,5 102,135,8 7,", "13,4 27,72,1 57,62", ",1 83,91,9 7,127,5 ", "18,113,1 29,76,8 66,1", "08,1 108,147,2 25,115,5 33,58,", "6 24,74,6 63,113,4 65,", "138,1 60,86,9 26,68,1 18,5", "2,2 36,71,7 121,122,", "5 69,88,4 7,71,3 ", "18,84,5 18,77,8 72,", "92,2 74,128,8 110,124,", "3 4,133,5 23,45,2 ", "56,144,1 18,4", "7,7 25,44,5 78,", "90,7 64,71,6 59,143,", "2 52,119,9 73,146,7 1", "03,108,4 65,101", ",8 27,119,4 10,113,3 37,3", "9,7 79,130,3 70,", "111,9 27,39,4 54,1", "14,2 32,126,8 12,85,4 2,7", "2,6 20,83,6 103,13", "4,3 30,41,6 33,64,9 21,9", "5,7 9,136,9 86,", "123,1 112,146,1 51,1", "14,6 61,108,2 8,101", ",9 75,82,5 69,94,4 4", "7,120,1 57,136,7 102,129", ",9 82,95,4 69,108,2 ", "85,134,1 62,", "85,6 71,78,8 85,137", ",4 125,144,9 4,100,1", " 93,130,7 113,142,9"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 200;
    vector<string> roads = {"62,164,5 29,74,3 2,85,7 41,", "173,1 59,173,2 121,166,1 98,1", "48,6 1,43,5 103,194,1 95", ",162,6 35,146,4 79,19", "4,9 103,121,1 75,130,6 139,147,5 14,92,4", " 112,145,2 86,184,5 28,73,8 87,12", "5,9 105,178,6 21,62,8 65,14", "3,2 51,56,5 7,193,6 132,182,7 87,", "179,9 7,167,9 73,88,6", " 99,162,4 58,195,5 90,118,1", " 27,35,1 122,189,4 54,192,4 98,19", "0,5 50,65,7 76,111,5 38,180,2 11,", "115,9 46,164,4 11,71,2 8,106,6", " 39,131,9 54,144,9 3,98,6 85", ",116,5 105,179,8 10,31,6 0,199,3 9,1", "54,2 0,174,2 93,155,2 43,168", ",6 44,113,4 86,91,1 140,166,3 137,15", "2,2 27,54,4 53,70,5 11,197,6 11,", "48,3 54,100,2 28,156,1 25,52,7 15", ",167,4 164,194,1 4,57,1 175,188,3 26,67,5", " 23,100,4 39,68,7 110,198,3 95,103,5 71,78", ",5 105,132,4 7,73,1 195,198,2 ", "129,139,6 58,88,7 113,17", "5,6 16,54,4 13,52,9 65,188,9 ", "17,161,4 79,177,9 0,166,1 9", "5,189,6 142,151,3 36", ",115,3 152,178,7 3,192,8 23,198,", "5 43,104,7 108,176,6 124,", "186,4 69,131,7 7,185,7 23,1", "84,9 30,199,1 124,125,6 3,142,5 90,", "153,2 82,176,1 34,70,6 42,64,3 126", ",174,1 38,190,6 149,195,1 33,196,", "4 59,106,9 119,134,8 154,171,5"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 300;
    vector<string> roads = {"44,170,2 39,243", ",5 19,29,3 63,244,3 ", "55,157,5 113,215,8 6", ",290,6 12,220,1 113,2", "83,1 20,254,5 1", "77,250,2 194,238,2 50,148,", "6 283,292,7 12,57,7 9", "1,286,2 166,218,3 ", "38,81,8 41,247,6 43,248,", "8 128,155,5 109,153,3 ", "75,127,2 182,29", "7,7 239,275,6 17", "8,279,8 116,175,2 27,237,2 55", ",163,4 47,242,2 97,27", "0,7 45,97,2 65,170,6 17", "9,246,6 22,77,1 1", "44,214,9 18,1", "30,4 35,265,2 41,1", "76,8 85,276,4 12,161", ",1 72,147,7 204,233,9 84,", "123,9 141,269,5 235", ",285,8 107,285,6 273,28", "7,8 152,181,2 155,2", "07,8 208,296,2 38,201", ",8 64,207,9 249,288,", "3 106,136,3 66,98,2", " 166,209,8 21,151,5 ", "116,125,2 15,125,6 ", "4,171,8 181,266,7 7", "6,226,6 164,280,6 ", "39,140,8 52,59,1", " 143,279,4 171,273,1 ", "49,173,7 91,10", "5,9 27,150,9 21,152,3", " 44,87,3 203,227,1 262,2", "69,3 161,284,9 80", ",273,2 82,107,4 77,110,8 ", "131,133,6 70,80,9 60,64,2 23", ",170,7 65,265,3 ", "154,230,2 163,182,1 48,", "251,5 30,80,9 58,202", ",6 130,177,6 27,154", ",5 79,292,9 199,227,8", " 148,199,6 156", ",293,9 77,91,8 15,101,7 ", "63,169,6 141,242,8 130", ",164,4 98,223,3 251,292,5 1", "99,295,9 7,149,2 21,180", ",4 142,241,3 44,114,3"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 400;
    vector<string> roads = {"13,72,3 14,151,8 56,220", ",3 244,358,9 90,211,5 251,300", ",5 147,371,1 238,367,2 211,", "297,9 101,223,2 191,383,", "6 45,146,8 167,284,1 283,", "391,1 259,277,6 46,19", "9,8 86,293,3 179,234,3 7", ",57,7 91,127,9 276,320,7 2", "77,396,4 168,192,4 29,315,4", " 137,262,5 62,353,5 ", "87,182,9 228,235,8 273", ",330,7 99,356,8 11,346,5 94,", "173,9 4,296,7 148,277", ",1 108,201,7 111,116,9 2", "0,165,6 46,304,8 ", "57,150,3 216,357,4 109,385,4 13", "5,358,3 181,227,9", " 177,377,8 32,43,9 ", "63,375,1 158,395,6 1,", "212,2 100,241,2 77,156,3 2", "58,338,2 50,287,6 347", ",390,2 119,388,5 87,356,9 ", "118,343,9 11,352,4 2,226,8 93,", "141,1 80,281,2 157,23", "2,9 49,138,6 154,229", ",4 85,199,6 98,315,", "6 5,143,7 126,262,9 176,276,8 26", "5,386,7 350,354,1 8,275", ",1 230,287,8 63,", "308,4 17,45,6 126,197,3 2", "12,316,6 89,311,8 65,135,5 ", "211,335,2 2,22,1 104,359", ",3 169,392,8 81,93", ",9 286,344,7 226,325,2 339,34", "3,2 73,74,6 213,300,4 8", "6,266,5 96,203,1 ", "157,279,2 99,292,1 242,", "329,9 44,141,3 394,396,", "9 294,347,6 174,239,5 105,397,1", " 49,121,2 279,281,", "1 193,298,1 127,332,", "1 178,371,1 154,175,8 ", "104,136,1 12,329,2"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 1000;
    vector<string> roads = {"54,560,9 215,790,7 530,770,", "7 161,925,8 157,162,2 658,696,7 409", ",784,2 142,677,7 366,563,9 626,956", ",2 688,765,1 529,845,9 170,280", ",4 306,371,9 306,818,5 2", "10,841,6 454,726,3 186,", "835,3 18,186,8 105,526,5 40", "2,822,8 327,725,9 42,274,2 147,", "820,5 376,665,9 738,870,6 175,640", ",7 46,253,1 592,809,5 327,798,7 122,621,", "2 768,948,9 95,813,3 65,535,9 543,828", ",6 258,675,2 792,871,2 516,887,2 905,92", "1,9 595,853,4 452,830,1 70,64", "6,5 160,453,8 138,866,6 455,9", "18,5 112,246,9 205,647,8 ", "116,374,6 30,181,2 688,696,7 740,909", ",7 308,589,9 6,883,4 805,834,8", " 145,303,2 644,995,3 503,535", ",7 295,883,3 432,598,9 348,40", "4,9 933,987,9 55,408,4 199,419,1 213,6", "11,1 45,843,8 12,969,6 134,603,4", " 61,409,2 298,739,5 ", "335,937,5 176,621,6 189,951,3 211", ",278,2 397,759,6 380,588,6 4,", "715,6 344,532,5 39,451,3 101", ",376,1 71,840,9 296,991,1 610", ",697,2 602,980,2 41,247,6 406,628,6", " 63,108,1 287,531,7 121,513,2 518,52", "4,5 643,739,2 346,831,3 194", ",228,5 497,524,9 112,837,8 3", "22,644,2 415,667,2 657,766,", "9 213,434,8 668,750,2 ", "451,657,5 197,249,5 48,366,3"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 2;
    vector<string> roads = {"0", ",1,5"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 5;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 3;
    vector<string> roads = {"0", ",", "2", ",", "1", " ", "1", ",", "2", ",9", " 0", ",", "1", ",", "3"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 5;
    vector<string> roads = {"3,", "4,5", " ", "1,", "4", ",3", " 0", ",1,6", " 2,", "3,6", " 2,4", ",4 ", "0,2", ",9 0", ",4,", "1 1", ",", "2", ",7 ", "0,3", ",1 ", "1", ",3", ",7"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 10;
    vector<string> roads = {"0,7,2 ", "8,9,5 2,9,9", " 2,6,", "7 6,", "8,5 0,5,4", " 1,7,3", " 4", ",7,", "7 3,", "5,2 4", ",9,1 1,", "2,7 0", ",1,6 0,3,3", " 3,4,5 ", "0,6,7", " 2,8,2 ", "2,5,", "4 7,8,", "1 6,7,9", " 2,4,2", " 2", ",7,4 ", "3,7,5 ", "5,", "6,", "3 2,3,3", " 5,7,2", " 3,9,8 0,", "9,8", " 5,9,1 3,6", ",4", " 1,", "6,7 0", ",2,5 ", "6,9,9 7", ",9,3", " 4,6", ",6 4,8,9", " 4,", "5,1 1,8", ",3 0,", "4,2 1", ",9,1 1,5,", "3 1,4,", "3 3,8", ",4 5,8,", "8 1,", "3,8 0,8,5"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 25;
    vector<string> roads = {"0,13,2 13,22,9 11,23,4 1,16,1 2,22,1 11,16,9 0,9,", "9 15,17,2 23,24,5 11,13,3 7,12,2 14,19,7 2,15,2 3,", "18,3 15,20,8 18,21,7 4,14,4 1,2,7 6,18,3 9,15,9 10", ",14,4 8,10,4 21,24,9 4,16,5 7,21,7 5,18,7 0,24,2 8", ",20,2 1,12,3 2,3,4 5,23,6 9,24,8 11,24,2 7,14,4 19", ",22,7 9,16,3 15,19,2 4,13,3 12,19,6 18,24,2 ", "21,23,9 9,11,5 20,24,3 3,19,4 13,17,3 4,11,2 7,", "8,7 17,23,9 16,21,9 0,3,1 0,6,9 1,7,9 8,24,8 8,15", ",8 6,21,8 1,6,6 1,17,6 4,22,5 10,24,5 11,1", "2,8 17,21,9 11,22,7 1,18,1 5,21,2 4,15,1 2,18,9 3,", "23,2 5,9,5 6,24,8 4,12,6 11,18,5 12,15,6 16", ",19,4 14,22,9 7,20,6 4,9,6 15,24,7 5,6,2", " 9,14,9 5,11,2 2,13,6 0,10,6 ", "12,14,6 7,15,3 8,9,9 14,17,7 13,16,6 10,13,4 4,17,", "2 9,20,5 9,18,4 16,20,4 9,17,9 3,4,5 19", ",24,5 12,24,7 0,2,5 2,21,7 2,16,3 9,12,3 9,23,5 14", ",15,1 3,17,9 13,23,8 6,14,4 16,24,4 6,9,9 20,2", "1,8 10,18,1 2,5,1 18,20,2 12,20,7 15,18,6 6,7,", "7 21,22,3 13,18,6 1,5,5 22,23,8 1,21,7 4,7,7 10,19", ",4 18,22,1 12,18,4 6,13,5 3,15,3 2,", "11,2 0,16,6 11,14,7 8,11,7 2,7,5 8,13,4 12,23,8 3,", "16,4 6,22,8 7,19,5 0,22,9 15,21,5 20,23,8 11,1", "7,3 18,23,9 6,17,1 2,6,6 1,22,4 0,12,6 6,11,3 3,20", ",4 6,8,1 9,21,7 3,6,3 4,10,2 10,16,7 0,4,2 7,13,", "2 17,24,1 0,15,3 1,3,3 14,24,7 4,8,3 11,21,9 8,12,", "7 10,12,6 15,16,2 2,9,3 0,21,4 0,20,1 10,17,", "1 1,11,4 4,18,1 17,19,8 20,22,1 8,16,6 7,", "9,7 13,21,8 10,20,8 13,19,7 0,17,9 0,1,2 ", "17,18,6 5,7,7 8,18,4 10,21,4 12,16,2", " 5,12,5 8,14,1 15,23,7 3,14,7 8,19,2 6,15,3 3,9,7 ", "14,23,8 12,17,2 7,11,9 2,23,3 4,19,6 1,19,8 0,5,", "8 0,23,2 5,14,2 11,15,4 6,23,4 6,16,6 3,11,2 1,8,9", " 11,20,5 19,21,2 2,14,3 9,10,8 5,20,7 14,20,7", " 0,14,1 3,12,8 3,10,5 0,8,7 10,23,1 0,18,8 5,10,3", " 16,18,1 7,17,8 6,10,9 7,24,2 15,22,5 18,19,2 17,2", "0,7 3,8,5 6,19,2 1,15,8 10,11,6 5,13,4 8,22,4 1,9,", "4 14,18,8 5,22,7 5,8,8 9,13,9 3,24,9 0,11,4", " 2,17,7 5,15,4 11,19,2 9,22,2 13,14,8 4,20,4 6,20", ",2 2,12,9 1,13,2 0,19,1 10,15,1 8,23,8 4,5,9 8,", "17,3 3,22,3 12,13,8 7,23,3 2,4,3 4,24,8 2,24,9 2,2", "0,3 17,22,1 13,15,4 1,20,2 14,21,6 3,5,6 1", "0,22,9 16,22,5 16,23,7 16,17,3 7,16,4 19,2", "0,4 12,22,2 2,8,4 3,13,3 4,23,3 13,20,8 8,21,9 7,1", "0,8 7,22,6 2,19,7 5,24,6 6,12,3 12,21,9 3,7,2 2,10", ",6 5,19,2 5,17,1 4,6,3 0,7,8 1,24,8 4,21,8 ", "9,19,6 7,18,6 14,16,3 1,10,5 22,24,9 19,23,1 1,2", "3,7 1,14,9 5,16,2 3,21,4 13,24,9 1,4,6"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 30;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 150;
    vector<string> roads = {"93,103,8 50,67,9 72,99,5 40,89,4 39,48,4 103,128,3", " 66,79,6 70,147,6 38,143,3 67,129,7 26,41,5 51,91,", "4 8,145,8 3,119,1 58,142,5 68,83,4 9,90,7 73,97,4 ", "35,126,3 42,144,1 28,111,6 41,67,2 104,127,1 76,1", "42,6 12,130,1 139,141,4 49,64,8 131,137,8 17,29,3 ", "62,71,8 6,92,2 85,144,4 126,141,8 61,107,5 118,120", ",3 89,109,7 9,125,4 49,84,3 54,131,5 80,142,4 39,5", "2,1 4,111,5 55,119,8 50,80,3 8,26,2 32,54,4 4,15,2", " 31,125,6 4,20,7 79,124,6 42,53,7 32,128,9 38,58,6", " 35,110,2 11,128,4 62,133,3 7,123,4 75,110,4 94,1", "45,4 19,72,4 16,36,5 82,128,2 43,53,5 59,88,3 40,7", "7,3 2,132,2 36,111,1 57,134,3 14,70,9 104,117,2 41", ",141,9 56,149,6 46,106,2 133,138,7 40,107,3 17,12", "5,9 30,111,1 27,76,3 82,122,1 21,42,6 143,144,9 33", ",92,1 84,101,5 47,57,9 29,130,1 134,143,5 14,57,9 ", "33,35,9 63,66,3 34,141,8 3,83,3 59,133,9 0,53,8 66", ",83,9 24,108,3 83,141,7 49,80,5 5,108,5 104,128,1 ", "53,103,2 28,49,5 128,135,6 15,112,1 5,54,1 126,148", ",3 102,131,9 105,131,3 65,104,3 46,110,6 77,96,5 5", "2,84,6 59,131,9 21,25,9 77,145,8 25,119,6 70,136,4", " 81,132,3 32,140,1 22,133,6 52,97,7 62,113,2 52,14", "6,4 103,129,7 68,147,1 57,85,2 47,93,8 42,65,3 0,8", "8,6 34,137,9 78,89,1 98,107,5 31,84,8 68,102,5 38,", "39,8 79,125,3 65,138,4 53,61,3 20,61,5 97,145,8 24", ",125,4 105,145,2 38,46,9 83,121,2 82,114,3 67,130,", "9 142,146,8 46,123,1 81,145,3 34,99,1 37,67,2 49,", "137,3 59,141,5 73,122,2 21,148,1 64,141,7 3,19,1 3", "8,86,5 108,129,1 55,80,2 65,124,8 23,108,2 23,71,3", " 31,116,3 13,18,2 42,106,9 14,115,4 14,146,4 9,118", ",7 61,92,7 84,131,4 2,147,7 45,111,1 105,116,2 42,", "71,3 86,122,9 69,128,6 122,142,3 87,124,4 107,110,", "5 46,105,5 18,143,3 24,110,1 65,117,3 58,90,1 44,1", "21,3 28,108,9 8,97,5 87,134,8 64,130,7 64,97,8 21,", "122,3 14,43,8 18,67,5 123,143,3 98,147,1 40,75,4 4", "4,75,8 57,86,5 36,45,4 15,33,4 26,110,8 47,95,5 19", ",58,6 62,81,2 34,73,7 23,115,5 4,72,8 23,47,8 45,6", "5,7 41,59,7 98,144,3 118,149,6 52,141,5 18,124,2 4", "6,79,2 32,99,9 54,126,7 54,132,9 8,123,8 32,94,7 0", ",24,7 62,143,8 56,86,9 58,70,5 7,53,6 41,110,6 9,1", "9,1 25,135,8 1,33,8 1,115,6 12,51,3 70,107,8 0,60,", "1 85,95,2 6,87,9 58,91,6 110,144,1 34,40,6 44,102,", "3 103,114,7 130,135,6 10,90,9 53,140,8 73,129,6 29", ",149,2 53,137,1 90,114,4 9,112,5 51,106,3 1,41,", "9 35,123,4 122,127,4 53,129,1 103,143,2 44,50,1 69", ",74,8 52,125,1 84,119,8 92,141,5 65,146,7 89,91,5 ", "31,52,8 13,107,1 71,99,6 81,112,7 64,68,5 33,79,4 ", "100,104,6 21,145,3 50,69,6 43,65,4 85,138,9 59,77,", "3 75,101,1 86,141,7 50,83,3 61,132,4 74,121,4 75,1", "26,3 12,15,9 82,109,5 136,137,7 29,105,4 7,127,6 1", "12,114,8 40,141,7 47,98,8 66,85,9 128,133,3 7,32,1"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 446;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 200;
    vector<string> roads = {"26,148,4 94,110,7 168,179,1 25,102,8 76,137,6 103,", "197,5 70,126,5 105,142,1 84,198,4 54,143,6 40,164,", "4 22,92,8 1,15,3 76,186,7 8,101,7 38,196,1 161,185", ",3 177,199,1 36,169,9 40,161,8 9,60,5 187,193,2 11", "3,131,6 89,142,6 69,164,2 12,120,5 120,135,3 75,16", "7,5 36,165,4 109,197,5 5,174,1 9,173,6 19,128,4 71", ",184,2 100,118,1 9,171,9 81,144,2 1,10,9 38,157,1 ", "79,186,5 89,117,6 27,107,1 57,184,1 106,181,5 8,10", "9,4 85,174,3 51,63,9 80,113,6 136,172,5 34,152,2 1", "02,181,8 45,178,7 5,106,6 64,173,4 137,188,8 56,84", ",3 34,124,3 81,131,2 160,199,1 22,170,7 145,187,4 ", "115,166,3 29,139,8 63,132,6 133,153,1 69,75,3 63,1", "57,7 154,186,1 59,101,6 47,121,2 165,174,3 42,158,", "1 13,137,3 43,81,2 46,172,2 51,120,8 18,135,7 7,10", "9,8 66,196,8 80,111,6 11,61,3 102,112,6 28,92,2 1,", "21,9 106,130,1 70,100,1 68,116,1 136,197,5 24,116,", "7 1,168,5 139,163,6 58,137,6 159,193,3 140,142,8 5", "7,166,7 45,135,7 95,166,1 25,41,6 17,61,8 0,114,6 ", "168,188,4 147,162,5 138,194,9 73,172,4 68,110,5 13", ",113,4 99,101,7 109,149,4 93,108,1 20,134,8 29,99,", "9 21,182,2 49,128,9 182,183,9 89,166,4 50,119,5 12", "9,189,6 77,102,9 51,101,3 99,180,1 23,89,7 117,18", "7,8 86,96,3 24,107,1 11,191,3 35,140,6 18,46,7 169", ",192,7 155,182,5 47,158,9 3,100,9 155,197,2 16,87,", "7 4,53,4 34,178,4 6,197,9 73,194,1 0,87,3 51,74,9 ", "68,119,8 27,146,1 101,121,2 20,40,5 53,59,4 105,13", "9,4 10,77,3 63,150,6 99,188,3 101,109,4 97,184,9 6", "3,194,6 35,67,2 2,156,5 3,93,5 141,190,8 103,139,9", " 123,127,3 5,31,7 26,175,6 87,192,1 54,170,6 89,15", "1,7 83,84,3 138,189,9 65,187,3 159,195,6 116,154,9", " 33,168,9 3,129,6 9,102,9 15,27,4 101,129,9 78,116", ",7 110,136,9 146,189,7 130,179,7 18,50,8 38,55,1 8", "1,88,6 31,120,7 104,105,5 118,155,8 1,52,5 72,158,", "8 14,28,7 54,79,5 22,172,4 122,126,5 165,195,4 170", ",196,5 90,129,3 131,186,4 32,42,1 96,145,5 9,154,1", " 37,80,5 54,117,8 5,70,3 39,124,3 15,165,7 4,26,8 ", "14,79,5 1,131,7 22,198,3 80,82,3 34,84,1 106,114,2", " 51,183,4 12,159,8 64,86,1 126,152,7 44,178,5 150,", "165,5 125,182,3 61,77,9 0,166,8 125,149,2 23,161,5", " 42,98,1 41,118,9 9,113,1 75,151,5 30,42,7 12,10", "4,8 127,164,7 109,123,2 42,120,8 33,162,7 9,169,7 ", "53,117,7 128,194,3 12,155,4 71,76,6 21,22,8 42,180", ",9 116,133,4 164,196,4 32,171,8 25,119,3 140,196,4", " 23,83,9 128,130,6 88,187,6 20,130,2 2,48,7 78,199", ",9 87,116,9 154,199,7 50,169,4 61,168,3 114,125,3 ", "174,198,2 27,196,1 89,111,4 114,176,5 48,129,7 9,1", "11,7 62,150,8 116,186,4 30,138,7 34,96,8 118,161,1", " 55,101,9 34,38,9 120,196,2 159,191,4 2,68,8 126,1", "79,7 136,186,8 3,140,8 47,87,9 108,129,5 74,148,1 ", "80,91,6 32,141,6 8,156,7 56,181,5 32,64,3 40,146,6"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 813;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 300;
    vector<string> roads = {"151,244,1 36,294,1 12,43,4 75,109,5 179,238,9 63,1", "85,3 93,227,5 64,172,6 48,111,1 99,120,6 35,225,7 ", "152,191,6 163,241,1 161,255,9 137,171,6 82,165,1 6", "1,74,3 51,106,7 68,167,8 128,162,5 46,84,8 133,17", "3,5 83,223,4 77,215,9 55,260,4 85,208,8 32,141,1 6", "2,171,1 33,137,9 82,203,3 33,251,2 64,131,8 164,22", "2,2 92,132,5 74,103,4 95,116,4 66,262,1 94,298,4 1", "57,267,3 139,205,4 143,201,9 87,295,3 184,221,2 15", "1,191,2 39,100,2 183,245,8 189,200,4 4,127,4 255,2", "92,8 34,199,5 235,261,4 220,270,7 21,286,8 65,191,", "6 7,9,6 104,237,1 27,231,4 98,215,8 112,266,4 220,", "225,6 155,172,1 25,183,7 198,202,1 31,174,7 16,241", ",5 22,28,7 74,212,1 58,123,4 246,262,4 89,175,9 12", "6,299,6 26,62,7 229,283,7 70,71,7 45,236,5 186,243", ",4 153,230,4 138,255,7 55,203,6 154,218,7 70,264,7", " 225,240,1 96,288,2 172,252,7 92,287,9 126,292,8 9", "4,162,3 88,187,7 18,220,8 75,145,4 275,288,5 232,2", "51,2 56,147,3 289,292,7 16,38,3 119,198,9 18,101,4", " 221,293,9 130,207,4 252,296,2 83,209,7 165,193,3 ", "74,122,5 131,273,3 140,183,3 127,286,7 8,218,7 253", ",276,1 248,291,8 104,144,9 150,278,1 160,260,8 32,", "125,6 108,290,2 130,256,8 169,242,5 7,24,5 107,196", ",1 132,262,3 12,283,1 86,187,6 164,294,8 18,218,6 ", "147,265,3 221,268,9 77,162,6 45,136,1 135,140,3 53", ",106,9 5,192,7 118,254,1 187,211,8 170,275,3 54,62", ",3 186,206,8 182,249,1 47,112,8 62,247,1 75,100,6 ", "83,208,1 70,143,8 122,200,5 9,16,4 91,161,9 211,29", "1,9 69,140,7 75,237,1 65,84,7 66,100,4 268,294,8 1", "09,257,3 67,209,1 191,235,7 58,95,4 10,111,6 70,19", "6,1 69,111,1 153,234,2 63,65,1 239,277,8 184,281,4", " 193,282,9 7,168,2 62,267,3 99,201,8 197,214,5 173", ",297,9 195,275,5 151,161,4 105,213,4 76,126,6 71,2", "28,1 97,158,6 193,272,4 59,245,4 13,245,4 49,299,7", " 103,125,4 31,294,4 20,253,8 154,156,1 215,223,2 1", "43,202,8 55,74,9 3,40,5 146,203,6 126,263,8 224,24", "4,3 34,272,5 19,283,8 154,265,6 134,145,9 267,279,", "7 22,274,3 34,148,6 55,284,2 2,171,1 21,269,2 231,", "259,5 226,242,4 1,183,6 194,251,2 30,248,3 2", "5,274,1 10,133,4 74,90,4 43,269,3 158,205,9 131,23", "7,9 93,259,4 79,167,3 280,295,8 21,126,6 184,234,9", " 93,205,7 23,38,7 75,298,4 37,154,8 96,263,8 201,2", "17,1 202,278,7 111,186,3 253,283,6 23,239,8 4,145,", "5 50,227,1 111,290,4 6,10,7 226,278,4 218,285,8 6,", "190,5 11,70,8 130,250,3 93,298,8 121,173,2 33,127,", "1 192,282,8 71,191,8 43,53,9 183,250,1 187,233,8 1", "97,279,4 138,280,2 134,159,6 128,175,3 3,241,2 125", ",281,2 130,176,3 148,241,4 0,158,4 0,210,1 116,163", ",2 124,256,2 13,136,9 25,285,5 110,227,8 60,68,9 7", "0,118,5 151,248,1 81,199,7 166,289,5 38,172,1 49,1", "86,7 135,178,4 47,178,2 82,181,5 53,177,2 73,227,2"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 400;
    vector<string> roads = {"59,393,7 99,250,7 21,166,1 80,250,9 73,97,2 161,36", "0,1 312,385,7 160,326,4 99,336,3 15,133,8 6,80,1 8", "4,107,6 55,264,3 92,351,5 251,285,7 215,257,1 2,1", "73,4 136,255,6 27,358,9 94,148,2 132,263,2 272,328", ",9 10,189,7 116,238,6 43,164,5 112,395,2 260,321,9", " 165,375,9 13,299,1 186,216,7 73,199,4 117,122,4 3", "9,347,7 199,292,6 99,379,8 169,192,1 231,308,2 1,5", "0,8 136,211,6 160,211,1 6,303,7 36,57,6 85,387,5 1", "94,356,4 192,381,5 55,108,7 52,144,7 82,291,2 160,", "365,1 27,40,4 111,313,1 149,204,1 20,335,8 104,138", ",5 28,215,5 62,112,5 353,363,2 217,302,8 122,260,1", " 119,267,7 36,361,2 91,136,4 151,235,3 230,325,6 1", "28,146,8 80,286,9 129,280,9 65,262,5 232,303,2 185", ",338,7 239,345,1 51,111,7 25,271,1 103,361,7 96,39", "8,4 32,390,7 11,32,4 31,387,2 199,237,3 11,164,9 1", "76,271,3 46,243,8 188,243,1 10,87,8 43,247,3 253,3", "83,1 14,140,7 207,262,3 316,379,2 195,360,3 50,362", ",7 153,288,6 204,324,9 82,160,8 73,162,3 75,171,8 ", "159,366,2 87,92,1 126,188,4 73,245,1 30,159,1 33,3", "55,9 10,321,6 77,97,6 184,392,1 97,214,5 201,269,8", " 234,265,2 193,398,5 10,358,2 9,15,3 78,174,5 207,", "254,3 1,131,3 84,398,5 18,299,8 18,205,6 45,242,2 ", "147,282,8 29,62,9 152,174,1 3,87,2 87,311,6 131,35", "4,3 241,268,1 104,153,4 228,311,4 267,307,8 318,38", "9,5 142,208,9 152,256,4 23,369,8 83,194,8 281,288,", "4 147,319,5 150,235,1 176,312,9 7,96,2 341,396,4 2", "65,344,6 326,343,7 70,111,7 44,136,1 366,372,8 0,2", "91,6 154,397,7 167,334,2 168,245,6 271,294,8 71,20", "7,8 8,263,3 145,170,4 73,95,4 125,186,4 67,251,3 4", "8,233,6 326,386,1 184,332,3 85,156,6 71,305,5 184,", "387,9 254,374,2 28,51,9 303,348,2 310,380,8 52,278", ",3 38,56,7 151,240,3 99,173,6 130,205,8 95,387,1", " 38,337,3 10,316,6 22,94,6 77,129,1 116,170,2 117,", "277,2 312,343,6 237,370,4 81,101,8 46,135,7 188,32", "5,4 58,132,7 166,339,6 176,349,9 192,296,2 134,394", ",7 252,397,1 299,374,1 77,141,4 229,386,5 69,187,4", " 43,119,3 184,186,5 246,313,1 222,242,5 98,132,2 1", "94,351,5 18,399,2 134,328,3 21,244,4 105,282,6 ", "213,359,4 103,375,8 170,381,2 143,269,2 159,227,4 ", "50,335,6 268,392,7 1,180,4 29,158,6 111,197,9 193,", "306,8 12,383,5 0,235,7 49,57,9 64,120,8 182,285,3 ", "12,342,7 213,266,3 70,319,4 101,273,9 101,125,8 16", "1,273,4 101,336,2 127,385,7 73,159,3 27,164,3 26,7", "8,8 146,391,9 146,286,4 181,392,8 4,256,3 4,169,4 ", "94,249,6 44,301,1 151,221,8 177,191,3 126,362,5 28", "4,364,9 111,142,5 173,293,2 236,264,3 17,38,7 94,1", "67,7 62,130,9 97,219,5 20,80,6 124,213,8 148,206,2", " 44,146,3 111,173,3 24,284,5 203,219,6 227,329,8 1", "63,314,1 78,107,6 10,109,1 105,320,3 28,340,1 0,88", ",8 235,331,4 315,394,1 44,52,3 228,397,4 172,217,9"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 1000;
    vector<string> roads = {"18,937,8 54,654,7 436,729,2 215,850,6 227,739,5 89", "8,936,8 55,649,5 342,427,6 98,156,9 34,282,6 48,14", "5,7 244,581,8 435,907,6 244,449,2 332,587,4 582,63", "1,1 811,953,8 604,704,8 321,694,5 443,533,4 240,27", "9,2 441,684,7 180,691,2 351,858,4 606,659,7 289,54", "3,3 975,977,1 90,842,7 439,907,1 490,580,4 300,411", ",4 226,822,1 288,389,5 659,953,6 366,383,9 253,753", ",6 513,600,2 207,498,9 726,747,6 667,805,5 588,710", ",5 533,652,1 432,671,3 650,696,3 264,653,3 516,947", ",3 19,642,8 287,746,2 230,640,6 227,770,6 205,720,", "6 913,998,9 218,450,4 266,943,5 431,935,8 694,931,", "4 199,914,5 834,934,3 171,307,1 209,296,8 829,917,", "9 69,372,4 226,734,4 48,250,4 35,409,4 446,476,8 5", "96,837,6 102,614,8 104,150,2 515,873,3 239,710,2 3", "94,599,3 164,936,6 539,831,6 893,905,2 386,861,8 5", "62,822,1 24,589,3 44,453,5 472,759,9 320,916,6 175", ",936,2 498,956,4 615,978,4 21,540,6 139,309,3 520,", "850,4 420,668,5 658,851,5 5,623,2 92,284,2 510,956", ",9 261,746,9 526,814,2 133,456,3 381,549,9 751,811", ",9 249,570,3 580,908,1 376,505,9 341,843,7 533,627", ",3 27,290,1 780,795,3 544,682,2 825,961,9 647,779,", "1 436,639,9 558,572,1 147,898,2 274,767,5 703,734,", "5 144,887,5 515,528,8 401,934,9 44,993,1 485,602,9", " 270,656,6 14,541,1 290,534,3 494,961,7 560,875,4 ", "497,688,8 33,249,4 413,655,3 728,934,8 254,800,8 9", "2,452,2 344,799,4 843,865,1 51,495,7 208,482,5 26,", "47,5 207,752,5 353,672,4 26,451,3 74,438,5 533,702", ",3 88,821,8 562,653,6 128,688,7 610,691,1 258,437,", "6 634,789,7 288,644,7 298,412,4 631,722,4 384,759,", "4 436,900,2 301,978,5 489,746,5 234,675,9 314,327,", "9 284,303,9 485,744,8 158,881,2 414,732,7 301,443,", "4 476,877,6 126,878,1 154,684,7 528,807,7 367,801,", "2 631,910,7 487,610,5 227,462,8 554,751,2 167,838,", "5 145,376,6 367,668,8 365,658,7 442,664,8 380,737,", "5 577,583,1 689,711,5 488,849,9 104,481,1 115,905,", "6 123,957,1 266,753,1 43,330,1 299,832,7 335,733,6", " 120,400,8 354,377,3 113,786,1 59,517,1 87,789,1 4", "10,863,7 489,835,8 103,958,5 432,537,3 347,756,8 5", "5,105,2 489,529,9 286,762,1 586,745,6 306,917,7 57", "5,771,1 685,900,1 131,814,1 832,978,7 589,736,7 19", "1,848,8 624,689,1 329,527,8 370,385,5 498,597,1 51", ",933,1 564,853,9 125,314,2 37,762,9 20,247,3 141,9", "95,4 255,629,6 213,916,8 447,654,1 391,419,9 451,5", "49,3 457,941,5 195,608,5 346,934,4 160,697,3 104,3", "75,5 177,634,3 347,716,9 36,268,1 303,807,5 219,43", "9,8 127,978,3 0,331,1 41,449,4 386,867,9 61,576,8 ", "159,597,5 665,972,9 96,497,7 523,538,4 23,583,3 46", "1,491,8 385,769,1 477,789,4 95,425,8 345,422,2", " 318,907,3 145,913,8 852,994,6 202,301,1 147,595,6", " 583,703,5 592,652,5 181,677,2 176,526,8 292,348,5"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 2;
    vector<string> roads = {"0,1,415", "6053"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 4156053;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 3;
    vector<string> roads = {"0", ",1", ",", "3", "434", "72", "2"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 5;
    vector<string> roads = {"0,2,374971"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 10;
    vector<string> roads = {"3,8,", "9601122"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 25;
    vector<string> roads = {"9,10", ",4716100"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 150;
    vector<string> roads = {"117", ",1", "3", "8", ",", "116", "05", "1", "7"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 200;
    vector<string> roads = {"1", "5", "5,", "1", "6", "9", ",", "51", "3", "1", "8", "2", "4"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 300;
    vector<string> roads = {"2", "1,", "2", "5", "8", ",", "5", "6", "5", "5", "4", "02"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 400;
    vector<string> roads = {"126,", "2", "2", "3,", "739", "237", "8"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 1000;
    vector<string> roads = {"22", "6,56", "2,3", "4130", "51"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 2;
    vector<string> roads = {"0,1,7042786"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 7042786;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 3;
    vector<string> roads = {"1,2", ",1", "3", "615", "94 0,2", ",789", "906", "0 0,", "1,7", "753", "665"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 9115259;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 5;
    vector<string> roads = {"1,4,5", "991", "448", " 0,4,6", "2", "5", "7049", " ", "0,", "2,7", "70", "58", "54 3,", "4", ",5", "44", "804", "2"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 25402393;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 10;
    vector<string> roads = {"7,", "9", ",6", "4", "9", "6", "8", "1", "1", " ", "1", ",", "9", ",", "9", "7", "1", "4", "4", "3", "3 ", "0", ",", "3", ",", "4", "0", "3", "2", "4", "6", "0", " ", "3", ",", "6", ",", "9", "0", "0", "4", "6", "5", "1"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 25;
    vector<string> roads = {"9", ",", "21", ",9", "10", "9", "3", "7", "9", " 1", "2", ",", "1", "8", ",", "8", "6", "8", "4", "9", "0", "9", " ", "2", ",", "7", ",", "5", "0", "7", "0", "2", "1", "8"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 150;
    vector<string> roads = {"9", "1", ",", "1", "0", "2", ",", "2", "74", "1", "662", " ", "102,", "1", "1", "8", ",", "9", "056", "4", "7", "0", " ", "5", "1", ",", "1", "0", "1,", "43", "67", "39", "2"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 200;
    vector<string> roads = {"4", ",", "1", "49,", "4", "9", "64", "6", "0", "3", " ", "10", "7", ",", "1", "1", "1,9", "9", "2", "9", "8", "8", "8", " ", "1", "46", ",", "19", "5", ",", "9", "54", "5", "5", "6", "0"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 300;
    vector<string> roads = {"6", "4", ",", "9", "2", ",", "9", "2", "8", "7", "3", "5", "0", " ", "2", "8", ",", "1", "7", "8", ",", "8", "9", "8", "3", "2", "5", " ", "1", "3", "3", ",", "2", "5", "1", ",", "7", "7", "1", "9", "7", "0", "6"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 400;
    vector<string> roads = {"1", "3", "5", ",", "1", "8", "0,2", "39", "3", "4", "8", "2 ", "1", "5", "7,", "2", "5", "2", ",", "14", "9", "51", "5", "7", " ", "1", "8", "3,", "2", "66", ",", "2", "6", "8", "0", "0", "88"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 1000;
    vector<string> roads = {"233,50", "1,6", "84", "2242 ", "10,2", "69,68", "09", "569 40,", "589,7", "464414"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 2;
    vector<string> roads = {"0", ",1", ",", "5", "9", "9", "7", "7", "3", "4"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 5997734;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 3;
    vector<string> roads = {"0", ",1", ",", "9", "2", "9", "28", "8", "0", " 0", ",", "2", ",", "4", "81", "9", "4", "8", "7", " 1", ",", "2", ",", "6", "3", "8", "2", "0", "0"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 5457687;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 5;
    vector<string> roads = {"2,3,4", "751", "199", " 0,", "1,308", "4", "92", "2 1", ",", "4,18", "95", "684", " ", "0,4,", "265", "23", "8", "8 0", ",3", ",7", "0813", "83 0", ",2", ",", "28", "00503", " 1,3", ",541", "9188 ", "3,4,9", "28", "3620", " 1", ",2", ",48", "654", "05", " 2,4", ",", "473", "16", "73"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 12099774;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 10;
    vector<string> roads = {"3,9,9798072 1,3", ",1240118 3,4,6467255 5", ",6,771257 0,1,5105048 7", ",8,9071960 6,9,9777", "843 2,7,2175037 0,2,2", "290839 2,5,5421648 ", "1,2,3178493 0,8,540456 2,3,", "9084768 3,5,762", "1788 1,7,3549424 4,", "5,7677666 0,5,5856707 ", "2,9,6125675 3,7,307", "861 2,6,1516505 5,9,777917", "5 2,4,19", "16607 1,4,2610022 3,6,5", "232355 4,8,6878282 4", ",7,1279878 1,8,135562", "7 0,4,479955 4,9,217", "8193 0,7,9314252 5,8,49", "44121 7,9,7900558 0,3", ",8512879 0,6,6559630 6,", "7,504906 6,8,44780", "92 4,6,4635137 ", "3,8,769160 5,7,1518", "079 1,5,8407166", " 1,6,567596 ", "8,9,754067", "6 0,9,6709863 2,8,6", "354799 1,9,5717687"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 7635889;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 25;
    vector<string> roads = {"9,20,5561137 1,11,94842", "99 4,18,5153110 2,21,2899313 5,", "15,6357436 6,20,1205445 8,17,", "7959841 11,24,6856494 0,24,", "5300744 11,15,9211021 4,20,8231790 ", "0,2,7515886 12,22,2810990 21,24", ",8085274 10,22,8900848 1,19,3170233", " 2,7,186396 6,16,2693035 3,12,9145", "45 7,21,4297154 4,12", ",3183139 12,19,5755037 1,5,4", "938417 2,10,9773973 7,12,4688968", " 17,19,4038986 5,18,1351918 13,16,18", "6093 7,20,3093451 5,21,927", "6120 14,17,7888314 20,24", ",4127311 18,19,2998000 5", ",16,8784422 11,14,395893", "9 3,22,5746441 15,23,9024", "902 13,18,8392447 11,21,3678503 15,24,84", "90294 9,23,9077850 0,1,6720", "253 9,24,7179915 3,19,44462", "74 6,12,966519 7,18,99825", "11 2,8,8664733 3,20,6898385 5,", "8,3458560 23,24,8537333 13,19,507", "2041 17,22,3430002 6,", "21,4009747 3,15,2391517 1", "5,19,2260952 14,21,7541049 9,16,88", "1519 0,12,1204039 2,20,3497750 0,1", "5,9048438 19,22,2580268 6,18", ",5450875 2,4,4695041 13,17,25", "47531 3,21,3465694 18,21,175710 9,13,67", "48912 9,17,146460 8,23,3697324 2,", "23,8823174 2,19,4783251 11,17", ",7637332 9,10,6667695 8,13,74525 2,18", ",6748611 16,24,3163645"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 50635732;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 150;
    vector<string> roads = {"30,109,190932 105,123,7864794", " 34,91,7950588 75,80,65", "46905 57,118,7798373 32", ",74,8467408 87,96,8266898 51,", "86,6400420 14,106,196942 10,69,", "431635 111,149,1787407 38,96,66513", "1 9,134,8808430 130,140,34", "85682 106,127,6206691 53,92,", "5858898 88,142,8644557 85", ",144,9751709 109,126,9351403 ", "47,106,3446583 63,116,3243", "734 116,140,8783159 87,102,4005774 1", "6,100,6230109 55,124,7224824", " 25,46,3419830 47,51,6", "448082 84,135,4", "232273 39,134,2814060 68,145,81", "83250 51,80,3438548 12,4", "4,3255689 124,133,4820012", " 36,44,389563 46,85,3370964 122,12", "3,2907289 25,103,5805270 2,70,7", "418903 80,126,5147654 114,1", "48,4944925 0,48,3662573 24,67,438", "9846 2,114,8552222 30,112,272537", "9 30,41,8318911 30,89,58041", "74 59,131,1751472 88,93,5965", "863 23,91,8874636 4", "2,50,626102 14,60,7848967 7", "9,115,6118652 17,78,31514", "83 23,129,931602 14,95,5557", "599 23,29,9035319 12,51,5317", "037 33,49,6575569 9,121,735247", "3 102,135,5146377 18,133,4", "22403 63,81,2244914 107,141,", "342355 57,123,6", "068175 2,104,6150681 25,28", ",5693974 87,98,4358755 ", "62,93,5684101 68,83,5694334"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 200;
    vector<string> roads = {"50,113,9428602 130,187,1", "572515 118,141,6269762 154,", "181,4738712 168,186", ",6245118 173,183,24", "35324 97,178,113338 106,113,9251330 140", ",172,6792885 164,176,808006", "5 34,191,1675856 12,86,63522", "08 167,170,6321854 54,135,46", "57471 103,199,", "1467161 19,118,2324321 70,", "164,7414643 68", ",198,9037951 76,110,1062351 8,50,", "576176 87,153,3628799 105,1", "42,2920558 62,177,7878281 64,", "181,5385978 13,24,5749744 47,156", ",8368183 69,95,6379517 39,8", "6,8046829 66,148,811202", "9 1,39,8877673 106,137,3385429 12,9", "4,7513300 156,167,172409", "6 80,148,6568378 44,85,48998", "66 35,113,2533531 1", "26,145,5044728 119,125,1", "27057 162,197,1067445 ", "117,193,4730026 32,80,76445", "14 65,122,2065103 66,88,83", "51061 13,92,301974 9", "1,134,9320884 27,18", "5,5858602 21,91", ",828707 103,126,1487678 8", "7,146,1217417 31,162,85", "87667 66,81,6648281 143,156,4", "677936 44,150,1013131 34,170,507", "0342 70,198,615289", "3 13,134,4703330 97,185,7384", "957 66,163,124494 60,118,478", "178 38,122,8238581 80,125,161", "4443 15,171,9056356 43,15", "5,8274430 33,91,585554", "1 82,193,9083236 78,175,2", "406839 150,181,493640"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 300;
    vector<string> roads = {"32,85,793947 245,281,8519823 10", "1,220,3972458 117,299,9499658 4,43,45857", "18 91,291,1269298 41,292,2770656 167", ",266,6822805 186,201,5975612 33,136,2", "400987 68,187,958184 161,299,5803373 13,227,654015", "4 227,266,6817541 116,230,9898458 125,", "166,4812674 21,46,5124236 62,134,87", "87462 208,212,9118079 34,219,661", "6361 43,102,7257480 242,279,1229511 240,276,56", "25678 178,215,8027734 252,261,1439311 17,74,9297", "087 10,243,3588320 154,207,9486201 254,261,73076", "58 43,283,3227640 24,88,6118289 126,26", "2,1165857 167,287,5362248 94,160,9935472 48,16", "0,2656519 98,119,7587324 239,264,2602289 171,", "266,51555 60,99,7343621 296,297,1752880 46,2", "63,4322779 77,246,4071243 138,207,6846767 15,23", "9,51126 77,229,37105 271,296,9", "363121 53,255,7748144 127,229,7289374 81,217,540", "7293 120,241,9011111 113,187,4188048 7", "8,270,8465011 129,182,4072297 85,17", "7,9663748 9,206,1476431 219,267,26051", "37 9,222,5688829 52,287,681640 44", ",105,4096841 157,191,8325756 68,", "277,6051325 178,189,5389127 110,111,896510 85,166,", "5660374 192,240,1536937"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 400;
    vector<string> roads = {"42,136,7983599 279,327,", "8723052 73,116,4568390 ", "28,29,1272420 135,332,7507672", " 101,374,4753974 0,3", "74,2255354 94,112,650704", " 177,335,1372234 ", "227,335,9068071 20,374,232", "2049 71,302,3992388 16,21,", "3510805 9,330,8114999 2", "85,370,3104082 65,316,1310538", " 134,142,8835769 83,267,51", "51111 204,227,5676691 108,180", ",9415367 63,70,6287766 ", "145,193,7855431 296,324,114921", "8 65,305,2409781 54,90,4", "698388 99,290,5426237 213,25", "8,7502186 347,377,4200", "823 98,324,6055749 305", ",392,3060661 163,394,9103", "235 289,330,693650 288,", "352,3917535 90,312,6250", "837 285,306,8343965 87,150,628", "5735 39,342,2705574 20,", "249,492728 196,227,9", "493094 106,269,5489104 297,343,4", "223991 3,94,9848504 15,19", "7,3588683 188,264,4178138 54,129", ",8538890 268,388,33811", "63 266,330,3783415 220,353,2310354 ", "200,233,8926409 118,305,49", "97000 3,79,8109115 60,257,64", "24583 0,372,6386218 21", "4,349,984202 323,384,38", "76647 143,343,3870555 6", "4,368,6846230 36,379,1628", "893 88,121,93576 51,324", ",7989914 148,153,7037776 7,", "303,9212650 269,357,8014977 2", "09,393,5168331 149,332,2744577"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 1000;
    vector<string> roads = {"455,532,414", "0979 359,786,6173426 633,674,28711", "22 181,493,5735551 23,399,8", "553956 179,549,176", "7877 240,781,3493495 ", "76,583,5118017 134,861,34", "69503 3,196,9002582 649,", "764,4900418 540,660", ",7922452 719,988,625961", "3 435,819,8921867 270", ",318,5166022 446,747,837", "6392 111,719,7616635", " 238,603,823970", "6 421,508,866054", "5 520,697,8780385 81", "6,911,9517988 119,17", "8,3527592 317,969", ",8544067 254,343,906672", "2 419,883,5647305 398,868", ",8580625 288,451,9177072 ", "363,990,55", "89871 136,839,83", "30128 948,976,7180772 300,4", "98,3921899 79,948,36", "47646 282,707,9411912 26,179,18", "38070 426,447,9910", "496 443,906,6344", "31 707,961,2860956 7", "54,998,1148386 289,710", ",6011905 490,976,3379054 ", "647,657,579812", " 670,862,9521743 309,42", "6,3862194 706,796", ",2945746 356,666,3", "161933 259,932", ",2161583 28,249,1", "894080 268,765,", "8513167 320,532,157144", "7 682,718,8309881 432,", "725,2251574 401,891,91157", "93 541,738,3147836 159,6", "05,4388839 150,368,6503757 852,", "952,5223208 215,602,3", "304302 333,557,79942", "33 263,835,9498594", " 21,861,8651829 224,582,3", "503487 157,249,531382", "8 147,659,5201399"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 2;
    vector<string> roads = {"0,1", ",624", "8697"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 6248697;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 3;
    vector<string> roads = {"0,2,3", "727", "669 ", "0,1,", "553", "3", "843 ", "1,2,", "872", "6403"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 9261512;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 5;
    vector<string> roads = {"2,3,138", "915 ", "1,", "4,535", "8141 0,1,45", "23634", " 2,4,", "831351", "1 0,4,26", "4993 0,3,67000", "59 1", ",2,118697", "6 ", "1,3,7944", "242 3,4", ",2591", "349 ", "0,2", ",465", "0130"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 4182233;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 10;
    vector<string> roads = {"6,9,7449897 4,8,6760480", " 1,7,5142232 2,5,53", "53106 4,7,80079", "64 8,9,615681 2,6", ",5730059 1,5,951272", " 3,5,1957131 0,5,23174", "30 3,4,8847567 2,7", ",9840806 7,9,839924 0,3,", "5962310 5,9,", "9958885 3,6,5066537 ", "2,3,9919657 0,", "9,3022088 5,6,2639002 ", "1,4,7208270 3,9,59", "90938 0,2,8726061 1,3,9", "3854 3,8,2117439 1,2,76", "3167 0,6,3100851 4", ",6,3507272 4,9,328600 ", "2,8,3412514 2,4,921510 ", "2,9,8124706 5,7,", "5195543 6,8,9949677 0,7", ",7497719 ", "0,4,1519448 4,5,8436932 ", "1,9,1647607 6,7,1707", "234 0,8,6414181 5,8", ",9588498 7,8,5782", "809 0,1,8330532 1", ",8,6798486 1,6,67", "91716 3,7,2482348"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 7740690;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 25;
    vector<string> roads = {"3,19,1618927 5,7,9618052 7,23,4583332 8,12,4919171", " 5,24,2604127 0,15,8501704 13,18,639228 14,24,6972", "538 13,24,4322089 4,21,8890717 1,9,6447268 10,24,7", "241529 0,24,1029400 9,15,4166554 13,14,4598907 4,1", "7,9996883 3,22,143899 1,21,8352476 13,19,9888208 4", ",22,2685397 16,23,7418280 17,19,6393881 5,22,49487", "00 18,22,989474 17,23,648495 14,18,9842650 7,13,48", "66143 20,23,6130746 0,6,7730261 6,11,2927752 5,23,", "2317494 2,7,5204078 6,12,7256082 1,8,7550436 18,19", ",9825769 2,19,2129835 4,19,3587 9,20,7800427 5,13,", "13353 10,15,2520046 6,22,4285987 0,12,1427602 15,1", "8,7464598 6,14,297917 4,7,9842518 4,11,583453 8,23", ",2504630 1,15,2375743 9,22,3624148 3,9,7839655 12,", "15,428394 0,17,7395650 10,20,3885300 4,16,5208152 ", "8,13,3481477 13,16,1459732 11,21,2994818 17,24,206", "4639 9,18,8745951 11,15,3374893 1,16,477410 15,17,", "9167654 7,8,6374651 15,20,9876963 5,19,5807370 5,1", "7,8842787 9,17,5979113 10,16,5488274 3,7,8593275 1", ",17,2189146 7,24,6505389 9,14,7927750 5,16,1858060", " 21,23,4451625 12,24,1996041 17,22,7133056 2,8,425", "0950 13,20,9936844 12,22,2938866 2,9,5217631 16,21", ",9755097 12,13,8422164 6,23,18179 0,3,4680618 7,20", ",4557761 13,17,9804567 4,12,8781607 0,4,976619 1,2", "4,4198148 0,8,4223690 3,10,6757788 10,11,7786760 1", "5,16,5518718 5,14,3557083 22,24,4079655 0,10,54872", "62 11,20,6344992 9,11,6643571 3,5,1725261 14,19,34", "897 13,23,7522574 3,21,4045103 12,14,5440532 20,21", ",7571349 0,9,4562826 16,20,9602891 11,24,5576538 0", ",18,3557490 3,13,9118229 14,17,9221935 8,19,514776", "6 17,21,5693141 12,18,5055476 0,13,2607158 16,22,5", "711432 6,16,2797632 4,6,768173 7,9,8114727 15,21,1", "408334 5,11,2912346 5,6,9534755 3,15,9592197 0,1,9", "863954 8,17,5104155 18,21,8050430 12,20,9255357 0,", "22,4448073 11,17,895802 12,23,7966717 1,22,860934", "5 1,19,2285035 6,18,8216870 5,18,3268709 7,17,7281", "595 10,12,3108400 4,14,1505430 4,15,5419558 10,17,", "4717779 14,23,4914591 16,24,1662943 2,17,7849845 2", ",24,175029 9,12,3623307 8,20,1273781 0,16,2619921 ", "2,21,2505300 2,20,8712645 10,14,10354 1,14,1492838", " 11,12,3791131 3,23,1336857 9,16,8341318 11,19,641", "7521 8,9,9041751 2,6,2178709 4,24,9888797 6,20,459", "739 2,23,4025806 17,18,9044276 16,19,6619059 9,23,", "9145260 8,21,2235828 1,10,9030079 6,10,4024266 3,2", "0,1382694 3,4,6553516 0,2,4704175 2,10,6413221 1,1", "2,7328085 8,16,9100240 4,18,4181761 15,23,2446274 ", "5,21,2992895 11,22,6782538 8,10,6645756 1,20,76592", "23 20,24,5987318 6,24,4260455 2,5,2473524 2,13,775", "0615 10,19,5593693 14,16,3426000 3,18,6875212 2,15", ",9395402 15,24,5402751 0,11,587447 0,20,2522802 11", ",23,651637 7,10,3152826 6,13,2430315 13,22,7000871"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 20222694;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 150;
    vector<string> roads = {"35,54,9963636 107,112,4125184 33,107,6765442 22,", "132,3198810 12,112,8969809 30,67,9562509 67,88,466", "7553 111,118,3594186 52,66,6825389 37,75,6035932 7", "3,95,5626668 62,118,3746223 3,120,8176194 81,129,6", "312887 5,122,2930741 60,105,153726 56,116,3676325 ", "121,137,7221866 106,125,6249328 70,120,4494570 93,", "123,1303810 128,140,8545603 44,143,4574226 76,82,4", "571477 24,82,1838016 76,117,6319464 44,98,8340501 ", "0,25,4535411 27,131,5235612 37,139,741628 129,134,", "9439536 120,146,3068772 91,96,3577509 13,68,538489", "7 71,138,9620810 18,149,1353714 55,83,7777967 76,1", "23,7739044 8,142,8657683 94,99,1565740 36,132,5367", "904 19,84,5515914 41,51,8767995 75,102,8954029 4,4", "0,5268688 35,102,3168826 19,45,688200 42,97,569462", "5 10,111,9921398 78,89,9129188 46,90,1318668 83,14", "4,9949788 33,63,1346370 62,123,9801440 79,147,9551", "710 112,121,4266943 29,138,2818047 15,114,5256959 ", "11,71,8816805 20,41,1227387 52,84,1016567 23,113,5", "187792 64,129,6409784 83,121,2222980 74,78,7426778", " 130,145,7919898 34,121,5468907 86,149,7589182 53,", "70,6290675 30,68,9693203 13,80,5167394 52,75,61393", "48 42,59,4405115 57,107,3773006 43,46,221235 18,27", ",8874746 61,73,4317196 125,141,2024414 20,48,71032", "74 1,121,6944073 1,87,6578391 22,33,9424607 9,97,9", "781807 3,148,888335 25,39,3895984 83,100,7589688 1", "03,126,1275019 6,65,7926297 47,126,7198443 79,145,", "1310382 43,79,5415380 21,119,3327241 7,135,5669742", " 63,69,7565847 64,103,9662468 74,92,3694291 70,102", ",7698827 98,134,2054282 136,139,6724297 2,7,481507", "7 79,118,6582674 10,80,3105997 60,77,3226919 0,36,", "1467383 81,142,4196895 15,31,5824192 73,110,200360", "4 50,106,9068786 40,109,9999897 61,67,2907821 65,1", "17,2885280 38,58,1481209 59,88,5296144 12,135,1313", "658 10,140,8518208 101,108,8533448 17,19,4553326 5", "1,86,8326401 76,103,3655724 85,138,7243774 28,80,6", "028759 53,123,2246053 27,53,204598 25,49,8612043 1", "01,132,6318134 58,102,1172821 38,118,3671243 88,12", "4,1095370 53,58,3362586 34,125,6264177 24,77,195", "1765 5,128,2509518 103,133,5197650 22,115,3318606 ", "109,121,4818726 17,137,1285956 34,94,8293348 23,14", "8,8189834 26,145,6860695 16,37,5598989 56,142,", "4405139 46,92,8173273 137,146,4678411 24,124,14080", "57 42,96,7181251 86,108,4181896 96,132,6736541 55,", "102,6414454 104,109,5470726 100,111,136326 59,128,", "501988 82,134,8698348 104,121,9852197 14,55,123379", "6 41,42,8348061 27,128,9689331 32,111,2400862 44,1", "14,6111387 23,25,282213 91,118,7858775 124,130,534", "3410 133,146,1941480 35,142,7673840 99,107,215782 ", "45,127,9079526 35,124,2496711 98,148,3921853 5,140", ",3594315 13,29,4610618 56,72,8468377 84,119,671697"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 702301149;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 200;
    vector<string> roads = {"123,153,396560 61,141,2226229 1,57,8637556 17,87,2", "697723 88,198,5298587 40,170,5695651 72,118,255359", "7 166,172,5536801 16,91,8985633 128,198,2042148 40", ",128,2483350 50,186,9171456 97,98,1170865 132,135,", "9375473 62,140,1149857 33,110,1197903 4,161,937167", "3 128,133,2139730 113,189,569895 125,178,7623983 5", "0,175,9965982 20,41,244734 80,110,8069147 112,190,", "1636523 56,198,2328580 15,57,1527754 25,176,912710", "8 156,185,4908460 72,167,6086693 85,155,9629028 46", ",139,5754170 42,100,8773320 169,183,6234514 32,48,", "5119276 19,49,9049491 45,55,8877331 19,48,8798413 ", "62,155,6764927 92,125,2970069 10,102,4243821 21,11", "9,5237028 61,69,2141848 60,148,9355993 154,194,274", "9322 5,141,4290782 85,164,6619361 0,140,7236533 13", ",189,808034 18,173,4410409 87,195,7986066 21,42,55", "43272 95,127,8898403 175,196,6299452 78,121,127654", "6 128,130,4369442 63,133,9310405 54,109,1706611 14", ",124,3657832 55,151,2511006 9,89,3583678 149,161,1", "297490 129,192,6201198 18,80,9267490 59,72,1584942", " 169,177,9324004 13,55,880865 5,150,1502944 72,181", ",3585988 97,134,1583593 111,143,3710976 143,167,90", "80558 37,78,1882668 49,97,3282027 39,113,5833941 1", "1,32,5445829 96,149,2470020 86,96,6321029 1,27,916", "7442 59,127,9928874 15,184,2435456 92,103,556518 8", "1,149,4270949 154,180,7796359 5,127,9834518 28,48,", "9733747 44,150,1130900 20,145,3262802 61,142,77509", "80 20,49,8549274 84,139,5407757 58,135,5088575 88,", "105,9156937 36,194,791053 10,77,8070688 55,186,177", "9283 15,74,4550772 112,131,7704036 143,190,9656915", " 104,178,3244061 102,188,3182194 113,137,3945147 1", "1,91,9186535 93,132,2075127 174,189,7760575 91,192", ",4188523 89,106,1124516 132,176,2806810 70,164,364", "7350 4,175,2000820 16,158,810916 23,56,6383567 3,1", "6,3650006 74,97,2536943 7,144,779828 78,89,6589105", " 46,154,689798 29,65,183793 8,133,5924279 148,175,", "1756564 58,180,5086383 99,152,1673042 7,156,422280", "6 175,187,307760 24,183,4403335 16,183,9826870 81,", "152,5806876 24,120,2630773 29,78,9830902 37,80,676", "5290 3,31,2421258 69,71,4035285 131,171,8653946 97", ",167,7724952 81,188,338285 58,179,4911929 126,190,", "2177206 73,146,8105204 108,128,3273982 123,187,328", "0684 6,166,9428494 138,197,8133178 97,107,5193396 ", "25,94,359651 11,197,6467699 1,159,8835168 12,70,94", "69080 101,168,817346 59,79,3570446 56,90,4018831 6", "6,110,1788746 30,196,3989080 141,144,6484737 6", "5,114,8961645 54,65,8935341 53,93,7442220 40,116,8", "659691 110,135,9631077 18,79,2914944 14,160,991329", "2 91,148,1526318 14,132,7634939 115,150,7326976 88", ",185,9975424 17,55,3404357 39,47,5941271 178,187,2", "175139 12,187,7599211 35,68,2138652 78,101,3150745"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 300;
    vector<string> roads = {"58,131,549542 16,194,2825767 3,150,2927864 118,281", ",9639104 108,143,414658 69,265,7566824 150,254,696", "2921 86,202,6245405 135,151,9268617 29,153,949458 ", "40,261,5314048 92,190,3371102 64,244,291608 49,58,", "6076419 109,246,8812928 57,215,6756967 50,162,7058", "521 127,184,9121276 22,248,5610579 23,197,8952482 ", "21,215,5827336 7,194,4322925 126,237,1358217 76,15", "4,6798294 46,82,1408483 147,151,3983940 41,263,388", "6885 280,287,936365 207,271,4013117 36,97,1677151 ", "209,295,2036267 68,110,489350 11,50,9950076 59,187", ",6409766 40,154,6291116 195,299,6928060 46,60,2390", "604 77,192,2133930 40,286,8364844 63,197,7226 2,40", ",5467901 140,177,1328157 242,253,978561 226,284,72", "11514 180,201,3302914 17,235,2227008 87,101,740527", "4 82,109,9814386 130,294,1579901 176,199,5289283 2", "3,128,385888 58,146,1065971 130,193,8553822 143,16", "4,8814690 54,265,7161378 129,226,699089 12,103,484", "2859 8,233,2714595 21,109,6258180 180,224,1255371 ", "175,202,7550330 92,167,6965437 77,139,8259382 34,2", "52,4261961 162,193,1508452 147,213,9847864 51,294,", "2262117 13,105,2332565 111,210,9655239 140,214,443", "2222 82,276,7281702 164,181,3312092 128,289,583350", "5 227,286,5156923 35,181,7895130 10,33,7468303 122", ",224,240121 84,285,4956207 2,145,9661784 58,257,56", "64743 80,138,5445450 1,78,6873430 228,274,7497868 ", "137,211,2271573 169,179,1819748 15,215,2764861 208", ",265,6347077 156,296,1608127 53,111,1170455 38,210", ",1645673 154,291,4363436 20,77,8867736 12,190,1964", "590 110,234,681575 224,298,7694975 63,107,97681", "69 102,122,17115 160,266,9521906 37,170,7400989 52", ",206,4504837 72,221,4378852 65,140,4680618 251,253", ",5812315 216,272,6843284 78,291,9313650 32,131,410", "7183 6,259,2231046 5,24,6490184 22,109,3964272 264", ",289,578242 93,153,5953821 123,177,1718492 24,83,5", "687875 152,295,1133590 149,197,5265799 197,262,812", "4920 120,197,2675707 84,113,6738826 187,247,795671", "1 132,159,4013824 59,162,4983374 95,120,6254203 13", "2,166,3491095 80,124,9261270 140,267,684465 81,115", ",1202709 91,223,4151942 188,287,228720 41,154,7327", "739 156,295,2228552 185,203,5000414 104,228,741027", "9 20,86,1971107 58,229,4148241 96,298,4731335 186", ",292,2358114 248,277,7436491 190,248,4108742 54,25", "6,4664555 83,231,5623248 7,68,9966941 127,295,5247", "058 30,231,7680707 190,225,3953561 3,295,5383505 1", "75,236,7127194 93,238,1514756 144,181,1133984 88,1", "35,4870288 18,111,4860774 78,280,9575547 26,196,49", "71290 51,210,4071487 102,195,9635283 90,200,668587", "0 71,79,7762572 261,279,3315082 75,221,941885 49,9", "2,5716110 40,101,74026 112,115,9092374 47,274,7291", "803 153,160,7991227 106,135,9519609 14,161,5092508"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 400;
    vector<string> roads = {"110,156,5566427 248,293,1336800 46,350,7591867 198", ",293,3729863 91,187,1460708 174,191,4904835 186,32", "8,1116682 185,333,9766569 53,257,9760515 351,373,3", "804864 99,378,7526136 300,365,351024 18,78,2960347", " 0,322,9313480 42,299,6199990 23,261,9937255 132,2", "23,7554000 53,109,9167470 82,84,5769294 129,327,51", "97956 145,245,6371346 210,230,8982810 273,364,3756", "68 46,221,6810678 108,138,973466 47,94,5538636 196", ",219,3338087 76,366,4312332 29,340,8223712 40,232,", "6960213 90,245,6552152 287,360,1671905 23,125,9969", "416 232,242,6328287 57,397,6439999 50,113,7698335 ", "31,87,3661150 38,192,1672276 106,274,7802103 202,3", "37,2292569 67,80,2129456 85,291,1362153 185,237,37", "2972 22,277,7859663 305,355,1573194 209,236,299599", "6 14,214,9577761 125,156,9793651 22,166,9344826 29", "9,311,8291935 292,310,7053556 225,335,8763041 114,", "304,165531 187,215,6206412 357,363,5775175 4,116,3", "105125 90,385,7896138 81,278,399623 46,96,482338 2", "36,373,2033991 141,321,1225728 67,356,9223867 126,", "329,1981979 161,304,462989 147,192,9620236 184,295", ",5756552 86,389,1666832 11,303,721181 93,283,90190", "33 145,288,2413524 190,330,2077977 88,385,3037064 ", "182,196,4667339 32,308,8773476 42,343,4858482 13,7", "4,9328112 121,287,7925384 138,193,5330938 315,382,", "3611326 61,145,66132 202,376,5002527 41,329,839207", "2 224,295,626087 98,102,2732206 167,318,6054541 27", "7,379,3109339 56,335,7409852 116,221,3448666 160,2", "83,5566243 61,208,8212787 129,218,6861596 124,219,", "3101056 53,102,1597594 207,318,7456499 14,65,20932", "98 13,60,6170857 236,242,5579582 70,304,9485537 28", "5,321,5075426 71,285,8185646 84,343,5565125 8,246,", "6512166 259,260,7513534 123,308,6668488 37,88,4421", "594 10,167,1891145 39,138,7636466 34,212,8130049 1", "92,319,6757246 169,347,3661573 149,272,4294706 202", ",300,6227612 216,397,1484074 26,167,2974676 180,22", "1,6058334 145,148,3881612 32,209,8065307 158,386,8", "850458 172,388,5544719 4,197,1085210 87,299,206638", "9 12,110,1188779 22,382,9007045 47,116,9342363 64,", "291,6119595 185,274,8811848 17,196,4377766 35,381,", "2512550 237,318,9729624 19,279,9901830 11,370,4988", "175 297,364,8848553 138,375,7351318 167,343,686198", "8 52,187,3744586 45,269,5971483 320,350,7992544 62", ",277,4224416 20,92,5045516 137,301,889899 114,381,", "9430672 236,352,4648259 138,170,4579039 271,298,57", "8166 343,354,6766297 154,258,1615101 68,374,789828", "9 92,362,7791224 264,385,4811355 103,294,1897359 1", "32,188,6303735 133,218,963870 176,303,6170903 146,", "183,3446634 284,359,8890256 209,300,1022725 81,149", ",3497131 252,316,1252085 264,309,2012299 51,93,121", "7532 64,242,6968519 385,388,187591 265,296,7113930"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 1000;
    vector<string> roads = {"588,601,9238589 259,322,3572094 19,44,7735318 277,", "845,2460881 34,156,7200926 553,650,6045548 159,854", ",816200 536,730,7600488 657,703,8027984 406,977,58", "04652 643,918,5171922 936,944,6501820 454,533,4591", "988 460,799,1142264 75,701,4713336 173,365,3400214", " 818,932,7239079 108,199,2942095 299,557,4706053 4", "50,809,9797662 91,114,963720 93,868,4299993 171,83", "7,9084321 292,598,4115077 27,993,484069 17,861,189", "1824 685,935,3687153 561,669,2506165 591,901,80476", "13 327,484,2826076 98,907,4106354 189,592,9671039 ", "158,842,5952293 24,452,2561102 499,647,9556798 398", ",638,6156593 367,949,6091490 115,559,1776618 15", "6,174,4368137 839,991,1843512 131,513,87538 9,971,", "5580939 309,495,2571806 227,871,6891953 77,899,682", "5952 575,631,9694903 976,983,6876306 676,899,89995", "52 224,248,5455472 215,611,1554905 432,970,4168680", " 234,496,614076 214,645,9307340 267,305,3582090 13", "2,173,8909 113,286,1474396 118,689,6893184 147,770", ",4741015 401,945,9517135 671,956,3108331 566,992,3", "187864 494,821,113141 344,931,6432438 73,796,96232", "75 276,659,3104751 340,902,1871244 179,487,9081881", " 384,891,9657213 88,350,5289689 4,64,5293531 304,3", "63,7269308 618,709,3288078 228,572,9183435 788,855", ",5354567 172,194,9113174 754,786,6352473 514,950,8", "949863 349,817,4882885 319,788,1025240 20,220,8090", "945 232,469,6571214 214,982,8060490 54,460,6556519", " 441,614,8679122 93,593,9824155 218,596,540354 62,", "695,9706521 479,814,6028542 29,176,1278061 738,942", ",5951187 43,798,8056664 213,506,121344 452,550,660", "7083 426,765,5282909 843,870,1770385 214,321,56", "33762 229,512,5327631 75,401,8940071 76,983,532216", "2 157,990,1999345 594,701,4853051 587,727,1451851 ", "707,985,1467485 21,228,717919 682,810,3165719 644,", "871,2212106 272,788,1232954 8,383,1157622 207,604,", "2535460 143,219,4196460 415,844,9136423 192,930,10", "54077 259,973,6665582 137,394,3873625 240,367,1573", "902 178,677,6727318 103,768,605571 711,785,4779", "838 759,879,3081295 655,899,8216809 21,611,1077285", " 815,952,4340660 100,575,8708685 531,964,3127666 2", "72,823,8004562 211,344,8091364 8,428,1307830 416,4", "33,5027462 476,945,8325533 668,674,4883169 408,523", ",5623307 22,473,6908515 762,934,9612585 799,880,32", "22827 9,397,9724561 159,786,3048110 40,123,4541182", " 632,833,9164664 435,901,7713528 515,551,4662010 2", "62,480,8819042 825,953,702978 725,877,2387964 880,", "967,5067403 283,726,6575660 366,437,2643321 744,85", "6,2711790 35,562,3415787 177,885,6001659 895,8", "96,7385968 233,384,4250706 165,687,5292297 184,400", ",9470345 196,966,9002251 98,186,9989235 76,698,777", "2438 30,373,1099602 292,316,832542 608,999,5930014"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 174;
    vector<string> roads = {"0,125,10000000 0,48,10000000 0,84,10000000 0,51,10", "000000 0,136,10000000 0,2,10000000 0,6,10000000 0,", "10,10000000 0,150,10000000 0,128,10000000 0,3,1000", "0000 0,1,10000000 0,163,10000000 0,74,10000000 0,1", "41,10000000 0,17,10000000 0,71,10000000 0,87,10000", "000 0,42,10000000 0,79,10000000 0,78,10000000 0,15", "4,10000000 0,80,10000000 0,63,10000000 0,157,100", "00000 0,160,10000000 0,43,10000000 0,153,10000000 ", "0,121,10000000 0,156,10000000 0,39,10000000 0,159,", "10000000 0,44,10000000 0,129,10000000 0,146,1", "0000000 0,123,10000000 0,19,10000000 0,35,10000000", " 0,8,10000000 0,152,10000000 0,96,10000000 0,165,1", "0000000 0,81,10000000 0,109,10000000 0,151,1000000", "0 0,173,10000000 0,105,10000000 0,59,10000000 0,18", ",10000000 0,113,10000000 0,14,10000000 0,72,100000", "00 0,36,10000000 0,16,10000000 0,98,10000000 0,25,", "10000000 0,38,10000000 0,147,10000000 0,64,1000000", "0 0,131,10000000 0,167,10000000 0,138,10000000 0,2", "7,10000000 0,41,10000000 0,112,10000000 0,83,10000", "000 0,75,10000000 0,5,10000000 0,65,10000000 0,100", ",10000000 0,120,10000000 0,149,10000000 0,22,10000", "000 0,103,10000000 0,171,10000000 0,94,10000000 0,", "45,10000000 0,53,10000000 0,26,10000000 0,62,10000", "000 0,20,10000000 0,140,10000000 0,155,10000000 0,", "92,10000000 0,108,10000000 0,126,10000000 0,158,10", "000000 0,95,10000000 0,119,10000000 0,86,10000", "000 0,114,10000000 0,122,10000000 0,33,10000000 0,", "104,10000000 0,73,10000000 0,23,10000000 0,34,1000", "0000 0,130,10000000 0,15,10000000 0,57,10000000 0,", "29,10000000 0,115,10000000 0,9,10000000 0,91,10000", "000 0,168,10000000 0,102,10000000 0,137,10000000 0", ",49,10000000 0,144,10000000 0,142,10000000 0,132,1", "0000000 0,170,10000000 0,172,10000000 0,60,1000000", "0 0,56,10000000 0,89,10000000 0,134,10000000 0,55,", "10000000 0,118,10000000 0,111,10000000 0,67,100000", "00 0,46,10000000 0,54,10000000 0,12,10000000 0,7,1", "0000000 0,110,10000000 0,31,10000000 0,82,10000000", " 0,97,10000000 0,99,10000000 0,139,10000000 0,30,1", "0000000 0,107,10000000 0,145,10000000 0,13,1000000", "0 0,101,10000000 0,58,10000000 0,166,10000000 0,14", "3,10000000 0,85,10000000 0,162,10000000 0,66,10000", "000 0,61,10000000 0,116,10000000 0,21,10000000 0,7", "6,10000000 0,133,10000000 0,148,10000000 0,164,100", "00000 0,90,10000000 0,4,10000000 0,93,10000000 0,1", "06,10000000 0,11,10000000 0,169,10000000 0,124,100", "00000 0,77,10000000 0,50,10000000 0,24,10000000 0,", "37,10000000 0,32,10000000 0,127,10000000 0,40,1", "0000000 0,28,10000000 0,68,10000000 0,135,10000000", " 0,47,10000000 0,88,10000000 0,70,10000000 0,52,10", "000000 0,117,10000000 0,69,10000000 0,161,10000000"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1730000000;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 87;
    vector<string> roads = {"0,44,10000000 0,25,10000000 0,43,1000", "0000 0,84,10000000 0,2", "3,10000000 0,86,10000000 0,34,1", "0000000 0,48,10000000 0,74,10000", "000 0,76,10000000 0,20,10000000 0,71,", "10000000 0,15,10000000 0,11,1000", "0000 0,64,1000000", "0 0,37,10000000 0,61,1000", "0000 0,24,10000000 0,77,", "10000000 0,45,10000000 0,58,1000000", "0 0,33,10000000 0,42,1000", "0000 0,9,10000000 0,53,10", "000000 0,26,10000000", " 0,52,10000000 0,22,10000", "000 0,10,10000000 0,63,10000000 0,7,1", "0000000 0,36,10000000 0,8,10000", "000 0,46,10000000 0,51,10000", "000 0,31,10000000 0,49,1", "0000000 0,28,10000000 0,32,10", "000000 0,39,10000000 0,5,10000", "000 0,68,10000000 0,60,100", "00000 0,67,10000000 0,65,1000000", "0 0,57,10000000 0,16,1000000", "0 0,19,10000000 0,41,10000000 0,7", "2,10000000 0,62,100000", "00 0,12,10000000 0,6,10000000 0,50", ",10000000 0,3,10000000 0,14,", "10000000 0,2,10000000 0,29,1000", "0000 0,38,10000000 0,", "27,10000000 0,1,10000000 0,5", "4,10000000 0,47,10000000 0,59", ",10000000 0,85,10000000 0,82,1", "0000000 0,83,10000000 0,55,1", "0000000 0,81,10000000 0,7", "5,10000000 0,69,10000000 0,56,", "10000000 0,21,1000", "0000 0,4,10000000 0,78,100", "00000 0,18,10000000 ", "0,40,10000000 0,66,1000000", "0 0,73,10000000 0,80,10000000 ", "0,30,10000000 0,35,10000000 0,", "17,10000000 0,70,10000000 0,", "79,10000000 0,13,10000000"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 860000000;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 87;
    vector<string> roads = {"30,32,10000000 62,77,10000000 0,86,10000000 0,31,1", "0000000 0,68,10000000 0,18,10000000 47,73,10000000", " 32,47,10000000 0,85,10000000 0,77,10000000 23,67,", "10000000 2,77,10000000 6,84,10000000 0,48,10000000", " 0,64,10000000 16,58,10000000 0,19,10000000 0,12,1", "0000000 53,68,10000000 0,69,10000000 0,66,10000000", " 47,60,10000000 18,43,10000000 0,58,10000000 0,46,", "10000000 23,57,10000000 61,69,10000000 0,61,100000", "00 38,62,10000000 26,65,10000000 11,72,10000000 55", ",85,10000000 39,49,10000000 44,83,10000000 0,21,10", "000000 19,58,10000000 0,75,10000000 0,45,10000000 ", "78,80,10000000 0,5,10000000 11,78,10000000 0,74,10", "000000 0,10,10000000 0,54,10000000 0,47,10000000 0", ",11,10000000 54,76,10000000 0,55,10000000 37,80,10", "000000 0,57,10000000 84,86,10000000 14,22,10000000", " 5,39,10000000 0,36,10000000 0,4,10000000 0,43,100", "00000 43,64,10000000 29,71,10000000 30,63,10000000", " 0,50,10000000 0,17,10000000 0,3,10000000 0,9,1000", "0000 31,59,10000000 35,83,10000000 34,57,10000000 ", "26,86,10000000 13,20,10000000 66,71,10000000 10,65", ",10000000 6,73,10000000 0,41,10000000 0,32,1000000", "0 0,52,10000000 8,39,10000000 14,18,10000000 0,63,", "10000000 11,61,10000000 0,67,10000000 0,14,1000000", "0 51,76,10000000 13,24,10000000 0,42,10000000 0,28", ",10000000 43,83,10000000 44,47,10000000 52,59,1000", "0000 0,73,10000000 0,22,10000000 39,48,10000000 0,", "13,10000000 9,20,10000000 0,78,10000000 10,59,1000", "0000 0,49,10000000 28,32,10000000 0,7,10000000 0,2", "5,10000000 64,76,10000000 0,39,10000000 0,8,100000", "00 1,50,10000000 0,35,10000000 52,72,10000000 4,45", ",10000000 24,34,10000000 0,2,10000000 0,83,1000000", "0 0,84,10000000 36,60,10000000 79,80,10000000 7,70", ",10000000 0,76,10000000 0,44,10000000 25,49,100000", "00 18,33,10000000 0,71,10000000 28,57,10000000 7,3", "0,10000000 19,68,10000000 51,78,10000000 0,79,1000", "0000 0,62,10000000 0,38,10000000 61,79,10000000 1,", "55,10000000 0,15,10000000 0,80,10000000 0,81,10000", "000 0,37,10000000 0,26,10000000 13,58,10000000 0,2", "3,10000000 6,39,10000000 33,75,10000000 0,82,10000", "000 21,69,10000000 30,38,10000000 0,30,10000000 0,", "60,10000000 50,83,10000000 16,33,10000000 29,41,10", "000000 42,71,10000000 0,72,10000000 0,53,10000000 ", "0,56,10000000 13,82,10000000 0,6,10000000 0,29,100", "00000 31,73,10000000 54,85,10000000 10,67,10000000", " 6,77,10000000 0,16,10000000 0,1,10000000 0,34,100", "00000 0,20,10000000 28,63,10000000 65,82,10000000 ", "71,83,10000000 0,51,10000000 0,33,10000000 0,40,10", "000000 18,36,10000000 25,51,10000000 0,27,10000000", " 50,75,10000000 3,51,10000000 47,80,10000000 0,24,", "10000000 0,59,10000000 0,70,10000000 0,65,10000000"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 860000000;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 43;
    vector<string> roads = {"0,36,10000000 0,22,10000", "000 0,34,10000000 0,37,", "10000000 0,31,10000000 0,16,100", "00000 0,14,100000", "00 0,29,10000000 0,38,", "10000000 0,33,10000000 0", ",17,10000000 0,23,100000", "00 0,2,10000000 0,24,10000", "000 0,21,10000000 0,", "28,10000000 0,1,10000000 0,3", ",10000000 0,20,10000000 0,3", "5,10000000 0,4,10000000 0", ",15,10000000 0,11,10000000 0", ",26,10000000 0,", "30,10000000 0,42,10000000 ", "0,13,10000000 0,12,100", "00000 0,27,10000000 ", "0,25,10000000 0,10,10", "000000 0,5,10000000 0,4", "0,10000000 0,41,100", "00000 0,6,10000000 0", ",19,10000000 0,8,10000", "000 0,9,10000000 0,32,10000000", " 0,7,10000000 0,3", "9,10000000 0,18,10000000"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 420000000;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int N = 43;
    vector<string> roads = {"8,39,10000000 3,14,10000000 0,17,10000000 17,20,10", "000000 15,36,10000000 0,8,10000000 1,35,10000000", " 6,36,10000000 8,30,10000000 12,35,10000000 3,6,10", "000000 7,37,10000000 0,34,10000000 30,42,10000000 ", "6,40,10000000 26,38,10000000 0,24,10000000 24,32,1", "0000000 12,36,10000000 12,25,10000000 11,16,100000", "00 13,33,10000000 7,14,10000000 18,31,10000000 14,", "16,10000000 7,39,10000000 17,38,10000000 2,34,1000", "0000 32,36,10000000 20,31,10000000 20,34,10000000 ", "18,36,10000000 0,2,10000000 6,32,10000000 30,41,10", "000000 0,19,10000000 0,42,10000000 0,6,10000000 0,", "25,10000000 14,36,10000000 0,37,10000000 0,7,10000", "000 4,24,10000000 35,36,10000000 17,34,10000000 0,", "21,10000000 15,41,10000000 10,32,10000000 3,19,100", "00000 16,35,10000000 4,23,10000000 5,10,10000000 1", "1,37,10000000 0,16,10000000 26,32,10000000 0,14,10", "000000 13,37,10000000 9,13,10000000 5,40,10000000 ", "19,25,10000000 0,20,10000000 31,32,10000000 11,26,", "10000000 2,16,10000000 10,31,10000000 0,9,10000000", " 0,23,10000000 18,22,10000000 16,19,10000000 13,14", ",10000000 7,10,10000000 5,19,10000000 9,38,1000000", "0 0,32,10000000 25,41,10000000 2,18,10000000 0,18,", "10000000 0,40,10000000 17,24,10000000 22,27,100000", "00 6,23,10000000 15,30,10000000 3,21,1000000", "0 24,41,10000000 16,28,10000000 21,38,10000000 18,", "19,10000000 3,5,10000000 18,28,10000000 2,38,10000", "000 13,41,10000000 1,9,10000000 11,32,10000000 15,", "37,10000000 28,41,10000000 4,14,10000000 0,11,1000", "0000 0,15,10000000 6,16,10000000 31,41,10000000 7,", "18,10000000 27,38,10000000 16,21,10000000 0,4,10", "000000 7,12,10000000 20,39,10000000 2,37,10000000 ", "0,35,10000000 0,39,10000000 0,5,10000000 34,39,100", "00000 14,40,10000000 2,4,10000000 0,27,10000000 8,", "12,10000000 27,28,10000000 0,22,10000000 14,31,10", "000000 7,17,10000000 0,10,10000000 2,14,10000000 2", ",30,10000000 10,26,10000000 8,27,10000000 9,11,100", "00000 0,3,10000000 7,41,10000000 40,41,10000000 0,", "36,10000000 0,12,10000000 1,33,10000000 24,30,1000", "0000 22,37,10000000 0,29,10000000 0,1,10000000 1,1", "5,10000000 4,37,10000000 23,38,10000000 4,10,10000", "000 0,31,10000000 30,32,10000000 7,8,10000000 27,3", "7,10000000 20,38,10000000 33,40,10000000 29,36,100", "00000 4,34,10000000 2,9,10000000 8,41,10000000 0,2", "6,10000000 5,20,10000000 4,15,10000000 3,42,100000", "00 0,41,10000000 4,12,10000000 7,26,10000000 33,37", ",10000000 5,26,10000000 0,13,10000000 6,8,10000000", " 6,15,10000000 0,30,10000000 0,33,10000000 13,38,1", "0000000 0,28,10000000 14,28,10000000 8,16,10000000", " 4,16,10000000 11,21,10000000 0,38,10000000 33,41,", "10000000 11,20,10000000 2,8,10000000 8,25,10000000"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 420000000;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int N = 21;
    vector<string> roads = {"0,18,10000000 0,15,10000", "000 0,19,10000000 0,4,10000000 0,10,", "10000000 0,11,10000000 0,17,10000000 0", ",6,10000000 0,3,10000000 0,20,10", "000000 0,7,10000000 0,13,10000000 0,", "12,10000000 0,9,10000000 0,1,10000000 0", ",5,10000000 0,8,10000000 0,2,10000000 0", ",16,10000000 0,14,10000000"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 200000000;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int N = 21;
    vector<string> roads = {"5,15,10000000 11,17,10000000 3,7,10000000 10,13,10", "000000 12,20,10000000 2,19,10000000 8,19,10000000 ", "12,13,10000000 3,12,10000000 2,8,10000000 3,18,100", "00000 7,18,10000000 14,19,10000000 18,19,10000000 ", "0,3,10000000 1,2,10000000 2,14,10000000 2,10,10000", "000 6,10,10000000 17,20,10000000 2,18,10000000 0,1", ",10000000 1,19,10000000 5,12,10000000 1,4,10000000", " 2,9,10000000 6,11,10000000 10,15,10000000 4,18,10", "000000 4,14,10000000 5,8,10000000 4,19,10000000 8,", "9,10000000 8,20,10000000 11,12,10000000 8,18,1000", "0000 0,6,10000000 16,20,10000000 9,16,10000000 1,1", "2,10000000 1,14,10000000 6,7,10000000 1,7,10000000", " 9,12,10000000 11,19,10000000 0,19,10000000 9,13,1", "0000000 2,11,10000000 4,12,10000000 10,18,10000000", " 18,20,10000000 2,12,10000000 6,12,10000000 8,11,1", "0000000 2,3,10000000 0,11,10000000 7,19,10000000 5", ",18,10000000 10,16,10000000 3,20,10000000 13,19,10", "000000 3,5,10000000 1,18,10000000 4,17,10000000 2,", "15,10000000 11,13,10000000 4,20,10000000 9,19,1000", "0000 8,15,10000000 14,15,10000000 0,9,10000000 5,2", "0,10000000 3,8,10000000 12,16,10000000 0,15,100000", "00 4,15,10000000 6,14,10000000 1,3,10000000 6,13,1", "0000000 4,8,10000000 3,13,10000000 2,7,10000000 2,", "17,10000000 13,18,10000000 7,10,10000000 3,9,10000", "000 5,16,10000000 4,16,10000000 0,20,10000000 14,2", "0,10000000 1,17,10000000 10,12,10000000 16,18,1000", "0000 1,20,10000000 6,8,10000000 1,10,10000000 7,13", ",10000000 0,8,10000000 15,16,10000000 4,10,1000000", "0 1,8,10000000 6,18,10000000 0,12,10000000 0,7,100", "00000 4,11,10000000 3,10,10000000 7,8,10000000 9,1", "5,10000000 13,14,10000000 12,19,10000000 6,15,1000", "0000 3,15,10000000 7,16,10000000 0,5,10000000 12,1", "8,10000000 6,17,10000000 5,7,10000000 10,19,100000", "00 7,12,10000000 3,4,10000000 0,17,10000000 0,2,10", "000000 5,6,10000000 9,20,10000000 12,15,10000000 1", "3,16,10000000 10,20,10000000 6,20,10000000 14,18,1", "0000000 11,20,10000000 16,19,10000000 6,16,1000000", "0 2,13,10000000 19,20,10000000 17,18,10000000 3,17", ",10000000 11,16,10000000 2,6,10000000 10,11,100000", "00 8,13,10000000 5,14,10000000 3,11,10000000 1", "2,17,10000000 0,14,10000000 0,13,10000000 7,14,100", "00000 8,16,10000000 9,14,10000000 1,9,10000000 5,1", "9,10000000 2,4,10000000 4,6,10000000 14,16,1000000", "0 1,13,10000000 0,18,10000000 16,17,10000000 7,9,1", "0000000 7,17,10000000 10,17,10000000 6,19,10000000", " 15,20,10000000 9,17,10000000 5,11,10000000 4,7,10", "000000 0,16,10000000 12,14,10000000 4,13,10000000 ", "7,20,10000000 5,13,10000000 0,10,10000000 2,5,1000", "0000 8,10,10000000 5,9,10000000 0,4,10000000 8,14,", "10000000 5,17,10000000 9,18,10000000 9,11,10000000"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 200000000;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int N = 10;
    vector<string> roads = {"0,1,10000000 0,", "2,100000", "00 0,8,", "10000000 0,4", ",10000000 0,", "9,10000000 0,3,", "10000000 0,6,10000000 0,5,", "10000000 0,7,10000000"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 90000000;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int N = 10;
    vector<string> roads = {"0,6,100000", "00 2,4,10000000", " 0,4,100000", "00 2,3,10000000 0,", "8,10000000 5,9,", "10000000 0,5,10000", "000 7,8,1000", "0000 1,4,10", "000000 0,9,10", "000000 ", "3,5,1000000", "0 2,7,1000000", "0 5,7,100", "00000 0,2,10", "000000 2,9,100", "00000 1,9,10000000 ", "0,3,10000000 ", "6,9,10000000 6,", "7,10000000 2,8,", "10000000 3,", "6,10000000 0,7,10", "000000 1,6,1000000", "0 4,8,10", "000000 1,3,10", "000000 4,9,1000", "0000 1,5,10", "000000 3,4,100", "00000 4,7,", "10000000 8,9,10000000 ", "1,7,10000000 2", ",5,10000000 0,", "1,10000000 7,9", ",10000000 ", "4,6,10000000 ", "5,6,10000000 ", "4,5,10000", "000 3,8,1", "0000000 6,8,", "10000000 5,8,1", "0000000 3,7,10000", "000 1,2,100", "00000 3,9,10", "000000 2,6,100000", "00 1,8,10", "000000"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 90000000;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int N = 5;
    vector<string> roads = {"0,1,1", "00000", "00 0,2", ",10000", "000 ", "0,3,1", "0000000", " 0,4,10", "000000"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 40000000;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int N = 5;
    vector<string> roads = {"0,", "3,1000", "0000", " 2,", "3,1", "00000", "00 ", "2,4", ",1000", "00", "00 ", "0,1", ",1", "00000", "00 ", "1,2,10", "000000", " 3,4", ",10000", "000 0,", "4,10", "000", "000 1,3,", "100000", "00 1,4,10", "000", "000 0,2,1", "0000000"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 40000000;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int N = 2;
    vector<string> roads = {"0", ",1", ",1", "00", "0", "00", "00"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 10000000;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int N = 274;
    vector<string> roads = {"9,80,1 6,109,1 121,127,1 58,137,1 72,153,1 63,255,", "1 130,261,1 152,243,1 199,234,1 12,202,1 67,239,1 ", "45,158,1 32,161,1 39,211,1 101,119,1 4,165,1 188,2", "25,1 120,253,1 145,252,1 30,229,1 182,228,1 67,186", ",1 266,268,1 148,226,1 178,255,1 97,122,1 29,137,1", " 119,161,1 31,85,1 194,212,1 57,140,1 10,157,1 42,", "75,1 70,121,1 75,102,1 18,144,1 96,109,1 73,248,1 ", "9,198,1 207,209,1 73,93,1 92,213,1 30,148,1 51,53,", "1 134,137,1 53,270,1 199,264,1 233,266,1 0,115,1 1", "1,81,1 68,240,1 51,172,1 180,253,1 155,158,1 30,16", "2,1 97,149,1 214,267,1 52,56,1 122,203,1 146,158,1", " 139,259,1 121,206,1 8,86,1 20,172,1 35,133,1 97,1", "84,1 43,148,1 59,67,1 35,58,1 30,104,1 26,197,1 1", "2,145,1 167,191,1 189,236,1 153,197,1 157,159,1 15", "3,160,1 72,254,1 150,214,1 64,273,1 32,124,1 139,1", "42,1 89,125,1 13,92,1 4,243,1 44,184,1 73,156,1 76", ",203,1 105,146,1 25,196,1 108,202,1 169,257,1 61,1", "19,1 41,266,1 52,163,1 12,41,1 78,259,1 85,231,1 5", "3,131,1 67,223,1 109,227,1 96,220,1 87,176,1 111,1", "42,1 38,218,1 184,255,1 143,263,1 57,195,1 92,207,", "1 234,240,1 5,179,1 28,258,1 27,65,1 46,224,1 20,1", "38,1 179,192,1 78,87,1 256,270,1 4,203,1 7,215,1 1", "56,195,1 112,155,1 171,266,1 91,224,1 45,141,1 68,", "177,1 33,78,1 80,113,1 105,121,1 135,221,1 31,43,1", " 103,203,1 56,251,1 21,166,1 126,208,1 14,49,1 74,", "262,1 3,15,1 47,244,1 212,269,1 19,41,1 66,210,1 1", "45,177,1 183,193,1 56,237,1 74,170,1 9,135,1 24,22", "1,1 157,252,1 81,187,1 85,199,1 43,271,1 1,134,1 0", ",272,1 76,194,1 189,265,1 25,71,1 76,188,1", " 106,253,1 2,194,1 128,156,1 86,257,1 113,143,1 56", ",172,1 51,272,1 39,112,1 200,228,1 190,270,1 43,46", ",1 65,260,1 21,179,1 180,231,1 1,78,1 98,233,1 47,", "196,1 116,260,1 118,120,1 93,115,1 93,200,1 103,25", "8,1 22,88,1 13,150,1 68,205,1 146,209,1 77,125,1 6", ",241,1 45,240,1 27,183,1 10,151,1 40,44,1 201,270,", "1 108,132,1 13,262,1 62,272,1 122,246,1 36,85,1 57", ",191,1 6,181,1 37,231,1 85,193,1 123,146,1 107,228", ",1 38,62,1 42,164,1 1,115,1 47,251,1 58,250,1 21,6", "0,1 126,260,1 95,155,1 59,80,1 94,183,1 174,212,1 ", "107,109,1 40,219,1 75,168,1 75,176,1 23,232,1 130,", "198,1 2,216,1 135,209,1 182,249,1 22,272,1 65,82,1", " 58,247,1 83,88,1 125,235,1 69,129,1 185,230,1 56,", "235,1 25,86,1 5,231,1 29,64,1 54,70,1 136,172,1 35", ",130,1 147,246,1 129,139,1 245,255,1 99,184,1 232,", "269,1 130,217,1 44,215,1 90,121,1 117,137,1 132,15", "4,1 41,222,1 81,88,1 14,69,1 36,189,1 175,214,1 86", ",203,1 32,198,1 17,82,1 16,70,1 15,66,1 55,182,1 1", "44,204,1 48,163,1 173,229,1 107,114,1 100,103,1 31", ",204,1 50,149,1 34,124,1 66,140,1 84,144,1 110,208", ",1 139,153,1 64,230,1 178,242,1 79,119,1 214,238,1"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 273;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int N = 274;
    vector<string> roads = {"182,228,1 99,184,1 3,15,1 12,41,1 84,144,1 156,195", ",1 107,109,1 56,235,1 47,251,1 79,119,1 105,121,1 ", "157,159,1 201,270,1 20,138,1 116,260,1 43,271,1 56", ",251,1 13,262,1 27,65,1 5,179,1 167,191,1 4,203,1 ", "22,88,1 157,252,1 130,217,1 53,270,1 139,142,1 38,", "218,1 119,161,1 19,41,1 72,153,1 15,66,1 21,60,1 6", "7,223,1 4,243,1 9,80,1 97,184,1 40,219,1 75,168,1 ", "214,238,1 96,220,1 103,258,1 40,44,1 135,221,1 77,", "125,1 136,172,1 52,163,1 145,252,1 212,269,1 105,1", "46,1 90,121,1 113,143,1 72,254,1 256,270,1 145,177", ",1 92,213,1 144,204,1 130,198,1 146,158,1 122,203,", "1 128,156,1 139,259,1 178,255,1 76,188,1 47,196,1 ", "81,88,1 31,43,1 59,80,1 173,229,1 108,202,1 35,133", ",1 175,214,1 67,239,1 30,148,1 184,255,1 39,211,1 ", "112,155,1 69,129,1 130,261,1 14,69,1 41,266,1 180,", "253,1 76,194,1 155,158,1 78,87,1 59,67,1 32,198,1 ", "0,272,1 25,71,1 36,189,1 147,246,1 98,233,1 190,27", "0,1 32,124,1 18,144,1 132,154,1 25,196,1 97,122,1 ", "42,164,1 64,230,1 92,207,1 214,267,1 101,119,1 139", ",153,1 35,130,1 95,155,1 143,263,1 29,64,1 103,203", ",1 179,192,1 234,240,1 110,208,1 9,135,1 233,266,1", " 100,103,1 54,70,1 7,215,1 0,115,1 150,214,1", " 45,240,1 39,112,1 47,244,1 31,85,1 135,209,1 1", "3,92,1 57,195,1 44,215,1 182,249,1 13,150,1 32,161", ",1 25,86,1 185,230,1 118,120,1 28,258,1 153,197,1 ", "171,266,1 73,248,1 43,148,1 148,226,1 232,269,1 74", ",262,1 9,198,1 4,165,1 41,222,1 109,227,1 12,202,1", " 97,149,1 22,272,1 107,228,1 51,172,1 14,49,1 80,1", "13,1 81,187,1 117,137,1 86,257,1 55,182,1 78,259,1", " 61,119,1 66,210,1 75,176,1 123,146,1 26,197,1 6,1", "09,1 189,265,1 63,255,1 17,82,1 178,242,1 52,56,1 ", "93,200,1 126,260,1 10,151,1 43,46,1 183,193,1 46,2", "24,1 152,243,1 121,206,1 12,145,1 73,156,1 94,183,", "1 122,246,1 111,142,1 51,272,1 20,172,1 6,241,1 15", "3,160,1 51,53,1 73,93,1 45,141,1 21,166,1 85,193,1", " 29,137,1 200,228,1 91,224,1 36,85,1 70,121,1 65,2", "60,1 85,231,1 194,212,1 6,181,1 24,221,1 96,109,1 ", "57,191,1 76,203,1 93,115,1 1,78,1 57,140,1 68,205,", "1 134,137,1 58,250,1 31,204,1 34,124,1 56,172,1 17", "4,212,1 125,235,1 68,240,1 89,125,1 64,273,1 58,24", "7,1 180,231,1 120,253,1 35,58,1 189,236,1 38,62,1 ", "129,139,1 121,127,1 108,132,1 44,184,1 62,272,1 23", ",232,1 87,176,1 37,231,1 2,216,1 67,186,1 75,102,1", " 74,170,1 45,158,1 48,163,1 16,70,1 65,82,1 27,183", ",1 33,78,1 199,234,1 11,81,1 188,225,1 68,177,1 50", ",149,1 30,229,1 245,255,1 169,257,1 126,208,1 58,1", "37,1 53,131,1 56,237,1 2,194,1 1,134,1 146,209,1 1", "07,114,1 85,199,1 42,75,1 21,179,1 106,253,1 30,10", "4,1 83,88,1 199,264,1 5,231,1 266,268,1 86,203,1 1", "0,157,1 1,115,1 8,86,1 207,209,1 30,162,1 66,140,1"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 273;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int N = 68;
    vector<string> roads = {"34,42,1 30,53,1 5,40,1 0,67,1 0,64,1 44,61,1 8,37,", "1 14,23,1 61,64,1 8,19,1 18,49,1 34,38,1 14,60,1 1", "9,61,1 30,60,1 25,26,1 33,42,1 23,62,1 26,54,1 23,", "45,1 3,24,1 35,54,1 1,34,1 32,52,1 3,30,1 38,44,1 ", "44,53,1 13,54,1 48,67,1 44,49,1 9,41,1 24,67,1 14,", "18,1 20,58,1 42,59,1 16,56,1 20,49,1 13,26,1 6,29,", "1 25,54,1 33,60,1 23,41,1 12,59,1 48,65,1 19,31,1 ", "0,7,1 7,34,1 14,48,1 40,56,1 28,44,1 18,46,1 42,51", ",1 25,67,1 7,21,1 0,56,1 10,47,1 48,55,1 19,48,1 5", ",6,1 42,48,1 36,44,1 10,46,1 7,52,1 2,18,1 3,44,1 ", "4,6,1 6,16,1 11,38,1 19,33,1 15,59,1 50,66,1 46,47", ",1 45,51,1 20,35,1 45,55,1 2,26,1 4,27,1 6,34,1 20", ",67,1 12,52,1 8,63,1 30,46,1 8,24,1 21,29,1 29,47,", "1 46,48,1 58,61,1 8,57,1 33,67,1 3,31,1 16,43,1 17", ",64,1 34,35,1 38,55,1 30,31,1 1,33,1 34,43,1 47,52", ",1 39,64,1 24,29,1 24,64,1 27,28,1 33,65,1 15,52,1", " 14,43,1 16,24,1 24,39,1 15,31,1 21,47,1 17,18,1 4", "4,51,1 32,61,1 26,34,1 19,55,1 27,61,1 19,62,1 6,3", "6,1 9,37,1 11,41,1 19,32,1 34,39,1 23,39,1 27,64,1", " 1,47,1 52,67,1 37,40,1 40,55,1 28,30,1 19,29,1 22", ",50,1 4,60,1 24,55,1 45,58,1 0,5,1 44,54,1 17,28,1", " 26,36,1 43,54,1 0,58,1 2,8,1 2,59,1 14,65,1 4,13,", "1 37,67,1 30,32,1 46,50,1 39,65,1 14,37,1 14,26,1 ", "37,60,1 13,33,1 36,67,1 4,30,1 6,31,1 49,63,1 30,5", "2,1 10,44,1 25,55,1 10,27,1 1,67,1 28,41,1 6,9,1 2", "1,60,1 6,50,1 3,5,1 0,53,1 16,27,1 46,58,1 1,27,1 ", "1,61,1 51,57,1 22,64,1 2,35,1 41,53,1 0,55,1 30,49", ",1 9,66,1 22,48,1 9,51,1 2,4,1 0,30,1 47,57,1 39,5", "1,1 7,61,1 16,58,1 12,39,1 38,42,1 12,28,1 22,61,1", " 22,43,1 47,53,1 5,51,1 30,57,1 3,33,1 25,34,1 25,", "63,1 54,63,1 28,67,1 14,55,1 39,44,1 28,37,1 5,12,", "1 1,64,1 40,60,1 14,67,1 37,66,1 22,25,1 34,45,1 2", "6,55,1 2,46,1 12,19,1 0,61,1 8,66,1 21,27,1 48,50,", "1 39,59,1 37,61,1 25,45,1 2,58,1 53,65,1 21,63,1 2", "4,31,1 27,53,1 56,61,1 19,37,1 29,42,1 53,63,1 20,", "29,1 52,66,1 14,62,1 58,60,1 8,48,1 49,52,1 12,67,", "1 33,58,1 0,32,1 27,38,1 40,45,1 19,20,1 9,18,1 46", ",65,1 12,58,1 26,52,1 40,63,1 23,33,1 42,54,1 2,48", ",1 10,18,1 11,60,1 21,31,1 36,38,1 3,8,1 13,22,1 5", ",22,1 21,53,1 17,21,1 22,58,1 5,50,1 3,38,1 8,43,1", " 38,54,1 6,51,1 44,60,1 2,67,1 31,51,1 25,47,1 3,4", "8,1 27,30,1 1,62,1 16,64,1 29,53,1 15,46,1 1,4,1 6", ",58,1 16,61,1 19,57,1 6,55,1 52,60,1 23,31,1 31,61", ",1 0,44,1 14,58,1 18,45,1 17,29,1 10,49,1 12,37,1 ", "27,36,1 23,30,1 28,49,1 19,54,1 45,67,1 34,50,1 21", ",51,1 31,49,1 8,28,1 15,20,1 3,4,1 24,66,1 15,30,1", " 15,62,1 41,48,1 5,14,1 22,41,1 37,39,1 0,57,1 11,", "30,1 28,36,1 42,44,1 0,19,1 20,46,1 40,65,1 22,38,", "1 7,32,1 47,65,1 4,65,1 35,59,1 54,65,1 9,46,1 24,", "30,1 29,64,1 12,66,1 8,26,1 31,57,1 15,66,1 0,25,1"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 67;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int N = 17;
    vector<string> roads = {"1,9,1 2,12,1 7,15,1 9,16,1 0,16", ",1 1,16,1 5,8,1 0,6,1 5,11,1 5,9,1", " 2,7,1 1,13,1 8,11,1 11,15,1 4,1", "2,1 5,16,1 3,4,1 4,14,1", " 0,15,1 7,14,1 0,5,1 1,2,", "1 10,13,1 4,5,1 4,11,1 8", ",14,1 9,12,1 0,14,", "1 5,14,1 13,14,1 5,6,1 4,13,1 4", ",15,1 11,16,1 12,14,1 1,3,1 7", ",9,1 11,13,1 5,15,1 1,8,1 3,6,", "1 13,16,1 3,15,1 5,13,1 ", "0,8,1 9,15,1 8,10,1 6,1", "0,1 2,11,1 2,15,1 2", ",16,1 7,11,1 15,16", ",1 3,5,1 1,6,1 9,10,1 10,16,1 4", ",8,1 2,5,1 8,16,1 9,13", ",1 4,10,1 1,14,1 4,7,1 14,15,1 ", "2,14,1 4,9,1 14,16,1 3,16,1 ", "1,5,1 2,13,1 6,12,1 12,13,1", " 0,10,1 0,3,1 2,10,1 8,15,1 3,1", "3,1 2,8,1 11,14,1 3,8,1 4,16,1", " 7,16,1 3,11,1 6,11,", "1 3,14,1 10,15,1 7,12", ",1 0,11,1 10,12,1 6,16,", "1 7,10,1 8,13,1 6,9,1 1,15,", "1 10,11,1 11,12,1 0,13,1", " 4,6,1 1,7,1 9,11,1 1,10,1 ", "7,8,1 8,12,1 9,14,1 6,8", ",1 0,12,1 12,15,1 2,3,1 3,12,1 10", ",14,1 6,14,1 0,2,1 6,", "13,1 3,9,1 1,12,1 1,11,1 ", "2,9,1 6,15,1 6,7,1 0,7,1 13,1", "5,1 2,6,1 3,7,1 12,16,1 7,13,1 0,4,1 0,9", ",1 8,9,1 5,10,1 1,4,1 5,7", ",1 3,10,1 2,4,1 5,12,1 0,1,1"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 16;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int N = 4;
    vector<string> roads = {"0", ",2", ",", "1", " ", "0", ",1", ",", "1", " ", "2", ",3", ",", "1"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int N = 272;
    vector<string> roads = {"43,82,8 37,46,4 41,186,2 152,204,7 67,161,2 56,199", ",2 35,225,4 183,216,6 4,28,8 19,184,5 31,131,2 38,", "58,3 119,162,5 93,215,9 174,177,8 171,260,4 ", "125,169,8 120,242,7 115,130,9 137,153,4 71,156,8 5", "1,159,5 77,138,5 148,209,8 6,265,5 97,180,8 17,235", ",3 32,139,5 140,158,1 36,115,8 145,202,5 53,57,2 1", "8,44,9 242,265,3 120,173,3 63,81,3 50,86,9 58,256,", "5 35,263,5 38,51,8 262,270,5 148,232,6 196,250,8 7", "0,136,9 49,253,9 127,168,6 179,210,1 151,219,1 5,4", "0,7 158,212,3 169,190,3 64,161,5 55,153,2 38,76,7 ", "45,271,8 67,118,1 195,222,3 170,228,1 1,93,4 24,17", "7,5 56,64,8 142,253,5 17,39,1 19,202,2 18,100,6 18", "0,187,6 15,74,9 77,224,9 8,9,5 148,192,6 91,115,9 ", "25,121,6 215,220,1 180,210,6 127,261,3 69,233,3 11", ",124,6 7,109,3 88,218,6 17,267,7 38,94,9 21,162,9 ", "28,146,3 97,236,9 113,120,1 10,184,4 79,193,2 29,4", "1,8 61,183,8 1,195,1 7,50,2 91,253,4 96,231,3 14,9", "6,3 66,164,5 67,153,2 44,177,6 39,53,7 98,177,4 1", "34,144,3 45,218,8 2,111,7 60,200,4 211,252,9 57,12", "0,9 2,254,7 60,258,4 52,141,2 74,186,4 57,216,2 18", "5,234,5 54,190,2 236,269,2 106,135,1 222,264,1 238", ",264,8 10,237,4 21,258,8 206,222,2 122,131,4 27,14", "2,9 20,70,1 51,101,5 191,219,1 73,245,9 11,67,6 55", ",89,9 25,45,9 49,102,3 116,245,7 148,166,5 ", "96,107,9 116,135,6 13,205,8 35,181,9 129,241,7 74,", "189,8 0,241,1 56,157,7 2,228,5 156,196,2 12,213,2 ", "65,118,9 113,182,2 236,266,1 40,160,3 95,254,8 83,", "186,9 42,206,1 79,236,2 53,232,4 223,251,8 32,75,1", " 45,178,9 197,220,8 25,67,9 50,257,7 20,129,6 45,1", "32,8 127,221,8 155,196,6 198,268,8 19,48,9 138,226", ",2 144,223,6 32,243,8 51,69,7 23,106,1 21,35,8 209", ",268,7 19,263,3 15,59,5 87,177,9 90,230,2 43,106,8", " 110,263,4 128,144,1 159,227,1 41,108,8 4,188,6 15", "1,203,7 70,75,5 239,242,3 7,135,2 150,213,1 2,215", ",4 130,248,9 197,229,2 16,148,1 64,92,2 201,259,2 ", "26,148,1 15,67,9 249,261,5 85,148,7 52,178,9 167", ",193,5 194,203,9 75,163,1 97,105,5 50,152,2 4,14,6", " 39,84,4 19,133,1 78,128,5 73,223,1 3,184,9 115,22", "9,7 117,257,9 31,91,6 196,246,6 207,236,8 22,162,6", " 11,80,5 17,175,4 221,243,3 114,268,3 68,116,3 21", "4,259,9 62,147,2 188,238,4 18,112,2 160,240,1 11,2", "20,8 103,134,8 176,194,6 34,185,8 135,244,6 19,220", ",3 8,106,7 106,226,1 208,214,8 159,171,3 40,164,4 ", "147,153,2 32,215,8 33,69,3 168,262,3 23,205,4 88,1", "55,4 30,174,4 192,244,5 211,239,5 34,125,7 155,", "160,7 62,172,9 130,150,6 26,165,6 123,263,2 99,246", ",6 126,195,5 2,46,8 154,183,2 72,215,9 112,161,3 9", "0,100,7 127,201,7 87,194,4 140,248,9 112,179,4 224", ",247,3 210,239,2 90,217,6 183,255,9 81,197,6 190,2", "20,4 127,149,9 86,143,7 68,76,3 104,258,1 47,252,6"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1394;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int N = 68;
    vector<string> roads = {"45,60,2 44,54,2 0,36,5 15,42,5 31,46,7 20,51,6 30,", "55,2 26,54,7 28,29,9 43,53,8 32,49,6 37,40,3 47,61", ",5 30,51,2 35,47,5 50,62,5 38,66,8 20,22,4 15,34,3", " 58,64,9 28,63,8 54,66,5 24,38,4 18,65,4 42,65,8 5", ",48,5 8,39,5 1,52,7 25,26,1 3,35,3 14,56,7 39,41,9", " 19,44,6 13,14,4 19,45,1 27,62,3 51,66,2 5,17,7 5", "2,58,1 9,54,8 49,52,1 50,51,5 9,31,2 34,67,1 19,37", ",2 13,24,7 18,48,2 48,59,9 36,40,8 21,64,6 62,65,4", " 0,62,1 16,66,5 39,48,9 8,27,6 27,53,8 24,42,4 0,", "31,9 17,63,5 49,65,4 0,59,3 15,41,2 13,41,3 24,45,", "7 15,30,2 10,31,8 19,62,7 7,57,6 42,53,6 20,64,5 4", "0,51,6 46,66,9 42,45,5 17,47,5 14,20,1 52,67,1 50,", "53,8 34,62,5 36,54,4 46,52,8 21,67,7 2,52,3 40,57,", "7 23,59,4 10,44,4 2,45,8 18,37,5 38,41,7 21,46,8 2", "1,38,7 13,27,9 36,37,6 42,60,5 20,58,6 44,63,5 8,2", "6,7 35,50,8 22,41,2 19,31,1 11,64,1 8,61,9 14,30,2", " 47,54,1 41,60,3 11,19,9 25,33,8 41,43,9 17,34,5 2", "3,34,1 54,55,7 20,29,4 22,50,5 39,62,2 55,60,9 60,", "67,1 31,41,7 6,63,8 25,51,9 5,42,8 25,48,3 10,42,3", " 15,22,9 0,29,4 44,60,5 15,29,9 19,32,7 14,23,7 44", ",47,9 0,46,1 29,65,7 12,45,8 35,45,4 41,53,4 26,47", ",3 12,65,3 7,63,1 21,65,2 9,52,8 1,13,3 46,55,5 6,", "57,4 27,51,2 35,64,2 22,66,2 40,63,9 4,37,8 3,17,3", " 41,48,1 41,47,9 23,47,7 6,29,8 29,58,6 33,40,5 9,", "36,3 20,35,1 2,55,5 27,66,4 63,64,9 3,32,5 33,66,7", " 27,58,1 4,40,6 30,59,6 24,59,1 27,54,6 42,63,2 27", ",44,4 53,60,9 14,66,3 20,32,3 20,65,8 58,59,1 0,7,", "7 25,64,7 8,17,2 45,57,9 3,39,1 12,30,5 20,53,5 20", ",55,6 35,54,2 48,51,5 38,45,2 11,18,8 12,36,2 43,4", "8,2 27,48,4 32,65,5 6,7,9 15,54,6 43,60,8 2,53,1 2", "8,45,8 27,28,4 33,37,2 32,62,7 21,53,7 13,16,6 8,4", "0,2 16,58,8 3,25,7 30,56,6 8,41,1 9,35,2 9,24,6 10", ",30,1 27,38,6 3,31,6 13,52,1 20,33,2 31,57,1 9,28,", "3 30,34,2 36,38,8 60,63,9 15,64,8 31,36,7 32,63,6 ", "10,43,1 25,65,9 29,61,1 14,67,9 57,67,2 17,58,7 47", ",55,6 44,46,9 2,13,3 47,60,5 30,63,3 13,29,7 57,61", ",4 11,49,5 16,30,9 26,45,3 10,11,8 29,57,8 11,39,6", " 40,46,8 25,67,6 24,31,7 17,37,6 8,13,3 24,43,1 12", ",20,3 24,26,3 36,58,5 7,34,9 6,11,1 29,60,8 10,53,", "7 59,62,3 28,62,4 14,49,6 55,64,8 40,55,3 26,29,2 ", "12,33,2 44,57,2 4,54,3 5,64,9 27,30,6 8,28,5 21,45", ",1 30,62,7 39,57,2 52,60,3 17,38,3 25,27,5 36,55,8", " 32,44,5 24,58,5 0,18,5 0,49,5 34,46,2 25,63,7 53", ",63,5 9,44,4 30,61,1 13,67,8 6,8,8 46,58,3 1,35,7 ", "49,51,8 27,33,5 11,47,1 38,55,4 9,57,4 26,63,6 36,", "66,6 19,58,5 18,63,5 50,57,2 24,36,5 29,66,2 9,63,", "8 50,54,1 6,59,4 9,60,3 32,39,8 13,63,5 33,44,9 17", ",23,6 14,51,6 2,66,6 8,54,2 58,62,4 23,32,2 3,33,1", " 38,61,5 5,21,4 11,14,5 1,22,1 11,42,2 52,63,6 16,", "26,1 19,66,8 29,30,1 7,14,7 30,44,4 50,66,7 0,34,7"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 106;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int N = 17;
    vector<string> roads = {"11,16,4 1,9,8 5,15,7 5,14,7 2", ",14,6 0,16,3 7,8,4 1,14", ",3 5,16,2 7,13,6 12,15,5 3,8,5 0,4,8", " 7,15,9 1,6,4 8,10,7"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 88;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int N = 4;
    vector<string> roads = {"2,3,9 0,3,9 1,3", ",4 0,1,6 1,2", ",1 0,2,2"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int N = 270;
    vector<string> roads = {"159,246,10 39,104,4 147,156,5 12,236,4 106,175,5 4", "8,168,1 67,234,5 59,187,10 9,238,3 63,136,1 65,241", ",3 79,122,10 5,197,3 120,129,7 176,247,10 81,215,4", " 67,266,4 22,67,3 63,250,10 157,171,8 186,197,6 30", ",109,4 118,158,2 28,62,9 11,52,7 20,174,4 57,101,4", " 88,229,2 15,217,2 112,170,4 114,196,2 119,129,4 1", "87,242,1 178,240,8 95,268,4 144,163,2 88,146,2 0,1", "16,10 246,262,4 18,113,8 74,143,10 19,159,1 132,21", "4,1 16,245,2 135,149,3 131,208,10 78,266,9 159,203", ",2 60,184,5 185,207,10 60,71,3 106,231,9 151,232,4", " 112,120,6 17,177,5 24,62,8 126,229,9 51,233,1 40,", "246,10 124,157,8 176,184,7 64,81,8 36,61,4 16,203,", "5 82,140,7 160,208,5 167,252,5 16,89,2 77,152,6 44", ",184,8 123,143,10 208,232,2 142,204,1 141,269,1 83", ",230,2 67,130,1 132,180,10 190,218,2 50,238,2 218,", "233,10 68,145,8 3,87,5 28,205,8 8,76,3 97,210,5 9,", "229,8 147,172,6 58,122,1 37,58,6 3,217,4 156,228,1", " 29,140,5 31,51,3 176,222,3 143,236,4 39,239,7 106", ",133,2 134,210,7 94,124,1 64,260,2 66,240,10 113,2", "51,3 49,220,6 21,165,4 64,237,6 24,79,6 156,193,10", " 182,213,3 115,237,6 51,153,6 74,154,6 25,67,7 181", ",226,6 91,202,4 19,256,1 193,194,4 137,240,7 7,33,", "2 237,255,6 11,227,3 48,148,7 25,172,7 203,212,8 8", "1,151,4 46,223,4 41,194,8 189,227,10 70,90,5 244,2", "69,6 158,184,1 70,263,2 42,229,3 4,96,2 72,110,2 1", "48,243,5 7,173,9 5,155,9 15,226,4 39,66,8 109,116,", "6 166,171,4 73,239,3 139,184,4 117,129,3 91,189,7 ", "66,75,10 46,57,2 199,260,9 192,246,4 58,198,9 65,2", "26,5 96,209,9 45,165,1 197,232,4 151,192,7 113,147", ",10 11,26,6 182,205,2 56,243,3 143,226,7 167,225,5", " 202,259,5 142,201,3 133,183,6 190,267,5 128,148,7", " 21,54,5 120,158,2 68,175,5 4,253,9 2,212,7 92,256", ",4 67,106,4 112,121,9 29,125,3 37,57,6 117,253,4 2", "21,227,4 63,159,10 10,194,9 114,224,2 116,132,6 43", ",164,3 32,210,4 38,252,7 161,252,9 44,187,4 239,26", "1,2 74,173,1 72,109,9 62,70,8 14,213,4 68,163,1 58", ",84,1 48,235,4 85,114,7 138,254,7 58,179,7 90,169,", "7 1,129,1 127,248,5 30,107,7 135,186,6 100,259,6 1", "31,180,6 43,255,1 7,257,9 127,130,2 6,265,9 129,24", "0,7 10,241,2 35,107,2 111,189,8 148,258,8 108,126,", "8 13,103,5 125,218,6 13,224,6 60,211,5 216,237,1 5", "5,155,9 32,83,9 77,214,7 70,105,1 68,86,5 106,2", "19,3 36,84,5 80,216,9 52,150,7 113,233,10 41,268,6", " 50,265,8 138,239,7 42,100,5 24,161,5 23,67,4 79,2", "40,7 170,259,1 207,221,7 63,94,3 220,262,4 181,195", ",2 122,175,5 53,125,7 102,211,8 58,99,2 114,218,8 ", "159,206,1 54,130,6 29,201,10 74,128,3 94,191,3 22,", "27,2 129,206,5 98,123,6 230,249,7 20,155,3 97,120,", "5 188,249,7 47,267,5 69,75,8 177,238,8 45,200,9 34", ",250,6 8,9,8 34,264,5 162,210,1 178,244,1 93,179,1"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1406;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int N = 67;
    vector<string> roads = {"44,63,3 17,22,8 28,34,9 1", "1,64,1 11,27,6 1,6", "2,9 23,66,2 22,51,4", " 25,43,9 27,62,2 14,36,", "1 11,51,3 19,42,8 38,42,", "5 9,20,1 51,61,6", " 21,52,3 2,38,5 4", "5,55,9 3,24,4 3,60,3 18,21", ",4 6,42,1 2,22,4 13,43", ",10 8,61,8 7,16,2 31,58,6 28,50,8 ", "53,60,9 20,26,2 59,66,9 30,", "66,3 32,54,2 39,", "60,6 28,37,9 7,49,", "7 0,44,10 2,46,6 18,41,4", " 38,48,5 16,46,7 58,", "59,3 34,59,10 4,51,4 10", ",39,8 39,56,1 35,59,7 46,57,9 ", "40,46,4 20,57,10", " 29,44,7 2,3,5 17,", "65,8 15,22,9 28", ",48,2 5,51,3", " 11,55,7 37,54,2 12,5", "6,4 4,14,7 33,62,1", "0 1,63,10 11,21,1 25,46,1 45,47,7"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 362;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int N = 16;
    vector<string> roads = {"0,11,1 2,13,10 4,10,2 3,15,5 ", "0,4,6 5,8,8 9,10,", "9 3,11,3 4,12,2 4,6,4 ", "8,12,3 7,9,4 10", ",14,8 2,7,2 4,7,7 0,2,", "8 5,10,8 8,15,8 2", ",4,10 2,10,9 5,", "11,1 0,8,8 6,7,5 7,8,10 2,1", "5,5 1,10,7 0,10,6 3,7", ",10 8,14,5 5,13", ",5 1,6,8 8,9,8 4,14,2 5,15", ",10 6,15,8 11,12,", "8 6,8,4 6,13", ",10 0,13,9 2,6,8", " 1,2,10 8,11,9 ", "1,5,6 0,7,6 6,12,3 1,", "14,5 0,5", ",3 12,15,10 13,15,3 3,12", ",5 1,13,3 1,12,1 3", ",14,1 6,11,2 ", "9,13,3 0,1,8 4,1", "1,9 8,13,2 2,3,3", " 3,4,2 1,3,2 9,", "11,4 2,12,9 0,6,1", " 12,14,3 0,15,8 4", ",15,5 10,13", ",9 7,10,7 4,5,7 9,14,5 6,", "10,8 9,12,1", " 7,11,5 3,10,6 8,10,", "9 4,9,10 11,14,3 ", "2,14,2 1,9,8 10", ",15,6 3,6,1 1,7,4 ", "11,13,10 2", ",11,7 11,15,3 0,3,3 ", "14,15,3 6,9,1 3,5,", "8 1,4,8 4,8,2 13", ",14,4 2,5,7 1,1", "5,9 2,8,4 7,13,10 7,", "15,7 0,14,10 5,12,8 10,1", "1,5 6,14,2 4,13,", "4 5,6,8 3,9,10 5,9,5 ", "3,8,6 9,15,10 1,11,5 0", ",12,3 5,7,2 7,12,4", " 10,12,9 2,9,9 0,", "9,4 12,13,9 5,14,", "3 3,13,4 1,8,8 7,14,1"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 22;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int N = 4;
    vector<string> roads = {"0,3", ",1", " 1,2,", "5", " 1,", "3,7"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int N = 171;
    vector<string> roads = {"94,135,8854725 29,115,3052953 73,125,1560040 18,48", ",133312 41,74,5961772 7,138,5131321 21,79,866956 1", "6,152,6898805 69,82,4889186 64,124,7918611 113,167", ",4447528 5,144,4750487 56,79,7203728 44,127,452576", "0 10,101,9117564 7,53,9458477 40,48,8162424 58,86,", "8811680 1,146,8639036 46,115,231162 23,74,810094 3", ",55,1737664 120,168,3222849 62,101,7129680 148,155", ",1670392 132,142,6216030 36,100,4128106 38,48,9107", "760 4,158,3963946 91,135,1571576 1,75,6071612 101,", "141,5472546 17,77,8609378 24,106,9299562 160,168,", "6250114 107,143,736926 15,99,6803227 103,114,11014", "2 83,103,8569853 36,149,8492208 76,107,856604", "2 56,83,5527502 96,118,4688267 2,132,1696871 114,1", "47,5343255 37,119,6688645 49,71,9082570 10,140,813", "6231 50,119,6208391 68,117,7168131 13,72,358454 18", ",133,1979245 8,119,562874 68,152,2100821 16,73", ",4315926 61,81,1587206 37,63,7382458 15,84,3398589", " 20,39,4841826 5,141,8562137 35,108,1920588 95,150", ",7037498 6,31,1238225 74,120,3927473 65,152,856143", "6 43,88,1081418 106,121,9464341 44,154,2967431 92,", "119,1896959 48,89,7843990 82,128,1876512 26,52,", "2842925 156,167,5850553 111,132,8862334 20,67,3958", "732 94,123,4524234 9,145,3957369 47,164,2909368 15", "1,158,8999605 40,92,9850512 16,54,5345305 6,42,779", "723 10,131,5956300 39,54,3856922 120,136,3258524 ", "95,112,9700430 3,83,9039428 7,83,6767328 45,107,34", "1194 21,44,6307824 137,167,9780101 81,136,7322818 ", "94,158,8264764 102,103,9117593 8,53,183408 71,90,5", "268674 15,98,7402486 54,157,3898000 0,153,9519961 ", "67,90,1257631 27,167,531343 136,165,9338141 77,163", ",2131623 51,78,5072957 32,161,2291465 83,97,58418", "44 12,39,1747426 9,25,8366546 93,105,4819023 75,83", ",9643123 48,129,8619672 34,161,8498726 10,16,17127", "09 70,155,3744614 104,134,9165011 83,107,5131822 2", ",60,2260548 29,40,8746917 22,98,1575829 116,169,32", "32086 28,96,1137016 34,49,5436125 14,35,6198396 18", ",159,9188808 87,111,9333666 59,119,6172440 107,130", ",7189983 11,136,6191383 130,164,6855634 16,", "109,402020 0,139,4816026 46,98,9745079 46,96,30", "63108 52,70,2811191 52,100,1494184 85,125,150068 6", "9,110,3232871 105,107,4257044 7,104,1965523 8,113,", "5253920 87,158,7569503 53,95,9773025 122,130,52179", "75 20,72,6648548 33,57,4814378 57,162,6673180 54,1", "39,3733602 47,80,7072864 14,42,3992444 66,126,8428", "033 87,92,7655973 68,166,958049 47,69,1374303 81,1", "45,8289724 1,169,5798260 19,170,2316682 66,167,423", "1331 119,163,8612607 74,134,9165828 86,152,1907280", " 58,124,5469559 30,112,7027644 26,156,33", "3425 26,43,6374033 36,78,9689860 65,106,920362 43,", "124,3982189 19,43,5179359 6,131,147056 6,33,484813"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 872932349;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int N = 42;
    vector<string> roads = {"10,40,9509944 24,27,8555221 13,20,1072476 5,30,877", "4534 16,40,5427806 28,33,3609592 12,22,4542353 17,", "40,788388 21,22,6639892 4,13,8244938 1,12,7989347 ", "9,29,4247739 2,14,713023 27,32,1120727 28,29,57991", "78 6,19,1138357 6,10,3875410 17,22,4824973 14,28,5", "106824 22,36,1119054 2,5,1210480 1,2,921030 34,36,", "7003157 3,13,3827463 12,41,5613298 14,24,1567520 3", "0,37,5167068 2,6,683034 0,25,7117686 0,41,2158122 ", "1,24,5016926 11,41,6499254 12,21,1909940 25,28,381", "5075 3,26,5999005 9,34,2534648 1,4,4159115 33,35,2", "860584 8,40,9949959 25,32,6245356 3,6,73653 15,24,", "9179632 12,36,547861 1,36,3384780 16,19,8618503 5,", "8,6019149 7,33,4821079 10,37,1976868 3,15,6827935 ", "30,39,3981139 14,20,9022059 24,37,2119489 4,25,968", "4479 14,35,1404994 2,22,5669319 22,33,7808881 12,2", "6,2049951 11,24,1138756 11,32,7698674 1,30,7236", "558 6,37,1497534 29,37,141560 18,24,8439472 8,3", "4,6134948 7,25,5334232 0,15,2045223 20,41,8477536 ", "11,14,9596396 12,27,6012689 14,21,852721 8,31,7587", "060 33,41,6335254 17,39,208513 20,21,8536239 12,25", ",6388251 4,16,7092092 15,16,6149311 8,20,6957299 2", "3,28,8803878 21,35,1089569 8,41,2502852 9,32,35482", "19 8,32,4826811 4,26,666157 19,33,5214513 28,36,64", "24946 5,16,7919181 2,25,2330820 8,23,7323386 27,39", ",6768308 10,20,1136995 25,27,4909504 11,16,7415584", " 5,14,2244571 5,21,3920627 10,30,7099425 31,39,422", "1182 28,38,3908762 9,13,1846110 29,39,4223017 2,7,", "3790433 38,40,7062301 10,14,5971487 0,20,6121530 1", "9,21,6816973 7,16,1743062 11,12,9580175 2,4,373147", "8 10,33,8640380 17,28,3989256 0,38,1683587 6,16,96", "75156 23,41,6150037 9,28,6327276 6,18,3063094 26,3", "8,3543285 32,39,4537955 29,33,1542617 26,35,998278", "0 1,8,2191965 1,28,7245545 5,33,5528695 19,39,2201", "272 20,23,1232616 3,4,6314475 7,23,1805041 23,29,2", "332223 10,35,3087071 11,30,6982193 19,29,1633847 2", "9,41,4989347 4,34,7281572 25,30,382682 23,36,54821", "26 8,21,6946203 12,35,6372872 2,18,843833 6,9,1812", "782 2,40,1911957 3,14,993997 5,25,6503590 17,34,60", "03766 27,28,853643 7,40,9774620 10,12,505894 4,20,", "8049572 7,21,43118 9,14,2313410 10,18,2747552 26,3", "0,336288 8,25,982800 16,21,1470661 0,39,557591 9,4", "1,4872142 4,40,5098651 5,37,2288687 1,26,6405483 2", "0,22,9666318 6,22,6830059 17,25,422730 2,9,4488780", " 22,39,4572059 29,40,7747254 4,33,7301069 19,40,25", "81462 20,30,2868925 15,20,1134456 8,11,4919010 29,", "38,1225786 13,27,6502932 0,33,1211689 21,37,702823", "6 16,22,5930095 17,18,3860531 6,25,707758 12,38,30", "72039 22,31,8988338 6,26,3543655 4,31,9761242 5,13", ",9620702 3,31,8760734 5,19,7584683 0,6,9569405 1,3", "9,881744 11,20,5103719 16,37,9415166 31,33,2768527"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 44187006;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int N = 10;
    vector<string> roads = {"4,6,823518", "2 0,5,6", "127612 2,9,400235", "3 1,8,2489", "476 6,8,8093", "477 3,8,", "1926653 8,9", ",2136391 3,7,9843264", " 5,6,1368705"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 44223113;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int N = 2;
    vector<string> roads = {"0,", "1", ",", "9", "4", "62", "9", "1", "0"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 9462910;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int N = 228;
    vector<string> roads = {"159,173,342 93,131,436 151,218,990 11,138,894 77,1", "13,543 18,153,964 98,115,317 184,195,354 1,7,120 1", "6,186,122 40,193,954 124,211,836 55,208,219 145,15", "4,418 93,210,186 29,36,984 137,193,889 135,201,333", " 115,155,600 133,196,542 109,139,523 105,195,757 1", "84,222,160 24,96,249 81,209,420 182,224,736 190,22", "5,119 25,183,691 48,112,300 105,206,917 90,176,622", " 61,220,641 50,164,209 9,51,291 11,110,599 137,227", ",527 40,172,904 48,202,518 70,102,108 0,123,606 14", "6,157,602 145,152,793 122,160,329 23,105,269 4,189", ",398 133,168,331 32,113,635 4,114,800 54,114,829 1", "67,191,223 83,109,191 16,86,824 134,208,135 103,22", "6,165 4,17,1000 74,108,155 94,163,458 72,92,468 59", ",78,362 76,147,227 26,192,672 95,206,796 103,169,1", "73 3,107,975 39,199,414 85,185,824 77,169,550 53,1", "21,954 8,101,965 35,174,844 18,201,176 92,132,264 ", "38,179,873 79,214,886 30,142,289 66,91,667 184,209", ",780 42,129,735 31,125,218 207,209,575 59,216,412 ", "25,187,332 98,185,625 190,224,698 77,194,778 22,16", "3,202 22,144,533 0,53,504 79,97,999 6,141,712 116,", "138,815 117,193,829 12,104,229 25,162,796 80,163,4", "23 57,74,874 58,211,483 43,95,632 87,157,351 15,17", "3,548 48,198,307 46,64,429 41,62,486 14,33,895 77,", "126,440 11,45,500 170,172,460 59,221,670 37,150,17", "3 114,134,866 0,100,298 149,195,452 20,90,186 39,1", "71,816 16,161,510 53,71,820 19,166,491 27,91,933 4", "6,57,224 47,113,679 52,62,729 96,214,650 109,115,1", "46 77,216,930 129,212,472 215,222,885 163,180,783 ", "120,216,731 102,136,736 34,143,952 28,154,133 17,1", "05,851 8,76,154 91,176,411 42,55,610 6,100,982 202", ",223,250 11,167,775 19,115,903 40,60,804 142,213,2", "29 101,160,192 3,116,794 44,217,907 2,105,382 38,", "86,999 44,202,197 131,189,552 49,169,825 39,201,40", "8 4,72,963 70,108,947 9,91,826 118,167,523 119,222", ",288 76,182,334 56,194,235 175,188,942 12,219,477 ", "90,204,394 39,68,740 156,165,751 173,216,441 108,2", "27,902 13,114,619 173,214,166 173,188,370 37,85,9", "12 182,192,947 85,89,705 197,204,881 79,163,982 12", "7,128,816 47,84,372 35,65,625 69,125,298 21,80,659", " 29,200,811 152,201,578 44,203,278 91,169,611 96,1", "11,347 25,31,514 5,160,860 10,220,217 87,225,551 4", "4,151,648 93,177,533 29,205,639 73,193,897 86,168,", "258 58,125,411 152,202,712 130,197,741 82,200,12", "3 67,114,286 10,62,445 12,106,420 106,197,646 14,5", "6,405 5,17,541 140,165,189 33,88,438 72,73,981 200", ",204,333 34,220,453 51,99,834 62,156,444 35,75,4", "23 55,158,523 63,189,678 86,170,882 108,148,337 74", ",203,239 72,185,687 1,80,234 76,127,134 0,37,563 0", ",213,684 178,213,946 181,217,954 21,162,688 29,92,", "545 164,179,544 131,174,607 52,108,748 110,187,614"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 127835;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int N = 57;
    vector<string> roads = {"14,35,509 23,50,968 17,43,899 1,50,944 0,53,890 1,", "9,248 27,35,325 6,31,816 33,55,494 25,34,522 11,31", ",689 15,37,871 10,55,124 33,40,602 23,28,860 0,55,", "144 36,38,451 12,55,595 2,39,362 7,37,732 0,15,296", " 8,15,928 8,20,916 44,53,327 31,48,375 1,21,400 48", ",49,938 31,52,600 7,9,515 18,48,418 2,10,399 15,50", ",643 8,28,945 7,48,671 2,54,142 34,35,262 4,30,515", " 17,32,620 13,17,807 6,7,404 36,37,486 12,33,982 3", "8,46,883 29,43,973 19,27,770 21,51,998 32,36,912 2", "3,35,621 2,27,965 34,44,842 20,21,793 7,36,698 8,4", "9,364 11,27,590 4,32,263 22,28,768 26,29,834 38,55", ",564 13,46,420 42,45,656 41,44,488 13,38,579 6,22,", "411 19,43,533 6,51,127 21,56,230 17,46,548 0,1,36", "2 14,47,821 22,48,100 13,14,568 10,31,195 17,48,49", "7 2,16,352 7,24,953 4,10,345 2,34,339 7,27,948 25,", "56,295 14,15,387 15,46,954 19,29,770 42,47,142 3,2", "5,208 49,53,410 12,41,445 3,22,455 20,49,768 6,28,", "490 34,42,736 1,5,902 43,53,995 10,29,800 35,54,93", "8 12,21,649 35,43,335 33,39,443 55,56,461 24,25,58", "7 18,23,138 17,40,777 42,53,108 0,9,815 32,43,354 ", "7,22,116 6,32,353 18,44,844 8,52,595 12,18,183 46,", "47,362 4,18,776 5,20,609 31,33,142 21,24,993 34,41", ",697 21,46,541 5,47,285 45,53,907 42,43,866 34,40,", "506 1,15,251 44,54,574 11,28,456 44,49,434 10,23,3", "57 18,34,750 15,45,322 1,24,436 5,9,548 5,2", "8,900 5,48,684 37,56,853 20,41,976 19,35,290 37,42", ",986 28,49,155 30,43,489 17,49,551 18,36,837 5,19,", "715 21,32,923 35,45,347 34,43,940 30,53,572 9,16,8", "96 20,52,321 28,53,216 14,42,819 0,4,328 6,25,761 ", "33,37,341 15,25,890 3,28,646 36,41,366 21,31,491 6", ",13,407 34,50,178 8,37,358 15,16,527 10,44,270 14,", "16,246 4,52,680 13,42,388 26,28,393 13,19,815 6,24", ",564 37,55,520 28,36,625 8,47,501 3,40,424 6,16,61", "1 3,10,560 3,12,802 9,10,524 14,31,668 19,54,783 1", "0,53,609 6,43,373 12,42,936 0,2,129 19,20,975 18,4", "5,566 53,56,239 17,52,593 17,51,406 9,53,470 38,39", ",558 17,20,597 9,33,795 26,41,498 33,52,100 23,33,", "949 32,34,716 24,33,239 16,53,785 9,25,701 8,19,44", "1 8,34,501 9,40,192 39,42,944 13,15,835 39,46,599 ", "39,51,623 24,37,915 12,37,377 16,29,885 23,32,876 ", "44,56,377 10,38,706 7,20,925 6,11,428 27,49,516 16", ",17,254 3,52,586 50,53,345 17,35,918 17,37,196 7,5", "0,394 7,56,794 5,51,781 27,29,552 37,51,161 29,54,", "231 22,50,384 0,51,106 38,49,445 7,16,922 3,17,825", " 12,56,419 38,41,944 30,55,809 1,10,184 1,20,665 1", "6,31,697 39,41,306 13,22,534 39,56,576 17,18,607 1", "4,19,408 2,44,606 26,32,427 9,14,858 30,56,917 18,", "43,354 29,47,844 42,48,583 48,50,838 2,37,762 10,2", "6,596 40,49,535 43,47,337 5,50,235 6,12,616 23,44,", "870 17,55,452 4,53,428 28,52,456 8,40,163 0,29,887"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 13713;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int N = 14;
    vector<string> roads = {"3,", "6,69", "5 1", "0", ",12", ",4", "6", "4 ", "1,12", ",73", "9 ", "6,10", ",1", "1", "1 ", "11", ",1", "2,498", " 3", ",8", ",", "774", " 0,", "1", "0", ",429", " ", "5,7", ",8", "8", "4 5", ",10", ",25", "6 4,8,", "91", "8 6,", "13,", "359 ", "2,", "7", ",9", "71", " 5,9,", "3", "96"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 7494;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int N = 3;
    vector<string> roads = {"1", ",2", ",80", "9", " ", "0,2", ",", "2", "1", "3"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1022;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int N = 210;
    vector<string> roads = {"45,60,4039 148,196,7741 22,180,7991 160,171,1585", " 9,24,7981 18,109,7197 60,101,6859 152,180,9684 16", ",27,1878 23,182,3235 55,188,7309 65,160,3064 24,34", ",3677 45,122,3461 102,196,4744 13,189,6191 96,170,", "9813 6,83,7792 35,113,1022 130,186,5640 25,184,582", "4 77,182,4782 42,71,9344 139,198,6025 15,141,1963 ", "118,198,4366 9,186,1553 155,157,3898 29,146,3405 8", "1,117,5291 68,146,5381 128,202,1302 44,136,6804 2,", "90,6539 85,123,5475 1,166,8365 89,138,9292 83,197,", "5330 92,135,3705 82,203,6268 147,180,4870 5,97,582", "8 99,140,5856 53,173,1773 57,137,5449 43,120,5099 ", "159,177,1745 24,100,7037 2,133,6550 10,187,6872 88", ",187,6016 118,166,1815 85,190,2410 30,97,2512 49,5", "6,1033 38,209,4302 7,209,3592 37,100,7768 47,180,5", "782 195,209,6801 32,185,1077 122,145,1368 26,169,4", "022 56,127,4524 52,67,2165 55,69,6584 150,182,9767", " 195,206,7266 64,108,9831 130,136,1129 67,75,3595 ", "64,72,6412 31,56,1813 75,116,3182 39,110,7619 71,1", "06,2084 0,195,3882 26,203,5725 2,113,6858 24,200,8", "811 33,174,9528 55,179,5352 95,146,2263 104,193,63", "67 2,23,1423 17,204,2583 70,103,9530 154,178,3680 ", "86,167,2089 66,165,8361 105,198,1066 9,59,7589 85,", "195,8634 31,83,6207 6,12,2956 135,199,5687 135,196", ",1118 51,166,4000 70,166,6831 33,53,3742 13,54,811", "6 19,190,8297 60,96,4315 134,142,3603 22,94,4688 5", "2,84,5355 125,180,1958 155,180,3584 129,183,358", "8 79,161,3735 88,121,6118 148,163,1213 90,186,93", "21 111,185,2796 122,132,3603 99,115,7442 14,171,74", "54 24,78,7653 56,181,9413 41,180,4400 21,36,9055 2", "1,204,5810 28,35,3380 3,16,8775 107,192,6996 20,20", "7,3921 24,104,2561 51,91,2604 201,205,7008 31,48,", "8031 20,115,6596 85,125,4876 11,34,3633 74,92,6747", " 131,136,7439 56,176,9798 6,187,4027 162,185,5106 ", "11,116,1467 103,153,6498 173,201,5447 5,112,9881 8", "7,143,2901 149,161,9168 58,186,1282 86,141,8821 5,", "60,3651 69,137,6960 68,174,5696 102,111,2223 78,14", "4,9876 53,87,3220 18,110,1395 5,73,6287 30,98,1087", " 6,84,8495 98,168,9969 12,61,1326 165,174,1433 4,6", "8,3329 63,74,6346 21,183,3550 195,208,9235 20,142,", "4394 76,182,7580 5,102,3899 108,202,6313 177,202,9", "286 33,93,2545 152,167,5767 156,174,1067 152,198,2", "816 90,95,5470 175,191,3410 135,175,3353 79,207,58", "39 42,124,8050 34,120,9561 35,72,4453 89,113,9997", " 27,174,3562 26,160,3887 53,164,1795 18,55,6393 15", "1,154,2954 157,172,3363 128,189,1422 42,83,8573 55", ",59,8968 7,158,5957 108,114,6656 24,204,6471 180,1", "94,1516 63,152,5565 29,117,4275 40,110,4298 80,105", ",7770 20,119,3740 62,118,8952 119,172,4008 8,157,4", "138 5,151,1089 46,127,3004 25,180,3671 107,114,481", "6 154,202,7131 50,129,5128 35,126,2514 82,142,8751"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1082370;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int N = 52;
    vector<string> roads = {"15,38,3083 2", "6,42,5573 27,37,8613 ", "0,11,8385 3", "2,44,2273 ", "12,32,6308 35,", "44,6268 8,30,", "6725 19,32,27", "80 42,46,738", "0 21,44,8187 5", ",11,9921 34,", "41,8536 18,", "44,2105 7,23,5371 1", "2,22,8719 15,", "49,798", "5 12,36,9026 6,", "18,2209 7,17,6076 24", ",47,8347 29", ",42,2991 7,34,51", "64 5,20,1225 11,3", "0,4237 ", "1,5,4723 36,46", ",8243 24,34,6", "546 4,37,3734 ", "28,42,9697 8,39", ",8775 31,36,9434", " 27,48,8102 9,16,", "4108 ", "14,44,97", "70 16,26,", "4303 43,51,12", "36 0,3,3014 2", "7,45,1356 41", ",50,4", "647 10,23,6942", " 46,51,1193 25,2", "9,1044 0,40,9504 ", "8,33,3518 3,17,", "4672 3,18,", "3809 2,15", ",7647 13,19,", "5802 37,41,6075 ", "44,49,5171"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 290552;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int N = 13;
    vector<string> roads = {"4,7,2993 ", "1,12,8937 1,", "6,6654 0,3", ",2755 2,", "10,4092 0,10,", "7898 0,6,14", "21 7,11,162", "4 0,8,6824 1", ",4,8603 1", ",5,7249 ", "6,9,5424"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 64474;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int N = 3;
    vector<string> roads = {"0,2,2882 0,1,6067"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 8949;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int N = 195;
    vector<string> roads = {"17,34,93094 125,134,46683 31,79,45123 72,135,62688", " 109,182,75288 101,116,83972 77,174,96704 109,130,", "66663 78,129,61611 15,89,89065 117,184,78880 47,19", "4,23616 171,191,62421 19,66,48734 98,171,95483 18,", "37,32290 30,70,27505 56,152,68157 67,113,36574 49,", "162,66280 1,47,57309 144,180,46278 47,141,90599 10", ",168,29431 27,150,45274 2,150,25915 20,70,61323 6,", "178,18177 3,83,18372 50,182,63910 28,83,85896 61,1", "76,56306 28,99,58240 127,158,14345 90,114,35645 52", ",134,61320 119,135,59945 104,179,11419 8,103,43284", " 137,155,23882 13,177,89451 36,140,35898 68,111,42", "187 3,177,99577 64,67,55598 63,103,87331 97,151,28", "261 127,164,41041 84,158,15888 0,170,51211 103,154", ",58132 113,130,60575 102,162,95410 3,53,10721 6,18", "7,20759 6,153,84049 69,126,74483 110,147,89179 20,", "146,99123 29,142,97163 121,172,51828 114,167,34714", " 63,166,34586 56,186,26235 69,90,96904 33,149,3222", "2 49,58,37137 65,104,27349 142,148,17402 28,132,68", "629 94,194,32298 25,46,47581 76,187,60785 175,185,", "93984 126,157,50709 38,117,75571 73,140,99050 5", "4,161,15495 37,193,78742 144,145,62669 94,161,6420", "6 100,129,70828 72,139,43464 92,184,14273 78,184", ",71505 2,77,94424 87,170,82484 104,160,87153 188,1", "91,88215 38,75,50977 112,156,59976 90,147,90775 81", ",184,53979 66,93,29579 81,91,18759 52,157,33331 11", "6,118,73221 21,37,50313 15,74,27959 63,131,24220 5", "5,194,21840 40,60,34047 12,57,93544 7,165,77451 12", "1,152,71773 120,127,81927 36,97,10237 36,177,25453", " 141,190,16904 96,184,63651 164,194,59462 28,88,59", "063 130,145,74324 42,67,90435 74,148,56476 80,142,", "27996 16,74,53336 65,168,97229 16,40,32469 11,35,2", "7641 100,159,41747 49,189,40142 21,107,28730 14,17", "9,31323 91,173,45116 32,177,43539 21,138,10792 57,", "76,97790 115,122,12538 98,152,94415 50,115,65486 8", "5,185,44305 164,181,37409 9,79,93128 0,28,20257 44", ",128,65974 82,183,29037 6,129,38624 5,72,20083 65,", "118,11485 78,105,72220 120,131,54390 51,97,96354 6", "1,115,50998 15,165,99594 34,98,21253 26,57,92488 4", "6,150,86368 64,123,93270 75,115,51552 41,66,38166 ", "88,95,86283 79,142,28990 67,192,50228 1,133,81827 ", "61,163,25174 38,111,59573 4,29,91107 48,153,23174 ", "2,124,81739 149,156,92953 104,124,48226 45,100,843", "14 11,176,52645 131,156,55480 0,43,36181 69,124,52", "114 22,142,57236 71,135,17026 111,162,48942 123,13", "8,56183 128,129,32232 53,169,44257 69,137,42899 20", ",72,97671 96,194,30951 3,86,90566 60,69,27655 13,5", "9,84385 106,126,23833 13,175,38202 24,180,72908 52", ",62,72272 30,143,78065 5,75,38568 183,194,94502 10", "4,121,77972 23,129,73034 108,140,71926 6,13,55558 ", "39,190,59931 68,152,58828 71,136,61255 57,93,38186"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 10776151;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int N = 195;
    vector<string> roads = {"52,62,72272 183,194,94502 137,155,23882 30,143,780", "65 32,177,43539 67,192,50228 109,182,75288 18,37,3", "2290 117,184,78880 78,184,71505 65,168,97229 110,1", "47,89179 5,75,38568 164,181,37409 20,72,97671 81,1", "84,53979 49,189,40142 6,13,55558 37,193,78742 113,", "130,60575 101,116,83972 104,160,87153 71,135,17026", " 100,159,41747 116,118,73221 41,66,38166 90,147,90", "775 3,53,10721 102,162,95410 114,167,34714 48,153,", "23174 74,148,56476 2,124,81739 39,190,59931 57,93,", "38186 69,90,96904 28,83,85896 7,165,77451 0,170,51", "211 61,176,56306 3,86,90566 52,134,61320 61,115,5", "0998 16,40,32469 72,135,62688 15,89,89065 68,152,5", "8828 109,130,66663 1,47,57309 60,69,27655 36,97,10", "237 92,184,14273 78,105,72220 121,172,51828 36,177", ",25453 90,114,35645 67,113,36574 33,149,32222 121,", "152,71773 71,136,61255 149,156,92953 56,152,68157 ", "6,187,20759 73,140,99050 56,186,26235 20,70,61323 ", "50,115,65486 127,164,41041 17,34,93094 141,190,169", "04 28,132,68629 120,131,54390 47,194,23616 104,121", ",77972 64,67,55598 47,141,90599 98,171,95483 13,59", ",84385 11,176,52645 164,194,59462 6,153,84049 78,1", "29,61611 126,157,50709 40,60,34047 84,158,15888 13", ",177,89451 1,133,81827 38,111,59573 130,145,74324 ", "63,131,24220 20,146,99123 91,173,45116 11,35,27641", " 142,148,17402 21,138,10792 8,103,43284 127,158,14", "345 69,124,52114 63,103,87331 66,93,29579 15,165,9", "9594 45,100,84314 22,142,57236 103,154,58132 0,43,", "36181 68,111,42187 120,127,81927 65,104,27349 76,1", "87,60785 57,76,97790 30,70,27505 188,191,88215 144", ",180,46278 23,129,73034 81,91,18759 6,129,38624 34", ",98,21253 53,169,44257 111,162,48942 24,180,72908 ", "115,122,12538 52,157,33331 64,123,93270 125,134,46", "683 72,139,43464 106,126,23833 6,178,18177 131,15", "6,55480 38,75,50977 63,166,34586 51,97,96354 79,14", "2,28990 16,74,53336 0,28,20257 50,182,63910 49,162", ",66280 5,72,20083 10,168,29431 108,140,71926 144,1", "45,62669 128,129,32232 97,151,28261 96,184,63651 1", "04,179,11419 69,137,42899 171,191,62421 55,194,218", "40 9,79,93128 61,163,25174 96,194,30951 19,66,487", "34 44,128,65974 28,88,59063 21,107,28730 29,142,97", "163 65,118,11485 75,115,51552 69,126,74483 2,77,94", "424 12,57,93544 13,175,38202 85,185,44305 4,29,911", "07 15,74,27959 87,170,82484 49,58,37137 77,174,967", "04 98,152,94415 88,95,86283 94,194,32298 14,179,31", "323 42,67,90435 27,150,45274 26,57,92488 21,37,503", "13 25,46,47581 31,79,45123 82,183,29037 80,142,279", "96 104,124,48226 100,129,70828 2,150,25915 3,83,18", "372 36,140,35898 123,138,56183 119,135,59945 28,99", ",58240 112,156,59976 38,117,75571 175,185,93984 3,", "177,99577 46,150,86368 94,161,64206 54,161,15495"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 10776151;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int N = 48;
    vector<string> roads = {"4,34,17687 25,31,60261 7", ",9,28535 16,18,78163 ", "2,32,80490 17,1", "8,65235 39,45,60969 8,20,6506", "1 19,32,78569 40,", "42,17794 0,2,85611 29", ",36,43842 18,35,49808 17", ",28,18389 15,17,55829", " 33,47,23557 38,42,4590", "1 32,33,49237 10,34,", "89694 21,32,34693 16,30", ",23905 11,44,25298 1,6,854", "94 10,19,98914 0,40,3", "5133 5,36,11085 0,2", "2,25607 38,43,13347 22,45", ",55840 22,24,2007", "9 41,45,94348 1,3,2", "8741 3,17,67139 5,33,36412 41,44", ",42000 9,47,83186 11,13,39", "758 43,46,64028 15,", "25,98379 2,37,32448 20,36,9", "9161 16,26,26707 12,21,92506 20,2", "3,78876 17,41,54648 14,2", "3,67921 19,27,66509"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 2516794;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int N = 12;
    vector<string> roads = {"3,5,58489 0,6,", "66952 1,8,", "35174 3,9,9", "3644 ", "1,10,83624 4,7", ",39498 2,6,203", "47 1,2,88831 2,4,", "20495 4,5,67565 ", "4,8,28044 0,4,75", "472 5,11,292", "75 1,7,62346 6,", "8,98214 4,", "9,95653 0,2,26", "008 8,10,62981 1,3,38578", " 2,11,39989 ", "5,6,44920 7,9,64", "941 6,9,36225 8,11,7", "9149 10,", "11,73382 4,11", ",86514 7,10,9", "0098 3,4,30021", " 1,5,11137 6,11,2", "9250 3,10,", "42682 2,5,5", "8418 5,10,33842 9", ",11,99384 5,7,325", "54 0,3,579", "02 7,11,8637", "1 1,4,55395 6,10,393", "42 3,11,71443 5,8,", "89049 7,8,5647", "2 2,7,67254 2,10,71328 0", ",7,16751 3,6,75", "911 9,10,72123 0,9,7", "3710 4,10,36979 2,", "3,25251 1,9,11542", " 0,10,72517 ", "0,11,95236 0,5", ",25165 3,7,35", "522 4,6,10167 ", "8,9,26340 1,6,10424 ", "5,9,76502 6,7,87025 ", "2,8,90495 3,8,9624", "9 0,1,23533 2,9,5009", "7 1,11,25925 ", "0,8,55787"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 215259;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int N = 3;
    vector<string> roads = {"0", ",", "1,", "6", "555", "3", " 1", ",", "2,", "4", "6", "5", "9", "6"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 112149;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int N = 183;
    vector<string> roads = {"42,155,959319 56,91,591985 0,126,480952 82,168,730", "871 29,182,296035 19,81,862434 43,125,629339 92,12", "7,173028 45,78,587366 1,144,546621 102,120,285098 ", "23,55,868961 129,136,836563 26,173,293496 74,135,8", "69958 112,153,879421 33,162,838931 44,71,201659 49", ",128,515063 90,121,320608 15,31,638796 90,145,2546", "46 139,164,413323 32,149,164627 130,180,293971 14,", "81,770313 54,102,903304 87,178,594800 33,126,42332", "5 87,117,813593 2,167,694377 104,160,928462 71,86,", "560971 50,182,991119 13,137,291179 141,168,818555 ", "79,142,573411 97,137,346011 64,163,741192 102,134,", "117020 47,100,481049 137,159,133682 20,46,127566 1", "6,158,787116 61,157,942527 57,136,269067 24,157,94", "4899 83,114,921014 56,128,469286 28,148,734294 92,", "105,289470 23,100,382108 58,161,439160 4,119,81130", "4 59,170,323654 53,70,803772 41,182,670447 128,176", ",843421 29,69,710547 49,110,111145 2,7,933774 122,", "135,975367 22,87,274159 58,148,245922 80,132,36612", "8 95,133,939648 64,177,767708 130,133,519629 2,166", ",800768 15,83,858117 64,117,691213 40,156,151531 1", "65,179,669745 116,137,251360 36,62,728203 19,38,76", "0468 48,63,668742 5,16,600139 57,123,868196 71,109", ",380949 62,87,347939 48,98,270639 21,181,311590 73", ",149,643657 43,139,890156 131,150,886224 73,80,898", "308 101,136,661075 71,174,554007 81,141,646986 37,", "59,471474 24,43,319995 83,151,108864 40,65,8081", "85 73,92,366106 87,138,702045 85,89,794575 18,147,", "568363 13,16,243271 65,92,143222 124,129,567292 35", ",142,808739 85,90,685707 14,103,493889 93,141,3444", "26 24,34,234388 43,172,967952 132,169,617671 5,109", ",879966 52,158,558238 30,170,554453 53,149,893767 ", "86,146,678994 64,72,619122 28,78,116461 10,60,4345", "80 46,70,914627 105,140,750994 3,34,702899 56,84,7", "99027 106,173,238002 102,169,220659 63,74,422894 1", "12,180,352043 39,160,167013 13,138,822595 4,9,8702", "48 98,108,492995 15,42,992629 0,66,488755 17,45,96", "2081 47,90,426905 42,119,636782 38,51,521619 45,84", ",585099 45,96,670268 12,121,853463 148,162,532782 ", "75,79,208086 21,88,696507 65,68,556111 0,10,611297", " 34,171,958716 88,116,211413 23,27,396923 17,23,85", "9073 67,97,761598 139,165,457122 6,144,480134 8,22", ",781889 76,91,941012 21,81,126375 11,131,483052 26", ",57,251794 135,157,756395 18,124,784994 58,115,347", "341 37,180,569281 70,87,281974 128,133,700528 15,1", "75,687774 35,127,356514 26,119,948412 17,25,817478", " 59,152,407927 77,102,970535 39,67,199231 21,113,4", "58352 42,94,245065 118,177,499922 13,29,161721 49,", "149,100705 128,131,826127 45,119,480787 119,154,88", "3583 107,109,331741 47,74,292928 99,117,326519 16,", "166,692373 111,171,511549 6,12,778165 0,143,757758"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 104221483;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int N = 183;
    vector<string> roads = {"135,157,756395 139,164,413323 17,25,817478 93,141,", "344426 95,133,939648 59,152,407927 17,45,962081 10", "7,109,331741 39,67,199231 132,169,617671 148,162,5", "32782 130,180,293971 29,69,710547 85,89,794575 32,", "149,164627 37,180,569281 71,174,554007 34,171,9587", "16 49,128,515063 67,97,761598 102,134,117020 79,14", "2,573411 82,168,730871 112,153,879421 64,163,74119", "2 106,173,238002 76,91,941012 38,51,521619 26,119,", "948412 71,86,560971 21,88,696507 111,171,511549 43", ",139,890156 0,10,611297 90,145,254646 119,154,8835", "83 15,175,687774 64,177,767708 87,178,594800 0,143", ",757758 6,144,480134 87,117,813593 129,136,836563 ", "65,68,556111 64,117,691213 30,170,554453 97,137,34", "6011 83,114,921014 4,9,870248 35,142,808739 19,8", "1,862434 92,127,173028 118,177,499922 24,34,234388", " 0,66,488755 2,167,694377 2,166,800768 86,146,6789", "94 43,172,967952 42,94,245065 23,27,396923 35,127,", "356514 21,181,311590 61,157,942527 13,137,291179 1", "12,180,352043 90,121,320608 42,119,636782 4,119,81", "1304 26,57,251794 70,87,281974 18,147,568363 73,92", ",366106 28,78,116461 1,144,546621 104,160,928462 8", "1,141,646986 53,149,893767 116,137,251360 102,120,", "285098 59,170,323654 85,90,685707 131,150,886224 1", "3,16,243271 99,117,326519 102,169,220659 49,149,10", "0705 83,151,108864 15,31,638796 0,126,480952 98,10", "8,492995 15,42,992629 2,7,933774 92,105,289470 16,", "166,692373 33,126,423325 105,140,750994 13,29,1617", "21 73,80,898308 47,90,426905 5,109,879966 45,84,58", "5099 64,72,619122 17,23,859073 58,148,245922 45,96", ",670268 8,22,781889 10,60,434580 88,116,211413 62,", "87,347939 23,55,868961 45,78,587366 128,131,826127", " 165,179,669745 58,161,439160 12,121,853463 14,103", ",493889 101,136,661075 77,102,970535 74,135,869958", " 36,62,728203 40,156,151531 139,165,457122 58,115,", "347341 43,125,629339 56,84,799027 6,12,778165 47,7", "4,292928 48,63,668742 54,102,903304 128,176,843421", " 63,74,422894 124,129,567292 37,59,471474 3,34,70", "2899 42,155,959319 13,138,822595 130,133,519629 13", "7,159,133682 46,70,914627 75,79,208086 21,81,12637", "5 33,162,838931 5,16,600139 47,100,481049 48,98,27", "0639 122,135,975367 41,182,670447 18,124,784994 44", ",71,201659 39,160,167013 53,70,803772 26,173,29349", "6 50,182,991119 141,168,818555 40,65,808185 29,182", ",296035 14,81,770313 57,136,269067 52,158,558238 4", "9,110,111145 28,148,734294 71,109,380949 65,92,143", "222 80,132,366128 24,157,944899 21,113,458352 20,4", "6,127566 73,149,643657 22,87,274159 57,123,868196 ", "23,100,382108 87,138,702045 24,43,319995 56,91,591", "985 19,38,760468 56,128,469286 15,83,858117 128,13", "3,700528 45,119,480787 16,158,787116 11,131,483052"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 104221483;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int N = 45;
    vector<string> roads = {"21,24,48950", "1 17,42,499", "371 18,21,7", "97847 20,24,2044", "83 9,23,310", "751 13,21,3", "68997 1,18", ",864646 38,39,6", "57412 4,12,56", "4044 3,44,", "255662 0,40,838", "217 4,38,189530 2", ",28,648751 28,40,", "390040 ", "27,33,886942", " 24,37,115", "410 10", ",33,404998", " 12,20,15399", "9 8,13,8798", "70 16,31", ",483686 ", "32,43,226258", " 21,33", ",570923 8,34,", "176233 15", ",23,556003 1", ",44,339899 29,44", ",901724 7,3", "0,646080 13,35,", "515020 24,41,", "723051 32,4", "0,615019 ", "9,13,564693 1", "6,19,140", "851 36,38", ",650563 21,42,93", "7845 21,40,47895", "4 19,29,2", "88874 5,40,8508", "31 18,22,436529", " 26,29,476021 ", "11,19,393898 ", "17,30,9", "22764 2", "5,31,833497 1", "4,43,443792", " 6,14,524343"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 23217822;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int N = 11;
    vector<string> roads = {"2,6,342640 1,10,983827 3,8,64", "1872 5,10,178368 8,9,95739", "9 5,8,958782 1,4,531", "645 1,3,593032 2,10,73", "8306 0,1,623272 0,10,17", "4136 5,9,736760 1,2,39793", "7 3,6,752389 2,3,66608", "0 2,9,580285 7,9,447235 0,8,447100 1,", "8,862173 2,8,564317 4,", "5,311747 0,4,751615 6,8,1", "56810 7,10,952515 3,5,639104 0,5", ",945137 6,7,933902 7,8,138973 0,9", ",739635 5,7,659295 6,9,409100 4,10,72516", "8 1,6,443668 0,2,720473 2,7,21", "8759 3,10,589317 0,3,990599 3,9", ",236780 1,5,248610 4,6,167375 5,6,323", "387 1,7,120486 0,6,154199 ", "4,7,507848 4,9,497679 2,5,1170", "57 6,10,687248 3,7,438885 8,10,29423", "4 2,4,354122 1,9,952623 9,10,3814", "86 3,4,857612 4,8,591620 0,7,818365"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1825670;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int N = 2;
    vector<string> roads = {"0", ",", "1", ",", "3", "3", "8", "5", "7", "5"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 338575;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int N = 171;
    vector<string> roads = {"11,168,2411007 106,163,1054994 63,168,9787637 75,1", "09,4786711 92,117,9266413 4,137,3410590 72,114,803", "2446 23,155,4606532 45,91,3088711 43,128,8545168 2", "3,137,5178185 36,134,9530182 105,111,4583719 116,1", "30,2922549 4,156,5522871 47,125,4622621 30,53,5712", "161 82,125,6511628 105,142,6326709 149,168,1562408", " 94,119,5010798 112,142,3688766 30,169,2372009 71,", "103,9107154 81,170,9239033 97,118,7199242 38,108,", "8472260 24,60,2796937 36,135,5266946 65,118,700579", "8 105,123,4697137 4,96,6222919 99,140,1165444 3,59", ",3896078 16,148,1676062 4,25,8032292 35,162,416191", "6 71,135,5093665 46,114,7072735 67,165,7844918 101", ",151,4105613 126,149,2026245 3,74,3843370 12,80,44", "31318 29,105,2634259 19,153,6939454 13,145,2586555", " 64,129,5743540 126,150,6140118 125,162,7856023 18", ",139,5137685 21,101,6708360 138,157,2520135 140,15", "2,4074115 17,139,6622856 79,133,1905579 14,106,472", "9328 72,95,2733472 56,66,6895334 22,26,7265472 28,", "140,3426149 55,84,9857274 0,41,9764495 50,92,67842", "59 108,136,4503402 7,76,7059087 11,138,9115234 40", ",110,8836930 54,118,8178979 30,64,2255711 10,133,9", "009760 42,60,7586127 10,62,1497093 15,166,4427010 ", "55,91,5546632 88,153,3110296 20,63,3936430 59,131,", "4533650 56,158,9371088 17,88,4242120 12,108,616946", "1 4,99,7469602 17,144,5327485 74,120,3622211 18,55", ",6617054 46,57,7334774 14,94,2572306 15,50,2073554", " 77,126,1407296 76,114,8157158 78,128,4827255 95,1", "70,5021509 3,88,3111800 9,146,4550169 11,134,51724", "44 49,165,1825247 25,102,8638648 7,163,2221892 72,", "87,7899052 58,159,5855384 146,147,2292081 33,119,1", "481771 18,101,4292029 50,132,5445607 10,35,1455307", " 70,96,1147315 104,164,1814917 46,124,2837030 8,16", "6,7064638 3,124,7090252 8,107,5874106 150,167,4930", "370 94,129,3746448 47,160,8742972 56,89,9074431 23", ",61,5848032 51,118,4022969 61,92,2986362 86,144,79", "29549 65,109,1724495 24,125,9133248 27,82,2693629 ", "114,135,5815255 1,108,1414885 51,121,4287827 2,59,", "1262281 93,116,6785666 80,153,8127209 48,116,30568", "91 58,105,8415512 25,127,7993045 78,115,5600732 9,", "119,2587795 116,122,9934517 92,104,1712992 18,142,", "2108743 34,160,7885622 25,52,4607777 68,157,134421", "0 38,141,4412589 4,161,6146185 113,154,4097072 29,", "125,1894758 6,98,2070195 85,127,6478581 53,73,7585", "848 32,54,3079163 25,51,1408308 37,50,8029423 0,12", "9,2873889 22,44,8864737 77,83,6787176 56,69,145885", "6 16,158,9436602 45,165,3985244 39,146,1022335 110", ",150,4778673 78,88,8248029 13,58,9551643 31,141,94", "47539 51,88,7467337 16,61,6416485 86,130,2413154 1", "0,90,9883084 5,157,2014190 48,113,5772647 20,98,32", "56203 26,162,5788673 80,143,3595980 34,100,2072064"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 880205388;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int N = 171;
    vector<string> roads = {"29,125,1894758 46,57,7334774 72,87,7899052 12,108,", "6169461 56,89,9074431 58,105,8415512 99,140,116544", "4 17,144,5327485 21,101,6708360 37,50,8029423 105,", "142,6326709 97,118,7199242 112,142,3688766 79,133,", "1905579 106,163,1054994 54,118,8178979 16,158,9436", "602 86,144,7929549 48,116,3056891 72,114,8032446 6", "4,129,5743540 18,101,4292029 149,168,1562408 15,16", "6,4427010 146,147,2292081 35,162,4161916 25,102,86", "38648 36,135,5266946 22,44,8864737 92,117,9266413 ", "126,149,2026245 43,128,8545168 50,132,5445607 55,9", "1,5546632 3,88,3111800 25,127,7993045 51,118,40229", "69 108,136,4503402 55,84,9857274 75,109,4786711 20", ",98,3256203 23,61,5848032 10,133,9009760 34,100,20", "72064 9,146,4550169 80,143,3595980 25,51,1408308 9", "4,119,5010798 8,107,5874106 10,35,1455307 114,135,", "5815255 59,131,4533650 67,165,7844918 77,126,14072", "96 17,139,6622856 13,58,9551643 94,129,3746448 27,", "82,2693629 93,116,6785666 4,161,6146185 19,153,693", "9454 58,159,5855384 150,167,4930370 10,90,9883084 ", "63,168,9787637 11,168,2411007 12,80,4431318 5,15", "7,2014190 56,69,1458856 4,25,8032292 49,165,182524", "7 4,156,5522871 47,125,4622621 138,157,2520135 76,", "114,8157158 56,158,9371088 126,150,6140118 4,96,62", "22919 4,137,3410590 29,105,2634259 7,163,2221892 3", ",124,7090252 0,129,2873889 88,153,3110296 48,113,5", "772647 116,130,2922549 8,166,7064638 81,170,923903", "3 33,119,1481771 105,111,4583719 105,123,4697137 7", "1,135,5093665 6,98,2070195 18,142,2108743 38,108,8", "472260 140,152,4074115 95,170,5021509 110,150,4778", "673 47,160,8742972 78,115,5600732 45,165,3985244 2", "4,60,2796937 26,162,5788673 0,41,9764495 50,92,678", "4259 17,88,4242120 116,122,9934517 40,110,8836930 ", "125,162,7856023 53,73,7585848 80,153,8127209 74,12", "0,3622211 32,54,3079163 3,59,3896078 38,141,441258", "9 11,134,5172444 56,66,6895334 86,130,2413154 70,9", "6,1147315 18,139,5137685 25,52,4607777 45,91,30887", "11 20,63,3936430 24,125,9133248 18,55,6617054 16,6", "1,6416485 65,109,1724495 22,26,7265472 34,160,7885", "622 46,124,2837030 78,88,8248029 61,92,2986362 31,", "141,9447539 82,125,6511628 77,83,6787176 30,64,225", "5711 30,169,2372009 23,155,4606532 68,157,1344210 ", "14,94,2572306 71,103,9107154 36,134,9530182 28,140", ",3426149 16,148,1676062 30,53,5712161 14,106,47293", "28 4,99,7469602 9,119,2587795 101,151,4105613 11,1", "38,9115234 65,118,7005798 42,60,7586127 104,164,18", "14917 39,146,1022335 10,62,1497093 51,88,7467337 1", ",108,1414885 13,145,2586555 23,137,5178185 46,114,", "7072735 113,154,4097072 85,127,6478581 51,121,4287", "827 15,50,2073554 92,104,1712992 2,59,1262281 78,1", "28,4827255 3,74,3843370 7,76,7059087 72,95,2733472"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 880205388;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int N = 42;
    vector<string> roads = {"1,4,4290097 24,31,3059580 31,", "35,3948757 13,39,9084858 11,22,9102945", " 8,14,6304428 16,26,2222250 6,29,3092364", " 20,26,6804722 15,40,1871029 2,26,3840601", " 19,35,2165454 7,29,1042327 22,34,2994868 17,3", "0,8579018 26,33,1097011 4,30,9506380 14,38,2849884", " 4,20,5453207 20,23,3917177 36,41,3422465", " 3,28,3408032 7,10,2058380 30,40,82", "80788 0,10,5555138 5,28,9995560 35,37,292", "4611 21,27,7180617 14,34", ",3932503 19,21,5685023 11,40,8", "902768 17,27,1846403 3,4,443831", "5 9,18,4296988 12,17,2911321 6,34,", "4851865 13,28,8858517 6,25,8747652 32,36,3681459 1", "8,20,8883322 15,32,8482610"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 209571294;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int N = 10;
    vector<string> roads = {"0,4,4097175", " 2,4,333804", "2 1,5,5843775 0,", "7,6039763", " 7,9,2102264 8,9,", "491593", "9 5,9,55818", "85 0,2,875035", "4 1,4,8587235 5,", "7,8598724 1,8,7054", "517 0,8,22874", "92 4,9,6", "540630 0,3", ",2927238 3,9", ",8949047 ", "1,2,4225988 4", ",5,7717735 3,6", ",9379984 6,9,1", "876477 0,6,1", "035336 2,8,", "8765963 7,8,", "1246904 0,5", ",2015502 4,7,5908374 3", ",4,8925540 3,7,45", "24390 6,7,46135", "63 2,7,33", "91523 2,9,5354672", " 1,7,3578507 ", "3,8,3682244 5,8,", "3949210 5,6", ",3476117 6,8", ",1356559 0", ",9,1331267 1,3,73", "99601 2,5,6894647 2,3", ",4555388 0,1,", "5183900 4,6,55", "17309 4,8,4758034", " 3,5,3700671 1,6,21", "52125 2", ",6,8409662 1,", "9,5807676"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 18794496;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int N = 2;
    vector<string> roads = {"0", ",", "1", ",", "4", "69", "25", "2", "5"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 4692525;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int N = 161;
    vector<string> roads = {"8,74,10000000 73,95,10000000 56,151,10000000 117,1", "40,10000000 0,152,10000000 13,69,10000000 19,119,1", "0000000 55,82,10000000 19,48,10000000 12,68,100000", "00 85,147,10000000 4,14,10000000 75,97,10000000 35", ",132,10000000 43,112,10000000 29,41,10000000 5,153", ",10000000 10,118,10000000 14,37,10000000 19,71,100", "00000 79,113,10000000 47,75,10000000 97,131,100000", "00 76,145,10000000 25,27,10000000 104,122,100000", "00 8,66,10000000 99,129,10000000 1,101,10000000 8,", "91,10000000 17,82,10000000 112,157,10000000 50,107", ",10000000 21,116,10000000 108,121,10000000 18,", "38,10000000 45,54,10000000 86,132,10000000 93,147,", "10000000 3,141,10000000 75,159,10000000 127,140,10", "000000 103,130,10000000 95,110,10000000 16,142,100", "00000 7,70,10000000 31,108,10000000 23,76,10000000", " 2,38,10000000 34,116,10000000 30,42,10000000 62,1", "33,10000000 107,143,10000000 43,106,10000000 33,38", ",10000000 83,155,10000000 56,134,10000000 44,129,1", "0000000 96,109,10000000 117,143,10000000 52,53,100", "00000 18,69,10000000 23,53,10000000 102,136,100000", "00 24,97,10000000 9,146,10000000 2,70,10000000", " 17,123,10000000 3,148,10000000 89,149,10000000 6,", "60,10000000 67,111,10000000 58,150,10000000 109,12", "3,10000000 46,106,10000000 28,92,10000000 23,138,1", "0000000 14,57,10000000 17,87,10000000 47,153,10000", "000 80,157,10000000 105,118,10000000 14,79,1000000", "0 78,124,10000000 13,36,10000000 67,100,10000000 1", "08,140,10000000 27,139,10000000 44,139,10000000 16", ",54,10000000 39,93,10000000 48,73,10000000 22,37,1", "0000000 94,106,10000000 38,152,10000000 55,137,100", "00000 11,68,10000000 53,85,10000000 114,143,100000", "00 44,72,10000000 49,154,10000000 51,59,10000000 9", "8,147,10000000 49,60,10000000 75,126,10000000 84,1", "38,10000000 146,160,10000000 46,65,10000000 50,89,", "10000000 16,90,10000000 10,129,10000000 72,152,100", "00000 38,151,10000000 14,88,10000000 20,97,1000000", "0 10,60,10000000 26,61,10000000 36,88,10000000 18,", "29,10000000 4,120,10000000 1,26,10000000 87,121,10", "000000 50,125,10000000 48,92,10000000 53,128,1000", "0000 37,142,10000000 120,158,10000000 2,137,100000", "00 10,136,10000000 52,64,10000000 3,129,10000000 2", "8,77,10000000 28,157,10000000 73,81,10000000 45,97", ",10000000 30,157,10000000 85,156,10000000 66,86,10", "000000 81,150,10000000 115,119,10000000 4,146,1000", "0000 2,100,10000000 62,82,10000000 22,95,100000", "00 117,155,10000000 68,107,10000000 51,143,1000000", "0 15,80,10000000 8,78,10000000 32,71,10000000 57,1", "16,10000000 62,135,10000000 57,63,10000000 48,74,1", "0000000 16,144,10000000 40,114,10000000 26,55,1000", "0000 31,122,10000000 6,130,10000000 39,41,10000000"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1600000000;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int N = 161;
    vector<string> roads = {"1,101,10000000 8,74,10000000 18,29,10000000 39,41,", "10000000 108,121,10000000 46,65,10000000 45,54,100", "00000 83,155,10000000 44,129,10000000 17,82,100000", "00 38,151,10000000 56,134,10000000 24,97,10000000 ", "14,79,10000000 102,136,10000000 53,128,10000000 19", ",48,10000000 120,158,10000000 73,81,10000000 38,15", "2,10000000 6,60,10000000 23,53,10000000 73,95,1000", "0000 0,152,10000000 6,130,10000000 33,38,10000000 ", "30,157,10000000 49,60,10000000 20,97,10000000 52,5", "3,10000000 114,143,10000000 75,159,10000000 81,150", ",10000000 55,137,10000000 18,69,10000000 16,90,100", "00000 76,145,10000000 108,140,10000000 19,119,1000", "0000 26,55,10000000 16,142,10000000 26,61,10000000", " 7,70,10000000 17,87,10000000 95,110,10000000", " 2,100,10000000 85,156,10000000 85,147,10000000 18", ",38,10000000 12,68,10000000 57,63,10000000 2,38,10", "000000 62,133,10000000 44,72,10000000 5,153,100000", "00 47,153,10000000 27,139,10000000 8,78,10000000 1", "6,144,10000000 52,64,10000000 13,36,10000000 34,11", "6,10000000 45,97,10000000 3,129,10000000 93,147,10", "000000 127,140,10000000 43,112,10000000 21,116,100", "00000 10,60,10000000 56,151,10000000 109,123,1", "0000000 15,80,10000000 10,129,10000000 31,108,1000", "0000 10,118,10000000 23,138,10000000 67,111,100000", "00 11,68,10000000 22,37,10000000 104,122,10000000 ", "1,26,10000000 51,59,10000000 99,129,10000000 94,10", "6,10000000 16,54,10000000 13,69,10000000 117,143,1", "0000000 98,147,10000000 50,125,10000000 55,82,1000", "0000 117,140,10000000 115,119,10000000 50,89,10000", "000 68,107,10000000 22,95,10000000 97,131,10000000", " 146,160,10000000 39,93,10000000 28,77,10000000 4,", "146,10000000 84,138,10000000 103,130,10000000 17,1", "23,10000000 89,149,10000000 25,27,10000000 9,146,1", "0000000 57,116,10000000 58,150,10000000 53,85,", "10000000 31,122,10000000 80,157,10000000 66,86,100", "00000 87,121,10000000 79,113,10000000 50,107,10000", "000 107,143,10000000 4,14,10000000 19,71,10000000 ", "105,118,10000000 40,114,10000000 72,152,10000000 1", "4,88,10000000 28,92,10000000 28,157,10000000 8,91,", "10000000 8,66,10000000 37,142,10000000 62,135,1000", "0000 29,41,10000000 43,106,10000000 4,120,10000000", " 96,109,10000000 35,132,10000000 3,148,10000000 30", ",42,10000000 3,141,10000000 47,75,10000000 51,143,", "10000000 49,154,10000000 10,136,10000000 44,139,10", "000000 67,100,10000000 48,92,10000000 2,137,100000", "00 62,82,10000000 75,126,10000000 112,157,10000000", " 2,70,10000000 48,73,10000000 14,37,10000000 23,76", ",10000000 32,71,10000000 117,155,10000000 78,124,1", "0000000 86,132,10000000 75,97,10000000 36,88,1000", "0000 14,57,10000000 46,106,10000000 48,74,10000000"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1600000000;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int N = 40;
    vector<string> roads = {"30,31,10000000 17,37,10000000 23,26,10000000 8,18,", "10000000 25,26,10000000 0,29,10000000 8,16,1000000", "0 2,5,10000000 21,26,10000000 6,28,10000000 3,27,1", "0000000 6,21,10000000 2,28,10000000 2,14,10000000 ", "5,36,10000000 7,24,10000000 19,21,10000000 2,27,10", "000000 5,22,10000000 20,36,10000000 31,32,10000000", " 9,39,10000000 35,36,10000000 8,35,10000000 3,11,1", "0000000 7,26,10000000 9,13,10000000 4,32,10000000 ", "4,7,10000000 22,23,10000000 15,28,10000000 3,23,10", "000000 28,31,10000000 33,34,10000000 7,38,10000000", " 18,32,10000000 4,26,10000000 25,33,10000000 5,13,", "10000000 3,18,10000000 13,32,10000000 32,39,100000", "00 18,27,10000000 1,39,10000000 16,23,10000000 7,3", "0,10000000 18,36,10000000 19,20,10000000 17,24,100", "00000 6,30,10000000 7,14,10000000 9,10,10000000 3,", "26,10000000 14,33,10000000 2,35,10000000 14,23,100", "00000 19,24,10000000 24,29,10000000 35,38,10000000", " 0,33,10000000 14,37,10000000 4,27,10000000 16,22,", "10000000 13,25,10000000 15,32,10000000 5,11,100000", "00 3,14,10000000 28,30,10000000 32,34,10000000 15,", "23,10000000 18,21,10000000 14,22,10000000 14,36,10", "000000 23,32,10000000 11,33,10000000 8,9,10000000 ", "17,19,10000000 7,20,10000000 13,36,10000000 4,11,1", "0000000 11,39,10000000 32,35,10000000 0,6,1000000", "0 3,13,10000000 0,9,10000000 7,12,10000000 21,30,1", "0000000 15,36,10000000 25,29,10000000 12,26,100000", "00 5,14,10000000 18,30,10000000 22,31,10000000 13,", "33,10000000 5,32,10000000 10,39,10000000 12,18,100", "00000 4,12,10000000 6,25,10000000 10,11,10000000 1", "2,34,10000000 5,9,10000000 4,38,10000000 6,12,1000", "0000 15,27,10000000 22,39,10000000 15,21,10000000 ", "16,29,10000000 23,31,10000000 9,31,10000000 13,15,", "10000000 9,23,10000000 3,12,10000000 22,30,1000000", "0 37,38,10000000 28,32,10000000 20,25,10000000 13,", "19,10000000 17,33,10000000 2,16,10000000 3,21,1000", "0000 8,17,10000000 29,31,10000000 10,31,10000000 5", ",25,10000000 3,30,10000000 12,13,10000000 27,33,10", "000000 4,19,10000000 2,17,10000000 24,32,10000000 ", "30,35,10000000 23,24,10000000 4,18,10000000 5,26,1", "0000000 17,27,10000000 8,28,10000000 15,39,1000000", "0 14,34,10000000 16,36,10000000 14,18,10000000 22,", "38,10000000 21,39,10000000 18,31,10000000 25,35,10", "000000 1,15,10000000 0,31,10000000 13,31,10000000 ", "7,9,10000000 5,34,10000000 33,39,10000000 11,12", ",10000000 23,39,10000000 7,36,10000000 13,29,10000", "000 24,33,10000000 0,7,10000000 6,31,10000000 22,2", "9,10000000 0,5,10000000 7,25,10000000 16,20,100000", "00 26,34,10000000 3,39,10000000 12,22,10000000 23,", "27,10000000 14,39,10000000 15,24,10000000 18,33,", "10000000 0,15,10000000 4,35,10000000 4,20,10000000"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 390000000;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int N = 10;
    vector<string> roads = {"2,4,1", "0000000", " 4", ",8,100", "0000", "0 1", ",6,100", "00", "000 ", "0,6,", "1000", "000", "0 4", ",7", ",10", "00", "00", "00 ", "6,9", ",1000", "000", "0 1,5,", "100", "000", "00 3,", "9,100", "000", "0", "0 0", ",4", ",10", "000000"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 90000000;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int N = 2;
    vector<string> roads = {"0", ",1", ",1", "00", "00", "00", "0"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 10000000;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int N = 171;
    vector<string> roads = {"0,140,9890554 79,80,9091377 88,133,9638165 19,141,", "9454802 56,146,9089493 28,145,9951099 59,162,96467", "80 110,134,9330806 10,130,9717779 21,52,9074613 59", ",76,9360665 68,163,9963634 167,169,9308528 45,167,", "9292621 34,110,9914336 15,158,9395911 131,153,9443", "083 32,122,9796598 81,141,9152392 31,75,9321205 64", ",124,9482276 62,160,9972267 137,152,9999381 63,69,", "9745624 29,36,9655732 47,64,9928081 57,166,9504303", " 5,78,9435480 48,168,9382868 39,145,9420894 38,148", ",9224475 5,8,9259144 54,110,9162063 105,154,933200", "8 150,152,9213101 39,74,9302133 72,156,9929472 126", ",134,9195808 9,162,9226554 1,89,9297310 82,111,906", "9182 3,15,9340751 14,78,9650844 49,63,9746069 33,1", "22,9707254 11,26,9252418 40,143,9544600 18,93,9256", "001 114,147,9014708 118,167,9120214 1,127,9844850 ", "7,129,9540999 25,149,9405806 32,81,9642617 116,139", ",9986643 12,163,9333578 11,57,9570701 127,163,9278", "301 91,113,9287696 49,84,9218178 107,170,9635289 7", "7,156,9782455 7,92,9939551 70,132,9911317 17,84,98", "68921 1,44,9723703 17,67,9187531 93,144,9319879 46", ",61,9437861 22,135,9449141 10,64,9064137 23,28,924", "2089 65,99,9381939 5,133,9486820 2,24,9202297 95,1", "69,9674151 4,140,9759493 6,75,9464142 104,163,9119", "113 90,124,9003954 24,148,9449632 82,139,9312771 2", "5,155,9992819 41,125,9574487 166,170,9272572 65,11", "4,9265900 46,53,9860446 149,157,9360154 87,153,977", "2267 17,102,9396884 81,110,9824643 145,154,9426225", " 27,108,9777843 81,115,9169760 73,154,9050080 100,", "160,9553614 49,98,9177962 42,98,9936506 11,13", "8,9159685 83,168,9302763 89,114,9036097 37,152,978", "9769 20,49,9065113 61,93,9643629 38,82,9851246 16,", "161,9132619 24,29,9139830 16,126,9751786 14,170,96", "48230 44,50,9403032 52,98,9309029 41,113,9117300 3", ",98,9701342 2,84,9482417 4,112,9293815 33,60,90459", "54 13,99,9282329 162,165,9936270 37,85,9496682 119", ",132,9380271 62,130,9479526 27,128,9037608 55,87,9", "590946 2,30,9059231 22,142,9129340 1,73,9925758 1", "3,46,9322606 21,64,9253614 35,160,9190400 19,43,90", "14839 79,120,9388815 55,66,9635281 109,117,9673470", " 86,121,9721659 124,129,9133285 91,108,9484076 14,", "75,9341779 59,102,9853977 47,117,9230466 72,164,90", "16299 11,109,9919972 63,143,9241050 64,97,9350502 ", "0,123,9262467 87,132,9078169 41,159,9185932 56,79,", "9498323 16,96,9792602 103,142,9911899 83,84,928705", "5 51,80,9587282 86,94,9030138 31,118,9330941 39,10", "9,9217576 113,149,9935847 26,164,9535439 41,121,92", "58005 26,101,9260778 139,151,9776166 93,136,907898", "1 24,71,9612060 56,109,9510049 57,112,9567278 141,", "166,9355953 87,149,9818553 1,152,9208957 21,106,95", "32273 58,151,9662978 103,130,9393846 29,94,9221295"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1607017722;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int N = 171;
    vector<string> roads = {"93,136,9078981 83,168,9302763 25,155,9992819 54,11", "0,9162063 87,153,9772267 34,110,9914336 1,89,92973", "10 124,129,9133285 24,29,9139830 167,169,9308528 7", "0,132,9911317 119,132,9380271 109,117,9673470 14,7", "5,9341779 62,160,9972267 166,170,9272572 87,132", ",9078169 38,148,9224475 22,142,9129340 90,124,9003", "954 0,123,9262467 2,24,9202297 41,113,9117300 93,1", "44,9319879 25,149,9405806 118,167,9120214 65,99,93", "81939 79,120,9388815 149,157,9360154 16,96,9792602", " 7,129,9540999 55,87,9590946 61,93,9643629 83,84,9", "287055 103,142,9911899 59,76,9360665 1,127,9844850", " 62,130,9479526 51,80,9587282 10,130,9717779 56,14", "6,9089493 73,154,9050080 4,140,9759493 127,163,927", "8301 21,64,9253614 56,79,9498323 82,111,9069182 10", ",64,9064137 82,139,9312771 31,75,9321205 13,99,928", "2329 17,84,9868921 65,114,9265900 64,97,9350502 63", ",69,9745624 1,73,9925758 81,115,9169760 27,108,977", "7843 19,43,9014839 18,93,9256001 19,141,9454802 5,", "133,9486820 29,36,9655732 13,46,9322606 32,81,9642", "617 131,153,9443083 4,112,9293815 116,139,9986643 ", "9,162,9226554 6,75,9464142 46,53,9860446 137,152,9", "999381 35,160,9190400 26,164,9535439 46,61,9437861", " 72,164,9016299 47,117,9230466 52,98,9309029 39,10", "9,9217576 33,122,9707254 3,15,9340751 55,66,963528", "1 37,152,9789769 11,138,9159685 14,78,9650844 11,5", "7,9570701 64,124,9482276 21,106,9532273 48,168,938", "2868 39,145,9420894 16,126,9751786 11,26,9252418 4", "0,143,9544600 113,149,9935847 22,135,9449141 21,52", ",9074613 107,170,9635289 57,166,9504303 1,44,97237", "03 56,109,9510049 5,78,9435480 17,67,9187531 45,1", "67,9292621 95,169,9674151 63,143,9241050 17,102,93", "96884 110,134,9330806 91,108,9484076 7,92,9939551 ", "86,121,9721659 11,109,9919972 162,165,9936270 29,9", "4,9221295 24,148,9449632 150,152,9213101 15,158,93", "95911 145,154,9426225 141,166,9355953 41,159,91859", "32 23,28,9242089 139,151,9776166 49,84,9218178 5,8", ",9259144 72,156,9929472 57,112,9567278 27,128,903", "7608 26,101,9260778 24,71,9612060 81,110,9824643 8", "1,141,9152392 89,114,9036097 38,82,9851246 87,149", ",9818553 88,133,9638165 28,145,9951099 31,118,9330", "941 103,130,9393846 79,80,9091377 14,170,9648230 4", "9,63,9746069 114,147,9014708 68,163,9963634 42,98,", "9936506 41,121,9258005 104,163,9119113 77,156,9782", "455 2,30,9059231 105,154,9332008 58,151,9662978 2,", "84,9482417 16,161,9132619 49,98,9177962 41,125,957", "4487 0,140,9890554 1,152,9208957 59,102,9853977 33", ",60,9045954 126,134,9195808 32,122,9796598 20,49,9", "065113 39,74,9302133 91,113,9287696 47,64,9928081 ", "37,85,9496682 59,162,9646780 100,160,9553614 44,50", ",9403032 86,94,9030138 12,163,9333578 3,98,9701342"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1607017722;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int N = 42;
    vector<string> roads = {"25,41,9794498 12,41,9478466 13,22,931459", "2 31,39,9658670 2,5,9834324 22", ",40,9083310 12,21,9419903 0,20,98067", "87 10,20,9330815 21,32,9544519 8,23,", "9353711 16,38,9439773 8,30,9839687", " 1,29,9226790 8,25,9484329 1,", "33,9993938 16,27,9592761 30,34,9971240 18,", "24,9461021 3,21,9829530 4,6,9979", "564 6,26,9759339 16,26,904", "7915 7,27,9871620 7,15,9920502 4,36,9", "007298 6,10,963924", "3 17,39,9097612 28,35,9822543 7,3", "7,9655943 4,5,9145174 14,31,9635047 9,10,92503", "66 18,22,9974538 20,28", ",9134065 11,30,9922487 13,36,94789", "51 13,33,9029936 20,31,94862", "49 6,23,9070706 19,40,9668046"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 391055808;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int N = 10;
    vector<string> roads = {"7,9,9134121 0,", "8,9987867 5,8,9", "038581 5,7,906", "4715 4,8,9395219 ", "1,7,9574752 3,4,945", "6988 2,8,99699", "05 5,9,92779", "95 4,9,9504449 6,", "8,9503997 7,8,", "9800823 4,6,9329", "704 0,4,92520", "50 1,4,9183975 3,9,9", "833738 2,7,9687825 ", "0,1,9930100 6,", "9,9268042 3,5,9", "686910 0,2,956", "4213 3,7,9716113 2,3", ",9878423 0,7,9024", "930 2,4,9831855 1,", "5,9530248 0,5,9092", "924 1,2,987", "2781 1,9,970360", "0 8,9,9717321 0,3,", "9777681 1,8,96", "65682 2,6,", "9195003 4,5,", "9567814 1,6,905", "4824 3,8,9979613", " 3,6,9042648 0,9,9", "050013 1,3,99", "79128 2,5,9461590", " 4,7,9648975 0,6", ",9018328 6,7,", "9312219 5,6,9137", "704 2,9,9935356"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 81673017;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int N = 2;
    vector<string> roads = {"0,1,975", "5908"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 9755908;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int N = 2;
    vector<string> roads = {"0", ",", "1", ",", "5", "5", "6", "9", "0", "1", "9"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 5569019;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int N = 10;
    vector<string> roads = {"3,6", ",30", "31", "05", "8", " ", "1", ",8,8", "2", "72", "8", "20", " 2,7", ",", "45", "9857", "1", " 3,4,", "8038", "39", "4", " 5,", "8,", "3", "870", "809 ", "6,", "7,", "30", "813", "1", "8", " 7", ",9", ",433", "83", "9", "7 ", "0", ",1,", "3", "9", "66", "7", "99"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int N = 100;
    vector<string> roads = {"2,83,8276517 36,54,7579167 35,37", ",7496345 26,57,8008861 67,83,9327", "264 26,68,7600965 56,85,78", "85483 17,52,8251390 0,21,9076523 81,97,8", "723489 1,77,9314496 60,67,8808778 41,98,82", "88587 58,69,7392425 30,31,9263666 63,80,94", "90999 3,5,8014939 10,33,787064", "5 17,56,8035310 3,21,7776704 1,", "47,9463661 50,71,6807447 75,89,", "8655870 44,86,6805132 43,63,67585", "82 45,69,8843441 20,89,7543339 22,49,7797", "439 9,91,8788575 31,38,8832709 ", "51,86,7759960 1,79,7226756 18,70", ",6758452 41,74,9502966 7,19,8497118 80,99,7", "857004 20,62,9440290 23,64,71", "40524 6,10,8556005 14,74,7034521 82,9", "3,7064662 69,78,7162210 4,52,6704986 50,", "92,7750990 63,92,7285905 33,66,88107", "33 27,81,7219794 44,48,6701565", " 32,53,8246928 29,79,9534497 5,92,", "7244075 72,74,8427618 27,99,9279687", " 38,60,7394855 22,56,7922401 66,73,", "9238538 4,61,6914850 16,25", ",7701108 35,84,7805916 17,87,9402", "057 65,67,7148040 19,29,7687716 74", ",76,8817813 70,74,9177422 46,96,8942125", " 42,84,8047246 23,86,7324682 40,83,7525475 ", "61,95,7596482 6,78,7107442 37,50,897", "7671 25,34,8164189 59,98,9153937 6", ",99,9110469 23,94,7850546 8,5", "8,8192938 12,81,7116703", " 64,95,7556248 13,90,7670979 14,39,", "8195320 4,77,8292772 4,15,8355210 1", "3,49,8635457 9,19,9539588 81,88,8442874 3", "5,36,7233098 2,77,6865537 24,", "36,8119963 62,68,6702660 28,29,7432753 16,4", "4,7910456 11,15,9498359 54,93,7", "266236 52,55,7848001 4,53,672974", "2 55,96,8416231 42,59,6764805 55,68,9411868"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int N = 1000;
    vector<string> roads = {"117,852,7239414 28,103,5362782 191,805,7562954 784", ",881,4593041 242,440,4985601 260,824,4758669 615,7", "40,6025814 81,634,7383985 487,504,6299175 82,441,7", "605933 253,818,6831042 204,434,7851957 509,516,746", "3408 491,866,4624916 107,652,7452984 35,82,4873936", " 672,719,5315032 103,652,6338093 505,752,7691125 8", "48,994,6092146 178,573,6898090 531,634,4818707 4", "64,633,6795846 9,742,4358036 626,901,5632666 281,2", "86,4534649 3,252,7533628 193,262,7764849 38,229,5", "246816 243,323,6922935 382,970,5371370 523,730,4", "616355 40,546,7377623 415,509,5806682 362,648,6198", "157 481,523,6829923 425,931,7288376 133,685,506267", "6 105,633,5880127 295,684,6287563 247,744,6350075 ", "198,726,7363654 333,339,5837790 645,725,5634945 10", "1,626,7716691 100,220,5469611 342,765,5263773 446,", "725,4824819 439,878,5778582 446,480,6047971 317,77", "2,5445093 229,934,4685786 38,115,5580338 38,532,45", "92895 25,772,6663784 466,936,7281036 633,684,55482", "33 643,824,6030856 891,959,4419581 114,224,5659078", " 305,343,6624586 122,464,4309593 200,487,7814947 1", "30,612,4344249 551,766,7237774 534,624,5669395 207", ",632,6906298 164,901,6646074 820,925,4631508 178,7", "67,6434113 419,953,4727555 573,574,6392414 177,744", ",6604671 409,519,5072339 249,711,6893731 260,423,5", "444310 253,488,7646510 493,936,5668839 230,832,728", "8334 512,591,7015183 17,220,5794579 227,640,622199", "5 541,694,7007330 504,776,4661210 476,911,7689314 ", "150,972,6846974 531,663,7041039 66,83,4345686 122,", "701,4973689 541,594,4514987 677,952,5511420 6", "48,690,5630198 37,625,6756688 333,464,5887724 78,9", "95,7467410 73,541,7296998 864,978,5126936 436,828,", "6295683 333,625,7334358 176,878,4980607 499,613,68", "08734 9,230,7684335 553,725,4976190 153,723,614376", "1 114,516,6223312 439,594,6836340 15,375,6403742 7", "76,982,5308049 248,584,7809932 504,530,7871014 111", ",205,6961119 48,581,5418372 446,783,7365974 150,44", "0,7697234 86,332,5398851 339,900,5551223 248,425,7", "626953 939,995,5547271 227,545,7174322 575,613,700", "3493 74,229,4425775 332,711,4762313 374,577,742369", "8 197,260,4437148 176,229,6805747 729,878,7662506 ", "121,247,6006958 37,306,4638017 590,851,6232990 78,", "667,4899273 809,946,7536973 77,81,7524675 74,591,5", "141430 133,715,4727619 648,955,6954407 363,636,429", "9076 210,732,5654577 69,551,4324399 207,270,707299", "1 236,765,5767982 242,920,6966331 446,714,7524574 ", "557,900,6503811 257,571,6519312 32,349,4535484 381", ",500,7187012 18,889,7244281 324,890,5629661 332,95", "6,4376428 59,929,7375333 114,983,7639858 25,860,58", "97600 647,903,4499927 366,948,6774390 18,247,74987", "97 206,489,5457290 240,574,6975782 323,481,7150189"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int N = 10;
    vector<string> roads = {"1,", "7,", "25", "32", "791", " ", "2,9", ",30", "7", "3", "361 ", "0", ",8", ",", "3", "85", "50", "11 ", "3", ",5", ",", "2", "719", "4", "6", "8 ", "1", ",2,3", "843", "4", "23", " 6", ",8,", "28", "542", "62 ", "4", ",5", ",2", "6", "09", "1", "49"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int N = 100;
    vector<string> roads = {"21,24,2603611 3,44,2782335 84,91,5066449 ", "24,83,7554913 11,23,3729678 45,82,5056445", " 1,20,4090483 14,56,6423845 7,42,49378", "01 62,85,2056617 14,17,6124808 63,74", ",5303102 17,58,5745661 83,90,1", "393433 9,73,3267094 2,4,6825954 4", "6,97,7521805 59,94,4811878 5,75,1749290 77,9", "0,3945966 10,48,4921969 33,75,22", "53119 79,97,4856882 65,67,3159818 15,46,6647", "348 37,82,4790775 49,67,2486389 26", ",92,5313656 32,35,1894522 13,54,1658", "512 27,80,4839394 69,81,2423559 47,98,4397", "691 20,89,6479411 0,66,6258349 13,14,5", "933167 72,92,6582172 8,96,5577063 78,", "84,6275609 61,73,3153836 23,97,2791691", " 0,71,6577854 8,31,2205255 ", "8,18,2858017 3,91,2928526 34,66,3117050 17,8", "6,6547930 27,39,1367059 23,83,7182163 ", "88,95,5831160 1,36,4992670 92,93,3872", "874 8,65,6308258 18,70,4287107 9,27,", "6698671 20,88,5648094 75,94,3", "579926 47,71,4461961 43,93,7098483 67,68,", "7333256 27,79,3864245 5,82,3687553 27,48,350", "6775 12,40,6312962 2,71,3331721 22,86,243", "3443 34,92,6646379 0,91,2699595 66,86,2351", "721 60,71,7151565 0,30,5074326 27,52", ",5090074 21,50,5725818 27,55,2062469 49", ",69,6462920 57,77,3023049 32,46,3915842 9", ",12,5886079 0,29,2624797 12,64,6065710 19,54,1", "962175 10,74,2222081 41,43,5332239 6,9,", "3795780 7,83,3173342 18,88,2211812 2", "5,36,3212128 52,76,6353225 5,53,467787", "2 16,79,3947007 19,38,4710807 23,8", "7,2954620 47,62,3285379 49,82,1338480 28,99,36", "21201 75,99,3148325 14,51,4412673"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int N = 1000;
    vector<string> roads = {"643,762,8725192 13,716,8787325 179,712,8716988 699", ",869,8804837 629,922,8781645 92,929,8742434 734,88", "0,8711776 187,327,8765716 533,599,8747701 673,970,", "8790256 365,566,8696615 783,864,8704749 388,783,87", "78818 505,532,8784831 436,655,8767453 672,929,8756", "211 401,725,8783219 17,497,8746116 253,610,8733302", " 547,987,8725823 856,934,8765804 51,401,8812068 85", ",864,8738152 346,863,8748043 77,880,8767660 578,79", "8,8723903 566,851,8772745 18,833,8752080 401,920,8", "759692 590,882,8771348 473,838,8749937 151,950,877", "7918 287,321,8807924 253,719,8715221 163,746,87113", "43 246,851,8730507 656,761,8798332 857,971,8764173", " 593,797,8696317 417,852,8778728 431,761,8698212 1", "02,970,8717952 762,962,8755475 104,127,8793812 475", ",639,8780439 205,848,8766494 77,102,8703522 25,578", ",8722795 400,676,8705907 368,385,8788658 782,849,8", "739509 144,661,8716428 11,869,8759416 681,785,8763", "505 2,205,8767606 25,405,8709108 289,954,8794172 4", "05,569,8736549 320,436,8714481 901,914,8755294 536", ",699,8776809 38,673,8750262 6,568,8700492 284,3", "88,8755560 160,838,8702257 414,762,8711316 673,724", ",8786882 78,838,8744565 92,502,8719448 268,620,874", "6579 739,844,8771941 461,857,8780987 162,779,87863", "87 268,553,8769402 536,832,8702972 55,818,8794237 ", "852,938,8789635 487,741,8814804 170,952,8724567 32", "0,933,8768950 547,607,8713444 261,372,8696943 579,", "857,8813088 599,646,8729581 179,386,8731445 509,86", "7,8716403 385,785,8752640 85,712,8737813 35,179,88", "08022 388,559,8694606 767,859,8709285 488,580,8709", "244 38,640,8713144 10,220,8791077 798,848,8800895 ", "327,950,8725813 88,533,8708208 751,867,8765185 619", ",867,8791697 440,869,8742640 176,202,8703928 104,3", "30,8800024 747,954,8751462 737,785,8797138 143,888", ",8805093 628,767,8723562 421,819,8784138 176,484,8", "796984 681,740,8712212 728,914,8752204 882,952,870", "6292 400,852,8787147 124,579,8769669 155,714,87148", "15 155,249,8773265 636,646,8747020 38,788,8790410 ", "48,180,8773599 405,953,8701737 569,654,8739766 487", ",604,8710017 438,492,8699920 579,966,8699803 51,67", "2,8805811 737,767,8724302 351,716,8790150 187,214,", "8773331 85,494,8775857 533,615,8701734 12,412,8807", "976 210,844,8772947 505,785,8734362 274,414,876097", "5 401,440,8772925 749,804,8709201 65,803,8769191 2", "97,803,8805345 414,628,8725051 725,754,8735247 129", ",737,8716406 681,920,8704956 89,991,8811754 421,72", "5,8793303 751,909,8811837 405,524,8709132 522,747,", "8703105 287,788,8795262 192,857,8796220 150,475,87", "33783 92,344,8711806 488,553,8747800 92,181,872746", "9 286,724,8733762 579,618,8769515 579,832,87", "09776 17,932,8741635 411,846,8752563 17,92,8711665"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int N = 10;
    vector<string> roads = {"1", ",3", ",", "2", "04", "24", "3", "6 4", ",", "8", ",", "2", "6", "5", "6", "5", "40", " ", "2,4", ",", "13", "0", "4", "12", "7", " ", "6,", "8,", "20", "5", "7", "39", "8", " ", "0,", "7,", "239", "9", "0", "2", "2"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int N = 100;
    vector<string> roads = {"88,98,2826057 0,67,4294773 18,60,311", "9111 0,75,3490224 12,75,28290", "96 5,49,4361224 36,85,3690729 5", "4,73,4505199 76,79,4339228 7", ",66,2885449 12,50,3100869 28,53,", "4336250 11,14,4266076 9,23,30", "53713 91,95,3096531 60,9", "1,4150445 43,86,4252181 48,68,297", "3471 31,55,3702150 61,66,4214", "991 45,66,3127622 40,72,365", "3438 30,61,3509445", " 25,39,3165095 19,81,4068860", " 80,92,2729258 34,37,3611439 13,", "31,4429149 47,91,4079515 90,92,4553846", " 68,71,4396480 92,94,31", "02793 4,77,4077066 62,7", "8,3644277 24,44,38695", "92 15,67,4134594 71,77,359", "2562 16,56,3796773 34,40,", "2761356 61,83,3249469 17,96,32", "67309 5,86,4465365 49,58,", "2939624 11,38,4417018 50,69,4180237 ", "23,39,3872020 10,22,4309985 58,89,4", "287194 3,89,3886479 10,36", ",3737947 18,58,3060715 27,2", "8,2929368 55,59,4527570 25,", "52,3395254 17,99,4140447 61,63,3", "685688 9,94,4592052 20,69", ",3007694 23,64,4344846 1,26,32", "45672 26,99,3831313 51,82,3040311 ", "21,98,3880160 34,35,3779721 13", ",36,4525261 29,82,4139668 4,53,3", "386561 3,41,4038053 34,", "82,3603072 8,45,3579330 32,98,274024", "6 0,19,4487257 42,93,", "3975020 8,11,3394613 57,62,270051", "1 1,76,3682028 9,42,322942", "5 33,49,4509232 13,", "54,4552291 46,67,4345603 68,74,38", "18536 40,75,3984308 69,84,", "4211807 16,65,3461640 2,35", ",3444127 16,54,2847006 9,53,419", "0204 1,91,3726661 24,93,3493", "195 6,86,4372169 30,88,3", "908564 0,70,4528027 30,87,3474746 62,8", "1,3624390 20,97,3652658"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int N = 1000;
    vector<string> roads = {"62,157,1619100 70,793,1615236 364,766,4234547 137,", "323,3900266 585,725,1894551 198,338,2564006 331,33", "8,2751175 719,969,4089813 118,748,907469 506,869,4", "001259 145,908,4240488 155,737,2321525 172,328,296", "2620 276,984,661887 62,641,4255524 641,748,2899424", " 21,439,621085 136,497,2362164 295,752,2001908 153", ",349,4498270 457,682,1932012 571,764,2130361 42,31", "2,447455 674,902,1733459 323,555,1793540 546,834,1", "238452 98,216,3702888 366,505,468420 30,969,519310", " 70,510,3810399 563,928,1714704 70,387,1943815 457", ",766,2398526 543,586,4352020 104,792,3321929 637,7", "64,1376931 433,997,3357184 527,793,2516208 21,104,", "1061177 324,969,2747091 308,387,682651 363,632,230", "8388 919,969,2070889 109,276,1516659 491,719,18528", "10 81,605,2391596 137,363,3804460 95,752,1187683 5", "4,351,2939013 439,674,722852 67,478,2239226 111,81", "3,2258918 793,877,1705343 476,573,860607 153,984,", "3921883 113,421,3917962 822,997,1472184 637,979,27", "02366 104,586,3096519 364,486,1798207 9,497,337062", "3 341,718,4143525 343,637,1755564 605,622,752183 1", "8,149,3415796 351,431,2464792 81,131,990044 385,", "764,4068817 42,172,3699722 118,898,2201975 193,543", ",3182197 157,458,3608747 95,114,1284538 506,752,16", "09875 104,510,2875311 39,343,502420 752,901,336442", "3 650,984,3483964 55,603,4353397 215,622,3781007 3", "77,445,1843753 387,731,3804412 70,557,2251378 585,", "640,510642 95,640,2146481 338,764,4307084 525,719,", "576136 919,938,800313 563,892,935660 86,667,147359", "6 852,864,4097061 62,923,4403523 834,869,4210791 3", "26,557,3272646 363,901,3556349 195,431,4093640 682", ",733,1118186 737,835,615063 886,923,1249508 573,61", "5,1534826 351,908,599232 622,743,557807 9,792,4451", "185 615,632,2592920 113,810,4388221 86,198,1631570", " 609,998,2285474 605,637,3218305 81,655,2689189 71", "8,984,682934 356,938,4289377 609,911,3662716 324,3", "79,4056316 198,653,3228194 95,216,4434667 486,821,", "2924804 421,898,673911 160,924,1191589 172,603,186", "7555 233,737,3016242 0,892,2711569 349,892,2547204", " 395,653,3943295 40,445,670156 290,637,2618710 632", ",751,985512 457,469,1737516 81,285,1265903 62,81,2", "651721 458,505,1365779 326,863,1943713 40,519,2565", "540 733,908,2486927 0,55,1415800 269,349,2753834 4", "33,640,1964775 374,886,1135572 42,457,3358033 924,", "998,1170059 40,764,1401484 571,777,1088171 9,137,1", "882880 433,883,1479964 18,810,3939572 245,343,1419", "988 519,969,4510670 377,478,1728632 233,245,323136", "2 764,807,1244188 282,653,4083953 146,834,3010268 ", "157,160,947812 349,632,850898 4,104,1465023 852,92", "4,3936484 83,835,408640 111,984,1531598 546,772,71", "8642 15,883,606724 153,649,2273134 269,356,3041703"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int N = 100;
    vector<string> roads = {"13,90,2177759 2,42,4649120 27", ",48,5275001 52,54,33", "58500 33,95,5979316 35,76,57086", "32 33,85,5914556 ", "50,84,2931223 45,69,42", "13149 14,96,3711371 11,", "24,5511887 18,49,5006548 45", ",99,3220707 4", ",15,2205638 23,50,236371", "9 44,65,1849408 1,9,487473", "6 38,55,4473460 30,", "73,2925555 22,39,1", "834477 40,71,3185002 5,12,", "5983955 19,32,2991211 ", "10,66,4608568 31,91,5893", "458 25,74,2610735 24,6", "0,5455359 38,70,4394094 4", "1,89,4654939 44,94,248", "8543 43,63,3363461 27,56,20", "95097 20,63,2967977", " 14,68,2534332 3,73,2", "944297 21,28,4877852 3", "7,99,5886466 51,78,5048577", " 88,97,3227114 54,81,32745", "24 9,49,4838562 16,79", ",3670041 29,75,3980200 ", "17,21,2674238 7,71,59", "17984 53,92,20269", "70 80,87,5182826 69,98,296", "2723 74,77,2949347 58,8", "4,2514403 14,46,3324493 8,39", ",1806100 2,80,4679970", " 19,26,5880888 64,67", ",1955176 93,98,314680", "0 6,74,2923707 31,6", "1,2927399 0,52,5338", "874 28,97,5248951"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    int N = 1000;
    vector<string> roads = {"79,301,3820822 259,293,2537316 348,981,1107638 122", ",560,2973391 108,286,4620962 522,971,3396150 607,7", "16,4053074 24,335,1138699 129,514,1016365 58,615,4", "519210 830,844,2008639 100,687,1299166 450,791,116", "0765 560,626,4314646 79,256,789482 503,836,1544709", " 34,514,1380423 277,517,2462529 58,63,394896 327,8", "37,582325 124,836,2624848 702,957,3465444 655,9", "87,4889836 507,603,3989467 750,974,3935168 144,621", ",2600486 429,552,1934933 7,447,2670300 335,553,399", "797 240,957,2857732 425,504,754799 453,974,2329020", " 741,962,1667939 107,394,2370682 260,514,4225163 2", "93,729,201393 465,616,2850881 3,615,2913283 100,16", "8,1216545 450,800,2038582 836,882,4523333 118,577,", "647348 504,538,1470031 374,425,711383 343,681,4717", "860 642,698,4829859 108,851,1942409 33,801,1879313", " 311,835,3432414 79,138,204293 84,900,3087530 339,", "508,557024 169,853,3751267 7,920,831901 89,604,339", "153 168,438,794367 267,484,2358727 741,933,3039253", " 138,503,1154260 293,327,1595999 891,896,3180331 4", "92,826,2773122 18,33,2372545 83,534,3852482 853,96", "2,1263329 286,616,1836635 100,841,3543541 687,715,", "1519498 425,587,4221056 476,534,4455107 425,844,40", "56024 853,941,439381 335,552,3686340 702,987,11442", "36 265,607,1237787 181,878,3656016 171,615,1949900", " 311,335,4884743 107,560,2982144 110,634,3430317 4", "50,957,2865410 707,842,4862030 453,634,419379 107,", "427,2365405 460,930,2180606 238,522,1186336 168,23", "8,4294595 238,688,610000 447,957,3234521 141,396,6", "53940 286,517,1982584 122,959,1916842 277,988,3512", "814 860,930,4750859 33,49,328851 528,643,2507867 4", "84,896,238454 476,812,1832440 645,688,1831801 743,", "778,503679 196,363,3340346 688,956,4694052 729,812", ",1946195 686,939,4445072 84,394,1698597 626,738,28", "74885 614,842,2074549 898,988,574517 426,920,22800", "77 529,882,2186828 33,884,1761000 58,870,4309891 5", "47,715,2897871 12,688,1227516 403,577,707066 198,6", "21,3641534 363,626,3695641 169,256,393278 577,743,", "1711797 267,560,2550990 334,930,4099561 339,860,33", "38630 460,731,1258616 327,348,842956 345,517,25", "09047 40,265,4672342 71,122,4410777 124,778,337361", "3 112,956,3820597 91,607,4438194 494,552,923454 34", "3,898,3671672 238,603,298082 348,604,3223603 311,9", "74,1840535 339,844,776426 107,513,3222491 621,939,", "3461957 169,845,3013249 18,144,2149859 296,494,721", "704 715,775,4565175 181,971,2915053 58,676,1971547", " 91,898,1869818 34,453,1079969 576,731,895640 138,", "736,1604066 642,812,3912791 753,860,4129306 63,307", ",2034994 75,403,2177537 89,323,2504296 374,442,212", "6255 702,870,4055304 54,534,4379583 318,731,292", "6172 24,636,2694668 468,504,4504179 345,842,669338"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int N = 100;
    vector<string> roads = {"2", "4", ",8", "1", ",", "5", "9", "7", "553", "3", " 7", "3", ",", "7", "8", ",5", "3", "3", "80", "1", "7", " 1", "4", ",", "1", "9", ",", "4", "6", "2", "0", "60", "0"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int N = 1000;
    vector<string> roads = {"119,222,6968623 224,528,6435960 213,391,6662341 26", "2,915,7311792 383,489,6021331 123,301,6949362 524,", "759,5758625 170,781,7723465 663,869,6823013 289,53", "3,5790872 45,783,8507762 560,720,8425728 56,82,756", "4398 539,742,6030604 390,452,6690150 712,952,83184", "60 842,976,6074504 679,860,7706182 428,709,8149813", " 39,518,7564636 214,643,5993068 568,847,7639359 16", "0,776,8053895 267,895,6693984 207,410,5812605 64", "2,999,6657631 121,965,7109178 205,648,5855457 25,3", "79,6224446 210,766,6748355 221,313,6224029 190,606", ",7410968 167,719,8528485 48,406,6827633 380,791,81", "76996 179,325,6002692 358,737,6720568 156,602,8160", "256 726,956,7267132 458,955,8018714 573,758,581408", "4 661,987,7716532 496,532,5861867 164,543,7794843 ", "639,931,6180733 730,873,7038010 3,351,833487", "5 174,955,7745876 460,556,6533020 916,974,7739626 ", "457,770,7563173 373,684,7082075 55,64,6907861 203,", "656,8065560 326,342,7335876 636,796,5812170 132,62", "2,7212023 114,695,8275369 466,968,7036634 194,706,", "6509953 693,878,7488564 293,964,6758182 773,891,", "7355846 469,536,7594815 411,547,7920874 718,725,60", "22582 461,574,7479924 231,380,7533546 118,455,7210", "697 578,852,6125896 100,655,8281797 48,662,8323880", " 3,29,5999566 483,647,5982212 811,902,6403795 296,", "670,6339054 502,677,7320321 775,849,6346481 465,57", "7,8421979 35,911,7634431 68,313,8222074 470,546,69", "92567 387,703,8135941 285,537,8002680 246,961,7453", "314 329,910,6851103 307,754,7549159 143,755,788784", "1 96,599,6931822 451,752,6824525 380,857,7946837 6", "4,329,7922690 475,592,6548782 270,760,6486036 141,", "547,6104993 354,581,8127627 262,472,5924458 595,70", "7,7832629 551,883,5957005 391,653,7425787 796,907,", "6404404 105,692,7891840 513,521,8396814 622,725,62", "44851 280,376,6323641 63,549,7449203 190,969,82425", "51 642,908,6985466 177,779,6886352 509,598,7127709", " 146,797,7566777 199,491,6461267 113,840,8039558 5", "17,838,7942612 190,618,7307421 801,874,6520513 419", ",603,5999675 629,865,6261540 129,753,6744307 416,6", "57,7620428 485,992,8016439 251,707,6852765 825,915", ",6172683 335,730,7276438 289,345,8463946 561,563,8", "389934 263,852,6398481 137,955,7565489 373,743,731", "6349 167,478,7658686 495,976,6835385 206,207,60269", "49 230,381,7766568 283,841,7053037 610,970,7084057", " 623,733,5798468 311,888,6477597 343,644,5901715 6", "83,858,7373598 300,677,7882913 425,537,6241186 248", ",688,8341837 171,698,7061458 721,825,8532845 359,9", "06,7766201 475,548,5708853 528,928,7170775 611,698", ",7954330 105,889,6252167 303,881,6516635 309,521,8", "492056 10,542,6226071 457,490,6371310 466,906,5801", "536 88,404,7431999 970,996,6471624 490,760,6907987"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int N = 273;
    vector<string> roads = {"252,233,4 178,203,7 171,256,5 218,148,7 259,103,2 ", "119,86,6 129,27,3 205,162,1 167,114,7 244,22,3 16,", "204,8 217,143,8 157,268,5 184,101,8 7,76,8 52,96,9", " 262,92,5 142,154,3 138,108,8 24,100,1 43,128,5 98", ",67,3 255,10,4 245,113,5 241,1,7 249,260,8 28,109", ",9 70,10,6 37,45,1 193,158,9 165,173,8 140,248,5 2", "47,249,9 151,166,2 271,71,3 177,135,8 115,13,2 105", ",90,7 11,13,2 253,38,7 182,131,3 56,163,3 119,184,", "3 66,160,9 210,84,8 246,55,8 211,42,5 166,28,4 63,", "77,1 239,4,6 239,172,4 60,6,3 18,131,4 118,39,7 0,", "80,6 2,88,5 162,160,9 222,189,8 234,68,1 32,63,1 1", "46,176,3 19,163,4 198,69,4 116,83,9 254,91,3 34,11", "0,3 152,44,3 30,191,5 78,155,2 207,67,6 136,175,5 ", "54,243,8 54,206,9 59,238,3 138,149,7 25,50,3 215,1", "37,1 220,4,7 9,61,8 89,96,3 52,120,9 175,100,1 14,", "109,3 197,90,5 246,24,5 75,17,8 73,134,8 61,72,2 2", "42,214,2 183,57,5 168,151,2 250,258,8 211,261,9 20", "1,133,7 207,126,8 21,230,1 245,8,5 221,29,8 83,200", ",6 265,224,5 164,200,7 225,247,2 38,98,9 127,45,8 ", "50,86,8 37,232,3 39,47,8 250,220,6 8,76,1 62,147,2", " 212,192,5 94,258,1 139,122,9 93,155,8 12,191,5 21", "6,228,5 126,34,3 266,226,9 91,145,4 9,114,4 202,19", "6,5 244,3,7 219,97,1 144,73,9 116,156,2 85,99,1 95", ",49,7 213,178,9 40,219,8 1,41,9 186,145,8 14,68,5 ", "2,121,9 181,85,6 135,19,6 158,99,4 65,87,4 81,170,", "2 22,253,1 51,18,8 32,190,1 148,169,7 132,197,7 14", "7,5,3 187,31,2 187,266,4 264,177,2 113,36,8 234,23", "5,7 233,231,7 206,229,6 188,23,7 143,107,9 225,214", ",9 35,176,8 71,103,4 93,20,8 153,120,5 87,242,5 24", "3,168,1 241,115,5 40,208,7 16,3,9 199,53,6 265,195", ",7 268,118,1 149,75,3 88,171,9 46,78,6 238,125,8 1", "46,31,7 169,260,2 82,201,9 180,257,4 124,66,3 198,", "193,1 165,270,6 203,6,7 185,183,6 221,127,5 79,227", ",5 215,23,6 0,130,3 179,256,3 33,51,9 161,150,3 27", "1,139,8 56,270,1 42,217,1 46,229,1 101,58,5 133,26", "3,2 69,105,3 240,154,4 205,117,6 173,26,7 15,224,2", " 43,251,2 62,150,8 257,25,8 95,65,4 5,123,1 167,30", ",4 49,81,8 104,216,6 64,254,5 36,237,7 156,272,3 2", "22,48,4 195,129,3 136,17,6 223,164,3 182,110,1 35,", "209,7 240,152,7 125,72,7 44,55,5 194,212,4 144,47,", "6 159,12,8 267,194,3 102,15,7 141,264,9 153,228,6 ", "262,180,1 53,21,2 237,202,6 196,179,3 213,181,2 26", "7,26,1 59,57,5 111,186,9 117,236,3 112,60,3 208,82", ",6 108,48,8 189,122,9 41,106,9 137,107,7 74,58,7 1", "99,11,5 130,223,7 204,79,8 104,269,6 111,159,1 190", ",128,9 209,157,1 188,94,3 112,70,3 92,106,9 230,13", "2,9 33,251,1 27,74,5 272,263,7 97,124,7 210,192,2 ", "102,141,1 134,77,7 123,170,9 64,161,8 172,89,2 248", ",261,7 20,232,8 231,80,8 226,29,6 185,236,8 218,84", ",1 174,255,6 174,140,2 7,235,5 227,269,4 259,252,1"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1416;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int N = 273;
    vector<string> roads = {"140,220,9 161,241,9 102,267,9 137,174,9 104,149,9 ", "5,123,9 229,8,9 189,1,9 181,175,9 54,167,9 214,101", ",9 205,41,9 23,240,9 213,265,9 270,22,9 139,33,9 1", "82,79,9 48,210,9 89,58,9 58,11,9 110,7,9 220,139,9", " 110,141,9 163,209,9 156,154,9 191,106,9 85,124,9 ", "270,75,9 80,52,9 87,9,9 194,233,9 53,155,9 168,234", ",9 150,45,9 103,16,9 70,228,9 82,174,9 117,140,9 2", "50,164,9 162,173,9 112,145,9 172,34,9 34,83,9 141,", "144,9 262,67,9 102,46,9 130,7,9 216,143,9 21,49,9 ", "73,50,9 195,217,9 95,12,9 122,79,9 152,55,9 63,32,", "9 15,92,9 169,2,9 42,145,9 155,225,9 54,46,9 259,4", ",9 114,254,9 156,245,9 265,137,9 13,253,9 101,9,9 ", "59,24,9 226,37,9 207,212,9 269,93,9 196,14,9 190,1", "97,9 192,250,9 189,151,9 164,211,9 142,39,9 128,18", "4,9 190,6,9 73,60,9 218,192,9 236,254,9 157,267,9 ", "207,228,9 196,230,9 118,11,9 91,64,9 138,187,9 21,", "39,9 67,222,9 136,271,9 44,255,9 78,65,9 35,208,9 ", "86,253,9 159,158,9 25,3,9 235,62,9 269,32,9 247,17", "9,9 224,113,9 160,268,9 201,198,9 202,221,9 234,17", ",9 218,23,9 20,227,9 206,93,9 263,257,9 149,80,9 1", "97,261,9 132,119,9 92,85,9 152,77,9 244,115,9 204,", "100,9 77,231,9 232,82,9 69,147,9 15,246,9 59,130,9", " 244,31,9 160,96,9 57,96,9 87,69,9 146,268,9 129,2", "39,9 44,31,9 215,159,9 104,35,9 109,100,9 144,43,9", " 48,120,9 181,240,9 115,214,9 151,216,9 165,195,9 ", "260,183,9 199,3,9 2,200,9 5,230,9 201,45,9 271,206", ",9 138,219,9 98,266,9 172,188,9 89,22,9 75,53,9 10", "6,178,9 247,122,9 108,150,9 51,40,9 248,194,9 71,7", "8,9 118,12,9 224,55,9 71,27,9 171,56,9 261,72,9 95", ",50,9 231,264,9 70,57,9 68,193,9 252,210,9 123,209", ",9 25,38,9 237,158,9 121,26,9 252,6,9 165,147,9 23", "3,221,9 136,127,9 264,239,9 177,16,9 29,84,9 198,4", "7,9 37,186,9 182,225,9 116,52,9 127,29,9 162,84,9 ", "171,121,9 243,245,9 97,170,9 249,248,9 90,111,9 24", "2,126,9 148,238,9 42,157,9 176,262,9 64,179,9 28,1", "85,9 63,131,9 94,105,9 200,215,9 211,272,9 81,208,", "9 236,243,9 26,108,9 43,175,9 167,8,9 125,258,9 20", "4,251,9 217,74,9 33,116,9 66,4,9 91,0,9 169,107,9 ", "133,227,9 260,27,9 266,180,9 142,114,9 226,131,9 2", "4,99,9 188,199,9 128,88,9 187,183,9 94,119,9 168,6", "8,9 246,193,9 148,86,9 259,132,9 28,111,9 213,129,", "9 36,232,9 153,257,9 133,66,9 176,51,9 170,126,9 1", "86,72,9 38,161,9 19,30,9 251,256,9 146,135,9 117,1", "0,9 56,113,9 134,238,9 112,1,9 99,65,9 76,163,9 97", ",47,9 242,13,9 125,166,9 237,203,9 61,134,9 219,12", "4,9 191,18,9 235,90,9 184,173,9 120,61,9 222,14,9 ", "177,81,9 17,60,9 249,154,9 107,98,9 62,76,9 135,24", "1,9 41,18,9 205,83,9 185,203,9 212,20,9 178,10,9 2", "58,223,9 49,272,9 263,105,9 166,36,9 19,109,9 202,", "74,9 103,255,9 256,153,9 223,30,9 88,143,9 0,180,9"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 2448;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int N = 136;
    vector<string> roads = {"106,111,5 82,88,6 99,7,", "9 42,73,6 67,89,8 3,1,5 ", "86,92,5 31,71,1 122,", "102,8 5,94,9 91,52,9 119,", "5,5 64,56,1 8,16,2 56", ",110,6 41,14,3 37,62,2 44,30", ",4 36,23,8 121,91", ",7 36,4,6 93,54,1 29,10,2 83,12,8 ", "130,124,8 103,128,9 ", "76,43,8 100,125,5 24,12,2 82", ",117,7 93,81,5 59,84,2", " 101,113,1 117,65,4 84,5", "5,5 53,62,6 131,123,2", " 13,58,7 80,77,4 51,", "105,1 1,53,1 69,26,2 73,", "35,9 28,8,5 30,86,9 115,", "79,2 97,78,4 61,135,6 15,", "6,1 51,95,3 126,107,2 52,16,", "5 27,42,2 124,17,5 ", "50,83,3 18,95,2 79,63,8 1", "04,114,2 69,9,3 68,", "40,9 78,110,4 109,120,", "4 13,47,1 72,113,5 125,39,3", " 37,94,8 32,123,4", " 88,64,1 48,74,6", " 89,57,4 6,127,6 85,21,2 1", "20,75,5 108,34,6 108,", "112,3 32,100,1 127,9,1 97", ",76,2 87,49,5 2,50,3 1", "16,55,4 129,65,2 121", ",134,7 10,66,2 87,25,4 7", "1,60,9 85,47,1 17", ",11,2 3,26,6 107,13", "2,1 20,109,7 54,22,7 23,98,9 33,2,1 9", "8,45,8 44,43,8 60,101", ",8 118,126,7 31,34,3 46,24,", "2 45,18,5 81,103,1 96,", "25,7 20,7,4 133,134,5 63,128,", "1 90,58,3 29,48,8 38,4", "9,3 27,74,1 105,77,3 28,19,7", " 38,57,6 0,35,4 119,39,", "2 72,90,4 15,130,4 1", "15,80,7 11,41,6 70,75,3 116,", "68,7 106,21,4 111,67,1 ", "70,92,4 122,99,1 112,0,", "8 46,132,7 118,135,2 61,4,5 40,96", ",6 22,66,3 59,14,8 102,1", "04,6 131,114,1 133,129,6"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 610;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    int N = 136;
    vector<string> roads = {"35,37,9 97,64,9 61,29,9 113,50,9 9", "5,30,9 96,119,9 35,11,9 131,91,9 65", ",42,9 106,11,9 9,133,9 19,44,9 58,40,9 1", "16,29,9 52,83,9 90,34,9 46,10,9 114,88,9 17,", "43,9 49,131,9 60,2,9 21,47,9 97,134,", "9 50,39,9 124,109,9 20,25,9 111,", "32,9 93,80,9 71,51,9 123,126,9 75,64,9 2", "4,100,9 68,57,9 21,63,9 68,120,9 127,120,9 8", ",87,9 103,46,9 10,43,9 77,84,9", " 86,33,9 73,99,9 45,66,9 118,16,9 5,76,9 4", "2,89,9 96,8,9 91,77,9 87,28,9 70,75,9 31,27,", "9 62,81,9 112,78,9 84,79,9 71,54,9 132,105,9 13", ",111,9 61,104,9 17,132,9 24,38,9 67,26,9 113,33,9 ", "86,6,9 9,19,9 18,3,9 93,70,9 45,6,9 109,3,9", " 110,130,9 105,128,9 69,30,9 18,92,9 16,11", "0,9 125,12,9 53,66,9 13,25,9 52,122,9 1", "15,26,9 98,58,9 108,54,9 123,76,9 56,83,9 85", ",126,9 130,34,9 82,106,9 95,41,9 62,15,9 23", ",22,9 127,14,9 124,7,9 82,107,9 47,31,9 121,1", ",9 2,59,9 67,57,9 56,72,9 119,11", "7,9 74,38,9 102,134,9 108,90,9 13", "5,27,9 55,129,9 89,94,9 41,4,9 4,121,9 69,", "85,9 79,114,9 103,117,9 40,36,9 94,80,9", " 12,88,9 36,81,9 1,101,9 104,7,9 102,115,9 133,", "37,9 28,23,9 60,48,9 118,53,9 32,63,9 0,122,9 100,", "48,9 78,107,9 49,44,9 116,39,9 99,", "51,9 128,73,9 20,5,9 125,15,9 135,112,9 59,101,9", " 98,55,9 92,14,9 65,72,9 22,74,9"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1215;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    int N = 172;
    vector<string> roads = {"163,162,8711302 132,136,6131148 12,90,3137500 164,", "106,9886225 87,66,6168572 160,87,3852758 122,28,35", "00132 6,140,79789 117,53,9235861 46,30,4998005 134", ",159,9335423 27,7,7071414 162,109,1861971 80,1,241", "0518 78,19,6428260 149,17,5046971 24,29,32835 18,5", ",9424537 116,146,9506861 48,43,1596451 33,150,4446", "202 76,131,5351281 95,109,5165405 14,61,8948947 53", ",124,2494821 101,72,3583343 0,106,5509656 43,117,5", "233818 84,86,5342172 137,104,4582404 113,71,78", "18146 38,6,5432614 102,120,8481013 0,112,2079621 5", "1,168,6024013 115,74,9168910 37,71,9130948 11,140,", "7943487 49,156,6539004 143,142,8146557 10,166,2731", "780 163,97,5987479 34,105,1772669 57,70,5072109 14", "7,138,3995791 81,161,1355739 155,124,158112 99,36,", "4532924 126,164,2073218 65,156,2015955 129,170,633", "0136 8,167,7044479 63,94,3620076 96,32,9869769 21,", "107,4764855 115,59,4302570 15,73,4912106 127,95,", "2627417 31,68,2488785 20,52,7363837 12,134,1425680", " 165,88,7805817 33,102,2757644 152,79,6099178 100,", "78,3349599 9,123,603614 157,44,9052471 151,10,4151", "012 25,98,840252 119,171,6813883 127,57,7452405 82", ",120,4277890 62,61,7949021 76,60,4870318 121,168,1", "237383 83,98,719131 36,139,2960877 137,2,2904788 4", "0,103,3050360 52,130,2043500 39,142,8099213 151,51", ",4860657 29,135,9300144 88,20,576415 84,2,9029528 ", "129,63,1626354 148,9,7330294 114,41,4576682 160,15", "3,4450161 150,15,9855220 101,22,2306437 23,40,9480", "631 171,103,2714708 159,14,1867049 161,82,785309 1", "55,45,7222093 74,27,9766047 38,145,7558894 44,91,6", "349785 21,105,3543611 166,111,1834891 7,130,142840", "0 91,23,6622747 143,58,4264934 55,69,8666352 165,2", "4,2337003 167,145,112608 69,108,5811584 60,42,1674", "68 128,118,770098 104,83,4000384 1,19,8731580 45,5", "6,5042487 132,141,530726 148,68,5208152 4,112,8625", "069 139,70,6628218 108,125,8005938 77,126,3915701", " 3,81,3383017 31,35,9787172 123,67,3755008 59,89,2", "096066 75,54,8658035 141,26,1202923 18,128,425756 ", "56,30,316769 35,58,3103540 28,41,7649846 86,113,80", "94990 158,22,3961893 149,93,9120517 100,133,734334", "3 73,97,6786890 46,94,5017642 77,34,948133 110,67,", "3547721 72,119,6022800 55,121,9746177 50,133,95561", "25 92,64,5066479 147,32,4980162 8,157,8723262 125,", "152,5314 131,154,9003485 64,144,1946604 114,26,117", "5858 16,158,9931 85,92,2490354 154,99,4876017 110,", "170,5060151 111,13,7274195 122,47,6177031 37,39,89", "16988 54,107,4691794 85,49,6747233 89,4,6401675 93", ",153,6853803 135,116,4719064 65,42,1719034 48,118,", "5672929 62,80,2827185 13,11,6681649 47,79,4724858 ", "144,96,7535757 169,90,5104954 17,16,4750771 3,136,", "2560778 75,25,7558381 146,169,8683637 5,66,7796451"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 858487243;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    int N = 86;
    vector<string> roads = {"32,53,6538432 65,15,308", "6489 46,81,1259103 76,43,", "9638230 59,64,1022707 24,3", "3,4607817 54,83,2254758", " 61,55,3484778 60,0,100981 81,6,829", "6166 9,39,1539962 22", ",13,9343060 16,35,766728", " 41,4,9671787 3,15,9483502 ", "79,36,5608984 70,25,9356566", " 62,66,7070916 31,51,2231922", " 18,70,9916528 28,", "59,3236376 63,73,3365092 ", "29,61,8949953 35,5,1892213 51,4", "5,7313848 50,39,6577265 8,23", ",631841 56,7,4398180 58", ",68,8926335 77,20,5023048 37,4", "9,6793434 55,19,3550103", " 82,13,7527866 74,34,5176241 ", "41,58,6957860 7,12,6083796 64", ",72,7822951 2,85,9522223 ", "62,69,3743745 48,44,4958187", " 78,37,2195748 71,18,46061", "79 49,10,4900825 80,66,733", "2288 0,57,6676998 48,72,6932", "322 82,65,3771500 10,34,9219120 2,7", "1,519936 17,26,50", "36678 42,52,5162938 26,7", "7,9628237 78,4,6841669 67,47,429", "0736 32,46,3555063 12,1", ",427706 38,23,80238", "40 80,33,6604021 67,85,96", "21103 25,53,4212269 16,7", "9,8022131 43,8,5358666 28,", "75,8013074 40,63,1695956 42,4", "5,4347673 27,21,9896264 21,14,", "2227367 14,19,9864598 17,36,79", "42434 84,22,1594467 8", "4,38,8566885 1,1", "1,6658581 83,40,5257", "176 75,5,6943887 30,20,3", "519214 11,47,578593 6,76,6907", "086 56,50,9386860 54,69,83", "87010 57,74,659766", "8 31,9,6122415 27,60,4", "371304 73,44,5580592 ", "68,52,1634439 24,29,9569650"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 476333139;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    int N = 272;
    vector<string> roads = {"4,33,7 67,23,8 61,223,4 74,86,7 1,93,2 38,209,1 21", "5,261,1 121,169,6 107,47,6 12,102,8 87,98,2 218,15", "1,2 239,87,8 3,130,7 93,76,5 232,196,1 68,192,8 74", ",179,9 258,217,8 66,202,6 252,191,7 158,14,3 54,12", "2,6 208,8,3 114,59,4 170,73,7 256,30,5 130,241,5 2", "11,175,6 268,244,9 69,178,3 72,116,6 200,143,8 59,", "136,7 118,22,5 105,26,5 29,236,6 1,42,5 96,125,2 2", "70,242,7 171,62,6 192,252,9 16,85,4 107,212,5 201,", "229,4 60,129,8 51,109,8 72,262,5 104,246,3 144,176", ",9 140,148,4 58,190,2 172,230,6 79,101,3 115,78,1 ", "154,222,7 168,211,7 30,24,9 67,113,4 232,108,1 181", ",204,6 137,249,7 228,139,4 200,240,5 108,265,1 20,", "19,5 191,80,7 6,77,3 50,106,6 55,271,9 2,196,1 125", ",214,2 135,25,1 65,225,1 64,3,3 177,31,3 220,224,7", " 111,150,2 179,128,7 41,164,6 180,249,3 13,215,6 1", "53,81,1 164,207,2 40,237,7 78,160,6 149,231,5 127,", "77,1 123,260,4 42,269,3 218,219,6 85,246,1 208,174", ",1 257,157,1 35,34,5 182,219,8 26,159,4 162,230,9 ", "22,83,6 233,156,7 144,114,4 268,197,2 27,126,1 11,", "147,5 238,266,7 146,110,5 73,112,2 123,7,6 161,163", ",8 187,168,5 17,151,1 46,216,7 131,121,1 5,56,2 21", "6,109,5 71,64,7 112,189,6 98,194,7 48,259,7 124,18", ",4 43,176,9 206,9,5 159,126,7 195,181,8 45,186,1 7", "5,243,5 244,39,9 57,248,8 104,152,3 40,10,2 2,92,", "2 199,71,9 141,37,8 253,0,8 263,0,4 209,185,4 152,", "100,8 15,79,6 245,70,6 205,178,2 195,142,7 28,226,", "6 138,198,2 56,32,6 11,202,7 205,229,1 23,110,8 35", ",154,2 221,233,3 180,188,5 115,248,9 106,260,1 63,", "213,9 117,94,7 150,184,8 258,102,7 69,91,5 239,62,", "5 166,129,3 89,235,8 241,90,9 201,118,6 136,210,5 ", "37,86,4 245,52,1 271,36,2 119,247,5 261,187,2 189,", "145,5 120,45,3 21,186,9 18,128,1 7,161,8 254,212,2", " 133,10,5 82,48,1 165,8,5 46,236,5 257,132,5 220,8", "0,8 203,228,9 4,63,6 131,167,9 197,32,1 256,141,9 ", "214,61,1 82,21,2 225,247,8 158,170,3 267,146,6 175", ",33,6 149,39,7 160,194,6 238,165,7 20,183,7 222,43", ",2 15,206,5 227,120,2 251,198,9 169,97,6 103,65,8 ", "122,83,2 226,44,2 155,5,2 166,28,3 177,117,7 14,11", "9,8 250,127,8 94,223,1 84,193,9 167,185,3 243,142,", "8 135,50,6 89,41,5 237,54,8 47,84,2 207,36,6 155,4", "9,6 96,100,3 263,173,8 88,157,1 68,199,5 55,224,3 ", "17,88,3 27,91,1 250,53,5 262,70,4 92,174,9 213,255", ",7 76,210,8 163,148,2 264,51,8 34,188,2 24,49,4 13", "7,221,1 162,235,1 253,19,7 95,133,2 13,52,1 90,259", ",4 231,156,2 147,99,4 139,95,4 99,240,5 132,255,9 ", "101,53,2 251,9,5 66,138,3 153,172,8 113,105,3 184,", "97,5 227,103,8 190,266,3 143,57,1 171,111,3 38,116", ",5 269,265,3 124,134,6 234,270,6 140,267,4 173,16,", "8 182,75,3 242,29,8 25,254,6 134,204,6 44,203,4 6,", "81,6 183,193,7 264,58,1 12,145,1 31,234,9 60,217,9"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1340;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    int N = 272;
    vector<string> roads = {"63,256,9 140,216,9 265,3,9 106,244,9 73,156,9 212,", "175,9 184,251,9 6,62,9 44,236,9 198,176,9 134,210,", "9 38,152,9 48,23,9 202,191,9 114,144,9 217,184,9 8", "9,7,9 165,227,9 73,153,9 96,70,9 135,97,9 141,182,", "9 221,86,9 232,69,9 136,165,9 102,250,9 57,225,9 2", "03,225,9 128,121,9 104,132,9 53,29,9 102,228,9 243", ",125,9 103,160,9 124,176,9 261,81,9 207,172,9 154,", "106,9 122,118,9 202,16,9 242,253,9 259,209,9 201,1", "77,9 134,49,9 150,35,9 90,247,9 211,237,9 107,42,9", " 43,270,9 40,143,9 163,46,9 115,240,9 131,83,9 34,", "91,9 29,238,9 235,261,9 133,122,9 145,180,9 104,11", "0,9 197,206,9 40,171,9 228,87,9 24,80,9 148,124,9 ", "137,7,9 126,54,9 79,58,9 109,207,9 69,21,9 239,200", ",9 204,33,9 95,137,9 113,174,9 33,115,9 141,30,9 1", "94,36,9 146,201,9 30,60,9 103,157,9 268,218,9 229", ",257,9 62,113,9 237,169,9 57,105,9 271,211,9 60,15", "5,9 71,95,9 223,217,9 131,179,9 27,66,9 1,72,9 128", ",260,9 231,84,9 244,39,9 215,175,9 192,185,9 249,2", "5,9 263,112,9 219,64,9 222,50,9 218,18,9 120,32,9 ", "84,208,9 112,213,9 241,146,9 195,189,9 2,233,9 10,", "5,9 117,88,9 79,224,9 156,86,9 197,53,9 249,49,9 1", "52,199,9 109,51,9 41,80,9 14,72,9 98,52,9 5,230,9 ", "149,226,9 50,183,9 89,127,9 203,130,9 13,44,9 132,", "119,9 233,10,9 119,118,9 71,75,9 154,245,9 120,170", ",9 150,173,9 8,46,9 173,78,9 198,54,9 180,93,9 174", ",250,9 23,59,9 140,110,9 191,27,9 67,227,9 136,88,", "9 248,226,9 111,205,9 187,100,9 216,3,9 251,22,9 2", "70,130,9 234,158,9 61,19,9 235,242,9 92,185,9 168,", "193,9 105,177,9 12,181,9 254,96,9 82,267,9 157,68,", "9 129,48,9 32,138,9 31,98,9 178,139,9 245,223,9 45", ",74,9 147,269,9 220,65,9 220,63,9 179,94,9 127,9,9", " 11,133,9 271,255,9 255,252,9 257,34,9 241,258,9 2", "39,160,9 129,99,9 15,58,9 28,178,9 70,142,9 214,6,", "9 68,159,9 123,17,9 168,199,9 267,123,9 170,166,9 ", "64,190,9 238,77,9 93,91,9 90,17,9 0,121,9 116,56,9", " 116,183,9 204,76,9 18,222,9 47,85,9 254,236,9 139", ",78,9 147,26,9 25,186,9 117,266,9 28,41,9 193,269,", "9 66,20,9 162,161,9 167,213,9 243,259,9 13,8,9 74,", "20,9 56,212,9 263,111,9 266,4,9 45,2,9 196,67,9 65", ",85,9 164,209,9 171,164,9 37,163,9 194,247,9 167,1", "88,9 221,87,9 47,246,9 55,108,9 83,12,9 55,214,9 4", "3,144,9 230,153,9 138,100,9 240,148,9 252,224,9 19", "0,0,9 21,192,9 26,101,9 260,31,9 15,145,9 181,76,9", " 135,246,9 158,52,9 210,205,9 101,42,9 81,39,9 94,", "51,9 159,187,9 166,182,9 161,108,9 59,264,9 253,1,", "9 155,232,9 24,77,9 248,114,9 97,189,9 256,162,9 3", "6,188,9 169,234,9 143,82,9 19,126,9 35,151,9 142,1", "96,9 264,125,9 195,99,9 262,37,9 92,258,9 265,151,", "9 9,172,9 231,229,9 16,208,9 206,262,9 14,61,9 38,", "215,9 107,4,9 11,186,9 200,219,9 149,75,9 268,22,9"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 2439;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    int N = 136;
    vector<string> roads = {"30,133,2 92,103,1 91,17,3 13,71,3 77,", "88,6 33,130,7 31,38,9 8,63,3 124,16,4 4", "5,0,8 19,123,6 82,127,4 119,96,6 68,90,5 120,", "99,7 2,126,1 27,18,7 100,38,9 95", ",75,5 37,118,2 104,4,2 40,67", ",6 121,93,9 78,102,4 114,21,5", " 101,10,1 129,23,9 34,117,1 8", "0,15,9 86,12,3 55,6,5 11", "6,36,5 6,66,6 50,67,3 112,105,4 46,2,1 ", "73,43,6 76,81,7 99,27,", "5 93,31,8 58,64,1 49,26,7 39,114,4 72,22,", "2 18,56,7 10,53,8 110,57,1 68,8,9 1", "7,23,1 115,65,7 85,126,3 39,65,7 46,62", ",4 88,76,4 33,111,7 71,109,2 36,74,6 4", "7,97,7 132,125,5 84,94,7 128,78,5 ", "102,40,5 81,113,8 54,26,8 110,20,1 1,52,5 5", "8,41,4 7,73,5 15,28,2 51,49,1 87,135,5 70", ",96,9 9,48,7 94,3,8 32,1,1 16,29,7 91,72,5 ", "22,60,4 84,61,6 129,50,2 107,45,", "3 25,105,2 42,51,2 123,54,4 57,1", "31,6 79,115,9 59,111,9 64,135,5 1", "21,87,9 53,89,1 24,124,6 112,3,6 69,32,4 6", "0,120,1 134,130,1 34,37,1 90,7,5 25,1", "19,8 128,79,6 42,21,1 14,30,6", " 108,117,3 19,75,6 47,59,2 74,61,", "7 5,70,6 41,116,5 52,11,1 83,108,4 44,12,", "3 56,101,4 127,9,7 98,89,8 55,80,4 83,1", "09,4 97,14,6 95,69,8 103,133,5 118,", "82,2 29,122,3 132,35,2 104,85,8 11,4,3 106", ",43,5 24,77,8 44,125,3 35,63,7 134,20,1 98,", "106,6 92,86,6 122,0,7 113,66,9", " 131,48,8 62,100,6 107,13,7 28,5,7"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 661;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    int N = 136;
    vector<string> roads = {"37,34,9 71,27,9 87,54,9 70,42,9 82,", "102,9 130,100,9 83,65,9 80,66,9 5", ",25,9 118,78,9 62,39,9 112,95,9 8,134,9 19,8", ",9 103,45,9 5,18,9 41,107,9 98,70,9 61,30,9 47", ",36,9 14,74,9 10,115,9 47,63,9 83,11,9 ", "127,24,9 6,13,9 21,59,9 105,72,9 40,67,", "9 82,80,9 58,102,9 23,54,9 121,135,9 51,3,9 101", ",57,9 95,126,9 3,53,9 21,108,9 124,130,9 ", "79,123,9 46,36,9 6,124,9 68,2,9 28,9,9 107", ",92,9 91,127,9 110,61,9 39,48,9 69,112,9 43,73,9", " 90,103,9 87,14,9 118,29,9 111,81,9 1,", "13,9 129,109,9 114,75,9 4,125,9 75,86,9 40,9", "3,9 104,12,9 76,41,9 101,122,9 125,53,9 50", ",17,9 12,22,9 117,92,9 27,69,9 35,96,9 56,89,9 28", ",91,9 66,52,9 15,52,9 73,106,9 50,99,9 0,134,9 16,", "89,9 128,135,9 19,121,9 96,85,9 57,79,9 ", "42,49,9 16,113,9 110,32,9 9,44,9 15,55,9 97,122,9 ", "10,77,9 4,56,9 62,131,9 104,25,9 132,99,9 ", "29,44,9 51,74,9 7,31,9 64,123,9 33,18,9 120,2,9", " 30,38,9 106,59,9 1,26,9 108,93,9 111,34,9 1", "33,81,9 109,60,9 72,33,9 90,63,9 ", "105,117,9 131,88,9 26,68,9 20,100,9 37,85,9", " 119,49,9 22,114,9 133,43,9 24,35,9 65", ",129,9 67,113,9 132,94,9 78,58,9 60,98,9 1", "15,116,9 17,31,9 128,11,9 97,48,9 23,7", "1,9 84,64,9 0,32,9 7,119,9 45,77,9 94,11", "6,9 76,38,9 126,88,9 55,120,9 84,86,9 20,46,9"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1215;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    int N = 171;
    vector<string> roads = {"160,71,9198105 73,38,6047989 149,68,8817614 2,107,", "7831893 29,97,4996746 140,10,8905654 78,19,7470701", " 89,41,2419824 6,83,5759526 88,39,6041993 76,100,3", "65998 145,43,986481 153,115,926148 165,18,3935983 ", "122,111,8241608 75,43,3548902 122,163,2487714 11,5", "6,2915237 129,120,5545631 28,159,218005 13,4,44487", "12 125,50,9235758 116,141,4181647 121,11,9053923 6", "1,85,6657698 107,168,4958006 138,103,7951605 69,11", "6,3224082 57,42,5914174 51,20,1967422 67,40,145287", "4 154,90,6016726 14,21,8723152 130,162,8232606 69", ",135,5510611 26,155,953423 21,148,1626837 44,146,4", "743605 157,47,6860029 7,95,4317166 46,156,3066051 ", "55,97,8853086 38,7,1185290 106,148,6430141 158,74,", "705329 115,58,8495589 58,155,9111201 169,0,8205278", " 147,170,3694716 22,74,7009562 106,94,5478647 144,", "140,6143360 120,0,476835 105,35,8967237 27,110,267", "1049 117,54,3631221 84,29,3733717 151,26,5296023 5", "2,86,7916633 108,154,4786333 137,36,3059117 77,128", ",2350328 145,169,8262378 87,92,5882305 132,79,78", "33698 36,87,3129601 121,50,1034026 91,93,4183084 1", "68,151,3455596 101,143,9825303 23,8,9470315 123,47", ",5554440 141,167,6427109 104,96,3712605 1,105,3510", "353 128,72,3008985 137,150,2017889 3,131,5603563 4", "9,46,5004632 108,80,676778 13,165,4535139 51,82,10", "93673 144,103,2111880 113,84,3985624 34,66,86904 1", "02,86,5832998 131,53,481433 129,81,9037288 24,99,9", "950551 32,95,3127943 94,76,6581471 149,54,8375203 ", "166,32,5552273 12,48,8176484 28,98,6139221 52,17,2", "659945 59,2,1653718 64,82,3503884 15,160,2942306 2", "5,45,5443817 130,3,8600580 78,135,9127830 73,101,6", "94678 164,30,4202458 123,44,833325 139,99,1922079 ", "138,142,9957143 57,158,7729239 136,139,5809623 5,1", "8,6885641 112,134,726308 10,1,204500 170,42,666679", "5 113,40,9312479 96,75,2259188 146,88,2403736 83,1", "64,673592 37,19,9650876 48,102,8121094 65,59,20679", "24 104,153,4732364 24,134,7174983 25,33,7681920 11", "9,41,6197082 125,109,4572576 114,119,2834854 162,6", "6,5328330 9,89,9353386 100,166,1274018 64,23,73040", "01 39,4,7837130 142,132,606200 98,9,7210941 62,61,", "8040478 8,30,8220867 150,16,3467318 31,77,436671 6", "3,157,321281 35,63,4324779 71,161,7946103 143,17,6", "396056 16,81,3017175 124,20,8133796 133,67,7060260", " 93,70,9618740 152,60,7693910 53,124,6543584 92", ",85,3803248 79,12,7993682 55,5,5038964 156,15,8558", "426 62,133,1029323 167,56,7453055 126,136,1154359 ", "112,14,4965681 60,33,1639653 159,80,6227705 49,72,", "8310851 27,68,7270216 161,65,4374348 118,147,53618", "34 91,45,778629 110,37,4427955 22,127,6242193 126,", "114,5802044 6,90,202414 127,109,2331147 152,31,668", "2187 117,163,2259940 118,70,5667217 34,111,6512227"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 849131012;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    int N = 85;
    vector<string> roads = {"62,8,4772449 29,51,6291", "041 52,74,597889 74,64", ",6333265 24,19,3443699 17,46,931", "6526 63,14,3642393 4,2", "2,6360068 39,38,4444280 ", "55,35,2702591 48,3,3506107", " 20,39,1127908 9,65,3123026", " 3,84,8295154 79,73,", "1401365 80,15,675219 63,12,303784", "7 58,53,6180691 ", "50,10,594628 ", "70,66,8240757 59", ",43,7552108 73,14,", "4895862 30,54,2715899", " 43,1,2390729 48,45,49", "55354 31,60,682915", "2 24,44,1779921 57,1", "6,9180812 40,32,236191 ", "41,1,9477203 5,23,10", "63795 2,40,7836", "253 45,71,1784769 75", ",53,4781056 21,12,30083", "53 16,11,9491786 27,0,6054364", " 36,79,7622861 42,49,289227", "2 25,18,5081602 67,76,3077339", " 54,37,7448129 35,21,", "7609031 58,56,724147", "0 33,76,1252983 7,31,1363", "081 47,25,9698656 22,23,9001074 83", ",70,5752448 62,29,69201", "33 11,2,1893836 57,46", ",5159374 13,69,6242884 52,71,", "2210460 77,81,1736859 3", "3,59,5402856 20,68,1648", "99 18,19,4682390 28,7", ",5691494 50,66,1330986 82,1", "3,189059 6,72,7170761", " 10,37,2075792 84,26,2", "066238 61,27,88", "75844 51,64,1889499 4,3", "6,6748999 56,44,3807203 69,60,51619", "20 42,26,6255802 5,3", "0,5750902 32,81,3701249 72", ",38,9323071 61,34,7342509 0", ",8,6808973 34,78,7624164 41,6,58313", "83 9,75,3178925 65,80,8762138", " 82,78,808131 28,68,7304038 6", "7,47,4670556 15,77,931961 17,5", "5,4510364 49,83,7608277"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 396296729;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    int N = 174;
    vector<string> roads = {"65,0,10000000 35,0,10000000 0,14,10000000 0,94,100", "00000 169,0,10000000 153,0,10000000 25,0,10000000 ", "114,0,10000000 8,0,10000000 107,0,10000000 0,142,1", "0000000 22,0,10000000 82,0,10000000 131,0,10000000", " 75,0,10000000 0,62,10000000 0,106,10000000 32,0,1", "0000000 0,4,10000000 92,0,10000000 0,109,10000000 ", "54,0,10000000 46,0,10000000 31,0,10000000 0,76,100", "00000 19,0,10000000 112,0,10000000 55,0,10000000 0", ",154,10000000 0,121,10000000 68,0,10000000 0,34,10", "000000 117,0,10000000 162,0,10000000 140,0,1000000", "0 0,141,10000000 60,0,10000000 110,0,10000000 0,44", ",10000000 151,0,10000000 0,122,10000000 72,0,10000", "000 127,0,10000000 26,0,10000000 108,0,10000000 0,", "136,10000000 0,101,10000000 12,0,10000000 159,0,10", "000000 70,0,10000000 0,133,10000000 0,1,10000000 0", ",41,10000000 43,0,10000000 5,0,10000000 0,88,10000", "000 0,57,10000000 0,56,10000000 7,0,10000000 166,0", ",10000000 17,0,10000000 123,0,10000000 0,125,10000", "000 59,0,10000000 69,0,10000000 90,0,10000000 157,", "0,10000000 51,0,10000000 0,45,10000000 165,0,10000", "000 155,0,10000000 0,152,10000000 145,0,10000000 9", "7,0,10000000 0,98,10000000 21,0,10000000 0,58,1000", "0000 0,42,10000000 0,163,10000000 0,15,10000000 0,", "119,10000000 135,0,10000000 36,0,10000000 130,0,10", "000000 0,23,10000000 39,0,10000000 0,116,10000000 ", "0,164,10000000 0,168,10000000 137,0,10000000 0,167", ",10000000 0,100,10000000 103,0,10000000 105,0,1000", "0000 0,161,10000000 73,0,10000000 0,2,10000000 132", ",0,10000000 172,0,10000000 0,74,10000000 6,0,10000", "000 0,111,10000000 50,0,10000000 148,0,10000000", " 0,38,10000000 83,0,10000000 0,67,10000000 0,52,10", "000000 81,0,10000000 146,0,10000000 18,0,10000000 ", "24,0,10000000 20,0,10000000 53,0,10000000 0,85,100", "00000 49,0,10000000 0,93,10000000 171,0,1", "0000000 0,84,10000000 0,48,10000000 96,0,10000000 ", "63,0,10000000 0,138,10000000 0,120,10000000 0,149,", "10000000 11,0,10000000 126,0,10000000 28,0,1000000", "0 0,61,10000000 104,0,10000000 0,9,10000000 0,37,1", "0000000 0,113,10000000 0,33,10000000 0,143,10000", "000 0,173,10000000 71,0,10000000 128,0,10000000 80", ",0,10000000 0,160,10000000 118,0,10000000 0,158,10", "000000 3,0,10000000 91,0,10000000 0,134,10000000 0", ",47,10000000 0,144,10000000 150,0,10000000 64,0,10", "000000 0,87,10000000 0,13,10000000 0,86,10000000 0", ",66,10000000 129,0,10000000 0,77,10000000 16,0,100", "00000 139,0,10000000 27,0,10000000 0,124,10000000 ", "0,79,10000000 0,99,10000000 78,0,10000000 29,0,100", "00000 102,0,10000000 0,89,10000000 10,0,10000000 0", ",95,10000000 0,170,10000000 115,0,10000000 0,40,10", "000000 0,30,10000000 147,0,10000000 0,156,10000000"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1730000000;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    int N = 187;
    vector<string> roads = {"0,66,9999999 0,105,9999999 0,136,9999999 89,0,9", "999999 0,146,9999999 0,3,9999999 0,118,9999999 58,", "0,9999999 0,133,9999999 0,2,9999999 74,0,9999999 1", "83,0,9999999 79,0,9999999 106,0,9999999 0,49,99999", "99 86,0,9999999 22,0,9999999 0,36,9999999 0,12,999", "9999 91,0,9999999 30,0,9999999 0,41,9999999 165,0,", "9999999 0,28,9999999 0,112,9999999 0,123,9999999 ", "0,19,9999999 128,0,9999999 0,8,9999999 0,13,999999", "9 0,158,9999999 0,140,9999999 0,17,9999999 0,26,99", "99999 0,121,9999999 0,153,9999999 0,32,9999999 39,", "0,9999999 70,0,9999999 0,57,9999999 0,6,9999999 97", ",0,9999999 115,0,9999999 0,34,9999999 78,0,9999999", " 182,0,9999999 94,0,9999999 159,0,9999999 29,0,999", "9999 0,137,9999999 0,156,9999999 138,0,9999999 0,1", "32,9999999 64,0,9999999 16,0,9999999 155,0,9999999", " 162,0,9999999 0,1,9999999 163,0,9999999 99,0,9999", "999 0,180,9999999 166,0,9999999 0,14,9999999 0,164", ",9999999 98,0,9999999 170,0,9999999 0,161,9999999 ", "176,0,9999999 174,0,9999999 0,55,9999999 4,0,99999", "99 148,0,9999999 92,0,9999999 127,0,9999999 0,44,9", "999999 80,0,9999999 0,93,9999999 143,0,9999999 20,", "0,9999999 0,9,9999999 72,0,9999999 142,0,9999999 0", ",62,9999999 96,0,9999999 179,0,9999999 0,130,99999", "99 116,0,9999999 33,0,9999999 77,0,9999999 60,0,99", "99999 0,125,9999999 0,67,9999999 5,0,9999999 0,169", ",9999999 0,48,9999999 0,157,9999999 154,0,9999999 ", "71,0,9999999 0,151,9999999 0,171,9999999 147,0,999", "9999 145,0,9999999 184,0,9999999 51,0,9999999 63,0", ",9999999 35,0,9999999 168,0,9999999 0,23,9999999 1", "67,0,9999999 25,0,9999999 181,0,9999999 7,0,999999", "9 119,0,9999999 0,102,9999999 0,186,9999999 149,0,", "9999999 0,173,9999999 75,0,9999999 0,185,9999999 0", ",107,9999999 177,0,9999999 0,46,9999999 0,129,9999", "999 87,0,9999999 0,124,9999999 172,0,9999999 0,56,", "9999999 103,0,9999999 134,0,9999999 0,53,9999999 0", ",21,9999999 120,0,9999999 83,0,9999999 111,0,99999", "99 90,0,9999999 0,18,9999999 0,81,9999999 0,141,99", "99999 0,59,9999999 0,82,9999999 84,0,9999999 69,0,", "9999999 0,109,9999999 76,0,9999999 0,117,9999999 1", "50,0,9999999 0,88,9999999 113,0,9999999 10,0,99999", "99 0,52,9999999 0,144,9999999 0,100,9999999 0,42,9", "999999 126,0,9999999 47,0,9999999 108,0,9999999 10", "4,0,9999999 40,0,9999999 0,38,9999999 110,0,999999", "9 65,0,9999999 0,45,9999999 175,0,9999999 73,0,999", "9999 0,43,9999999 0,85,9999999 54,0,9999999 95,0,", "9999999 0,139,9999999 50,0,9999999 0,178,9999999 0", ",68,9999999 135,0,9999999 160,0,9999999 0,114,9999", "999 0,15,9999999 0,24,9999999 0,101,9999999 0,31,9", "999999 152,0,9999999 0,61,9999999 0,131,9999999 11", ",0,9999999 122,0,9999999 27,0,9999999 37,0,9999999"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1859999814;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    int N = 170;
    vector<string> roads = {"0,47,9999999 150,0,9999999 59,0,9999999 0", ",75,9999999 3,0,9999999 152,0,9999999 0,110,", "9999999 0,32,9999999 0,71,9999999 0,7,99999", "99 0,115,9999999 0,74,9999999 124,0,9999999 39,0,9", "999999 0,19,9999999 54,0,9999999 0,88,", "9999999 0,117,9999999 0,10,9999999 0,168,9999", "999 165,0,9999999 101,0,9999999 20,0,9999999 0,", "41,9999999 164,0,9999999 132,0,9999999 61,0,999999", "9 0,65,9999999 134,0,9999999 99,0,9999999 16,0,999", "9999 136,0,9999999 0,9,9999999 0,122,9999999 0,66", ",9999999 0,35,9999999 0,119,9999999 0,26,9999999 0", ",28,9999999 0,143,9999999 108,0,9999999", " 0,116,9999999 0,85,9999999 24,0,9999999 0,60,", "9999999 0,126,9999999 92,0,9999999 37,0,9999999 ", "58,0,9999999 141,0,9999999 144,0,9999999 0,29,9999", "999 102,0,9999999 18,0,9999999 87,0,9999999 0,30,9", "999999 0,154,9999999 0,90,9999999 22,0,", "9999999 0,46,9999999 6,0,9999999 0,94,999999", "9 0,62,9999999 0,118,9999999 0,68,99999", "99 0,133,9999999 0,40,9999999 0,84,", "9999999 0,148,9999999 114,0,9999999 107,0,9999999", " 0,81,9999999 0,162,9999999 105,0,9999999 0,52,", "9999999 0,167,9999999 86,0,9999999 129,0,99999", "99 0,155,9999999 0,83,9999999 0,91,9999999 0,79,99", "99999 13,0,9999999 123,0,9999999 100,0,9999999 14,", "0,9999999 0,2,9999999 0,70,9999999 0,93,9999999 0,", "21,9999999 0,112,9999999 0,163,9999999 ", "0,166,9999999 0,38,9999999 8,0,9999999 0,80,999", "9999 0,23,9999999 72,0,9999999 5,0,9999999 0,43,99", "99999 36,0,9999999 0,12,9999999 0,120,9999999 82,0", ",9999999 31,0,9999999 0,1,9999999 42,0,9999999 111", ",0,9999999 67,0,9999999 113,0,9999999 55", ",0,9999999 0,127,9999999 0,34,9999999 0,121,999999", "9 159,0,9999999 4,0,9999999 17,0,9999999 131,0", ",9999999 138,0,9999999 0,158,9999999 0,140,9999999", " 0,11,9999999 0,76,9999999 160,0,9999999 9", "8,0,9999999 0,77,9999999 145,0,9999999 45,0,99", "99999 128,0,9999999 0,142,9999999 44,0,9999", "999 96,0,9999999 56,0,9999999 153,0,9", "999999 130,0,9999999 0,109,9999999 0,103,999999", "9 0,139,9999999 0,135,9999999 0,48,9999999 0,89", ",9999999 147,0,9999999 161,0,9999999 0,25,9", "999999 97,0,9999999 73,0,9999999 0,27,9999", "999 0,69,9999999 51,0,9999999 49,0,9999999 0,1", "69,9999999 78,0,9999999 0,151,9999999 ", "0,95,9999999 104,0,9999999 0,125,9999999", " 0,63,9999999 0,33,9999999 57,0,9999999", " 0,53,9999999 0,137,9999999 0,157,9999999 106,", "0,9999999 149,0,9999999 0,15,9999999 156,0,", "9999999 64,0,9999999 146,0,9999999 50,0,9999999"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1689999831;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    int N = 4;
    vector<string> roads = {"1,0", ",10", "0 2,1", ",584 3,2", ",754"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1438;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    int N = 3;
    vector<string> roads = {"0,1,2 0,2,2 1,2,1"};
    TimeTravellingSalesman* pObj = new TimeTravellingSalesman();
    clock_t start = clock();
    long result = pObj->determineCost(N, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22706095&rd=14245&pm=11049
********************************************************************************
#include <iostream> 
#include <sstream> 
#include <vector> 
#include <string> 
#include <algorithm> 
#include <set> 
#include <map> 
#include <queue> 
#include <cstdlib> 
#include <cstring> 
#include <cctype> 
#include <cmath> 
 
using namespace std; 
 
long long re[1001][1001]; 
int n; 
long long dis[1001]; 
bool visit[1001]; 
long long getit() 
{ 
    for (int i = 0; i < n; ++i) 
        dis[i] = 10000000000000LL; 
    memset(visit, false, sizeof(visit)); 
    dis[0] = 0; 
    long long res = 0; 
    for (int i = 0; i < n; ++i) { 
        int p = -1; 
        long long mmin = 10000000000000LL; 
        for (int j = 0; j < n; ++j) { 
            if (!visit[j] && dis[j] < mmin) { 
                mmin = dis[j]; 
                p = j; 
            } 
        } 
        if (p < 0) return -1; 
        res += mmin; 
        visit[p] = true; 
        for (int j = 0; j < n; ++j) 
            if (!visit[j] && re[p][j] && re[p][j] < dis[j]) { 
                dis[j] = re[p][j]; 
            } 
    } 
    return res; 
} 
struct TimeTravellingSalesman { 
long long determineCost(int N, vector <string> rr) 
{ 
    n = N; 
    string s; 
    for (int i = 0; i < rr.size(); ++i) 
        s += rr[i]; 
    stringstream in(s); 
    int a, b, c; 
    char c1,c2; 
    while (in >> a >> c1 >> b >> c2 >> c) { 
        re[a][b] = re[b][a] = c; 
    } 
    return getit(); 
} 
};

********************************************************************************
*******************************************************************************/