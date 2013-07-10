/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10782
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

class TimeTravellingTour {
public:
    long determineCost(int N, vector<int> cities, vector<string> roads);
};

long TimeTravellingTour::determineCost(int N, vector<int> cities, vector<string> roads) {
    long ret;
    return ret;
}


int test0() {
    int N = 5;
    vector<int> cities = {2, 3, 2, 4};
    vector<string> roads = {"0,2,4 0,1,2 2,1,2 1,3,3 4,0,4"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 3;
    vector<int> cities = {1, 0, 1};
    vector<string> roads = {"0,2,1", " 2", ",1,5"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
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
    vector<int> cities = {2};
    vector<string> roads = {"0,1,2"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
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
    int N = 5;
    vector<int> cities = {4, 0, 4, 0, 4, 0};
    vector<string> roads = {"0,1,10000000 ", "1,2,10000000 ", "2,3,10000000 ", "3,4,10000000"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 120000000;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 5;
    vector<int> cities = {4, 2, 3, 1};
    vector<string> roads = {"0,1,2 0,2,3 0,3,4 0,4,5 1,2,1 1,3,2 1,4,3 ", "2,3,1 2,4,2 3,4,1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 6;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 4;
    vector<int> cities = {3, 2, 1, 2};
    vector<string> roads = {"0,1,5 0,2,1 0,3,4 1,2,2"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 7;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 6;
    vector<int> cities = {4, 1, 3, 2};
    vector<string> roads = {"0,1,5 0,2,5 0,5,2 2,3,5 2,4,2 3,4,4 3,5,1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 19;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 2;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {"1,0,1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 50;
    vector<int> cities = {26, 37, 38, 40, 11, 19, 31, 9, 28, 29, 25, 8, 23, 25, 5, 25, 37, 21, 44, 19, 23, 12, 15, 31, 8, 18, 26, 42, 49, 25, 47, 28, 42, 1, 49, 21, 19, 47, 26, 12, 24, 15, 17, 34, 42, 36, 5, 41, 1, 40};
    vector<string> roads = {"0,1,9381782 0,3,4622547 0,5,3518325 0,9,5457875 0,", "11,679849 0,16,9234336 0,17,4236707 0,18,9905935 0", ",19,5129964 0,20,1367362 0,22,8952085 0,26,789593 ", "0,27,9543923 0,29,6426105 0,33,7887221 0,34,204890", "7 0,39,7221401 0,40,2808642 0,41,3786611 0,45,1790", "117 0,47,3392185 0,48,6516427 1,2,2960866 1,10,304", "4030 1,11,6452287 1,12,2409672 1,14,1170499 1,16,8", "316427 1,18,5117138 1,21,2659981 1,22,5403038 1,23", ",5310884 1,24,5455885 1,25,6164971 1,26,9178486 1,", "27,4710023 1,31,1371051 1,35,6811636 1,36,388044 1", ",37,6069820 1,40,5990096 1,42,9413454 1,46,9095501", " 1,47,8045162 1,48,2218509 2,4,9253100 2,6,9299139", " 2,9,6705358 2,12,9627708 2,13,6635353 2,15,603922", "0 2,20,2204254 2,21,6490951 2,22,9023902 2,23,7023", "078 2,24,3758721 2,25,4160205 2,26,307890 2,27,644", "0025 2,28,3236817 2,30,3095765 2,34,1705963 2,36,5", "699659 2,37,714746 2,38,4353757 2,42,9214793 2,44,", "2661273 2,46,2058916 3,4,6269032 3,5,1068800 3,6,6", "017615 3,7,6732959 3,9,3104049 3,10,9467723 3,11,9", "312964 3,12,7867850 3,15,8398964 3,16,4303666 3,17", ",321387 3,21,7804337 3,22,9813912 3,26,99752 3,31,", "5617138 3,32,7207239 3,33,4651158 3,34,7901846 3,3", "6,1381464 3,37,8824753 3,38,9678386 3,41,306858 3,", "42,5046673 3,43,3258982 3,48,153400 3,49,6044502 4", ",5,3150462 4,6,2700901 4,7,4448809 4,8,6270436 4,1", "1,1721959 4,12,8113315 4,13,6756801 4,14,5445964 4", ",17,8585951 4,19,7940164 4,20,2295148 4,21,8393979", " 4,24,2128532 4,26,5348944 4,27,7908829 4,28,43915", "74 4,32,444905 4,33,6804092 4,35,7478157 4,36,9988", "270 4,37,7304813 4,38,5530310 4,39,797638 4,40,868", "1919 4,41,444266 4,42,5388287 4,44,6662334 5,6,789", "4840 5,7,2737550 5,8,6290865 5,10,5076153 5,12,308", "3161 5,19,1097270 5,20,3595233 5,22,4705304 5,23,7", "395986 5,24,3142206 5,25,954087 5,26,7733381 5,27,", "7694449 5,28,9917733 5,29,6037647 5,30,6221132 5,3", "2,4684134 5,34,1884365 5,35,7509271 5,36,709751 5,", "39,8657159 5,41,7436978 5,43,7292338 5,44,5300241 ", "5,45,8664867 5,46,6046749 5,47,7291766 5,49,976349", "7 6,7,1014907 6,10,7321322 6,11,3422857 6,12,77428", "64 6,15,5622573 6,20,7581381 6,21,7823013 6,22,942", "2348 6,23,2030300 6,24,3471721 6,25,1348632 6,26,9", "137745 6,27,6018032 6,30,902471 6,32,9690119 6,33,", "3764214 6,39,1350145 6,43,3858064 6,44,9938939 6,4", "8,5345185 6,49,2113140 7,8,4687685 7,9,979483 7,10", ",4984585 7,12,6378056 7,14,7462344 7,19,216508 7,2", "0,7011586 7,24,7287420 7,26,4783429 7,27,5363646 7", ",32,1009653 7,36,5592641 7,38,2027677 7,39,6796026", " 7,42,6080884 7,44,8135826 7,45,4750092 7,47,81842", "81 8,9,8996163 8,11,3147699 8,12,7843599 8,13,4542", "473 8,14,6892358 8,16,5486883 8,20,1922869"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 143673135;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 50;
    vector<int> cities = {41, 10, 8, 30, 32, 21, 6, 38, 40, 41, 16, 11, 31, 4, 5, 34, 20, 32, 11, 39, 25, 21, 3, 28, 46, 5, 37, 42, 36, 32, 48, 32, 44, 6, 19, 31, 34, 24, 25, 23, 20, 46, 39, 7, 0, 44, 46, 25, 31, 7};
    vector<string> roads = {"0,38,1 0,", "23", ",9 0", ",9,5 0", ",4,4 ", "0,19,5 0", ",21,9 0", ",42,2 0", ",47,8 0", ",35,8 0,", "3,6 0", ",28,4 0,12", ",2 ", "0,33,5 0", ",6,2 0,37", ",2 0,34", ",9 0,1", "3,8 0", ",29,3 0", ",8,4 0", ",44,3 0,4", "1,6 0,20,", "3 0,30,", "8 0,49,4 0", ",40,", "6 0,7,", "5 0,46,", "9 0,32,", "4 0,", "15,4", " 0,2", "6,2 0,", "18,7 0", ",14,4 0,", "48,6 0,", "10,6", " 0,11,7 ", "0,25,7 ", "0,16,", "6 0,45,3 0,3", "9,7 ", "0,5,2 0,1,", "2 0,", "17,5 0,22,8 ", "0,43,8 0", ",24,6 0,31,6 ", "0,2,7 0,2", "7,2 0,", "36,4"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 267;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 50;
    vector<int> cities = {30, 13, 28, 10, 27, 25, 27, 32, 7, 24, 41, 30, 1, 48, 40, 11, 47, 16, 9, 24, 4, 38, 27, 19, 44, 45, 23, 21, 1, 10, 24, 31, 27, 6, 42, 4, 32, 23, 37, 44, 2, 33, 25, 3, 37, 16, 14, 34, 32, 28};
    vector<string> roads = {"0,17,5 0,11,2 16,29,8 15,25,4 0,48,1 1,2,5 23,39,2", " 28,39,1 22,47,8 5,46,6 0,43,3 10,26,6 10,49,3 0,4", "5,7 35,41,1 0,30,3 26,39,2 2,22,1 0,16,4 1,29,9 33", ",44,5 16,27,7 2,20,5 1,18,2 44,49,4 20,21,5 2,46,2", " 23,44,4 29,33,2 21,27,1 0,44,4 33,39,7 22,39,4 1,", "13,3 15,46,2 0,18,5 17,26,5 16,39,9 20,45,7 8,39,7", " 18,35,7 7,27,9 2,11,3 29,34,7 24,49,7 5,32,7 11,2", "2,7 13,18,6 0,36,7 4,8,4 9,45,2 16,34,1 26,40,5 14", ",22,2 14,20,6 8,47,5 9,33,6 14,26,7 23,24,7 29,37,", "4 27,46,1 46,47,2 32,37,4 10,38,1 0,6,4 0,26,1 23,", "47,6 7,46,4 16,30,5 3,26,3 14,32,6 23,43,1 0,46,3 ", "2,27,1 23,38,9 38,41,7 0,25,6 3,13,6 5,9,5 28,31,4", " 37,39,4 9,39,3 8,20,2 33,47,3 7,31,2 46,48,5 3,49", ",7 41,49,4 7,48,8 7,28,3 1,34,1 3,18,8 37,44,7 6,2", "1,6 0,29,9 15,31,2 15,28,5 11,34,4 31,32,8 0,33,9 ", "0,23,6 0,1,1 9,41,6 4,26,9 13,22,3 0,15,3 15,33,6 ", "17,24,6 29,38,4 19,23,3 0,35,1 44,45,9 0,5,8 16,44", ",8 10,43,5 1,26,7 31,44,2 3,8,5 12,37,1 0,8,2 11,3", "7,6 11,39,8 17,44,3 1,25,9 34,40,9 10,47,3 0,42,8 ", "4,42,4 1,24,4 8,36,1 30,38,9 23,37,4 25,40,7 15,22", ",9 25,43,4 28,38,4 4,28,2 30,32,1 14,41,3 5,45,7 8", ",34,4 40,47,8 17,37,9 8,11,4 22,34,1 39,45,9 17,18", ",2 1,45,6 0,28,6 5,25,3 17,32,2 30,42,7 1,21,2 0,1", "4,2 15,21,1 34,41,9 0,37,5 6,48,1 33,49,8 11,17,7 ", "8,26,8 11,25,8 45,48,3 0,19,1 25,28,8 4,16,7 32,43", ",2 2,43,5 25,45,9 12,24,2 5,44,3 16,25,3 6,25,1 28", ",33,2 15,24,3 40,42,8 13,31,7 14,42,8 18,28,7 3,23", ",4 0,40,7 0,2,7 9,20,3 0,49,5 9,14,4 37,42,7 26,45", ",5 38,47,6 4,27,3 5,7,2 11,20,8 20,26,4 7,40,8 6,3", "8,6 15,26,8 5,27,2 11,26,7 0,27,6 8,9,2 26,29,3 0,", "9,3 15,45,7 33,37,1 20,23,8 28,35,1 21,31,9 0,4,5 ", "1,30,4 19,41,8 0,39,6 27,28,4 6,30,5 16,41,5 30,45", ",3 6,47,8 32,36,4 3,15,4 31,42,4 28,46,8 0,32,8 20", ",31,5 27,39,8 1,27,3 0,3,4 27,33,9 0,21,9 0,24,9 2", "8,37,7 20,28,7 4,15,2 34,35,4 2,34,2 29,45,9 12,43", ",6 0,47,6 29,39,1 8,41,4 18,22,6 23,27,9 37,49,8 1", "6,23,8 42,46,7 40,48,4 31,45,6 12,17,8 11,31,3 15,", "40,8 38,45,8 37,48,9 31,49,7 20,44,4 22,24,9 1,44,", "4 9,17,8 15,32,1 39,48,2 0,41,1 7,39,5 31,34,2 14,", "33,2 11,18,7 12,29,1 7,38,9 7,29,1 3,21,1 16,47,8 ", "22,25,6 22,46,6 11,42,5 8,46,6 11,41,3 30,44,1 0,2", "0,1 32,35,2 3,27,1 27,43,6 1,12,8 21,48,9 18,31,5 ", "5,20,5 4,7,1 24,43,7 10,37,9 10,39,3 13,28,3 6,19,", "8 7,15,3 24,33,1 1,32,7 8,22,5 7,22,3 13,35,7 0,31", ",9 11,33,2 10,28,1 0,38,6 0,22,5 31,43,6 20,32,3 1", "6,31,9 10,12,4 14,37,5 0,13,4 17,27,6 13,42,9 9,31", ",8 0,34,4 16,20,9 9,36,8 25,47,2 18,40,1 28,47,9 2", "0,39,7 0,7,6 16,46,9 4,45,6 0,12,5 11,43,5 29,41,4", " 25,48,9 19,27,3 3,11,2 9,44,6 20,25,8 21,29,9 12,", "27,5 13,24,6 19,21,5 33,40,9 7,43,5 0,10,7 12,49,5"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 129;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 50;
    vector<int> cities = {31, 2, 13, 25, 34, 6, 44, 2, 4, 40, 46, 5, 49, 0, 1, 18, 47, 7, 8, 9, 14, 26, 4, 18, 3, 7, 18, 25, 6, 14, 30, 43, 20, 43, 17, 4, 5, 17, 12, 7, 13, 8, 18, 16, 8, 18, 39, 10, 30, 1};
    vector<string> roads = {"33,45,6 3,37,1 3", "5,41,4 8,37,6 0,45", ",5 0,39,6 0,41,2 0,21,5", " 0,47,7 0,18,2 ", "20,44,4 0,32,5 11,4", "9,6 28,44,5 0,3,1 1,30,2 12,43,9 ", "10,18,3 4,24,4 21,", "49,1 21,37,8 0,6,9 3,10,2 0,", "2,7 32,33,7 34,37,4 2", "7,39,1 0,16,3 2,36,1 0,4", "3,7 11,27,1 17,3", "2,5 0,11,5 15,38,7 29,", "31,8 0,31,2 30,44,5 38,47,3 ", "0,4,5 34,42,6 0,27,1 ", "5,28,8 16,26,8 14,31,5 0,", "22,9 23,31,4 0,42,2 0,7,", "1 8,26,5 0,10,4 0,5,4 5,15,9 1", "7,27,7 0,9,6 1,21,1 1,15,5 0,8,6 ", "16,28,3 13,36,4 0,3", "8,9 0,1,9 24,48,3 26,36,1 1,28,1 0,3", "7,9 0,23,9 4,48,1 26,44,1", " 0,29,8 19,47,6 17,19,8 1", "9,46,2 42,46,5 0,40,", "5 0,36,3 1,35,5 15,16,1 ", "14,39,5 22,37,4 0,20,4 34,", "35,6 0,19,9 7,16,2 ", "25,32,8 37,39,4 3", "5,45,7 30,49,7 0,35", ",9 0,34,1 0,17,8 6,", "8,1 28,46,4 5,13,6 0,24,", "3 15,31,1 0,13,6 10,22,6 0,1", "5,9 2,35,6 19,31,", "7 5,36,1 0,46,6 2,41,", "6 0,33,2 0,14,6 15,34,6", " 0,49,5 3,25,1 0,48,4 ", "15,40,9 45,49,5 0,26,3 0,25,4 18,", "43,9 44,49,2 1,47,6 5,6", ",6 0,12,5 36,46,1 12,46,", "1 5,25,5 0,30,5 5,35,6 8", ",44,4 16,45,3 6,34,8 0", ",28,9 11,40,5 0,44,7 6,13,", "1 43,44,2 41,44,8 4,27,1 1", "6,43,4 2,5,4 12,45,7"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 174;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 25;
    vector<int> cities = {7, 2, 17, 15, 0, 20, 17, 2, 4, 1, 13, 15, 12, 2, 3, 21, 5, 9, 12, 3, 19, 18, 23, 13, 24, 4, 21, 19, 9, 2, 14, 16, 21, 5, 23, 13, 17, 15, 16, 21, 9, 20, 10, 14, 23, 12, 10, 20, 13, 22};
    vector<string> roads = {"0,6,9 0,8,9 0,15,4 ", "0,17,4 0,18,", "8 0,4,8 0,5,7", " 0,24,1 0,2", "0,6 0,3,8 0,", "23,9 0,22,2 0,13", ",7 0,21,8 0,", "9,3 0,1,6 0,1", "2,6 0,16,5 ", "0,14,7 0,19,", "1 0,10,3 0,2,8", " 0,7,5 0,11,1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 288;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 25;
    vector<int> cities = {2, 20, 18, 21, 11, 5, 6, 10, 22, 20, 16, 20, 6, 9, 3, 16, 0, 9, 1, 23, 3, 21, 8, 10, 18, 13, 10, 20, 12, 7, 13, 14, 2, 23, 1, 6, 21, 23, 14, 18, 20, 23, 4, 1, 24, 7, 10, 24, 8, 11};
    vector<string> roads = {"10,15,2 20,23,6 0,24,3 3,14,2 11,15,5 2,6,3 16,22,", "9 4,13,3 1,24,5 20,24,5 13,20,6 8,16,2 0,13,3 2", ",20,8 3,6,3 17,24,9 8,14,7 4,14,2 11,16,5 8,17,", "8 18,23,7 18,20,1 15,20,1 4,15,7 4,18,7 2,16,6 4,2", "3,6 16,21,6 12,14,3 1,18,9 3,20,1 13,17,2 8,12,2 7", ",20,4 0,8,9 16,20,2 10,23,8 1,15,1 15,16,5 7,16,9 ", "0,1,1 13,16,9 0,6,7 9,14,8 7,10,4 6,10,", "7 20,22,2 12,18,9 22,24,9 1,23,2 0,2,9 6,17,5 14,1", "6,7 12,13,1 3,5,8 1,5,6 10,11,7 1", "4,20,4 0,3,1 17,22,2 1,4,8 11,21,6 1,14,6 3,13,9 1", "3,14,3 15,18,7 5,19,7 3,10,5 11,22,3 14,21,4 14,24", ",3 0,19,5 6,20,7 2,19,2 11,24,1 1,19,3 17,21,4 2,1", "2,4 3,9,9 0,18,3 12,20,9 12,21,5 12,23,3 9,18,7 15", ",22,5 14,19,8 13,15,5 20,21,1 5,21,1 5,10,5 18,21,", "3 6,8,9 13,22,7 5,18,7 2,18,4 15,24,8 10,20,8 5,7,", "2 2,23,9 7,18,7 1,17,5 6,14,7 6,22,7 14,22,8 7,19,", "3 17,19,5 1,20,6 0,22,2 5,11,1 8,15,6 2,5,8 19,20,", "6 9,23,3 14,17,2 1,10,2 1,2,6 6,21,6 8,23,2 0,10,1", " 1,3,6 15,23,4 1,16,7 23,24,2 21,23,3 7,22,8 ", "17,23,7 5,9,6 1,12,9 17,20,5 21,24,8 4,24,1 14,18,", "6 18,19,4 6,9,9 7,21,3 9,24,4 5,24,4 6,7,7 4,11,8 ", "21,22,7 3,19,5 0,23,1 2,13,2 5,20,9 4,12,7 16,23", ",5 4,22,5 8,20,6 13,19,4 2,17,7 11,19,6 15,21,9", " 0,9,4 9,21,3 10,16,5 6,19,2 12,17,4 6,12,1 3,7,8 ", "10,18,2 10,21,4 10,14,4 3,22,4 19,24,9 15,19,8 9,1", "0,4 3,12,5 10,19,2 10,17,4 2,21,8 14,15,3 9,19,9 2", ",22,2 7,24,3 11,23,1 5,8,4 2,24,3 9,13,1 7,17,4 9,", "15,7 4,8,8 0,20,7 1,13,2 9,12,3 0,4,2 2,9,7", " 4,6,5 12,16,8 5,23,6 2,7,7 16,18,7 13,24,1 5,12,6", " 2,15,6 8,13,9 6,15,9 10,22,1 8,10,1 8,9,7 2,8,7", " 12,22,2 8,22,2 19,21,8 7,9,9 3,4,2 3,8,4 5,13,7 2", ",14,8 19,22,3 19,23,4 6,13,6 10,24,", "4 6,18,6 10,12,3 5,17,9 4,7,5 4,5,8 18,22,6 ", "1,7,3 16,24,1 2,10,3 16,17,7 1,6,3 7,12,3 4,16,4 8", ",19,2 8,21,6 8,24,4 3,15,8 12,24,2 1,9,5 5,6,3 16,", "19,8 15,17,7 0,14,6 1,21,2 4,20,7 7,13,1 0,16,3 6,", "23,8 12,19,7 9,17,2 13,18,2 4,9,1 7,11,3 11,17,2 3", ",24,2 3,21,3 2,3,3 0,15,3 5,22,4 13,23,9 0,5,8", " 11,18,6 4,19,9 17,18,7 6,11,5 0,12,1 9,11,8 4,10,", "3 11,20,7 22,23,8 0,7,7 5,16,1 3,17,9 7,23", ",9 9,22,9 3,18,6 1,8,1 13,21,2 3,11,3 4,17,9 9,16,", "2 2,11,2 0,21,8 18,24,8 1,11,2 7,8,5 11,14,8 0,17,", "8 3,16,7 10,13,9 7,15,7 8,11,2 1,22,4 14,23,4 4,21", ",4 11,12,5 5,15,9 3,23,4 5,14,6 2,4,4 0,11,4 7,14,", "2 8,18,6 9,20,9 12,15,2 6,16,2 11,13,8 6,24,2"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 73;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 25;
    vector<int> cities = {6, 4, 13, 24, 22, 9, 4, 23, 17, 7, 11, 5, 22, 8, 16, 20, 8, 4, 21, 7, 19, 13, 19, 5, 8, 21, 15, 4, 16, 5, 3, 21, 2, 9, 13, 17, 18, 8, 6, 2, 16, 8, 24, 12, 17, 7, 24, 17, 3, 12};
    vector<string> roads = {"16,18,2 10,20,7 0,14,8 5,17,8", " 13,19,9 22,24,6 0,10,5 0,6,", "5 5,18,3 11,17,3 0,11,9 0,5", ",3 12,16,3 1,8,3 1,9,7 15,", "22,3 0,17,1 10,23,9 15", ",18,9 3,22,1 0,16,6 13,", "21,8 9,16,1 6,13,2 8,11,5 4,1", "7,3 6,12,4 21,24,5 0,18,6 3,16,7 6,", "11,3 3,19,2 6,19,1 7,11,3 1,2", "0,9 2,5,8 8,20,1 5,12,2 3,11,5 0,9,9 ", "3,6,1 2,10,1 6,22,9 4,19,9 3,15,", "6 7,17,9 10,12,9 8,12,6 13,20,6 0,2", "2,7 5,8,5 14,20,1 10,11,5 1,13,", "6 17,24,7 8,9,3 1,24,3 0,12", ",4 4,12,8 5,22,2 19,20,9 2,23,1 ", "18,21,2 0,2,6 4,13,5 5,1", "9,2 19,21,5 1,11,6 9,11,2 4,9,6 17,", "19,5 14,16,8 3,23,9 13,17,8 0,7,3", " 3,12,9 5,13,3 17,20", ",1 7,18,3 5,15,2 9,17,8 0,24,5 1", "8,24,8 6,14,6 1,3,2 10,18,7 4,21", ",5 12,22,7 5,16,8 8,14,8 15,19,9 13,", "14,5 11,13,8 12,19,6 20,22,4 ", "1,21,3 18,22,3 5,20,8 16,23", ",3 0,13,1 2,4,6 4", ",22,6 9,24,9 4,5,3 6,15,5 0,8,", "6 0,3,5 0,21,7 1,15,6 2,15,8", " 12,15,6 1,18,5 7,22,1 ", "6,8,5 3,13,8 19,24,7 14,", "18,7 2,20,9 0,19,9 0,20,3 2,16,7 ", "18,23,2 17,21,7 11,16,6 0,4,6 5,14,", "2 3,9,7 12,24,8 0,23,6 15,24,7 0,", "15,1 5,7,6 2,", "14,6 14,19,3 5,11,4 2,3,3 ", "3,24,2 0,1,5 21,22,7 3,4,6"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 139;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 12;
    vector<int> cities = {1, 4, 6, 1, 5, 7, 6, 2, 1, 10, 0, 6, 9, 5, 2, 4, 1, 6, 11, 10, 11, 7, 1, 0, 8, 5, 9, 11, 5, 4, 0, 4, 6, 5, 3, 10, 9, 10, 11, 0, 6, 11, 5, 2, 5, 8, 3, 4, 11, 3};
    vector<string> roads = {"0,", "7,", "4", " ", "0", ",", "1", ",5 ", "0", ",9", ",", "3 ", "0,", "8", ",1 ", "0,", "4,4", " ", "0", ",", "2", ",", "3 ", "0", ",", "1", "0", ",", "5 0", ",", "3", ",6 ", "0,", "6", ",", "5 ", "0", ",", "1", "1", ",1", " ", "0", ",5", ",", "4"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 175;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 12;
    vector<int> cities = {6, 1, 0, 2, 5, 6, 7, 5, 8, 0, 10, 6, 0, 2, 7, 2, 8, 1, 6, 3, 0, 1, 9, 2, 7, 6, 1, 11, 2, 4, 1, 6, 4, 1, 7, 6, 5, 1, 0, 2, 1, 10, 5, 0, 9, 0, 3, 5, 11, 5};
    vector<string> roads = {"3,9,4 1,2,4 1,11,3 1,7,3 7,8,7 3,5,", "3 2,5,1 1,8,7 4,11,1 0,10,8 2,", "4,1 5,11,4 2,3,8 0,7,9", " 1,3,6 8,11,6 5,9,3 1,10,2 ", "3,7,3 1,4,7 3,8,2 6,10,9 2,", "8,8 7,9,3 5,6,6 1,5,", "5 0,11,5 3,4,9 ", "0,6,8 0,5,3 1,9,5 2,9,3 2,6,4", " 4,8,8 6,9,2 0", ",3,2 1,6,6 6,7,3 5,8,6 8,", "10,9 4,10,2 0,4,7 6,", "11,5 10,11,3 4,7,7 2,7,7 9", ",10,2 0,9,6 9,11,1 5,7,", "5 0,1,8 2,11,6 0,8,2 7,", "11,8 0,2,3 2,10,9 4,6,3 4", ",9,2 5,10,6 3,11,2 7,10,7 4,5,", "9 3,10,1 8,9,9 3,6,2 6,8,5"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 12;
    vector<int> cities = {4, 9, 10, 7, 3, 5, 9, 4, 5, 2, 8, 5, 0, 1, 2, 1, 9, 2, 4, 5, 2, 9, 11, 9, 10, 9, 2, 7, 1, 8, 5, 4, 5, 1, 10, 5, 7, 6, 9, 8, 7, 4, 2, 6, 5, 2, 7, 0, 3, 9};
    vector<string> roads = {"0,8,4 3,10,5 6,9,5 8,10", ",2 4,6,2 1,4,3 6,7,1 2,4,7 8", ",11,6 4,8,4 0,6,3 3,6,8 0,10", ",1 2,5,2 4,5,2 1,11,1 2,1", "0,2 3,9,2 5,8,1 5,9,", "9 5,11,5 1,2,1 3,7", ",2 0,7,5 2,3,2 0,9,8", " 2,11,7 2,9,4 5,10,7 4,11,8 1,3,", "9 7,9,5 8,9,7 6,8,9", " 0,5,8 3,4,2 2,6", ",2 7,10,8 1,8,8 9,10,6 9", ",11,4 10,11,8 0,4,1 1,10,7 ", "7,8,5 1,9,4 6,11,", "3 3,8,8 5,7,9 0,1,", "3 6,10,5 1,5,7 3,5", ",3 4,10,1 1,7,9 2,8,4 ", "3,11,3 4,9,3 1,6,8", " 0,11,7 0,2,4 5,6,1 2,7,", "3 4,7,5 0,3,6 7,11,6"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 79;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 12;
    vector<int> cities = {4, 7, 2, 3, 2, 5, 7, 4, 11, 4, 5, 6, 0, 3, 10, 4, 6, 2, 0, 2, 10, 3, 1, 3, 6, 9, 3, 1, 4, 9, 10, 6, 4, 0, 10, 6, 4, 2, 11, 3, 7, 1, 10, 6, 1, 6, 10, 6, 7, 8};
    vector<string> roads = {"0,3,7 0,9,1", " 0,1,", "2 0,7,1 ", "0,6,8 0", ",11,5", " 2,8,2 ", "0,10,2 0,", "5,3 4,10,", "5 7,1", "0,9 ", "1,8,3 0,4", ",8 0,8,3 5,9", ",6 0,2,2"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 208;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 6;
    vector<int> cities = {3, 2, 4, 0, 5, 2, 3, 2, 1, 0, 3, 0, 3, 1, 5, 1, 2, 0, 2, 3, 4, 1, 2, 0, 3, 0, 2, 5, 4, 3, 5, 3, 2, 5, 3, 1, 3, 2, 0, 1, 4, 0, 1, 3, 1, 2, 1, 5, 1, 3};
    vector<string> roads = {"0,5,8", " 0,4,9 ", "0,1,9 ", "0,3,", "9 0,2,5"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 332;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 6;
    vector<int> cities = {2, 3, 1, 2, 0, 3, 5, 3, 2, 0, 4, 0, 1, 4, 1, 0, 5, 1, 4, 1, 5, 1, 0, 2, 3, 2, 3, 1, 3, 2, 1, 2, 1, 5, 4, 2, 1, 2, 3, 0, 4, 2, 4, 3, 1, 5, 1, 3, 1, 2};
    vector<string> roads = {"3,4,", "2 4", ",5,1 ", "0,2,", "9 ", "0,", "3", ",5 0", ",4,7 1", ",5,7 2", ",4,", "3 ", "1,", "4,4", " 0,", "1,3", " 0,", "5,1 3", ",5,3 2", ",5,8 1,", "2,6 1,", "3,", "8 ", "2,3,1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 97;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 6;
    vector<int> cities = {1, 2, 3, 5, 0, 4, 2, 3, 5, 4, 2, 1, 0, 3, 0, 3, 5, 3, 2, 3, 4, 5, 1, 4, 0, 2, 0, 4, 2, 1, 4, 2, 5, 0, 5, 2, 0, 2, 1, 0, 1, 0, 2, 3, 2, 1, 0, 3, 5, 2};
    vector<string> roads = {"0,3,4 0,4,3 2", ",3,1 0,1,1 0", ",2,2 4,5,9 3,5,", "6 1,2,7 0,5,", "9 1,5,2", " 1,3,8 2,4,", "8 1,4,2 2,5", ",6 3,4,2"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 71;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 6;
    vector<int> cities = {2, 3, 2, 4, 0, 3, 0, 2, 1, 4, 0, 3, 5, 0, 1, 0, 4, 1, 3, 0, 5, 0, 2, 4, 5, 4, 3, 0, 5, 2, 1, 3, 1, 4, 2, 1, 4, 5, 3, 5, 2, 4, 3, 4, 0, 1, 2, 5, 1, 4};
    vector<string> roads = {"0,4,9 ", "0,2,3 ", "3,5,2 2,", "5,1 0,1,4 ", "1,2,8 1,4", ",1 0,", "5,4 0,3", ",2 2,3,7 ", "4,5,6 1", ",5,1 3,4,2", " 2,4,4 1,3,2"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 67;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 3;
    vector<int> cities = {1, 0, 2, 1, 0, 1, 0, 1, 0, 2, 0, 1, 2, 1, 2, 1, 0, 1, 0, 2, 0, 2, 1, 2, 0, 2, 1, 2, 0, 1, 0, 2, 1, 2, 0, 2, 1, 0, 1, 2, 1, 0, 2, 0, 2, 1, 0, 1, 2, 0};
    vector<string> roads = {"0,", "1,", "2", " ", "0", ",", "2", ",", "9"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 178;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 3;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 2, 0, 1, 2, 0, 1, 0, 2, 1, 2, 0, 2, 0, 2, 1, 2, 1, 0, 1, 0, 2, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 0, 2, 0, 1, 2, 0, 1, 0, 1, 0, 1, 2, 0};
    vector<string> roads = {"0,", "2,1 ", "1,2,7 ", "0,", "1", ",6"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 116;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 3;
    vector<int> cities = {1, 2, 0, 2, 1, 2, 0, 1, 2, 1, 0, 2, 1, 2, 0, 2, 0, 2, 0, 2, 1, 0, 2, 0, 1, 2, 0, 1, 0, 2, 0, 1, 0, 1, 0, 1, 0, 1, 0, 2, 0, 1, 0, 2, 1, 0, 1, 2, 0, 1};
    vector<string> roads = {"0,2,", "4", " 0,1", ",2 ", "1,2,2"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 70;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 3;
    vector<int> cities = {2, 1, 0, 2, 1, 0, 2, 1, 0, 2, 0, 1, 2, 1, 2, 0, 2, 1, 2, 0, 2, 0, 1, 0, 2, 0, 2, 1, 0, 1, 2, 1, 2, 1, 0, 2, 0, 2, 0, 1, 2, 1, 0, 1, 0, 1, 2, 1, 2, 0};
    vector<string> roads = {"1", ",2,", "7", " ", "0", ",", "1", ",", "3", " ", "0,", "2", ",3"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 102;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 2;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {"0,", "1,", "8"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 200;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 3;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 2, 0, 2, 1};
    vector<string> roads = {"0,1,5 1,2,7"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 39;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 5;
    vector<int> cities = {2, 4, 1, 3, 0, 1, 2, 1, 3, 1, 4, 2, 1, 3, 4, 0, 1, 0, 4, 3, 2, 3, 2, 3, 2, 0, 3, 1, 2, 0, 1, 3, 0, 2, 0, 1, 2, 1, 2, 4, 2, 0, 2, 4, 2, 0, 1, 4, 1, 4};
    vector<string> roads = {"3,4", ",1", " 1", ",", "3,1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
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
    int N = 10;
    vector<int> cities = {5, 2, 9, 7, 1, 5, 0, 1, 3, 0, 8, 1, 9, 2, 3, 0, 5, 4, 6, 8, 0, 8, 6, 7, 9, 4, 0};
    vector<string> roads = {"2,5,7", " 7,", "8", ",9"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
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
    int N = 25;
    vector<int> cities = {8, 0, 23, 8, 4, 7, 13, 18, 24, 0, 24, 20, 8, 2, 18, 15, 7, 0, 10, 9, 16, 5, 24, 21, 17, 14, 23, 24, 9, 0, 24, 17, 0, 23, 17, 22, 20};
    vector<string> roads = {"5", ",10,1", " 7", ",10,5"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
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
    int N = 50;
    vector<int> cities = {25, 46, 18, 35, 12, 7, 3, 6, 30, 31, 40, 10, 20, 13, 45, 13, 7, 1, 25, 4, 10, 12, 25, 36, 9, 22, 28, 43, 5, 18, 17, 35, 13, 41, 24, 31, 48, 33, 37, 27, 14, 27, 43, 33, 45, 43, 2, 4, 0, 28};
    vector<string> roads = {"38,45", ",7 8", ",29,", "8"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
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
    int N = 50;
    vector<int> cities = {15, 33, 46, 18, 16, 38, 1, 36, 19, 0, 26, 15, 44, 27, 23, 49, 10, 36, 9, 4, 23, 10, 13, 41, 38, 18, 9, 40, 47, 22, 5, 18, 5, 7, 36, 27, 44};
    vector<string> roads = {"38,", "45,", "7", " 8", ",", "29", ",8"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
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
    int N = 2;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {"0", ",", "1", ",", "1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 25;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 3;
    vector<int> cities = {1, 0, 1, 2, 1, 2, 1, 2, 1, 2, 1, 0, 1, 0, 1, 0, 2, 0, 1, 0, 2, 1, 0, 1, 0, 1, 0, 2, 0, 2, 1, 0, 2, 0, 1, 0, 2, 1, 2, 0, 1, 2, 0, 2, 1, 0, 2, 1, 0, 2};
    vector<string> roads = {"1,2,9 0,2,9 0,1,7"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 219;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 5;
    vector<int> cities = {1, 4, 3, 0, 2, 1, 2, 0, 2, 3, 0, 2, 1, 4, 1, 4, 1, 0, 4, 0, 1, 3, 2, 1, 0, 2, 1, 2, 3, 2, 0, 3, 1, 4};
    vector<string> roads = {"1,", "4", ",2 ", "2", ",3", ",6", " ", "0", ",", "1", ",8", " 2", ",4,", "7", " 1,", "3,7 ", "3", ",4", ",7 ", "0,2,", "8 0,", "3,3"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 121;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 10;
    vector<int> cities = {6, 0, 1, 4, 1, 4, 6, 1, 8, 2, 7, 0, 8, 5, 3, 1, 7, 5, 0, 5, 8, 5, 1, 0, 6};
    vector<string> roads = {"1", ",", "9", ",", "8 3", ",4,", "2", " ", "4,", "8", ",", "2 ", "6", ",", "7,", "5", " ", "0", ",9", ",", "6", " ", "1", ",", "3,", "3", " 4", ",", "5", ",", "2", " ", "2,", "4,3"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 25;
    vector<int> cities = {11, 10, 22, 19, 13, 15, 0, 7, 14, 19, 7, 21, 23, 9, 4, 3, 14, 1, 8, 18, 13, 7, 16, 15, 6, 17, 15, 1, 14, 3, 2, 24, 5, 16, 10, 19, 6, 2, 0, 20, 22, 24, 15, 20, 8, 12, 15, 14, 13, 22};
    vector<string> roads = {"9", ",", "1", "8,", "9", " ", "12,", "2", "1,", "4", " ", "0,", "1", "8", ",", "9", " ", "1", ",", "2", "0", ",", "3", " ", "5", ",", "19", ",", "5 ", "1", ",", "1", "7,", "1", " ", "1", "0,", "11", ",", "7"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 50;
    vector<int> cities = {28, 8, 27, 23, 18, 14, 19, 2, 47, 32, 6, 48, 20, 1, 39, 48, 34, 5, 39, 34, 12, 45, 29, 4, 43, 13, 25, 49, 3, 13, 43, 35, 26, 24, 10, 45, 38, 28, 3, 36, 17, 9, 40, 43, 15, 29, 41, 0, 39, 35};
    vector<string> roads = {"2", "0", ",2", "8,", "3", " 4,", "46", ",", "4 ", "9,", "1", "9", ",", "1", " 6", ",", "4", "8", ",", "3 ", "1", "9,", "27", ",9 ", "3,", "1", "5,", "3", " 2", ",", "2", "5", ",", "4"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
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
    int N = 50;
    vector<int> cities = {21, 15, 7, 6, 36, 18, 41, 30, 9, 25, 28};
    vector<string> roads = {"4,46,", "4 6,48", ",3 19,", "27,9 2,2", "5,4 3,15,3", " 20,28,3 ", "9,19,1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
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
    int N = 2;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {"0", ",", "1,", "3"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 75;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 3;
    vector<int> cities = {1, 0, 2, 0, 2, 1, 2, 0, 1, 2, 1, 0, 1, 0, 2, 1, 0, 1, 0, 2, 0, 2, 1, 2, 0, 1, 2, 0, 2, 1, 0, 2, 1, 2, 1, 0, 1, 0, 1, 0, 2, 1, 0, 1, 2, 1, 2, 0, 2, 0};
    vector<string> roads = {"0", ",1", ",", "4 0", ",2,5", " ", "1,2", ",6"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 127;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 5;
    vector<int> cities = {1, 2, 3, 1, 3, 2, 3, 2, 4, 0, 2, 4, 2, 3, 0, 1, 0, 2, 3, 1, 2, 4, 2, 1, 2, 3, 2, 0, 1, 4, 1, 0, 1, 0, 3, 2, 3, 0, 2, 1, 2, 3, 0, 4, 0, 1, 4, 1, 3, 2};
    vector<string> roads = {"0", ",", "3", ",", "9", " ", "1,2,", "7 3", ",", "4", ",", "9 ", "1", ",4", ",5", " ", "1", ",", "3", ",6", " 2", ",4,", "9 ", "0,", "1", ",8", " 2,", "3", ",", "1 0", ",", "4,", "3 ", "0,", "2", ",7"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 145;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 10;
    vector<int> cities = {1, 6, 8, 2, 6, 5, 3, 1, 5, 2, 3, 6, 1, 9, 8, 3, 7, 9};
    vector<string> roads = {"5,8,9 2", ",3,6 3,7,", "3 1,7,7 ", "0,4,3 2", ",4,8 1,3,", "2 0,6,4 1,2,1 ", "1,5,4 0", ",3,6 1", ",4,6 3,5,2 ", "6,7,3 6,9", ",3 0,9,8 2,", "7,2 3,8,", "8 5,7,4 1,9", ",4 5,6", ",9 4,8,2 4,6", ",9 1,6,5 7", ",8,9 0,2,9 0", ",7,1 2,9,", "7 1,8,6 4", ",9,4 0,8,6", " 3,6,5 0,5", ",9 8,9,3 7,", "9,1 2,", "6,6 4,5,2 ", "5,9,2 3,4,", "3 6,8,1 3,9", ",1 4,7,4 2,8,2 ", "0,1,8 2,5,9"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 30;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 25;
    vector<int> cities = {4};
    vector<string> roads = {"2,24,7 8,18,5 4,10,9 10,19,5 2,", "14,1 10,24,1 8,15,7 15,22,7 13,18,5 4", ",5,5 11,12,3 3,12,7 3,22,9 11,24,6", " 4,9,9 8,21,1 6,18,6 16,20,", "6 1,9,9 6,22,4 5,9,9 4,18,6 4,7,1 9", ",13,8 0,9,4 21,23,4 0,5,2 13,", "20,1 9,24,2 14,18,8 0,19,6 12", ",20,7 19,21,4 0,13,5 2,13,3 6", ",23,3 18,20,3 1,6,8 14,15,5 6,19,", "5 0,24,2 7,22,7 0,10,3 8,20,9 1,4,", "8 8,22,9 13,24,9 5,19,1 3,1", "0,6 13,23,3 1,16", ",6 7,10,7 1,24,9 1,12,5 13,14,", "6 10,17,8 2,8,9 5,13,5 3,24,9 5,22,8", " 13,16,5 8,13,5 15,23,8 7,13,", "6 17,24,4 18,21,5 13,19,1 10", ",23,9 11,16,8 1,3,9 3,15,5 1", "2,13,1 9,19,3 20,22,4 3,11,1 ", "10,18,4 17,23,7 2,16,1", " 15,17,4 2,4,5 2,5,5 13,17", ",8 2,20,5 4,15,1 3,17,6 2,7,2 6,24", ",9 12,23,9 3,4,8 13,15,8 6,15,7 1", "5,21,6 8,10,4 4,16,8 ", "0,7,3 6,13,4 12,21,2 0,11,9", " 14,17,1 14,21,9 14,20,3 ", "8,17,6 0,6,9 1,11,3 19,20,", "4 3,7,6 2,15,4 4,17,3 3,16,", "4 4,20,3 8,12,2 5,6,2 2,", "11,3 11,14,5 14,16,1 9,10,1 2,12,2 19", ",23,7 8,14,8 0,16,2 5,20,6 ", "3,21,4 7,14,2 7,19,4 2,21,6 2,3,6 10,", "22,1 9,15,5 1,14,7 18,23,", "8 4,24,4 15,20,7 4,1", "3,7 0,2,8 2,22,3 4,6,5 11", ",18,5 2,19,9 17,18,6"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 50;
    vector<int> cities = {44, 22, 42, 37, 29, 24, 34, 30, 42, 10, 1, 33, 34, 16, 32, 15, 11, 5, 13, 40, 15, 23, 45, 15, 40, 39, 34, 17, 38, 41, 44, 31, 18, 41, 24, 49, 16, 14, 35, 13, 30, 36, 46, 13, 3, 28, 35, 19, 39, 47};
    vector<string> roads = {"45,47,8 7,40,4", " 16,34,5 30,44,7 10,46,", "6 4,18,5 10,32,9 24,32,6 5,", "20,4 3,6,3 31,41,1 8", ",19,8 1,6,7 13,34,1 25,4", "0,5 23,36,4 3,28,3 6,", "31,6 16,42,4 9,42,4 4,40,8 16", ",48,4 13,29,1 17,30,8", " 30,32,4 33,48,8 17,18,6", " 37,39,2 3,39,1 6,25,", "9 21,44,4 2,44,8 6,16,3", " 21,41,8 20,25,7 11,", "40,2 18,36,8 22,31,8 4,3", "1,5 22,32,5 42,45,7 10,44,9 13,4", "4,6 31,42,6 2,37,9 5,9,3 2", "4,29,8 2,4,3 1", "8,28,8 35,36,7 26,33,3 3", "5,38,4 34,40,2 15,24,6", " 31,43,6 20,48,6 1,40,7 4,35", ",2 1,11,5 17,36,8 38,46,3 ", "37,41,5 9,43,4 26,32", ",7 3,12,2 21,31,7 24,", "46,3 2,9,3 26,28,8 14,41,1 5,48,5 9", ",24,9 4,23,1 7,47,2 21,32,3 3", ",33,6 25,36,4 28,46,3", " 13,49,4 36,37,2 ", "2,36,1 0,6,5 2,28,4 23,34,", "6 18,40,1 1,22,1", " 28,43,8 21,37,5 2,10,4 6,35,", "8 16,38,2 15,31,3 10,25,9 4,4", "8,1 2,49,5 20,27,9 4,2", "5,3 11,34,4 34,45,5 ", "9,20,4 11,45,6 1,18,2 0,43,3 ", "25,28,3 5,23,4 ", "22,30,6 13,25,3 20,49,7 ", "6,47,7 13,43,7", " 7,41,4 18,41,8 15,32,", "4 5,42,3 8,26,3 31,32", ",4 30,37,7 39,41,8 2", "2,44,3 1,38,4 19", ",39,7 36,38,5 11,19,6 17,22", ",4 7,31,9 10,45,1 2,40", ",5 3,17,8 20,26,6 10", ",35,7 2,35,9 23,41,1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 270;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 50;
    vector<int> cities = {11, 44, 38, 35};
    vector<string> roads = {"10,25,9 5,23,4 21,41,", "8 24,46,3 11,40,2 2,9,3 ", "13,44,6 4,35,2 4,25,", "3 19,39,7 13,43,7 ", "18,28,8 5,42,3 13,49,", "4 25,28,3 10,35,7 25,36,4", " 6,31,6 5,20,4 6,47,7 2,4", "4,8 39,41,8 22,44,3 6,25", ",9 4,40,8 2,40,5 2,4,3 3,2", "8,3 45,47,8 4,23,1 31", ",42,6 20,25,7 21,", "31,7 9,43,4 2,10,4 6,16,3 10", ",32,9 5,9,3 1,22,1 ", "3,33,6 25,40,5 3,39,1 22,30,6", " 42,45,7 16,42,4 4,31", ",5 1,11,5 3,6,3 24,32", ",6 8,19,8 0,43,3 4,48,1 9", ",42,4 18,40,1 2,28,4", " 16,48,4 13,34,1 10", ",46,6 1,6,7 16,34,", "5 17,18,6 15,24,6 2,49,5", " 26,32,7 31,43,6", " 18,41,8 24,29", ",8 5,48,5 23,41,1 20,", "27,9 18,36,8 21,37,5 ", "15,31,3 30,44,7 15,", "32,4 23,36,4 2,3", "6,1 4,18,5 23,34,6 30,32,4", " 34,45,5 7,47,2 9,2", "0,4 26,28,8 2,35,9", " 16,38,2 10,44,9 1,38,4 28,4", "6,3 13,25,3 2,3", "7,9 6,35,8 7,31,9 7,41,4 20", ",26,6 17,36,8 37,41,5 11,1", "9,6 1,18,2 36,37,2 37,3", "9,2 33,48,8 38,46,3 17,3", "0,8 36,38,5 26,33,3 2", "1,44,4 3,17,8 11,45,6 14,41,1 ", "21,32,3 30,37,7 10,", "45,1 13,29,1 22,32", ",5 31,32,4 8,26,3 ", "20,49,7 34,40,2 17,22,4 28,4", "3,8 7,40,4 22,31,8 20,48,", "6 11,34,4 9,24,9 3,12,2 0,", "6,5 31,41,1 35,36,7", " 35,38,4 1,40,7"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 27;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 2;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1};
    vector<string> roads = {"0", ",1,9"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 126;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 3;
    vector<int> cities = {1, 0, 1, 2, 0, 2, 0, 1, 2, 0, 1, 0, 1, 2, 0, 1, 0, 2, 0, 1, 0, 2, 0, 1, 2, 1, 0, 2, 1, 2, 1, 2, 0, 1, 0, 1, 2, 0, 2, 1, 2, 1, 2, 1, 0, 2, 0, 1, 0, 1};
    vector<string> roads = {"0", ",2", ",9", " ", "1", ",", "2", ",", "1", " 0", ",", "1", ",", "1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 33;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 5;
    vector<int> cities = {4, 3, 1, 0, 4, 3, 4};
    vector<string> roads = {"3,4,3", " 0,4,2 ", "0,1,", "1 2", ",", "4,4 1,4,", "2 0,3,9", " 1,", "3,1 2,3", ",3 1,2", ",5 ", "0,2,7"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 9;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 10;
    vector<int> cities = {9, 2, 5, 0, 2, 4, 1, 5, 7, 0, 6, 5, 3, 5, 6, 0, 9, 1, 3, 5, 8, 7, 1, 0, 3, 0, 4, 3, 7, 8, 6, 7, 0, 9, 4, 0, 3, 6, 4, 7, 3, 0, 4, 7, 2, 7, 8, 1, 6, 8};
    vector<string> roads = {"2,8,", "6 3,7,", "8", " 2,3,6", " 6,8,7", " 6,", "9,", "8 0,9,", "1 2,", "7,2 2", ",4,6 1,", "3,9 0,4", ",4 4", ",7", ",3 1,6,2", " 4,9,5", " 4,6", ",7", " 2,", "9,4 4,8,1", " 5,6,9", " 0,6,1 8", ",9,3", " 3,4,8 5", ",8,1", " 5,9,7 ", "0,2,6 ", "1,", "5,1 3,8", ",9 2", ",5", ",7 1,", "7,2", " 0,", "3,4", " 7,9,", "6 6,7,5 1,", "9,1 1,2,", "3 4,5,5 7,8,", "8 0,5,", "8 3", ",6,7 ", "0,1,5 ", "0,8,1 2", ",6,", "9 1,8,4 5", ",7,7 0,", "7,7 3,9,7", " 1,4", ",7 3,5,9"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 85;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 25;
    vector<int> cities = {16, 12, 8, 7, 0, 24, 17, 18, 23, 1, 12, 13, 16, 5, 20, 13, 5, 6, 7, 20, 17, 0, 4, 5, 15, 13, 21, 2, 18, 24, 14, 0, 12, 15, 0, 12, 5, 18, 5, 20, 10, 8, 7, 2, 14, 3};
    vector<string> roads = {"3,16,5 4,12,6 0,2,5 23,24,5 6,17,9 6,8,9 16,2", "1,7 7,16,8 10,14,4 12,14,3 0,20,2 4,19,7 9,", "13,4 12,16,1 0,23,7 1,4,2 14,19,4 11,13,2 0,16,5 4", ",11,9 9,18,9 21,23,9 4,21,9 19,22,2 4,15,1 10,11,1", " 16,18,5 4,13,1 9,15,4 7,15,5 18,23,4 10,23,1 3,24", ",7 0,15,6 6,9,2 0,12,6 7,20,9 2,14,3 9,10", ",8 1,16,5 4,14,3 20,21,3 18,22,8 17,19,3 1,6,6 5,1", "0,1 17,23,9 8,19,6 10,21,1 7,19,4 5,18", ",3 8,9,9 2,3,5 13,20,4 11,15,1 1,11,7 17,22,5 9,17", ",2 6,15,4 0,8,3 13,24,3 1,19,7 6,12,3 ", "3,9,1 11,21,3 1,13,8 15,20,1 22,23,3 5,23,5 0,", "10,8 8,16,9 1,9,6 2,10,2 10,24,6 10,15,7 3,15,4 7,", "21,2 6,24,2 7,14,2 14,20,9 22,24,6 11,12,2 4,7,2 8", ",15,5 3,17,6 14,24,1 16,20,4 13,19,7 14,23,6 1,", "8,1 2,19,3 10,22,2 3,8,8 6,7,4 18,19,9 2,8,1 6,10,", "9 1,2,7 9,14,7 8,14,4 9,24,5 3,19,2 1", "2,20,1 5,20,7 0,1,1 10,12,5 19,23,8 19,24,8 6,", "16,1 4,8,9 6,20,1 0,5,3 9,16,4 5,16,8 18,20,6 2,", "11,6 8,11,8 7,10,3 8,24,8 3,14,9 1,20,3 5,", "24,4 2,17,4 17,21,4 13,21,5 1", ",14,1 12,19,7 11,23,4 12,21,3 1,17,4 1,21,1 4,23", ",8 0,13,4 10,20,7 3,18,8 3,5,1 0,17,6 6,21,1 2,9,7", " 7,11,4 0,14,6 12,22,2 7,18,4 5,12,5 13,18,4 0,22,", "7 10,19,1 1,10,9 15,24,2 14,15,7 13,15,5 6,18,", "4 15,16,8 17,18,3 6,19,6 1,5,8 5,7,6 4,22,3 1,23,8", " 13,23,8 12,23,4 21,22,2 0,11,3 16,17,9 2,22,7 ", "8,22,2 2,13,3 8,21,5 5,13,6 7,12,1 4,", "18,8 6,13,8 7,8,8 7,24,7 2,21,1 20,22,3 5,19,7", " 9,23,8 3,12,2 8,13,8 3,13,5 1,22,3 10,17,6 5,21,7", " 6,11,3 3,20,2 20,23,6 3,23,5 19,20,6 14,18,3 11,", "16,3 5,8,9 2,15,6 15,19,2 2,20,7 4,6,2 16,", "23,5 13,14,6 11,18,1 5,22,5 1,3,4 1,24,8 5,9,5 3,6", ",4 5,6,9 5,15,6 11,19,3 2,23,3 21,24,8 12,", "24,3 2,12,2 9,22,8 17,20,5 8,10,4 9,20,4 11,24,1", " 16,24,8 4,20,6 2,18,7 1,15,4 1,12,1 2,6,5 5", ",11,9 10,18,6 4,24,3 7,17,1 17,24,8 19,21,3 1,18,4", " 3,4,1 12,18,5 15,18,3 0,21,2 9,12,2 0,19,8 18,", "24,2 20,24,6 14,21,1 14,22,6 18,21,3 0,6,7 0,3,2", " 3,22,2 4,17,7 8,18,2 3,10,9 13,16,1 13,22,9 14,", "17,5 15,17,8 5,17,3 3,11,7 0,4,7 7,22,3 2,7,", "2 7,13,5 7,9,3 1,7,2 4,10,4 9,21,9 4,16,4 11,14,8 ", "7,23,2 8,20,9 16,19,4 2,5,1 0,7,8 9,11,6 8,12,7 ", "0,9,3 6,23,8 10,16,3 3,7,4 15,22,4 6,22,4 8,23,9 0", ",24,8 2,4,2 12,13,2 0,18,3 12,15,7 8,17", ",2 12,17,7 14,16,4 4,9,5 5,14,2 6,14", ",1 4,5,7 3,21,6 15,21,9 11,20,5 2,24,8 16,22,9 11,", "17,4 10,13,6 11,22,4 15,23,2 9,19,9 13,17,2 2,16,9"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 65;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 50;
    vector<int> cities = {28, 32, 36, 40, 1, 11, 5, 22, 21, 32, 42, 24, 7, 4, 45, 30, 4, 2, 18, 34, 24, 45, 5, 44, 10, 14, 18, 34, 38, 9, 41, 15, 46, 27, 10, 3, 43, 16, 25, 14, 3, 22, 44, 11, 26, 44, 47, 34, 47, 19};
    vector<string> roads = {"10,18,3 7,20,7 36,43,4 4,37,3 0,49,1 18,28,5 29,44", ",6 24,45,3 28,33,5 44,46,2 0,32,1 7,42,4 40,48,5 2", "2,45,6 6,39,8 25,37,4 10,39,2 2,30,2 4,9,5 28,44,2", " 7,10,1 3,22,9 23,28,1 6,15,4 46,47,1 5,26,3 19,49", ",8 22,47,7 11,35,2 20,43,6 30,31,6 28,45,6 11,30,7", " 32,48,8 25,34,9 29,47,1 2,36,7 32,49,3 19,45,1 6,", "20,9 18,33,5 14,36,2 2,16,5 6,29,7 14,25,5 19,35,5", " 9,23,3 5,13,7 10,15,5 18,45,8 9,18,9 10,36,9 4,", "28,1 12,41,1 8,11,3 7,17,2 10,20,8 16,28,2 11,40,9", " 20,36,4 9,37,1 1,35,9 21,32,8 6,34,8 15,37,1 3,28", ",9 42,46,7 0,31,6 31,49,1 13,16,2 19,20,8 25,43,6 ", "6,30,6 33,38,9 6,49,1 2,24,8 15,39,8 4,39,3 9,29,2", " 18,22,1 5,6,6 6,12,4 12,38,3 23,24,1 28,49,4 19,4", "8,8 31,42,8 12,43,9 5,41,2 6,41,5 6,18,9 29,42,8 1", "7,20,6 11,18,3 7,44,7 22,35,2 18,35,1 31,39,3 3,18", ",1 34,47,1 32,37,1 11,25,9 2,37,4 19,24,4 39,42,7 ", "30,41,5 7,28,6 13,29,1 24,34,9 5,39,4 23,34,8 21,2", "8,7 1,21,7 27,34,7 2,3,9 2,40,9 1,19,2 27,45,8 8,2", "9,9 25,49,7 17,47,1 18,48,1 0,33,2 3,13,1 11,28,3 ", "24,27,3 16,34,8 14,37,9 13,32,9 15,48,3 23,26,3 35", ",40,7 14,18,8 28,34,5 18,34,8 8,47,1 8,22,6 2,32,7", " 17,28,8 14,44,8 19,23,7 26,45,7 2,18,7 12,46,8 22", ",39,9 16,23,3 40,43,9 13,35,5 4,17,3 8,14,6 2,29,8", " 15,26,6 26,40,3 7,47,7 21,24,4 4,46,6 0,26,6 34,4", "2,3 0,12,2 13,21,6 11,43,4 14,42,2 35,41,2 5,46,6 ", "7,46,2 15,30,1 14,47,3 10,28,4 5,48,5 36,46,9 11,1", "6,3 23,38,7 2,45,8 12,48,6 3,6,3 22,43,4 17,38,1 3", ",43,7 0,4,1 28,35,8 5,23,5 0,18,6 15,34,8 10,30,3 ", "19,33,8 13,44,1 22,37,2 39,44,9 30,49,2 9,10,7 24,", "25,2 1,20,1 6,22,9 18,19,5 13,26,5 3,47,3 17,42,9 ", "6,17,3 18,24,5 26,33,6 43,48,4 17,46,9 25,28,6 19,", "27,1 26,42,1 23,39,1 10,11,4 20,29,7 6,45,1 38,41,", "8 19,32,1 1,7,3 33,41,1 24,44,9 7,15,4 34,49,9 3,1", "4,7 13,39,6 22,44,4 10,42,2 30,42,9 22,42,8 20,24,", "8 18,29,5 16,19,6 26,41,3 6,40,9 0,36,2 24,37,8 8,", "24,3 22,31,1 19,47,9 5,36,9 41,48,2 45,48,1 37,43,", "9 21,29,5 5,31,2 13,30,6 27,44,9 2,5,5 14,20,4 17,", "43,7 3,4,2 24,33,7 5,7,6 12,42,6 4,12,3 0,28,5 1,2", "3,5 0,24,1 22,38,1 0,45,9 0,8,8 5,8,8 15,43,9 7,27", ",8 4,36,5 25,29,2 8,37,5 3,19,4 11,24,7 19,30,9 43", ",45,3 38,44,2 8,30,8 24,49,1 25,44,4 9,33,1 25,47,", "9 12,28,6 20,40,7 21,39,1 27,38,6 10,21,5 19,39,4 ", "2,48,3 12,19,2 30,34,1 38,39,4 7,14,4 40,44,7 24,3", "0,4 23,30,7 3,10,3 15,28,8 15,23,2 3,48,7 30,40,6 ", "28,32,5 19,34,8 26,46,5 23,42,1 15,19,7 16,43,5 21", ",37,2 13,34,7 6,9,9 22,34,4 31,44,4 11,48,7 4,16,8", " 21,36,5 33,46,7 34,46,9 28,48,2 8,26,9 43,46,8 6,", "25,9 44,48,6 19,37,2 1,6,9 0,16,8 8,18,1 8,9,3 2,4", "2,1 17,29,6 2,39,5 29,32,5 2,8,1 2,33,7 35,36,7 36", ",45,8 23,29,1 5,19,3 2,7,4 13,28,1 25,39,9 11,32,1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 115;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 50;
    vector<int> cities = {41, 34, 20, 13, 5, 14, 12, 38, 43, 14, 24, 7, 26, 46, 9, 1, 11, 47, 25, 36, 44, 4, 17, 10, 39, 45, 46, 25, 37, 36, 47, 27, 28, 17, 42, 37, 35, 9, 26, 29, 28, 49, 40, 9, 45, 0, 11, 10};
    vector<string> roads = {"8,47,1 0,26,6 5,13,7 14,36,2 43,48,4 0,31,6 42,46,", "7 1,35,9 4,17,3 13,32,9 23,24,1 28,48,2 13,21,6 14", ",37,9 12,38,3 6,39,8 2,8,1 22,31,1 44,48,6 20,24,8", " 2,16,5 3,13,1 6,15,4 13,44,1 25,49,7 8,24,3 29,42", ",8 25,43,6 13,29,1 3,4,2 17,28,8 8,29,9 3,47,3 6,1", "8,9 9,10,7 19,34,8 9,29,2 0,8,8 10,42,2 23,29,1 32", ",49,3 4,39,3 19,24,4 18,34,8 5,7,6 17,38,1 28,44,2", " 18,19,5 23,34,8 22,34,4 7,46,2 44,46,2 20,29,7 18", ",35,1 28,35,8 6,20,9 16,43,5 33,38,9 30,31,6 30,40", ",6 11,18,3 13,39,6 19,23,7 15,43,9 3,6,3 23,38,7 1", "9,48,8 5,19,3 30,41,5 0,45,9 18,28,5 0,32,1 19,39,", "4 19,27,1 8,14,6 13,34,7 25,28,6 18,29,5 15,37,1 2", ",7,4 19,33,8 5,41,2 4,46,6 18,48,1 1,21,7 3,22,9 3", "0,42,9 10,18,3 39,42,7 28,33,5 15,48,3 6,17,3 22,4", "2,8 6,9,9 26,41,3 22,37,2 4,9,5 24,30,4 6,12,4 5,3", "9,4 5,26,3 3,18,1 3,43,7 41,48,2 6,41,5 24,44,9 22", ",39,9 19,45,1 15,28,8 5,46,6 33,41,1 17,43,7 28,34", ",5 26,40,3 9,37,1 2,45,8 4,37,3 2,32,7 12,19,2 13,", "30,6 31,39,3 11,25,9 2,18,7 20,36,4 19,30,9 16,34,", "8 8,18,1 4,12,3 12,41,1 5,36,9 17,42,9 7,10,1 45,4", "8,1 0,33,2 26,46,5 3,10,3 10,30,3 1,19,2 11,16,3 7", ",44,7 0,36,2 5,31,2 29,32,5 38,39,4 29,47,1 7,17,2", " 22,45,6 5,6,6 24,33,7 5,23,5 16,23,3 7,14,4 3,48,", "7 34,42,3 11,30,7 21,36,5 11,28,3 36,46,9 26,45,7 ", "19,37,2 20,40,7 23,30,7 28,49,4 2,42,1 3,14,7 2,29", ",8 0,24,1 11,43,4 13,28,1 34,49,9 15,23,2 29,44,6 ", "9,18,9 12,42,6 24,45,3 6,40,9 31,49,1 24,37,8 32,3", "7,1 13,35,5 25,47,9 6,30,6 15,34,8 26,33,6 11,40,9", " 10,36,9 19,49,8 23,39,1 9,33,1 8,30,8 2,24,8 22,4", "7,7 25,29,2 15,26,6 8,11,3 2,39,5 26,42,1 2,33,7 7", ",47,7 7,28,6 25,34,9 6,34,8 18,24,5 12,28,6 24,25", ",2 0,28,5 23,28,1 13,16,2 16,28,2 18,45,8 19,20,8 ", "21,39,1 2,37,4 2,3,9 10,15,5 14,47,3 5,8,8 27,34,", "7 35,36,7 46,47,1 17,20,6 19,47,9 31,42,8 37,43,9 ", "10,11,4 21,29,5 40,43,9 25,37,4 10,20,8 19,32,1 38", ",44,2 3,28,9 10,28,4 36,45,8 23,26,3 0,16,8 6,22,9", " 9,23,3 34,46,9 27,44,9 1,6,9 10,21,5 4,36,5 5,48,", "5 8,26,9 6,29,7 3,19,4 27,38,6 40,48,5 4,28,1 34,4", "7,1 2,40,9 21,37,2 18,22,1 11,24,7 6,49,1 1,20,1 1", "9,35,5 0,12,2 15,39,8 28,32,5 2,48,3 1,23,5 8,22,6", " 13,26,5 22,38,1 24,34,9 14,42,2 43,46,8 6,25,9 15", ",30,1 11,48,7 14,44,8 4,16,8 12,46,8 12,43,9 6,45,", "1 0,4,1 17,46,9 20,43,6 0,49,1 35,41,2 25,44,4 16,", "19,6 31,44,4 38,41,8 7,15,4 36,43,4 32,48,8 30,34,", "1 1,7,3 39,44,9 15,19,7 27,45,8 8,37,5 8,9,3 7,42,", "4 2,30,2 25,39,9 21,24,4 23,42,1 21,32,8 2,36,7 0,", "18,6 30,49,2 17,29,6 14,20,4 2,5,5 22,35,2 21,28,7", " 43,45,3 35,40,7 40,44,7 10,39,2 11,35,2 22,43,4 3", "3,46,7 14,18,8 28,45,6 11,32,1 7,27,8 22,44,4 17,4", "7,1 18,33,5 24,49,1 12,48,6 14,25,5 7,20,7 24,27,3"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 123;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 2;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {"0", ",1", ",42", "11", "787"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 105294675;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 3;
    vector<int> cities = {1, 0, 2, 0, 1, 2, 1, 0, 1, 2, 0, 2, 1, 2, 1, 0, 1, 2, 1, 0, 1, 2, 1, 0, 2, 0, 1, 2, 1, 0, 2, 1, 0, 1, 0, 1, 0, 2, 0, 1, 2, 0, 2, 0, 1, 2, 0, 1, 0, 2};
    vector<string> roads = {"0", ",2,1", "4", "46", "173"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 5;
    vector<int> cities = {1, 2, 4, 2, 1, 0, 2, 3, 2, 0, 2, 1, 2, 1, 4, 0, 1, 3, 1, 2, 0, 3, 4, 3, 0, 2, 4, 1, 0, 3, 1, 2, 0, 2, 4, 1, 2, 0, 4, 0, 2, 0, 2, 3, 2, 0, 3, 2, 3, 0};
    vector<string> roads = {"1", ",", "3,", "24", "6", "8", "59", "3"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 10;
    vector<int> cities = {9, 4, 6, 2, 1, 0, 2, 3, 6, 1, 9, 2, 7, 9, 1, 0, 8};
    vector<string> roads = {"3,", "5,", "98", "946", "57"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 25;
    vector<int> cities = {15, 20, 12, 10, 15, 22, 1, 17, 9, 6, 4, 18, 13, 8, 9, 16, 13, 18, 2, 10, 15, 6, 22, 0, 24, 9, 0, 2, 15, 0, 4, 22, 12, 7, 24, 18, 5, 1, 11, 6, 8, 6, 24, 20, 14, 0, 5, 4, 18, 6};
    vector<string> roads = {"1", ",", "1", "9,1", "165", "221"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 50;
    vector<int> cities = {43, 31, 41, 18, 3, 45, 1, 23, 7, 42, 40, 39, 16, 9, 47, 5, 36, 7, 28, 43, 24, 7, 40, 38, 37, 22, 29, 12, 22, 18, 36, 15, 0, 32, 39, 3, 33, 40, 26, 45, 37, 17, 36, 4, 33, 32, 14, 19, 46, 47};
    vector<string> roads = {"3", "3", ",", "4", "6", ",4", "78", "9", "4", "12"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 50;
    vector<int> cities = {48, 29, 43, 10, 7, 17, 2, 28, 16, 39, 21, 20, 22, 16, 47, 22, 4, 20};
    vector<string> roads = {"3", "3", ",4", "6,", "478", "94", "12"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 2;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {"0,1,9", "858921"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 167601657;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 3;
    vector<int> cities = {2, 1, 2, 1, 2, 0, 2, 1, 2, 0, 1, 0, 1, 0, 1, 2, 1, 2, 0, 1, 2, 0, 1, 2, 1, 0, 1, 0, 1, 0, 1, 0, 2, 1, 2, 1, 0, 1, 0, 2, 1, 0, 2, 1, 0, 2, 1, 2, 0, 2};
    vector<string> roads = {"1,", "2", ",4787", "6", "83", " 0", ",2", ",7", "3", "4344", "1", " 0", ",1", ",", "4549383"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 137431306;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 5;
    vector<int> cities = {3, 2, 1, 2, 3, 2, 0, 4, 3, 0, 4, 1, 4, 1, 2, 3, 2, 4, 1, 0, 4, 0, 4, 1, 3, 2, 3, 1, 2, 4, 1, 0};
    vector<string> roads = {"0", ",", "1,", "6", "38", "6", "00", "2 2", ",4,", "5", "6", "09", "9", "4", "4 ", "2", ",", "3,", "4", "6", "65", "0", "2", "2", " ", "1", ",", "4,", "4", "6", "7", "2", "1", "9", "3"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 140301736;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 10;
    vector<int> cities = {4, 1, 7, 4, 9, 2, 5, 2, 0, 6, 9, 4, 9, 0, 4, 7, 4, 6, 4, 6, 4, 3, 6, 2, 1, 9, 3, 1, 5, 2};
    vector<string> roads = {"6", ",", "8", ",", "1", "1", "9", "2", "59", " ", "7,", "8", ",2", "6", "39", "4", "0", "6 ", "1,", "6", ",", "3", "64", "751", "7 0", ",6", ",", "7", "5", "0", "79", "54"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
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
    int N = 25;
    vector<int> cities = {11, 15, 24, 8, 18, 8, 3, 18, 1, 24, 9, 22, 6, 9, 21, 17, 21, 17, 11, 15, 17, 9, 2, 18, 0, 6, 1, 7, 1, 9, 5, 4, 15, 4, 13, 7, 4, 16, 1, 6, 7, 11, 19, 4, 11, 16, 22, 23, 0, 1};
    vector<string> roads = {"5,15,7908", "609 1,21,1505", "051 11", ",12,", "2905637"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 50;
    vector<int> cities = {25, 49, 43, 16, 46, 3, 39, 2, 46, 25, 43, 11, 49, 20, 48, 16, 47, 21, 29, 39, 43, 6, 27, 49, 44, 28, 26, 40, 44, 37, 43, 18, 42, 41, 35, 38, 45, 29, 45, 40, 11, 38, 8, 16, 8, 6, 32, 10, 34, 10};
    vector<string> roads = {"1", "1", ",", "2", "0", ",", "7", "0", "3", "1", "4", "8", "2", " ", "1", "3", ",", "4", "2", ",", "8", "5", "1", "9", "19", "6", " ", "35", ",", "4", "5", ",", "6", "5", "0", "9", "5", "3", "1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
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
    int N = 50;
    vector<int> cities = {18, 9, 46, 10, 34, 43, 2, 25, 31, 3, 5, 26, 49, 15, 19, 7, 31, 33, 19, 12, 43, 3, 29, 3, 30, 1, 39};
    vector<string> roads = {"3", "5", ",", "4", "5", ",", "6", "5", "0", "9", "5", "31 ", "1", "1", ",", "2", "0", ",", "7", "0", "3", "1", "48", "2", " ", "1", "3", ",", "4", "2", ",", "8", "5", "1", "9", "19", "6"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
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
    int N = 2;
    vector<int> cities = {1, 0, 1, 0, 1, 0};
    vector<string> roads = {"0", ",", "1", ",", "9", "4", "4", "1", "5", "3", "1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 28324593;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 3;
    vector<int> cities = {2, 0, 1, 0, 1, 2, 1, 2, 1, 0, 1, 0, 1, 2, 0, 1, 2};
    vector<string> roads = {"0", ",2", ",", "40", "2", "44", "5", "8", " 0,", "1", ",", "94", "2", "4", "6", "7", "0", " ", "1", ",2", ",", "6", "9", "30", "5", "5", "7"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 68069612;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 5;
    vector<int> cities = {4, 1, 3, 1, 3, 1, 4, 2, 3, 4, 3, 0, 2, 4, 2, 0, 4, 2, 1, 0, 4, 1, 3, 0, 1, 2, 3, 2, 4, 1, 2, 3, 4, 0, 1, 2, 1, 4, 0, 4, 3, 4, 3, 0, 3, 2, 1};
    vector<string> roads = {"0,", "2", ",8", "60", "27", "65", " 2", ",3,1", "31", "595", "4 ", "0,4,", "33", "9", "0968", " 3", ",4", ",9068", "187 1,", "3,", "88", "62", "55", " 0", ",1", ",2", "27", "0", "498 ", "1", ",4,", "248", "73", "95", " 2", ",4,", "64132", "95 1,", "2", ",8", "355274", " 0,", "3,1", "117", "181"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 60122733;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 10;
    vector<int> cities = {6, 9, 0, 8, 5, 9, 6, 4, 0, 2, 8, 5, 2, 3, 4, 3, 2, 6, 9, 5, 8, 6, 3, 9, 1, 0, 2, 9, 1, 9, 2, 6, 8};
    vector<string> roads = {"3,4,141678", " 2,3,1802061", " 5,9,497795", "0 6,7,2498666 ", "3,7,71821", "51 1", ",9,2963280 0,6,", "8033007 1,2,37", "3621 2,7,357126", "1 7,8,", "8599267 1,4,49", "13782 4,6,5956564 ", "0,5,152843", "5 1,3,6558", "966 0,8,929967", "0 1,6,68712", "97 1,8,5118729 ", "5,6,2752496 ", "0,9,5316307", " 4,8,20", "06089 8", ",9,9514", "672 2,6,8067521 ", "0,1,1260947 0,", "2,245779 2,4,", "730883 5,7", ",6411018 4,9,", "1882570 1,", "7,6875413 4,5,", "905290 4,7,33564", "67 2,8,3421522 5,8,6596", "97 2,9,196562", "0 0,4,2271", "137 3,8,47", "63025 1,5,7492", "752 0,7,", "5799742 6,9,956", "8399 3,5,98953", "32 3,6,8", "874974 2,5,7", "125919", " 6,8,7512273", " 3,9,9", "930262 0,3,2502", "176 7,9,4809103"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 40279253;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 25;
    vector<int> cities = {12, 14, 18, 7, 11, 12, 15, 3, 23, 12, 6, 24, 22, 6, 0, 15, 1, 20, 11, 5, 16, 7, 15, 1, 7, 24, 14, 23, 9, 22, 15, 13, 2, 0, 21, 12, 11, 2, 8, 1, 15, 13, 17, 13, 11, 18, 20, 12, 4, 7};
    vector<string> roads = {"2,15,2877903 8,12,2568805 8,16,1036158 11,14,27070", "13 12,20,2791975 0,4,3268472 0,11,6295814 3,22,850", "8074 2,3,9819910 2,17,2019264 8,23,6663267 16,19,6", "787829 8,24,5304547 3,4,6061394 13,16,6044240 0", ",12,3459540 17,18,6565274 10,12,4946588 3,18,34881", "32 3,23,4398211 16,22,6366158 2,9,46", "37381 6,21,3052482 4,9,4989183 1,24,912311", " 3,10,5941735 9,17,5603181 10,19,843180", "2 2,11,3702353 12,24,1016318 4,19,3955392 5,20,363", "620 5,24,8642882 14,21,3029939 2,18,9082175 1,2,47", "23239 9,24,1104175 6,17,1360420 4,16,5635027 5,", "11,3892573 2,22,1685707 2,19,7296417 9,19,7960973 ", "15,19,4300598 0,3,1615261 12,17,4811180 10,17,9986", "375 6,15,4000051 11,19,4374189 20,22,986936", "3 8,9,5970433 3,6,67987 2,21,2263394 4,1", "0,8141510 13,23,9989564 13,24,5538624 6,8", ",5529024 6,7,8428125 13,15,4154396 1,16,62", "3706 15,20,4038093 1,12,7113784 0,22,7", "246933 18,21,8872485 1,20,7712744 1,9,3649484 5", ",19,3936697 17,20,2599502 0,14,184823 11,1", "3,9880487 4,15,7007362 21,22,8546787 0,1", "5,2547872 15,18,6646386 7,16,1114210 14,23,2081519"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 146532233;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 50;
    vector<int> cities = {7, 6, 29, 37, 9, 35, 5, 35, 37, 22, 37, 45, 3, 41, 36, 14, 10, 45, 20, 17, 8, 29, 23, 18, 6, 34, 36, 28, 18, 40, 30, 25, 1, 15, 18, 10, 0, 24, 45, 41, 46, 31, 42, 4, 24, 34, 18, 39, 28, 44};
    vector<string> roads = {"5,49,746267 26,34,268006 26", ",40,6918755 21,49,8146523 22,40,2", "061498 2,17,7141170 2,14,", "9581543 28,41,306807 2,38,8649544 12", ",28,7333450 22,25,2174300 44,49", ",2152234 3,34,8033038 7,26,5847279", " 6,35,5510922 31,44,82803", "87 8,19,6417622 7,8,", "1258796 2,39,5818295 ", "26,42,8111228 10,21,9388614 7,39", ",7762870 4,27,997176 4,19,3", "455075 13,26,7107411 17", ",37,8928207 6,44,4487652 5,12,114", "4120 14,18,6218076 5,16,8798813 4", "4,46,1886368 15,46,7380117 13,14,8", "859529 23,32,5029792 9,2", "4,3967087 17,25,92277 21,2", "8,95658 1,32,2973134 22,26,35", "3767 20,26,6497258 7,48,7135", "837 1,26,710651 30,36", ",3724669 23,44,5568466 11,35,860", "6507 0,10,452401 1,42,1388647 2,", "34,5500674 19,45,1246706 4,9", ",4152849 12,24,4885410 15,", "30,2854616 9,21,1929844 10,43,", "3657589 24,37,2346441 ", "16,31,223981 20,29,2852710 8,48,", "4780734 22,28,6553762 23,29,861313 3", "5,37,99734 31,33,3", "651491 2,37,7780097 22,49,752", "6606 18,19,8419273 1,47,33357", "13 33,45,7411240 11,25,6614367 2,13,1", "606676 5,22,4494993 8,43", ",5149429 15,29,8648203 2", "8,47,4884273 19,47,2906785"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 403496484;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 50;
    vector<int> cities = {34, 41, 8, 19};
    vector<string> roads = {"2,13,1606676 26,34,268", "006 31,33,3651491 2", "2,40,2061498 21,", "28,95658 10,21,93886", "14 7,39,7762870 23,32,5029792 2", ",39,5818295 12,28,733", "3450 6,35,5510922 19,47,29", "06785 0,10,452401 22,26,353767", " 22,49,7526606 16,31,223981 12", ",24,4885410 5,22,44", "94993 15,29,8648203", " 7,8,1258796 26,40,69187", "55 44,46,1886368 20,26,649", "7258 23,44,5568466 19,45", ",1246706 28,47,4884273", " 10,43,3657589 9,24,39", "67087 8,48,4780734 ", "2,34,5500674 5,16,8798", "813 2,38,8649544 2,37,7", "780097 28,41,3068", "07 8,19,6417622 14,18,6218076 44,", "49,2152234 1,47,33", "35713 8,43,5149429 15,4", "6,7380117 13,26,7107411 22", ",28,6553762 5,49,7", "46267 26,42,8111228", " 17,37,8928207 11,25,661436", "7 7,48,7135837 11,35,8606", "507 18,19,8419273 31,44,", "8280387 2,14,9581543 2", "1,49,8146523 30,36,3724", "669 24,37,2346441 17,25,92277 2,17,714", "1170 33,45,7411240 4,9,4152849 ", "1,42,1388647 22,25,21743", "00 3,34,8033038 4,1", "9,3455075 5,12,1144120 9,21,1", "929844 20,29,2852710 1,26,710", "651 13,14,8859529 7,26,584727", "9 23,29,861313 6,44,4", "487652 35,37,99734 4,27,997176 15", ",30,2854616 1,32,2973134"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 30265458;
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
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {"0", ",", "1", ",", "2", "7", "0", "53", "3", "8"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 67633450;
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
    vector<int> cities = {1, 0, 1, 0, 1, 2, 0, 1, 0, 1, 2, 1, 2, 0, 1, 2, 0, 2, 0, 1, 2, 0, 1, 2, 0, 2, 1, 2, 0, 1, 2, 0, 1, 2, 0, 1, 0, 2, 1, 0, 2, 0, 1, 0, 2, 0, 1, 2, 1, 0};
    vector<string> roads = {"0", ",", "1", ",2", "4", "5", "32", "44 ", "0,", "2,66", "5", "02", "4", " ", "1", ",2,", "6", "2", "1", "37", "0", "2"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 51680508;
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
    vector<int> cities = {1, 2, 1, 3, 1, 4, 0, 2, 4, 0, 1, 0, 1, 0, 3, 1, 0, 4, 0, 1, 0, 2, 4};
    vector<string> roads = {"0,", "2,", "938", "97", "89 ", "2,", "3,94", "04", " 1,3,5", "20", "3", "756 ", "0,4", ",647", "61", "19 ", "0,1,4", "80719", "3", " 1,4,", "5", "35", "6029", " 1,", "2,7", "3099", "0", "1 0", ",", "3,5", "85", "16", "60", " 3,4,3", "9420", "1", "0 2", ",4", ",4", "83833", "5"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 70725381;
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
    vector<int> cities = {1, 4, 6, 2, 7, 8, 2, 9, 1, 3, 1, 5, 8, 7};
    vector<string> roads = {"6,7,102865 2,5,4471932 0,1,7327", "549 4,9,7364880 4", ",7,7452864 0,2,3603339 3,7,8", "927002 2,6,1821460 0,8,553", "1739 3,9,1514941 1,6", ",2462778 0,9,3901972 1,9", ",48264 5,7,7764591 1,7", ",288546 6,9,2399718", " 3,8,1955311 0,6", ",5185422 8,9,9662963 1,8", ",2760913 5,9,93", "84905 2,9,7582951 5,8", ",6372086 2,8,674", "3450 2,3,2086260 1,2,75361", "35 7,9,639062 4,5,90", "24112 1,4,8095424", " 6,8,3122115 1,3,", "8447025 7,8,9305289", " 0,5,4350255 4,6,4", "685659 2,4,2501540", " 0,4,5066479 1,5,82", "62711 0,7,700657 3,4,", "2584830 2,7,7415733", " 0,3,49398", "09 3,5,9044713 5,6,812358", "9 3,6,6979007 4,8,3573073"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 22035733;
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
    vector<int> cities = {13, 23, 8, 19, 2, 11, 2, 17, 14, 7, 3, 21, 4, 0, 3, 24, 23, 24, 20, 11, 21, 13, 14, 23, 19, 2, 1, 0, 21, 16, 0, 9, 16, 8, 2, 18, 10, 4, 1, 17, 4, 21, 13, 0, 22, 15, 24, 12, 6, 13};
    vector<string> roads = {"5,24,866562 2,3,2690305 10,23,5017481 0,21,4115688", " 4,7,4221185 12,19,3603601 8,13,240899 19,21,57664", "90 5,6,9944612 12,16,1209009 11,20,2013374 10,1", "6,3084293 2,20,455515 10,13,7758474 2,11,8672755 1", "9,20,8625422 1,9,4357952 8,9,4659856 1,4,7831479 1", ",21,5209488 1,23,8676142 10,17,7209226 0,10,506222", " 8,10,3955102 8,15,3515404 3,20,4405194 0,12,30338", "32 3,16,8913859 2,22,9670845 8,16,8912104 7,17,630", "6168 2,8,2779659 2,5,7573649 2,16,269624 5,12,4901", "34 14,18,9673926 14,21,9182146 11,19,3744416 4,6,", "3260762 15,18,2140219 15,23,3075284 3,19,2034903 8", ",17,8360259 4,22,5347771 2,12,7111259 0,16,4971695", " 4,9,154157 11,16,4166730 0,19,5288680 6,16,217562", "5 2,19,4565467 14,16,7323111 12,17,4971692 13,15,7", "532498 16,23,8535628 17,24,7412712 3,23,5956595 0,", "5,9326713 1,14,6955055 9,10,5522994 16,19,21041", "59 5,16,3763685 7,24,60962 5,23,9175293 15,19,7177", "807 9,16,8135969 3,24,8384223 7,20,7594192 13,23,7", "256621 3,10,3335007 15,20,6935044 0,11,1518100 1,1", "1,8109638 18,22,6073318 22,23,4378607 4,20,5478892", " 20,24,5453351 16,20,1582308 8,14,1751521 15,17,51", "8106 6,19,8002646 0,4,1471085 5,10,5292740 9,18,70", "21725 1,18,7434313 6,20,8737563 5,17,2444066 3,5,5", "63644 3,9,8113653 3,15,8371156 1,10,5964255 10,15,", "3891748 0,17,1462463 18,23,1512132 22,24,5983064 4", ",15,5603003 5,18,6005245 5,9,6625530 4,18,5141865 ", "4,13,3827771 18,21,5825465 2,4,6303141 1,8,6195412", " 6,14,1843920 3,22,4843976 13,20,8912873 6,7,46606", "12 4,17,1671348 3,18,2815446 1,16,7287126 4,23,586", "1546 10,22,5232661 1,17,3834026 14,19,3772047 5,15", ",948132 4,24,3795995 0,14,8861083 0,3,5690797 0,1,", "2241121 10,20,5096931 15,21,316007 9,13,403289 11,", "13,1121575 17,22,4371611 14,24,3984941 16,22,33814", "47 2,18,7291377 11,15,1988176 6,12,4600945 0,7,481", "2455 7,15,7559901 0,6,7765947 11,24,6206585 8,12,3", "459192 4,12,6463242 12,15,7339621 7,14,3966359 2,1", "4,7796536 19,23,8344769 7,21,653155 0,13,6893148 4", ",21,4826818 17,19,2080454 1,24,253159 7,9,792670 5", ",14,604190 7,23,5176707 0,18,9374851 17,18,8333033", " 9,11,2545739 2,9,9218929 7,19,2762490 10,24,79825", "3 9,14,4196352 3,11,186426 10,18,3936478 18,20,753", "2166 1,20,1862489 14,20,5949804 6,13,579462 1,12,9", "137765 9,21,6720691 3,6,8370621 13,24,6765804 21,2", "3,7088890 12,14,9939472 0,20,7158630 16,21,9737158", " 11,21,6493950 2,7,8876895 10,12,1094288 0,24,5922", "401 0,15,7675490 1,13,2771706 3,14,3650231 7,16,36", "3660 10,14,2553380 3,4,4516980 0,2,2001890 15,24,4", "904882 5,22,7388791 7,8,6840912 4,8,1306607 2,10,7", "974452 9,24,7000049 14,22,4876771 7,12,7908486 11,", "22,7750010 6,15,7540015 18,24,3153939 9,20,2541386"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 62507889;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 50;
    vector<int> cities = {16, 21, 7, 30, 39, 3, 15, 41, 34, 3, 47, 32, 30, 15, 4, 35, 19, 7, 8, 15, 18, 27, 36, 32, 45, 35, 47, 14, 5, 39, 13, 26, 15, 27, 5, 4, 30, 25, 0, 15, 29, 47, 3, 15, 12, 7, 49, 37, 19, 7};
    vector<string> roads = {"22,30,9964621 2,47,8864151 8,14,2333793 27,40,2925", "506 5,43,5003550 28,39,8713667 3,17,2743007 4,31,8", "701719 14,32,493226 7,15,9374408 0,40,1043274 2,31", ",4110804 8,11,3804172 39,40,2169051 37,45,5405859 ", "11,20,6482473 23,49,9035944 29,40,1657533 19,24,59", "96690 2,23,9289581 20,31,6069066 41,48,5037738 0,7", ",8296375 21,47,1187364 16,32,5892565 4,22,6764183 ", "9,38,2030712 2,36,2844020 2,44,7561002 1,20,324624", "2 17,19,2149002 29,37,2596212 26,37,4735808 20,49,", "9153148 20,35,3009963 36,43,7192817 0,14,2057079 1", "3,22,8160993 1,46,8244568 31,40,3271797 30,41,2380", "805 22,32,4365469 15,26,7628512 21,42,6436791 8,25", ",7449664 19,31,5583024 24,33,2653925 0,13,5352372 ", "16,49,3363380 9,45,9478371 16,45,3630220 0,43,2072", "281 5,34,9020111 2,19,6096875 4,20,3088701 9,22,36", "38276 20,25,6816733 22,34,7469091 27,28,3581896 34", ",37,6282481 9,29,9447031 4,21,4351229 2,41,2319252", " 17,45,6489278 14,38,6118886 4,11,9089832 27,35,97", "51264 12,25,9555033 40,46,1908944 31,49,7321331 7,", "31,6074698 18,42,5624848 8,47,2076777 6,27,6959297", " 15,42,4792804 7,23,45784 23,35,3074048 13,24,5155", "726 35,40,2103695 26,48,7780746 4,10,3049054 9,36,", "6762529 0,18,4333237 10,28,1111693 33,45,1488752 1", ",38,9640315 13,15,9583682 19,45,8969478 24,29,6977", "266 20,45,2513913 7,13,7208343 21,37,8138478 14,45", ",6758322 12,44,2698863 25,41,3033699 0,22,6391746 ", "4,25,6792081 14,44,8440275 22,46,9666391 29,36,122", "3854 16,41,5850284 13,26,2554218 21,24,255007 32,4", "2,6801966 5,32,6537124 14,47,3086474 6,47,9385561 ", "0,25,2687486 8,43,3317430 21,45,6353843 0,24,22904", "91 17,37,6106641 31,45,70183 1,12,7739826 23,41,95", "75670 8,33,7785592 23,47,4653852 13,49,2490495 2,2", "1,297908 22,26,8932482 26,27,9705334 6,37,8517323 ", "6,49,8627068 14,42,1457103 28,45,3961081 15,32,45", "89145 0,29,962703 12,15,1089573 4,14,1703794 2,3,1", "241898 3,23,4267823 13,33,1207160 21,33,9549774 12", ",41,7055024 1,24,5717491 10,35,1270099 41,44,27505", "7 10,14,6917782 42,47,9325789 16,46,3029118 25,42,", "635731 4,13,734683 14,31,9521849 18,34,1490374 32,", "46,595040 2,38,9079015 27,34,6413323 7,41,9394092 ", "34,46,6099448 14,41,6774481 2,9,5896328 24,45,55", "12698 33,38,3880018 3,42,2515049 44,48,544581 9,34", ",7910031 18,40,9128284 2,33,9359969 28,33,4557390 ", "12,20,8144628 25,29,7215671 1,34,1680263 25,28,990", "1758 19,35,6723656 2,4,898725 8,45,5230232 6,35,58", "92723 18,39,6785930 27,31,7887813 10,27,6382022 31", ",39,9687593 19,49,7022820 1,36,7104854 14,46,321", "4626 31,32,8763431 24,26,6982910 23,44,5859621 23,", "32,4058678 6,33,8752866 6,48,8745426 7,33,869967 2", "2,25,8810348 0,34,1109055 1,2,3310010 27,49,983642"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 171704309;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 50;
    vector<int> cities = {46, 35, 16, 40};
    vector<string> roads = {"0,25,2687486 1,46,8244568 27,31,7887813 14,38,6118", "886 22,34,7469091 24,29,6977266 7,41,9394092 12,41", ",7055024 14,46,3214626 27,34,6413323 0,43,2072281 ", "5,32,6537124 16,32,5892565 13,26,2554218 21,33,954", "9774 16,41,5850284 18,40,9128284 40,46,1908944 2,9", ",5896328 0,18,4333237 36,43,7192817 15,32,4589145 ", "27,40,2925506 19,24,5996690 5,34,9020111 22,25,881", "0348 28,33,4557390 33,45,1488752 2,44,7561002 4,11", ",9089832 2,19,6096875 10,35,1270099 13,24,5155726 ", "1,36,7104854 19,35,6723656 2,31,4110804 26,27,9705", "334 27,49,983642 3,42,2515049 6,48,8745426 10,14,6", "917782 21,24,255007 19,45,8969478 3,17,2743007 1,1", "2,7739826 9,34,7910031 4,21,4351229 1,24,5717491 9", ",45,9478371 44,48,544581 4,20,3088701 14,45,675832", "2 0,13,5352372 31,49,7321331 22,26,8932482 25,41,3", "033699 8,45,5230232 8,33,7785592 6,27,6959297 30,4", "1,2380805 31,45,70183 20,31,6069066 32,42,6801966 ", "7,31,6074698 4,25,6792081 14,44,8440275 0,24,22904", "91 12,44,2698863 14,42,1457103 19,49,7022820 31,39", ",9687593 35,40,2103695 13,33,1207160 1,2,3310010 2", "5,29,7215671 10,27,6382022 27,28,3581896 33,38,388", "0018 0,7,8296375 11,20,6482473 0,40,1043274 24,33,", "2653925 6,33,8752866 2,3,1241898 1,34,1680263 21,4", "2,6436791 10,28,1111693 1,20,3246242 29,37,2596212", " 31,32,8763431 32,46,595040 22,30,9964621 7,23,457", "84 20,49,9153148 3,23,4267823 8,11,3804172 39,40,2", "169051 0,22,6391746 26,48,7780746 4,22,6764183 1", "7,37,6106641 2,4,898725 24,26,6982910 29,40,165753", "3 2,33,9359969 24,45,5512698 21,45,6353843 9,38,20", "30712 31,40,3271797 9,36,6762529 20,25,6816733 7,1", "5,9374408 19,31,5583024 6,47,9385561 34,37,6282481", " 2,36,2844020 20,45,2513913 25,42,635731 2,41,2319", "252 4,10,3049054 28,45,3961081 13,15,9583682 22,32", ",4365469 5,43,5003550 18,39,6785930 15,26,7628512 ", "14,32,493226 41,48,5037738 2,21,297908 13,22,81609", "93 21,37,8138478 2,38,9079015 17,19,2149002 25,", "28,9901758 0,34,1109055 9,29,9447031 8,25,7449664 ", "14,31,9521849 28,39,8713667 26,37,4735808 6,37,851", "7323 7,33,869967 8,14,2333793 4,31,8701719 23,35,3", "074048 22,46,9666391 37,45,5405859 2,23,9289581 0,", "14,2057079 6,49,8627068 23,49,9035944 6,35,5892723", " 18,34,1490374 2,47,8864151 12,20,8144628 1,38,964", "0315 9,22,3638276 42,47,9325789 21,47,1187364 23,4", "7,4653852 16,49,3363380 8,47,2076777 14,47,3086474", " 16,45,3630220 23,32,4058678 4,14,1703794 29,36,12", "23854 12,15,1089573 14,41,6774481 18,42,5624848 8,", "43,3317430 13,49,2490495 15,42,4792804 17,45,64892", "78 7,13,7208343 27,35,9751264 0,29,962703 16,46,30", "29118 34,46,6099448 12,25,9555033 4,13,734683 23,4", "1,9575670 20,35,3009963 41,44,275057 23,44,5859621"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 9993975;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 50;
    vector<int> cities = {49};
    vector<string> roads = {"10,18,3 7,20,7 36,43,4 4,37,3 0,49,1 18,28,5 29,44", ",6 24,45,3 28,33,5 44,46,2 0,32,1 7,42,4 40,48,5 2", "2,45,6 6,39,8 25,37,4 10,39,2 2,30,2 4,9,5 28,44,2", " 7,10,1 3,22,9 23,28,1 6,15,4 46,47,1 5,26,3 19,49", ",8 22,47,7 11,35,2 20,43,6 30,31,6 28,45,6 11,30,7", " 32,48,8 25,34,9 29,47,1 2,36,7 32,49,3 19,45,1 6,", "20,9 18,33,5 14,36,2 2,16,5 6,29,7 14,25,5 19,35,5", " 9,23,3 5,13,7 10,15,5 18,45,8 9,18,9 10,36,9 4,", "28,1 12,41,1 8,11,3 7,17,2 10,20,8 16,28,2 11,40,9", " 20,36,4 9,37,1 1,35,9 21,32,8 6,34,8 15,37,1 3,28", ",9 42,46,7 0,31,6 31,49,1 13,16,2 19,20,8 25,43,6 ", "6,30,6 33,38,9 6,49,1 2,24,8 15,39,8 4,39,3 9,29,2", " 18,22,1 5,6,6 6,12,4 12,38,3 23,24,1 28,49,4 19,4", "8,8 31,42,8 12,43,9 5,41,2 6,41,5 6,18,9 29,42,8 1", "7,20,6 11,18,3 7,44,7 22,35,2 18,35,1 31,39,3 3,18", ",1 34,47,1 32,37,1 11,25,9 2,37,4 19,24,4 39,42,7 ", "30,41,5 7,28,6 13,29,1 24,34,9 5,39,4 23,34,8 21,2", "8,7 1,21,7 27,34,7 2,3,9 2,40,9 1,19,2 27,45,8 8,2", "9,9 25,49,7 17,47,1 18,48,1 0,33,2 3,13,1 11,28,3 ", "24,27,3 16,34,8 14,37,9 13,32,9 15,48,3 23,26,3 35", ",40,7 14,18,8 28,34,5 18,34,8 8,47,1 8,22,6 2,32,7", " 17,28,8 14,44,8 19,23,7 26,45,7 2,18,7 12,46,8 22", ",39,9 16,23,3 40,43,9 13,35,5 4,17,3 8,14,6 2,29,8", " 15,26,6 26,40,3 7,47,7 21,24,4 4,46,6 0,26,6 34,4", "2,3 0,12,2 13,21,6 11,43,4 14,42,2 35,41,2 5,46,6 ", "7,46,2 15,30,1 14,47,3 10,28,4 5,48,5 36,46,9 11,1", "6,3 23,38,7 2,45,8 12,48,6 3,6,3 22,43,4 17,38,1 3", ",43,7 0,4,1 28,35,8 5,23,5 0,18,6 15,34,8 10,30,3 ", "19,33,8 13,44,1 22,37,2 39,44,9 30,49,2 9,10,7 24,", "25,2 1,20,1 6,22,9 18,19,5 13,26,5 3,47,3 17,42,9 ", "6,17,3 18,24,5 26,33,6 43,48,4 17,46,9 25,28,6 19,", "27,1 26,42,1 23,39,1 10,11,4 20,29,7 6,45,1 38,41,", "8 19,32,1 1,7,3 33,41,1 24,44,9 7,15,4 34,49,9 3,1", "4,7 13,39,6 22,44,4 10,42,2 30,42,9 22,42,8 20,24,", "8 18,29,5 16,19,6 26,41,3 6,40,9 0,36,2 24,37,8 8,", "24,3 22,31,1 19,47,9 5,36,9 41,48,2 45,48,1 37,43,", "9 21,29,5 5,31,2 13,30,6 27,44,9 2,5,5 14,20,4 17,", "43,7 3,4,2 24,33,7 5,7,6 12,42,6 4,12,3 0,28,5 1,2", "3,5 0,24,1 22,38,1 0,45,9 0,8,8 5,8,8 15,43,9 7,27", ",8 4,36,5 25,29,2 8,37,5 3,19,4 11,24,7 19,30,9 43", ",45,3 38,44,2 8,30,8 24,49,1 25,44,4 9,33,1 25,47,", "9 12,28,6 20,40,7 21,39,1 27,38,6 10,21,5 19,39,4 ", "2,48,3 12,19,2 30,34,1 38,39,4 7,14,4 40,44,7 24,3", "0,4 23,30,7 3,10,3 15,28,8 15,23,2 3,48,7 30,40,6 ", "28,32,5 19,34,8 26,46,5 23,42,1 15,19,7 16,43,5 21", ",37,2 13,34,7 6,9,9 22,34,4 31,44,4 11,48,7 4,16,8", " 21,36,5 33,46,7 34,46,9 28,48,2 8,26,9 43,46,8 6,", "25,9 44,48,6 19,37,2 1,6,9 0,16,8 8,18,1 8,9,3 2,4", "2,1 17,29,6 2,39,5 29,32,5 2,8,1 2,33,7 35,36,7 36", ",45,8 23,29,1 5,19,3 2,7,4 13,28,1 25,39,9 11,32,1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 50;
    vector<int> cities = {49, 0};
    vector<string> roads = {"10,18,3 7,20,7 36,43,4 4,37,3 0,49,1 18,28,5 29,44", ",6 24,45,3 28,33,5 44,46,2 0,32,1 7,42,4 40,48,5 2", "2,45,6 6,39,8 25,37,4 10,39,2 2,30,2 4,9,5 28,44,2", " 7,10,1 3,22,9 23,28,1 6,15,4 46,47,1 5,26,3 19,49", ",8 22,47,7 11,35,2 20,43,6 30,31,6 28,45,6 11,30,7", " 32,48,8 25,34,9 29,47,1 2,36,7 32,49,3 19,45,1 6,", "20,9 18,33,5 14,36,2 2,16,5 6,29,7 14,25,5 19,35,5", " 9,23,3 5,13,7 10,15,5 18,45,8 9,18,9 10,36,9 4,", "28,1 12,41,1 8,11,3 7,17,2 10,20,8 16,28,2 11,40,9", " 20,36,4 9,37,1 1,35,9 21,32,8 6,34,8 15,37,1 3,28", ",9 42,46,7 0,31,6 31,49,1 13,16,2 19,20,8 25,43,6 ", "6,30,6 33,38,9 6,49,1 2,24,8 15,39,8 4,39,3 9,29,2", " 18,22,1 5,6,6 6,12,4 12,38,3 23,24,1 28,49,4 19,4", "8,8 31,42,8 12,43,9 5,41,2 6,41,5 6,18,9 29,42,8 1", "7,20,6 11,18,3 7,44,7 22,35,2 18,35,1 31,39,3 3,18", ",1 34,47,1 32,37,1 11,25,9 2,37,4 19,24,4 39,42,7 ", "30,41,5 7,28,6 13,29,1 24,34,9 5,39,4 23,34,8 21,2", "8,7 1,21,7 27,34,7 2,3,9 2,40,9 1,19,2 27,45,8 8,2", "9,9 25,49,7 17,47,1 18,48,1 0,33,2 3,13,1 11,28,3 ", "24,27,3 16,34,8 14,37,9 13,32,9 15,48,3 23,26,3 35", ",40,7 14,18,8 28,34,5 18,34,8 8,47,1 8,22,6 2,32,7", " 17,28,8 14,44,8 19,23,7 26,45,7 2,18,7 12,46,8 22", ",39,9 16,23,3 40,43,9 13,35,5 4,17,3 8,14,6 2,29,8", " 15,26,6 26,40,3 7,47,7 21,24,4 4,46,6 0,26,6 34,4", "2,3 0,12,2 13,21,6 11,43,4 14,42,2 35,41,2 5,46,6 ", "7,46,2 15,30,1 14,47,3 10,28,4 5,48,5 36,46,9 11,1", "6,3 23,38,7 2,45,8 12,48,6 3,6,3 22,43,4 17,38,1 3", ",43,7 0,4,1 28,35,8 5,23,5 0,18,6 15,34,8 10,30,3 ", "19,33,8 13,44,1 22,37,2 39,44,9 30,49,2 9,10,7 24,", "25,2 1,20,1 6,22,9 18,19,5 13,26,5 3,47,3 17,42,9 ", "6,17,3 18,24,5 26,33,6 43,48,4 17,46,9 25,28,6 19,", "27,1 26,42,1 23,39,1 10,11,4 20,29,7 6,45,1 38,41,", "8 19,32,1 1,7,3 33,41,1 24,44,9 7,15,4 34,49,9 3,1", "4,7 13,39,6 22,44,4 10,42,2 30,42,9 22,42,8 20,24,", "8 18,29,5 16,19,6 26,41,3 6,40,9 0,36,2 24,37,8 8,", "24,3 22,31,1 19,47,9 5,36,9 41,48,2 45,48,1 37,43,", "9 21,29,5 5,31,2 13,30,6 27,44,9 2,5,5 14,20,4 17,", "43,7 3,4,2 24,33,7 5,7,6 12,42,6 4,12,3 0,28,5 1,2", "3,5 0,24,1 22,38,1 0,45,9 0,8,8 5,8,8 15,43,9 7,27", ",8 4,36,5 25,29,2 8,37,5 3,19,4 11,24,7 19,30,9 43", ",45,3 38,44,2 8,30,8 24,49,1 25,44,4 9,33,1 25,47,", "9 12,28,6 20,40,7 21,39,1 27,38,6 10,21,5 19,39,4 ", "2,48,3 12,19,2 30,34,1 38,39,4 7,14,4 40,44,7 24,3", "0,4 23,30,7 3,10,3 15,28,8 15,23,2 3,48,7 30,40,6 ", "28,32,5 19,34,8 26,46,5 23,42,1 15,19,7 16,43,5 21", ",37,2 13,34,7 6,9,9 22,34,4 31,44,4 11,48,7 4,16,8", " 21,36,5 33,46,7 34,46,9 28,48,2 8,26,9 43,46,8 6,", "25,9 44,48,6 19,37,2 1,6,9 0,16,8 8,18,1 8,9,3 2,4", "2,1 17,29,6 2,39,5 29,32,5 2,8,1 2,33,7 35,36,7 36", ",45,8 23,29,1 5,19,3 2,7,4 13,28,1 25,39,9 11,32,1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 50;
    vector<int> cities = {40, 43, 45, 29, 48, 25, 13, 7, 47, 19, 29, 2, 16, 4, 10, 12, 34, 23, 38, 8, 0, 18, 4, 21, 35, 39, 20, 22, 1, 39, 5, 41, 31, 0, 26, 36, 25, 39, 48, 27, 13, 27, 31, 28, 37, 45, 44, 20, 18, 33};
    vector<string> roads = {"0,40,10000000 0,28,10000000 22,0,10000000 36,0,100", "00000 21,0,10000000 10,0,10000000 0,7,1000000", "0 0,15,10000000 0,35,10000000 0,43,10000000 42,0,1", "0000000 13,0,10000000 0,4,10000000 16,0,10000000 0", ",19,10000000 33,0,10000000 17,0,10000", "000 0,9,10000000 0,2,10000000 34,0,10000000 0,5,10", "000000 0,11,10000000 6,0,10000000 0,48,10000000 39", ",0,10000000 0,38,10000000 26,0,10000000 0,20,", "10000000 0,37,10000000 44,0,10000000 31,0,10000000", " 0,1,10000000 0,41,10000000 0,46,10000000 30,0,100", "00000 3,0,10000000 0,12,10000000 32,0,10000000 0,", "47,10000000 0,49,10000000 8,0,10000000 0,45,100000", "00 23,0,10000000 0,24,10000000 14,0,10000000 18,0,", "10000000 0,27,10000000 29,0,10000000 0,25,10000000"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 480000000;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 50;
    vector<int> cities = {48, 27, 41, 2, 47, 36, 43, 4, 20, 5, 31, 30, 24, 26, 4, 35, 41, 27, 35, 15, 21, 26, 17, 40, 21, 19, 44, 29, 39, 1, 3, 37, 33, 48, 39, 35, 36, 32, 41, 10, 43, 26, 41, 17, 2, 46, 7, 43, 23, 43};
    vector<string> roads = {"3,36,10000000 39,33,10000000 48,29,10000000 1,39,1", "0000000 41,11,10000000 6,0,10000000 30,21,10000000", " 31,33,10000000 47,49,10000000 21,2,10000000 5,47,", "10000000 28,30,10000000 12,24,10000000 8,7,1000000", "0 26,23,10000000 15,4,10000000 10,8,10000000 0,9,1", "0000000 14,36,10000000 39,19,10000000 34,15,100000", "00 36,0,10000000 18,34,10000000 0,4,10000000 11,16", ",10000000 40,41,10000000 30,12,10000000 45,14,1000", "0000 15,39,10000000 9,31,10000000 12,0,10000000 12", ",7,10000000 28,42,10000000 48,22,10000000 0,3,1000", "0000 0,33,10000000 45,39,10000000 14,10,10000000 2", "4,20,10000000 45,3,10000000 6,42,10000000 43,23,10", "000000 27,26,10000000 7,0,10000000 40,38,10000000 ", "31,0,10000000 32,45,10000000 16,19,10000000 45,44,", "10000000 32,29,10000000 0,22,10000000 37,6,1000000", "0 0,19,10000000 0,47,10000000 31,6,10000000 26,2,1", "0000000 0,32,10000000 41,5,10000000 14,21,10000000", " 15,41,10000000 8,0,10000000 9,1,10000000 48,13,10", "000000 15,3,10000000 0,35,10000000 46,2,10000000 7", ",39,10000000 13,25,10000000 21,12,10000000 39,0,10", "000000 11,0,10000000 35,43,10000000 20,0,10000000 ", "19,6,10000000 13,0,10000000 3,4,10000000 36,9,1000", "0000 18,41,10000000 1,0,10000000 10,0,10000000 8,4", ",10000000 3,34,10000000 0,37,10000000 40,28,100000", "00 28,21,10000000 33,43,10000000 0,44,10000000 48,", "26,10000000 0,15,10000000 12,31,10000000 39,44,100", "00000 0,16,10000000 35,29,10000000 21,0,10000000 1", "8,0,10000000 32,8,10000000 9,4,10000000 36,22,1000", "0000 23,8,10000000 26,15,10000000 0,29,10000000 0,", "40,10000000 0,41,10000000 31,44,10000000 21,16,100", "00000 0,45,10000000 34,0,10000000 28,33,10000000 3", "2,46,10000000 0,28,10000000 37,7,10000000 46,49,10", "000000 9,28,10000000 20,41,10000000 0,14,10000000 ", "42,2,10000000 16,34,10000000 41,21,10000000 29,38,", "10000000 44,5,10000000 46,12,10000000 44,19,100000", "00 16,15,10000000 35,42,10000000 0,2,10000000 34,3", "3,10000000 7,34,10000000 0,46,10000000 0,27,100000", "00 21,46,10000000 46,41,10000000 39,35,10000000 0,", "24,10000000 38,0,10000000 43,0,10000000 35,11,1000", "0000 17,6,10000000 49,0,10000000 31,48,10000000 5,", "11,10000000 6,44,10000000 3,19,10000000 38,1,10000", "000 0,23,10000000 19,20,10000000 43,13,10000000 25", ",38,10000000 25,0,10000000 29,37,10000000 23,21,10", "000000 31,21,10000000 47,27,10000000 33,6,10000000", " 0,26,10000000 47,42,10000000 24,16,10000000 5,0,1", "0000000 4,39,10000000 17,31,10000000 35,1,10000000", " 28,48,10000000 0,42,10000000 14,6,10000000 0,30,1", "0000000 0,48,10000000 8,20,10000000 0,17,10000000 ", "24,1,10000000 46,7,10000000 33,35,10000000 2,35,10", "000000 17,8,10000000 31,10,10000000 11,24,10000000"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 490000000;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 25;
    vector<int> cities = {24, 16, 19, 2, 17, 7, 18, 16, 5, 20, 15, 7, 23, 5, 12, 6, 1, 9, 2, 16, 23, 18, 11, 10, 17, 8, 12, 21, 10, 6, 7, 10, 15, 17, 3, 7, 24, 21, 15, 21, 16, 6, 3, 7, 3, 7, 4, 5, 7, 6};
    vector<string> roads = {"0,19,10000000 0,1", "1,10000000 1", ",0,10000000 5,0,100000", "00 0,8,1000000", "0 13,0,10000000 0,10", ",10000000 7,0,10", "000000 24,0,1000", "0000 0,9,1", "0000000 0,15,10", "000000 6,0,10000000 3,", "0,10000000 0,20", ",10000000 17,0,10", "000000 0,23,10000", "000 18,0,1000", "0000 21,0,1000", "0000 0,2,10", "000000 16,0,1000", "0000 4,0,10000000 0,", "22,10000000 14,", "0,10000000 0,12", ",10000000"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 500000000;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 25;
    vector<int> cities = {15, 24, 13, 11, 17, 6, 24, 2, 4, 17, 20, 3, 14, 20, 13, 4, 17, 0, 24, 10, 6, 5, 18, 14, 17, 18, 9, 8, 24, 13, 3, 14, 4, 17, 16, 21, 15, 16, 23, 10, 0, 10, 14, 13, 5, 19, 17, 22, 19, 17};
    vector<string> roads = {"11,7,10000000 8,20,10000000 2,12,10000000 18,22,10", "000000 10,16,10000000 21,10,10000000 9,0,10000000 ", "18,23,10000000 23,21,10000000 12,22,10000000 22,15", ",10000000 9,5,10000000 2,22,10000000 10,5,10000000", " 18,4,10000000 0,10,10000000 23,1,10000000 3,22,10", "000000 17,7,10000000 15,16,10000000 14,21,10000000", " 14,0,10000000 21,3,10000000 2,0,10000000 2,1,1000", "0000 17,0,10000000 24,5,10000000 1,4,10000000 3,24", ",10000000 19,14,10000000 24,10,10000000 2,6,100000", "00 0,8,10000000 13,15,10000000 3,7,10000000 4,3,10", "000000 9,12,10000000 8,22,10000000 9,11,10000000 5", ",0,10000000 3,20,10000000 21,15,10000000 11,0,1000", "0000 5,20,10000000 16,6,10000000 23,0,10000000 5,1", "5,10000000 19,0,10000000 9,8,10000000 4,6,10000000", " 9,16,10000000 22,14,10000000 15,3,10000000 13,20,", "10000000 21,7,10000000 16,18,10000000 22,11,100000", "00 4,13,10000000 5,8,10000000 12,20,10000000 17,19", ",10000000 19,10,10000000 13,22,10000000 0,21,10000", "000 14,16,10000000 24,18,10000000 14,10,10000000 1", "3,6,10000000 1,3,10000000 0,20,10000000 18,12,1000", "0000 2,18,10000000 11,6,10000000 6,3,10000000 4,12", ",10000000 1,15,10000000 21,2,10000000 1,22,1000000", "0 19,11,10000000 17,6,10000000 19,21,10000000 4,2,", "10000000 4,8,10000000 6,21,10000000 7,2,1000", "0000 2,8,10000000 2,17,10000000 14,1,10000000 18,8", ",10000000 12,1,10000000 24,7,10000000 6,0,10000000", " 12,3,10000000 14,5,10000000 15,11,10000000 23,9,1", "0000000 23,13,10000000 9,21,10000000 10,3,10000000", " 24,11,10000000 17,24,10000000 12,7,10000000 0,18,", "10000000 4,11,10000000 15,0,10000000 18,13,1000000", "0 10,9,10000000 12,8,10000000 4,24,10000000 15,14,", "10000000 17,16,10000000 19,9,10000000 21,17,100000", "00 10,12,10000000 22,6,10000000 3,2,10000000 12,15", ",10000000 20,7,10000000 18,10,10000000 0,12,100000", "00 0,16,10000000 1,11,10000000 0,1,10000000 4,22,1", "0000000 22,16,10000000 15,9,10000000 14,20,1000000", "0 9,3,10000000 18,17,10000000 7,15,10000000 23,15,", "10000000 9,7,10000000 24,20,10000000 18,21,1000000", "0 7,5,10000000 19,20,10000000 7,10,10000000 5,21,1", "0000000 21,4,10000000 11,23,10000000 23,24,1000000", "0 13,2,10000000 5,18,10000000 6,15,10000000 1,21,1", "0000000 2,15,10000000 14,18,10000000 2,23,10000000", " 16,13,10000000 5,11,10000000 5,13,10000000 4,0,10", "000000 8,14,10000000 23,20,10000000 20,22,10000000", " 12,21,10000000 10,11,10000000 21,13,10000000 13,0", ",10000000 0,3,10000000 13,7,10000000 19,16,1000000", "0 3,19,10000000 11,16,10000000 11,18,10000000 24,", "22,10000000 15,4,10000000 5,16,10000000 12,6,10000", "000 22,5,10000000 22,0,10000000 1,9,10000000 17,10", ",10000000 24,0,10000000 7,0,10000000 5,19,10000000"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 430000000;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 12;
    vector<int> cities = {11, 0, 11, 8, 9, 8, 11, 0, 8, 3, 6, 5, 6, 11, 4, 8, 0, 11, 0, 10, 5, 9, 8, 6, 11, 5, 8, 9, 11, 0, 10, 7, 0, 9, 2, 9, 4, 11, 6, 10, 2, 0, 4, 9, 10, 7, 2, 10, 5, 2};
    vector<string> roads = {"1,0,100", "0000", "0 0,", "5,1000000", "0 0,4,10000", "000 ", "9,0,100", "0000", "0 0,6,1", "000", "000", "0 3,0,1", "0000000 8,0", ",10000000", " 2,0", ",100000", "00 0", ",", "11,100000", "00 7,0,", "100000", "00 0", ",10,", "10000000"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 430000000;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 12;
    vector<int> cities = {10, 5, 6, 5, 9, 7, 5, 0, 7, 6, 1, 5, 6, 0, 7, 5, 9, 5, 7, 4, 2, 5, 10, 11, 4, 0, 9, 10, 8, 7, 11, 7, 11, 2, 11, 7, 8, 5, 8, 0, 10, 6, 2, 1, 7, 10, 6, 4, 1, 0};
    vector<string> roads = {"3,2,10000000 1,5,10000000 4,7,10", "000000 10,3,10000000 10,2,100", "00000 11,8,10000000 6,3,10000000 11,9,100", "00000 9,4,10000000 7,1,10000", "000 6,0,10000000 2,7,10000000 11,0,1000", "0000 7,0,10000000 3,5,10000000 7,", "9,10000000 4,11,10000000 6", ",8,10000000 10,8,10000000 10,11,1", "0000000 3,8,10000000 9,8,100000", "00 8,2,10000000 0,2,1", "0000000 1,3,10000000 3,0,100000", "00 8,1,10000000 1,6,10", "000000 9,0,10000000 7,6,10000000 1,0", ",10000000 4,8,10000000 0,5,10", "000000 8,5,10000000 10,1,100", "00000 4,10,10000000 4,3,1000", "0000 1,2,10000000 7,8,10000000 6", ",2,10000000 11,2,10000000 9,3,1000000", "0 6,11,10000000 10,6,10000000 7,", "10,10000000 2,9,10000000 9,10,10000", "000 0,10,10000000 5,11,100", "00000 0,4,10000000 4,2,10000000 6", ",4,10000000 3,7,10000000 5,7,1", "0000000 11,7,10000000 4,5,1000", "0000 1,11,10000000 1,9,10000", "000 3,11,10000000 1,4,1000000", "0 9,5,10000000 5,2,10000000 6,9,1000000", "0 10,5,10000000 5,6,10000000 8,0,10000000"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 330000000;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 6;
    vector<int> cities = {1, 3, 1, 2, 3, 5, 3, 1, 3, 1, 4, 0, 2, 0, 3, 0, 1, 4, 2, 3, 1, 2, 4, 1, 3, 5, 3, 5, 2, 1, 5, 4, 0, 4, 2, 3, 2, 0, 5, 4, 5, 4, 5, 0, 5, 3, 2, 0, 2, 0};
    vector<string> roads = {"5", ",", "0", ",", "1", "0", "0", "00", "0", "0", "0", " 1", ",", "0", ",1", "0", "00", "0", "0", "0", "0", " ", "0,", "3", ",", "100", "00", "00", "0", " 0", ",", "4,", "1", "00", "0", "00", "0", "0", " ", "2,", "0", ",", "1", "0", "000", "0", "0", "0"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 420000000;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 6;
    vector<int> cities = {1, 3, 0, 2, 1, 4, 1, 3, 4, 5, 2, 1, 5, 0, 4, 0, 4, 2, 5, 3, 2, 0, 1, 3, 1, 2, 1, 2, 0, 2, 5, 0, 2, 5, 3, 2, 3, 1, 5, 2, 1, 4, 0, 3, 4, 0, 3, 4, 2, 1};
    vector<string> roads = {"5,3,10000000 2", ",4,10000000 1,2,100", "00000 1,4,1", "0000000 5,4,1000", "0000 5,0,100000", "00 2,3,10000000", " 3,0,10000000 0,4,1", "0000000 2,0,100", "00000 0,1,1000", "0000 1,5,1", "0000000 4", ",3,10000000 5,2,10", "000000 1,3,10000000"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 310000000;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 3;
    vector<int> cities = {1, 2, 0, 1, 0, 1, 2, 0, 1, 0, 1, 2, 1, 2, 0, 1, 0, 1, 2, 1, 0, 2, 0, 2, 1, 2, 1, 0, 2, 0, 2, 0, 2, 0, 1, 2, 0, 2, 0, 1, 2, 0, 1, 2, 1, 0, 2, 1, 2, 1};
    vector<string> roads = {"2,0,10", "000000", " 1,0,10000000"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 340000000;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 3;
    vector<int> cities = {1, 0, 2, 0, 2, 0, 2, 1, 0, 1, 0, 2, 1, 0, 1, 2, 0, 1, 0, 2, 1, 0, 1, 2, 0, 1, 2, 1, 0, 2, 1, 0, 1, 0, 1, 2, 1, 0, 1, 2, 0, 1, 0, 2, 0, 2, 0, 2, 1, 2};
    vector<string> roads = {"0,2,1", "000", "0000", " 2,1,", "1000000", "0 0,1,100", "00000"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 260000000;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 50;
    vector<int> cities = {35, 26, 15, 20, 36, 41, 6, 27, 49, 25, 31, 44, 12, 43, 0, 19, 1, 7, 13, 10, 40, 37, 28, 21, 5, 3, 40, 26, 31, 15, 11, 21, 47, 31, 45, 32, 23, 6, 16, 28, 32, 1, 22, 44, 45, 26, 17, 46, 32, 35};
    vector<string> roads = {"43,39,1 45,27,1 10,1,1", " 24,30,1 25,0,1 35", ",9,1 26,3,1 24,8,1 24,2", "9,1 34,40,1 3", "2,6,1 49,0,1 28,18,1 29,22", ",1 8,12,1 49,13", ",1 49,47,1 17,25,1 ", "12,40,1 41,4,1 ", "31,41,1 44,23,1 28", ",6,1 21,22,1 42,15,1 37", ",9,1 4,46,1 36,29,1", " 35,15,1 21,14,1 16,6", ",1 18,43,1 19,47,1", " 26,8,1 32,33,1 2,23,1 ", "11,6,1 12,28,1 31,40,1 ", "5,16,1 9,13,1 20,0,1 3", "8,1,1 22,48,1 13,4", "5,1 41,17,1 7,", "42,1 13,23,1 38,43,1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 198;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 12;
    vector<int> cities = {6, 7, 4, 7, 6, 5, 1, 4, 1, 11, 5, 10, 1, 8, 1, 2, 1, 10, 8, 2, 6, 5, 1, 3, 7, 11, 10, 9, 10, 8, 3, 4, 1, 6, 9, 7, 9, 10, 9, 10, 8, 1, 9, 7, 9, 10, 6, 9, 5, 1};
    vector<string> roads = {"1,5,1 3,2", ",1 6,2,", "1 4,3,1 2,8,1 2,7", ",1 0,8", ",1 5,2,1 ", "9,10,1 1,2,1", " 1,9,1 7", ",6,1 2,10", ",1 8,1,1 2,0", ",1 10,0,1 1", "0,8,1 ", "4,5", ",1 4,7,1 1", "1,9,1 6,", "1,1 8,3,", "1 5,10", ",1 1,11", ",1 8,7,1 ", "11,3,1 0,6", ",1 0,11,1", " 3,5,1", " 7,1", "0,1 9,8,1 ", "9,3,1 6,4,", "1 4,1,1 8,11,", "1 4,10,1 ", "7,3,1 0,", "1,1 7,0,1", " 0,3,1 11", ",6,1 6,3,1 ", "9,0,1 5,7,", "1 3,10,1 1,", "10,1 5", ",11,1", " 5,8,1 ", "1,7,1 9,5", ",1 9,6,1 4", ",0,1 6,10,1 ", "6,5,1 4,1", "1,1 6,8", ",1 11,7,", "1 9,4,1 ", "0,5,1 4,2,1 11", ",10,", "1 2,9,1 4", ",8,1 7,", "9,1 11,", "2,1 1,3,1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 33;
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
    vector<int> cities = {2, 0, 1, 2, 1, 2, 1, 2, 0, 2, 0, 2, 0, 1, 0, 2, 1, 2, 0, 1, 0, 1, 2, 1, 2, 0, 1, 0, 1, 2, 1, 2, 1, 2, 0, 1, 2, 1, 2, 1, 0, 2, 1, 2, 1, 2, 0, 2, 0, 1};
    vector<string> roads = {"2,1,", "1", " 0", ",2", ",1", " 1,", "0,1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 27;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int N = 50;
    vector<int> cities = {35, 38, 30, 21, 45, 42, 16, 30, 20, 23, 31, 16, 18, 11, 13, 10, 0, 32, 16, 21, 40, 11, 10, 4, 47, 13, 45, 18, 2, 16, 35, 43, 3, 21, 14, 4, 14, 36, 33, 40, 8, 15, 11, 32, 30, 28, 42, 35, 10, 14};
    vector<string> roads = {"6,22,6 44,10,2 20,35,7 7,22,1 45,41,7 3,17,5 6,32", ",4 19,13,3 17,40,3 46,17,7 36,7,7 16,12,4", " 34,40,7 33,46,2 10,11,5 6,43,5 26,28,2 29,31,9 44", ",19,8 12,29,8 15,31,8 40,18,2 8,5,8 42,2", "5,3 29,9,8 40,31,5 7,14,5 24,32,5 9,32,4 1,39,2 47", ",49,2 5,35,3 23,43,5 2,36,5 27,17,7 32,45,6 21,17", ",1 29,4,6 49,24,3 24,1,9 20,43,4 30,8,3 27,0,6 32,", "48,3 28,45,2 28,42,7 38,10,9 23,37,8 44,5,3"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 888;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int N = 50;
    vector<int> cities = {44, 2, 43, 26, 16, 18, 43, 8, 4, 39, 33, 38, 40, 35, 21, 23, 41, 48, 29, 46, 19, 46, 39, 45, 3, 31, 30, 4, 6, 10, 27, 49, 16, 20, 31, 38, 36, 23, 46, 40, 17, 30, 35, 12, 21, 6, 36, 11, 4, 21};
    vector<string> roads = {"19,40,4 21,38,7 12,32,5 20,43,4 18,41,3 29,12,8 45", ",32,6 18,36,7 42,14,5 22,11,2 31,25,6 23,41,5 17,2", "2,3 4,29,6 17,40,3 36,7,7 25,32,6 38,7,7 36,5,3 7,", "21,4 12,10,5 47,49,2 49,25,7 34,44,9 10,11,5 22,24", ",8 6,43,5 42,15,2 30,5,1 48,44,7 37,40,1 30,44,9 1", "6,12,4 49,10,9 13,27,1 46,40,7 7,11,9 48,38,2 42,2", "1,7 5,26,2 5,4,1 47,4,3 8,25,9 13,44,2 5,3,9 41,37", ",3 36,24,4 3,33,3 25,21,4 47,22,3 45,4,2 42,8,2 12", ",43,9 27,17,7 26,36,8 4,46,6 26,38,2 48,21,9 23,43", ",5 41,10,9 11,37,8 0,24,3 33,14,2 8,38,9 44,6,7 9,", "29,8 31,17,4 37,49,8 0,32,2 19,6,7 1,11,1 7,35,7 3", "1,29,9 31,15,8 19,5,4 0,13,4 43,35,7 28,2,5 38,20,", "9 49,18,3 36,2,5 22,36,2 26,13,8 17,3,5 29,10,1 18", ",17,5 7,45,1 26,14,9 39,10,5 26,11,8 33,5,5 13,33,", "3 25,16,4 2,19,1 10,6,6 44,32,8 25,15,8 8,30,3 17,", "16,8 33,12,7 25,41,1 11,12,8 28,5,2 41,20,3 15,41,", "1 48,41,9 9,32,4 28,45,2 44,25,5 43,25,6 28,44,7 4", "4,10,2 14,20,7 21,11,4 22,35,4 37,47,4 30,33,8 24,", "38,8 8,7,1 31,18,5 22,44,8 21,27,7 17,21,1 18,21,3", " 32,26,8 26,1,9 19,13,3 41,49,3 22,43,9 42,25,3 33", ",46,2 44,26,9 0,28,7 11,14,8 1,5,7 10,43,5 2,38,2 ", "34,40,7 35,11,4 1,47,3 0,17,6 2,44,7 0,23,9 38,23,", "1 31,39,9 9,42,9 18,0,3 49,23,7 40,18,2 13,6,2 10,", "38,9 32,6,4 33,1,4 14,44,7 26,28,2 35,20,7 4,3,7 0", ",49,9 48,18,5 15,34,7 7,27,8 18,16,9 42,26,3 27,15", ",1 27,45,2 8,46,6 20,24,5 19,36,2 5,45,7 20,40,8 6", ",27,2 35,36,3 47,11,1 11,44,5 24,31,9 24,49,3 4,21", ",9 8,34,8 7,22,1 29,22,9 3,7,2 0,15,8 23,16,4 29,3", "7,3 14,28,8 28,12,2 35,5,3 29,47,5 33,22,2 13,30,4", " 4,20,9 37,5,7 42,11,7 32,10,4 7,47,3 38,13,1 10,3", "5,2 41,43,6 10,13,4 47,39,9 32,48,3 7,26,9 27,12,4", " 35,8,8 45,41,7 15,24,1 10,15,5 36,12,7 49,15,6 49", ",40,1 42,28,7 29,27,4 19,9,7 41,35,1 2,33,1 48,19,", "8 35,3,8 36,30,8 47,18,7 8,36,2 31,14,9 6,22,6 49,", "1,2 20,19,4 23,5,9 5,44,3 26,25,5 18,27,3 32,24,5 ", "8,48,7 8,6,3 22,5,3 2,10,1 11,25,5 17,2,7 5,16,5 1", "4,49,9 6,39,1 1,14,6 1,44,6 8,21,3 34,45,7 47,23,7", " 24,43,3 20,34,5 10,37,8 35,17,8 23,33,5 21,39,8 1", "7,26,6 33,17,7 46,45,3 8,24,4 25,29,7 2,6,3 23,8,2", " 7,34,3 2,14,9 28,30,4 43,14,2 37,23,8 12,1,1 42,2", "4,7 24,1,9 24,3,8 42,36,5 3,49,9 26,49,6 19,45,3 3", "5,47,3 10,30,9 32,21,2 10,9,2 29,41,6 6,24,7 41,9,", "9 47,19,8 40,11,6 39,3,3 8,5,8 44,16,1 27,47,4 17,", "29,7 19,44,8 26,8,2 16,31,8 38,17,8 23,46,2 8,28,9", " 9,30,7 48,43,3 5,27,1 7,14,5 21,43,7 7,29,1 48,25", ",2 8,44,2 48,26,9 41,5,4 31,40,5 10,24,4 39,27,8 2", "0,42,3 22,49,1 1,40,2 17,46,7 41,12,7 24,14,5 1,45", ",1 24,45,3 22,28,9 46,13,5 27,14,9 13,22,4 43,39,8", " 20,49,1 43,49,8 36,27,3 22,26,4 10,8,3 5,31,8 33,", "39,8 39,1,2 39,22,6 0,27,6 15,33,8 18,19,8 26,27,9"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 150;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int N = 12;
    vector<int> cities = {3, 4, 2, 5, 3, 11, 6, 5, 10, 11, 6, 1, 11, 7, 6, 4, 3, 10, 2, 8, 3, 7, 3, 9, 6, 5, 1, 7, 8, 10, 4, 9, 11, 4, 11, 3, 1, 6, 9, 0, 3, 1, 11, 0, 10, 5, 4, 11, 3, 5};
    vector<string> roads = {"3,7,4 9,5,4", " 0,6,3 2,5,2 0,7,6 9", ",7,9 6,10,3", " 6,4,", "8 6,1,8", " 4,8,8 0,11,7"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 441;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int N = 3;
    vector<int> cities = {2, 0, 1, 2, 0, 2, 1, 0, 1, 0, 1, 0, 2, 1, 2, 1, 2, 1, 2, 0, 2, 1, 0, 1, 2, 1, 2, 0, 2, 1, 2, 1, 2, 0, 1, 0, 2, 1, 0, 2, 0, 1, 2, 1, 2, 0, 1, 0, 2, 1};
    vector<string> roads = {"2,1", ",8", " 0", ",1", ",3"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 189;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int N = 50;
    vector<int> cities = {2, 20, 17, 49, 46, 14, 1, 40, 0, 14, 10, 14, 3, 44, 14, 49, 34, 4, 35, 23, 13, 36, 6, 20, 47, 10, 24, 49, 44, 45, 14, 1, 15, 33, 6, 13, 47, 7, 8, 3, 26, 18, 22, 34, 17, 41, 37, 2, 45, 23};
    vector<string> roads = {"18,48,9 9,24,5 23,35,1 18,15,7 46,29,", "1 32,30,9 43,23,5 31,26,4 21,28,9 37,12,2 ", "18,8,3 42,20,7 17,23,7 10,29,8 32,25", ",5 48,36,9 44,36,1 0,43,4 12,39,6 23,14,", "5 25,39,5 42,45,8 28,4,3 4,47,9 6,24", ",10 13,14,5 33,15,10 38,36,10 30", ",18,5 32,43,3 27,29,6 19,34,5 18,", "21,10 10,30,9 34,29,8 46,40,10 32,5,4 2,27,10 20,", "39,8 3,23,10 21,11,9 44,7,2 9,5,4 41,34", ",3 49,41,3 44,16,7 1,43,6 22,7,6 26,9,8"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1016;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int N = 50;
    vector<int> cities = {47, 16, 32, 22, 16, 37, 49, 2, 12, 22, 17, 16, 39, 0, 10, 6, 13, 46, 3, 40, 31, 24, 13, 7, 23, 44, 10, 27, 45, 12, 40, 47, 28, 21, 26, 0, 9, 30, 7, 25, 1, 25, 46, 39, 25, 5, 2, 43, 6, 11};
    vector<string> roads = {"17,0,8 31,45,2 42,45,8 6,24,10 4,15,1 48,10,1 35,3", ",5 5,35,10 39,44,4 5,1,6 47,38,10 27,40,9 38,10,8 ", "18,21,10 38,39,2 26,27,8 39,25,5 17,5,2 30,29,6 19", ",14,5 14,13,5 8,36,10 23,14,5 14,28,10 29,13,2 29,", "33,9 14,24,2 10,29,8 31,42,3 41,39,8 2,10,3 43,46,", "2 36,29,9 24,21,5 5,15,5 35,21,3 42,20,7 30,32,9 1", "9,38,3 20,27,6 23,30,10 49,29,6 24,32,2 28,39,7 23", ",3,10 1,18,7 17,23,7 22,12,9 7,18,4 45,5,7 12,28,7", " 44,30,3 2,5,7 26,5,4 39,32,10 2,47,4 3,39,5 21,12", ",10 14,8,6 31,0,3 30,25,8 12,10,2 33,46,2 34,20,6 ", "22,10,6 39,20,8 21,46,8 11,31,5 14,44,9 24,9,5 29,", "37,7 42,23,9 33,7,7 46,29,1 9,43,2 20,37,3 10,35,9", " 27,2,10 43,17,4 49,38,10 8,34,8 41,13,10 33,2,9 2", "8,45,1 5,11,1 3,18,8 6,27,7 38,20,3 32,18,1 20,23,", "6 26,11,3 48,25,3 45,43,3 7,11,2 32,47,9 18,17,10 ", "16,29,7 11,28,6 8,28,8 13,31,4 34,3,3 26,21,4 6,20", ",1 11,24,5 3,29,5 20,29,9 40,46,10 41,4,3 18,15,7 ", "29,8,5 2,31,3 6,43,10 16,20,10 34,41,3 29,15,10 49", ",46,3 36,18,8 7,0,3 26,13,10 34,21,5 19,34,5 47,3,", "5 38,25,3 5,24,1 13,45,9 43,16,5 30,9,4 11,43,7 27", ",18,4 23,11,9 12,4,7 40,2,5 32,40,5 31,16,10 21,28", ",9 16,39,3 3,42,4 7,22,6 0,25,7 33,22,2 22,34,2 36", ",48,9 11,8,3 4,48,7 7,27,5 32,31,5 38,45,2 4,47,9 ", "49,0,10 14,35,1 31,26,4 16,23,8 1,19,8 1,15,8 31,8", ",4 17,32,3 43,24,10 29,12,6 25,44,1 49,41,3 9,22,9", " 45,17,10 33,13,2 42,39,2 13,16,3 12,46,9 17,9,5 4", "4,36,1 2,15,2 12,2,1 18,47,10 49,3,10 6,16,7 26,1,", "8 36,33,3 45,1,7 32,7,7 13,27,9 5,0,8 42,19,7 45,1", "5,10 21,48,9 12,30,6 21,9,6 41,14,7 16,19,6 7,9,7 ", "2,0,4 35,11,4 19,24,8 17,20,1 9,26,8 45,4,6 0,37,1", "0 32,5,4 48,18,9 23,4,10 49,21,9 8,35,8 30,18,5 15", ",33,10 1,9,6 13,42,5 39,4,3 19,22,3 11,42,5 8,47,2", " 19,13,1 24,2,10 32,13,10 32,41,7 10,24,10 24,22,9", " 34,29,8 26,19,10 36,6,2 31,24,5 0,39,9 31,40,7 10", ",34,1 17,19,3 7,8,8 1,42,9 8,5,9 38,44,9 35,30,8 4", "2,43,1 25,9,4 5,7,4 11,2,2 12,37,2 4,28,3 21,11,9 ", "9,27,10 1,48,4 19,21,2 41,37,7 46,0,5 7,28,2 8,23,", "2 4,8,5 1,43,6 36,20,8 44,5,6 4,32,8 42,2,9 27,15,", "8 46,31,7 26,33,10 46,48,9 44,18,5 4,38,1 2,19,6 2", "1,17,5 7,13,3 15,23,7 30,31,4 8,18,3 18,33,3 19,11", ",2 38,36,10 43,23,5 46,35,7 4,18,10 15,0,4 15,10,8", " 30,1,10 12,39,6 9,5,4 23,35,1 15,32,1 22,48,10 35", ",40,5 12,1,5 20,2,1 7,3,1 37,28,7 17,29,8 30,34,1 ", "45,32,6 4,30,7 32,46,7 37,15,8 13,34,6 23,32,1", "0 38,31,1 2,13,10 14,48,7 15,42,10 16,44,7 21,32,8", " 40,36,1 39,13,10 44,7,2 2,36,8 34,47,3 40,21,8 24", ",17,1 3,8,1 47,14,6 27,12,7 0,34,9 4,36,10 46,27,2", " 41,45,2 13,38,3 31,10,2 30,10,9 31,18,4 36,45,2 4", "3,32,3 35,7,2 36,9,10 15,36,6 4,25,3 27,32,1 29,27", ",6 0,43,4 37,35,1 10,20,6 32,25,5 49,33,6 19,43,5"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 162;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int N = 12;
    vector<int> cities = {10, 7, 4, 3, 11, 5, 1, 4, 11, 0, 10, 6, 4, 1, 8, 0, 3, 5, 4, 5, 0, 3, 5, 0, 2, 7, 6, 10, 0, 11, 3, 8, 6, 8, 10, 3, 11, 10, 7, 10, 8, 5, 4, 11, 6, 10, 11, 6, 0, 2};
    vector<string> roads = {"1,8,6 2,5,1 9", ",2,1 5,8,2 2,10,", "8 6,1,2 6,5,1 0,5", ",8 10,4,5 7,10,", "1 8,2,8 10,3,6 0,2,1 1", "1,6,5 10,11,8 2,", "1,10 11,0,10", " 3,1,8 5,9,3 3,", "7,5 10,8,4", " 1,7,3 4,0,9 ", "3,2,5 11,1,9 6", ",9,4 8,11,3 5,4", ",5 1,0,7 4,8,7", " 3,8,7 9,7,5 5,3,2 4,", "7,3 2,7,5 0,7,9 4,6,2 8", ",7,10 9,10,8 2,", "6,3 8,9,5 1,4,", "3 2,4,3 11,3,2 6,10", ",1 9,11,4 8,0,3 4,9", ",1 5,11,9 10,5,3 11", ",2,7 3,6,9 0,6,8 7,6,1", "0 9,1,10 3,0,2 9", ",0,2 5,1,3 ", "5,7,9 4,11,5 10,0,7", " 4,3,8 10,1,1 11,", "7,1 6,8,2 3,9,8"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 71;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int N = 3;
    vector<int> cities = {2, 1, 0, 2, 0, 1, 2, 1, 2, 1, 2, 1, 0, 1, 0, 2, 0, 1, 2, 0, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 0, 2, 0, 1, 0, 2, 1, 2, 0, 1, 0, 2, 1, 2, 0, 1, 0, 1, 0, 1};
    vector<string> roads = {"0", ",", "1", ",", "6", " ", "2", ",", "1", ",", "7"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 209;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int N = 50;
    vector<int> cities = {48, 23, 18, 1, 30, 8, 39, 30, 40, 48, 47, 4, 49, 6, 47, 34, 11, 7, 26, 6, 23, 44, 32, 46, 41, 29, 18, 49, 4, 18, 31, 7, 42, 49, 8, 22, 8, 48, 2, 4, 46, 6, 8, 45, 17, 4, 35, 28, 16, 11};
    vector<string> roads = {"31,4,4284444 5,38,2677789 34,35,3291990 21,46,58", "39847 33,2,9536377 35,15,3270170 21,22,4570", "974 47,40,3187579 11,33,3594617 36,14,26328", "98 9,1,3605634 18,31,7149597 13,48,1427457 25,19,5", "2924 19,41,8816460 43,36,4371310 12,16,1089269 31,", "33,9305905 29,35,3753745 35,25,6269445 43", ",8,7011578 25,26,2843418 36,3,3165514 28,20,369777", "7 28,45,452418 45,32,1385556 8,21,42310 26,44,6788", "365 30,21,9437256 27,33,3596472 48,17,4205062 41,3", "7,8560976 45,39,9267005 45,43,7626972 35,42,80940", "69 13,23,9173807 16,25,3559915 6,7,9780469 35,1,98", "54136 5,8,6182368 33,7,7194019 10,38,383745 2", "5,49,5010543 24,41,8932482 40,36,3358325 36,11,927", "7817 0,11,9856636 17,32,5224491 45,16,3990156"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 817054492;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int N = 12;
    vector<int> cities = {6, 7, 0, 3, 4, 5, 7, 9, 10, 0, 11, 0, 9, 10, 8, 10, 4, 6, 2, 7, 8, 7, 2, 10, 0, 3, 10, 0, 9, 3, 2, 1, 9, 0, 2, 0, 4, 6, 7, 1, 5, 6, 1, 2, 5, 8, 9, 6, 1, 0};
    vector<string> roads = {"2,8,395212", "2 7,0", ",63182", "59 6,", "0,860115", "9 2,0", ",4188282 ", "10,11,6", "832674 ", "0,3,", "5524300 5,1,", "32785", "29 7,11,19028", "55 5", ",11,732", "6617 ", "10,4,562", "0251 ", "8,9,95", "19806"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 432694511;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int N = 3;
    vector<int> cities = {1, 2, 0, 1, 2, 1, 0, 2, 0, 2, 1, 0, 2, 0, 2, 0, 2, 1, 0, 2, 1, 2, 0, 1, 2, 1, 0, 1, 0, 2, 0, 1, 0, 2, 0, 1, 0, 2, 1, 2, 0, 2, 1, 0, 2, 1, 0, 1, 0, 2};
    vector<string> roads = {"2,", "0", ",", "7", "066", "35", "8 ", "1,", "2,84", "01", "833", " ", "0,1", ",4", "17", "4", "090"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 168546361;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int N = 50;
    vector<int> cities = {27, 28, 48, 16, 18, 26, 25, 1, 18, 1, 3, 35, 32, 11, 39, 33, 8, 14, 42, 0, 41, 46, 21, 9, 28, 19, 11, 5, 4, 6, 37, 30, 34, 41, 2, 7, 17, 28, 7, 39, 33, 10, 24, 16, 27, 17, 5, 36, 31, 48};
    vector<string> roads = {"10,28,915 3", "9,0,", "396 25,23,207 ", "33,19,104 17,2,9", "93 37,33,998 ", "23,32,688", " 46,19,956 28", ",26,418 17,3", "9,455 17,44", ",558 22,4", "6,960 24,3", "1,666 8,1", "4,866 20,4,", "534 26,40,", "409 30,0,529 41", ",11,765 15", ",32,151 40,38,", "891 21,2,806 ", "18,13,325 45,4", "0,741 35", ",21,532 1", ",48,987 ", "6,44,802 36,6", ",330 7,49,59", "8 47,", "1,876 26", ",8,540 3", "8,49,673 ", "12,17,601 ", "34,47,613 1,4,5", "60 18,39,9", "53 4,", "14,407 1", "7,16,656 36,3", "7,483 41,9,22", "9 48,42,792 34", ",3,641 11", ",5,672 2", ",48,5", "74 31,26,85", "8 11,27,835 1", "5,6,988", " 48,27,600 43", ",10,2", "84 29,21,750"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 116995;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int N = 12;
    vector<int> cities = {11, 5, 8, 0, 10, 1, 4, 0, 3, 0, 11, 8, 3, 9, 5, 11, 10, 9, 8, 5, 2, 1, 4, 11, 2, 11, 0, 7, 9, 11, 9, 5, 4, 3, 5, 0, 5, 8, 0, 6, 5, 9, 0, 7, 5, 7, 3, 5, 4, 10};
    vector<string> roads = {"4,7,790 10,7,162 5,8,833 9,", "3,583 6,3,485 6,0,943 3,", "2,914 4,0,830 1,", "3,343 11,5,910 10,", "9,390 2,5,139 2,4,56", "6 2,0,447 9,4,664 9,", "6,866 11,2,669 7,9,559 ", "2,6,480 4,1,326 0,8", ",456 1,2,860 8,", "2,345 1,8,859 4,3", ",184 6,4,372 ", "7,0,272 11,10,492", " 0,5,240 9,1,488 3,1", "1,853 10,1,358 5,4,98", "1 6,5,234 10,6,949 3,8", ",577 2,10,250 ", "3,7,457 8,6,509 4,10,9", "65 8,10,247 0,3,73", "1 7,6,634 9,11,763 5,3,994", " 2,7,223 5,9,933 7,", "5,346 6,1,143 11,1,511 ", "8,7,264 9,0,861 6,11,7", "38 1,0,568 8,9,445 ", "11,8,882 9,2,576 0", ",10,578 8,4,782 5,10,282 10,", "3,567 1,7,701 1,5,618 0,11", ",676 4,11,", "533 11,7,229"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 13630;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int N = 3;
    vector<int> cities = {1, 2, 0, 1, 0, 2, 0, 2, 0, 1, 2, 1, 0, 1, 2, 1, 2, 1, 0, 1, 0, 2, 1, 2, 0, 2, 1, 2, 1, 2, 0, 2, 0, 1, 0, 1, 2, 0, 2, 0, 2, 0, 2, 1, 2, 1, 0, 1, 0, 1};
    vector<string> roads = {"0", ",", "2", ",4", "03", " 2", ",", "1", ",", "9", "46"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 22933;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int N = 50;
    vector<int> cities = {15, 40, 36, 35, 48, 23, 7, 25, 26, 3, 28, 44, 23, 18, 5, 6, 37, 48, 28, 43, 20, 12, 38, 23, 44, 20, 8, 4, 47, 9, 1, 12, 49, 42, 2, 47, 16, 15, 27, 47, 18, 9, 42, 41, 28, 2, 4, 21, 0, 32};
    vector<string> roads = {"44,30,1175 42,7,3303 44,16,7582 7,32,7736 35", ",13,3786 33,39,9028 38,", "46,2892 48,32,3452 19,17,7271 37,7,71", "39 6,36,9120 24,49,3254 30,8,23", "21 29,26,9594 44,4,8603 18,28,52", "48 6,27,2685 41,43,9027 25,31,9224 1", "2,10,8150 34,31,1869 5,41,8978 ", "11,32,8108 1,40,8125 40,21,5397 4,2", "0,8945 5,49,2108 4,18,9238 36,3", "3,9726 15,28,9019 13,39,4281 12,19,590", "2 10,31,1197 15,32,4533 26,38,428", "3 15,45,1322 1,41,7465 43,46,17", "86 37,9,2759 33,47,8056 4,31,72", "94 30,36,6023 21,3,3326 14,4", "4,4290 32,38,6754 47,2,28", "76 22,19,4555 0,40,2659 23,12,6231"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1089188;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int N = 50;
    vector<int> cities = {6, 5, 28, 32, 14, 28, 45, 11, 36, 40, 1, 34, 17, 48, 31, 6, 28, 38, 45, 11, 46, 30, 2, 42, 49, 37, 27, 11, 9, 10, 1, 16, 21, 29, 2, 35, 12, 47, 45, 48, 36, 2, 37, 9, 0, 25, 21, 28, 12, 17};
    vector<string> roads = {"5,38,5198 48,46,4141 42,16,1650 35,13,3786 44,16,7", "582 47,35,6927 18,28,5248 34,3,2338 16,19,4678 22,", "24,1236 6,27,2685 6,10,7091 5,49,2108 4,18,9238 7,", "3,2012 24,49,3254 32,16,4971 9,13,1376 31,25,9224 ", "36,30,6023 18,2,6242 1,34,6956 18,43,7435 42,35,47", "71 1,35,2279 6,35,5627 29,30,4123 33,47,8056 49,15", ",6678 34,18,7443 27,49,1312 45,15,1322 1,31,3907 2", "8,20,4469 19,15,7714 1,26,3168 12,24,6985 41,17,12", "92 19,34,5078 15,32,4533 17,5,4197 12,10,8150 28,4", "8,6121 8,30,2321 20,43,1817 8,26,9745 48,19,2595 3", "0,41,7663 37,7,7139 46,23,7058 45,36,6710 17,24,32", "12 29,7,3519 19,17,7271 41,1,7465 22,48,6349 29,2,", "5747 15,30,6698 42,43,2782 43,48,1229 29,47,4785 4", "0,1,8125 29,15,5869 39,26,3931 24,31,4903 3,6,5692", " 30,33,4421 2,12,2099 7,4,1755 39,22,9913 35,3,795", "6 5,2,6002 0,40,2659 18,17,4318 21,26,8354 2,34,40", "66 32,20,9342 26,29,9594 37,44,8919 27,15,8907 47,", "20,7272 20,12,4308 37,41,4719 38,32,6754 34,8,5942", " 36,23,6286 48,20,6040 32,44,5446 32,48,3452 26,38", ",4283 44,23,8077 20,4,8945 49,37,6757 30,25,2805 2", ",8,9353 15,21,2339 32,40,2719 46,5,3051 22,41,9364", " 26,11,4017 39,15,1521 47,18,3595 37,4,9744 0,28,9", "214 30,14,3165 42,10,7464 43,36,4074 38,17,3613 39", ",33,9028 40,5,1429 12,19,5902 9,0,5039 47,19,4960 ", "23,12,6231 27,16,2095 2,20,3034 12,7,7246 30,4,479", "6 5,10,7594 44,14,4290 11,30,9658 23,30,5885 31,29", ",4745 5,0,7948 4,35,7011 46,13,3377 21,31,8550 35,", "30,8375 22,38,3139 32,31,3052 46,3,1149 8,32,1081 ", "13,29,7365 1,6,1601 1,17,8289 0,34,3482 35,19,4821", " 49,4,2084 40,27,1333 43,38,4341 45,7,3931 1,4,385", "4 29,16,5127 36,33,9726 43,45,4581 47,8,6973 2,38,", "4254 13,26,2799 28,15,9019 38,42,5228 44,27,7245 4", "3,41,9027 40,21,5397 22,29,9115 20,42,6735 48,47,5", "100 33,24,5268 34,42,8640 26,5,9623 44,13,1871 30,", "47,6301 4,42,4056 5,37,2939 31,10,1197 24,36,5892 ", "41,10,3526 8,14,8378 11,12,1530 21,33,2870 44,4,86", "03 46,38,2892 4,5,3297 45,3,9462 40,45,6807 9,1,96", "27 3,21,3326 22,2,4383 37,18,5209 22,1,6881 33,13,", "6513 5,45,9550 6,46,6650 14,2,2714 19,23,1254 3,13", ",4321 29,17,2035 17,21,3541 0,41,8289 7,17,7865 9,", "29,2398 28,8,6121 12,40,9513 14,32,8699 19,22,4555", " 24,46,3746 31,0,2617 33,34,7358 9,3,8965 2,3,5061", " 15,47,5607 5,6,1575 41,13,4006 34,31,1869 11,33,2", "234 7,6,7810 11,32,8108 9,37,2759 14,20,5076 1,24,", "6693 32,7,7736 43,5,8053 43,46,1786 44,30,1175 12", ",31,9799 4,31,7294 44,35,5404 11,4,9786 36,34,9505", " 30,49,1189 47,2,2876 48,15,3896 15,33,2716 27,41,", "5701 41,5,8978 26,41,3093 43,27,2649 35,25,9407 41", ",21,4782 39,6,8665 39,13,4281 42,7,3303 11,8,5040 ", "22,45,7230 2,4,5662 36,6,9120 2,16,6917 32,36,7785"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 215093;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int N = 12;
    vector<int> cities = {8, 11, 5, 9, 3, 9, 7, 9, 4, 0, 4, 7, 1, 2, 9, 10, 9, 1, 2, 5, 8, 11, 8, 7, 5, 4, 0, 1, 3, 0, 8, 7, 11, 1, 5, 0, 11, 9, 10, 1, 11, 10, 8, 10, 0, 6, 7, 8, 5, 6};
    vector<string> roads = {"3,7,1570 2", ",8,", "1092 7,9,8", "935 6,5", ",9812 2,", "5,9172 ", "4,6,4366 8", ",10,5549 ", "1,2,5628 ", "2,0,2560", " 11,5", ",3201 4", ",7,8167"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 500690;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int N = 3;
    vector<int> cities = {2, 0, 1, 0, 1, 2, 1, 0, 2, 0, 2, 1, 2, 0, 2, 0, 1, 2, 0, 1, 2, 0, 1, 2, 0, 2, 1, 0, 2, 1, 0, 1, 0, 1, 0, 1, 2, 0, 2, 0, 1, 0, 1, 2, 0, 2, 0, 1, 0, 1};
    vector<string> roads = {"1", ",", "0", ",", "1", "5", "1", "8", " ", "0", ",", "2", ",", "5", "5", "3", "1", " ", "2", ",", "1", ",", "2", "8", "6", "0"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 73260;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int N = 50;
    vector<int> cities = {42, 32, 3, 5, 41, 7, 43, 7, 46, 32, 39, 24, 26, 29, 34, 46, 28, 15, 23, 37, 42, 35, 18, 8, 18, 9, 12, 18, 6, 4, 6, 3, 37, 8, 7, 33, 20, 5, 40, 17, 38, 28, 47, 13, 12, 37, 15, 46, 7, 38};
    vector<string> roads = {"6,2,57456 40", ",21,25429", " 44,0,30475 ", "20,5,43417 15,", "19,45845 15,", "9,73073 1,6,57654 49,", "38,7906", "1 27,21,44933 1", "6,0,32431 30,8,", "20951 16,42,", "78099 31", ",41,37894 10,43", ",62303 3,7,33", "598 44,41,66506 2", "3,21,11195 22,3", "2,41280 14,6,4", "8625 36,32,", "53287 4,47,5467", "0 28,9,96035 ", "23,0,28620 2", "1,46,18569 33,40", ",25494 18,20,", "18229 44,25,86", "729 34,10,648", "47 43,11,58946", " 28,16,21511 ", "14,48,56927 13,", "39,25188 12,41,36", "246 21,24,90409 49,", "9,57219", " 47,42,48109 35,40,95", "632 45,28,6462", "0 20,7,72325 44,", "17,48852 14,26,36010 5,", "29,19527 20,", "28,17488 36,6,417", "49 48,34,25", "849 37,18,", "80262 44,11,40", "833 10,30,", "86661 21,13,48627"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 7829936;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int N = 50;
    vector<int> cities = {44, 3, 38, 26, 18, 44, 9, 31, 5, 38, 21, 43, 20, 28, 32, 33, 37, 47, 8, 11, 23, 7, 29, 30, 3, 17, 32, 12, 45, 21, 19, 39, 24, 7, 21, 49, 2, 31, 35, 7, 19, 12, 5, 44, 39, 43, 27, 32, 40, 41};
    vector<string> roads = {"32,22,41280 49,13,49746 15,31,99602 12,45,28666 14", ",43,68792 49,22,38286 20,8,39177 27,22,28492 11,12", ",82019 43,11,58946 27,12,33744 36,39,44387 32,9,23", "497 23,3,30908 20,7,72325 32,43,31740 34,28,46005 ", "10,34,64847 15,49,40887 10,9,38972 10,30,86661 23,", "46,14031 35,12,38922 12,37,55886 21,40,25429 1", "6,32,71674 36,34,55602 21,29,68640 24,3,25986 32,1", "3,94584 1,20,20827 49,1,51833 4,29,71900 8,30,2095", "1 30,15,33678 15,17,85940 42,41,31005 22,10,55832 ", "40,41,10279 15,37,22250 20,6,45441 23,37,65129 23,", "48,18753 10,42,39136 11,15,14650 12,8,68377 21,13,", "48627 13,42,54718 42,47,48109 25,32,23790 41,44,66", "506 6,4,40070 33,10,76880 49,35,95156 25,14,43363 ", "22,23,40452 12,26,28882 44,0,30475 22,33,57662 39,", "11,37202 2,15,10587 33,32,41515 49,38,79061 16,28,", "21511 39,33,56419 48,34,25849 14,2,40928 13,15,882", "50 35,43,88018 15,44,63598 5,20,43417 17,36,29669 ", "18,44,16405 2,6,57456 38,8,97305 41,43,16704 8,46,", "33101 19,48,17699 28,20,17488 42,35,58661 44,48,74", "662 31,23,30025 8,44,42210 28,9,96035 0,23,28620 4", "1,17,51402 26,33,38614 41,11,82523 46,7,45402 13,4", "4,73529 13,40,23095 26,38,55715 26,27,92032 29,5,1", "9527 0,5,88488 4,15,63677 16,43,44216 27,49,42259 ", "42,12,78983 34,43,50187 18,0,16424 6,36,41749 31,1", ",11138 14,26,36010 2,9,93531 6,5,39676 19,15,45845", " 13,5,42933 17,2,13489 18,33,87856 21,23,11195 26,", "28,82141 18,37,80262 35,47,19041 2,42,16909 1,17,9", "8845 17,49,35580 36,37,85357 41,27,16085 19,37,523", "47 39,46,19208 42,16,78099 19,38,76253 20,42,67857", " 19,46,96724 35,25,31209 35,16,26966 41,12,36246 2", "4,21,90409 6,34,16321 12,49,72205 1,26,94458 36,49", ",61562 10,12,12720 13,27,56185 14,32,25308 19,33,7", "2393 4,21,68668 42,31,34692 13,39,25188 21,47,2125", "0 43,33,27366 15,9,73073 1,19,88034 10,32,42545 22", ",21,77937 24,43,53327 31,41,37894 14,37,63203 37,2", "0,33775 32,47,23318 3,19,55388 33,49,74678 47,8,62", "312 16,0,32431 32,19,67898 18,7,31521 42,24,73503 ", "0,13,55298 28,45,64620 18,20,18229 36,32,53287 42,", "33,24296 19,30,61954 20,26,82291 34,33,31977 7,11,", "55554 37,44,41100 10,11,32824 15,32,17611 11,33,27", "910 42,40,53574 25,9,87696 49,9,57219 15,48,37535 ", "5,1,81222 43,10,62303 39,48,62728 28,36,72297 14,6", ",48625 47,28,55805 1,25,15434 38,46,49025 10,18,81", "196 24,40,79014 27,21,44933 18,31,70109 7,3,33598 ", "48,14,56927 33,40,25494 41,22,88774 37,21,73338 35", ",40,95632 25,39,31297 25,44,86729 5,47,80021 1,6,5", "7654 37,30,27796 4,3,20976 7,12,58509 46,21,18569 ", "24,26,72412 21,10,60041 30,4,19386 14,46,74904 35,", "28,51014 7,39,55173 11,44,40833 47,4,54670 6,29,94", "703 31,9,89987 17,44,48852 41,18,27133 34,46,57669"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1918789;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int N = 12;
    vector<int> cities = {2, 5, 10, 4, 10, 8, 10, 11, 0, 10, 6, 7, 0, 4, 3, 5, 9, 8, 0, 10, 8, 9, 8, 10, 4, 0, 3, 11, 9, 4, 11, 10, 9, 6, 1, 6, 2, 11, 2, 3, 10, 7, 6, 8, 11, 8, 10, 6, 5, 10};
    vector<string> roads = {"1", ",6", ",4", "123", "2 ", "10", ",11,", "30", "650", " ", "1,", "3", ",", "4", "905", "7 8", ",", "4,38", "135", " 1,1", "1", ",829", "83 ", "4,5,", "7", "1", "150", " ", "9,7", ",3", "4", "738 ", "11,", "8,11", "41", "6", " 2,", "8,13", "6", "4", "2", " ", "11,0", ",", "163", "0", "5 8", ",7,", "1289", "8"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 2242554;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int N = 3;
    vector<int> cities = {2, 0, 2, 0, 1, 0, 1, 0, 2, 0, 1, 2, 0, 1, 2, 0, 1, 0, 1, 0, 2, 0, 2, 0, 1, 0, 2, 1, 2, 0, 1, 2, 0, 2, 1, 0, 2, 1, 2, 0, 2, 1, 0, 2, 1, 2, 1, 2, 1, 0};
    vector<string> roads = {"2,1,981", "99 0,", "1,92360"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 3331863;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int N = 50;
    vector<int> cities = {42, 43, 24, 35, 40, 44, 46, 28, 34, 30, 39, 0, 26, 30, 34, 3, 9, 28, 37, 4, 27, 12, 3, 46, 3, 2, 45, 5, 40, 41, 30, 32, 34, 5, 22, 29, 5, 23, 8, 39, 3, 47, 43, 33, 31, 34, 38, 45, 11, 25};
    vector<string> roads = {"47,15,715886 44,", "17,813219 22", ",35,854153 6,10,361313 0", ",6,436823 37,38,75", "0084 0,35,2835", "36 21,45,174930 43,", "27,622495 6,7,467021 21", ",49,985456 37", ",16,179972 46,13,787", "975 45,4,185", "521 6,34,263272 36,1", "3,743695 23,", "46,699838 42,2", "7,968473 32,42,4945", "80 47,37,62", "7697 32,9,30", "7486 29,17", ",683073 38", ",13,167300 4", "2,41,632870 26", ",3,747059 ", "20,14,421490 ", "20,11,356668 19,", "41,258795 ", "40,39,42845", "2 16,12,165", "736 2,46,611772 44", ",48,956320 27,28,2", "85499 40,3", "1,690201 3,36,26", "7733 42,4,816031 ", "18,25,34413", "3 32,30,421488 20", ",25,198098 46,2", "4,937835 47,5,480", "649 24,35", ",263912 8,46,", "132850 36,30,791493 15,", "33,700673 1,2,", "453701 13,4", "4,795138 18,24,966687 ", "40,28,998191"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 101924352;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int N = 12;
    vector<int> cities = {6, 7, 10, 4, 11, 9, 10, 3, 2, 0, 9, 4, 9, 6, 2, 3, 4, 9, 1, 9, 0, 6, 11, 4, 5, 3, 0, 9, 0, 7, 6, 3, 11, 5, 8, 10, 1, 4, 11, 3, 1, 8, 7, 11, 1, 9, 11, 2, 4, 10};
    vector<string> roads = {"9,6,", "692", "836 10", ",11,11", "1302 8", ",6,389", "747 ", "3,4", ",934593 ", "7,2,902", "667 9,", "5,4676", "98 1", "0,2,", "7126", "24 0,7", ",441336 ", "2,5,942", "498 4,5,", "227591", " 1,11,3", "25319"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 52900058;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int N = 3;
    vector<int> cities = {2, 0, 2, 1, 0, 2, 1, 0, 2, 0, 2, 0, 2, 1, 2, 0, 1, 2, 1, 0, 2, 0, 1, 0, 2, 0, 1, 2, 1, 2, 0, 1, 2, 0, 2, 1, 2, 1, 2, 0, 2, 0, 1, 2, 0, 2, 1, 0, 2, 0};
    vector<string> roads = {"1,", "2", ",7", "0", "6", "0", "5", "3", " ", "0,", "2", ",", "2", "26", "5", "9", "5"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 13030804;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int N = 50;
    vector<int> cities = {45, 38, 46, 6, 29, 10, 44, 33, 42, 18, 9, 22, 38, 40, 4, 35, 34, 17, 36, 1, 34, 9, 41, 26, 47, 9, 3, 14, 15, 1, 33, 10, 40, 33, 16, 19, 44, 15, 7, 42, 38, 22, 13, 27, 12, 23, 16, 2, 45, 7};
    vector<string> roads = {"15,36,7345553 23,32,6185906 8,22,", "2555448 5,41,2478623 16,28,4075760 36,37,6", "814208 23,4,7312837 34,26,9657", "585 1,43,1895215 21,14,3455064 42,1", "3,9472580 30,33,2796793 10,11,2", "559073 33,5,2574955 7,20", ",9704797 22,28,5477768 3,42,30", "89578 35,24,7892939 6,17,3018274 11,", "37,4838083 3,4,7220196 8,47,3056941 40,16,20", "43407 22,0,4409414 9,27,5608", "127 24,3,4798890 25,32,7331851 6,7,53597", "61 48,16,5597939 29,32,2569400 21,1", ",8878459 20,18,7137088 2,7,1648607 23,4", "9,9063057 26,38,9215498 38,43,80905", "89 6,38,8359139 29,5,889", "9661 23,44,5038935 31,7,8710748 3", "9,34,3548447 11,13,9441157 33,12,2", "863699 46,4,3580630 28,49,87", "47207 19,28,9108365 45,48,7508", "290 1,45,1893927 27,43,8217206"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1344684860;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int N = 50;
    vector<int> cities = {24, 37, 47, 13, 25, 10, 41, 4, 45, 3, 24, 7, 32, 13, 46, 30, 1, 32, 6, 44, 4, 46, 2, 47, 11, 3, 31, 21, 0, 29, 27, 23, 20, 30, 37, 46, 40, 32, 5, 36, 35, 28, 48, 17, 47, 44, 4, 49, 31, 10};
    vector<string> roads = {"12,18,7845235 38,27,7486340 38,8,6860161 7,41,6031", "859 11,13,9441157 7,2,1648607 10,26,8624155 36,38,", "3159984 40,16,2043407 6,39,5274738 39,3,8329768 26", ",22,7373662 17,0,7940856 43,36,1732243 38,23,12729", "32 2,12,8361093 45,4,6130341 1,8,6247928 22,8,2555", "448 37,15,2151688 11,10,2559073 40,27,4179428 35,1", "0,5686008 26,23,9116852 28,40,5392838 47,22,356490", "4 1,24,9127869 23,44,5038935 34,39,3548447 44,10,6", "731275 46,1,8426654 17,48,8668704 7,28,7909814 45,", "9,6240023 29,32,2569400 30,14,7177252 25,7,8272993", " 4,24,2740896 28,8,4551819 19,16,7810958 28,", "39,7677253 49,23,9063057 33,30,2796793 28,12,69340", "22 25,32,7331851 47,15,9684138 3,19,1790893 11,31,", "3636394 39,31,7944894 30,24,9564473 0,31,1958346 4", ",23,7312837 44,26,1344721 23,3,2556166 26,21,85189", "38 45,12,9012033 25,40,4892631 5,29,8899661 29,49,", "3708836 47,36,6125993 2,4,5894776 1,45,1893927 14,", "24,3398382 32,48,9912744 24,25,9852735 37,36,68", "14208 47,6,8284045 22,41,4881000 40,33,2040589 31,", "35,4186560 44,34,8729155 28,14,9184416 45,41,76778", "50 1,32,2904487 44,1,1171749 28,5,9698878 48,30,65", "04540 34,26,9657585 45,33,3230752 21,13,7126000 12", ",33,2863699 20,7,9704797 45,48,7508290 41,35,35675", "24 37,8,8322484 38,39,8290714 29,4,8475656 12,42,6", "334252 21,36,8174436 21,37,6564378 23,31,3789281 3", "3,49,9326711 18,49,3894256 17,6,3018274 28,22,5477", "768 27,3,3764918 22,43,4709780 28,47,1179598 28,19", ",9108365 5,2,4446406 8,34,1472090 36,15,7345553 ", "5,33,2574955 43,27,8217206 34,10,3816234 26,35,301", "3480 14,46,8347017 40,14,2167624 27,4,8876204 21,1", "4,3455064 20,33,7883555 41,5,2478623 13,33,3388688", " 17,2,2843848 11,49,9577106 38,26,9215498 5,35,453", "2893 24,35,7892939 7,43,2866841 23,24,3430045 48,1", "6,5597939 27,42,4207320 12,29,4748555 42,13,947258", "0 3,45,4767997 25,18,3390191 1,43,1895215 26,47,95", "71739 31,43,4862334 7,22,5223555 14,17,7953203 7,3", "5,2340673 22,0,4409414 38,32,5875715 9,21,1709579 ", "19,45,9771902 3,42,3089578 48,31,8550028 6,7,53597", "61 11,37,4838083 16,12,5732157 34,32,2010201 18,20", ",7137088 3,30,7166350 48,28,1997030 1,21,8878459 2", "6,41,5361736 36,17,5543120 27,33,9050313 43,40,364", "7966 3,4,7220196 43,41,6188156 32,23,6185906 16,41", ",5390198 16,28,4075760 25,47,3264648 6,38,8359139 ", "43,35,2349325 12,35,6902863 49,41,7089673 8,9,4997", "622 20,23,7328530 4,18,5555015 26,42,5579013 48,41", ",6367471 35,4,7857709 23,37,3051585 43,38,8090589 ", "46,4,3580630 46,7,5626563 24,3,4798890 40,6,17701", "49 9,27,5608127 3,49,9021467 31,7,8710748 41,18,50", "89733 8,47,3056941 16,15,4011381 16,25,7540494 32,", "15,6264842 49,28,8747207 2,19,9039818 26,6,3192619"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 261850463;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int N = 12;
    vector<int> cities = {8, 4, 2, 1, 11, 10, 2, 11, 5, 1, 9, 2, 10, 9, 11, 9, 7, 4, 9, 4, 0, 2, 6, 0, 4, 0, 10, 9, 3, 0, 5, 10, 2, 6, 9, 1, 3, 9, 11, 7, 10, 5, 8, 9, 3, 5, 7, 9, 8, 3};
    vector<string> roads = {"7,4,", "999688", "5 1,", "5,", "1683826 2", ",5,49", "579", "73 9", ",2,5", "711690 0", ",10,20650", "18", " 6,8,", "2000", "207 8,7,", "3220", "177 ", "7,0,7", "313", "745 1", ",3,", "29217", "87", " 5,4,23", "72566", " 5,1", "1,7", "060178"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 432939517;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int N = 3;
    vector<int> cities = {2, 0, 1, 2, 0, 1, 2, 1, 0, 2, 0, 2, 0, 1, 2, 1, 0, 1, 2, 1, 0, 1, 2, 0, 2, 1, 2, 0, 1, 2, 1, 2, 1, 0, 1, 2, 0, 2, 0, 2, 0, 1, 0, 1, 0, 2, 1, 0, 2, 0};
    vector<string> roads = {"2,0", ",7163", "422", " 1,", "0,9", "1508", "44"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 268191678;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int N = 50;
    vector<int> cities = {22, 43, 46, 18, 31, 11, 32, 7, 1, 14, 32, 26, 39, 11, 47, 2, 42, 9, 20, 24, 26, 20, 16, 44, 46, 5, 28, 2, 16, 7, 2, 42, 1, 4, 16, 32, 14, 3, 39, 20, 16, 21, 47, 10, 37, 0, 19, 35, 14, 38};
    vector<string> roads = {"42,38,10000000 23,9,10000000 13,49,1", "0000000 34,30,10000000 44,46,10000000 42,36,1000", "0000 40,14,10000000 37,1,10000000 17,15,10000", "000 37,11,10000000 48,26,10000000 7,14,1000000", "0 39,31,10000000 40,15,10000000 45,10,1", "0000000 1,28,10000000 15,32,10000000 3,10,10000000", " 27,21,10000000 35,11,10000000 22,35,10000000 45,4", "8,10000000 3,41,10000000 36,13,10000000 43,41", ",10000000 43,19,10000000 10,16,10000000 47,31,1000", "0000 31,5,10000000 14,13,10000000 8,29,10000", "000 46,6,10000000 37,12,10000000 12,", "20,10000000 36,25,10000000 33,18,10000000 ", "31,19,10000000 28,29,10000000 38,11,10000000 ", "20,2,10000000 37,3,10000000 30,11,10000000", " 4,47,10000000 27,1,10000000 46,34,10000000 24,28,", "10000000 9,40,10000000 3,33,10000000 0,41,10000000"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1670000000;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int N = 50;
    vector<int> cities = {18, 6, 5, 37, 9, 13, 45, 5, 7, 29, 35, 40, 34, 22, 35, 43, 41, 17, 7, 46, 5, 23, 25, 35, 17, 9, 46, 34, 36, 33, 4, 3, 45, 14, 45, 5, 27, 40, 10, 38, 18, 0, 28, 8, 28, 17, 1, 25, 41, 8};
    vector<string> roads = {"49,16,10000000 41,19,10000000 35,13,10000000 4", "7,24,10000000 36,0,10000000 21,18,10000000 25,17,1", "0000000 41,47,10000000 9,22,10000000 14,40,1000000", "0 37,12,10000000 30,22,10000000 49,32,10000000 14,", "13,10000000 44,46,10000000 42,17,10000000 31,32,10", "000000 7,2,10000000 2,20,10000000 4,18,10000000 3,", "27,10000000 9,40,10000000 18,33,10000000 19,20,100", "00000 1,0,10000000 7,20,10000000 13,49,10000000 20", ",39,10000000 42,14,10000000 28,29,10000000 15,40,1", "0000000 27,4,10000000 27,49,10000000 28,19,1000000", "0 41,11,10000000 23,9,10000000 11,30,10000000 26,4", "3,10000000 9,34,10000000 36,25,10000000 43,11,1000", "0000 24,2,10000000 14,11,10000000 9,36,10000000 46", ",34,10000000 29,38,10000000 48,43,10000000 27,29,1", "0000000 11,38,10000000 41,0,10000000 43,9,10000", "000 32,8,10000000 27,28,10000000 10,16,10000000 40", ",26,10000000 31,19,10000000 9,49,10000000 43,5,100", "00000 20,12,10000000 6,39,10000000 37,35,10000", "000 10,15,10000000 39,15,10000000 30,45,10000000 3", "6,14,10000000 21,33,10000000 3,11,10000000 23,30,1", "0000000 1,24,10000000 27,21,10000000 33,3,10000000", " 31,5,10000000 36,42,10000000 23,16,10000000 6,27,", "10000000 37,44,10000000 6,46,10000000 12,49,100000", "00 3,19,10000000 6,16,10000000 43,28,10000000 30,4", "8,10000000 34,38,10000000 29,41,10000000 37,13,100", "00000 38,16,10000000 43,19,10000000 48,45,10000000", " 35,22,10000000 1,6,10000000 1,37,10000000 48,37,1", "0000000 32,6,10000000 44,0,10000000 31,43,10000000", " 34,30,10000000 9,15,10000000 1,27,10000000 25,15,", "10000000 43,41,10000000 32,10,10000000 36,12,10000", "000 26,48,10000000 0,35,10000000 3,28,10000000 19,", "24,10000000 3,10,10000000 31,47,10000000 32,15,100", "00000 31,33,10000000 25,40,10000000 37,3,10000000 ", "36,7,10000000 26,47,10000000 1,28,10000000 10,45,1", "0000000 11,33,10000000 23,17,10000000 8,29,1000000", "0 38,44,10000000 15,49,10000000 41,32,10000000 28,", "26,10000000 42,38,10000000 38,33,10000000 14,43,10", "000000 4,47,10000000 33,4,10000000 41,46,10000000 ", "20,23,10000000 15,13,10000000 39,31,10000000 8,20,", "10000000 29,3,10000000 2,5,10000000 12,17,10000000", " 3,13,10000000 45,42,10000000 29,31,10000000 3,34,", "10000000 47,40,10000000 34,5,10000000 26,41,100000", "00 20,17,10000000 45,35,10000000 2,47,10000000 33,", "34,10000000 28,24,10000000 11,35,10000000 33,2,100", "00000 18,38,10000000 21,48,10000000 15,17,10000000", " 21,45,10000000 17,48,10000000 23,25,10000000 20,4", "6,10000000 35,14,10000000 21,17,10000000 10,29,100", "00000 32,34,10000000 13,36,10000000 41,3,10000000 ", "40,22,10000000 8,16,10000000 11,37,10000000 7,14,1", "0000000 29,9,10000000 33,10,10000000 4,34,10000000"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 650000000;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int N = 12;
    vector<int> cities = {9, 6, 8, 5, 8, 9, 0, 3, 0, 6, 5, 1, 10, 6, 2, 5, 2, 7, 4, 7, 6, 0, 1, 8, 3, 0, 8, 2, 1, 6, 8, 10, 0, 2, 1, 9, 10, 0, 9, 7, 3, 2, 8, 0, 7, 10, 2, 10, 5, 4};
    vector<string> roads = {"11,8,10000000 10", ",3,10000000 3,9,100", "00000 3,5,1000", "0000 2,10,10000000 4,9,1", "0000000 7,9,100000", "00 5,8,10000000 5,", "4,10000000 2,3,100000", "00 3,8,10000000 2,11,1000000", "0 6,3,10000000 5,9", ",10000000 8,9,10000", "000 2,0,10000000 7,5,1000", "0000 5,11,10000000 11,7,1", "0000000 1,7,10000000 0,3,10000", "000 5,2,10000000 2,9,1000", "0000 4,11,10000000 ", "6,4,10000000 4,7,10000000", " 1,9,10000000 8,10,", "10000000 0,9,10000000 10,4,10", "000000 6,5,10000000 4,", "3,10000000 10,0,1000", "0000 0,4,10000000 1,10,10", "000000 8,2,10000000 8,1,1000000", "0 11,1,10000000 1,4,1", "0000000 0,8,100000", "00 8,6,10000000 10,5,10000000", " 2,1,10000000 3,1,1000", "0000 0,7,10000000 10,9,1000000", "0 8,7,10000000 6,11,10000", "000 10,6,10000000 6", ",7,10000000 6,2", ",10000000 3,7,10000000 4", ",8,10000000 6,1,100000", "00 9,6,10000000 9,11,1000", "0000 6,0,10000000 5,1,", "10000000 0,1,10000000 1", "1,3,10000000 10,11,10000", "000 7,10,10000000 5,0,", "10000000 11,0,10000000 2,4", ",10000000 2,7,10000000"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 330000000;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int N = 3;
    vector<int> cities = {1, 0, 1, 2, 0, 1, 0, 1, 0, 1, 2, 0, 2, 1, 2, 1, 2, 0, 1, 0, 1, 2, 0, 1, 0, 2, 0, 1, 0, 1, 2, 1, 2, 1, 0, 2, 1, 0, 1, 2, 0, 2, 1, 0, 1, 2, 1, 2, 1, 2};
    vector<string> roads = {"1", ",", "0", ",1", "00", "0", "00", "00 ", "2,", "0,", "100", "0000", "0 1", ",", "2", ",", "10", "0", "00", "0", "00"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 270000000;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int N = 50;
    vector<int> cities = {27, 37, 17, 36, 13, 7, 23, 49, 18, 25, 22, 5, 32, 25, 29, 6, 9, 47, 21, 14, 47, 35, 11, 19, 31, 14, 8, 22, 8, 34, 45, 40, 26, 13, 32, 45, 25, 4, 44, 43, 34, 16, 5, 17, 48, 38, 28, 6, 41, 0};
    vector<string> roads = {"2,34,9261004 35,12,", "9906283 49,28,954349", "7 37,36,9772752 13,44,", "9323573 5,14,9976023 ", "23,42,9648183 8,9,98611", "20 49,48,987773", "6 1,4,9763167 12,6,93040", "64 49,3,9112502 45,1", "8,9500915 21,40,98", "16464 17,1,9932242 9,2,9", "395684 19,29,9802364 39,", "15,9291234 38,4", "7,9475158 34,7,9403389 29,0,9", "584473 4,35,9311764 ", "33,13,9611515 ", "17,9,9528421 31,17,", "9130671 11,26,9862631", " 22,30,9966198 31,26,900", "0582 30,43,9184384", " 8,37,9926393 ", "18,23,9555507 6,", "13,9941788 16,14,9", "902377 1,47,9", "923124 11,45,9618937", " 43,47,9482418 49,1", ",9626652 47,19,9494549 ", "39,40,9057166 2", "0,36,928", "1637 11,32,9537288 27,8,9", "161229 44,25,9616224 20,1", "0,9652980 46,25,9251", "551 41,26,9467495 0,", "14,9448726 24,39,978", "7187 39,47,9128531"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1620389058;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int N = 50;
    vector<int> cities = {14, 28, 12, 47, 11, 45, 37, 30, 27, 28, 26, 49, 13, 2, 5, 20, 10, 13, 21, 15, 28, 29, 30, 5, 47, 42, 7, 34, 14, 31, 12, 28, 8, 25, 24, 20, 25, 13, 1, 8, 46, 28, 6, 15, 36, 11, 34, 46, 28, 4};
    vector<string> roads = {"34,7,9403389 12,2,9144897 31,17,9130671 44,35,9536", "954 43,9,9578635 24,39,9787187 25,44,9616224 14,27", ",9614474 37,36,9772752 47,42,9255339 34,1,9282199 ", "18,29,9264013 15,1,9309862 32,1,9666808 19,29,9802", "364 23,42,9648183 25,46,9251551 31,14,9978278 31,4", ",9593047 33,30,9729768 41,31,9673787 28,47,9105170", " 41,19,9051901 6,13,9941788 39,35,9217517 28,48,92", "69402 13,33,9611515 37,46,9430693 7,2,9445896 37,2", ",9597520 18,5,9857280 47,49,9117773 26,14,9467715 ", "26,4,9101842 48,19,9250046 9,28,9294463 27,19,9795", "256 35,25,9369799 36,14,9739614 11,38,9123531 18,3", "7,9219640 3,42,9093881 27,8,9161229 35,14,9433212 ", "10,14,9448923 24,4,9238070 34,19,9047301 20,45,9", "052601 29,41,9541284 26,8,9591816 40,47,9399633 44", ",23,9726414 38,43,9512194 12,11,9165279 4,0,980117", "2 9,2,9395684 17,1,9932242 12,1,9868854 1,27,97178", "71 25,9,9566206 12,23,9882754 49,42,9213661 41,14,", "9455127 13,20,9477275 43,47,9482418 19,13,9873780 ", "9,11,9614804 11,45,9618937 30,43,9184384 7,8,90099", "56 39,38,9680395 38,47,9475158 18,39,9703923 27,", "34,9211956 40,8,9008634 45,1,9440232 43,1,9256842 ", "21,15,9851260 14,16,9902377 39,15,9291234 12,35,99", "06283 36,20,9281637 14,25,9575764 3,14,9202787 38,", "33,9738211 32,24,9560422 26,47,9298544 14,0,944872", "6 23,37,9231697 14,42,9470997 29,5,9175600 13,38,9", "397355 1,49,9626652 5,1,9820039 11,22,9931298 41,2", "4,9543705 30,39,9264917 9,17,9528421 2,34,9261004 ", "46,10,9881818 40,0,9753960 1,4,9763167 17,29,95005", "18 35,10,9204052 16,39,9325775 6,10,9076126 7,14,9", "678972 46,32,9386980 6,12,9304064 27,6,9184578 6,1", ",9267402 45,10,9368870 0,45,9342486 14,32,9919777 ", "26,41,9467495 8,6,9999445 7,45,9323052 8,37,992639", "3 48,44,9892219 21,17,9950737 2,10,9840941 28,17,9", "486924 3,49,9112502 18,8,9396030 11,32,9537288 33,", "32,9597525 13,44,9323573 16,31,9480081 31,11,93233", "82 44,9,9680807 30,25,9019204 25,16,9765060 25,41,", "9994893 21,40,9816464 6,24,9361946 6,11,9478956 46", ",45,9273944 3,21,9257557 49,4,9524102 18,45,950091", "5 20,49,9734856 30,22,9966198 5,16,9900026 8,46,95", "01540 5,23,9509856 0,29,9584473 8,21,9480000 33,16", ",9871005 13,25,9136711 44,39,9535070 5,14,9976023 ", "23,45,9536036 19,46,9319109 3,23,9993961 1,47,9923", "124 13,40,9340033 23,22,9353325 39,5,9667978 4", "9,48,9877736 0,43,9664155 47,19,9494549 26,31,9000", "582 26,11,9862631 47,39,9128531 20,10,9652980 8,9,", "9861120 35,4,9311764 43,27,9163703 38,23,9483053 9", ",33,9144679 10,31,9336437 39,40,9057166 38,12,9093", "630 7,3,9543493 25,28,9294741 2,38,9390063 13,47,9", "656353 28,49,9543497 31,27,9057422 7,4,9056224 48,", "8,9043066 23,18,9555507 13,8,9260989 20,42,9690654"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 571440008;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int N = 12;
    vector<int> cities = {10, 6, 1, 11, 4, 3, 6, 10, 1, 10, 2, 6, 11, 3, 8, 11, 7, 6, 4, 7, 10, 6, 4, 11, 4, 8, 1, 2, 4, 3, 5, 0, 10, 5, 11, 0, 7, 2, 10, 8, 0, 1, 0, 1, 2, 9, 11, 7, 3, 1};
    vector<string> roads = {"8,7", ",991", "0754 2", ",0,9", "971749 3", ",8,", "955363", "2 10", ",2", ",9", "8273", "53 7", ",6", ",90", "1423", "6 1", "0,3,9", "088717 1", "0", ",5", ",96099", "21 9", ",8,90", "9145", "9 4,", "10,9", "47143", "1 11,", "1,97147", "67 ", "0,1,93438", "06"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 831337869;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int N = 3;
    vector<int> cities = {2, 1, 0, 1, 0, 2, 0, 1, 0, 2, 0, 2, 0, 1, 0, 2, 1, 0, 1, 2, 0, 2, 1, 2, 0, 1, 0, 2, 0, 1, 2, 1, 2, 1, 2, 1, 2, 1, 2, 1, 0, 2, 1, 2, 1, 2, 0, 2, 1, 0};
    vector<string> roads = {"0,1,", "95", "416", "8", "5 ", "2,", "0,96", "3", "0", "09", "3"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 335550319;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int N = 10;
    vector<int> cities = {6, 5, 3, 0, 3, 9, 6, 8, 1, 7, 4, 7, 3, 7, 8, 6, 1, 7, 4, 8, 4, 3, 6, 1, 2, 1, 5, 1, 0, 1, 2, 5, 3, 2, 5, 4, 2, 1, 3, 1, 6, 7, 5, 8, 1, 4, 5, 0, 9, 6};
    vector<string> roads = {"1", ",9,", "249", "4180 ", "8", ",7,", "454", "7172", " 5,", "0,5", "6925", "06 9", ",2,", "321", "5740 ", "4,6,1", "974837", " 1,5", ",31796", "51 0,", "3,66", "46", "068 ", "4,7,479", "1474"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int N = 33;
    vector<int> cities = {5, 26, 19, 17, 4, 19, 27, 8, 22, 24, 6, 16, 30, 22, 1, 6, 11, 26, 23, 14, 9, 16, 13, 1, 21, 2, 6, 11, 6, 29, 20, 11, 22, 8, 29, 26, 27, 22, 2, 16, 13, 8, 31, 10, 31, 32, 16, 8, 25, 7};
    vector<string> roads = {"15,30,3658338 6,21,4462617 31,2", "2,5293974 11,10,5259130 26,13", ",3484984 14,0,4989558 3,8,4254502 21,", "19,4951979 21,7,354425", "5 14,18,3050401 31,23,4573280", " 18,17,4653380 9,11,32983", "48 24,14,4209264 27,23,381", "5307 26,5,4138049 28,3,33", "39941 25,28,3583518 17,3,4", "972510 31,21,3356910 3,29,5254", "030 15,4,3602625 30,6,3", "210150 6,12,5409496 4,2,4098", "797 32,22,3276310 26,1,5303", "439 15,20,4672458 28,9,354", "9109 13,6,3575303 16,3,3732868"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int N = 50;
    vector<int> cities = {49, 11, 35, 29, 4, 15, 14, 47, 17, 41, 49, 0, 32, 8, 15, 39, 10, 34, 13, 33, 49, 36, 20, 18, 20, 4, 22, 24, 8, 47, 26, 12, 8, 13, 42, 17, 27, 11, 16, 49, 2, 20, 5, 39, 28, 19, 29, 44, 8, 42};
    vector<string> roads = {"10,49,3089559 42,1,7859423 ", "15,26,6342670 25,39,4582601 40", ",22,7979852 45,9,6520022 4,7,70", "82345 23,39,6372383 44,18,3665801 ", "31,43,3321011 19,17,3723037 39,48,6", "665131 3,7,6903197 45,15,6102", "923 33,43,6852866 42,40,423852", "7 1,14,6728158 28,18,4910702 25,30,62", "50655 26,5,5300504 15,49,3460299", " 16,31,3707652 46,13,5097670", " 47,35,6033110 5,38,6737806 20,25", ",6774555 45,32,5787654 7,46,6908533", " 1,19,5888954 41,", "30,7064874 38,27,4164634 31,6,316", "3079 20,37,7367530 10,8,38196", "53 21,18,8153678 26,41,6840912 24,", "46,6537550 34,13,5582735 ", "22,0,6061292 12,23,6032966", " 36,15,7821751 22,45,4354087 2,34,730", "3601 31,29,5625579 16,2,6088230 ", "35,18,8318575 13,11,3242603 28,6,6294115"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int N = 10;
    vector<int> cities = {7, 3, 8, 5, 2, 5, 7, 3, 8, 2, 8, 2, 9, 4, 2, 9, 1, 0, 7, 6, 8, 6, 9, 8, 6, 2, 8, 9, 0, 6, 0, 7, 0, 8, 3, 0, 1, 8, 3, 7, 0, 2, 9, 7, 4, 1, 7, 5, 0, 5};
    vector<string> roads = {"3,", "2,60", "01", "93", "6 ", "7", ",9,61", "7", "68", "0", "0 ", "1,", "3", ",75", "76", "945", " 6", ",5,", "59", "76842", " 6", ",0", ",6", "86", "912", "9 ", "3", ",0", ",4", "8", "1", "848", "2 ", "8,", "7,", "745", "01", "26 ", "0,", "4,", "6", "696", "40", "5"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int N = 33;
    vector<int> cities = {6, 0, 10, 3, 5, 11, 3, 13, 17, 21, 26, 17, 1, 24, 30, 28, 0, 21, 15, 16, 24, 6, 13, 2, 14, 8, 10, 30, 0, 16, 3, 6, 16, 12, 8, 20, 23, 11, 32, 7, 0, 25, 24, 1, 16, 23, 31, 15, 10, 14};
    vector<string> roads = {"10,25,30", "03544 17,20,", "2954492 18", ",22,2686780 15,", "16,2758162 ", "7,31,286", "4629 ", "23,1,31274", "28 8,15,", "3154406", " 1,0,310962", "6 24,21,3", "019789 13", ",26,30167", "86 13,15,32", "43248 29,9,2641", "262 13,4,3", "082854 6", ",5,3210617", " 18,10", ",2858072 13,19,286", "3411 4,2", "5,3121786 5", ",28,28136", "48 23,12,", "3004431 9,3,2", "929702 1", "1,32,288703", "5 3", "1,24,3100", "496 6,29,", "2980499 0,", "20,30476", "25 14,24,274", "1955 9,3", "0,275", "8049 ", "2,0,3252452 19,", "11,2593428 2", "7,9,2750169 2", "4,13,", "2771077"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int N = 50;
    vector<int> cities = {43, 36, 41, 27, 5, 17, 18, 21, 19, 39, 24, 13, 20, 24, 36, 34, 35, 5, 0, 47, 10, 38, 7, 12, 49, 20, 32, 27, 20, 35, 31, 18, 22, 28, 47, 27, 49, 14, 3, 24, 8, 34, 37, 27, 7, 29, 17, 42, 38, 17};
    vector<string> roads = {"40,12,5441562 6,1,7935767 42,3,9124927 35,3,703625", "2 28,4,8138028 4,22,6458943 14,49,5617492 36,17,9", "045223 6,23,5552629 2,25,8488998 48,28,7707586 2", "7,14,6641070 9,3,7440000 35,7,6225426 14,26,837919", "8 36,7,8130222 7,37,5778741 32,49,9143460 16,25,84", "08835 40,33,8118680 41,23,5232587 30,41,6076378 42", ",45,6028302 5,18,5473193 49,36,6526546 20,24,83210", "47 43,47,8059600 21,15,8489609 38,46,5561719 25,13", ",8752421 19,23,6379639 22,40,6421309 47,23,769126", "2 20,12,6373052 41,0,5230146 29,40,8044302 22,44,8", "214287 39,3,8839115 31,38,7075112 11,12,6", "185866 27,8,5327397 3,18,6174627 10,22,5948337 15,", "1,6317029 38,32,7078043 34,10,9071375 25,1,5435636"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int N = 10;
    vector<int> cities = {8, 7, 4, 0, 9, 4, 9, 0, 7, 4, 2, 5, 9, 6, 2, 6, 8, 9, 7, 6, 7, 0, 7, 8, 9, 0, 1, 7, 9, 4, 3, 7, 1, 8, 4, 0, 1, 4, 8, 7, 8, 0, 3, 6, 4, 5, 1, 3, 1, 7};
    vector<string> roads = {"4", ",3,", "13", "570", "2", "0", " ", "5,", "0,132", "0", "390 ", "2,", "8,", "13", "150", "05 7,", "5,", "13", "0", "620", "8 1", ",", "9,", "1", "24", "4", "9", "18"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int N = 33;
    vector<int> cities = {14, 10, 31, 26, 23, 1, 5, 2, 0, 30, 24, 16, 29, 3, 24, 7, 12, 6, 23, 22, 5, 3, 12, 14, 24, 25, 28, 17, 29, 28, 18, 9, 6, 17, 3, 31, 17, 7, 0, 18, 5, 25, 1, 2, 28, 24, 8, 7, 31, 30};
    vector<string> roads = {"14,21,4798", "611 10,23,", "5002321 5,20,5", "212441 8,23,415", "9451 1", "8,28,4369628 30,2", "7,4487213 2,2", "3,5218173 8,11,41", "56600 9,1", ",4657595 1,2", "6,4812685 17,29,505", "9751 23,13,418", "7069 1,12,467", "8698 27,2", "4,5015902 2", "7,14,4299127 19", ",6,5406417 16,9,522071", "0 5,16,42917", "64 22,21,5287888 ", "17,19,43", "45106 17,4,433", "1103 15,13,", "5149346 29,32", ",4902476 8,31,4877149 7,2", "9,433780", "0 3,25,524", "2442 18,3,524", "5513 27,0,4321891"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int N = 50;
    vector<int> cities = {5, 35, 18, 48, 15, 37, 11, 13, 23, 14, 25, 34, 29, 42, 41, 29, 23, 38, 29, 2, 34, 2, 11, 1, 6, 11, 25, 8, 23, 30, 6, 32, 14, 25, 35, 30, 16, 2, 43, 38, 16, 23, 24, 46, 14, 21, 31, 43, 14, 10};
    vector<string> roads = {"44,2,2878902 49,47,598568 30,45,1615254 45,4,", "674873 24,26,2536080 27,21,2534503 41,0,", "1427808 47,5,2333546 23,13,1098712 42,12,516647", " 27,22,703280 45,14,2077506 47,48,813285", " 15,8,1412392 31,41,1510186 45,37,681822 36,", "39,2866448 19,9,1905677 11,14,653424 3,4", "0,980305 22,10,2918607 32,43,1831775 41,27,", "1799834 36,46,2821836 15,36,415386 13,1,", "2849230 6,29,1877738 10,42,670585 10,7,77", "2078 44,9,2558692 3,35,2936464 14,24,69895", "9 34,7,1101892 16,44,226456 2,43,2783696 25,49,103", "8069 17,20,2328882 48,17,405046 35,43,2409", "65 49,33,247949 23,18,1984043 6,28,1787709", " 22,29,465504 7,38,540580 8,13,1153303"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int N = 10;
    vector<int> cities = {6, 9, 0, 9, 4, 3, 8, 6, 1, 7, 5, 9, 7, 4, 6, 2, 6, 4, 8, 5, 8, 4, 7, 4, 0, 6, 5, 6, 8, 4, 0, 5, 2, 1, 4, 7, 2, 9, 3, 1, 4, 7, 1, 0, 3, 5, 0, 6, 9, 5};
    vector<string> roads = {"4", ",", "5", ",7", "3", "60", "2", "09"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int N = 33;
    vector<int> cities = {10, 32, 30, 0, 32, 14, 27, 25, 20, 7, 16, 14, 18, 30, 31, 23, 29, 1, 20, 5, 25, 9, 20, 24, 7, 9, 21, 1, 10, 6, 24, 19, 5, 22, 19, 4, 3, 15, 30, 23, 21, 12, 5, 7, 10, 4, 30, 6, 5, 18};
    vector<string> roads = {"18,", "4,5", "25", "91", "32", " ", "6,2", "6", ",", "6", "1", "377", "60", " 7", ",", "0,5", "63", "230", "2", " 1", "0,1", "1", ",55", "2", "7", "442", " 2", "4", ",14", ",", "6", "4", "2", "566", "4 ", "9,", "3", "0", ",", "5", "57", "6", "13", "7"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int N = 50;
    vector<int> cities = {13, 17, 24, 5, 39, 5, 40, 14, 30, 7, 3, 35, 37, 14, 39, 7, 26, 28, 18, 24, 49, 40, 15, 10, 32, 28, 42, 24, 14, 42, 14, 32, 8, 38, 36, 2, 49, 31, 22, 29, 39, 30, 18, 31, 45, 12, 43, 20, 40, 12};
    vector<string> roads = {"12,47,2604134 1,26,33", "57771 17,29,6150096 ", "43,0,8748015", " 32,11,555273 33,2", "2,6992261 9,44,7720301 45,2", "3,3408208 40,46,471831 25,", "39,8351916 38,28,679419 31", ",18,1868966 41,24,897674 16,20,59", "98461 21,49,3200688 8,5,389712", " 12,36,1301982 31,48,6844839"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int N = 50;
    vector<int> cities = {8, 40, 2, 48, 20, 12, 10, 40, 27, 36, 23, 29, 40, 8, 39, 1, 19, 18, 29, 16, 23, 35, 37, 28, 5, 0, 12, 10, 26, 20, 44, 37, 15, 47, 35, 42, 14, 1, 37, 43, 36, 10, 27, 32, 23, 16, 33, 42, 39, 17};
    vector<string> roads = {"28,38,6 1", "5,40,8 25,", "22,1 29", ",8,6", " 49,4,9 23", ",7,7 24,10,9 3,3", "6,3 34,20,2 14", ",16,7 2", "8,48,1 4", "3,27,9 17,", "26,6 27,20,", "2 31,45,6 38,1", "9,4 26,37,", "8 2,33,8 11,4", "5,2 17,13,1", " 30", ",6,4 42,34,6", " 2,1,8 32,4", "6,3 40,32,4", " 42,7,8 3", "3,12,4 11,24,2", " 48,35,5 4", "3,49,8", " 22,36,1 ", "14,9,8", " 41,21,7", " 0,6,6 30", ",13,5 47", ",8,5 23,", "9,1 10,25,5", " 19,37,9 2", "1,4,2 29,44", ",3 35,41", ",8 44,16,7 15,3", "9,6 46,47,9", " 31,18,3 ", "39,5,3 3,1", "2,2 5,18,9"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 2236;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int N = 50;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {"23,9", ",1 18,3", "1,3 3,1", "2,2 42,7,8", " 45,31", ",6 9,14,", "8 48,35,5 1", "7,13,", "1 5,39,3 ", "49,43,8", " 46,47,9 ", "46,32,3 44", ",16,7 1", "2,33,4 ", "44,29,3", " 25", ",10,5 ", "22,25,1 35,", "41,8 6,0", ",6 27", ",43,", "9 7,23,7 26", ",37,", "8 42,3", "4,6 18,5", ",9 ", "11,45,2 11,2", "4,2 8,2", "9,6 32,", "40,4 1", "0,24,9 1", "9,37,9 ", "47,8,5", " 3,36,3 3", "8,19,4 2,", "1,8 38,", "28,6 34,20", ",2 15,3", "9,6 30,", "6,4 13,3", "0,5 2", ",33,8 17,", "26,6 40,15,", "8 48,2", "8,1 21,", "4,2 16,1", "4,7 20,27,", "2 49,4,9 2", "2,36,1 41,21,7"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 6400;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int N = 50;
    vector<int> cities = {40, 41, 23, 30, 39, 14, 19, 25, 3, 6, 10, 29, 5, 35, 10, 29, 43, 1, 9, 7, 41, 33, 0, 38, 18, 28, 19, 44, 1, 26, 10, 41, 21, 40, 25, 15, 4, 49, 39, 7, 5, 49, 40, 15, 40, 6, 44, 32, 7, 8};
    vector<string> roads = {"12,14,10000000 16,", "4,10000000 25,19,100", "00000 26,14,10000000 2", "6,11,10000000 0,", "43,10000000 18,39,10000000 ", "29,4,10000000 21,20,100", "00000 48,3,10000000", " 30,2,10000000 13,49,100", "00000 44,15,10000000 31", ",10,10000000 34,35", ",10000000 31,7,10", "000000 6,24,10000000 3", "0,19,10000000 3,13,100000", "00 17,48,10000000 6,39,10000", "000 38,16,10000000 29,", "8,10000000 24,37,1000", "0000 42,18,10000000 9,17", ",10000000 43,40,10", "000000 2,23,10000000", " 46,10,10000000 32,2", "1,10000000 46,33,10000000 ", "27,45,10000000 1,", "35,10000000 45,12,100000", "00 11,28,10000000", " 32,44,10000000 4", "7,41,10000000 22,15", ",10000000 36,33,1000", "0000 36,37,100000", "00 8,9,10000000 ", "22,34,10000000 1,5,10000000 2", "0,42,1000000", "0 38,41,10000000 ", "25,40,10000000 28,7,1000000", "0 23,47,100000", "00 27,49,10000000"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 4830000000;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int N = 50;
    vector<int> cities = {5, 0, 5, 0, 5, 0, 5, 0, 5, 0, 5, 0, 5, 0, 5, 0, 5, 0, 5, 0, 5, 0, 5, 0, 5, 0, 5, 0, 5, 0, 5, 0, 5, 0, 5, 0, 5, 0, 5, 0, 5, 0, 5, 0, 5, 0, 5, 0, 5, 0};
    vector<string> roads = {"31,10,10000000 46,10,10000000", " 41,47,10000000 33,46,10000000 2", "5,40,10000000 44,15,1000000", "0 18,42,10000000 48,3,100", "00000 8,29,1000", "0000 49,13,10000000 45,12", ",10000000 11,26,100", "00000 20,21,10000000 2,23,", "10000000 20,42,10000000 30,2,10", "000000 18,39,1000", "0000 6,39,10000000 ", "34,22,10000000 4,16,1000000", "0 36,37,10000000 17,9,10000000 1", "4,12,10000000 48,17,100", "00000 38,41,10000000 3", "5,34,10000000 7,28,1000000", "0 7,31,10000000 6,24,", "10000000 27,49,1000000", "0 28,11,10000000 24,37,100", "00000 19,25,10000000 15,22,10000000", " 47,23,10000000 3,13,10000000 ", "9,8,10000000 30,19,10000000 27", ",45,10000000 32,4", "4,10000000 29,4,10000000", " 0,43,10000000 38,16", ",10000000 33,36,10000000 40,", "43,10000000 ", "1,35,10000000 5,1,10000000 32,21,10", "000000 26,14,10000000"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 12250000000;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int N = 25;
    vector<int> cities = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 0, 24, 23, 22, 21, 20, 19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    vector<string> roads = {"4,3,10000000 0,3,10000000 18,0,", "10000000 22,21,10000000 19,0,1", "0000000 20,0,10000000 12,0,1000000", "0 2,1,10000000 0,7,10000000 0,17,100", "00000 19,20,10000000 9,0,100000", "00 0,15,10000000 0,8,10000000 ", "8,7,10000000 12,11,10000000 ", "0,10,10000000 0,14,10000000 6,0,10000", "000 22,0,10000000 2,0,10000000 2", "4,23,10000000 0,11,10000000 17,18,100000", "00 0,21,10000000 13,14,1", "0000000 23,0,10000000 5,0,10000000 1", "0,9,10000000 1,0,1000", "0000 0,16,10000000 5,6,10000000 ", "0,13,10000000 4,0,10000000", " 15,16,10000000 0,24,10000000"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 360000000;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int N = 50;
    vector<int> cities = {2, 10, 23, 19, 21, 14, 15, 0, 1, 37, 40, 5, 12, 14, 34, 46, 1, 10, 17, 15, 16, 33, 19, 0, 4, 48, 11, 2, 17, 19, 24, 17, 28, 1, 37, 3, 21, 6, 3, 21, 48, 47, 26, 9, 18, 15, 5, 19, 30, 21};
    vector<string> roads = {"34,20,1000", "0000 24,37,10000000 22,32,1000000", "0 25,16,10000000 37,", "43,10000000 41,27,10000000 ", "41,2,10000000 45,44,10000", "000 17,3,10000000 31,2,10", "000000 35,19,100", "00000 8,27,10000000 40,15,1000000", "0 45,22,10000000 13,14,1000", "0000 43,3,10000000 18,38,100000", "00 48,0,10000000 49,18,1", "0000000 6,36,10000000 47,12", ",10000000 23,30,10000000 49,28,10", "000000 32,7,10000000 46,42,1", "0000000 40,10,10000000 39,34,", "10000000 0,29,10000000 36", ",28,10000000 26,29,10000000", " 1,19,10000000 31,30,1000", "0000 4,6,10000000 13,12,100", "00000 39,5,10000000 21,35,1000", "0000 1,15,10000000 20,26,10", "000000 48,44,10000000 21,42", ",10000000 10,5,10000000 4", ",9,10000000 14,25,1000000", "0 47,23,10000000 7,", "11,10000000 33,17,10000000 9", ",16,10000000 8,24,100000", "00 46,38,10000000 11,33,10000000"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 3690000000;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int N = 50;
    vector<int> cities = {46, 21, 42, 31, 36, 15, 44, 5, 17, 48, 21, 2, 7, 31, 15, 0, 27, 12, 40, 0, 23, 30, 41, 38, 21, 37, 30, 36, 48, 6, 19, 45, 32, 15, 27, 19, 36, 26, 24, 3, 30, 2, 11, 36, 32, 31, 42, 14, 44, 31};
    vector<string> roads = {"19,15,5506688 43,", "1,6667432 34,35,856544", "7 26,35,9229206 16,18,", "8512060 27,13,7326", "43 7,32,5969674 12,18,95", "88824 28,36,637916", "9 5,3,2714849 11,41,66", "2668 41,42,5726177 4", "7,46,1406465 4,43,9255", "926 15,21,5268836 37,", "27,4650639 6,0,25", "39735 29,46,5331790", " 20,25,9663005 48,2", ",5010619 8,9,35609", "19 12,5,4096288 1", ",23,5644894 29,19,338495", "5 34,38,6158550 16,", "42,2944083 17,40,58458", "01 14,0,2913867 ", "31,7,616820 ", "24,38,2451605 31,21,138", "7957 39,2,6589932 30,40", ",9128127 24,44,89847", "71 22,4,8981268 39,6,4757580 ", "23,17,3274941 3", ",26,6488148 30,11", ",4938246 36,45,3229031 48,4", "5,3950566 49,10,4", "492590 9,37,45", "78980 33,20,3734427 3", "2,14,9399 44,47,62", "77221 13,33,53992", "03 10,28,1671 22,25,18", "17624 8,49,5545457"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 1299975774;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int N = 50;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {"12,14,2 9,32,6 46,19,2 6,21,9 14,43,5 17,43,8 7,25", ",5 45,42,5 4,39,2 49,41,8 21,7,7 5,37,2 27,48,4 8,", "26,4 32,44,5 39,7,2 22,48,3 31,20,8 18,34,3 25,21,", "4 41,42,3 13,20,6 40,11,2 7,37,1 39,27,9 49,10,3 3", "3,11,6 31,30,7 26,22,8 17,36,9 7,15,2 19,38,7 35,4", "4,8 12,46,8 8,43,3 32,3,1 21,20,5 45,5,9 35,12,6 4", "0,12,9 19,26,5 23,3,6 9,45,6 8,37,8 17,24,7 49,33,", "4 8,33,8 46,23,9 22,14,9 2,36,1 33,9,5 19,24,5 10,", "33,8 15,18,8 2,8,3 41,28,7 40,36,4 13,15,4 19,48,4", " 14,46,5 5,28,3 13,31,8 49,3,7 12,24,3 11,7,7 30,3", "4,8 29,26,4 32,33,1 48,39,7 5,14,6 38,7,5 21,8,1 4", "5,33,8 18,27,1 47,44,2 34,4,6 39,10,5 43,48,7 40,2", "4,9 37,32,3 34,15,5 26,3,5 17,42,5 32,12,6 14,15,2", " 43,23,7 34,31,6 38,40,3 24,32,1 23,35,4 6,23,7 43", ",37,8 46,35,3 36,18,8 7,3,9 35,45,6 30,37,3 29,32,", "8 16,20,6 19,32,7 35,29,8 14,35,8 34,12,1 19,47,2 ", "14,31,8 45,24,5 6,3,7 41,27,2 18,10,6 30,18,9 9,36", ",9 23,26,4 7,22,4 27,20,6 12,31,8 11,36,9 5,21,7 1", "9,10,1 9,19,3 28,35,2 29,44,3 28,33,8 20,29,9 22,8", ",4 4,9,5 42,9,2 31,33,2 33,5,5 12,20,7 31,17,2 45,", "23,6 5,12,9 13,38,5 36,48,4 43,5,7 28,47,3 44,21,3", " 2,31,2 39,12,5 21,42,1 10,44,3 22,38,9 48,33,6 49", ",2,5 9,30,3 31,19,6 30,21,4 30,29,8 16,49,2 12,23,", "7 28,11,9 22,30,6 46,18,3 25,44,4 2,39,6 6,39,1 36", ",7,8 16,25,4 39,18,5 3,40,7 18,9,2 32,20,7 12,45,2", " 18,4,8 10,43,7 10,48,8 16,27,2 5,48,8 47,4,6 21,3", ",9 36,33,3 31,7,5 27,32,6 24,22,7 16,18,1 8,34,4 5", ",9,6 13,19,3 11,43,6 32,23,4 48,6,6 39,33,3 31,37,", "2 8,28,3 15,47,5 36,39,7 14,8,1 28,15,1 31,35,5 40", ",20,9 24,5,6 43,2,5 26,15,2 23,28,5 15,19,4 49,5,8", " 21,11,2 16,30,1 49,20,4 6,2,9 49,39,6 39,26,1 8,6", ",2 23,30,7 43,32,9 2,28,1 26,27,9 29,48,3 23,27,7 ", "11,19,7 31,47,9 1,0,4 31,16,2 49,19,5 36,14,1 15,2", "2,5 6,38,1 14,2,1 41,33,5 21,41,9 7,16,4 15,12,7 4", "2,18,2 13,2,3 29,4,3 40,27,2 48,47,8 15,20,6 47,8,", "9 28,39,7 37,2,8 43,18,9 26,40,7 15,25,5 5,20,9 32", ",2,6 33,40,8 3,46,9 39,45,2 31,38,3 38,41,8 31,4,7", " 9,15,1 26,6,1 30,42,6 21,4,8 4,3,7 33,15,9 40,44,", "7 35,39,6 41,23,5 11,22,4 48,44,5 2,12,9 18,26,1 7", ",23,9 10,42,8 16,5,2 47,40,5 42,31,9 19,14,6 47,2", "1,6 11,20,9 11,2,2 44,7,7 25,27,2 15,35,5 43,7,7 4", "7,33,8 5,36,3 46,39,7 3,30,8 2,19,5 8,9,2 26,11,6 ", "27,8,8 28,42,5 49,22,9 12,43,6 45,18,8 19,21,4 38,", "11,7 42,39,3 3,2,8 9,44,5 13,10,1 15,39,9 7,35,9 3", "8,20,9 15,17,9 12,29,9 46,47,5 34,24,6 14,28,3 4,3", "6,3 16,19,1 9,48,9 2,27,3 46,6,8 17,28,9 24,30,7 2", "3,31,1 10,36,8 10,45,3 36,37,2 45,3,2 35,49,6 9,40", ",5 10,22,1 19,40,3 49,46,2 42,35,3 16,34,7 34,36,9", " 40,5,2 39,19,1 21,15,8 18,3,4 39,44,5 29,33,5 43,", "46,9 48,28,8 48,41,6 29,36,3 3,14,3 19,5,8 47,36,8"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int N = 50;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {"25,26,5 24,16,1 37,29,6 48,18,1 18,29,7 37,43,2 19", ",34,3 30,3,5 8,41,3 44,31,4 24,3,9 31,22,5 27,9,8 ", "14,18,7 25,38,7 7,5,3 11,46,3 9,22,1 36,30,2 38,9,", "6 24,17,9 25,31,8 44,43,5 47,23,3 14,43,1 41,15,7 ", "14,9,9 32,33,5 38,21,9 15,6,4 41,27,8 23,35,5 17,3", "2,2 31,6,2 41,26,1 37,22,8 14,41,5 43,48,2 48,15,2", " 10,12,6 37,26,5 12,24,4 5,46,5 38,44,6 10,40,8 11", ",34,5 15,26,5 45,16,7 18,27,9 38,27,5 26,14,4 38,4", "1,4 9,31,1 32,20,5 20,16,2 36,10,1 35,10,5 41,31,1", " 6,18,8 9,8,7 25,21,9 24,32,3 3,39,6 29,14,9 6,48,", "9 10,42,5 14,44,8 35,12,9 15,9,8 14,8,5 20,17,2 4,", "46,1 38,31,2 35,39,2 29,15,6 20,42,7 23,17,8 33,20", ",1 8,44,5 30,24,9 8,25,2 18,31,1 41,25,5 20,40,1 1", "0,47,6 43,26,7 42,30,1 23,20,2 7,2,2 31,48,4 24,33", ",3 27,6,3 42,33,8 4,7,9 27,37,9 32,40,5 17,45,6 11", ",4,3 15,27,5 18,37,1 9,26,1 30,16,8 9,18,2 38,18,", "5 27,43,2 26,27,1 48,14,2 5,49,2 18,41,4 10,30,8 1", "4,38,3 4,2,4 42,36,5 40,17,6 6,44,8 0,1,7 37,8,9 4", "0,30,4 48,27,4 22,27,1 7,19,1 42,12,6 42,32,4 6,14", ",7 38,8,3 47,42,8 36,33,4 14,31,8 9,43,7 25,48,2 3", "7,31,2 6,26,9 44,41,5 18,8,5 38,22,2 33,45,1 23,42", ",4 20,47,7 27,8,5 23,10,5 25,37,7 25,27,4 32,30,4 ", "5,19,5 44,21,4 33,30,6 49,46,9 8,26,3 33,10,6 21,1", "4,9 29,43,5 7,28,7 39,24,3 48,26,1 37,14,9 18,25,8", " 11,2,1 28,19,8 14,25,4 46,13,5 35,30,9 24,42,9 4,", "34,9 26,44,1 14,27,1 22,43,7 2,46,2 48,9,3 49,19,2", " 49,28,6 44,15,6 34,2,2 19,46,2 10,3,7 38,6,9 9,41", ",2 13,11,6 11,7,8 37,9,3 44,22,4 27,31,6 35,45,2 2", "6,21,5 33,47,1 29,44,4 15,21,8 17,39,6 31,29,7 29,", "26,8 3,20,3 27,29,5 12,17,9 49,11,7 6,37,7 22,21,2", " 3,42,2 18,15,7 35,40,3 20,24,1 17,16,1 41,48,6 10", ",45,1 35,42,8 21,43,4 37,41,8 9,44,3 44,48,5 9,29,", "4 44,27,1 29,48,2 22,8,2 34,46,1 24,35,3 15,37,8 ", "25,15,4 3,16,9 18,43,6 10,20,8 12,39,6 30,45,1 43,", "38,7 30,47,4 34,49,1 41,29,2 43,41,9 26,31,2 8,43,", "5 19,4,1 43,15,4 42,40,7 17,42,6 27,21,9 22,6,4 4,", "5,1 47,16,2 48,37,9 7,46,9 46,28,3 18,21,1 21,9,7 ", "26,22,3 22,29,7 10,24,1 15,31,8 35,16,4 49,7,8 24,", "45,8 29,21,3 5,28,9 21,8,5 3,36,7 32,35,5 13,34,3 ", "49,13,3 41,22,7 43,6,1 32,47,3 19,11,7 29,8,1 23,3", "0,6 2,49,7 29,25,3 45,20,1 43,25,6 21,37,2 21,41,2", " 26,38,4 39,40,3 47,35,3 14,15,6 34,7,4 22,18,9 40", ",47,2 31,43,4 9,25,4 9,6,4 13,2,6 11,5,2 32,12,1 4", ",28,4 35,17,6 31,8,2 18,26,9 45,42,5 15,8,8 13,7,6", " 16,32,6 42,39,8 45,3,5 14,22,7 48,22,5 48,8,4 48,", "38,7 6,21,9 28,2,3 45,32,5 38,29,9 17,10,5 6,41,9 ", "21,48,4 25,6,5 31,21,6 16,36,3 22,15,4 45,12,2 40,", "16,2 23,33,3 36,20,8 13,5,5 24,47,7 23,39,5 22,25,", "9 25,44,7 35,33,8 2,19,3 37,44,8 32,3,9 11,28,2 45", ",23,7 18,44,8 29,6,8 15,38,5 38,37,7 23,32,9 8,6,6"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 175;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int N = 50;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {"48,41,2 39,17,4 23,43,6 28,10,2 46", ",42,7 7,49,1 14,34,5 49,44,2 30,39", ",7 26,44,9 31,45,4 11,25,6 2", "3,2,4 4,24,5 35,25,8 34,27,7 47,48,4 23,31,7", " 44,40,8 43,45,6 3,7,6 ", "9,4,9 35,8,4 32,21,2 48,45,3 2,", "33,1 47,41,7 47,45,5 12,16,9 49,", "15,9 22,21,5 0,1,4 23,41,1", " 44,7,5 40,3,7 26,3,4 2,4", "5,8 13,12,4 15,44,1 46,4,6 2", "6,40,8 35,28,5 31,2,9 28,11,4 45", ",41,3 28,8,7 34,39,6 13,22,3", " 42,4,7 27,39,8 4,19,7 42,9,2 15,7,8 ", "45,23,2 40,6,2 29,21,3 20,30,7 36,2", "0,9 18,22,1 5,19,2 44,3,7 9,19,6", " 49,6,7 7,37,5 6,37,1 33,31,9 33,23,8 4", "8,31,4 8,10,5 24,46,8 5,9,2 ", "32,16,4 5,24,9 32,29,3 17,36,4 5", ",46,5 27,20,5 32,22,7 10,25,4 13", ",29,9 32,18,4 19,24,2 27,30,5 36,", "39,1 33,47,1 36,14,4 38,7,", "8 40,49,9 14,39,1 21", ",12,3 6,44,9 3,37,8 18,29,9", " 17,27,9 46,19,1 43,47,4 16,13,4 2", ",41,2 17,14,5 29,22,6 9,24,6", " 15,3,9 40,37,6 47,31,1 2,47,", "7 15,26,9 12,18,1 9,46,3 7,6,8 12,22,5 1", "7,20,4 45,33,1 31,43,8 41,43,1 3", "6,30,8 5,42,5 20,39,2 38,15,8 ", "6,3,4 21,13,2 8,11,3 23,47,6 26,37", ",5 37,38,2 26,6,1 19,42,1 21,16,9 48,2,", "6 40,38,6 49,3,4 40,15,6 29,16,2 ", "20,34,3 3,38,8 16,18,3 33,41,9 26,38,", "7 12,32,1 43,33,6 18,21,9 36,3", "4,8 26,49,5 25,8,3 37,49,4 24,", "42,4 33,48,4 22,16,6 30,17,8", " 27,36,7 18,13,5 30,14,8 15,6,6 26,7,9 38,44,", "4 14,27,1 28,25,7 34,30,2 14,20,4 13,32", ",5 35,10,7 44,37,7 43,2,1 48", ",43,3 49,38,3 48,23,7 35,11,7 ", "5,4,8 31,41,8 40,7,5 17,34,3 6,38", ",9 11,10,2 29,12,8 37,15,9"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int N = 50;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {"47,6,3 11,27,8 35,41,2 3,45,9 47,31,7 19,35,9 43,3", "3,4 9,32,5 34,44,8 41,14,4 40,27,6 26,27,7 45,37,5", " 8,35,9 33,8,7 39,8,7 39,29,5 15,27,8 33,37,9 4,6,", "2 37,48,6 26,16,1 38,15,8 2,34,9 40,18,1 4,14,6 12", ",24,8 7,18,4 16,34,9 6,41,8 30,16,7 6,7,4 30,23,8 ", "47,25,8 11,29,1 49,14,6 3,9,1 12,17,7 12,14,8 43,2", "2,5 3,6,2 41,38,1 28,32,1 13,30,8 13,7,4 41,11,1 5", ",43,2 26,24,1 38,16,3 36,38,3 28,42,9 37,15,9 15,1", "3,3 19,11,7 23,18,3 38,12,9 5,13,6 34,9,8 45,19,1 ", "8,23,3 29,12,6 36,42,7 38,11,4 29,42,1 21,27,4 12,", "47,3 19,24,7 12,2,5 12,49,1 11,40,2 10,40,7 9,29,4", " 28,14,9 6,28,9 48,40,7 32,3,4 25,35,5 45,20,7 38,", "22,2 17,22,3 7,15,3 32,47,3 42,11,2 31,20,1 22,9,7", " 40,28,6 31,16,3 19,28,4 21,24,2 20,12,9 13,44,3 3", "7,49,7 18,16,7 22,5,2 8,10,2 25,19,7 12,30,2 28,24", ",9 43,6,6 17,5,6 46,37,3 7,40,7 13,17,9 37,23,7 2,", "8,4 32,14,5 38,17,8 34,48,2 2,22,6 20,25,8 15,18,9", " 21,40,1 29,40,6 40,24,3 33,44,5 15,21,3 14,3,6 39", ",43,4 37,28,9 44,14,9 0,1,8 2,49,6 3,41,8 35,37,2 ", "21,19,1 42,49,2 13,10,4 48,29,7 17,4,2 20,36,1 28,", "25,7 12,13,8 38,9,8 3,42,9 6,21,8 14,9,1 23,2,5 7,", "19,2 48,33,7 9,13,3 8,48,1 44,10,4 19,49,6 14,18,4", " 47,45,5 19,23,7 39,27,3 36,48,7 16,19,8 17,15,9 1", "2,33,6 2,47,1 29,16,7 12,6,5 3,15,9 48,35,4 29,49,", "6 24,13,4 14,13,7 19,15,8 47,26,6 20,29,9 35,49,8 ", "26,42,5 35,46,3 35,30,9 41,45,8 46,43,2 25,30,7 25", ",21,4 17,48,1 24,45,8 6,27,5 24,36,4 45,11,2 37,21", ",1 41,39,2 24,5,7 39,37,4 36,41,3 13,48,4 31,21,7 ", "5,42,7 43,26,1 31,39,2 41,5,7 35,4,2 4,49,3 8", ",27,1 33,7,2 31,12,8 10,17,2 23,16,6 34,35,8 40,41", ",7 38,40,6 10,48,3 23,29,6 6,48,8 37,32,2 34,49,3 ", "28,10,3 17,18,7 28,29,1 31,32,7 14,31,5 40,32,3 11", ",33,2 38,44,5 8,43,2 2,32,5 11,34,2 37,6,2 49,22,9", " 24,8,2 10,35,9 11,12,8 21,41,3 38,48,6 8,22,2 4,2", "2,8 36,44,2 44,30,7 41,49,4 15,40,6 49,8,3 42,25,5", " 49,10,5 46,18,2 34,18,3 23,41,6 3,16,5 18,42,5 25", ",39,8 13,22,4 45,35,7 47,35,4 46,7,9 39,14,6 43,10", ",9 47,14,8 20,10,9 25,22,5 2,48,5 10,22,6 48,7,3 2", "4,46,6 3,23,2 26,17,4 4,23,5 40,8,8 42,9,4 3,18,8 ", "42,46,7 21,38,3 40,23,2 44,26,7 4,8,9 16,22,5 26,6", ",3 2,11,5 17,29,4 34,20,1 2,35,4 45,2,9 13,33,3 2,", "21,2 36,14,5 45,10,4 22,48,8 14,40,4 27,2,7 6,38,7", " 19,10,2 44,20,7 25,48,8 15,10,2 35,38,7 36,28,9 2", "7,32,4 33,46,6 47,46,1 37,38,2 39,26,6 43,23,3 27,", "25,9 5,27,3 43,42,5 22,21,9 2,28,2 48,39,9 3,25,5 ", "44,47,9 10,5,5 19,18,3 7,3,2 34,40,9 22,32,8 26,23", ",1 10,41,1 21,10,9 39,22,3 9,15,3 6,5,7 19,42,5 37", ",34,2 10,31,7 30,22,9 16,13,8 9,11,5 9,27,2 11,10,", "9 12,32,4 25,15,7 6,23,4 38,5,4 19,17,8 42,2,4 43,", "14,5 36,34,7 30,4,9 23,7,1 41,20,9 18,44,9 45,32,5"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 200;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int N = 50;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {"27,13,8 15,45,1 12,40,3 38,30,4 36,20,4 10,20,3 21", ",30,8 30,7,3 43,2,6 11,19,6 5,23,7 16,38,8 8,25,4 ", "17,16,7 4,43,5 10,39,4 18,11,5 6,26,5 11,44,8 36,1", "0,9 42,21,3 49,11,4 44,4,2 7,6,1 45,44,9 5,13,6 33", ",36,6 39,25,8 15,44,7 7,31,4 15,23,4 5,22,1 47,40,", "2 46,14,2 22,19,1 36,47,2 3,42,1 44,5,1 23,43,7 48", ",8,4 25,9,8 34,36,8 28,29,1 36,39,9 18,4,9 35,19,4", " 33,8,6 31,30,5 3,16,7 15,2,7 19,32,2 30,6,6 34,25", ",6 29,31,9 33,48,2 49,45,3 41,31,8 26,29,4 39,33,2", " 4,22,5 24,32,8 4,15,2 8,39,7 3,29,8 5,18,7 31,46,", "5 38,28,8 27,24,5 10,9,6 45,32,7 39,12,1 24,11,3 3", "7,5,6 2,23,7 35,13,4 33,12,7 27,22,2 16,7,1 43,32,", "3 3,17,3 35,22,1 20,48,9 25,36,4 49,5,1 8,20,7 7,3", ",3 23,45,6 43,44,4 28,7,9 10,47,6 17,28,3 38,46,2 ", "28,3,5 44,23,2 14,31,9 40,20,9 32,44,3 20,33,6 24,", "18,1 8,47,7 34,40,8 6,42,1 17,31,1 4,11,9 21,6,2 2", "6,30,6 24,13,7 14,17,9 29,16,9 41,28,1 46,17,3 4,2", ",8 25,47,1 37,35,3 15,27,8 48,10,7 14,41,9 31", ",38,3 27,44,1 5,35,1 7,17,7 30,3,5 10,8,3 4,19,4 2", "1,29,8 12,34,1 49,27,8 25,12,9 16,31,9 45,22,5 31,", "28,5 13,4,5 11,45,9 24,37,3 22,24,6 21,31,1 44,18,", "2 25,10,6 35,32,8 28,6,9 32,13,6 37,23,2 11,23,6 3", "8,29,2 30,16,4 40,9,2 37,44,2 32,37,6 47,9,7 14,7,", "2 24,35,4 21,17,5 22,11,9 10,40,1 32,4,1 14,30,6 3", "0,42,8 18,19,1 49,2,1 41,21,2 27,37,9 13,15,9 48,3", "4,7 46,21,8 40,48,7 16,6,7 48,47,1 45,37,4 11,35,8", " 4,35,3 6,46,8 9,48,9 41,17,7 39,47,4 6,17,9 29", ",17,5 26,14,3 38,7,1 41,16,5 6,41,9 18,13,2 37,2,8", " 5,27,6 12,36,3 4,37,4 33,9,5 42,31,1 47,12,2 9,12", ",1 46,3,5 28,26,2 35,27,5 24,4,9 7,42,4 34,20,9 20", ",9,2 29,41,8 38,42,1 42,28,8 30,29,5 44,49,9 10,12", ",7 6,3,1 39,20,9 42,41,9 2,19,6 24,15,9 27,18,2 21", ",38,9 14,38,8 16,42,1 40,25,8 10,34,5 49,24,8 4,27", ",8 23,4,2 23,18,2 27,43,9 44,24,1 9,39,1 20,47,8 3", "6,48,5 39,48,8 26,41,5 34,39,4 34,8,8 41,38,7 23,2", "7,4 33,47,2 2,22,4 18,49,8 13,37,5 22,32,6 7,46,8 ", "40,8,8 18,45,6 19,49,2 26,21,2 5,32,7 19,5,6 4,45,", "1 26,42,6 35,15,3 9,8,3 38,3,2 30,28,5 47,34,2 11,", "15,4 31,3,6 42,14,5 11,2,2 34,9,2 3,14,7 37,49,6 6", ",31,7 46,28,6 21,14,5 30,17,6 24,23,6 15,18,5 29,1", "4,5 9,36,1 19,45,2 29,42,5 16,26,8 44,2,1 26,31,3 ", "15,49,1 46,42,6 48,12,7 13,23,6 0,1,4 34,33,9 3,26", ",6 2,32,8 46,41,3 46,30,3 40,36,9 24,43,8 19,13,1 ", "46,16,9 29,7,4 18,22,8 10,33,2 16,14,7 15,19,7 30,", "41,7 25,33,4 37,22,3 14,28,4 26,7,4 46,29,2 41,3,9", " 49,22,2 26,38,6 18,2,2 25,20,6 20,12,6 46,26,1 3,", "21,6 33,40,6 29,6,3 8,12,4 14,6,3 39,40,2 38,6,7 ", "32,27,7 5,45,4 41,7,2 13,11,4 21,16,6 26,17,4 19,4", "4,9 28,16,5 17,42,3 21,28,9 36,8,6 2,13,3 24,5,1 4", "8,25,4 17,38,5 21,7,5 5,2,3 35,45,4 43,5,2 49,43,1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int N = 50;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {"39,38,5 26,31,1 31,12,1 25,35,", "6 2,35,4 33,24,1 36,38,6 3,37,9 ", "11,42,7 43,3,6 16,27,3 13,18,5 37,48,", "9 49,33,1 37,20,7 32,24,9 12,11,5 22,45,", "2 34,38,2 41,12,1 24,5,1 3", "8,18,2 31,28,4 43,20,5 20,48,4 2,44,5 48,3,7 2", "9,39,7 29,36,6 29,18,9 28,26,5 33,32,5 32,21,", "5 25,20,2 16,26,8 23,6,3 16,40,7 36,39,6 21", ",5,6 48,6,4 4,17,3 31,40,", "8 47,49,3 6,2,8 11,7,1 39,34,5 10,8,6 22", ",30,9 44,35,9 12,26,4 30,8,3 3", "1,41,4 31,7,7 21,19,7 48,35,8 ", "43,6,4 47,19,3 49,32,3 33,5,3 41,27", ",6 7,42,4 31,11,3 26,40,1 13,39,1 16,11,9 20,4", "4,2 6,20,3 5,19,5 38,13,2 31,27,", "2 44,25,4 29,13,3 42,12,4 40,11,5 19,", "49,5 7,41,3 32,5,9 6,3,3 14,15,5 10,30,6 ", "42,26,3 20,23,6 7,40,5 25,2,5", " 49,5,9 44,48,4 20,2,3 23,44,3", " 8,45,1 37,2,1 43,25,6 0,1,5 6,25,9 ", "41,40,3 44,3,7 34,36,8 26,7,2 4,46,1 27,12", ",1 23,48,1 47,24,6 41,42,1 29,38,7 28,41,1 ", "11,26,9 16,42,3 23,25,1 40,28,8 35,20,", "5 41,11,9 31,42,9 24,21,8 4,14", ",4 9,4,9 21,47,9 26,41,5 20,3,4 28,42", ",9 19,24,5 5,47,4 6,37,1 43,2,7 4,15,4 3,35,4 ", "46,15,2 30,45,2 36,18,1 3,25,6 28,27,", "8 21,49,6 14,46,5 33,19,6 43,35,6 15,9", ",3 11,27,3 6,44,3 27,7,2 47", ",33,2 3,2,2 2,48,9 32,47,1 28,", "12,4 13,36,4 9,17,1 14,17,8 15,1", "7,8 22,8,1 42,40,7 17,46,6", " 12,7,6 23,43,8 10,45,6 7,28,8 49,24,5 37,", "25,9 39,18,5 44,43,3 31,16", ",2 34,29,8 7,16,6 34,18,7 12,40,6 26,", "27,4 48,43,3 21,33,9 2,23,5 25,48,1 23", ",35,8 11,28,9 37,35,2 40", ",27,2 12,16,4 44,37,1 3,23,3 10,22,9 14,9", ",9 34,13,5 16,41,3 19,32,4 35,6,8 37,", "43,7 46,9,1 28,16,2 23,37,7 27,42,8"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 125;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int N = 50;
    vector<int> cities = {35, 30, 36, 35, 30, 36, 35, 36, 30, 36, 30, 36, 30, 36, 35, 30, 35, 36, 30, 35, 36, 35, 30, 36, 35, 30, 35, 30, 36, 35, 30, 36, 30, 36, 30, 35, 30, 36, 35, 30, 35, 36, 35, 36, 30, 35, 36, 30, 36, 30};
    vector<string> roads = {"48,33,5 40,33,6 17,32,5 0,42,1 34,27,2 16,43,9 3,4", "8,7 15,11,5 17,28,1 37,34,6 23,14,2 2,25,4 46,1,5 ", "40,26,5 24,39,6 40,14,2 46,6,2 26,14,3 26,4,9 18,3", "7,8 4,43,3 11,19,1 2,39,6 47,34,2 49,29,6 49,12,2 ", "48,9,8 12,17,6 29,21,5 8,32,1 19,9,7 41,48,3 46,12", ",8 7,20,5 20,45,7 9,17,6 26,48,2 37,12,3 33,10,1 4", "1,24,2 29,11,4 33,37,2 15,16,8 29,22,5 7,25,5 27,1", "7,1 34,32,2 5,31,1 28,44,6 31,19,2 43,0,9 39,9,8 1", "4,33,2 28,49,9 22,44,3 0,38,6 13,26,8 42,21,8 14,2", ",5 29,38,7 33,26,3 21,1,1 15,45,6 6,48,7 47,17,8 3", "2,29,1 16,1,6 46,24,1 42,22,7 34,13,2 10,16,6 45,2", "3,1 15,3,9 40,4,7 26,7,8 22,48,8 33,4,1 8,24,1 32,", "15,8 20,14,3 20,28,4 7,43,1 49,27,1 10,40,5 43,33,", "7 2,31,2 26,6,3 29,8,8 11,6,5 34,8,6 13,40,3 27,18", ",2 16,37,1 27,14,2 1,48,6 40,12,3 14,22,9 34,45,7 ", "13,3,1 39,32,3 41,44,3 7,31,7 16,31,9 23,32,1 31,2", "2,5 49,4,2 43,41,2 28,47,7 33,29,9 31,15,7 20,15,5", " 4,0,6 27,1,6 24,37,4 29,19,9 19,5,6 41,45,8 29,5,", "1 9,46,9 33,44,7 33,13,9 25,6,5 2,4,9 46,18,7 37,2", "3,5 44,48,7 16,38,7 41,1,2 40,5,2 31,29,5 20,34,7 ", "10,32,6 5,7,9 32,14,6 8,17,8 38,27,1 18,29,5 24,48", ",5 4,42,2 4,11,1 7,45,6 4,10,3 19,49,1 45,1,3 47,4", "2,2 12,14,3 24,33,8 42,28,5 46,19,7 22,40,6 34,14,", "8 14,15,8 21,22,9 24,3,9 26,15,8 25,12,2 22,3,9 14", ",11,7 41,6,2 38,11,6 5,27,1 10,19,2 13,9,4 45,25,9", " 0,48,2 32,31,6 24,29,2 6,18,8 12,32,6 48,16,3 37,", "14,3 37,19,2 13,7,5 46,15,8 40,3,8 42,17,5 45,47,1", " 22,9,9 27,11,2 28,6,2 49,7,4 10,48,5 18,7,3 43,45", ",5 15,17,9 48,2,2 17,18,1 44,32,2 26,8,2 20,46,7 2", "5,9,9 23,15,7 34,39,2 7,12,4 38,44,9 23,18,6 18,15", ",8 26,18,5 43,48,5 45,18,9 22,15,9 9,1,6 32,26", ",2 48,29,3 12,6,3 41,14,7 28,38,3 13,8,1 40,39,9 4", "1,8,4 6,16,3 46,25,7 21,49,8 6,32,3 29,2,5 1,5,7 4", ",38,3 8,44,4 21,41,9 19,7,6 6,20,5 1,11,1 5,11,5 1", "8,20,7 40,6,2 43,13,7 8,46,2 35,36,5 16,23,1 23,10", ",6 17,33,2 6,43,5 4,37,9 11,16,6 10,17,3 49,45,7 9", ",47,3 16,42,8 31,3,6 38,17,5 21,48,5 42,27,3 31,49", ",8 16,3,2 33,42,9 48,12,1 18,0,9 8,37,2 44,34,3 23", ",19,4 12,26,9 6,23,7 34,48,7 17,3,7 3,46,4 18,12,2", " 43,8,6 41,27,5 27,47,6 45,3,7 19,47,3 39,10,2 10,", "29,9 10,20,5 13,25,5 27,19,6 15,8,1 19,45,6 18,31,", "1 31,1,8 21,27,5 49,34,1 25,1,3 42,39,6 6,45,6 18,", "43,3 13,23,3 14,25,5 24,18,4 29,42,7 49,37,4 23,26", ",6 36,30,7 40,25,2 34,23,9 24,44,1 7,40,6 24,26,2 ", "40,29,2 47,24,3 15,29,5 6,5,8 12,24,9 28,41,1 29,3", "4,8 41,39,7 38,1,7 1,2,8 41,16,9 2,13,2 46,42,8 7,", "3,2 2,42,8 39,3,9 1,43,2 34,22,5 46,11,3 37,0,6 14", ",21,5 38,48,5 1,0,5 32,33,6 47,4,9 39,17,1 6,47,5 ", "45,13,1 7,34,3 18,44,2 31,43,8 35,30,4 46,4,2 14,4", "5,7 10,44,4 21,11,2 10,46,7 2,11,1 15,48,8 18,13,3"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int N = 50;
    vector<int> cities = {35, 20, 47, 35, 20, 47, 20, 35, 20, 47, 20, 47, 35, 47, 20, 35, 47, 20, 35, 20, 47, 20, 35, 20, 35, 20, 35, 47, 35, 47, 35, 47, 20, 35, 20, 35, 47, 20, 47, 20, 35, 47, 35, 47, 35, 20, 47, 20, 35, 47};
    vector<string> roads = {"15,43,5 31,42,7 46,44,3 47,20,6 17,42,2 48,46,3 27", ",10,7 27,16,4 3,49,2 14,6,2 37,12,5 6,2,9 43,38,8 ", "28,40,2 4,28,5 49,4,3 41,14,4 23,30,1 33,29,4 38,1", "5,3 23,41,9 18,13,3 18,34,7 30,25,2 1,33,8 44,1,4 ", "7,18,6 36,26,5 11,16,3 14,19,7 33,26,8 34,37,4 37,", "32,2 39,34,8 1,25,8 28,31,7 43,13,5 2,14,2 45,16,3", " 9,44,1 46,29,3 2,48,1 4,40,7 21,26,2 7,43,4 19,41", ",2 6,46,7 26,29,3 1,23,7 22,0,9 45,18,6 48,33,3 31", ",4,7 23,33,2 43,18,3 46,36,4 39,43,1 21,29,4 13,", "15,6 5,3,7 33,6,4 23,14,6 35,20,8 3,17,1 5,28,2 21", ",30,8 30,29,9 25,6,4 27,34,8 0,10,3 40,31,2 1,48,2", " 29,2,1 41,9,2 22,27,8 12,18,7 32,43,2 28,8,4 7,1", "1,7 19,26,7 38,37,1 19,29,4 16,37,7 18,22,1 31,49,", "9 12,0,3 1,29,5 11,18,8 25,19,5 1,46,7 46,21,9 46,", "33,3 34,7,8 29,23,9 4,42,9 26,14,6 21,41,2 6,1,8 3", "0,14,1 5,24,5 9,19,7 2,33,4 13,37,4 26,44,8 11,37,", "5 45,27,1 30,6,8 36,29,8 45,15,3 29,9,6 7,15,4 45,", "37,4 23,46,6 16,0,9 38,18,4 44,14,3 16,12,5 9,25,2", " 42,3,8 26,30,6 41,26,2 2,36,8 26,25,9 3,24,3 49,", "24,4 38,22,7 39,10,6 36,41,3 13,7,7 14,21,8 33,21,", "7 23,44,5 44,19,2 17,40,8 46,14,8 6,26,5 7,45,5 7,", "37,2 44,21,5 2,30,8 11,12,5 38,0,2 25,2,9 12,45,7 ", "28,49,5 47,35,9 41,25,9 44,6,4 26,2,8 44,30,3 36,1", "4,3 6,36,8 48,36,5 3,28,9 16,38,4 15,22,2 48,41,9 ", "14,9,3 8,40,6 43,37,7 34,43,8 30,41,3 11,0,2 45,22", ",1 32,16,6 41,29,6 3,40,3 7,27,4 16,22,9 22,34,6 3", "4,12,6 46,30,6 27,0,5 40,42,4 39,7,2 9,48,2 39,32,", "7 34,15,5 37,39,8 15,16,2 8,49,2 45,43,4 30,19,2 4", "6,25,9 3,8,3 21,19,8 44,29,3 9,26,4 25,44,2 41,1,1", " 48,30,6 6,29,2 34,11,5 1,19,3 17,8,3 23,9,7 24,4,", "5 9,33,3 8,31,4 38,10,5 32,22,4 9,36,8 26,23,4 14,", "25,1 25,36,4 32,10,2 38,34,1 10,12,3 9,1,2 34,10,9", " 45,34,1 33,36,4 4,8,4 13,38,4 10,45,8 6,23,7 3,4,", "5 48,19,2 32,12,5 38,11,7 21,36,9 45,0,1 33,41,9 4", "2,24,7 7,22,2 27,11,7 29,48,7 48,26,1 37,15,6 36,1", "9,7 14,1,2 48,25,1 28,42,2 10,22,5 22,12,8 23,2,1 ", "25,29,8 36,44,4 1,30,1 12,15,4 39,16,9 14,29,1 44,", "33,9 44,48,8 48,14,5 27,12,2 41,44,6 1,2,4 21,9,1 ", "1,36,8 2,46,8 40,24,7 43,16,4 41,46,9 43,10,4 0,15", ",7 0,39,3 23,36,5 37,27,6 34,13,6 23,25,4 25,33,3 ", "38,27,2 38,39,5 23,19,9 18,16,5 10,16,8 27,13,5 44", ",2,3 41,6,8 26,46,5 24,28,6 38,45,1 9,46,9 32,27,9", " 27,18,5 34,16,8 48,21,5 39,11,9 31,24,9 21,1,3 9,", "30,2 21,2,9 14,33,5 40,5,5 15,10,3 32,7,3 23,21,3 ", "21,25,9 18,37,1 22,11,6 12,43,5 33,30,7 45,32,7 2,", "9,2 43,22,3 19,46,3 8,5,6 17,49,8 39,45,9 6,48,8 2", "2,39,4 18,32,1 13,16,4 11,45,4 33,19,4 19,2,4 30,3", "6,7 23,48,1 8,24,5 42,5,9 3,31,3 15,27,5 4,5,6 2,4", "1,9 21,6,9 24,17,6 15,11,4 8,42,6 19,6,6 32,0,4 1,", "26,1 9,6,9 27,43,9 43,11,1 22,13,4 31,17,3 10,18,3"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int N = 50;
    vector<int> cities = {37, 44, 33, 44, 37, 44, 33, 44, 37, 33, 44, 33, 44, 33, 37, 44, 37, 44, 37, 44, 33, 37, 44, 37, 44, 37, 44, 37, 44, 33, 44, 37, 44, 37, 33, 37, 33, 44, 37, 44, 37, 44, 33, 44, 37, 33, 37, 44, 37, 44};
    vector<string> roads = {"3,30,2 24,22,7 42,35,7 15,32,4 35,10,7 38,34,5 17,", "20,5 7,21,4 8,3,9 12,15,2 15,25,3 19,36,3 30,9,6 1", "7,24,9 40,2,2 14,2,6 17,12,9 4,15,1 11", ",27,6 0,4,1 0,22,8 41,23,4 11,13,4", " 4,43,3 21,1,9 26,39,8 5,3,3 46,18,6 38,", "21,9 25,43,4 45,27,9 1,29,7 8,5,1 2,35,4 8,9,1 ", "12,22,8 27,18,6 39,42,9 40,14,3 7", ",38,3 21,34,2 5,16,3 9,3,7 34,7,", "3 7,1,8 8,30,8 10,40,4 20,12,1 8,6,7", " 46,27,9 17,22,4 23,49,8 17,43,7 38,29,1 ", "30,5,6 25,32,7 48,9,5 39,2,2 32,20,8 42,10", ",3 24,20,6 44,33,1 17,32,6 28,7,8 4", ",20,3 20,43,8 5,6,8", " 1,38,1 32,12,9 4,32,9 30,48,6 3,6,", "8 27,31,4 45,11,5 16,30,4 45,13,3 35,39,1", " 26,35,4 45,46,3 36,41,3 10,2,2 24,15,7 26,10,1 24", ",32,4 19,41,5 36,49,4 27,13,2 48,6,9 17,0", ",5 15,20,8 43,24,8 40,26,8 39,14,6 ", "41,49,4 10,14,7 47,36,4 23,36,8 16,6,9 48,3", ",9 29,34,7 3,16,6 26,2,1 24,0,9 35,14,6 10", ",39,7 48,16,2 7,29,7 18,31,2 24,12", ",1 22,43,9 22,20,2 15,17,1 22,4,8 25,0", ",4 15,0,3 6,30,9 43,12,7 34,1,8 28,29,2 12,0,7 ", "19,47,1 9,6,6 25,22,2 46,13,5 25,12,6 0,3", "2,1 19,49,6 31,11,8 38,28,7 8,16,6 8,", "48,7 24,4,9 15,22,1 29,21,9 17,25,3 ", "4,25,5 31,46,5 18,13,7 37,33,4 32,22,8 31,45,1 25,", "20,8 12,4,2 28,21,4 42,26,9 14,42,8 49,47,8 43,32,", "7 5,48,8 42,2,3 5,9,4 0,20,1 23,", "19,9 47,41,8 15,43,2 45,18,5 47,23,4 34,28,2 40,4", "2,9 11,46,8 40,39,3 9,16,2 0,43,9 18,11,6 44,37,2", " 35,40,8 13,31,5 1,28,2 25,24,6 26,14,7 4,17,9"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int N = 50;
    vector<int> cities = {41, 48, 41, 48, 40, 41, 48, 40, 48, 40, 48, 41, 40, 48, 40, 48, 40, 41, 48, 40, 41, 40, 41, 40, 41, 48, 41, 40, 41, 48, 41, 40, 41, 40, 41, 40, 48, 41, 40, 41, 48, 40, 48, 41, 48, 40, 41, 48, 40, 48};
    vector<string> roads = {"24,49,6 34,17,3 9,11,6 17,42,4 12,20,6 33,30,4 6,3", ",5 8,49,9 45,25,7 26,21,6 36,24,1 25,6,5 22,35,3 2", "6,37,9 7,28,6 27,24,1 18,9,9 18,33,8 8,2,9 29,35,9", " 7,36,7 19,38,8 36,12,9 27,1,1 32,17,2 14,4,2 33,0", ",4 33,1,4 21,47,6 2,15,3 42,22,9 0,24,5 18,36,7 27", ",49,3 47,13,1 26,24,6 21,46,4 43,29,9 22,43,9 6,34", ",5 6,10,7 25,1,3 8,35,3 26,10,7 18,22,5 35,17,7 32", ",8,8 6,8,9 17,43,1 31,29,1 15,29,6 47,3,7 4,8,3 49", ",22,8 28,35,7 15,39,7 9,47,2 18,31,2 11,44,2 14,49", ",4 39,32,9 25,23,4 10,45,5 15,10,4 45,2,7 22,45,4 ", "24,9,4 0,6,7 25,5,1 30,43,1 42,44,5 2,0,8 44,45,1 ", "25,47,8 44,3,3 18,16,9 23,17,3 44,15,3 3,12,7 20,2", "7,3 0,4,5 4,7,4 28,42,3 32,1,5 9,31,2 25,43,6 10,4", "2,8 11,33,7 26,5,8 33,5,1 29,26,9 5,30,6 8,15,4 42", ",43,1 48,40,8 0,36,6 9,33,5 18,15,8 9,22,1 28,17,9", " 29,11,5 34,3,7 33,28,2 2,29,8 1,42,6 23,32,9 35,1", "0,3 12,19,1 34,25,4 18,46,7 23,10,1 16,33,3 49,12,", "6 16,7,1 10,49,4 12,46,6 25,32,8 1,13,2 12,22,1 35", ",31,7 5,22,9 7,12,3 8,14,7 14,13,9 0,23,6 44,39,9 ", "47,6,6 12,45,2 34,26,7 43,23,9 34,8,4 46,31,5 28,3", "9,4 49,1,4 47,11,1 27,6,8 2,17,5 22,1,3 15,24,4 38", ",15,7 33,23,5 19,47,4 24,22,2 33,39,9 29,25,2 23,4", "4,5 12,33,4 19,44,9 49,28,3 21,19,2 27,29,9 49,37,", "1 4,25,8 47,46,5 6,43,7 43,1,4 37,46,4 21,28,5 1,3", "7,2 43,20,2 16,12,7 34,1,5 21,15,7 43,10,1 29,7,9 ", "0,10,7 16,24,8 1,17,8 11,7,7 46,26,5 49,15,4 13,37", ",4 21,23,2 7,44,2 36,34,8 22,26,3 6,32,2 34,9,1 27", ",10,2 22,14,1 16,19,8 12,43,2 49,46,7 49,2,2 5,18,", "8 41,48,9 32,45,1 24,1,9 14,44,2 36,5,7 37,31,1 17", ",16,7 26,47,6 39,16,4 24,42,9 33,6,6 11,18,5 18,12", ",7 42,14,9 9,38,5 43,37,3 0,38,6 23,13,8 34,24,3 3", "4,31,7 37,9,4 16,32,8 31,19,7 12,35,7 24,33,6 28,4", "6,6 21,10,9 5,31,3 27,16,3 28,24,1 12,31,2 39,46,8", " 26,12,3 3,28,7 15,5,5 16,4,5 9,3,5 33,15,3 12,23,", "7 14,18,6 35,42,9 8,42,1 4,5,9 27,32,9 21,43,8 30,", "45,3 29,13,4 25,18,4 25,24,2 45,47,5 27,26,1 25,19", ",3 18,30,7 11,26,8 23,9,4 22,19,8 3,38,8 30,39,6 2", "2,7,3 17,30,9 8,31,8 46,25,3 29,38,3 46,45,7 32,18", ",2 22,23,6 22,17,1 0,8,5 13,18,6 13,9,8 33,38,7 32", ",21,2 29,12,9 42,32,1 49,3,3 23,5,5 5,39,8 0,44,8 ", "2,13,7 42,49,5 24,2,4 41,40,3 33,47,8 29,44,3 16,3", "6,8 33,2,8 44,6,7 45,11,4 47,42,2 19,45,4 49,23,2 ", "21,2,4 34,12,1 9,32,6 37,25,3 21,4,2 28,5,6 49,38,", "7 21,34,7 32,4,5 5,47,8 39,38,9 34,13,3 28,13,9 33", ",17,5 43,13,7 7,49,8 47,1,1 16,3,6 49,25,4 32,28,8", " 16,21,2 0,35,5 11,14,7 28,9,2 14,19,3 4,9,4 36,2,", "2 12,5,5 31,0,8 20,26,7 12,0,7 30,8,3 19,17,1 10,8", ",1 2,7,6 5,35,5 13,6,4 36,37,2 2,4,5 8,12,9 42,13", ",9 43,36,7 6,29,1 39,13,6 14,31,9 38,42,1 0,3,8 28", ",14,4 44,16,6 46,14,2 3,2,6 49,13,4 34,7,1 11,12,5"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int N = 50;
    vector<int> cities = {7, 0, 7, 3, 7, 0, 7, 0, 7, 3, 0, 7, 3, 0, 7, 3, 7, 3, 0, 7, 3, 0, 3, 7, 0, 3, 0, 7, 3, 0, 7, 3, 7, 0, 3, 0, 7, 0, 3, 0, 7, 3, 0, 3, 7, 3, 7, 0, 7, 0};
    vector<string> roads = {"11,18,6 6,11,3 29,8,6 46,38,8 22,9,3 21,13,2 23,31", ",5 32,35,1 44,47,7 44,49,1 27,21,8 4,38,2 37,20,2 ", "44,28,9 39,22,7 30,12,5 17,13,4 13,43,9 35,26,9 8,", "45,6 47,28,7 31,24,4 34,15,9 34,25,3 30,32,2 34,43", ",9 18,39,8 29,35,7 21,15,7 30,29,1 5,47,4 25,37,2 ", "18,13,2 27,41,5 22,1,5 25,18,4 8,19,1 6,25,5 8,42,", "4 26,32,1 10,48,9 43,6,1 22,15,8 29,45,2 37,11,2 3", "6,19,2 19,12,6 16,32,5 39,13,3 35,12,8 13,37,4 4,2", "3,5 37,1,3 27,20,2 29,40,7 6,18,3 34,17,2 43,21,3", " 25,22,1 1,18,6 22,18,1 35,33,1 18,37,6 11,34,1 30", ",33,1 39,17,2 8,12,7 27,17,4 35,16,4 49,10,7 28,23", ",3 41,43,1 41,39,1 33,26,9 39,27,4 11,39,4 35,40,9", " 40,19,3 2,38,8 39,9,9 6,22,7 5,23,9 43,37,2 27,25", ",8 12,29,5 22,20,9 20,17,5 49,5,1 42,29,9 24,5,5 2", "9,32,8 6,21,6 19,42,1 2,10,3 21,34,2 28,10,5 4,47,", "8 19,35,8 8,35,7 1,17,8 6,13,1 15,41,9 20,", "13,8 42,14,9 27,43,8 17,9,2 43,39,7 25,17,4 34,37,", "8 16,36,1 27,9,9 46,10,4 40,16,3 36,42,3 34,1,8 8,", "30,1 29,33,2 46,44,6 20,1,9 46,28,1 9,13,1 1,39,5 ", "28,5,4 1,15,1 34,6,4 14,40,3 23,48,3 2,31,6 16,14,", "5 46,47,4 5,10,5 40,33,3 15,27,3 26,30,8 1,25,1 42", ",12,3 28,2,7 1,11,3 13,1,7 31,44,4 43,25,7 36,40,5", " 22,41,2 32,8,5 36,35,1 14,33,2 2,44,8 49,23,6 23,", "2,2 17,22,1 32,42,2 10,23,7 0,7,4 34,9,8 3,0,3 46,", "48,5 20,39,4 21,37,7 21,41,8 17,6,5 48,4,1 21,17,7", " 2,49,5 10,44,1 30,42,1 45,12,8 13,15,6 33,36,7 40", ",42,6 26,16,3 32,45,9 30,19,9 32,40,3 30,16,8 1,41", ",1 25,41,8 14,19,4 6,20,2 22,13,8 27,1,5 38,48,9 4", "0,30,9 25,15,1 43,15,2 27,13,3 26,40,3 45,16,3 34,", "27,1 45,26,4 25,21,4 29,16,6 49,46,6 43,22,7 36,29", ",8 20,43,1 11,15,5 11,43,6 43,17,4 21,9,3 5,2,7 31", ",47,4 41,34,3 45,14,7 23,44,9 9,37,6 22,27,4 21,39", ",6 41,17,8 7,3,7 15,17,8 34,13,2 43,1,7 29,26,6 25", ",13,4 8,40,6 28,48,9 6,9,3 6,15,6 37,6,6 11,22,5 4", "1,20,3 43,18,1 10,47,9 24,38,1 14,12,4 47,24,3 13,", "41,3 36,8,7 1,6,8 11,17,9 26,12,7 1,9,9 11,9,1 27,", "11,2 32,19,7 15,37,1 5,46,3 21,11,3 5,44,2 19,45,6", " 19,16,2 21,18,7 46,2,8 45,30,1 2,4,6 14,8,9 20,18", ",6 33,16,7 9,15,5 9,43,5 37,17,3 42,45,6 18,9,5 21", ",20,6 17,18,5 32,36,7 37,41,2 25,39,2 45,33,8 44,2", "4,6 45,36,4 20,9,4 6,27,5 35,45,4 16,12,6 24,28,6 ", "36,12,1 36,30,8 22,34,8 18,27,1 20,34,4 22,21,9 10", ",4,8 25,9,6 15,18,7 41,18,3 5,38,9 42,16,8 4,44,6 ", "8,26,9 19,29,2 25,11,1 14,36,1 29,14,9 13,11,2 11,", "20,4 23,38,5 47,23,4 4,46,6 1,21,1 33,19,8 39,34,9", " 40,12,2 38,28,5 14,30,4 32,12,8 27,37,6 15,20,7 3", "2,14,4 46,24,7 9,41,7 36,26,1 48,5,5 26,42,5 33,42", ",9 14,26,5 41,11,3 30,35,8 6,39,3 8,33,3 33,12,8 1", "6,8,6 37,39,3 44,38,9 32,33,2 22,37,2 45,40,6 39,1", "5,1 26,19,1 25,20,3 41,6,7 34,18,3 14,35,8 35,42,2"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 117;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int N = 50;
    vector<int> cities = {12, 44, 12, 44, 12, 44, 12, 44, 7, 44, 7, 12, 44, 12, 44, 7, 44, 7, 44, 12, 44, 7, 12, 44, 12, 44, 7, 44, 12, 44, 12, 44, 12, 7, 12, 7, 12, 7, 12, 7, 44, 7, 12, 7, 12, 44, 7, 44, 12, 7};
    vector<string> roads = {"43,41,2 31,9,3 8,34,1 39,46,3 ", "30,23,4 3,9,7 4,21,7 22,24,8 4,3", "3,6 39,42,6 32,42,1 42,21", ",5 33,15,9 18,27,4 15,16,6 3,30,4 4", "8,32,3 17,13,9 9,13,9 34,25,5", " 16,6,2 42,48,7 23,31,1 19,4,8", " 18,38,1 24,29,3 6,42,1 6,19,5 9", ",11,7 32,21,7 33,48,4 39,16,", "7 0,47,7 16,21,6 31,3,5 40,38,5 31,", "17,9 36,24,2 2,35,5 7,44,9 37,45,6 25,", "18,3 41,2,8 16,19,2 39,21,6 25,", "45,8 20,26,4 34,40,5 33,", "42,2 0,28,2 1,35,5 15,19,7 ", "33,32,2 14,32,9 33,16,4 8,25,6 14,42,", "1 45,38,1 21,14,1 6,48,4 32,39,", "8 37,38,2 28,47,3 32,46,1 28,5,9 39,19", ",8 19,46,9 15,4,1 25,40,4 ", "41,35,5 33,19,4 6,39,1 38,8,9 27,45,", "8 4,6,4 34,26,4 48,", "39,6 37,40,7 27,8,2 40,27,9 23,11,", "9 45,34,7 40,18,8 30,13,1 39,33", ",6 15,42,4 24,10,8 15,48,4 38", ",27,3 21,15,9 8,26,7 22,36,5 23,1", "3,5 49,36,9 18,20,5 34,27,1 3,23,1 2", "9,22,6 46,21,7 1,41,5 38,2", "6,5 26,25,1 46,42,7 27,37,6 25,20", ",3 29,36,8 15,6,1 4,39,1 17,30", ",2 15,46,1 40,20,8 16,48,3 19,32,", "1 48,14,6 13,3,2 8,40,5 14,46", ",6 21,19,5 30,31,7 4,32,1 15,39,1 ", "25,37,6 31,13,7 18,8,8 20,45,", "3 10,22,1 14,6,4 49,24,6 3,11,2 37,34,2 11,30,4", " 2,1,8 1,43,5 44,12,2 23,9,3 0,5,1 ", "10,36,7 4,14,2 45,26,5 21,6,2 4", "0,26,5 20,27,1 25,38,3 33,6", ",6 38,34,7 45,40,7 49,22,7 32,15,7 10,49,2", " 17,23,6 34,20,8 4,16,7 42,19,9 49", ",29,9 35,43,6 42,16,9 45,18,6 1", "0,29,9 17,11,2 5,47,5 8,37,1 26,27,1 4", "6,48,6 32,6,7 17,3,6 2,43,", "2 25,27,7 48,21,1 46,33,3 20,38,6 ", "32,16,6 48,4,1 37,18,6 46,6,4", " 13,11,3 14,15,9 16,14,3 9,30", ",2 7,12,9 42,4,7 8,45,", "8 39,14,9 9,17,1 31,11,9 19,48,7 46,16,4", " 37,26,5 20,37,7 18,34,5 18,26,7 14", ",19,2 8,20,8 14,33,1 21,33,2 4,46,2"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int N = 50;
    vector<int> cities = {24, 36, 11, 20, 36, 11, 20, 36, 24, 40, 20, 24, 20, 11, 24, 20, 40, 20, 40, 24, 11, 40, 36, 24, 20, 36, 11, 24, 20, 24, 36, 24, 40, 24, 36, 20, 40, 36, 11, 24, 36, 20, 36, 40, 20, 40, 20, 11, 20, 11};
    vector<string> roads = {"10,31,7 4,44,6 32,19,5 42,29,1 48,6,8 2,46,7 15,44", ",8 10,26,6 12,17,4 26,34,6 10,30,3 39,46,2 0,18,7 ", "19,33,1 16,22,2 37,47,2 14,41,8 34,10,4 26,46,2 6,", "16,8 9,48,6 38,47,7 30,1,7 3,18,7 14,35,9 37,38,6 ", "42,6,6 39,9,5 14,19,8 22,47,4 28,27,4 38,31,9 0,6,", "5 30,2,3 22,30,2 15,49,8 28,39,2 28,10,8 34,38,7 3", "1,28,4 13,28,9 46,33,1 45,6,6 23,14,8 18,9,6 32,16", ",3 48,4,7 2,3,2 10,17,8 47,44,4 39,30,7 28,12,2 6,", "21,2 45,27,9 41,33,4 9,42,5 32,23,4 34,0,9 43,2,3 ", "14,27,1 9,19,7 1,31,2 31,29,7 23,38,2 21,48,8 27,4", "4,8 21,49,5 28,6,4 31,0,7 10,1,9 48,35,7 23,49,6 3", ",29,6 41,17,5 23,10,2 49,28,8 23,27,3 44,43,1 42,4", ",2 29,27,8 4,25,1 21,4,4 9,32,1 13,44,1 28,46,7 25", ",8,5 4,19,9 48,38,5 39,29,4 25,14,3 26,43,8 6,4,7 ", "32,44,1 47,46,5 16,37,2 27,34,8 46,21,9 48,14,2 2,", "6,7 15,12,2 38,6,6 49,10,6 0,35,7 42,32,9 39,18,7 ", "45,23,4 9,45,7 23,41,3 21,17,4 25,1,4 14,43,3 23,2", "1,5 20,40,8 32,27,8 22,9,3 12,30,2 25,29,1 49,0,8 ", "2,19,4 31,44,8 12,16,9 39,43,5 9,1,1 47,42,1 48,3,", "1 10,44,5 41,16,3 44,42,5 46,43,4 31,14,5 15,45,6 ", "43,37,7 12,8,9 13,29,9 16,26,1 7,4,7 47,5,5 41,37,", "4 6,44,5 18,4,7 15,31,3 3,6,2 6,7,8 15,8,4 31,23,8", " 41,12,2 6,30,6 12,49,1 10,43,4 34,19,5 33,22,6 46", ",1,4 23,19,9 15,30,1 23,29,4 20,24,8 42,45,2 40,36", ",6 8,37,2 36,11,7 48,44,9 25,13,4 47,25,2 45,49,8 ", "17,28,1 35,7,1 5,46,6 47,31,2 26,42,1 32,43,7 3,7,", "7 5,45,1 2,45,5 15,16,5 4,23,9 39,25,4 33,9,5 38,2", ",4 21,41,7 21,43,1 12,31,4 0,47,1 34,48,2 9,3,1 29", ",33,1 9,43,2 11,20,1 15,47,9 17,32,2 19,18,5 9,16,", "1 7,31,4 43,19,1 22,25,5 26,7,5 2,22,1 6,9,9 27,12", ",4 34,30,7 44,12,6 22,37,3 23,7,3 38,4,8 12,4,4 1,", "47,3 30,8,7 42,38,2 17,5,8 15,17,5 26,12,9 14,3,6 ", "10,22,8 33,8,7 34,9,8 45,32,8 48,18,3 12,13,3 31,3", ",3 26,19,7 27,26,8 15,22,6 16,17,2 40,11,9 48,47,5", " 49,22,8 32,26,3 16,34,4 23,22,3 1,39,9 39,26,9 35", ",15,7 18,2,8 13,35,3 29,16,2 35,27,8 15,19,4 8,46,", "4 39,6,2 44,22,8 19,10,2 21,18,5 29,18,7 0,44,1 19", ",38,2 21,19,7 6,14,3 8,41,9 42,21,8 24,40,7 23,26,", "9 16,27,2 27,7,5 43,33,9 37,14,4 49,6,4 43,27,7 37", ",42,8 48,43,8 16,0,6 22,1,7 47,17,1 41,4,5 7,22,8 ", "12,1,1 27,39,5 31,35,9 48,26,1 8,21,8 38,15,2 20,3", "6,1 31,18,1 46,42,9 2,16,3 13,45,7 41,32,8 3,43,5 ", "3,16,3 44,5,9 24,36,7 45,14,2 5,13,7 43,8,3 49,1,6", " 14,28,4 26,22,2 17,8,2 33,23,4 35,32,3 19,8,2 39,", "45,2 43,7,5 44,29,1 31,49,2 3,35,7 30,42,3 13,18,5", " 45,48,5 27,18,3 13,39,3 17,27,7 11,24,2 5,10,8 39", ",44,3 35,34,5 15,10,8 28,42,5 3,33,6 33,2,3 12,37,", "2 47,6,6 46,18,1 15,33,6 27,3,5 3,23,2 13,49,5 17,", "2,5 22,0,2 1,38,1 28,3,9 30,46,2 25,16,7 5,19,9 2,", "44,9 10,29,5 16,48,2 33,38,2 17,31,6 18,8,9 1,33,4"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int N = 50;
    vector<int> cities = {49, 35, 47, 49, 13, 24, 49, 47, 49, 13, 35, 24, 35, 24, 47, 24, 49, 35, 47, 49, 24, 13, 47, 13, 49, 35, 24, 47, 49, 35, 24, 47, 13, 49, 24, 13, 49, 13, 49, 35, 24, 35, 49, 35, 47, 24, 49, 24, 49, 24};
    vector<string> roads = {"0,4,7 37,30,7 38,8,8 2,20,7 43,45,4 34,25,2 17,23,", "1 16,40,9 34,11,4 1,31,2 43,31,7 9,26,5 29,32,4 33", ",25,2 43,23,7 29,16,7 21,43,1 0,2,5 23,1,2", " 15,11,8 34,31,7 14,2,9 40,4,2 27,48,1 34,43,4 26,", "20,4 28,41,1 34,48,8 8,34,6 11,31,5 25,23,9 45,11,", "5 12,14,7 39,10,6 43,42,9 14,5,2 30,7,7 39,41,8 32", ",26,3 18,29,1 33,17,4 40,5,4 22,12,1 43,2", "5,6 38,11,3 38,25,2 40,2,1 2,44,8 33,38,8 2,29,2 1", "2,3,6 4,9,5 21,27,7 25,31,9 42,38,5 40,14,2 0,9,4 ", "45,21,1 19,9,3 2,12,7 42,1,6 28,7,5 36,43,2 11,25,", "2 34,38,1 27,43,1 19,4,6 5,0,3 22,9,3 15,42,9 9,14", ",4 8,36,1 21,36,3 20,16,7 11,23,5 17,34,9 19,12,9 ", "42,34,6 32,0,4 47,13,4 41,10,8 3,20,5 32,4", ",1 19,5,9 11,48,1 11,8,6 3,22,9 22,0,2 0,12,3 16,4", "4,8 27,31,1 14,26,9 11,27,2 1,38,2 21,33,3 3,19,1 ", "33,11,5 43,48,3 8,48,9 17,27,8 29,14,5 30,28,2 15,", "36,5 14,44,5 4,14,7 36,27,8 25,42,4 42,31,5 8,23", ",4 3,5,9 14,20,8 8,15,7 24,35,3 2,16,1 22,20,8 3,2", ",2 36,11,9 29,26,6 45,1,1 41,46,2 40,18,2 14,0,4", " 30,6,3 16,3,4 17,25,6 3,32,4 18,9,5 23,48,3 48,15", ",7 21,42,1 21,38,4 31,17,4 25,45,6 36,25,4 18,12,4", " 39,28,2 27,23,6 27,33,3 4,3,5 33,23,1 0,16,4 41,7", ",1 12,29,7 21,23,3 10,6,1 44,4,2 8,21,2 36,17,1 26", ",12,8 27,25,5 22,19,6 43,17,7 16,22,9 9,12,2 10,28", ",7 21,1,3 35,49,2 19,18,7 12,5,4 44,40,4 23,45,3 2", "9,40,6 31,36,6 14,3,8 5,29,9 16,26,5 42,33,3 29,22", ",5 6,39,7 37,6,8 18,4,2 5,22,4 38,15,4 37,41,3 40,", "22,3 0,26,3 24,13,6 45,36,1 44,9,2 39,7,5 12,", "20,1 31,8,1 25,21,7 43,11,2 38,23,8 12,40,3 26,18,", "3 32,40,1 30,41,7 15,17,8 25,8,3 16,9,3 4,12,5 18,", "44,2 7,6,8 37,39,8 21,17,5 0,18,1 9,2,3 1,36,1 27,", "8,1 45,48,3 45,27,2 38,31,8 2,19,1 25,15,7 33,48,7", " 12,32,2 36,42,9 20,29,3 8,17,3 34,21,8 34,27,8 34", ",36,7 48,1,5 34,15,3 12,16,4 47,49,5 1,15,2 15,43,", "1 30,10,2 26,5,7 0,29,6 32,19,3 8,33,3 17,11,9 18,", "3,4 28,6,2 8,1,6 46,37,6 34,45,2 44,20,9 36,33,5 1", "9,26,8 8,43,8 42,23,9 9,32,6 36,23,9 12,44,9 43,38", ",7 1,17,1 1,34,4 31,45,9 3,9,1 29,19,1 2,32,7 9,29", ",2 38,45,9 23,34,1 11,42,5 23,31,6 18,5,6 7,10,5 4", "8,21,2 33,1,1 3,44,9 0,44,5 34,33,6 24,49,9 31,33,", "4 8,45,4 11,1,8 13,35,6 38,17,9 14,18,5 20,9,3 2,5", ",4 40,9,1 22,2,5 11,21,6 39,46,4 17,48,9 15,31,2 4", "2,8,5 49,13,7 40,19,1 45,17,2 39,30,1 9,5,5 42,17,", "2 42,27,3 20,40,3 35,47,8 48,36,5 46,28,6 16,4,1 1", "8,20,2 32,18,8 46,30,5 16,19,1 22,14,3 16,14,4 1,2", "5,5 42,45,6 18,16,9 23,15,4 33,15,1 38,48,8 26,44,", "3 37,28,2 21,15,5 33,45,7 33,43,5 45,15,7 43,1,4 3", "7,7,9 38,27,5 6,41,4 31,21,2 10,46,6 10,37,5 31,4", "8,9 4,2,7 16,32,7 46,7,5 36,38,5 44,5,9 1,27,7 46,", "6,5 40,26,2 24,47,1 27,15,5 20,0,3 42,48,2 48,25,5"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int N = 50;
    vector<int> cities = {44, 39, 24, 44, 24, 44, 24, 44, 3, 44, 5, 24, 5, 39, 3, 39, 44, 24, 39, 24, 39, 24, 3, 44, 5, 39, 24, 44, 24, 39, 44, 24, 5, 24, 5, 44, 5, 44, 24, 5, 39, 3, 39, 44, 24, 39, 24, 5, 24, 3};
    vector<string> roads = {"2,14,6 13,14,2 41,35,5 49,29,2 35,48,2 37,3", "6,3 7,19,9 14,40,7 7,10,3 37,34,6 46,38,2 32,8,7 1", "8,23,7 8,29,9 3,5,8 6,15,3 27,34,4 27,46,5 5,24,4 ", "10,47,5 49,32,5 48,1,3 27,38,4 26,36,6 28,20,5 15,", "10,9 18,11,8 0,49,4 31,36,4 31,26,3 25,20,9 ", "21,2,5 32,4,4 18,14,1 46,31,1 18,21,8 11,13,6 18,1", "6,3 14,11,7 35,1,3 39,5,4 36,22,3 10,19,4 9,6,3 40", ",16,5 30,49,2 22,37,9 39,24,2 4,29,1 2,11,2 29,17,", "3 33,10,6 15,9,7 16,21,2 29,32,5 28,25,9 30,32,3 3", "3,6,6 17,30,1 2,13,6 23,11,2 3,44,8 31,22,8 39,44,", "8 31,37,1 36,46,8 34,46,8 33,9,2 40,11,2 11,2", "1,9 18,40,3 44,24,9 45,12,9 30,8,7 27,37,4 43,22,2", " 12,25,7 23,40,2 43,46,7 4,8,1 22,26,6 44,5,7 46,2", "6,2 36,38,7 12,28,9 9,19,7 30,0,9 32,17,6 43,27,2 ", "37,38,5 40,21,2 7,6,9 8,17,2 41,42,9 47,19,5 4,0,5", " 20,12,3 27,26,3 33,19,8 35,42,6 10,6,6 39,3,7 0,2", "9,4 13,18,8 43,36,6 26,38,1 27,36,3 34,36,9 18,2,", "8 48,41,4 17,4,5 7,47,8 4,49,7 42,48,5 26,43,4 13,", "16,9 38,43,1 41,1,1 19,15,2 19,6,2 3,24,6 7,33,3 4", "3,34,9 46,22,3 16,23,6 34,31,8 29,30,4 2,16,4 23,1", "3,9 15,7,2 43,31,4 23,2,6 1,42,8 30,4,2 28,4", "5,5 6,47,8 7,9,8 37,26,3 31,38,6 21,23,1 0,17,4 25", ",45,8 38,34,3 27,22,8 37,46,8 9,47,7 40,2,4 13,2", "1,9 8,0,9 14,21,8 15,33,8 17,49,2 33,47,2 13,40,2 ", "10,9,7 14,23,2 15,47,9 27,31,8 16,14,2 49,8,4 32,0", ",7 22,38,1 20,45,1 34,26,1 43,37,4 16,11,9 34,22,4"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int N = 50;
    vector<int> cities = {30, 35, 44, 41, 30, 44, 35, 30, 44, 35, 30, 35, 41, 16, 44, 35, 44, 30, 44, 41, 30, 41, 30, 41, 44, 41, 44, 16, 30, 35, 30, 16, 41, 16, 44, 16, 44, 35, 30, 41, 16, 41, 44, 35, 41, 44, 30, 35, 16, 30};
    vector<string> roads = {"27,0,8 41,30,4 47,0,4 4,45,9 3,7,6 8,32,5 15,34,9 ", "49,29,2 42,36,7 41,16,6 26,14,4 25,33,7 48,40,2 48", ",6,3 2,36,1 10,15,4 26,24,9 29,19,1 48,1,1 40,31,7", " 1,20,5 27,6,3 10,9,3 5,15,4 10,38,8 40,42,2 29,20", ",3 26,32,3 27,24,3 21,20,4 29,18,9 7,1,9 34,13,3 3", "8,36,4 43,31,6 32,31,8 8,4,6 16,35,1 2,5,9 2,9,5 2", ",6,3 23,15,6 13,22,7 48,45,5 46,7,4 42,22,4 1,13,4", " 15,9,7 46,0,5 6,45,5 14,21,4 25,21,8 22,11,6 32,4", "6,7 26,48,8 6,14,5 17,23,9 11,8,1 6,47,6 17,42,8 4", "0,12,6 5,49,3 12,29,9 1,10,8 47,32,3 20,23,2 13,49", ",4 33,15,1 0,3,1 38,26,3 47,4,9 26,27,4 27,22,8 36", ",27,8 32,22,7 47,3,5 29,37,2 24,21,8 11,7,4 13,2,8", " 41,35,4 28,29,2 12,8,3 44,41,3 23,18,6 1,40,7 29,", "46,2 20,13,7 25,19,8 22,15,2 28,12,4 28,4,6 9,17,5", " 49,37,1 0,19,8 33,36,7 39,7,7 19,1,1 20,45,3 ", "33,12,7 28,31,7 14,37,3 3,22,5 24,36,8 22,0,6 18,3", "3,6 23,37,6 3,39,5 1,2,4 0,32,3 38,24,1 6,0,7 29,3", "2,7 24,43,2 18,17,7 20,19,5 6,38,6 31,22,2 2,26,2 ", "31,47,8 24,31,6 29,4,1 7,49,4 37,4,2 26,29,2 5,33,", "6 8,20,4 5,32,6 43,1,4 37,6,3 24,19,7 24,8,9 21,48", ",8 13,6,4 10,17,9 11,10,3 9,33,6 23,19,6 26,33,6 9", ",36,1 39,4,7 32,18,2 15,24,7 7,31,9 40,43,6 38,19,", "7 14,15,9 42,3,7 38,23,2 45,40,1 49,6,5 15,13,5 ", "47,25,2 7,19,9 10,4,9 3,36,7 3,18,9 26,19,3 20,14,", "5 13,28,6 39,18,1 23,8,1 31,4,2 32,39,2 42,29,5 4,", "25,6 19,6,5 18,37,1 11,47,1 11,26,1 19,39,8 9,21,7", " 13,18,2 36,8,8 33,4,1 38,0,4 0,7,9 42,13,7 17,45,", "9 26,25,2 46,10,2 25,13,6 21,40,9 18,21,4 1,24,7 7", ",23,4 17,27,8 1,29,4 12,14,8 22,43,3 43,15,8 8,39,", "9 46,36,2 11,49,3 23,14,5 2,7,3 0,26,1 45,12,3 31,", "45,9 0,36,7 37,47,5 17,34,3 6,31,7 42,9,2 36,32,9 ", "2,37,1 5,47,5 25,32,3 37,38,1 47,2,2 19,31,4 8,34,", "7 1,18,8 28,43,4 14,1,6 25,27,1 24,39,9 21,46,8 24", ",18,2 49,9,3 45,10,3 40,4,1 45,36,2 9,8,6 25,43,2 ", "37,7,2 7,27,7 27,11,4 17,24,6 40,38,6 15,37,4 15,0", ",1 9,18,7 24,40,5 9,47,5 12,37,2 48,8,6 11,40,7 7,", "25,9 27,49,6 11,43,9 8,28,1 3,27,7 24,47,2 23,13,3", " 11,3,2 15,8,6 48,0,7 0,17,7 27,42,4 4,17,7 13,27,", "7 13,33,7 33,0,4 39,9,3 37,28,1 28,48,4 34,3,8 38,", "28,2 49,42,9 37,10,5 38,47,8 22,33,2 42,43,2 30,16", ",4 30,35,5 25,38,9 3,43,1 12,26,8 9,14,1 36,31,3 2", ",4,4 32,33,4 40,26,8 2,10,9 44,16,7 23,26,3 17,48,", "6 5,13,5 38,46,7 18,38,5 19,32,5 47,14,6 26,13,7 3", "4,29,6 43,6,5 21,13,8 10,19,1 39,49,6 25,5,5 6,36,", "9 20,34,8 32,17,6 36,11,1 38,11,5 45,15,5 42,46,4 ", "6,17,2 39,10,1 26,47,1 17,14,9 27,9,8 3,23,1 21,31", ",1 8,37,5 47,29,1 45,29,5 20,0,2 20,37,5 10,22,8 3", "8,1,3 44,30,9 33,31,7 21,7,7 12,20,2 44,35,3 9,20,", "7 37,46,8 2,18,7 26,39,7 38,21,6 17,13,9 34,42,5 7", ",45,5 42,10,7 9,45,2 29,36,4 24,5,6 46,5,5 21,17,7"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
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
    int N = 50;
    vector<int> cities = {18, 7, 34, 7, 18, 17, 18, 7, 18, 7, 17, 18, 34, 18, 17, 18, 7, 36, 7, 17, 7, 36, 34, 7, 18, 17, 7, 18, 36, 7, 34, 7, 18, 7, 17, 34, 18, 34, 18, 36, 18, 34, 7, 17, 7, 34, 17, 7, 18, 17};
    vector<string> roads = {"1,37,6 41,25,2 40,22,8 27,38,8 19,45,5 40,2,4 3,38", ",5 4,16,1 12,43,5 10,28,8 2,14,3 37,39,6 37,46,5 1", "5,30,5 9,32,8 45,40,8 26,2,5 25,15,2 13,8,4 26,42,", "5 41,13,2 32,43,1 48,25,3 3,27,7 3,0,1 29,1,5 15,8", ",4 16,48,1 6,42,7 47,41,8 15,35,3 40,32,1 21,33,7 ", "22,2,5 33,1,6 13,20,9 10,41,6 27,33,6 23,47,3 30,2", "0,8 39,21,7 34,17,6 28,24,4 13,24,3 23,10,2 39,1,8", " 15,41,2 28,13,8 42,31,6 12,26,6 19,40,5 11,33,4 1", "5,44,1 0,37,6 40,6,7 47,24,4 45,2,7 10,15,4 6,12,9", " 13,25,3 47,10,3 12,42,9 23,16,7 7,34,8 44,35,8 26", ",40,7 8,25,6 20,8,7 38,49,7 4,23,1 17,18,2 30,41,8", " 23,13,7 49,11,2 40,14,9 12,9,4 13,35,8 16,25,5 10", ",44,4 17,7,6 49,3,4 37,29,7 45,32,3 16,8,2 6,9,8 2", "4,41,1 9,26,5 14,9,4 4,15,8 49,0,1 36,7,4 19,22,9 ", "16,44,3 4,41,1 13,4,5 11,1,9 42,9,2 48,13,5 30,", "44,3 28,23,8 46,29,7 3,21,1 41,23,3 10,20,9 27,11,", "4 3,11,4 32,19,3 2,43,4 16,15,2 28,20,8 20,44,1 30", ",8,3 33,46,3 46,49,8 5,1,9 30,4,8 30,13,1 43,6,7 4", "4,13,8 35,10,1 32,6,3 23,30,2 47,30,1 37,27,6 48,2", "0,7 8,48,6 33,5,9 35,47,1 40,9,9 39,29,9 45,6,8 20", ",16,4 18,7,7 22,14,2 19,12,9 37,3,4 24,44,6 0,11,", "2 47,28,4 5,46,5 25,35,7 32,22,5 49,39,8 29,38,7 4", "0,12,1 21,37,7 38,37,9 33,3,6 2,31,8 38,1,4 38,39,", "7 4,48,7 4,10,3 6,31,4 11,21,6 19,6,4 45,42,4 39,5", ",8 28,41,2 24,20,6 43,14,6 23,8,6 9,43,6 31,12,4 4", "7,16,4 40,31,6 28,30,6 48,23,6 6,2,5 8,35,4 24,30,", "5 24,10,2 30,25,4 5,38,9 48,30,5 22,45,2 24,48,8 4", "8,10,8 18,36,2 29,27,2 23,24,5 38,21,6 35,28,2 15,", "24,5 41,20,6 14,19,9 19,31,1 45,12,5 27,5,8 35,24,", "1 13,15,5 36,34,9 16,13,4 38,0,3 25,44,1 11,37,2 4", "5,31,6 10,8,3 35,20,1 41,44,3 8,47,2 4,35,1 29,21,", "7 33,38,8 12,32,3 47,25,5 4,20,7 14,32,9 16,41,9 4", "9,27,2 4,44,7 25,4,2 31,43,4 43,19,4 21,0,6 22,31,", "9 11,29,4 0,27,5 48,47,3 5,0,6 12,14,8 15,48,5 11,", "38,4 0,33,8 29,5,7 41,48,2 45,14,2 12,2,4 37,33,2 ", "45,43,4 0,29,7 4,8,4 28,4,3 29,33,2 4,47,9 49,5,7 ", "40,43,8 37,5,2 21,27,7 2,32,3 20,15,6 22,6,1 10,13", ",4 2,19,8 20,25,7 22,42,2 18,34,6 48,44,6 32,26,4 ", "1,0,6 22,12,3 32,42,8 46,39,3 31,26,3 29,49,7 5,3,", "3 49,33,9 5,11,6 26,19,4 24,25,8 42,14,7 37,49,3 4", "6,38,8 8,44,8 42,2,1 46,1,1 14,31,5 35,30,1 46,21,", "4 8,24,1 21,49,8 25,23,2 26,43,5 46,27,6 39,3,4 32", ",31,9 35,41,6 19,42,3 28,48,2 40,42,2 21,5,9 0,39,", "6 47,13,4 29,3,7 0,46,4 27,1,3 28,8,1 6,14,7 21,1,", "8 20,47,3 19,9,8 26,45,3 44,23,9 9,2,5 1,49,4 28,1", "6,2 41,8,8 25,28,2 42,43,2 23,35,5 46,3,5 47,15,2 ", "3,1,4 26,22,9 39,27,9 9,22,2 35,16,3 25,10,2 39,11", ",4 36,17,8 14,26,6 10,30,8 44,28,2 30,16,4 9,31,9 ", "15,23,5 33,39,5 16,24,8 28,15,4 48,35,1 10,16,7 43", ",22,7 46,11,3 26,6,2 45,9,6 24,4,1 44,47,1 23,20,2"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
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
    int N = 50;
    vector<int> cities = {39, 25, 30, 39, 25, 39, 25, 48, 25, 39, 14, 39, 25, 14, 25, 48, 14, 48, 30, 14, 39, 25, 39, 14, 25, 48, 14, 30, 48, 39, 30, 39, 14, 25, 14, 30, 39, 30, 25, 14, 25, 30, 39, 25, 39, 48, 14, 39, 30, 39};
    vector<string> roads = {"49,38,6 45,46,8 49,32,4 29,0,6 11", ",5,5 26,11,3 22,28,6 20,0,3 2", "0,9,9 4,11,4 13,31,7 33,47,6 15,49,9 18,26,4", " 43,34,6 47,19,5 23,41,8 17,18,8 27", ",9,1 2,13,4 38,20,8 19,2,7 35", ",32,8 6,31,1 15,27,8 35,15,3", " 13,12,2 8,36,6 33,37,2 43,46,6 21", ",36,1 13,19,8 12,37,6 23,11,1 31,1", "9,1 17,3,8 3,18,7 4,2", "6,6 33,2,1 5,26,1 4,44,7 0,49,5 41,44,7 ", "41,18,9 27,1,5 49,29,7 0,1,7 22,16,7 ", "20,15,6 5,23,2 30,48,4 32,9,6", " 19,33,9 42,21,2 25,30,5 38,32,7", " 47,2,6 17,11,4 33,12,8 48,25,7 35,", "9,8 9,1,2 18,4,4 0,32,4 29,32,4 41", ",3,8 16,7,2 33,31,9 47,31,5 48,14,", "2 8,24,6 37,47,1 49,35,1 44,23,8 39", ",14,7 24,21,4 11,18,1 1,38,4 37,2,", "3 41,26,8 3,26,2 4,23,4 9,15,", "7 2,31,1 41,5,7 27,20,9 40,8,1 14", ",25,8 2,6,4 3,23,1 13,37,9 35,2", "9,2 17,4,3 38,0,3 17,26,4 4", "2,40,2 5,44,1 35,20,1 33,6,1", " 16,28,7 32,15,6 18,23,3 10,16,", "6 6,19,4 24,40,6 13,6,4 26,44,2 35,38,7 24,36,", "9 0,9,4 26,23,2 44,3,7 15,29,1 27,49,", "6 29,9,7 37,31,4 10,28,9 7,", "28,5 35,1,9 20,29,3 31,12,6 4,41,4 ", "15,1,2 35,0,4 24,42,2 17,23,", "8 20,49,4 10,22,8 12,19,7 4,3,4 1", "5,0,6 37,19,3 47,13,8 32,27,9 4,5", ",6 27,35,4 11,41,3 5,17,3 29,1,3", " 13,33,4 7,10,3 15,38,6 6,47", ",3 41,17,9 27,0,3 29,27,2 3,11,", "1 45,34,2 48,39,3 6,12,1 49,9,8 12,", "47,8 39,25,8 2,12,4 32,20,9 5,1", "8,9 7,22,2 1,32,2 11,44,7 1,20,7", " 1,49,9 3,5,6 8,42,9 14,3", "0,6 17,44,4 37,6,9 44,18,7 8,21,6 36,40,6 ", "29,38,2 40,21,5 43,45,1 27,38,9", " 34,46,2 36,42,5 30,39,6 9,38,6"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
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
    int N = 50;
    vector<int> cities = {13, 38, 32, 20, 38, 20, 1, 16, 20, 39, 16, 13, 38, 20, 16, 13, 38, 1, 32, 20, 21, 39, 32, 13, 16, 32, 18, 13, 21, 16, 38, 18, 1, 21, 1, 32, 39, 13, 39, 18, 1, 13, 20, 32, 21, 39, 38, 18, 38, 16};
    vector<string> roads = {"39,21,9 38,21,9 1,38,1 31,44,8 34,23,6 13,21,1 32,", "38,3 37,8,2 29,27,6 11,7,3 37,29,4 23,33,4 27,2,2 ", "1,18,4 37,4,3 17,11,9 31,49,3 32,20,5 47,33,8 35,4", "2,7 34,45,7 14,26,5 29,28,5 49,30,3 28,36,1 0,13,8", " 24,2,3 47,37,7 47,36,4 42,7,4 35,3,2 26,48,2 3,5,", "7 42,46,2 43,23,2 17,46,9 7,22,2 25,29,6 31,48,7 1", "6,20,1 5,49,2 3,6,7 43,9,9 10,14,5 25,10,4 8,31,9 ", "47,17,6 48,2,2 25,40,2 7,3,9 28,27,3 0,21,2 36,19,", "9 14,22,7 7,30,5 32,39,4 48,23,4 48,44,3 9,6,2 33,", "11,1 39,38,3 42,8,5 17,42,2 24,27,3 21,1,1 42,37,1", " 14,7,7 4,29,5 13,20,9 42,5,6 17,29,2 24,11,9 10,4", "2,7 15,9,9 49,33,1 1,13,8 12,6,8 25,49,3 34,11,7 1", "0,19,5 33,19,4 24,44,8 29,3,9 14,30,6 47,49,5 2,28", ",1 49,42,5 47,42,3 49,14,9 31,9,7 8,29,3 31,7,8 15", ",4,1 25,5,7 35,48,4 19,35,7 25,3,6 7,49,7 31,28,7 ", "15,7,4 33,31,2 11,10,2 38,13,9 8,4,5 46,27,9 29,5,", "1 25,14,4 23,10,6 33,27,7 43,4,1 43,46,8 2,29,1 ", "45,28,1 26,37,3 34,12,9 41,11,6 15,33,1 12,23,9 4,", "9,3 33,45,7 34,29,8 46,45,2 41,45,6 32,18,5 23,26,", "7 26,17,1 29,10,3 21,18,5 9,37,5 36,17,2 37,6,2 47", ",31,3 1,16,4 30,47,5 14,6,7 14,29,4 14,45,7 39,16,", "3 44,5,1 32,16,6 5,41,4 14,40,3 34,28,3 28,17,8 36", ",12,7 22,48,5 16,18,7 17,41,8 49,26,6 44,12,5 15,2", "2,1 31,12,7 40,24,9 36,8,3 19,14,5 15,10,5 19,2,2 ", "14,36,6 7,25,6 31,14,9 42,24,7 5,31,1 48,5,8 45,17", ",1 11,44,7 4,3,9 46,24,6 22,4,8 21,32,9 4,33,4 0,1", ",3 27,34,3 29,31,5 43,36,9 18,39,6 8,33,1 45,5,8 2", "3,9,8 11,43,5 24,25,2 11,22,6 37,33,1 8,23,7 37,30", ",9 49,44,9 19,22,9 5,37,8 16,38,9 17,19,2 47,35,2 ", "18,13,2 49,28,6 25,31,9 48,8,9 16,13,6 0,16,7 20,1", ",6 6,44,5 24,9,4 10,41,3 37,12,8 4,30,2 45,6,8 24,", "22,1 49,24,6 4,42,3 3,12,5 34,14,9 0,38,3 12,17,8 ", "31,34,4 2,25,8 9,19,4 34,10,5 29,30,5 8,41,2 26,10", ",5 41,29,5 27,8,4 48,42,3 19,29,3 15,29,6 46,22,1 ", "43,14,7 34,2,4 21,16,8 36,7,2 20,39,6 6,31,4 45,19", ",3 22,6,5 42,14,4 12,7,1 5,35,7 32,0,1 9,40,5 6,43", ",2 22,33,8 33,7,7 43,7,4 46,31,9 22,12,1 12,43,1 4", "5,8,3 9,33,9 48,46,2 47,9,4 4,47,5 10,9,8 39,13,2 ", "43,3,4 14,27,5 17,15,2 10,45,7 22,34,7 20,0,7 31,3", "0,4 31,19,1 37,22,3 26,47,8 6,27,1 22,10,9 47,11,3", " 42,40,3 47,44,1 22,9,5 11,5,5 1,32,9 4,19,7 46,35", ",8 17,10,7 36,22,3 19,8,1 2,3,6 20,21,7 49,3,2 48,", "47,6 34,43,7 36,3,3 41,34,6 41,49,8 46,23,1 28,3,3", " 46,36,1 3,42,1 43,31,2 5,15,4 49,45,7 15,14,9 36,", "40,9 18,20,5 46,4,3 27,17,1 29,22,9 46,15,2 10,36,", "9 2,26,3 32,13,8 24,8,7 39,0,5 30,45,3 4,10,7 8,28", ",5 9,30,9 12,19,7 3,19,8 49,15,1 29,33,4 11,26,3 2", "4,7,7 49,40,4 24,31,3 42,25,1 0,18,7 44,22,1 26,46", ",2 41,26,3 28,26,9 35,4,7 2,46,2 1,39,5 38,20,5 40", ",22,2 6,10,8 44,26,2 18,38,5 14,4,2 35,28,7 5,24,9"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 102;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int N = 50;
    vector<int> cities = {28, 30, 28, 36, 30, 21, 36, 41, 48, 30, 26, 13, 41, 21, 48, 21, 36, 44, 21, 48, 41, 36, 28, 36, 41, 13, 21, 36, 26, 30, 41, 36, 48, 13, 28, 21, 26, 48, 36, 48, 21, 48, 44, 48, 14, 48, 13, 30, 28, 13};
    vector<string> roads = {"20,10,7 17,9,6 20,15,6 45,43,4 18,0,5 1,", "38,6 20,25,8 41,26,2 6,0,5 2,8,5 3,38,6 29,3", "4,3 11,16,5 47,34,4 20,49,4 35,20,1 36,48,6 32,4,4", " 15,35,4 13,28,1 49,35,9 20,9,3 18,40,4 9,35,1 ", "42,1,7 3,37,3 4,3,2 11,37,6 46,2,8 35,10", ",6 18,15,3 7,35,7 24,37,2 9,6,7 24,42,6 26,48,", "5 6,15,4 18,35,7 47,19,6 46,8,1 35,25,6 3", "3,39,4 25,45,6 16,1,1 22,3,5 17,49,5 29,4", "7,2 46,27,7 32,11,7 13,48,7 21,28,6 40,15,3 44", ",28,8 18,25,4 6,17,4 31,4,9 31,32,9 48,44,9 7,17,5", " 42,4,2 0,40,8 26,28,2 0,9,9 45,40,7 44,36,2 40,6,", "7 14,41,7 9,7,5 2,34,4 33,2,3 36,41,9 3,42,", "9 38,11,6 22,11,1 8,27,8 40,43,7 45,17,1 17,40,7 1", "6,24,7 43,9,6 29,19,7 37,31,8 5,23,3 45,18,4 38,", "12,9 44,30,8 12,42,3 7,49,7 15,25,5 42,16,9 18,7", ",4 6,10,8 49,43,6 47,5,7 32,22,3 35,17,7 2", "9,46,5 0,35,2 38,31,7 28,48,2 43,10,7 23,19,1 47,4", "6,8 25,43,3 15,17,4 10,15,4 6,18,5 7,15,9 35,40,9", " 10,18,2 32,24,6 32,16,2 39,23,1 8,29,6 29,33,1 1", "5,49,1 24,12,8 39,5,2 33,5,1 49,9,7 22,24,7 18,4", "9,8 36,14,9 26,36,2 28,14,7 30,28,8 12,16,2 30,21,", "8 16,31,1 6,35,9 18,9,5 20,0,1 49,40,4 19,46,7 40,", "10,7 5,8,2 10,17,5 16,3,8 45,0,4 39,46,8 44,26,5 3", "7,1,4 11,42,9 26,30,6 7,40,5 7,20,2 26,13,2 11,24,", "7 23,2,6 17,25,4 5,29,7 15,0,6 22,12,6 21,26,1 24,", "1,9 10,25,6 19,27,2 21,36,4 1,11,5 16,37,7 25,9,8 ", "43,6,4 5,2,9 30,36,5 8,34,1 27,2,1 36,28,9 20,18,8", " 38,32,4 37,42,4 21,41,7 5,27,1 7,45,3 23,27,3 1", "4,21,3 32,37,3 46,33,1 8,33,2 2,19,3 46,23,1 ", "14,13,2 25,0,1 13,30,2 41,48,7 23,8,1 11,4,7 28,", "41,7 43,15,5 14,30,4 4,37,4 8,47,9 5,46,9 9,40,2 2", "3,47,9 18,17,2 11,31,5 6,25,3 6,20,9 25,40,6 38,42", ",4 38,16,6 49,10,3 15,9,2 1,4,7 39,27,9 29,", "2,9 24,4,9 8,19,3 27,34,3 38,24,1 25,49,7 43", ",20,6 31,42,6 17,0,5 25,7,5 32,1,5 ", "13,41,1 43,35,4 12,1,9 41,44,1 4,16,5 12,37,4 16,2", "2,3 40,20,8 43,0,8 27,47,8 45,35,5 18,43,2 26,14,2", " 9,45,4 14,44,1 23,29,9 4,22,7 48,21,1 38,22,8 3", ",11,2 32,42,4 27,33,6 12,11,9 31,22,8 49,0,3 27,29", ",1 33,23,1 49,45,1 39,2,5 8,39,2 33,19,9 ", "6,49,4 46,34,6 10,45,9 33,34,6 10,7,9 ", "41,30,2 6,7,3 0,10,7 3,31,1 7,43,6 12,4,5 17,43,9", " 20,45,9 36,13,4 0,7,3 1,3,9 19,34,6 31,12", ",2 19,5,7 22,42,5 12,32,9 19,39,8 34,39,2 47,33,6 ", "37,22,9 12,3,5 38,4,2 13,44,4 3,32", ",1 47,2,2 38,37,4 17,20,7 45,6,5 48,30,1 4", "5,15,3 39,47,5 5,34,8 22,1,5 24,31,2 23,34,2 3,24,", "8 1,31,9 39,29,8 21,44,7 14,48,8 13,21,5 9,10,3"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
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
    int N = 50;
    vector<int> cities = {31, 15, 26, 34, 49, 7, 45, 15, 49, 45, 0, 2, 45, 15, 49, 38, 26, 31, 15, 49, 0, 38, 0, 15, 26, 31, 0, 38, 31, 34, 31, 49, 34, 38, 26, 31, 49, 7, 45, 34, 49, 45, 34, 38, 0, 31, 15, 31, 38, 34};
    vector<string> roads = {"23,47,2 14,33,7 49,34,7 8,20,5 14,4,7 18,17,2 31,3", "4,2 15,38,5 24,37,4 25,33,9 45,34,9 8,1,4 40,10,2 ", "39,30,2 22,30,8 9,30,2 12,28,3 13,40,3 28,36,9 23,", "24,1 2,26,2 31,45,5 34,26,3 15,2,7 38,49,9 46,11,6", " 7,38,2 34,15,9 48,35,6 5,27,2 0,26,6 6,41,9", " 9,29,1 2,49,1 35,10,9 31,7,8 16,17,5 29,30,6 23,3", "2,5 45,0,6 5,37,4 0,15,8 48,9,4 21,42,3 46,3,", "2 22,48,4 37,44,6 12,36,2 38,31,6 36,47,9 29,48,3 ", "27,37,1 43,16,2 36,24,2 22,9,6 13,48,6 19,33,5", " 36,37,2 23,37,4 6,21,8 33,4,6 40,22,1 25,14,8 31,", "0,8 2,34,2 47,24,8 36,23,7 22,39,8 38,26,", "9 30,13,2 23,28,9 12,47,6 44,36,4 23,44,3 36,", "5,2 33,46,9 22,10,7 5,47,7 32,24,7 44,27,5 47,44,5", " 27,12,5 28,37,6 10,9,4 39,13,7 9,40,7 34,0,6 47,2", "7,8 32,44,5 19,25,4 44,5,6 3,14,5 35,40,3 12,2", "3,2 19,46,4 7,15,4 2,38,6 2,45,2 34,7,1 49,0,5 46,", "25,1 47,32,6 32,28,1 4,46,7 23,5,1 27,36,8 26,45,1", " 46,14,9 35,29,5 29,10,3 24,5,1 10,30,8 27,32,9 28", ",24,1 40,48,7 16,18,5 9,35,4 43,17,5 3,19,1 44,24,", "5 12,5,1 35,13,1 11,33,9 28,27,8 3,33,8 38,0,7 2,7", ",6 14,19,3 34,38,6 37,32,1 9,13,1 47,28", ",5 32,36,6 18,43,8 45,15,4 44,28,3 45,38,6 29,40,9", " 26,31,9 29,13,2 48,10,4 15,49,6 7,0,9 15,31,5 35,", "22,4 48,39,3 35,30,8 11,3,8 49,31,", "7 0,2,7 5,32,5 22,13,8 11,19,1 3,25,9 21,41,4 29,2", "2,5 15,26,2 7,26,6 39,9,7 40,30,1 20,1,6 24,27,1 3", "9,35,1 37,12,5 12,32,6 39,40,3 27,23,3 10,39,3 2", "9,39,7 4,19,1 25,11,6 7,49,2 11,14,8 30,48,3 4,25,", "4 49,45,3 4,11,1 41,42,2 12,44,5 2,31,4 47,37,9 3,", "4,4 13,10,1 45,7,6 42,6,7 26,49,1 28,5,5 24,12,9"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 116;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int N = 50;
    vector<int> cities = {30, 27, 4, 30, 31, 8, 1, 30, 31, 41, 12, 6, 31, 1, 6, 41, 31, 6, 4, 41, 6, 41, 4, 43, 31, 8, 41, 27, 6, 1, 43, 31, 27, 41, 4, 6, 4, 6, 31, 30, 43, 1, 43, 12, 1, 6, 1, 43, 4, 43};
    vector<string> roads = {"30,41,4 20,14,3 30,27,8 36,45,3 34,47,1 29,3,8 44,", "5,1 23,49,4 23,13,7 20,35,1 49,13,2 35,2,8 42,36,3", " 40,29,4 49,38,2 7,35,2 2,16,3 16,33,3 29,36,6 11,", "35,8 1,31,7 7,5,8 48,24,6 33,48,2 20,19,8 24,21,5 ", "31,30,7 29,15,1 44,37,5 19,24,3 17,2,4 6,43,5 26,2", "8,5 14,45,9 21,32,1 48,34,8 0,5,4 36,28,3 33,36,3 ", "16,28,7 13,28,6 35,18,2 5,3,1 47,48,8 37,19,8 6,30", ",6 46,19,6 42,39,8 5,15,7 14,28,3 14,3,6 22,9,2 9,", "14,2 29,13,8 24,35,4 33,34,4 20,48,4 2,9,6 3,48,8 ", "30,8,8 25,47,2 25,35,2 17,37,8 22,44,3 41,6,3 4,8,", "9 0,32,5 31,4,8 1,8,7 36,15,5 29,16,9 38,45,7 24,3", "8,3 7,38,5 38,46,8 39,34,1 20,49,6 49,40,5 24,7,7 ", "2,42,2 7,34,6 36,22,5 10,28,5 48,5,4 26,29,1 40,35", ",4 27,4,7 8,27,8 23,9,9 47,37,2 2,18,3 34,35,4 10,", "14,8 25,14,7 38,25,1 25,28,5 31,41,9 44,29,6 14,44", ",1 46,33,7 4,6,2 40,46,4 23,39,8 0,16,2 17,16,6 16", ",22,6 3,24,4 36,26,3 13,22,8 25,7,4 12,6,8 16,5,1 ", "34,15,5 10,19,2 45,2,8 17,39,8 11,16,3 13,33,4 19,", "32,2 25,39,6 3,21,8 3,16,3 35,38,9 29,2,5 28,46,5 ", "9,21,1 12,27,9 20,5,2 49,18,5 41,12,3 12,31,8 29,1", "1,9 45,35,4 42,18,6 37,11,8 3,39,2 37,29,7 5,35,3 ", "17,36,5 12,43,7 1,43,4 1,30,2 33,3,5 46,23,4 32,14", ",4 35,39,6 44,34,6 44,21,9 20,34,6 13,37,2 40,36,2", " 13,9,9 21,0,6 27,43,3 24,25,5 17,11,2 19,28,3 0,4", "0,4 20,25,5 0,20,5 5,47,3 7,2,3 14,37,5 15,11,3 32", ",7,3 18,46,3 40,38,5 2,24,6 45,39,4 0,17,3 21,3", "6,8 29,17,5 48,45,9 17,28,2 3,23,1 2,15,4 6,1,1 8,", "6,7 36,23,3 33,21,8 19,39,6 49,15,8 3,18,4 44,23,3", " 40,23,5 14,47,1 48,49,8 2,48,1 10,21,2 3,34,9 5,1", "1,2 38,5,1 22,49,1 27,6,4 32,20,5 42,10,6 0,37,7 3", "2,45,2 10,23,5 6,31,4 31,8,4 33,38,1 19,16,1 34,2,", "5 3,9,1 14,5,9 13,16,5 35,47,1 39,15,1 13,20,2 25,", "16,6 29,24,6 47,3,1 23,42,3 44,2,5 31,27,2 22,34,3", " 45,25,4 17,10,6 10,24,3 37,23,5 48,25,3 9,34,5 5,", "34,9 24,40,7 39,26,9 27,1,9 17,44,9 48,0,9 25,49,1", " 46,48,1 16,38,4 24,9,8 13,3,9 20,28,9 0,45,6 28,1", "5,1 15,17,2 9,5,6 14,49,6 26,35,3 8,12,8 29,38,3 2", "0,18,4 24,33,1 44,25,6 41,1,4 41,43,4 27,41,6 0,24", ",7 2,3,7 17,18,6 4,43,4 21,15,1 24,47,3 4,41,1", " 9,0,1 30,4,7 0,28,5 29,34,7 0,15,1 21,20,8 33,47,", "8 47,28,4 38,2,4 41,8,3 42,45,5 9,37,8 25,34,7 48,", "13,4 26,2,9 21,7,6 21,17,6 15,9,5 32,42,3 29,9,4 4", "7,22,3 45,10,1 22,28,5 46,21,4 43,8,2 28,40,3 12,3", "0,6 28,2,9 14,18,7 38,15,9 36,46,4 22,37,3 35,19,1", " 18,32,3 7,45,7 17,48,4 39,40,8 23,28,3 0,29,8 26,", "40,1 10,5,7 12,4,3 25,18,6 0,18,1 18,40,7 40,21,5 ", "21,16,2 22,2,2 46,15,6 11,19,8 2,10,7 28,33,7 9,16", ",3 25,40,4 43,31,2 21,38,2 36,49,8 35,22,7 33,44,2", " 38,0,3 32,37,5 37,45,3 13,25,4 29,49,8 11,39,6 30", ",43,8 4,1,8 1,12,8 22,42,3 11,25,2 38,11,4 47,18,1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
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
    int N = 50;
    vector<int> cities = {49, 5, 30, 20, 38, 48, 42, 48, 5, 20, 25, 5, 10, 25, 38, 5, 48, 12, 30, 25, 30, 5, 25, 42, 10, 42, 25, 12, 42, 25, 38, 42, 12, 48, 42, 30, 25, 38, 25, 30, 48, 30, 12, 42, 49, 38, 42, 30, 49, 48};
    vector<string> roads = {"6,31,3 0,2,8 46,39,8 44,19,8 6,36,1 40,8,7 46,22,6", " 48,49,9 31,11,8 39,47,6 40,22,2 17,37,2 6,2,6 44,", "8,7 47,44,8 0,43,5 29,19,5 4,2,8 16,47,1 18,11,7 3", "8,12,4 6,1,3 26,35,2 2,18,7 42,30,8 45,14,1 14,3", "7,4 48,25,9 0,4,1 0,18,3 28,35,9 2,23,9 28,47,7 26", ",47,8 16,29,2 23,13,9 47,8,1 27,15,4 11,4,8 5,48", ",1 31,43,5 11,13,6 19,39,1 31,2,1 9,17,7 37,41,9 2", ",32,2 35,21,9 17,33,3 32,15,3 19,28,5 7,23,7 46,8,", "8 2,11,6 27,1,5 30,20,6 45,3,8 9,3,6 40,16,7 49,20", ",6 9,34,1 7,4,3 32,36,3 43,27,3 35,22,2 13,4,1 31,", "7,1 31,13,8 39,44,4 40,19,5 32,18,4 27,31,4 20,48,", "5 42,20,9 46,29,8 18,7,4 26,29,2 18,43,8 22,28", ",6 1,2,8 4,1,6 44,26,6 44,16,7 7,6,2 11,24,7 28,29", ",9 24,32,6 16,21,2 26,22,3 24,13,6 12,10,3 38,42,3", " 41,33,2 18,4,8 18,13,9 11,15,7 10,48,8 42,10,1 23", ",6,3 13,32,1 11,27,3 11,0,2 35,19,7 23,36,9 17,3,3", " 26,28,7 20,38,6 25,12,8 16,35,5 45,34,1 8,19,7 46", ",35,4 13,7,4 43,13,7 8,22,4 33,34,9 34,17,6 38,48,", "3 25,5,2 18,15,6 40,26,1 38,10,5 10,25,2 22,4", "4,1 36,13,8 34,37,9 18,1,5 19,22,7 36,4,9 31,23,1 ", "45,33,2 31,24,3 32,6,7 43,11,9 32,7,4 30,38,2 15,4", "3,7 9,14,7 11,32,3 8,29,9 5,20,4 15,1,4 1,13,8 19,", "21,5 27,18,8 14,17,3 4,23,7 18,23,2 23,11,1 23,0", ",5 47,35,8 35,44,6 27,32,7 19,46,8 24,18,1 31,18,5", " 28,40,1 2,15,7 24,0,1 47,19,1 15,24,4 27,24,9 18,", "36,5 36,11,1 13,27,2 39,28,7 39,40,4 1,32,4 30,49,", "8 49,12,1 24,1,6 36,43,2 36,2,6 43,2,8 45,37,3 47,", "21,2 46,21,6 47,46,9 6,15,3 1,0,7 4,32,2 43,7,3 32", ",43,4 36,15,4 2,13,1 23,43,6 24,4,7 27,6,3 46,26,3", " 11,7,5 45,9,3 24,23,9 16,19,3 2,24,6 33,37,4 21,2", "2,7 14,34,6 28,46,7 39,22,5 12,30,8 26,21,2 ", "14,3,1 41,17,8 31,1,6 7,27,2 31,32,1 27,4,9 16,46,", "2 39,16,5 27,23,3 43,24,6 40,46,6 0,6,8 29,39,1 14", ",41,5 43,6,6 37,3,6 12,42,2 38,49,3 23,15,4 31,15,", "1 4,15,1 9,37,8 31,4,7 39,35,9 7,15,2 21,44,8 26,3", "9,8 36,27,5 29,21,3 15,13,7 5,42,8 7,36,4 35,29,2 ", "24,7,9 8,35,4 11,6,7 4,6,8 8,16,9 8,39,8 17,45,6 6", ",18,3 12,5,4 45,41,4 41,34,8 6,13,2 41,3,3 1,43,6 ", "25,49,1 42,48,6 8,21,3 28,8,8 16,26,7 10,49,5 0,13", ",1 10,30,6 29,22,6 11,1,3 28,21,7 38,5,9 0,27,7 36", ",0,4 7,0,6 21,40,3 41,9,8 24,36,6 22,47,4 49,5,5 4", "0,29,1 5,10,2 12,48,6 29,44,7 25,30,1 30,48,8 0,15", ",3 40,47,6 36,1,4 3,34,9 26,19,5 20,25,4 26,8,1 1,", "23,7 27,2,4 10,20,4 49,42,4 3,33,9 28,16,1 43,4,5 ", "12,20,1 35,40,7 25,38,1 21,39,2 30,5,7 23,32,6 44,", "28,5 33,9,4 46,44,5 32,0,9 14,33,7 29,47,2 31,36,9", " 2,7,5 40,44,9 24,6,7 1,7,3 0,31,8 16,22,9 25,42,3"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
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
    int N = 50;
    vector<int> cities = {4, 16, 2, 26, 16, 29, 24, 4, 26, 10, 16, 40, 2, 4, 2, 4, 8, 40, 29, 10, 29, 26, 4, 45, 10, 24, 2, 10, 24, 45, 26, 24, 10, 29, 4, 26, 8, 29, 26, 40, 45, 29, 24, 45, 29, 16, 29, 40, 2, 24};
    vector<string> roads = {"37,38,7 14,7,2 17,3,5 43,35,1 19,48,4 48,39,", "6 11,38,3 13,47,4 17,37,6 2,45,3 5,39,9 15,37", ",4 21,33,8 48,28,8 48,1,4 8,16,5 11,6,2", " 6,3,2 15,9,1 12,23,2 38,36,7 22,27,7 45,24", ",1 6,36,3 28,43,6 8,40,7 18,6,5 23,41,", "6 29,24,6 39,1,6 23,19,5 6,17,7 8,24,9 18,1", "7,8 45,26,1 12,28,7 46,5,", "5 40,26,5 27,30,4 27,25,1 25,30", ",2 23,47,7 8,45,5 39,47,8 5,47,7 24,2,", "8 10,8,2 46,1,9 10,4,7 48,49,6 2,40,8", " 39,49,9 29,8,8 47,41,9 35,41,3 ", "39,43,8 34,25,5 23,13,4 0,22,5 15,11,9 18,9", ",1 4,24,8 19,1,2 48,43,5 26,29,6 46", ",39,7 41,1,1 40,4,3 49,43,2 49,46", ",5 15,18,2 23,46,9 19,35,3 24,10,7 39,2", "8,2 41,13,5 36,18,4 11,36,1 16,24,8", " 20,14,1 12,46,2 12,13,8 47,1,5 5,12,9", " 44,14,9 34,0,6 11,17,9 41,48,1 11,3,2 ", "19,28,7 49,19,3 39,19,3 10,26,8", " 1,12,5 41,43,2 15,36,9 48,35,2 30,34,8 4,2,2 49", ",47,1 13,39,2 46,28,3 33,32,", "3 29,45,7 21,32,9 16,10,5 11,37,1 40,45,9 19", ",46,8 15,38,9 0,27,2 23,48,2 41", ",49,2 20,31,6 43,13,7 28,5,2 ", "46,48,3 22,30,6 23,5,6 47,12,7 1", "1,18,7 28,49,4 38,6,6 16,40,1 29,40,4 3", "7,9,8 28,41,7 18,3,5 39,12,7 5,48,3 24,40,2 ", "6,9,9 5,1,5 1,49,3 34,27,1 5,49,5 45,4,4 23,28,6 ", "19,12,4 23,49,7 19,47,7 34,22,1 23,35,8 38", ",17,9 12,41,1 44,20,2 13,1,9 2,16,5 1", "7,36,2 43,47,4 46,47,7 31,44,7 10,45,", "6 29,4,3 5,43,3 5,41,1 25,22,6 3,36,9 43", ",19,7 12,49,2 13,19,3 12,48,", "9 16,29,6 13,5,1 30,0,7 23,", "43,8 23,39,7 17,15,2 19,41,7 13,49,5 8", ",26,9 39,41,6 8,2,8 28,47,9 ", "39,35,6 26,24,3 18,37,8 19,5,8 13,28,9 48,1", "3,9 18,38,9 10,2,9 37,36,8 35,28,2 40", ",10,5 9,3,8 35,49,5 10,29,7 3,38,", "3 35,47,4 17,9,5 4,26,8 43,1,2 2,29,7 4", "6,35,5 47,48,1 12,35,4 31,14,4 46,41,4 35", ",1,5 7,20,5 0,25,8 4,8,4 45,16,3 2", "3,1,9 12,43,2 5,35,7 35,13,3 26,16,3 36,9,4 ", "2,26,1 7,44,7 46,43,1 37,6,8", " 16,4,8 3,37,7 13,46,4 38,9,9 1", "5,3,8 1,28,8 15,6,8 9,11,3 7,31,7"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
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
    int N = 50;
    vector<int> cities = {21, 4, 6, 45, 37, 22, 14, 11, 48, 15, 6, 37, 21, 37, 48, 37, 36, 1, 22, 11, 36, 21, 22, 45, 37, 45, 31, 6, 14, 31, 15, 45, 21, 22, 31, 6, 49, 45, 15, 48, 11, 22, 15, 45, 4, 11, 21, 45, 7, 49};
    vector<string> roads = {"49,31,1 47,42,3 0,10,2 16,0,5 15,49,6 48,", "11,9 48,22,9 13,25,3 27,17,4 22,4,2 21,37,4 37,", "7,7 31,6,7 26,34,3 33,46,7 43,28,3 9,25,9 39,23,9 ", "18,38,8 35,23,7 20,0,3 11,36,5 8,44,3 42,18,4 34,", "25,7 10,12,8 22,14,7 24,26,2 32,12,2 37,45,7 47,5,", "8 48,4,2 41,39,8 35,12,2 20,39,1 21,6,6 9,26,9 2,1", "9,7 37,6,1 47,9,1 40,8,8 36,6,4 22,31,3 18,40,3 7,", "49,2 7,1,4 44,34,6 14,4,5 47,18,8 14,37,2 3", "7,36,4 30,17,5 5,25,6 8,42,8 14,48,6 36,4,1 22,15,", "3 30,29,3 9,42,4 5,34,7 5,38,9 24,5,1 38,9,", "7 18,44,6 31,48,1 34,13,9 8,5,8 17,28,4 14,6,9 7,4", "5,8 22,7,2 44,42,4 10,3,5 43,29,3 6,4,4 41,", "3,5 37,4,9 1,45,3 41,12,3 47,40,4 20,35,6 19,", "46,6 8,24,6 41,16,1 0,12,8 48,7,8 35,32,5 10,32,7 ", "11,1,8 1,22,4 7,11,1 4,49,2 1,15,6 38,8,4 43,2,9 2", "1,15,8 28,30,4 10,23,7 1,49,9 10,41,2 24,18,6 27,2", ",1 20,3,1 48,21,8 43,27,6 30,27,1 26,40,4 7,36,1 3", "7,49,8 42,5,6 13,44,7 10,35,6 34,24,1 22,45,6 14,2", "1,9 8,25,5 19,27,7 7,21,4 25,38,7 27,28,6 36,21,1 ", "36,49,1 14,36,2 37,48,4 9,34,1 26,8,5 41,23,9 31,3", "7,4 42,24,9 16,10,1 4,45,6 29,46,7 8,18,3 8,9,7 4,", "15,9 13,24,5 33,2,3 42,34,9 48,6,3 4,31,6 43,30,4 ", "2,30,9 40,38,8 2,46,2 15,48,7 12,23,4 13,5,8 ", "16,39,9 9,18,7 11,14,3 40,13,5 6,1,5 45,6,8 33,30,", "9 48,49,9 31,36,4 13,42,4 32,16,4 11,22,6 47,26,2 ", "48,36,6 49,6,4 13,8,5 46,30,5 6,15,7 13,9,8 3", "2,39,3 40,9,3 46,43,3 32,3,9 10,20,2 18,13,8 ", "29,2,1 7,6,3 40,24,3 41,35,3 29,33,8 49,11,7 2", "8,33,5 49,45,3 21,1,2 15,36,7 17,29,8 12,20,2 13", ",38,2 40,25,8 31,45,7 18,5,7 43,19,9 41,32,4", " 42,40,8 44,9,7 26,25,6 26,38,1 0,41,7 19,33,5 47,", "44,8 42,25,7 42,26,6 8,34,5 28,2,1 46,17,1 40,5,4 ", "0,35,9 1,48,6 19,28,8 45,14,5 18,26,5 32,20,5 4,", "11,4 15,37,2 11,45,2 15,45,9 46,27,3 44,25,7 44,26", ",5 29,19,2 49,21,1 31,21,2 1,4,2 3,23,5 4,7,3 0,23", ",5 23,20,4 14,31,9 37,11,6 0,32,9 26,13,5 7,15,3 2", "5,47,8 17,2,7 25,24,6 28,46,5 36,1,3 31,11,4 33,43", ",1 35,16,9 6,22,7 3,12,3 16,12,8 47,24,5 40,34,9 3", "4,47,6 44,38,5 22,49,5 16,20,5 11,6,7 14,15,3 1,", "14,2 17,43,6 39,3,2 27,33,7 16,3,3 7,14,5 4", "7,38,1 33,17,4 35,39,7 31,15,5 7,31,7 45,48,8 1,31", ",5 0,39,4 24,44,1 49,14,3 0,3,1 21,4,6 41,20,4 28,", "29,5 19,30,6 22,37,2 36,22,9 47,8,7 45,36,3 39,10,", "2 44,40,3 18,34,7 11,21,1 11,15,2 38,42,1 23,16,5 ", "21,22,1 17,19,7 27,29,9 13,47,", "2 23,32,5 5,44,9 9,24,8 3,35,1 38,24,9 4", "5,21,5 38,34,3 18,25,6 5,26,3 9,5,5 12,39,5 1,37,8"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
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
    int N = 50;
    vector<int> cities = {20, 28, 4, 47, 28, 2, 40, 20, 12, 13, 15, 40, 31, 47, 35, 29, 13, 15, 29, 6, 12, 2, 29, 13, 4, 35, 13, 40, 13, 20, 13, 32, 35, 20, 31, 6, 15, 20, 32, 15, 31, 47, 4, 6, 33, 2, 32, 4, 15, 2};
    vector<string> roads = {"29,31,9 47,35,8 47,32,3 11,9,6 4", "7,33,9 9,24,7 3,45,5 42,3,5 3", "6,11,6 16,46,2 13,6,4 39,10,4 49,", "26,3 18,5,3 35,20,4 28,2,4 15,13,8", " 48,30,8 4,12,3 36,1,5 32,15,6 48,", "8,8 11,0,4 7,30,5 47,12,9 12,15,2 ", "48,7,6 10,14,4 32,20,3 14,42,1 16,19,8 4", "0,31,2 40,15,9 2,13,5 20,12,7 49", ",23,7 15,2,1 28,40,8 31,32,8 1", ",24,8 10,42,6 22,9,3 22,11", ",3 5,7,3 35,15,4 31,2,7 13,20,6 9", ",0,6 5,8,6 41,42,3 40,12,9 10,43", ",6 5,21,4 6,2,3 22,1,1 43,14,1 4,47,3 43", ",39,3 24,37,9 43,3,5 25,44,6 47,2", "0,7 6,40,8 42,45,8 40,2,9 33,32,6 30,21,1", " 47,31,9 26,38,6 28,32,8 23,38,2 ", "29,4,8 1,37,3 33,20,1 0,22,6 26,3", "4,8 5,30,8 4,31,9 28,13,2 4,13", ",4 23,34,8 30,18,9 31,12,6 40,29,8 ", "11,37,4 8,21,6 39,41,3 46,19,", "7 20,2,7 3,39,6 28,20,3 49,38,9 4,15,9 27,26,", "7 4,32,1 24,0,1 7,21,7 35,2,2 42,", "43,5 21,48,5 45,41,5 24,22,2 28,29,8", " 29,12,4 31,13,7 2,29,2 49,27,6 36", ",9,1 13,47,4 23,27,5 35,13,2 3,14,4 6,", "29,5 7,18,3 35,31,5 13,40,1 41,43,1", " 34,38,8 33,31,6 10,41,7 39,42,5 6,", "20,8 13,33,6 34,27,3 47,2", "9,2 9,37,5 6,35,7 25,17,4 33,", "2,1 41,3,1 13,29,4 32,6,4 32,", "35,1 12,28,1 37,0,7 47,6,1 32,1", "3,2 38,27,5 32,12,7 37,22,2 7,8,1 18,", "48,4 24,36,5 18,8,1 47,2,8 28,6,4 45,10,8 ", "36,22,8 33,29,7 11,24,8", " 1,0,4 23,26,5 40,32,8 6,4,9 40,35,1 32", ",2,4 31,28,4 2,12,7 1,11,8 28,15,4 32,", "29,2 4,35,7 44,17,3 31,6,8 2", "9,15,7 3,10,3 33,12,6 20,29,6 4", "0,47,9 9,1,6 15,47,8 0,36,3 47,28", ",4 33,35,6 33,4,1 35,28,1 43,45,4 39", ",14,1 20,4,8 37,36,7 20,40,7 29", ",35,3 2,4,6 33,40,7 15,33,3 45,14,", "2 12,13,6 6,15,6 31,20,9 ", "28,33,5 12,6,3 18,21,3 28,4,9 33,6,", "3 48,5,7 40,4,9 39,45,4 35,12,7 41,", "14,5 20,15,9 34,49,1 30,8,7 15,31,3"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
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
    int N = 50;
    vector<int> cities = {23, 38, 23, 38, 7, 24, 44, 8, 30, 0, 7, 30, 23, 42, 38, 6, 32, 6, 36, 10, 44, 10, 29, 24, 44, 6, 8, 29, 44, 36, 24, 6, 32, 38, 42, 35, 0, 36, 38, 29, 36, 35, 6, 44, 30, 38, 6, 10, 36, 38};
    vector<string> roads = {"17,43,1 32,10,5 37,48,6 39,41,5 17,11,5 29,8,2 39,", "21,2 20,40,9 26,25,3 39,43,4 13,27,9 7,38,4 17,45,", "9 13,45,3 13,48,4 35,32,9 40,33,5 20,37,6 39,34,4 ", "39,26,5 26,16,6 9,11,5 18,17,6 15,43,6 32,24,8 34,", "37,9 36,23,1 33,25,6 23,42,3 17,37,1 35,23,3 24,35", ",1 16,17,1 18,43,1 6,30,4 14,49,7 29,38,7 47,19,1 ", "22,17,8 0,29,9 8,42,6 4,45,7 36,44,4 28,1,3 43,22,", "6 24,30,7 40,3,4 49,21,2 35,7,7 27,28,5 14,17,5 45", ",18,1 14,25,3 42,30,3 9,13,5 23,7,3 40,14,8 43,5,3", " 36,8,3 33,43,4 31,47,7 5,31,5 3,12,4 44,0,6 24,7,", "5 39,17,3 6,42,3 38,30,3 5,45,9 6,8,6 45,48,2 27,1", "8,3 48,27,7 14,47,1 34,4,3 26,31,7 16,20,8 33,28,2", " 11,49,4 7,0,4 12,48,5 0,38,4 16,43,2 31,13,1 27,1", "6,9 45,14,7 2,1,5 2,19,1 36,35,1 40,31,1 24,8,2 32", ",23,9 19,31,6 37,19,4 33,37,9 3,43,9 47,48,7 14,2,", "3 46,15,9 11,1,5 43,49,9 7,6,2 16,37,4 23,10,8 12,", "5,1 21,1,1 32,44,2 5,9,9 20,45,6 39,14,9 35,38,6 4", "8,46,8 26,12,7 11,5,9 7,29,9 28,13,8 32,0,9 26,1,4", " 19,4,5 40,37,8 41,33,8 43,40,3 15,39,4 27,19,8 15", ",5,9 35,6,3 35,44,5 41,19,9 23,38,9 8,23,1 4,21,2 ", "39,37,8 35,0,6 36,38,9 2,9,4 17,47,1 13,49,6 44,6,", "5 49,34,9 19,5,6 28,41,3 45,16,2 6,29,3 18,48,3 7,", "10,2 18,26,5 27,20,7 33,16,3 32,42,6 31,11,4 29,24", ",2 29,44,4 39,11,6 12,47,8 46,49,4 32,38,9 29,36,7", " 14,15,3 34,22,6 49,5,3 43,27,5 11,12,1 37,14,4 10", ",42,8 17,27,5 4,39,7 0,42,5 41,45,1 4,5,3 4,27,8 5", ",47,9 40,16,2 24,36,8 24,10,9 45,2,2 49,40,5 33,12", ",3 21,27,1 25,39,4 46,16,1 1,41,8 15,1,9 12,28,2 8", ",0,8 22,14,6 9,1,2 26,11,1 36,0,8 44,8,5 46,25,3 3", "0,10,2 4,48,6 41,49,4 24,0,8 2,27,4 38,24,8 44,10,", "6 29,30,6 33,26,7 18,46,1 15,11,4 25,22,1 21,26,", "3 6,23,5 8,32,4 38,6,8 46,21,6 5,18,9 29,42,5 6,24", ",3 47,4,5 0,23,6 9,21,5 11,27,4 10,8,9 0,30,8 4,22", ",2 37,3,9 20,5,7 18,25,9 37,13,6 21,22,4 46,27,4 2", ",4,3 5,21,6 49,19,7 45,49,9 18,28,2 48,34,2 48,28,", "2 25,27,5 36,6,9 44,30,7 33,3,4 21,3,9 19,26,6 49,", "31,4 30,36,1 36,7,4 1,14,2 16,39,3 14,43,3 30,23,7", " 8,38,2 6,10,3 28,47,2 8,35,4 18,47,6 38,10,3 40,4", "6,6 30,8,3 7,42,6 49,28,7 44,23,4 34,13,8 33,15,7 ", "29,35,3 32,36,8 29,23,4 47,45,2 45,22,5 12,39,9 6,", "0,1 7,44,2 30,35,1 15,21,9 37,9,3 24,23,6 16,49,3 ", "20,41,8 10,29,3 39,27,5 28,17,9 24,42,4 18,37,4 7,", "30,6 2,31,4 22,46,1 2,37,3 38,42,4 17,15,5 36,42,1", " 47,37,7 31,43,1 28,22,6 38,44,7 24,44,9 28,34,3 3", "2,6,4 17,2,7 27,41,9 16,12,9 45,26,7 10,0,6 20,2,3", " 1,39,8 11,18,1 41,2,8 13,47,4 12,14,1 34,40,7 45,", "34,1 2,43,4 3,4,8 11,34,1 15,27,9 22,40,2 19,21,9 ", "31,45,7 39,22,9 20,1,5 19,45,1 44,42,3 4,31,3 7,8,", "4 21,43,8 15,28,2 14,16,1 11,4,9 10,36,8 32,29,8 7", ",32,2 4,9,6 10,35,9 42,35,7 32,30,4 47,46,9 49,9,1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 105;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int N = 50;
    vector<int> cities = {37, 43, 15, 27, 11, 22, 10, 24, 33, 39, 27, 16, 44, 24, 22, 10, 46, 27, 1, 15, 46, 39, 27, 24, 22, 16, 30, 46, 16, 1, 27, 44, 39, 30, 16, 44, 43, 15, 16, 22, 46, 39, 24, 39, 10, 43, 33, 44, 11, 37};
    vector<string> roads = {"21,35,7 46,27,5 49,25,9 3,38,3 11,24,4 24,33,8 44,", "24,9 26,38,5 34,2,9 28,6,8 16,44,7 21,32,8 29,41,9", " 43,33,1 11,37,5 42,34,5 19,42,6 37,24,7 35,5,", "8 49,31,7 37,44,5 5,47,5 30,10,1 1,11,7 ", "20,31,2 18,35,4 14,23,4 43,10,1 7,48", ",7 10,24,6 15,22,7 31,8,8 2,5,3 15,16,9 30,46", ",8 19,21,7 32,13,2 43,44,6 30,33,8 22,16,6 27,30,1", " 7,12,5 21,36,5 15,27,4 24,30,5 16,27,5 27,24,4 23", ",26,6 5,13,9 2,13,6 36,47,6 2,35,5 39,15,2 20,2", "5,4 36,4,7 25,12,7 37,27,9 46,37,1 46,43,5 42,4,1 ", "28,3,7 9,36,8 32,36,7 22,39,2 39,37,1 27,10,6 27,", "43,8 23,29,5 34,32,6 22,11,4 10,39,7 33,2", "7,7 8,48,9 47,2,7 29,3,6 32,2,5 39,43,1 19,47", ",6 12,49,5 45,48,1 6,0,7 28,14,5 29,0,6 22,27,6 27", ",39,9 42,2,3 11,44,3 16,33,7 38,14,8 13,18,9 30,16", ",4 20,45,4 38,29,2 1,15,3 25,8,1 20,49,9 14,26,2 1", ",46,6 16,11,5 19,13,7 40,31,5 3,41,7 48,31,8 9,5,2", " 34,5,3 8,45,1 23,3,5 25,31,1 15,11,1 6,14,", "6 6,38,3 37,22,9 18,5,1 17,0,2 41,6,2 ", "11,46,3 13,34,3 33,46,3 13,21,7 38,41,7 18,47,8 35", ",9,8 35,36,3 19,34,8 28,26,2 43,16,4 2,18,5 1", "3,47,7 20,48,5 44,1,5 32,47,6 23,41,7 0,26,7 47,2", "1,3 47,9,3 21,5,9 34,47,9 30,44,4 8,20,9 ", "36,13,2 40,25,1 22,44,8 43,11,6 1,16,5 3", "1,45,1 23,6,7 37,33,7 15,37,7 4,32,8 29,", "28,6 4,5,3 40,12,6 27,11,1 0,23,3 7,49,6", " 35,32,6 26,17,2 47,4,7 30,15,8 42,9,3 3", "2,18,6 21,2,9 33,11,8 13,35,7 2,19,5 24,46,2", " 40,45,9 25,45,2 20,12,2 9,18,6 9,13,2 15,33,", "9 34,4,5 48,49,1 15,46,7 35,4,8 22,46,4 3", "9,24,8 23,17,3 47,35,3 29,14,8 34,35,6 28,38,5 0,4", "1,5 34,36,4 16,39,2 48,40,3 22,24,4 38,17,9 0,28,5", " 49,8,3 4,2,3 35,42,7 6,29,8 30,11,1 7,25,7 16,2", "4,8 17,28,3 10,37,4 5,32,4 29,17,8 10,46,", "5 23,38,7 30,43,8 8,12,5 7,45,5 36,19,9 26,29,8 ", "11,10,9 7,8,3 1,37,1 44,27,4 40,20,1 10,15,7 12,48", ",7 20,7,4 10,33,8 2,36,1 16,46,9 3,6,4 43,15,2 12,", "45,3 36,42,4 26,3,9 31,12,6 4,13,9 21,34,", "3 30,37,5 10,22,2 19,35,7 39,11,2 44,10,5 44,33", ",4 24,15,7 0,38,5 44,39,2 39,46,5 41,28,2 6,26,8 1", ",22,5 24,43,4 18,42,9 19,18,8 40,49,4 17,6,3 37", ",43,8 25,48,3 18,21,1 19,32,5 1,24,2 1,30,5 37,1", "6,3 46,44,4 14,41,8 9,21,8 22,33,9 31,7,7 1", ",27,4 9,2,9 7,40,9 44,15,1 4,9,5 33,1", ",4 42,21,9 17,3,2 22,30,5 43,", "22,7 14,0,6 47,42,2 23,28,4 21,4,9 16,10,1 5,36", ",4 1,39,8 42,13,6 49,45,4 39,30,2 18,4,4 5,", "42,5 14,17,4 17,41,6 19,5,3 42,32,4 9,19,9 3,1", "4,7 0,3,4 34,18,3 36,18,9 43,1,2 9,3", "4,1 8,40,9 26,41,4 10,1,9 33,39,7 4,19,6 9,32,9"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
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
    int N = 50;
    vector<int> cities = {13, 21, 12, 27, 22, 26, 11, 24, 11, 27, 40, 8, 28, 40, 13, 21, 24, 25, 27, 40, 13, 11, 28, 26, 22, 24, 8, 40, 11, 25, 40, 13, 27, 8, 46, 8, 25, 8, 22, 27, 40, 12, 26, 21, 6, 46, 24, 13, 21, 11};
    vector<string> roads = {"36,23,5 27,46,9 48,47,9 35,37,9 34,41,1 8,46,7", " 46,21,2 34,47,2 27,40,2 2,1,7 12,11,7 13,4", "6,4 32,17,6 35,38,8 47,33,1 31,45,7 ", "8,21,6 9,47,4 28,11,4 28,44,5 38,14,", "5 8,11,5 13,44,7 47,41,8 22,12,2 11,13,1 40,12,6 4", "4,27,6 37,30,8 38,37,5 21,6,8 30,43,9 20,48,7 2", "6,24,2 26,40,5 22,40,8 34,31,1 47,20", ",3 40,46,5 14,30,5 35,14,8 6,12,3 7,16,7 15,4,5 46", ",26,1 28,26,8 0,42,2 19,49,7 ", "20,33,3 45,9,5 21,40,3 34,33,5 15,2,4 36", ",49,7 32,3,9 34,48,6 6,11,9 6,44,8 44,40,4 3", "1,33,5 22,6,5 12,24,8 22,11,9 8,2", "8,2 40,6,6 4,5,6 32,29,7 28,12,5 24,8,3 28,", "6,6 14,37,4 21,24,4 22,13,3 25,28,9 25,12,7 ", "21,11,8 29,10,1 26,6,9 44,25,5 17,3,1 8,6", ",6 45,41,6 40,13,8 46,12,5 18,39,2", " 21,12,5 48,31,5 26,25,2 9,48,6 13", ",21,7 33,48,1 7,0,4 47,31,2 42,7,9 25,27,", "2 46,6,9 25,22,4 6,27,2 25,11,6 41,31,2 40,28,", "4 28,21,6 12,8,9 45,48,1 33,45,3 26,12,", "9 36,18,4 22,44,6 20,31,3 16,42,3 ", "20,41,2 24,6,3 20,45,9 44,12,4 25,21", ",6 39,36,2 46,11,7 4,2,7 28,22,3 36,19,1 15", ",1,1 9,31,9 37,43,6 8,26,1 9,41,1 44,8,6 ", "44,26,9 32,10,2 25,13,2 9,33,5 25,24,4 28,46,5 6", ",25,9 22,24,2 1,5,6 13,24,9 39,49,1 14,", "43,5 46,44,9 18,23,5 43,35,4 27,24,8 ", "29,3,2 30,38,3 19,39,6 28,27,9 10,17,3 27,8,6", " 44,21,9 8,25,3 22,21,6 25,46,6 33,41,5 26,21,6 40", ",24,7 11,44,4 8,22,6 27,21,9 3,10,3 4,1,3 13,28,", "1 9,20,7 17,29,6 40,8,8 25,40,4 23,39,2 2", "7,12,6 49,18,3 28,24,7 11,27,9 26,13,6 45,34", ",5 27,22,3 44,24,3 26,22,3 13,6,9 8,13,", "7 27,26,3 34,9,3 2,5,4 11,24,", "3 12,13,8 45,47,3 46,24,1 15,5,6 27,13,", "9 34,20,7 11,26,4 49,23,5 0,16,7 41,48,1 23", ",19,5 19,18,4 30,35,4 46,22,8 38,43,6 40,11,8"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int N = 50;
    vector<int> cities = {11, 5, 40, 33, 0, 44, 40, 27, 9, 30, 37, 35, 5, 40, 9, 2, 44, 37, 30, 36, 40, 28, 2, 27, 29, 36, 14, 27, 11, 40, 29, 49, 41, 15, 33, 28, 41, 5, 49, 46, 33, 24, 14, 25, 9, 2, 27, 35, 41, 0};
    vector<string> roads = {"18,26,1 15,28,6 1,34,6 13,1,3 48,35,8 9,49,4 7,8,1", " 0,17,4 23,16,9 12,11,4 12,37,5 10,7,4 0,44,2 11,0", ",3 12,9,5 10,42,7 41,2,7 19,34,2 47,31,9 20,42,8 1", "3,31,7 33,49,5 49,17,2 32,7,9 6,8,8 21,26,9 7,42,6", " 26,42,5 0,9,1 6,32,4 21,47,1 48,9,7 31,45,1 43,20", ",4 46,5,3 35,14,6 14,5,9 37,46,4 14,24,7 1,19,1 16", ",21,8 39,42,4 32,26,4 41,30,7 13,19,5 11,36,9 7,19", ",5 34,22,6 10,34,5 35,24,8 31,16,7 16,4,8 43,39,7 ", "25,46,5 41,11,5 45,6,1 20,6,3 46,33,2 26,45,3 40", ",0,6 18,45,3 42,43,1 22,42,1 4,26,3 37,14,5 35,41,", "7 48,2,7 10,22,4 39,3,9 20,26,6 5,35,1 1,7,3 33,25", ",8 3,31,2 47,19,4 17,11,7 12,24,2 3,21,1 22,1,8 12", ",17,8 27,11,6 22,8,7 14,28,7 5,36,8 1,8,4 47,13,2 ", "3,6,3 7,45,5 13,6,6 4,8,7 23,10,4 31,8,1 35,37,8 2", ",0,5 22,4,2 42,6,8 34,13,9 1,45,4 34,45,6 27,48,7 ", "3,47,2 0,28,6 38,3,4 46,11,6 23,13,3 24,30,3 14,33", ",8 43,10,1 43,6,1 6,10,2 32,3,1 19,20,2 38,39,1 1,", "21,4 19,32,7 32,4,1 42,32,7 39,47,8 1,47,8 48,46,4", " 47,45,4 15,40,7 49,28,8 21,43,1 38,13,3 33,0,2 11", ",44,9 25,30,8 42,18,2 18,47,5 5,33,3 22,45,2 19,23", ",1 22,31,7 5,37,2 24,0,3 2,5,7 48,44,6 10,19,8 23,", "3,5 34,42,9 40,30,1 16,1,9 22,26,5 47,22,2 30,27,7", " 40,49,6 6,4,7 14,0,9 8,32,9 49,25,4 22,32,2 19,39", ",6 29,44,4 12,2,6 16,6,1 37,24,6 10,4,3 40,33,2 11", ",9,1 32,10,8 37,25,2 32,1,3 7,38,5 44,17,7 16,45,8", " 16,3,6 20,38,7 8,23,1 13,18,3 23,32,3 18,19,8 6,3", "1,8 43,1,1 21,7,7 34,38,3 37,49,9 5,29,1 20,16,6 2", ",28,5 44,46,8 45,4,2 41,28,7 20,7,8 42,31,8 23,20,", "3 10,3,1 20,22,3 29,49,6 20,39,2 40,27,7 16,18,7 3", "5,27,5 48,49,5 36,33,5 38,10,9 28,5,8 43,7,5 3,22,", "6 34,3,4 37,17,7 38,23,1 40,14,9 21,4,5 32,13,9 26", ",38,9 42,4,2 6,7,6 1,26,6 17,15,6 10,8,5 3,13,8 38", ",1,1 18,8,9 3,8,2 41,36,7 5,0,5 38,4,1 15,30,5 8,2", "1,3 41,40,1 23,26,1 32,38,5 22,21,5 2,24,4 20,32,9", " 39,23,8 39,18,8 40,36,1 18,32,6 37,27,7 1,31,9 43", ",4,6 15,49,1 47,4,1 29,14,1 29,28,3 20,18,6 37,15,", "9 14,48,6 19,3,9 43,47,3 9,41,7 18,34,1 6,18,3 29,", "37,6 29,12,5 2,14,3 14,17,2 1,23,9 12,14,8 33,27,6", " 8,20,6 31,43,2 42,38,7 4,34,9 13,21,9 47,20,2 45,", "20,3 39,21,8 34,39,3 31,38,5 23,22,6 44,30,5 4,19,", "5 38,8,9 15,48,2 26,3,4 13,45,8 24,36,4 7,18,4 46,", "35,5 10,21,2 37,2,7 16,39,8 33,37,7 20,10,7 11,24,", "1 23,21,4 4,31,7 46,29,8 19,45,7 7,39,1 33,24,3 44", ",40,9 29,40,6 25,11,5 38,18,4 24,46,2 45,39,5 9,15", ",1 33,17,9 48,36,4 22,39,2 26,31,2 27,46,8 18,10,9", " 7,16,2 49,11,7 26,13,3 20,3,9 41,14,5 34,32,6 34,", "26,7 40,25,8 37,36,9 24,25,5 22,18,8 42,8,9 1,39,5", " 46,14,5 16,26,8 49,36,8 13,7,3 29,2,7 7,47,1 25,4", "1,3 18,43,8 11,28,8 21,6,9 41,12,5 43,8,3 42,1,4 8", ",39,2 16,10,3 41,33,6 26,47,9 18,21,9 40,5,3 1,3,6"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 141;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int N = 50;
    vector<int> cities = {34, 15, 0, 29, 49, 20, 24, 7, 34, 49, 18, 0, 19, 1, 30, 19, 24, 45, 35, 15, 34, 31, 7, 22, 40, 4, 9, 23, 45, 7, 30, 29, 4, 19, 49, 4, 23, 22, 12, 47, 9, 15, 47, 23, 17, 28, 30, 23, 22, 23};
    vector<string> roads = {"15,35,2 46,25,6 31,0,9 7,29,8 ", "3,36,8 3,5,2 16,6,6 39,37,4 49,34,3 30,29,", "8 43,10,2 7,19,1 27,33,1 17,35,7 44,36,", "1 2,33,9 19,40,2 30,47,5 38,11,4 37,33,4 ", "0,18,6 29,49,6 23,13,2 1,40,1 2", "5,3,2 8,6,3 18,35,9 22,4,2 29,40,1 4,1,3", " 20,34,5 15,20,4 2,39,5 17,", "12,9 32,27,7 49,28,6 44,48,3 5,36,8 19,30,5 45,19,", "5 29,0,9 23,7,9 44,38,6 47,29", ",5 41,25,5 20,22,7 46,5,1 7,31,8 5,", "38,9 43,25,7 49,22,6 47,22,4 45,35,4 7,13", ",9 13,20,9 1,31,4 24,15,1 43", ",41,7 27,39,6 20,0,4 9,34,3 15,19,2 10,", "44,5 49,15,7 23,17,8 3,38,3 46,38,5 14,8,7 3", "2,37,1 26,16,8 43,3,1 1,18,8 25,48,2 27", ",37,4 16,42,7 48,10,3 19,31,7 1", "7,22,5 30,12,8 40,47,3 13,31,9 36,4", "3,1 0,49,8 36,41,1 43,11,5 32,39,6 1,15,5 2", "8,40,4 38,43,9 45,0,2 43,44,4 31,", "23,9 29,28,5 0,7,6 20,4,7 19,13,2 7,45,5 30", ",20,2 7,9,8 29,9,9 30,23,5 33,32,3 4,40,", "9 33,21,5 48,41,6 4,45,5 45,24,8 0,34,6 46,", "43,4 11,25,3 30,15,8 22,15,6 3,10,2 4", "7,13,3 12,15,5 41,3,9 10,38,2 16,8,4", " 22,40,6 34,22,5 48,38,4 11,36,4 12,47,4 23,12,", "9 23,35,6 47,1,8 30,49,7 5,48,4 7,30,6 4", "6,36,6 3,48,4 0,4,8 49,9,9 18,40,8 4,7,1 ", "14,16,7 7,40,7 25,38,4 24,19,7 ", "22,0,5 23,4,5 1,49,1 17,4,5 11,41,7 21,39,", "7 9,1,2 11,46,4 17,24,1 27,21,1 26,1", "4,7 13,49,6 40,34,9 26,42,7 46,48,3 30,9,5 ", "35,19,2 10,5,3 29,19,2 28,20", ",1 42,6,7 44,5,6 11,44,2 34,18,9 ", "5,25,3 48,11,9 27,2,4 17,19", ",1 20,9,2 37,21,9 34,12,4 19,23,3 34,31,3 33,", "39,8 44,25,4 5,41,8 34,29,4 29,1", "3,5 25,10,4 49,19,5 11,5,3", " 3,46,5 23,47,2 17,28,2 15,29,6 ", "48,43,6 12,22,9 19,28,7 2,21,8 49,7,4 6,26,9", " 12,9,8 19,12,7 46,44,3 24,9,4 10,1", "1,5 30,35,2 45,18,9 35,47,5 36,25,3", " 34,30,3 8,42,4 41,38,8 28,13,2 8,26,", "8 21,32,6 36,48,7 10,36,2 10,41,5 5,43,6 31,9", ",2 47,0,1 49,31,7 46,41,1 30,13,6 ", "49,18,3 18,7,6 41,44,2 42,14,6 38,36,2 15,34,3", " 22,18,2 17,45,9 44,3,8 2,37,6 1", "2,40,2 2,32,2 15,40,7 4,12,2 46,10,1 15,28,", "9 3,11,2 14,6,9 34,13,4"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 128;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    int N = 50;
    vector<int> cities = {45, 30, 28, 39, 32, 3, 12, 30, 32, 39, 36, 4, 18, 24, 30, 45, 7, 0, 20, 4, 11, 18, 7, 16, 11, 24, 30, 16, 7, 18, 2, 37, 4, 32, 10, 24, 37, 27, 7, 20, 18, 30, 10, 27, 7, 48, 19, 16, 30, 0};
    vector<string> roads = {"14,17,3 7,37,7 24,10,7 7,48,", "7 32,20,5 13,5,2 11,0,9 48,12,2 22,", "9,4 29,22,1 45,39,2 11,3,4 24,32,9 43,15", ",2 2,24,2 11,19,4 42,3,4 28,18,4 16,28,", "2 36,30,9 32,11,2 16,48,8 32,48,8 ", "19,12,6 36,32,6 45,3,4 24,37,7 2,", "8,4 49,46,5 30,32,9 2,19,6 45,7,3 ", "38,15,5 36,12,1 17,49,8 16,11,9", " 25,43,5 46,17,5 3,16,8 33,17", ",5 48,45,2 0,12,2 28,37,5 20,19", ",1 19,45,7 0,19,2 27,12,4", " 31,41,3 8,4,3 3,7,9 38,25,5 20,7,3", " 5,40,6 18,30,4 48,24,5 3,12", ",9 16,18,7 39,42,9 8,24,5 4,45,4", " 12,32,9 10,20,4 9,29,5 35,23,7 32,", "28,9 30,19,9 8,39,4 16,45,1 5,1,2", " 19,32,5 28,24,7 39,18,1 12,2,4 42,7,4 3", "7,32,7 46,14,7 47,29,3 45,36,6 10,7,2", " 24,42,2 4,39,2 42,27,3 20,42,7 25,", "15,3 19,8,4 26,17,8 36,1", "0,7 23,44,4 39,20,8 3,6,2 3,39,9 28,12,9 10,", "39,2 16,0,6 27,10,4 33,14,4 32", ",2,8 26,49,6 22,47,1 18,37,4", " 40,13,3 18,36,6 33,46,7 34,", "41,3 6,28,5 27,7,2 2,45,5 4,19,5 12,", "10,1 37,4,5 36,42,6 48,3,1 7", ",0,4 28,39,1 45,12,4 30,16,6", " 10,19,4 3,18,7 48,28,2 12,39,9 2,", "42,1 2,6,1 14,26,7 33,49,5 ", "2,10,1 6,36,7 14,49,4 8,0,3 21,35,1", " 39,16,4 12,6,3 4,2,7 28,45,9 10,45,6 ", "36,20,6 2,30,2 30,7,7", " 31,34,4 38,43,7 6,19,2 45,18,6 44,2", "1,7 19,24,2 36,28,8 26,46,", "4 0,10,6 10,16,1 36,19,", "1 8,30,1 23,21,3 36,8,6 ", "8,28,9 35,44,7 11,2,2 10,11,4 13", ",1,8 10,32,8 48,6,8 48", ",39,4 20,30,9 11,48,5 18,8,3 6,27,3 6,", "45,6 36,2,4 26,33,4 27,3", "0,1 40,1,3 9,47,6 24,4,7 24,16,9", " 48,10,7 4,27,5 42,45,5 4,42,6"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 126;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    int N = 50;
    vector<int> cities = {19, 49, 48, 15, 17, 15, 43, 49, 2, 16, 48, 31, 13, 0, 36, 46, 34, 49, 16, 22, 18, 37, 34, 16, 19, 22, 29, 2, 34, 13, 27, 34, 43, 23, 29, 37, 18, 23, 19, 22, 32, 17, 34, 23, 17, 23, 18, 34, 19, 16};
    vector<string> roads = {"44,4,2 22,0,2 0,2,4 22,37,5 9,14,6 0,46,2 15,13,9 ", "41,38,2 16,23,1 17,7,6 37,15,2 32,15,6 43,32,7 14,", "35,8 25,18,2 17,23,1 0,36,8 19,40,9 17,43,2 11,20,", "8 6,15,7 25,36,1 35,9,4 0,6,9 22,25,6 0,15,9 46,37", ",5 35,8,4 49,18,7 49,46,9 47,28,6 47,33,1 32,6,5 3", ",30,8 13,7,8 49,7,9 37,25,3 36,13,3 48,17,7 32,18,", "5 30,41,1 21,11,3 37,13,1 28,26,8 45,11,4 19,22,9 ", "19,46,8 32,29,7 37,23,2 37,6,3 23,29,5 26,11,2 38,", "39,3 31,40,6 36,16,6 14,26,6 5,14,6 11,47,8 6,48,1", " 23,13,9 37,48,4 13,2,6 7,48,9 2,7,6 22,6,7 34,18,", "4 42,11,7 47,12,6 10,35,9 3,20,6 36,15,8 43", ",49,2 1,33,4 27,36,4 48,36,3 46,25,3 19,18,6 25,43", ",6 15,23,4 43,46,6 39,24,2 43,23,9 7,46,9 25,34,7 ", "41,26,3 43,34,4 2,43,6 19,32,4 2,40,8 31,2,7 11,30", ",8 25,7,6 19,36,4 46,23,9 29,40,8 16,22,9 25,23,4 ", "40,32,5 21,44,3 17,40,3 27,17,9 40,16,6 34,15,8 0,", "25,9 19,43,9 0,48,6 19,23,8 5,26,4 15,46,9 49,23,1", " 42,33,8 3,28,7 40,18,8 24,1,3 48,34,1 25,13,9 46,", "36,8 18,6,2 17,36,2 32,31,8 16,49,8 4,3,9 43,40,9 ", "18,31,3 22,15,4 32,2,8 17,34,4 16,48,3 7,29,6 0,29", ",2 29,13,9 22,7,7 2,37,1 46,32,6 30,9,9 34,40,3 25", ",49,3 34,22,8 13,22,4 34,31,3 46,40,2 36,23,5 37,3", "6,2 39,35,5 15,17,5 7,23,5 49,31,6 36,43,8 22,31,5", " 6,29,3 34,16,7 17,32,6 2,18,4 27,40,7 32,23,6 37,", "32,6 6,2,8 13,49,5 49,34,7 40,23,1 28,24,3 46,34,4", " 7,37,2 1,41,4 29,43,6 26,20,3 18,7,2 45,24,5 18,1", "6,1 2,19,5 36,34,6 16,27,2 15,43,2 47,24,3 7,0,9 3", "6,22,8 29,16,9 0,31,8 25,31,1 27,43,2 2,49,9 15,19", ",4 40,0,3 29,34,3 2,16,8 28,30,8 36,2,6 49,29,3 7,", "36,7 6,40,1 10,33,4 42,1,7 30,24,3 43,7,2 49,15,8 ", "18,48,3 19,37,7 31,43,5 19,34,4 29,36,6 34,0,4 31,", "29,3 27,31,1 13,48,3 49,19,4 18,0,3 32,49,4 43,6,4", " 29,17,2 49,40,1 12,14,1 27,0,3 17,22,6 22,27,3 48", ",23,2 31,46,4 18,27,4 19,31,6 49,6,3 10,41,9 35,26", ",5 38,3,1 49,36,1 17,37,3 2,17,5 23,27,2 14,1,5 49", ",0,3 29,15,5 43,18,8 18,37,3 49,27,4 6,16,8 25,19,", "1 22,40,7 18,29,8 15,40,5 19,7,6 18,13,8 46,22,2 9", ",44,1 13,34,6 14,42,3 45,1,8 0,23,9 37,0,9 25,17,8", " 16,31,8 46,17,1 35,4,4 7,15,6 19,13,3 48,49,5 18,", "17,1 25,16,7 22,32,9 6,19,8 46,13,9 16,19,1 48,22,", "3 46,27,6 43,48,4 25,6,9 25,27,3 29,19,3 43,37,1 3", "4,37,3 36,18,8 27,2,4 46,6,6 46,18,2 27,37,5 20,42", ",5 13,6,7 46,16,8 15,18,1 15,2,8 34,32,2 36,6,7 28", ",44,3 42,47,7 6,31,6 27,19,1 29,2,9 7,27,8 32,25,5", " 43,13,7 3,42,1 0,43,5 19,48,6 12,33,8 29,46,7 48,", "25,3 40,48,7 32,7,7 17,19,8 17,31,6 31,36,2 6,17,1", " 38,8,1 37,40,6 49,17,4 49,22,6 2,46,4 0,19,1 35,4", "2,6 48,27,4 25,2,9 33,45,6 48,32,6 37,49,3 48,15,9", " 34,2,9 13,0,3 15,31,7 27,13,7 16,37,8 28,41,3 17,", "13,8 5,39,3 32,0,4 46,48,9 45,35,4 29,37,4 44,11,5"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 88;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    int N = 50;
    vector<int> cities = {7, 32, 39, 7, 28, 45, 3, 36, 33, 7, 33, 39, 36, 30, 20, 30, 3, 2, 21, 16, 45, 36, 30, 28, 14, 37, 46, 45, 21, 30, 33, 26, 46, 10, 16, 9, 39, 21, 1, 28, 10, 33, 3, 7, 20, 26, 16, 7, 10, 26};
    vector<string> roads = {"9,45,3 13,6,8 28,41,5 15,19,3 46,20,5 14,8,1 8,9,3", " 30,9,5 21,2,4 46,45,9 29,31,8 39,10,1 32,37,4 36,", "2,1 46,28,4 26,27,5 23,31,6 3,30,9 7,27,8 42,12,8 ", "23,29,8 7,36,1 7,41,8 27,2,6 36,33,3 10,45,2 37,46", ",4 46,21,6 33,28,1 5,49,4 9,7,2 22,45,4 38,43,4 20", ",28,4 11,3,7 9,27,9 45,37,6 2,3,4 1,27,4 2,46,5 40", ",48,7 33,37,3 21,28,3 32,27,8 14,20,6 30,16,8 33,4", "6,9 36,16,5 7,16,8 1,46,1 20,8,1 39,7,8 32,16,5 46", ",11,9 19,24,8 37,2,5 39,2,8 10,16,9 25,38,6 2,7,2 ", "8,7,1 22,33,8 39,41,2 17,4,6 29,49,5 2,9,2 39,16,4", " 1,26,9 27,10,6 1,41,7 22,37,9 44,13,2 39,37,1 46,", "32,1 26,16,4 11,1,5 46,36,1 27,21,6 11,22,7 10,2,9", " 14,33,7 1,9,9 28,32,8 11,8,4 22,28,1 20,27,7 10,3", "3,1 48,35,5 28,3,5 20,22,3 45,8,1 27,22,2 36,27,8 ", "11,33,4 48,43,4 41,27,3 36,28,7 11,10,9 14,32,9 20", ",30,4 20,39,7 46,3,2 45,11,5 27,14,8 4,49,1 45,16,", "1 6,44,4 16,14,3 8,1,9 32,36,3 26,11,8 25,35,3 3,2", "6,2 10,36,6 7,1,2 30,11,8 33,1,2 39,26,9 10,32,3 2", "6,36,2 27,8,4 24,25,3 7,32,2 30,45,2 26,14,2 33,3,", "3 14,36,8 8,16,1 45,36,6 7,28,3 37,27,1 41,21,8 47", ",17,2 30,14,4 38,0,4 3,37,3 41,14,6 27,28,3 46,30,", "6 10,28,2 24,0,9 3,20,7 16,27,7 41,11,6 26,45,6 15", ",48,6 0,43,3 1,45,1 10,1,9 43,25,5 21,11,7 8,22,6 ", "32,22,7 12,17,1 0,15,9 37,21,1 32,11,1 21,16,2 41,", "2,6 25,19,2 7,21,1 36,22,1 2,8,9 45,28,6 11,2,3 10", ",46,9 39,27,9 32,39,5 1,3,8 36,1,8 1,2,9 20,7,4 7,", "45,5 11,7,1 3,7,2 1,14,9 10,30,9 25,0,9 30,27,6 5,", "29,7 33,8,4 20,2,4 9,37,4 22,30,6 9,36,2 34,40,6 3", ",21,5 1,30,3 26,33,4 15,35,2 24,48,7 5,47,3 21,22,", "2 7,14,9 30,36,2 7,46,4 34,0,6 8,39,4 30,2,5 8,36,", "1 47,42,9 8,37,4 30,21,5 36,41,4 45,32,5 46,8,9 40", ",25,4 22,39,5 26,2,2 36,39,6 26,28,1 40,43,4 20,36", ",9 41,10,2 21,26,8 22,46,2 35,0,9 1,22,5 5,17,2 41", ",33,6 11,39,6 27,45,9 7,22,5 10,21,9 14,10,6 11,20", ",4 18,44,6 31,47,5 3,36,9 20,10,4 14,2,7 10,8,3 14", ",3,8 40,15,7 9,32,7 21,33,9 32,26,2 17,23,4 39,9,2", " 49,17,1 2,22,8 21,39,6 29,42,9 27,46,9 41,8,2 39,", "14,5 26,22,2 9,26,8 14,11,5 47,23,4 3,16,6 21,9,8 ", "8,3,6 39,30,8 10,22,2 1,37,1 33,20,2 22,9,5 21,20,", "1 9,41,5 30,28,1 39,1,3 14,21,1 2,28,2 47,12,8 14,", "37,3 45,41,8 41,32,7 33,30,6 22,14,9 5,23,8 24,34,", "5 16,37,8 3,27,6 26,41,5 9,46,2 37,11,1 1,21,3 10,", "9,6 9,33,2 45,20,4 26,7,8 27,11,5 42,49,3 39,33,7 ", "13,18,6 43,24,9 16,1,2 38,40,6 29,12,1 20,26,8 46,", "26,2 28,37,9 18,6,5 10,3,5 3,41,1 16,11,7 28,8,8 2", "0,32,1 2,33,7 33,7,2 32,8,1 2,16,2 37,36,3 3,22,4 ", "28,9,5 14,46,9 45,2,4 41,37,2 31,5,8 33,32,9 48,38", ",6 11,36,7 16,22,6 37,7,9 33,16,3 16,46,9 8,26,2 3", "4,25,2 30,26,8 42,4,2 28,11,9 10,26,8 49,31,3 30,4", "1,2 19,43,5 22,41,6 16,41,7 4,31,7 43,15,6 20,16,1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    int N = 50;
    vector<int> cities = {43, 33, 20, 6, 11, 27, 33, 9, 32, 47, 40, 24, 9, 43, 27, 6, 20, 27, 11, 15, 44, 39, 40, 37, 9, 35, 11, 13, 6, 13, 47, 32, 26, 15, 37, 21, 26, 20, 26, 6, 0, 22, 15, 40, 44, 26, 44, 10, 6, 39};
    vector<string> roads = {"35,37,8 13,27,8 15,10,1 47,15,1 22,9,7 16,30,1 22,", "27,2 32,35,7 30,36,2 6,27,7 43,35,4 30,31,5 8,", "36,5 26,39,5 21,13,3 40,6,2 20,43,5 27,33,4 43,9,7", " 4,23,5 19,48,2 0,22,3 24,33,2 21,11,6 35,13,5 44,", "21,7 37,27,7 22,11,8 43,46,5 35,20,4 42,12,2 4", "8,41,1 20,33,2 43,0,4 43,39,6 44,32,4 44,47,4 44,0", ",9 39,21,6 45,3,9 20,24,1 7,12,1 23,9,8 11", ",6,9 40,43,4 26,0,4 26,9,4 20,47,6 6,33,8 43,6,8 1", "3,0,2 22,13,5 4,20,7 7,42,3 42,25,3 15,22,", "3 6,24,4 32,24,3 12,1,1 46,13,7 4,47,8 21,23,7 ", "21,20,3 11,15,8 32,21,2 21,46,5 15,35,9 21,43,", "8 33,15,8 6,46,1 15,21,9 22,6,7 37,0,4 27,43,4 45,", "41,5 39,46,6 39,35,8 44,13,8 46,40,8 6,15,4 19,45,", "4 12,49,3 23,37,7 22,23,9 4,21,2 23,6,4 25", ",7,7 31,8,6 21,0,7 0,47,9 4,32,4 32,0,1 20,40,8 27", ",9,4 26,47,8 8,30,4 46,15,8 4,39,7 46,44,4 24,4,2 ", "23,20,9 11,43,2 23,13,4 22,21,9 47,27,7 46,35,8 39", ",23,6 15,43,6 40,11,8 40,35,5 20,6,2 0,24,3 39", ",9,8 16,36,7 33,43,8 11,10,9 24,39,2 21,6,2 24,1", "1,5 17,8,5 47,24,9 35,21,2 26,24,2 2,38,8 17,30,7 ", "9,20,8 46,20,7 24,35,7 47,11,2 32,40,3 22,10,", "2 11,37,8 9,6,8 49,1,6 9,15,3 23,10,7 35,22,2 3", "5,11,4 46,26,6 37,15,4 6,32,2 37,26,9 9,47,3 42,1,", "8 27,44,2 16,31,9 23,24,6 15,26,5 46,9,8 25,1,4 45", ",48,6 21,24,2 32,15,5 25,12,4 10,20,3 6,26,4 39,37", ",2 7,49,3 47,39,2 6,0,5 35,26,4 10,33,3 6,37,1 4", "3,47,8 44,6,8 39,10,8 22,46,1 24,40,9 37,4,8 22,39", ",9 42,49,2 6,4,2 4,40,1 39,13,5 20,22,7 21,10,1", " 27,46,8 18,38,7 36,17,5 26,20,5 10,46,8 47,10,1 ", "9,11,8 20,32,2 15,0,6 5,29,8 26,44,6 43,10,3 ", "13,20,8 33,46,6 4,0,3 40,15,7 9,4,9 43,24,8 22,24,", "6 23,47,9 27,23,6 44,4,2 0,23,2 32,43,9 40", ",37,5 47,37,4 47,13,1 19,41,2 24,37,2 21,40,6 39,", "40,3 32,10,5 33,0,6 27,40,6 32,11,9 44,11,2 33,13,", "3 43,44,4 14,28,5 6,47,9 4,33,1 0,46,6 6,39,5 15,1", "3,3 39,15,6 21,27,2 43,26,8 35,47,5 0,9,6 44,37,2 ", "43,13,3 39,20,7 47,32,9 39,33,6 9,21,3 44,24,2 27,", "11,3 15,44,2 13,24,9 44,35,5 35,27,9 22,40,5 ", "27,0,3 7,1,2 44,23,4 11,26,2 46,32,3 31,36,6 26,23", ",4 0,39,4 13,37,5 39,44,8 40,33,2 43,23,9 8,16,3 2", "5,49,3 35,9,1 47,40,7 17,31,2 46,24,5 23,40,8 13,2", "6,3 23,11,4 0,20,9 11,46,5 6,35,3 17,16,", "5 47,33,4 47,21,2 11,20,7 3,41,8 35,33,9 13,40,9 2", "6,40,6 32,23,6 9,32,5 34,29,3 24,27,5 40,44,3 26", ",32,3 0,10,2 35,10,6 4,11,9 11,13,1 19,3,5 32,37,8", " 26,22,8 26,4,7 23,46,6 22,33,1 39,11,7 24,10,9 10", ",9,2 2,18,2 4,35,3 43,4,5 37,33,8 13,32,8 4,46,", "6 9,40,7 44,20,9 37,20,5 27,4,5 3,48,3 13,9,2 ", "37,10,2 9,24,4 43,37,9 10,6,5 22,4,8 4,10,3 34,5,5"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    int N = 50;
    vector<int> cities = {42, 2, 36, 22, 16, 20, 37, 20, 47, 37, 2, 10, 47, 15, 3, 10, 13, 4, 3, 39, 31, 11, 12, 42, 16, 7, 36, 21, 16, 12, 46, 45, 13, 15, 19, 18, 38, 44, 40, 32, 27, 28, 27, 10, 47, 16, 7, 10, 7, 11};
    vector<string> roads = {"1,38,6 35,21,7 11,16,7 29,", "0,1 36,12,5 25,6,7 15,49,4 19,36,2 6,", "7,1 1,15,6 32,13,3 15,19,2 45,20,3", " 20,36,7 29,30,1 37,39,3 13,4,7 19,", "28,1 26,43,7 13,24,6 ", "31,28,4 2,8,9 11,48,6 26,34,8 16,2", "0,6 21,39,5 9,38,6 17,41,2 4", "1,34,2 12,44,8 48,2,8 3", "7,7,6 26,33,1 44,2,4 33,", "41,5 45,10,3 6,31,4 35", ",15,4 39,49,4 22,38", ",2 31,35,8 26,29,3 34,33,", "2 16,31,7 27,31,6", " 37,25,9 5,28,9 0,30,5 30,33,", "3 44,31,8 18,45,2 1,9,4 1", "8,5,5 16,9,6 4,3,5 ", "42,31,8 28,24,2 42,2,7 7,28,4 5,6,", "3 30,17,6 3,47,3 44,40", ",8 43,14,1 43,17,1 47,46,8 14", ",0,6 13,19,2 14,17,1 7,10,5 ", "16,46,9 34,29,1 42,7,5 43", ",29,9 35,3,9 24,31,8 32,42,8 37", ",8,4 43,0,4 35,44,2 22,47,7 41,14,8 40,", "6,4 45,19,8 33,17,5 3,39,4 22,", "13,1 45,38,3 35,45,6 0,33,8 24,", "20,6 35,7,9 9,46,9 24,6,3 41,29,", "5 6,8,8 35,25,5 48,36,3 2", "3,32,3 38,31,3 48,37,2 28,4,4 5,12", ",6 36,31,5 43,41,8 12,45,4 3,3", "6,2 35,19,9 28,15,6 12,28,3 37,", "32,3 31,4,2 11,3,7 28,8,9 30", ",41,6 46,39,7 7,27,7 46,", "1,4 27,16,2 10,8,8 44,47,9", " 49,21,3 0,34,7 36,22,5 12,2", "4,2 13,44,5 0,26,6 7,9,4 31,", "1,7 26,30,8 34,30,3 35,22,9 17,29,", "5 35,37,5 17,26,1 46,44", ",4 10,35,9 27,47,2 40,35,5 14,", "30,7 25,4,6 4,5,3 17,34,5 10,18", ",7 37,27,1 34,43,2 31,", "21,5 0,17,2 26,41,5 34,14,9 0,", "41,5 23,36,1 7,24,7 32,15,8 14,33,6", " 15,47,1 23,38,8 14,26,4 4,", "45,2 1,42,1 5,", "46,5 49,4,7 33,43,7 43,30,9 29,33,3", " 39,40,1 21,38,7 31,7,5 23,", "21,8 45,2,7 40,45,6 39,31,8 7,18,4", " 27,9,2 25,46,9 14,29,4 18,3,7"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    int N = 50;
    vector<int> cities = {35, 1, 47, 43, 18, 14, 38, 42, 45, 23, 44, 10, 39, 28, 22, 30, 17, 40, 13, 1, 22, 14, 18, 49, 13, 39, 36, 38, 21, 41, 10, 2, 42, 8, 35, 46, 6, 22, 39, 2, 29, 18, 13, 17, 32, 18, 31, 49, 42, 43};
    vector<string> roads = {"28,25,5 17,45,8 21,15,6", " 30,10,6 0,36,7 4,44", ",1 35,41,2 49,47,7 27,20,9 22,", "44,1 40,38,6 4", "9,24,4 30,21,4 26,22,7 10,26,2 ", "6,23,4 35,47,3 12,33,9", " 40,4,6 16,15,4 42,41,5 ", "0,17,8 9,12,2 5,21,9 9,48,2 2,3", "2,6 2,47,5 17,40,2 21,47,4 19", ",20,1 17,32,8 47,8,2", " 40,18,1 35,38,4 2,30,9 ", "6,30,1 22,35,9 21", ",14,4 29,44", ",5 24,34,8 9,33,5 4", "0,28,1 14,45,6 23,2,7 1", "8,46,8 36,47,7 44,1,8 1", "6,5,3 18,44,6 34,5,9 26", ",4,5 13,2,1 0,22,1 6,1,2 ", "41,0,2 39,38,4 13,10,6 23,1", "3,8 29,16,2 11,25,2 14,30", ",1 31,4,1 30,17,5 18,43,4 38,2", "5,4 25,8,6 15,2,5 44,", "17,1 29,38,3 15,44,8 44", ",47,9 11,47,6 3,7,9 31,5,2 26,", "49,6 18,32,5 45,5,4 ", "16,41,1 35,17,9 38,45,7 ", "5,17,8 18,1", "5,5 2,40,5 37,3,4 41,1,3 ", "30,49,9 0,46,5 29,5,8 40,43,9 ", "16,34,9 30,29,7 18,26,4 3", "1,41,5 36,45,8 17,4,8 48,1", "2,1 22,2,1 21,25,4 5,42,1 45,", "29,6 8,13,2 29,13,7 31,2", "1,1 21,32,1 26,31,6 45,1", "8,4 16,14,9 24,13,9 41,46,2", " 22,49,1 49,44,9 5,32,3 25", ",32,2 28,47,2 19,27,9 23,34,8 2", "6,16,5 39,40,4 17,11,2 34,", "44,6 28,31,5 35,43,8 ", "22,41,9 13,41,1 43,0,7 43", ",16,4 21,35,8 36,44,4 4", "3,21,4 31,38,2 44,14,4 7", ",37,9 48,33,1 10,21,6 30,32,8", " 40,24,4 34,36,7 36,42,5", " 28,8,7 6,4,8 44,28,2 0,47,7"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 172;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    int N = 50;
    vector<int> cities = {13, 46, 19, 47, 24, 6, 25, 6, 5, 6, 45, 10, 6, 39, 18, 25, 34, 38, 18, 31, 15, 23, 4, 23, 48, 11, 46, 6, 13, 47, 7, 25, 29, 12, 8, 39, 4, 31, 30, 7, 23, 27, 16, 15, 19, 21, 25, 38, 10, 41};
    vector<string> roads = {"0,46,7 27,29,8 32,8,6 47,36,", "4 16,43,4 40,17,1 47,38,9 46,38,7 7", ",31,6 25,29,1 15,47,8 48,32,7 34,45,2 4,25", ",5 1,35,3 43,38,9 15,2,3 11,", "45,2 2,34,7 15,48,1 12,13,3 42,20,1 ", "38,45,5 27,37,7 30,36,9 29,34,3", " 11,31,6 39,41,7 43,21,5 25,21,8", " 17,43,2 15,19,9 37,13,6 46,12,", "4 14,1,1 29,18,1 43,15,9 17,4", ",3 16,24,3 26,40,2 7,30,2 25,46,1 26,4,", "5 38,29,5 27,31,3 16,2,1 46,31,6 41,", "28,3 17,37,7 21,15,9 41,5,5 6,2", "9,1 47,22,5 23,32,7 3,42,5 24,40,7", " 40,47,5 37,21,1 13,34,4 0,36,6 ", "26,21,1 5,22,1 19,0,7 21,48,4 48,12,2", " 11,16,5 37,40,6 0,24,3 27,11,6 30,4", ",5 43,11,1 30,0,3 36,11,9 11,1", "9,1 20,3,8 25,30,3 14,35,8 27,2,5 ", "37,39,4 38,15,8 36,41,5 46,48,3 ", "37,7,6 6,24,9 8,37,6 37,23,3 19,47,9 32,37,9 ", "37,10,9 27,39,6 39,11,3 43,5,1 24,7,6", " 10,5,2 29,41,6 36,31,4 30,", "37,3 16,5,3 27,36,6 15,23,3 22,37,3 2", "8,25,9 2,37,1 8,6,3 39,4,6 12", ",16,7 37,45,2 26,10,3 13,2", "7,3 34,21,6 29,17,9 44,49,3 ", "41,12,4 47,43,1 24,25,3 28,26,2 ", "4,27,8 40,21,2 0,26,1 40,39,5 ", "29,43,8 25,6,4 12,5,7 30,21,8 2", "4,11,8 47,48,9 8,30,4 46,6,9 0,38,8 34", ",0,2 45,36,6 43,48,3 43,30,5 ", "48,37,1 6,18,9 21,8,9 17,48,1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 180;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    int N = 50;
    vector<int> cities = {23, 17, 24, 6, 42, 33, 2, 46, 15, 4, 2, 32, 19, 24, 29, 23, 10, 42, 24, 21, 27, 9, 32, 15, 2, 33, 25, 20, 38, 34, 22, 12, 42, 0, 21, 32, 21, 9, 27, 22, 16, 17, 7, 22, 45, 36, 49, 4, 17, 10};
    vector<string> roads = {"4,12,7 12,9,1 45,48,2 7,5,8 34,35,1 3,30,3 19,11,9", " 7,9,2 39,14,4 11,17,5 3,34,9 47,24,5 7,27,2 48,47", ",4 9,18,3 4,16,8 47,23,1 24,23,2 47,22,4", " 27,38,9 33,47,1 30,1,9 30,43,8 16,29,1 38,34,4 25", ",30,8 2,48,5 49,48,7 7,10,6 24,38,2 31,8,5 2,42,", "9 48,22,9 7,16,8 30,22,8 48,23,5 25,19,1 3", "4,23,7 29,10,6 7,17,3 19,38,9 15,17,2 21,29,8 41,2", "6,7 6,43,7 21,15,9 18,11,2 29,19,6 32,10,4 8,26,7 ", "22,42,4 48,28,1 5,21,5 27,16,9 49,1,3 17,0,1 19,10", ",4 42,28,7 45,2,6 31,37,3 4,15,6 3,19,7 22,46,9 27", ",3,5 10,36,5 5,25,9 32,36,5 30,5,8 35,36,2 1", "2,2,4 24,36,4 45,25,4 7,36,3 45,43,4 33,23,7 20,46", ",7 47,12,3 33,27,7 4,9,1 26,31,9 28,16,3 17,29,7 3", "8,6,7 45,23,4 46,9,6 33,18,4 28,34,4 6,20,6 23", ",7,3 1,43,3 2,22,9 31,40,4 18,17,6 8,41,7 33,46,9 ", "6,16,2 34,32,1 27,20,7 48,46,8 28,7,4 21,16,8 18,1", "2,3 14,37,1 49,6,1 2,49,2 15,27,6 4,38,9 14,13,5 1", "0,24,3 44,14,6 36,28,6 23,9,3 4,2,9 19,24,8 10,4,1", " 5,47,8 33,15,9 29,34,5 41,40,9 5,29,1 9,32,3 6,29", ",5 11,47,7 39,37,1 30,24,5 49,46,6 38,29,7 18,25,5", " 47,7,3 6,15,6 3,2,2 44,39,9 25,43,7 32,24,5 46,38", ",4 7,34,7 47,3,1 27,18,5 26,14,2 15,18,5 2,32,9 4,", "22,6 47,17,2 22,43,4 12,42,7 41,13,6 40,14,", "3 41,31,1 44,40,1 1,7,1 7,48,7 49,28,5 9,49,1 44", ",8,9 28,21,4 31,14,9 35,12,4 0,21,2 28,23,5 45,49,", "4 43,48,6 35,46,4 25,0,6 25,47,5 38,12,7 0,1", "9,3 38,42,4 46,23,7 37,26,6 33,20,6 6,32,7 33,7,5 ", "38,7,4 10,18,1 18,28,6 7,32,7 48,32,9 17,34,7 27,1", "1,5 45,0,1 37,40,4 23,42,7 25,11,5 3,15,3 35,6,7", " 44,31,1 16,20,8 23,27,9 20,42,8 12,36,8 35,22,", "1 43,17,7 41,44,2 40,26,3 3,43,9 38,36,5 30,33,4 1", "9,6,2 36,33,3 30,45,9 40,39,8 32,47,4 38,22,2 9,47", ",5 13,39,3 37,13,5 11,33,6 23,19,4 1,6,3 13,8,2 34", ",10,4 23,25,2 17,21,1 23,49,9 13,26,2 24,17,1 36,3", ",5 21,45,9 30,18,3 30,28,8 24,4,5 8,37,9 ", "46,28,3 11,38,3 29,0,2 17,5,9 11,15,6 35", ",4,2 21,43,1 24,5,1 28,25,6 4,20,8 37,44,5 46,0,6 ", "41,39,6 36,45,5 28,45,5 0,33,1 42,35,9 22,16,1 ", "11,4,7 22,20,7 35,1,9 29,27,6 31,13,2 25,16,7 26,3", "9,9 4,21,4 5,0,9 41,37,9 20,24,8 27,17,6 30,11,1 6", ",12,5 20,45,5 10,9,7 18,4,8 21,49,5 21,9,3 16", ",5,3 7,46,6 32,46,1 25,2,8 17,38,2 49,25,8 25,48,4", " 0,28,4 14,8,9 0,16,4 6,25,3 39,31,5 7,25,4 32,22,", "9 42,24,7 2,23,8 13,44,9 3,24,1 32,19,6 28,32,4 45", ",47,2 1,11,2 34,43,1 1,33,7 49,12,3 40,8,4 ", "30,19,6 24,28,5 11,46,2 1,15,1 8,39,1 4", "2,10,2 46,4,1 14,41,8 9,5,8 25,1,9 11,12,8 36,6", ",1 22,45,7 22,7,7 24,46,3 30,32,2 45,9,5 1", "3,40,6 27,25,9 4,6,2 44,26,4 4,1,7 46,47,5 38,15,7"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 120;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    int N = 50;
    vector<int> cities = {7, 35, 5, 2, 42, 1, 39, 28, 8, 24, 33, 10, 1, 39, 34, 8, 12, 16, 10, 41, 12, 18, 6, 49, 16, 15, 12, 44, 37, 23, 4, 33, 7, 46, 34, 35, 47, 6, 10, 43, 30, 28, 42, 15, 13, 24, 29, 10, 43, 24};
    vector<string> roads = {"31,44,9 24,45,9 30,39,2 0,39,9 39,16,7 4,10,2 6,44", ",4 21,42,8 8,12,2 49,21,5 34,1,2 16,48,6 45", ",15,9 44,12,9 6,10,3 29,19,8 6,24,5 ", "46,49,5 44,46,8 23,12,4 4,16,3 10,0,1 35,28,6 30,5", ",3 10,49,1 42,36,5 48,7,4 0,35,9 36,7,5 44,23,8 42", ",30,1 10,36,4 4,45,7 8,0,3 43,30,7 0,4,4 48,2", "1,5 39,44,5 13,49,4 4,27,8 13,1,5", " 35,29,9 39,29,2 4,41,2 1,7,4 1,24,2 34,2", "9,2 35,46,5 21,10,1 7,28,1 42,13,2 24,10,4 34,4", "1,7 31,7,6 31,36,1 37,28,4 1,45,5 30,23,1 31,4", ",7 11,3,4 29,44,5 7,39,6 16,5,8 2,27,1 4", "3,4,5 14,0,4 33,13,5 19,9,1 30,47,5 12,31,", "2 38,26,1 46,39,5 13,36,1 14,33,4 27,35,1 33,46,4", " 34,43,1 44,2,4 29,12,5 7,34,6 5,12,4 47,33,6 21,3", "9,4 18,7,7 47,43,7 15,12,7 20,3,8 9,46,2 ", "44,45,6 18,41,2 30,7,8 12,1,9 9,41,8 34,12,", "8 32,20,9 47,1,1 36,43,8 41,1,9 31,8,5 23,36,", "8 2,21,5 14,4,8 16,36,2 30,36,7 14,18,2 41,13,", "8 27,19,4 15,18,4 16,15,2 14,6,8 13,23,7 46,5,5 29", ",37,5 35,9,1 15,28,2 33,37,3 34,36,2 41,", "44,8 41,14,6 8,24,6 0,7,3 36,14,3 21", ",47,1 37,9,9 27,43,9 3,22,6 15,36,8 23,6,", "9 35,5,1 47,42,3 31,1,7 27,49,7 5,0,9 11,22,2 46,2", "8,9 47,24,8 14,45,7 46,6,4 47,19,8 44,10", ",3 15,34,8 1,42,6 49,36,8 28,4,9", " 23,49,3 31,2,4 30,2,3 6,1,3 44,28,3 35,4,3 1", "8,30,3 20,11,9 42,23,2 19,21,4 42,44,8 42,43,3 9,3", "9,4 8,48,9 48,27,7 12,9,6 24,46,1 18,1,7", " 32,3,1 10,23,8 13,15,9 27,10,2 44,21,9 48,3", "3,8 21,34,9 35,14,5 7,29,9 16,28,8 11,32,6 15,9,2 ", "30,15,8 4,13,7 15,46,7 6,41,4 13,9,2 42", ",27,2 43,7,3 16,2,2 39,14,9 29,27,1 41,10,3 40", ",17,2 48,4,1 37,45,6 34,19,7 30,27,5 2", "3,1,8 39,34,6 21,33,6 24,33,1 0,27,1 0,", "24,2 28,10,9 12,24,9 16,9,7 24,4,8 45,42,", "9 24,30,2 8,33,6 28,24,6 33,1,5 28,18,4", " 42,28,9 2,29,6 4,34,2 28,47,4 6,0,2 6,2,1 12,", "48,5 6,34,6 47,14,2 5,9,6 17,25,2 36,41,9 ", "31,35,8 6,45,8 16,43,6 5,41,6 25,40,4 28,29,2 47,0", ",1 42,48,6 10,46,6 30,6,1 31,30,9 34,10,7 8,", "45,5 29,42,4 19,16,3 18,36,6 6,15,9 23,24", ",5 2,9,5 19,42,7 18,49,7 24,44,2", " 13,48,8 1,16,4 37,6,6 21,28,5 29,18,8 22,20,9 37,", "34,1 8,14,2 6,31,8 27,21,3 27,2", "8,9 30,9,2 46,12,4 23,2,4 24,31,1 37,2", "7,2 37,19,8 35,7,2 19,31,9 43,13,2 19,3", "3,2 14,31,1 30,29,5 29,23,1 35,37,3 16,47,1 22,3", "2,1 21,23,2 13,14,3 10,39,4 0,48,7 2", "1,7,5 49,6,6 13,37,7 46,7,8 23,8,5 46,29,9 19,23,5"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 114;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    int N = 50;
    vector<int> cities = {36, 18, 14, 16, 18, 24, 23, 29, 15, 14, 26, 10, 49, 39, 31, 26, 3, 26, 7, 47, 46, 38, 24, 7, 47, 39, 30, 25, 7, 23, 5, 45, 39, 5, 46, 43, 30, 4, 24, 45, 18, 33, 6, 3, 25, 26, 15, 10, 49, 8};
    vector<string> roads = {"25,37,3 6,5,7 16,36,7 10,24,7 40,27,3 37,30,2 41,2", "3,4 3,40,3 6,36,7 39,31,9 2,46,9 34,35,5", " 15,43,7 17,16,6 2,47,", "2 20,4,9 2,3,9 24,38,8 20,1,2 34,29,3 4", "3,27,9 37,4,3 8,16,6 26,20,6 0,20,5 26,36,", "5 3,41,7 46,9,7 16,41,3 43,24,4 0,", "33,6 1,33,7 37,20,7 27,4,2 7,20,6 16,32,9 5,46,6", " 22,12,6 6,49,7 6,1,6 14,4,7 37,3", "2,1 17,25,3 15,38,8 23,0,8 14,27,9 36,4", "5,2 27,30,6 2,39,5 18,8,8 43,18,9 30,", "34,5 41,43,8 38,32,3 40,47,7 26,9,5 38,47,1 4,45,5", " 18,45,6 35,29,2 41,40,2 7,10,7 28,22,8 30,47,1 14", ",24,6 36,20,4 41,25,3 18,40,3 10,4,6 32,14,2 41,46", ",3 15,3,9 34,38,8 25,18,6 10,49,5 12,42,4 5,39", ",4 43,5,9 40,36,8 7,30,4 40,34,2 49,17,9 45,35,", "9 16,0,7 10,5,6 29,5,9 8,45,7 2,27,8 20,2,3 9,", "2,3 27,38,6 39,7,2 32,18,5 46,7,7 15,29,4 3,29,2 3", "7,49,3 8,15,2 25,47,9 45,47,1 29,33,7 ", "42,22,3 1,30,5 18,1,8 6,25,4 14,33,1 34,", "9,1 40,20,5 37,14,5 24,1,4 18,24,9 9,43,2 34,6,5 4", "6,30,3 10,15,9 36,3,3 26,39,3 41,27,2 0,8,9 34,", "25,3 2,33,3 31,7,7 16,18,7 45,31,9 2,7", ",7 40,31,5 49,5,7 3,31,4 9,47,2 22,21,", "9 16,40,3 0,25,7 8,17,1 34,18,8 26,18,6 14,30,1 3", "2,10,6 33,45,2 41,8,6 10,35,7 18,15,9 43,29,2 29", ",40,7 46,35,5 43,16,8 9,45,4 24,47,4 39,4,6 24,", "27,1 23,38,1 40,7,6 10,17,4 46,33,1 49,14,8 3,49,", "8 27,34,5 9,37,3 23,15,9 27,18,3 19,48,1 0,3", "9,3 11,13,4 49,15,7 46,4,6 9,20,9 41,18,5 25,31", ",9 35,32,4 1,40,4 35,20,7 45,26,4 36,15,7 9,30,1 4", ",17,4 28,42,1 18,17,3 40,25,2 6,10,5 40,45,8 27,47", ",7 41,39,7 10,25,5 0,7,4 18,6,2 17,29,8 ", "41,31,8 49,18,1 14,3,7 1,27,3 21,28,2 5,36,", "4 10,29,1 21,42,7 41,2,5 6,23,3 1,32,2 3,16,", "7 39,40,9 40,46,7 37,33,7 5,40,3 26,35,7 1,", "2,8 6,17,4 0,9,8 24,8,6 37,17,3 26,24,3 34,10,6", " 29,49,7 23,7,4 17,9,1 7,36,1 36,47,3 18,46,3", " 37,43,1 25,3,6 12,21,6 15,35,1 32,9,1 26,30,4 39,", "9,3 33,27,6 49,27,8 18,47,5 25,20,3 34,26,8 8,", "5,5 16,1,8 28,12,7 2,43,9 34,24,8 9,29,4 1,5", ",7 35,17,4 14,36,7 32,0,8 1,9,8 41,26,2 25,3", "6,1 15,25,2 29,0,9 17,41,9 30,0,3 37,5,3 20,32,7 3", ",4,4 35,9,3 18,0,6 15,47,4 6,26,9 17,24,2 39,20,2 ", "3,24,8 20,5,3 17,27,3 31,46,7 27,23,6 16,39,4 14,9", ",1 45,15,4 0,17,5 43,20,7 5,30,5 17,36,8 ", "36,39,6 0,35,6 10,26,7 49,30,2 9,25,7 15,20,9 45,3", "7,9 36,38,3 39,38,6 36,18,8 40,2,9 15,31,4 23,49,2"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 151;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    int N = 50;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {"18,26,6811073 32,29,5123019 7,49,7763876 7,5,95403", "15 21,8,8604001 3,8,9343886 15,37,5192111 23,40,67", "92835 24,18,9004335 0,1,1969527 4,40,9987306 10,2", "9,5871912 23,41,8050175 32,6,884302 18,7,9632092 1", "5,23,8596556 39,22,6048918 13,25,4802933 13,27,792", "0877 41,9,8272045 42,11,9118754 49,34,7153132 46,3", "4,8111652 26,5,8006451 10,16,7468662 47,19,7468843", " 25,30,6159575 19,3,7638893 32,8,266553 9,17,29780", "02 37,32,8073463 23,19,5823956 11,7,8602059 41,37,", "9371416 37,5,6056108 14,42,7676317 43,39,8477951 6", ",21,9840427 41,11,9861175 28,33,3361431 9,21,", "7753540 3,6,9605032 41,32,6978152 23,18,9855249 15", ",49,9616775 32,12,6600055 12,23,6320035 35,11,7421", "552 7,24,1140947 20,31,7350825 43,5,7762502 27,38,", "6588041 30,24,5779419 14,31,9435845 23,36,8283769", " 28,37,5711461 24,38,3078624 44,15,8626694 46,2,52", "20089 34,47,1579188 21,43,7910769 19,15,5297330 28", ",11,8358966 6,46,9861468 4,28,6884501 17,25,837366", "3 38,5,6476100 14,8,8925935 31,12,5880819 47,29,95", "67899 2,27,8455519 3,4,7472598 36,21,7734318 29,48", ",9987551 20,2,5589028 42,28,3971061 19,44,8500363 ", "26,24,8914006 9,31,8737748 26,35,7668826 33,9,7346", "746 36,18,5691458 6,33,9373982 40,9,7688033 41,26,", "6581559 36,14,5504385 18,47,5175080 34,48,6053013 ", "31,49,2273001 48,4,8415038 49,47,9768827 13,21,519", "3222 23,46,1446144 44,40,3320973 30,13,5017040 24,", "48,7594234 27,8,8656831 21,24,5018104 10,23,994435", "2 26,37,9022287 14,28,9904228 25,6,8170255 13,38,8", "301925 41,24,2542256 26,14,9323569 4,36,5117707 36", ",48,8968032 8,17,353358 11,3,6860831 8,38,7434281 ", "31,25,7905980 43,44,6840190 4,27,5215317 15,6,5153", "407 45,14,4159497 18,25,8661530 4,26,8199492 44,39", ",5031413 47,8,6274302 30,15,7146354 20,40,1809671 ", "2,30,5202178 36,3,206621 39,34,7238656 38,30,74889", "62 41,36,9568276 2,15,6741376 12,47,5993963 29,15,", "7405197 20,44,6652318 46,12,6447193 35,44,9412684 ", "10,39,9947018 11,33,9388881 27,18,9960766 27,32,54", "45521 25,43,8384366 46,43,6985688 10,19,3434185 5,", "29,6279206 31,19,6536133 45,36,7556792 9,8,7766334", " 27,10,5383244 27,14,7117122 27,26,6147767 13,46,8", "476157 11,43,7090523 33,27,7250155 27,20,8653343 4", "2,16,5326347 47,35,7473593 46,31,3195852 41,46,849", "8706 37,8,9405605 41,12,7349371 11,14,8715976 46,", "48,8846710 2,10,9637110 28,39,9127454 42,7,6758188", " 46,22,2355288 30,21,7298668 34,44,1898340 43,6,58", "89609 14,39,5922074 16,43,9861935 35,23,6617310 25", ",12,8128543 6,35,6776580 23,48,5083496 12,7,614673", "0 15,3,7389019 29,6,5456339 26,32,5165219 44,5,554", "175 29,40,8846070 29,3,6770117 38,37,6633363 5,", "13,9233833 44,6,6355861 34,36,8337938 9,43,7002311"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 49238175;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    int N = 50;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {"47,17,9114410 14,36,5507240 30,22,6824603 10,33,88", "02458 9,16,4590247 22,28,7104220 18,33,6664830 21,", "6,9788870 5,42,6097233 6,40,7486400 5,20,9505579", " 14,16,6228446 8,13,7835401 45,32,2053192 28,11,53", "24409 16,2,6580074 12,26,7527689 11,26,6306979 47,", "6,8849588 39,35,9491596 13,38,9492438 28,20,886504", "9 25,20,6957829 47,36,9180014 1,0,8485304 38,44,33", "72196 12,42,6882483 42,45,5101960 42,28,6721179 45", ",48,5930496 15,22,6855402 28,48,9799628 30,32,8342", "736 46,26,7691975 20,12,7507062 45,25,5427027 8,27", ",5514752 15,26,6436158 24,23,7480241 4,47,749060 3", "6,9,6424636 38,24,6533670 26,25,7904275 27,35,9600", "056 2,4,9321868 26,45,5240805 9,17,3381064 11,45,4", "94795 2,21,6416908 26,30,7533203 17,2,6459355 5,45", ",6188151 2,6,9354741 15,32,8510351 34,26,5736769 2", "8,15,6679283 15,34,7273583 22,48,7374086 22,25,703", "1537 12,48,6819731 25,32,7896635 14,40,6469005 14,", "21,9546103 6,17,8313209 7,24,1846405 46,15,9363226", " 26,32,9555026 9,47,6366772 40,21,9929798 10,41,92", "05355 49,20,5614826 44,33,7746295 47,40,5083944 11", ",49,6898937 32,19,6710866 26,19,9975191 10,23,7372", "277 22,42,4935174 9,2,9619254 40,16,537432 34,11,3", "585662 34,5,5263128 9,4,5786680 38,37,7789040 46,4", "8,6184484 26,20,6086642 25,12,8891974 34,20,208762", "9 34,19,5824849 17,21,5055221 45,19,1322395 40,36,", "2144178 43,27,9306331 37,7,5178624 36,2,6973788 49", ",34,9235364 39,37,4213515 40,17,8716083 44,18,6781", "347 31,37,8969286 49,46,3755953 6,4,8428068 37,18,", "8286382 6,9,8426653 12,28,7661810 49,19,5856887 48", ",19,5150823 19,30,3980050 16,4,7595465 48,30,68851", "04 14,47,8723466 13,10,127115 28,26,8255236 4,14,9", "455546 24,27,7146320 48,5,8433919 16,36,8837750 ", "11,46,5792553 29,27,7865949 29,37,5113746 46,20,96", "22454 48,11,8289356 21,47,9968842 21,9,7574865 11,", "19,6151401 20,32,5860228 13,27,4719192 30,28,84725", "19 29,3,9528802 36,6,7913743 17,14,7154130 35,23,3", "924055 2,14,5508872 26,48,4570462 6,14,6947021 13,", "24,9299091 4,40,7576127 6,16,5990620 32,5,8707091", " 21,16,8068708 17,36,5897333 5,46,9633792 33,3,952", "7259 16,47,5418132 48,25,8379901 5,22,6979968 15,1", "1,6670618 34,48,6159963 3,35,6562626 3,13,6596631 ", "20,15,5678914 32,42,9306953 35,29,3451441 24,39,89", "18586 9,14,9241638 49,26,8079018 27,41,8993441 42,", "30,5944663 29,31,5579997 41,44,6751255 17,4,503852", "7 43,41,5899893 2,47,5147732 45,49,9970208 43,18,5", "854540 31,7,4403331 46,28,9909606 34,42,4019263 23", ",31,21904 21,4,6057930 22,49,5807013 17,16,5524979", " 31,8,5546170 36,21,6681956 44,7,7451499 12,22,765", "1385 36,4,5096494 15,25,8919178 40,9,9662969 12,34", ",6646146 2,40,6680850 29,13,7874645 42,15,5698598"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 212132600;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    int N = 50;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {"32,23,9302295 34,32,8508361 28,15,6866412 49,25,55", "27250 6,7,8321570 20,9,8028301 32,44,4604117 12,4", "0,8058019 9,49,2912943 11,25,6992109 19,46,6974538", " 15,43,7048173 31,49,5782502 44,23,5172342 39,7,58", "56792 3,21,6477078 12,38,9989209 44,7,719642", "5 43,28,5860899 33,31,312290 20,25,5713821 8,16,64", "27369 38,41,9134314 34,14,9974872 9,25,5019872 26,", "3,6354235 11,33,6034730 27,18,6180134 26,13,462246", "2 21,47,7812161 0,1,670945 10,35,7036545 46,10,916", "6742 20,31,8035067 22,14,6345540 25,45,1277071 35,", "30,8179974 5,43,7956315 38,8,5110106 41,12,2011635", " 36,27,7000483 38,4,7947071 3,47,8256876 28,5,8008", "796 36,2,1888461 36,21,5502527 35,48,5003547", " 24,40,7148628 11,31,6911501 49,11,6755733 22,23,6", "299107 45,33,8971657 21,13,5045336 13,18,7473215 7", ",14,9123865 30,19,8880370 37,42,6133179 39,34,5551", "783 22,6,6265832 13,3,9557680 20,49,9581202 44", ",14,7773822 37,15,8675582 9,31,7073207 16,40,95999", "04 18,2,6291214 31,17,9217755 4,12,4902315 38,16", ",551834 13,27,7659202 40,41,6022145 36,13,7866252 ", "18,47,5273575 4,41,7995166 47,36,6401224 46,48,52", "35610 26,47,7616352 9,11,6046141 8,41,9263156 11,1", "7,8345508 18,21,7330093 6,14,7767216 39,14,9197423", " 22,34,570100 42,28,5763055 6,23,8326512 6,34,7790", "247 33,49,8908322 23,39,6485891 21,27,9789592 33,2", "5,5956768 27,2,8284765 26,27,3100374 33,29,5429269", " 14,32,6472598 17,33,6870886 21,26,5557218 40", ",8,7457446 4,40,8716689 30,48,7671183 13,2,6804", "782 47,13,6842448 11,29,9720672 3,27,7639044 22,", "32,6367048 19,48,2701177 30,46,9856142 34,7,1610", "311 29,9,5992636 8,4,5658498 11,45,7632161 34,44,8", "579962 14,23,983114 24,16,4418278 49,45,903", "5136 29,49,8684645 5,42,4800968 3,36,7301894 30,1", "0,7654074 47,27,8283635 18,26,5135965 44,22,671491", "1 24,12,9923764 45,9,7181518 6,44,6607042 45,29,81", "90114 12,8,6566601 19,35,9247251 35,46,794160 43", ",37,5746473 29,31,7999531 16,4,7874907 39,32,606", "5248 26,2,8528914 38,40,8207862 37,28,5984156 16,1", "2,6693248 38,24,9740234 22,39,7098628 48,10,881097", "9 24,8,9988956 9,17,5138147 15,42,7299561 31,45,77", "62856 15,5,6271920 24,41,8195787 17,25,8068261 4", "3,42,7345024 20,17,6734270 21,2,6577275 7,22,937", "7594 3,2,9045296 5,37,1098317 47,2,8697929 36,18,5", "073112 49,17,5048174 36,26,7283214 39,44,6473305 3", "1,25,9606940 11,20,7864496 39,6,9860376 29,17,7841", "908 29,20,5691257 3,18,6414860 33,9,6517318 10,19,", "7504347 24,4,5685413 32,6,8973187 17,45,5432", "062 20,45,9420014 23,34,9695502 32,7,6581098 29,2", "5,5145512 23,7,7095718 41,16,9282762 20,33,1904948"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 16773625;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    int N = 50;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {"42,15,8934951 8,20,7464263 14,31,8346975 44,33,744", "1627 4,45,7103523 49,33,9520493 36,43,8072707 11,3", "0,6440938 21,25,5389886 16,34,8833856 37,9,6840245", " 10,27,8587574 47,23,4398739 7,24,8468812 46,36,90", "55267 37,48,8941684 39,20,8758728 38,9,6339161 33,", "15,6246344 18,6,9618880 6,32,9198050 35,14,9984410", " 29,41,7809670 32,43,8159442 12,9,8362272 43,49,", "9889031 31,33,5408155 37,44,6451292 13,18,5128765 ", "31,5,5930907 32,20,7846159 35,16,8120220 49,45,510", "884 10,30,7465368 49,42,6683966 5,45,4970229 3,33,", "7163077 13,48,7697218 32,7,5171756 40,27,6865252 1", "5,29,7881143 6,43,9274841 26,20,9752187 24,22,9576", "894 3,17,9675866 36,39,8574790 45,42,2177239 42,35", ",6316775 13,28,8342323 49,6,9540171 16,46,7631643 ", "17,13,3857393 44,48,6705755 29,36,5460190 21,40,90", "10685 27,35,6406658 19,43,5167876 16,38,6683288 14", ",10,6746482 38,45,9276835 33,43,6443833 32,24,3130", "621 8,21,8377282 41,47,7850377 13,36,7475702 31,18", ",8277548 11,13,7639425 23,36,8371087 40,15,7407552", " 21,13,6461061 32,25,8993416 19,25,6931285 21,11,7", "693335 5,47,8610474 7,43,9630813 3,12,5790748 18,4", "1,5093843 26,10,9117160 9,26,16449 41,14,9978172 3", "7,34,6105039 33,34,8134274 14,3,9566574 42,38,4664", "651 46,7,6106037 27,15,9181120 43,37,9501558 5,13,", "5334956 38,34,9561271 11,26,963075 43,40,6465090 2", "9,16,2604821 4,47,8494304 24,30,7193011 23,43,8207", "851 35,38,6116170 33,47,7620922 27,41,7657869 25,2", "9,8839840 35,19,6305311 11,34,2299423 29,20,717152", "7 46,10,9120947 17,24,8502775 9,16,6773052 26,18,5", "768670 24,14,9890656 14,25,7867523 3,10,7869876 26", ",48,5543428 27,16,5609477 18,36,7980631 36,35,5748", "760 38,36,6331918 47,8,8555844 9,10,9509228 40,16,", "8679810 33,18,9960784 15,26,3376858 11,41,9342249 ", "10,23,9222188 42,41,9575300 33,26,5765878 42,34,82", "07849 48,12,7413565 12,11,6234485 31,22,8263340 35", ",7,5384307 49,11,8078425 33,22,9084094 21,46,50609", "32 37,5,5554020 43,17,7548639 15,10,5694578 0,1,77", "13479 32,39,6213201 48,40,9179320 33,7,9492303 2,3", "5,9317979 36,16,7623770 40,28,6022999 4,32,8890785", " 14,30,9793601 23,13,5866643 22,28,7018398 29,12,1", "296449 45,17,5776719 25,37,7445088 48,32,5642403 1", "9,39,2843240 44,49,8802318 2,16,5507165 48,49,7961", "872 12,19,4516458 45,33,7703647 19,3,5665921 26,12", ",5041864 12,41,7351442 30,19,8948153 23,14,6281864", " 42,40,6189447 40,4,7215478 16,10,8977025 28,27,58", "87778 47,16,9494270 4,44,8863034 36,11,5347868 46,", "41,9853623 17,19,2806840 47,18,7107734 19,24,76656", "08 43,10,5324128 33,16,8786415 7,12,9102518 46,22,", "8948919 19,10,9922517 26,40,7979150 8,5,8033002 5,", "4,7851368 32,18,6212048 42,29,7585395 21,9,8671304"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 192836975;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    int N = 50;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {"10,34,2550236 40,29,5239086 3,2,7611784 24,22,5083", "791 40,23,8315370 23,21,7267262 24,43,28645 3,41,7", "855969 21,11,6128765 31,27,6194557 40,10,9117483 5", ",38,7553367 31,41,9424635 12,21,8325237 27,41,9937", "842 23,4,8422120 31,6,9362278 36,49,8850231 4,31,6", "735387 12,41,9499548 15,10,8017625 12,15,8165008 6", ",29,6980623 2,29,9477819 31,36,5709009 31,49,63168", "04 41,49,7446046 49,23,9983924 15,4,6310768 39,45,", "7070207 41,11,7303755 6,23,5550658 2,10,6739519 47", ",42,2979332 15,40,3260313 11,2,9215524 21,27,75294", "65 8,19,2349962 12,49,5372311 4,11,8514252 49,2,65", "32158 11,40,6834123 23,11,5687121 31,2,5835090 2,2", "1,7025653 22,48,742084 29,11,6439229 41,6,6991842 ", "29,49,8435421 6,3,6735740 15,27,8184291 15,29,5807", "667 4,34,9802562 25,35,1675352 36,40,6966112 1,0,8", "473144 38,20,2675813 2,6,8847437 34,15,8023515 41,", "10,5632624 12,10,8067821 4,6,6372818 14,25,1811013", " 49,4,7264430 37,8,3709736 27,49,7840042 3,11,7940", "122 24,46,7810214 31,11,5435620 12,6,7739178 15,41", ",7100363 34,6,9560254 15,36,8306082 6,15,7827754 3", "1,21,5407164 27,40,9289383 12,34,7517144 41,4,7158", "689 26,18,1201158 40,21,7319480 6,49,6872210 6,11,", "2759812 28,26,6732650 3,23,6162746 12,36,93", "15247 12,40,6805185 10,21,9498043 27,3,6504589 27,", "6,9410079 27,29,7284592 4,36,9045711 12,29,2539196", " 42,16,8400281 2,4,5554546 37,46,9291064 36,21,891", "9491 21,41,7292493 3,12,5126780 4,3,7494632 36,34,", "7160578 26,32,9691570 21,34,7676343 36,29,9262926 ", "5,13,2852199 15,3,8637653 15,2,7523664 40,4,788107", "8 4,29,9723272 40,31,7778316 36,41,9036960 27,12,8", "814064 18,37,7249293 10,3,9863486 27,4,5505527 31,", "10,8905376 36,27,9304298 46,18,5478700 34,2,9865", "882 29,23,5661302 11,15,9759641 27,11,8672027 49,1", "5,5766526 23,27,9264557 11,12,8526704 6,21,5760535", " 29,21,8049135 34,49,1326168 36,23,6688753 29,10,9", "011998 27,34,7262295 29,3,7317573 40,34,9464755 10", ",49,5512879 34,29,7260820 21,49,9476596 27,2,31310", "60 5,42,5969378 12,2,5602545 45,35,5358144 49,11,8", "182029 48,19,4675147 4,12,5957835 12,23,7727892 23", ",31,6662643 10,6,5082124 29,31,5351599 6,36,781480", "1 10,11,8623194 25,30,4068662 40,6,8167771 41,34,9", "236646 3,40,8102479 4,10,7022714 48,26,500110 36,2", ",6258540 41,23,9247428 2,41,5568505 3,21,8887894 1", "1,34,9452914 10,23,76619 27,10,9629726 5,35,441773", "2 3,34,7077365 40,41,6442536 47,7,1677818 31,12,15", "08105 15,31,2692254 5,33,2091160 23,2,9815094 10,3", "6,7760174 31,3,8817865 34,31,6186550 15,21,8462518", " 3,49,3000426 23,34,5759550 40,49,8473728 4,21,581", "6834 36,11,5395249 40,2,8656826 41,29,7033157 28,4", "8,4008532 24,32,8296552 3,36,7650548 23,15,7147793"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 211828600;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    int N = 50;
    vector<int> cities = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {"48,29,8803651 33,39,6443062 13,49,9239936 43,15,", "6950115 17,47,5302204 18,36,1100055 23,31,5089615 ", "26,7,9240042 45,20,8476246 6,46,9581078 19,22,6630", "273 31,35,8770310 45,18,6649558 13,43,6201790 27,9", ",9416997 43,29,8518762 35,25,8291417 0,1,7135413 1", "5,7,7175166 2,40,9864170 13,2,8891197 32,33,54198", "27 4,16,7906592 34,30,5043160 39,32,7603174 20,24,", "3140491 37,5,9096875 41,38,7975751 3,44,9225564 8,", "44,5836074 30,27,8646305 6,28,7109538 35,11,747456", "6 17,39,8940292 22,39,444143 47,22,6573949 19,33,5", "131430 17,22,7001604 42,48,9852125 33,12,3701064 9", ",28,6606246 42,40,9831824 36,5,5956555 7,2,6774209", " 36,20,6108144 4,22,6158961 21,30,8280905 ", "7,49,8711683 43,42,8438783 15,29,5026530 4,32,5324", "223 27,6,1245840 9,21,5514179 24,37,4717942 40,15,", "1307552 47,39,7509216 42,7,6863644 32,22,6660509 1", "2,32,5637519 18,20,8615317 38,3,7716013 41,44,", "6703032 15,48,6041578 4,33,6913580 15,2,5344494 17", ",33,8055746 19,47,2058892 48,49,6946270 12,4,84990", "06 3,10,2941391 4,47,8028743 17,32,7247075 36,37,", "9015967 21,6,5014828 25,31,8983127 13,48,7755343 4", "5,5,5600363 4,19,5217983 16,33,9857085 49,42,86179", "96 24,18,5113111 2,42,6583499 13,7,6423202 23,35,8", "248875 11,23,5518549 47,16,7870789 47,33,6792101 1", "9,12,9962078 12,47,5095620 33,22,9455301 49,40,696", "6301 34,27,5442744 19,32,6827055 13,26,6650059 34,", "9,9537258 19,16,8253098 40,29,6581923 28,21,905808", "4 8,10,6656050 9,6,9615906 48,43,5835801 29,49,567", "2734 49,15,8219943 17,12,6503542 42,26,9136038 21,", "46,6386163 7,43,6842640 26,43,8671864 40", ",7,7798865 8,38,7318296 4,17,5231800 13,29,6228877", " 7,48,5236626 26,29,8117391 11,25,6359026 43,49,72", "10321 6,34,5240289 9,46,9205595 43,2,6442817 11,31", ",7600395 14,25,6872242 10,41,8904813 20,5,9961801 ", "44,10,1925266 5,18,5966548 30,6,7968647 27,21,4321", "67 30,28,9830077 46,27,6085022 26,49,8295923 39,4,", "9222790 21,34,9815923 46,28,5105586 18,37,6441", "763 29,42,7144590 46,34,3391490 13,40,8093678 30,4", "6,5634794 16,12,8777605 8,41,8169636 13,15,37501", "37 22,16,5210287 40,48,5062064 14,23,1234778 31,14", ",4815643 28,34,6942396 15,26,9287666 2,49,4942833 ", "12,39,2893949 28,27,7328737 25,23,9740398 14,35,67", "57679 13,42,6991752 17,16,8400104 8,3,1779136 20,3", "7,6640041 22,12,7194407 2,48,9892908 47,32,5143732", " 38,44,7359493 43,40,5501588 41,3,8272629", " 19,17,8223983 38,10,4069598 40,26,6307529 9,30", ",9012797 2,26,5163939 29,7,8297271 16,32,5362162 3", "6,45,7341625 29,2,9998317 39,19,9776094 24,36,7504", "182 24,45,6048620 48,26,9885564 37,45,7447747 15,4", "2,7726006 24,5,6314888 14,11,7433005 16,39,5403485"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 178385325;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    int N = 50;
    vector<int> cities = {17, 3, 24, 3, 17, 3, 17, 24, 3, 24, 17, 3, 24, 3, 17, 24, 3, 24, 3, 24, 17, 24, 3, 17, 3, 24, 17, 3, 17, 24, 17, 3, 24, 3, 17, 24, 3, 24, 3, 24, 3, 17, 24, 17, 3, 24, 17, 3, 17, 24};
    vector<string> roads = {"24,17,8170748 16,28,3508215 23,0,7888061 10,21,992", "2915 2,44,7292849 35,8,5493001 29,37,6106257 14,15", ",7594446 41,43,5993734 41,6,5282313 13,7,7868866 9", ",27,6174433 16,14,5037747 35,48,9681342 16,2,38638", "62 47,40,5066071 39,25,6920721 26,36,1621851 34,37", ",6553701 48,46,6814099 47,15,5051750 18,36,6818557", " 30,2,5257933 16,27,8485582 25,35,6911322 8,12,563", "7110 42,38,8387268 39,28,6615687 39,16,8473752 47,", "25,7748414 28,35,5327086 30,0,5524253 21,15,595002", "7 5,20,9589975 18,30,7567051 47,34,6557496 39,33,6", "649163 12,16,8008205 13,30,8662091 29,12,8230883 1", "3,39,4165162 32,42,1236940 20,27,6506090 8,19,8290", "008 30,34,5642894 29,4,6153380 8,37,7876273 15,33,", "8787527 46,27,5905845 29,33,5983404 43,49,7104924 ", "34,1,5332084 19,38,7379378 9,23,5274203 25,23,7406", "743 40,34,777099 28,31,9220761 41,25,6030006 34,2,", "3116047 37,23,5729171 13,21,9013341 6,39,6804064 1", "1,29,8371202 48,0,9717157 27,33,5036322 26,33,5312", "111 1,26,7843100 19,37,5757056 28,19,5781417 31,", "26,6565334 6,45,8627253 10,40,6023567 39,19,803018", "2 16,45,9885254 36,21,4944121 16,43,6603854 31,48,", "7191466 19,2,9403052 8,46,9193530 16,15,8045316 35", ",11,8713869 5,35,8822044 38,47,5442770 12,20,11614", "10 21,9,5412741 12,49,6012266 10,29,6772698 42,46,", "8756106 36,38,6545084 11,2,6816270 46,29,6338042 1", "2,15,7017786 32,9,7890450 9,2,8958981 36,31,682464", "6 41,32,7887702 38,7,7911565 11,25,7578123 3,24,21", "82298 20,34,3470232 32,15,8139298 34,35,9020354 22", ",25,7332356 10,30,8157744 1,18,5743159 44,0,399306", "6 1,4,8556798 5,19,8479453 7,23,6822001 4,8,672383", "5 6,25,1733273 21,8,4919707 15,43,8655776 44,15,68", "31777 27,11,9351567 36,0,9474303 26,21,5759838 35,", "36,8495092 1,5,8137365 48,29,4643324 48,16,8202258", " 32,33,6753437 16,35,6244106 31,49,2602806 47,19,8", "058585 36,15,3908810 8,47,9642152 44,37,9185669 12", ",47,6800599 8,49,9617570 16,0,9629447 14,32,818992", "1 45,33,3938939 46,12,7249672 48,5,6742609 27,7,88", "00711 7,0,9475331 42,35,7860793 25,7,9245164 27,2,", "7285906 31,16,5822194 6,1,1068809 6,37,7674229 7,2", "1,6637735 6,0,8443602 30,37,6679909 42,15,8915049 ", "7,8,5396188 11,1,6982399 40,14,9373623 9,47,476407", "3 49,0,7876333 46,15,8835165 32,20,8285034 3,17,77", "84129 16,11,9098624 35,18,6014947 18,40,8904547 10", ",42,9031528 44,46,9747971 10,44,8071326 9,35,52164", "22 36,33,5274382 19,45,7062692 21,41,9743838 4,41,", "6926785 46,22,7490671 32,21,8853714 1,43,6720224 0", ",47,6610107 7,46,8202236 12,4,3937171 29,28,797575", "4 33,5,8534429 23,21,7909035 16,33,5715502 9,12,99", "13633 22,23,6103820 47,42,8511781 13,19,5537124 22", ",11,9885377 8,22,12523 30,27,8894284 14,10,2182631"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    int N = 50;
    vector<int> cities = {31, 6, 31, 6, 31, 6, 25, 6, 31, 6, 25, 6, 25, 31, 6, 25, 31, 6, 31, 25, 31, 6, 25, 31, 6, 25, 31, 6, 25, 31, 25, 31, 25, 6, 31, 6, 31, 6, 25, 6, 25, 6, 31, 6, 25, 31, 6, 31, 25, 31};
    vector<string> roads = {"30,15,7381245 17,24,6137580 38,18,1582937 18,48,78", "94802 6,31,3305533 15,48,4153763 48,26,7053889 26,", "27,7633867 9,11,8937910 37,2,5120772 22,11,9246663", " 11,2,8427603 43,23,2747873 26,15,7939004 1,16,833", "2270 13,49,8808490 28,36,9134084 2,22,1754194 16,4", "6,7821000 27,30,8209032 30,24,9700545 42,1,8496012", " 4,43,1617644 38,46,8535412 11,14,6797504 11,19,98", "06055 15,38,5238612 38,24,7729787 19,9,6806514 15,", "1,1966778 17,26,7723050 24,27,7153196 17,16,680292", "2 44,33,144474 18,24,8621690 26,34,7483178 1,27,78", "83111 46,47,7093545 41,20,6022469 8,10,6225626 32,", "17,5485759 34,46,208142 47,16,8610111 42,32,617297", "2 45,12,9494070 20,5,7172083 40,23,9727420 16,38,7", "231419 8,12,9700724 18,17,7340252 35,3,6067929 47,", "32,6854383 21,49,6071267 24,47,9030470 47,34,61582", "99 39,4,1735675 40,14,5962247 18,46,6899620 11,4,9", "995135 48,42,5163284 28,44,5782486 26,18,6561169 8", ",20,2438439 28,0,7337402 16,34,6698942 42,24,67465", "29 20,45,9215769 21,5,6344862 36,21,7283402 25,6,1", "489045 38,17,9455777 38,1,5270142 28,49,7500258 32", ",34,7110095 15,16,8052522 0,44,4018258 45,36,65764", "18 32,24,3054591 17,30,5302909 16,32,5384911 15,27", ",9577569 32,48,8517028 15,47,5743488 46,48,78864", "93 47,30,7021705 37,11,7084523 43,22,8318289 3,4,1", "70455 41,21,9358509 32,26,9074760 17,15,8482918 26", ",47,5705665 9,43,2279797 30,48,9029160 19,4,", "7867602 34,38,7277359 35,37,2836563 48,24,3622455 ", "16,27,5672918 49,8,9630627 27,32,7548897 30,46,532", "9253 1,47,5166130 8,7,1602071 30,16,9401695 7,20,8", "282320 32,38,6300456 1,17,6355096 22,37,5492856 24", ",26,8810313 42,27,8763243 34,42,6502775 40,35,8525", "516 34,1,7495032 20,36,6122365 25,31,9725534 27,48", ",6630876 38,47,5937451 42,16,5681588 2,9,9540639 4", "2,26,5255417 38,42,7210651 41,28,9964430 1,46,3885", "866 35,19,6375047 48,47,7616387 17,46,5562644 38,4", "8,7673671 18,16,8356527 18,34,5671027 4,22,8499551", " 47,27,8738392 26,1,7506233 26,46,1241192 13,20,74", "93604 0,21,2824634 30,32,6523827 9,37,4854034 45,5", ",7825425 20,44,6535999 18,42,8338207 14,22,3241981", " 34,15,9736445 1,32,9209402 26,16,6441137 33,45,56", "92220 16,48,9978879 46,15,6468545 24,34,5746197 42", ",47,5702538 12,41,5044126 15,18,7212304 27,18,5762", "688 7,28,2543233 5,29,6909960 18,32,8430300 3,43,9", "721246 12,29,8635916 2,19,5559379 30,1,3397991 24,", "16,8720691 30,42,6686666 48,34,5109692 46,32,61985", "17 11,23,5275294 34,30,6687151 10,44,7773778 18,1,", "5026843 17,42,8182960 5,41,7773760 10,13,2351557 3", "4,17,8931721 19,23,6995678 27,38,8987250 21,8,4560", "242 14,9,8982752 42,15,8085254 29,36,6033292 20,21", ",7321066 34,27,7596780 27,17,5233962 45,44,3629639"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    int N = 50;
    vector<int> cities = {42, 44, 42, 44, 42, 9, 42, 9, 42, 44, 42, 44, 9, 44, 9, 42, 9, 42, 44, 9, 42, 9, 44, 42, 44, 42, 9, 42, 44, 42, 9, 44, 9, 42, 44, 42, 9, 44, 9, 42, 9, 44, 42, 9, 42, 44, 42, 44, 42, 9};
    vector<string> roads = {"36,38,7894840 47,6,5578037 29,40,9733216 19,15,641", "0555 29,21,7367558 25,13,9555712 36,8,6640596 3,46", ",8778045 16,38,9731911 32,31,8652398 0,16,7737673 ", "4,46,6637708 6,34,5475582 37,30,8460517 21", ",45,7137643 11,35,5546180 45,7,7993631 25,38,5678", "269 8,13,8884292 46,25,4547303 7,1,5929327 16,4,85", "03606 23,43,5514621 41,2,5627797 5,12,9280619 29,2", "3,6581522 11,39,5985028 4,3,9611053 24,2,5654825 ", "32,41,7946503 4,25,7388862 16,8,5084237 27", ",26,645955 28,27,5098014 2,22,5693978 36,13,9874", "813 12,26,6748999 1,29,8503296 30,31,6142731 0,36,", "9416851 24,37,7448522 12,49,6058073 24,33,5242", "537 33,41,7223565 28,49,9421619 11,34,9333270 48,2", "6,5836831 36,25,5959320 47,34,6989248 ", "33,2,9572236 46,38,2948312 47,39,7518482 14,7,651", "8033 46,8,7816163 15,49,5004654 28,5,7217791 3", "6,46,9526437 39,34,8962450 33,22,8392327 1,43,6188", "298 10,20,9672230 30,2,6330710 14,23,7200968 22,30", ",9890556 22,41,9420985 45,43,2190760 34,35,8756965", " 35,39,9102656 0,8,8079165 48,49,8075974 32,", "22,6136066 12,27,9735946 49,26,6365881 33,37,10539", "01 0,38,7404588 19,27,449182 25,0,456249 41,24,772", "4410 38,13,3479625 43,40,1612080 46,13,9415731 45,", "1,8331221 32,24,3545163 3,36,8162097 15,48,6", "397783 22,31,6201751 45,23,9565190 37,41,7652257 1", "7,20,8488019 5,49,5961673 4,0,7635324 27,48,624996", "6 31,33,9778468 26,5,5416745 43,14,7233897 14,40,6", "254702 28,48,1692006 19,28,6008744 17,18,7", "845149 23,40,9446992 14,1,5613838 22,37,7312418 28", ",26,8558875 21,14,6078564 18,10,3541980 4,", "8,8953816 5,19,7708049 21,23,8883555 43,21,5631760", " 47,35,9922896 27,5,7900704 3,38,5905731 15,26,544", "4553 12,48,7974326 21,40,7929854 41,30,8723761 24,", "31,5013337 10,17,54802 44,42,6787095 25,16,5774087", " 43,29,7817090 9,44,4282429 36,16,8299504 48,19,83", "37375 48,5,8746512 46,16,9280595 18,20,257723 14,2", "9,6049091 15,27,8075362 8,38,9127356 6,39,866297 1", "6,13,7001952 32,30,9685276 45,29,5844994 3,13,", "6237835 32,2,9723095 7,23,6862629 33,32,605", "3607 0,13,9736438 8,3,5746006 38,4,6608834 19,12,3", "853343 49,27,6586746 40,45,6901563 0,46,8817285 49", ",19,6217095 26,19,5032286 33,30,1720576 43,7,55089", "8 1,21,5411463 28,15,6459813 7,21,9095115 ", "1,40,9732711 2,37,5557654 40,7,5240151 4,13,866254", "4 25,8,8380178 2,31,8585811 6,35,7253436 9,42", ",7836248 15,12,6009813 14,45,9444264 15,5,9143046 ", "4,36,7886427 23,1,331976 31,41,388283 3,0,6447560 ", "7,29,8667473 24,22,9987477 32,37,5495153 30,24,668", "1043 3,16,1950369 37,31,9469599 25,3,6", "139658 11,6,8528223 47,11,4927609 28,12,9459665"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    int N = 50;
    vector<int> cities = {14, 3, 14, 17, 3, 17, 3, 14, 3, 14, 3, 14, 17, 14, 3, 17, 3, 14, 17, 14, 17, 3, 17, 3, 14, 3, 14, 3, 14, 17, 3, 14, 17, 14, 17, 3, 14, 17, 3, 17, 3, 14, 17, 14, 17, 14, 17, 14, 17, 3};
    vector<string> roads = {"28,39,9925081 32,13,7753650 0,6,5093043 38,29,7845", "570 20,45,2566760 49,43,5416421 29,31,7289458 25,1", "6,116173 25,11,8649599 25,31,9185982 23,4,9788209 ", "18,19,5822816 23,29,5979693 37,20,6876322 31,32,54", "73694 1,5,8799677 2,37,9045158 41,28,8088925 15,43", ",5752352 22,26,5718954 12,47,2263921 47,21,7524161", " 12,19,7497196 29,44,8973029 5,27,6037632 18,36,93", "92038 45,9,9494829 29,30,4453979 25,46,7371917 19,", "40,8854506 31,1,9743228 0,12,5695689 47,20,7363170", " 12,24,7816973 25,22,7915530 43,41,2195469 7,18,67", "45831 45,43,7275167 27,26,8986917 4,25,7384692 30,", "43,5575304 45,37,5763224 0,34,7626274 49,46,257052", "5 31,47,9648441 7,37,8523901 40,26,7076550 46,1,85", "61902 14,17,2504324 30,39,7227667 42,33,9297242 ", "16,34,217619 0,7,9172945 16,15,6846765 0,38,596538", "4 32,27,6625880 8,30,7518419 46,19,9995692 4,27,25", "24331 20,6,7282389 34,4,7649533 31,42,8497949 22,4", "8,4175917 33,21,3299359 19,2,7366961 25,39,9010398", " 42,12,9850104 38,16,7175202 37,39,7723050 23,19,6", "080792 42,30,8443461 11,36,3278894 41,7,6591016 5,", "47,2494658 12,21,7478995 12,44,6350454 30,2,690777", "1 22,12,1673472 5,32,8690002 18,37,1752335 8,34,36", "83136 1,10,8383764 31,37,8791464 38,15,9894703 25,", "9,9642959 2,47,7461398 46,37,7686742 33,48,9607254", " 48,35,8321372 29,49,7558307 1,41,5268462 25,37,80", "84500 35,47,2845249 39,38,8230199 7,42,6543401 22,", "40,7776831 16,18,6110036 42,23,6858486 7,28,348711", " 2,5,6883993 20,9,5604512 20,40,7195602 28,10,1169", "295 41,19,8418890 6,43,7478515 11,23,6813733 22,24", ",5744844 20,19,6240176 45,19,990217 45,35,5618602 ", "0,48,5012500 22,31,9493227 6,37,7073106 49,5,559", "1484 34,25,9527527 12,27,6310749 5,36,7532954 15,3", "1,7293173 37,9,7124492 27,37,2759388 29,27,7770157", " 22,21,5288199 29,9,7728553 46,6,123980 8,24,82469", "20 24,1,9429670 20,18,9512151 18,43,6033371 23,36,", "7928957 13,12,7385891 6,15,505992 30,47,6841037 4,", "0,538004 33,36,6056033 34,33,6361704 14,3,3308967 ", "1,35,5810518 0,22,6290810 48,46,8190128 29,39,8", "160322 27,34,8312803 48,8,8264551 17,3,8844276 28,", "5,8602392 30,9,5801626 10,32,6021351 32,8,1502900 ", "25,1,8643044 4,46,5696754 19,9,5795347 35,5,85700", "60 35,21,8354587 16,13,8936150 44,34,7718901 8,19,", "8218171 38,34,6285491 38,6,6894472 30,6,7730864 27", ",20,9676880 2,12,8003228 5,23,9867765 9,38,5048933", " 6,5,6415064 10,26,5624269 38,43,9303711 6,32,6377", "607 48,38,5008617 13,34,9897960 32,41,5927149 23,6", ",4203637 36,10,2023466 45,48,8442229 29,35,6623120", " 41,45,5856608 8,23,6759245 13,49,931484 49,23,926", "3008 33,1,8336633 13,46,7447616 15,47,7472640 35,1", "0,6004911 12,28,7080026 33,26,1862906 48,9,5307674"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    int N = 50;
    vector<int> cities = {38, 29, 38, 9, 29, 9, 29, 38, 9, 38, 29, 9, 29, 9, 38, 9, 38, 9, 29, 9, 29, 9, 29, 9, 29, 38, 29, 9, 29, 9, 29, 38, 29, 38, 29, 9, 29, 38, 29, 9, 29, 9, 38, 29, 9, 29, 38, 29, 38, 29};
    vector<string> roads = {"26,17,8337022 26,13,6225368 10,32,1187274 33,47,51", "63035 21,28,3947680 34,17,7996246 1,28,9653903 32,", "12,5406824 33,23,6376649 42,15,7729597 11,10,71319", "17 41,18,5805066 17,23,9909824 41,28,5759772 14,41", ",3632179 42,30,5040365 45,22,5299016 20,2,7135523 ", "32,11,6134691 17,47,7737425 21,1,7658545 42,1,4995", "613 17,12,7712170 42,21,8982151 28,22,5362107 35,4", "9,2458197 15,41,3164887 33,7,8014368 2,8,5460385 2", "7,32,9536180 25,19,4752278 33,11,6783231 20,3,9525", "381 14,18,5177534 7,47,7928752 32,34,6053918 1,41,", "9665869 3,18,6746416 12,33,7756488 3,42,7741035 39", ",36,8977515 11,12,5836866 23,47,5735125 11,27,5015", "666 10,12,8707419 45,8,9057735 31,2,7419232 8,1,93", "46739 32,23,7029470 26,33,3823301 28,45,6081861 34", ",7,5010715 46,0,3812656 41,20,6944084 11,48,294760", "6 26,48,9827752 45,41,9412256 34,12,9927751 26,12,", "6757077 32,17,5559240 40,49,611819 27,10,5402558 1", "5,14,8689182 25,43,8844483 48,17,7251367 17,27,777", "8103 3,28,7558259 15,18,5427099 26,7,5522520 26,32", ",7722897 28,18,9406472 34,11,9608803 2,22,7664380 ", "23,10,8679830 30,22,8315985 22,3,7117585 14,2,7197", "956 23,13,7888002 12,48,5454307 28,30,3173129 23,2", "7,9148231 33,34,2927295 22,31,6638760 10,13,994600", "5 23,26,3805584 18,45,8418242 1,30,5875357 15,30,8", "652972 8,31,5449403 13,27,7751789 11,17,7907992 35", ",4,9523853 30,21,9678427 7,27,2361103 47,48,61", "72769 20,1,7476672 12,23,7904850 1,18,7297152 37,4", "6,5535442 28,42,9857006 30,3,8799440 41,8,6821880 ", "7,10,7645185 45,1,5774971 3,1,8584783 27,12,914847", "7 7,17,5706950 13,47,7254571 29,9,4652018 13,7,971", "3286 0,24,8189243 48,23,6827718 26,10,6612570 15,4", "5,8350116 48,32,7896761 7,11,8905265 13,34,5745190", " 20,15,6097594 33,13,9777850 29,38,677405 49,0,430", "5109 10,47,7217147 27,47,9138703 1,22,6325136 10,3", "3,5032581 20,30,5749117 30,45,9326986 15,2,5707945", " 14,21,5626608 38,9,4097538 34,26,9930825 18,8,635", "8393 26,11,8396875 20,31,5491327 8,3,8107451 36,5,", "374956 6,5,6728306 7,32,7206240 11,13,8536348 17,1", "3,6844912 13,48,6491964 18,30,8100659 45,3,9356717", " 28,2,5285550 34,48,6189495 12,47,7910376 48,27,66", "34372 33,17,9023466 15,8,7332296 22,42,6350209 7,2", "3,7385207 10,34,9262765 8,20,6156211 12,13,2081831", " 11,47,9320413 48,7,9172736 23,34,6887320 33,32,78", "36912 22,8,4487197 14,1,8756978 1,2,121423 27,26,7", "144988 42,31,6892941 37,6,2344657 43,39,7463554", " 18,21,1803896 15,28,6466182 30,41,9882682 48,33,5", "433359 31,41,3952278 8,42,6421142 11,23,6473325 47", ",26,7138928 7,12,5964918 21,45,1576098 47,34,19587", "48 33,27,5348830 48,10,7680640 31,30,9201153 47,32", ",8511020 27,34,7975642 13,32,9052606 10,17,9481925"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    int N = 50;
    vector<int> cities = {39, 38, 42, 38, 42, 39, 42, 39, 38, 42, 39, 38, 42, 39, 42, 38, 39, 42, 39, 38, 39, 42, 38, 39, 38, 42, 38, 42, 39, 38, 42, 39, 38, 42, 39, 38, 39, 38, 42, 38, 42, 38, 39, 38, 39, 42, 39, 38, 39, 38};
    vector<string> roads = {"22,43,7115142 7,26,8366428 21,22,1793472 5,8,12631", "30 6,32,3634105 7,46,5751546 45,17,9265025 24", ",1,6020560 17,30,8381023 10,5,6658015 11,13,557408", "4 28,3,8773616 34,12,9111444 14,26,6984595 15,34,5", "930491 30,26,2888293 15,29,9804912 19,10,5264229 7", ",14,4186934 1,19,5759047 33,19,7180549 30,16,72477", "77 32,15,2712784 30,14,7682831 43,21,9444785 10,48", ",8873450 11,44,9235946 48,25,7993115 34,4,8065807 ", "47,33,5620618 31,33,7876229 8,1,5517618 2,4,506862", "6 44,13,6719098 49,11,7742916 6,29,3544173 4,15,74", "37156 32,12,6277066 38,42,6803471 33,1,5080122 43,", "37,8524241 10,8,5418870 24,48,5513063 8,47,5814", "775 5,47,8899009 27,1,451105 19,47,9142174 29,32,7", "726175 3,16,9129371 3,17,5268493 38,39,9919080 37,", "36,5680730 31,24,6844668 41,21,8176656 2,34,716518", "0 6,4,7821211 14,28,7975864 35,22,8094561 35,43,9", "775443 24,25,5774510 42,39,610830 27,47,8970501 10", ",33,9587171 26,17,9304101 10,25,8220367 27,19,5530", "886 1,10,5730739 24,10,6388466 14,45,6687366 31,8,", "9230638 32,4,2296782 29,12,9049820 15,12,9981849 5", ",25,8615835 32,2,6630113 5,33,9020990 34,6,7965771", " 25,31,8513566 33,8,8470094 24,5,5254141 19,24,882", "0746 31,1,5151515 18,9,7954015 0,9,694805 19,31,81", "04963 8,27,5586005 28,16,4735763 3,45,5558995 36,2", "1,8680568 37,22,6452019 16,7,9692646 0,20,6354785 ", "23,13,9945568 41,36,5427494 30,45,6003227 41,35,65", "44002 13,49,7535170 1,47,7725753 16,26,5256869 36,", "22,7707554 17,46,8710873 48,27,8179035 24,27,79366", "39 25,27,6530395 47,48,6857844 25,47,7585176 35,21", ",8042965 21,37,1007743 34,29,7016286 8,25,9171454 ", "41,22,5315349 1,48,5172314 7,45,6191812 8,24,66163", "58 46,16,8571172 17,7,7287315 2,15,6152531 27,31,8", "622597 11,23,5116211 41,37,6344572 26,28,7042897 4", "8,33,8248006 43,41,5848198 3,14,6613394 29,4,81214", "85 0,18,7990433 10,47,8338983 18,20,6622319 48,19,", "9314137 6,12,6792012 40,13,4140254 11,40,6657287 2", "7,33,7836499 5,1,6386155 28,46,5872969 31,47,59294", "01 6,15,5629296 6,2,8046032 43,36,7852116 46,45,77", "74065 36,35,9489900 25,1,5696107 5,48,8077685 30,2", "8,8469401 24,33,4818173 10,31,5250963 40,23,584444", "7 14,46,7224004 45,26,8211245 49,40,7517126 44,40,", "8928001 49,23,9741548 17,28,8976067 3,26,8138134 5", ",31,5514941 5,27,8099875 16,45,5223182 8,19,899668", "7 37,35,1419147 27,10,7261718 4,12,7156868 2,12,62", "47307 17,16,8881181 48,8,5584121 19,25,8024547 47,", "24,3114166 28,7,5617381 34,32,9475073 5,19,8183448", " 17,14,6315377 46,30,8448744 46,26,9744608 2,29,61", "72361 30,7,9014649 7,3,6217887 49,44,2333417 30,3,", "3879280 48,31,363644 9,20,6842117 28,45,18679 3,46", ",4423914 16,14,5537831 25,33,7590932 44,23,9054959"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    int N = 50;
    vector<int> cities = {45, 29, 46, 29, 45, 47, 21, 45, 47, 45, 46, 45, 46, 45, 21, 46, 45, 29, 45, 47, 46, 45, 47, 45, 21, 47, 46, 29, 21, 29, 46, 29, 46, 21, 47, 46, 47, 46, 21, 47, 45, 46, 29, 21, 29, 46, 47, 46, 47, 21};
    vector<string> roads = {"12,7,8309905 3,43,4466927 19,35,612062 0,7,6154600", " 35,42,6279084 40,24,9068916 13,10,599629 32,4,777", "7830 29,47,6201262 18,38,7748076 47,21,7053143 42,", "28,6475495 15,36,4509441 41,20,6692534 23,27,75880", "69 8,15,1542848 39,44,6412403 8,20,5136250 21,46,1", "316987 38,27,6200775 1,33,8645953 19,0,7393131 7,1", "3,8824004 38,32,8630661 45,21,90541 0,17,6486603 1", "6,1,7574800 8,40,6323650 0,43,9647556 20,5,8286405", " 33,23,6388301 15,42,8749613 18,24,8503115 7,23,64", "98549 43,40,7656587 17,26,6066434 10,31,5270011 29", ",45,9785110 34,19,7428951 12,43,7560515 4,31,79898", "05 0,38,5320490 23,22,8254533 48,25,8669331 26,37,", "1047325 40,30,9178383 8,0,7326669 9,41,5884750 19,", "9,7321735 11,31,5280545 19,4,6264529 20,6,3001762 ", "35,31,5549743 25,34,8767059 2,24,4294434 27,17,", "7154734 9,14,9197226 17,14,2177974 1,11,9316464 42", ",20,9579565 17,40,8394769 30,22,5581232 24,31,7840", "257 23,37,324323 0,48,5469270 13,4,6278313 32,31,6", "840687 42,36,5773124 1,25,4034648 32,36,5105432 3,", "41,5746549 22,26,7662032 10,20,5529098 8,25,736758", "7 13,48,5635684 7,14,9111317 12,38,7949697 2,48,55", "29480 0,30,8881333 4,16,6238125 32,37,6255848 15,7", ",6438381 13,20,9697436 12,36,7378661 15,49,6153018", " 39,49,6990360 1,3,5013971 23,34,5881668 48,3", "5,6026240 11,30,7471290 27,30,6956578 44,49,36577", "69 12,37,3939786 0,6,5152258 38,42,4080677 28,7,78", "77130 33,9,7434040 18,44,6907077 23,13,6743489 13,", "19,8234216 7,8,5268755 10,16,9878109 28,33,853318 ", "6,36,5818714 49,2,6661575 48,33,9028268 47,45,8414", "356 13,25,9344194 16,15,8862876 24,27,1413834 13,3", "5,7762746 7,49,9187712 22,48,6449652 39,31,3413611", " 42,26,7314268 38,24,6787332 16,13,7260104 37,13,5", "792945 5,36,8030971 15,24,8308198 6,8,8163630 17,1", "3,8258075 11,9,8718732 43,6,7722829 0,1,4432193 39", ",25,5773757 18,27,6816006 22,1,9644213 28,35,85354", "66 49,31,6861169 5,31,1332594 49,20,2755710 2,37,7", "910622 32,40,9113771 20,7,6085605 11,49,8045150 2", ",17,9259331 4,48,6942300 14,1,7738480 2,33,9432942", " 13,42,7519060 41,7,7114956 43,5,9604353 48,23,556", "9217 5,3,5031323 32,1,8631868 22,6,5462893 17,8,67", "29526 49,17,5350302 29,46,3707303 13,49,7656880 14", ",23,8760801 39,27,9771243 11,24,7517566 47,46,2193", "785 26,14,9922587 27,40,5787061 49,24,8889833 29,2", "1,8245208 35,10,9925756 38,49,8252986 36,22,816858", "8 10,28,7676083 1,34,6248536 11,41,9055610 24,48,7", "626007 43,30,722938 12,40,5001441 0,36,9205703 5,1", "3,7071305 0,40,9749862 17,20,6742823 37,18,8058036", " 12,30,5811716 6,48,7556094 15,43,1132641 46,45,36", "14519 0,35,9489395 30,2,5399557 31,41,6086525 38,1", "1,8535238 17,43,9968681 10,6,5515963 37,27,8250407"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    int N = 50;
    vector<int> cities = {39, 8, 6, 8, 6, 8, 39, 22, 39, 22, 6, 8, 6, 22, 10, 6, 8, 39, 22, 10, 39, 10, 8, 6, 39, 22, 10, 39, 10, 6, 22, 10, 8, 39, 10, 8, 39, 8, 10, 22, 8, 10, 22, 8, 6, 8, 10, 6, 8, 10};
    vector<string> roads = {"27,1,7929481 30,47,6103711 9,4,9138024 13,45,90608", "85 11,49,7297430 33,44,8934657 30,26,8515731 26,46", ",8847559 22,6,1310384 14,5,5673659 11,20,5069832 2", "6,14,9868276 5,4,6208908 36,31,8359899 41,47,87102", "18 44,25,9196904 37,42,6325895 26,41,7355566 34,14", ",5591467 38,26,5743509 21,29,6706991 17,16,927154", " 31,5,8708797 25,15,9374749 37,2,7130063 12,5,9540", "263 32,43,2330497 14,4,8114858 38,21,5682576 38,5,", "5813811 5,41,6154195 34,21,5698537 7,2,934961 1,40", ",3448885 40,27,5010182 44,24,2641028 21,47,6861197", " 19,32,429386 12,30,5205152 37,45,2222640 15,49,64", "21238 9,31,8514186 0,25,9702943 5,47,5718299 19,2,", "3467387 42,43,6187444 18,1,7617203 10,22,5804775 3", "6,30,9127233 15,0,7992225 29,46,6821991 41,31,6838", "427 48,17,5273845 47,36,9316681 41,30,6458272 15,2", "0,8250756 9,34,9030639 3,15,4733085 41,38,1222353 ", "36,9,1404843 15,48,8505156 38,29,6950465 34,36,495", "7639 33,48,6677702 38,31,9182531 34,41,6247251 39,", "6,3904034 36,14,7621937 15,17,8145308 46,5,9717029", " 29,34,6999832 10,39,8374983 36,4,9629119 45,43,66", "30633 10,8,3380563 9,26,9402676 34,38,8115435 12,9", ",277953 12,47,5235094 30,34,7970686 40,42,8792241 ", "18,19,6114927 28,2,1710473 0,23,5185727 39,8,31436", "26 26,12,6084652 36,5,5325132 18,27,1277864 ", "21,5,7838769 9,21,9947419 3,24,9073027 11,0,518878", "0 49,3,9730982 27,28,9663344 46,31,8239468 34,31,8", "083093 38,14,8829706 22,8,3896988 4,38,7498258 12,", "14,7999957 13,28,14619 9,14,5459588 38,36,5437457 ", "9,47,5326516 28,40,8022962 24,11,4748697 11,3,9661", "030 26,21,9364964 34,12,6196264 5,34,5028614 33,0,", "5077795 8,6,443763 1,42,7889848 31,14,7121894 27,2", ",9681808 0,3,6410092 36,41,9238608 47,34,6959625 3", "6,21,8442469 47,38,6707559 28,32,8551260 29,5,8862", "125 34,26,9419340 25,35,6920042 18,37,9357650 26,4", "7,5396706 22,39,381401 23,17,2246516 46,12,1146300", " 12,38,8136610 18,40,2899439 9,5,8532957 47,4,9138", "132 46,30,8672794 13,7,9528530 20,0,7830616 20,24,", "6612274 15,16,8021336 37,7,5145484 30,14,9120079 2", "9,36,9721545 6,10,6922331 47,46,9497923 41,29,8472", "637 32,42,4131596 35,20,7315118 12,31,8782236 1,2,", "7037450 31,29,8257863 31,30,6582701 29,12,6917951 ", "9,29,5632642 41,21,9665662 21,4,9080203 41,12,9744", "074 42,45,8716983 21,14,7112304 45,40,6612054 30,2", "1,7256997 46,34,7849693 7,45,5049119 49,17,8023701", " 12,21,1879930 31,4,436930 41,46,1254726 29,30,554", "7410 5,30,5346453 23,48,9701155 36,26,6902526 21,4", "6,8309368 42,28,6803035 41,9,9920628 12,36,6620965", " 38,9,6756961 47,14,7709872 25,16,8361451 47,31,79", "67812 21,31,7402092 29,4,7289201 24,33,6240902 20,", "25,6024429 30,38,6144249 3,25,9999827 2,40,7765902"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    int N = 50;
    vector<int> cities = {32, 24, 22, 32, 8, 24, 8, 22, 32, 22, 8, 43, 32, 8, 24, 32, 22, 8, 43, 32, 22, 43, 24, 43, 24, 32, 24, 8, 32, 43, 32, 8, 24, 8, 32, 24, 22, 32, 24, 8, 43, 24, 43, 24, 32, 8, 22, 8, 22, 43};
    vector<string> roads = {"13,40,5064018 27,21,5833272 27,12,6314776 1,20,745", "8431 5,12,9024568 11,16,5608626 0,12,8825614 29,37", ",2326729 12,38,9131020 17,47,8128614 17,41,7483849", " 28,19,6735106 29,2,8174714 5,21,9615663 9,28,8067", "459 19,39,5250811 1,6,5941106 24,32,7211610 46,4,5", "020471 38,27,7183584 34,29,6142734 42,4,8034234 7,", "38,2345454 12,41,8721325 32,43,2000766 5,27,612623", "4 34,37,6248129 22,24,7612581 38,5,8806753 18,3,87", "29245 8,32,7575355 10,46,8120021 23,47,6073819 42,", "14,5277942 5,31,3610523 7,27,6732167 27,31,5793375", " 41,38,6387849 40,3,2733911 47,0,5749361 18,6,1910", "742 21,12,5336409 38,17,9349176 35,9,6030186 31,38", ",9405336 19,35,5768620 27,41,6114727 14,46", ",6453981 44,9,3953517 16,14,2169953 4,11,6590843 5", ",41,6372665 26,28,9660550 13,6,7867520 35,49,89720", "17 38,23,9862122 21,17,9702921 17,12,8786400 0,23,", "6714568 48,11,9099679 14,48,7074629 17,0,5395603", " 7,17,6153994 49,19,5562703 46,16,6969116 40,1,610", "8156 40,18,7843703 16,10,3270730 38,0,5549308 41,7", ",6344501 42,16,7785228 42,11,7042205 34,2,408", "6396 43,22,9813068 10,48,8223773 9,49,9585958 26,1", "9,7082479 17,23,8837409 5,0,8081122 46,48,6371774 ", "3,20,9457675 35,39,5971788 33,9,8606811 45,15,4839", "123 6,40,8444427 26,33,1599999 47,5,6946099 28,3", "9,4058259 26,49,7854901 24,43,9270630 12,23,595545", "8 8,22,2946344 22,32,130419 41,31,4793789 0,31,5", "038760 11,46,7479586 1,3,7195489 4,48,9893961 18,1", "3,9558985 37,30,5048555 36,20,7277672 5,17,77094", "09 33,44,9092190 13,20,7980923 7,21,5121151 35,28,", "459854 9,39,6195577 19,9,1290657 6,20,9900380 35,2", "6,8753479 12,31,9658578 47,12,5921604 48,42,514880", "7 23,41,7564329 43,8,572764 18,36,9622032 31,47,99", "21910 21,38,9970672 7,0,478602 47,7,5508622 39,44", ",6716254 16,48,5519679 27,47,6423298 11,14,7268180", " 5,7,9386494 28,44,19365 39,26,5622430 4,10,732288", "8 0,21,9945147 35,44,9216918 42,10,5679366 36,40,8", "235631 27,23,1448219 30,29,7051721 34,30,786807 ", "35,33,5473140 13,1,8697498 0,41,5692478 23,5,658", "7318 23,21,8484369 3,36,5236910 31,7,8582038 41,47", ",8032589 31,21,5002690 49,33,9821879 31,17,7436866", " 31,23,5354668 6,36,8355007 36,1,8221845 33,28,877", "0784 27,17,3815934 26,9,8885442 7,23,6394187", " 30,2,6207214 3,13,7275902 18,20,7882906 49,39,990", "1251 28,49,5336680 15,25,5929232 21,47", ",5094294 21,41,5702191 44,49,4459568 6,3,8351102", " 11,10,6099634 44,26,5956800 46,42,5083875 12,7,68", "29526 36,13,6097516 33,19,9276567 39,33,6987019 ", "1,18,8811312 2,37,5808157 0,27,5622858 24,8,808592", "0 19,44,7998614 40,20,157519 47,38,5406705 14,4,84", "82273 16,4,7425209 14,10,6163773 45,25,5988606"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    int N = 50;
    vector<int> cities = {9, 13, 23, 0, 9, 0, 9, 13, 1, 9, 0, 9, 1, 9, 1, 13, 23, 9, 13, 9, 13, 0, 23, 1, 0, 23, 13, 1, 13, 9, 23, 13, 0, 13, 0, 13, 9, 1, 0, 23, 13, 0, 1, 0, 9, 13, 9, 0, 1, 9};
    vector<string> roads = {"32,15,7861616 36,11,615230 15,47,5977471 12,40,753", "1100 45,43,5550521 17,10,9812173 35,34,5474713 15,", "21,8546710 32,45,9143790 27,11,8569751 3,36,877049", "3 46,10,6779597 25,3,7934738 24,26,5085195 35,43,9", "318019 21,40,8326825 6,41,8260366 22,48,7017600 16", ",35,8110604 2,15,8421306 11,2,7528154 29,19,458894", "4 39,37,2420529 42,35,8695134 42,2,9469447 34,40,7", "993927 14,31,5463489 45,41,8758960 49,28,7876239 3", "3,2,8518387 18,31,7314606 24,2,9244024 15,42,79967", "35 13,0,2517617 36,46,7271277 35,22,5603993 47,16,", "5911730 23,1,6390199 13,1,4850630 20,44,9561485 12", ",46,7716482 47,34,6911081 19,18,6887123 45,37,9357", "685 32,37,7034992 32,40,5274261 36,27,8849166 49,4", "7,7394850 27,33,6542975 40,6,7233165 11,39,9839470", " 47,31,6232812 24,17,1904140 40,31,6406357 6,17,57", "50719 24,44,8473604 45,6,5983308 12,16,6167472 2,3", "6,7569121 25,24,6833812 49,30,7545634 31,26,556054", "3 31,12,1545570 30,26,6103331 43,15,7949219 0,9,83", "1420 38,18,5726106 24,32,9315993 47,44,2075397 38,", "16,6388420 19,10,6661918 35,5,5075239 44,39,877293", "3 11,21,9469279 37,38,3563209 17,44,7504009 7,27,5", "253408 38,5,9250833 15,39,2322665 29,15,9764826 14", ",6,9113079 41,49,6077161 30,48,8739460 8,15,963576", "2 3,15,7750186 1,9,7167643 33,22,5358924 35,47,620", "3887 21,45,5360040 16,21,6412758 31,49,7153645 29,", "48,8325729 5,48,8220618 32,34,7528330 47,41,877097", "3 0,23,7536248 30,44,7214816 7,48,5241258 47,25,56", "15281 38,19,9639446 28,18,6577114 8,35,6672819 40,", "2,9026267 45,11,7374787 46,32,6777780 42,17,615783", "5 42,43,2696414 17,45,6945296 24,8,7306874 8,6,540", "4675 6,5,5047080 46,30,5064455 27,31,6484584 4,37,", "9702927 35,27,5762630 44,28,7964082 17,37,6740385 ", "14,45,7904793 29,49,8331696 40,4,1915170 27,22,783", "7099 34,25,6197 1,0,2638232 14,15,8376725 8,20,665", "2303 31,2,8949127 28,24,2361865 15,41,9223153 26,1", "0,6451353 24,49,7507768 9,13,8229498 47,8,3595972 ", "22,47,7249227 6,48,8939032 22,29,8259542 20,12,671", "3368 42,38,7348101 13,23,8770557 29,37,889783", "9 12,25,7948800 22,25,4378552 41,32,8354005 19,4,5", "161682 22,41,5256873 32,4,6742528 7,47,8815437 21,", "30,7401842 45,19,7189513 10,39,5668317 31,21,29312", "8 25,11,6094290 26,48,9913741 11,37,7868549 48,21,", "6863661 48,8,7155838 42,14,4775216 30,40,9253836 4", "2,45,5914946 14,18,9332622 12,15,8400788 46,5,518", "2038 42,18,8314341 45,40,9830392 44,37,5611305 10,", "18,9387594 44,33,6335541 21,22,1434646 35,36,96905", "15 33,19,6035988 21,39,8446462 22,7,5328942 5,22,7", "914189 11,7,4428578 21,2,787388 4,7,7191496 9,23,8", "545996 4,5,7274296 15,27,9689173 4,24,245945 48,49", ",7545239 37,10,8665001 48,18,9833671 49,14,6658540"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 103020105;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    int N = 50;
    vector<int> cities = {38, 48, 17, 3, 17, 3, 17, 48, 38, 17, 48, 17, 27, 3, 38, 48, 38, 27, 38, 48, 38, 48, 38, 27, 38, 3, 38, 27, 3, 48, 3, 48, 27, 38, 48, 38, 27, 48, 27, 17, 3, 38, 27, 38, 27, 3, 27, 17, 48, 38};
    vector<string> roads = {"28,42,2274217 14,43,5237423 18,25,6469770 0,22,984", "9148 14,23,8947608 32,14,4089376 43,30,4485880 15,", "26,6152351 23,49,651957 10,15,5736316 8,25,7866494", " 29,10,8046223 0,21,9551019 9,29,6680780 21,25,518", "8364 7,36,6970350 33,29,6171978 36,8,4281523 23,20", ",5053173 22,7,7918237 23,37,5455330 15,31,8529079 ", "28,29,7192547 20,36,9238143 42,31,9742074 7,23,837", "2652 28,26,8022229 47,23,8655495 33,31,5993642 37,", "30,7936708 29,13,9669033 6,34,644649 12,1,6775717 ", "0,30,6048346 10,12,8009728 31,1,6483269 9,40,53381", "58 32,43,6863936 40,31,9571444 33,40,6705478 8,21,", "8711589 6,11,492861 10,31,5409349 40,12,6226214 32", ",5,6215983 30,22,6870014 32,21,9114697 40,13,83319", "42 28,1,7255256 46,6,9042841 5,8,7672138 25,39,746", "5000 42,29,6192920 9,15,7128239 13,28,978842 18,7,", "8076364 20,18,8848598 28,10,6170437 37,20,9093111 ", "15,33,6720458 27,38,1511087 17,48,5533927 9,31,542", "8475 2,10,8646835 4,32,6924274 28,40,7171594 26,33", ",9274791 49,7,5572758 46,45,1312014 42,13,8007800 ", "13,2,8355909 25,20,3917455 9,2,7863152 4,25,578795", "1 16,34,9872912 1,2,9426695 0,39,6209836 1,13,6938", "569 12,26,7401152 26,29,7579510 18,4,7977351 2,28,", "5772384 28,15,6088494 1,40,7016824 49,8,9632982 29", ",31,9449558 32,36,9470836 36,4,5262535 29,1,891051", "5 40,26,8129927 42,33,7086557 37,39,8934530 1,3", "3,6778568 14,37,107189 9,1,3669575 9,10,7709295 13", ",15,6660986 39,49,6993958 2,31,6024067 0,36,884283", "8 32,37,7948272 3,48,8181683 13,12,5312191 2", ",15,639947 28,33,6979350 22,32,4991929 12,42,64653", "80 49,37,9934869 12,15,6132644 8,30,9627087 31,28,", "5531559 9,13,5594636 14,7,7165040 28,12,8501432 12", ",2,7446209 47,5,5734901 39,21,863135 47,14,7250531", " 33,2,8555272 23,21,9843281 1,42,6421360 0,49,6705", "139 12,33,7832681 26,13,8700204 11,41,342385 33,13", ",6764112 49,32,5581450 17,27,775764 29,15,9264054 ", "13,10,5492342 27,3,4897061 20,5,5123895 10,40,9320", "307 3,38,978915 26,9,5034399 8,20,8374216 43,8,743", "1044 28,9,6151188 31,13,5632401 43,36,8287530 0,25", ",9144528 26,10,8414481 42,15,5109180 41,19,9296260", " 43,47,6578662 43,7,7729324 29,2,9913853 17,3,2910", "863 42,10,2969330 26,31,8917636 26,2,8099417 9,12,", "8849571 12,29,5329189 24,35,5388498 42,40,6588743 ", "38,48,7239818 21,4,2127173 2,42,1148007 27,48,9740", "983 4,0,9961537 24,6,7540631 47,7,8961844 37,21,81", "59645 26,42,5976852 1,10,8523039 40,15,8980104 9,3", "3,6564321 31,12,6278690 37,18,2939255 7,32,6907059", " 1,15,2251740 21,36,5621356 42,9,9135144 26,1,7287", "982 7,5,2196569 20,47,9038104 18,8,8166410 33,10,7", "710895 2,40,7802623 25,14,9240745 38,17,3909426 30", ",5,6398653 29,40,8309471 7,20,8176069 5,22,5221373"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    int N = 50;
    vector<int> cities = {14, 9, 2, 14, 9, 31, 2, 31, 2, 29, 14, 9, 29, 9, 2, 29, 9, 14, 2, 14, 2, 31, 2, 31, 29, 14, 2, 31, 2, 31, 14, 9, 2, 29, 14, 9, 29, 14, 2, 29, 2, 29, 31, 29, 2, 31, 9, 14, 2, 29};
    vector<string> roads = {"20,27,8181488 12,45,6326864 33,28,7832245 26,39,76", "25767 36,37,8633149 43,35,9174294 10,24,5228351 10", ",3,6554272 5,40,7547860 13,42,5194082 37,5,6786902", " 38,44,9601812 11,30,6605650 21,48,6952397 11,21,1", "507484 7,5,8127578 28,38,9264633 0,46,3981209 16,8", ",9001516 39,25,7655400 44,6,9410440 28,44,6890", "44 1,23,7160762 30,47,5404136 2,29,7396503 33,17,8", "190806 13,17,6369478 23,34,3545539 21,19,7572356 3", ",35,9858383 16,33,4185513 35,24,8450428 8,38,", "2429642 33,44,5620655 39,1,5273109 45,23,7820597 4", "3,10,6947014 42,38,1947293 37,32,3997005 24,22,451", "3418 25,34,7676831 25,26,6112784 11,47,6325483 8,4", "4,8044680 8,33,8513091 48,19,7592531 7,36,7733130 ", "26,45,8190372 4,12,7158292 19,15,5325935 16,44,944", "1106 49,48,3828889 34,1,7053091 13,6,7518944 36,32", ",3127835 40,7,8206691 47,21,7928463 25,1,9594015 8", ",28,6887578 15,49,8238293 38,16,8636129 0,10,93263", "72 7,32,1478299 33,38,9698501 12,1,5059997 25,45,5", "310966 11,18,7338989 4,23,5843262 31,2,6224031 36", ",40,5362760 25,12,5737662 9,2,8076402 37,7,633372", "3 17,8,7584422 44,42,6510561 3,22,5474689 42,28,67", "90148 18,48,9217485 8,42,9803726 15,48,9240590 3,2", "4,7490144 15,11,5851471 47,15,8901345 18,", "21,6968726 15,21,336481 13,16,7952841 20,41,246848", "5 8,13,7705315 31,14,362341 33,13,9161741 13,38", ",7617820 38,17,5341289 6,28,7100374 18,15,8941005 ", "1,4,8890404 31,29,6671275 10,35,5347799 49,19,9", "358670 6,38,7455368 6,8,6123448 40,32,8335983 4,25", ",8239839 43,24,9394382 14,2,5066588 29,9,644579 0,", "24,8414369 26,23,9781061 33,42,7267432 24,46,53580", "39 26,1,7779376 0,35,8902738 37,40,7116165 13,28,7", "475402 19,11,9083017 15,30,9225878 45,4,8094729 14", ",9,3180940 18,30,8240721 42,16,5069861 28,16,67919", "79 22,0,5404657 49,11,7187279 0,43,21720 46,43,634", "8344 17,44,7108879 12,34,9363492 26,12,5994361 6,1", "6,7431649 5,32,8954010 48,30,8553239 46,35,7275517", " 17,6,7548213 43,3,6502982 10,46,8912840 47,49", ",8626425 22,10,8136550 21,30,8670911 22,35,54", "52323 0,3,9218115 25,23,710469 18,49,5550770 12,39", ",9410991 13,44,6286066 5,36,7735572 23,39,8273221 ", "31,9,1246822 19,47,6898460 47,18,8984098 49,21,69", "34975 45,39,5139688 14,29,1137253 43,22,990993", "0 39,34,5054432 11,48,8684743 28,17,9981330 4,34,7", "952217 41,27,9310623 46,3,6856821 26,34,9348811 18", ",19,5595681 42,17,7202354 45,34,8460411 1,45,69702", "85 16,17,7353299 12,23,6515350 30,19,9707358 4,39,", "9446097 30,49,7967852 46,22,5945263 48,47", ",9108687 26,4,5350549 42,6,8520655 33,6,9955484"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    int N = 50;
    vector<int> cities = {37, 24, 37, 35, 39, 46, 24, 37, 22, 46, 27, 37, 22, 24, 4, 27, 37, 39, 4, 49, 46, 37, 2, 46, 37, 22, 2, 22, 39, 4, 22, 24, 22, 35, 37, 2, 22, 49, 24, 27, 46, 39, 37, 46, 39, 49, 4, 35, 37, 2};
    vector<string> roads = {"9,48,9374827 29,0,9582763 36,47,7548890 46,22,2493", "160 6,30,5688459 40,42,9806211 43,44,5735329 5,11,", "9898775 25,44,9294987 1,20,6352039 14,40,5327647 4", "1,0,8690198 15,31,4480580 10,18,9089454 0,15,319", "0837 8,42,2655470 11,48,7777182 12,33,9093014 4,27", ",1284192 48,44,8064504 39,46,5978506 44,5,8048440 ", "24,46,7654235 45,10,5980967 35,24,3572465 48,29,95", "58311 39,37,300902 2,37,9342298 21,40,2839076 16,1", "2,7660085 40,38,7012325 22,49,9238653 22,35,611104", "2 16,26,3547618 27,22,6149037 10,41,9735373 40,41,", "9321779 23,18,6238921 36,16,9238328 44,20,2308899 ", "12,38,8520337 2,27,2741444 25,48,9415694 37,24,905", "3893 43,14,6033723 34,42,7438263 47,12,8630681 46,", "2,9778293 1,21,8366245 47,6,1508346 41,42,979365 0", ",23,6132335 41,16,5905258 49,46,5186182 11,16,7111", "185 18,3,6394775 21,12,9894193 36,41,3882356 3,32,", "8216231 19,43,4614718 36,38,5241804 2,35,9287381 2", "8,17,5417740 22,37,8056893 12,10,7683329 29,32,815", "2957 8,44,8624954 36,34,5414315 23,16,7821551 46,3", "5,7187836 42,23,7421674 21,41,8220407 30,23,692976", "4 43,30,8884590 42,10,6833210 10,34,232165 2,49,77", "86435 20,17,8662614 42,17,6300626 29,8,9881059 18,", "38,5481408 10,11,9259766 22,39,3530809 37,4,377971", " 15,28,1356146 4,35,8171437 4,22,3453361 4,24,9330", "11 40,16,7585953 39,27,1062423 29,3,5755820 ", "1,40,7149157 26,5,7113896 11,29,7571960 21,42,7591", "909 49,35,2822614 21,43,5819645 32,31,6489361 41,1", "2,9932784 18,8,6616296 18,17,6162514 31,42,5786172", " 41,47,9914329 10,3,7415176 40,36,6818073 21,36,95", "65973 10,5,6882170 19,48,5496485 14,47,9344517 27,", "24,3938817 8,36,5214307 32,10,6693775 23,34,761716", "4 21,14,5949457 25,18,9425356 7,12,5200718 19,21,5", "944608 8,7,4129068 1,10,6193584 48,3,6898253 19,14", ",6274167 31,6,7351463 45,43,5384550 40,17,9436873 ", "8,38,6301982 42,30,2560266 35,37,5850915 25,34,641", "2012 15,1,8904861 24,2,6496876 6,43,6531477 12,14,", "5309872 38,30,8755066 46,4,9347099 45,38,9462007 2", "4,49,8228113 37,46,6832206 4,2,1512113 1,26,580938", "2 21,20,9185139 13,6,2025863 49,27,9481535 17,25,8", "442928 29,9,7636437 5,6,8453576 22,2,5897494 11,45", ",8063264 28,32,6605020 32,43,2788195 4,49,9913242 ", "2,39,3361142 39,49,657853 22,24,2097851 39,35,9573", "620 48,30,3431925 9,30,9638642 34,1,9723368 45,47,", "452954 47,15,9163225 41,28,8488777 0,11,7298201 15", ",3,7971124 37,49,7683108 30,20,9984568 27,35,54407", "50 15,18,6035299 34,48,8714878 14,13,6342301 10,31", ",6471891 24,39,5081976 43,16,5289255 23,33,9306270", " 3,30,8596571 25,29,2403874 34,28,6660458 12,36,77", "61900 27,37,7764368 48,45,8565843 46,27,2163701 4,", "39,2962860 18,5,8237865 9,33,9536093 10,17,6115875"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    int N = 50;
    vector<int> cities = {33, 41, 11, 29, 26, 12, 18, 29, 26, 10, 29, 12, 41, 18, 29, 10, 18, 26, 29, 11, 18, 33, 0, 10, 29, 18, 33, 10, 29, 41, 33, 10, 29, 10, 26, 10, 12, 33, 18, 32, 33, 0, 10, 26, 18, 12, 29, 32, 29, 0};
    vector<string> roads = {"26,12,5538601 19,22,8140341 26,29,5799879 47,37,54", "78939 28,21,9013747 14,15,8766630 31,5,9576239 45,", "30,8949880 11,10,5964729 22,44,9799015 16,28,62696", "95 17,42,9103586 4,3,5915049 26,32,6156320 41,26,1", "350260 40,22,5175391 11,41,4531419 4,31,7945967 3,", "13,5291521 0,32,5292282 21,30,7013322 14,44,942841", "1 1,25,7618713 20,3,6226071 2,6,8744956 22,23,3269", "33 17,38,5248669 48,30,9265915 11,33,394032 33,26,", "5377094 40,19,1605858 33,32,1329355 46,8,7531739 1", "5,44,8265265 42,49,5513503 21,7,6944709 39,25,5593", "765 42,7,9463267 48,42,5514270 16,7,7880817 33,12,", "6549656 16,30,5083728 44,27,3508010 25,8,8943976 3", "5,2,9826912 11,18,5799356 33,0,775831 12,32,722444", "5 13,43,5604646 24,37,7544396 10,26,3458132 18,29,", "2216794 38,28,6233482 23,24,9966433 41,12,2982446 ", "46,1,9067470 13,6,3704409 10,0,696028 2,3,9785050 ", "20,6,8163099 4,46,8956259 14,47,9965187 13,20,6484", "191 18,41,1091610 9,24,8045089 22,47,8634930 11,26", ",8315163 27,19,5089127 49,17,8934056 42,28,8385218", " 49,45,7751829 2,46,9365702 6,25,5881584 2,5,6810", "095 30,17,7450963 48,28,8073147 25,31,590162 18,26", ",5229132 7,17,7918100 15,23,8280759 34,19,4509553 ", "48,38,8052576 15,27,9366983 48,16,7995981 21,16,60", "87927 47,23,7750217 15,36,3424706 12,18,3871856 32", ",29,3183147 45,21,8888868 37,15,82736 9,36,5374628", " 21,17,5696629 0,41,5566268 49,30,4898288 47,44,56", "77830 10,18,5870418 41,32,8776135 46,35,9297360 44", ",36,5444042 38,30,8633741 45,38,5234116 9,22,10973", "80 38,16,8500177 10,41,1503319 10,29,6580399 0,29,", "2132961 39,31,9233279 42,38,6251014 0,12,1061415 1", ",31,5735542 21,49,8376094 7,49,6664216 26,0,529451", "2 19,36,7416262 46,5,3769658 37,40,5883498 32,18,1", "673390 12,11,4844506 33,10,5930227 21,42,6302047 4", "0,44,9193179 29,11,4098351 12,29,8105681 4,5,55837", "67 38,49,939420 24,40,9392114 6,43,6475726 14,22,5", "866048 8,43,2599027 14,37,7968651 9,37,8822364 37,", "34,5294022 45,42,7752557 10,32,8888986 42,30,55675", "02 28,17,8779592 42,16,8258534 13,8,6321913 48,7,7", "850943 8,2,7624838 28,7,6917002 2,31,5439871 31,3,", "8403027 5,25,8576149 38,21,9156929 17,16,7527419 4", "8,49,9912164 45,7,8417468 4,8,3086582 41,33,969565", "1 18,0,6110537 1,4,6648288 21,48,9988714 49,16,898", "2291 10,12,5017637 41,29,8583622 30,7,5220884 28,3", "0,6636745 2,43,7617499 33,29,8246729 38,7,6153586 ", "32,11,9761188 40,23,1801455 27,37,6021292 35,31,78", "74117 8,31,8512072 45,17,8277232 16,45,5659170 49,", "28,6396085 33,18,440639 24,34,1029575 23,44,826416", "3 45,28,7438926 17,48,6752979 45,48,9594412 35,4,8", "512477 0,11,8160074 15,40,8842210 6,4,8104523 39,3", "5,3309353 31,46,8268968 24,44,6751556 3,39,9051522"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 57192699;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    int N = 50;
    vector<int> cities = {26, 5, 29, 5, 29, 5, 2, 5, 1, 31, 44, 16, 5, 1, 44, 29, 16, 31, 16, 44, 29, 16, 1, 2, 44, 29, 1, 47, 26, 44, 29, 1, 44, 1, 16, 2, 16, 2, 1, 2, 31, 44, 16, 47, 26, 47, 16, 44, 26, 31};
    vector<string> roads = {"16,47,9398831 16,44,311957 31,2,1426908 1,", "47,9034340 17,43,7800172 49,10,1187059 30,28,94103", "70 19,12,981627 11,20,7729801 14,30,9609460 6,10,8", "230950 48,49,9433582 22,27,9271501 2,5,8053979 34,", "46,8270679 8,48,8116283 27,14,8252915 7,36,7236040", " 40,38,9622601 34,40,5716856 45,21,5366917 15,3,", "5352069 44,2,6834217 44,47,766923 26,16", ",6090246 29,47,5109785 5,47,6584005 24,17,5967683 ", "49,6,7490055 15,40,5855070 38,34,9240146 46,", "3,5440562 5,1,689642 16,31,7952143 22,14,", "8726448 30,39,8528612 32,39,7110006 28,27,5", "087242 2,26,7858437 40,37,6270913 43,20,8775735 10", ",36,7938658 48,36,8542841 9,21,6858646 25,44,84029", "73 13,17,5675362 45,0,6509104 3,38,10574 19,10,9", "241128 36,8,7013632 35,17,9638466 1,31,954559 46,4", "0,6283882 29,1,1766883 35,11,7929618 10,1", "2,8129791 5,25,6088752 48,19,8571394 49,19,6", "683921 16,25,1592303 26,44,7384287 23,4,58810", "15 19,8,4839331 12,36,174086 20,18,580161", "3 6,12,8771672 36,19,6434967 2,16,2087480 37,15,65", "71495 12,48,8495779 6,7,6604497 1,2,9066671 29,25,", "2025407 35,13,8474714 49,8,9590764 33,21,980766", "6 13,20,9144837 18,35,9385725 13,18,903458", "0 17,11,5543873 18,11,8821049 28,14,7244006 33,0,8", "738455 48,7,5503148 42,23,9806808 26,", "1,9432857 3,37,8651095 25,31,385315 47", ",31,4582279 9,45,8434876 38,15,8006377 7,1", "9,5751531 38,46,620015 3,40,6263882 6,36,9040322", " 29,44,9595569 33,45,9604501 16,1,7744389 8,12,858", "5473 32,22,6287129 7,12,8479591 11,13,5333873 10,7", ",7039008 25,1,6766184 8,6,9355927 43,35,326", "7326 41,28,8251004 26,47,4351765 37,34,3651118 43,", "11,9352211 46,15,6093189 41,14,6151036 20,35,57327", "73 19,6,7733512 48,10,6233076 22,28,8650696 30,2", "7,5933017 18,17,9873278 49,36,6654005 22,30,84972", "24 41,39,7649240 44,1,4186044 12,49,5908397 ", "0,21,8223017 28,32,8051379 41,22,8138889 32,27,860", "4448 17,20,670502 33,9,7903397 41,", "32,8375052 31,29,9831977 24,11,8568205 25,26,68373", "04 31,44,4281216 5,44,6854002 29,26,57901", "48 41,30,3776101 31,5,6435880 35,24,8419423 13", ",24,6672050 20,24,6570984 4,42,6830615 48,6,8200", "340 15,34,8916157 39,28,782683 26,31,6409489 ", "2,25,3991802 7,8,6992074 0,9,9864761 2,47,4211822 ", "30,32,7859362 13,43,9468113 47,25,6072252 34,3,712", "0539 39,22,6907184 39,14,5176925 41,27,6974392", " 18,43,3750345 39,27,9298158 7,49,6894617 10,8,710", "1446 32,14,7596296 24,18,7579923 24,43,65846", "71 38,37,6131472 46,37,7360014 5,16,5896657 29,2,", "4933588 5,29,5793926 16,29,6262551 5,26,6731207"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    int N = 50;
    vector<int> cities = {49, 34, 35, 22, 42, 34, 22, 43, 35, 49, 0, 49, 42, 8, 49, 42, 34, 22, 2, 34, 42, 2, 8, 43, 35, 8, 34, 38, 34, 42, 38, 22, 0, 8, 42, 38, 35, 49, 34, 8, 38, 22, 49, 2, 38, 49, 42, 0, 2, 49};
    vector<string> roads = {"46,31,6139155 40,25,5553745 2,38,9845879 44,16,886", "0744 15,41,8361293 4,44,7782200 26,21,5128477 14,3", "9,5936538 35,38,65367 45,18,7348070 10,6,674980", "9 22,42,346917 49,2,4879079 41,7,9931100 35,34,849", "6107 22,35,9066740 47,5,8696590 32,27,6588336 28,3", "9,8551096 17,9,7437149 9,19,6867199 1,30,9907595 1", "2,11,6576893 30,4,7281536 34,42,1814679 10,12,8058", "910 12,40,8030240 19,23,8026317 28,33,8751410 49,3", "5,733707 42,43,5953405 46,11,820273 43,2,6826771 3", "2,7,570408 45,31,5228693 36,17,7306230 24,27,59881", "67 27,31,5111852 23,11,5168056 48,30,4715191 8,0,9", "764267 1,16,2115272 37,26,3869606 9,46,8446444 37,", "18,9445073 34,49,4929436 19,5,8886744 21,4,9606", "772 14,18,8701221 43,8,9349184 34,38,9526543 38,43", ",712310 10,18,7249766 12,5,4587954 45,26,7154076 2", "5,20,8106545 9,41,9485442 22,49,4977338 20,13,6108", "337 1,18,5380646 9,23,5063174 47,21,7722268 10,29,", "7023743 21,13,6815605 33,40,9355663 41,48,8437286 ", "33,17,5234186 16,33,8383596 47,9,6571152 17,14,749", "1479 42,8,6239821 18,41,6643847 4,5,8433696 4,15,9", "798999 13,30,5612596 11,17,9081126 1,36,6098686 22", ",34,4861408 44,5,3384275 42,49,8106439 33,15,94007", "7 39,11,4840418 37,19,8241665 37,14,2760300 45,29,", "6397685 39,9,5756518 22,38,1791631 42,0,7366999 22", ",2,133306 4,3,8818735 23,27,2933939 6,20,8387638 3", "6,13,6581805 24,46,7884028 4,1,3643930 28,32,28525", "78 8,35,5385297 44,9,8832183 6,37,7081736 20,23,77", "86130 8,34,4398673 41,27,5215056 0,49,3845559 48,4", "5,9238083 42,35,9711490 43,22,9258715 2,8,8038776 ", "13,15,6183849 31,4,7759329 36,32,9776237 25,13,991", "4259 16,29,5420929 39,40,6685882 23,32,5916879 39,", "45,5577298 47,45,7762817 48,33,6908390 49,43,91816", "80 6,47,6960507 23,12,178675 26,25,6066979 25,30,9", "242699 31,30,2402081 6,17,6341114 8,22,6332504 28,", "10,5584932 49,8,931138 0,38,1237673 21,25,5869448 ", "30,15,9483354 13,44,5315028 28,17,6849816 21,", "28,7430425 30,6,4371963 12,30,8674840 16,4,6082193", " 9,21,4414377 28,12,7959123 2,35,3305016 25,23,608", "1470 36,31,6607545 35,0,1515008 20,16,4232670 37,2", "5,7843704 0,22,9914203 34,0,6547739 23,24,6134387 ", "38,8,9649494 7,29,9058673 43,0,7933177 33,27,88621", "02 16,7,7749322 24,25,8338016 43,35,9195990 44,36,", "8117602 1,39,6737218 33,1,5464145 2,42,8350080 28,", "19,5172892 11,21,7465243 33,32,9776087 28,31,29119", "43 27,46,5477434 9,29,1175356 34,43,3436496 38,49,", "4647770 14,19,7145348 24,5,8168972 2,34,6712323 7,", "40,8064889 5,13,6675721 46,32,9638493 14,16,262177", "8 2,0,4452932 31,10,9991138 36,28,7270117 40,21,53", "24435 13,1,7313070 47,36,8854998 26,15,8826078 20,", "37,9386021 38,42,6659976 7,23,8681459 7,33,7809046"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 59396841;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    int N = 50;
    vector<int> cities = {6, 5, 13, 29, 10, 46, 15, 13, 46, 6, 5, 29, 6, 24, 15, 29, 24, 5, 36, 10, 15, 24, 29, 46, 29, 6, 10, 24, 6, 36, 27, 46, 27, 46, 13, 29, 36, 29, 5, 24, 29, 6, 46, 29, 13, 15, 13, 29, 6, 46};
    vector<string> roads = {"25,31,6573978 30,26,9944528 28,49,7856184 45,39,74", "45046 6,46,9762993 29,24,4564098 35,33,5112038 33,", "9,9832437 39,11,8477346 6,15,297219 39,43,8374483", " 36,24,4158343 16,45,7998871 11,40,3132479 11,43,5", "164375 35,14,893843 16,2,7596860 41,20,8879584 36,", "27,7774669 2,39,7303426 30,2,5285444 13,36,7992347", " 5,6,2252353 41,14,9587679 21,48,5983162 48,30,727", "0939 46,27,7710823 48,2,3521424 48,43,3517191 45,4", "8,6386408 41,42,767914 43,2,5778388 25,42,7374690 ", "1,33,9967802 11,30,8518572 37,34,6358460 12,3,1497", "548 25,47,5065759 28,7,7201192 38,23,5380291 7,37,", "9409040 36,6,6658167 40,2,6525560 19,25,6754984 26", ",2,7190138 29,5,4972786 21,16,7813581 29,15,838674", "8 40,48,6106027 16,40,5225822 47,20,8047188 7,47,7", "696038 36,46,9401138 15,27,2485601 33,19,9034452 1", ",42,9674805 5,10,1745608 1,20,8616732 37,44,106103", "5 26,11,7715905 43,45,8080784 27,13,8469746 28,33,", "1621191 1,7,6919208 31,41,6267276 38,18,3440759 37", ",14,5764873 21,45,8783340 41,1,8718661 25,37,54441", "95 13,24,1877579 11,21,9675070 46,15,5435028 45,40", ",5070171 1,49,8654140 48,26,9568014 26,21,1175838 ", "47,37,5650340 1,14,7095717 27,10,9322679 26,39,501", "8453 2,21,5312807 49,47,8606367 14,44,5033211 35,4", "7,4439846 28,1,2247922 39,48,6852294 20,28,6599202", " 10,24,6603695 39,30,7797924 40,39,5565206 41,49,6", "094948 26,43,6159961 16,39,7908337 12,17,9320768 1", "0,46,3286832 24,6,8882327 7,33,8589624 13,29,75391", "90 14,28,7909038 37,9,6994182 44,25,8503466 24,15,", "144414 12,22,616761 20,34,5271168 8,19,7605026 46,", "24,2690503 49,19,5152451 32,12,3781020 1,44,89779", "10 41,25,5265538 8,49,7039780 11,45,2996603 30,16,", "8826682 35,34,4427582 43,21,7393372 42,31,2134416 ", "19,35,9104341 44,35,5368063 37,1,8944535 10,13,187", "0214 45,26,4804993 46,29,7647721 34,31,5493318 42,", "19,3799102 45,30,7200690 27,29,1152472 20,44,52454", "12 42,9,9534521 2,11,5603108 46,5,7311300 39,21,", "7069166 16,48,6347582 43,16,6308790 36,10,9159107 ", "15,13,238483 42,34,6144237 43,30,6215001 29,36,267", "1147 11,48,5868155 19,37,5917602 13,46,2159906 5,1", "3,7191287 15,36,8709351 34,33,8711117 7,41,9566303", " 7,8,8553446 40,26,6110581 34,7,5333841 5,36,78190", "03 27,5,3551085 10,6,9733406 28,25,8939710 11,16,8", "547630 27,6,1510336 31,49,9632060 49,25,8304562 33", ",47,9397996 42,14,6760066 13,6,2919656 43,40,98723", "99 15,5,2146179 10,15,2766260 24,5,6623428 25,9,30", "94177 18,0,219780 16,26,8259396 19,9,5142817 49,37", ",8067998 29,10,990367 2,45,8095597 27,24,543944", "1 4,12,867397 30,40,8532378 49,20,4402195 20,8,756", "4542 29,6,9749242 40,21,5025408 1,35,6944295 28,31", ",5741956 18,17,3868291 49,14,5595173 21,30,6866050"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    int N = 50;
    vector<int> cities = {23, 24, 3, 2, 27, 29, 49, 23, 27, 23, 27, 24, 12, 2, 39, 49, 2, 12, 47, 49, 24, 12, 47, 3, 2, 3, 23, 2, 29, 2, 23, 47, 24, 3, 49, 29, 24, 29, 47, 49, 47, 23, 24, 2, 12, 47, 49, 3, 2, 27};
    vector<string> roads = {"46,19,7791892 10,26,7990504 48,0,1942723 42,4,", "6810095 38,28,8945772 5,18,7240111 23,2,", "7477210 7,18,9354356 41,20,9747934 1,25,878073 36,", "40,8091053 24,27,5516327 24,49,8565763 35,11,9160", "021 29,39,992257 17,32,7555643 17,31,5581218 13", ",8,5221462 21,7,7075444 23,29,356699 11,38,", "8269442 27,47,3974773 2,12,5443146 45,31,2916264 1", "3,26,2110845 32,45,8838819 21,5,5906475 14,19,9", "732649 46,40,5240529 37,19,8947521 29,3,412858", " 39,49,9825930 4,43,9830551 15,45,5228010 ", "44,15,6623345 1,11,8725878 11,25,3120922 14,", "34,1260118 3,39,9623154 12,24,887543 37,36,", "1745543 47,24,6870155 48,25,9771990 47,49,2", "905300 39,12,9962462 23,47,5496307 40,22,70466", "52 29,24,5101706 30,18,9345857 6,9,7043887 19,40", ",5997434 7,5,6076362 24,3,8912173 35,0,9338899 20,", "43,9784952 4,6,6066444 27,39,1190653 19,34,", "4282965 33,30,1042793 23,39,2933964 10,8,9802628 ", "22,36,8969405 0,11,6313673 35,38,7614836 28,48", ",5368844 2,49,4810258 43,6,8599776 35,1,5578", "068 49,12,8720783 43,42,6381322 18,33,661", "9028 37,22,7300959 49,23,1006091 15,17,6799312 23,", "3,6594418 30,5,5383658 19,36,8999107 38,25,", "5453362 31,44,7012655 28,25,6256556 29,49", ",3283254 39,47,860944 44,45,8934256 41,43,8", "803723 4,9,1723733 47,12,5259668 27,2,73318", "37 2,47,536413 20,6,5936148 28,0,81974", "54 30,7,8029792 15,32,4941559 10,16,7309", "834 3,12,2061793 23,27,5531279 42,20,2633", "40 34,46,5742107 1,48,7909053 34,36,5422112 3", "5,48,9320223 29,12,3655414 45,17,", "7285126 11,28,8305994 24,39,1471087 34,37,9868175 ", "4,41,5989430 20,4,6919119 21,18,9247455 21,3", "0,7462033 12,23,2880778 42,41,5722801 43,9,5397848", " 3,27,5305656 49,3,4259738 14,40,7159541 1", ",28,6061138 33,21,7178242 48,11,5229337 2", "6,16,8549919 25,0,6102117 28,35,9787876 2,2", "9,9940832 22,34,9335183 36,", "46,2752744 49,27,7349890 0,1,8656806 3,2,8188114", " 24,23,357837 48,38,7770975 1,38,8921358 47,3,722", "3920 38,0,7598215 14,22,4146348 8,26,7556", "493 14,46,6715931 12,27,8610496 37,40,5695", "424 31,32,9993492 9,42,4336267 25,35,9429", "594 29,47,8231012 33,5,9785523 8,16,5523912 7,33,8", "104878 37,14,8926899 22,46,9911363 15", ",31,5485484 9,41,9518540 22,19,6208625 44,17,596", "129 9,20,6494404 40,34,7265354 37,46,9084019 41", ",6,6183168 29,27,240825 10,13,5201061 36", ",14,5279466 2,39,7722005 2,24,5949807 ", "42,6,9343829 16,13,6585628 32,44,6158269"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    int N = 50;
    vector<int> cities = {11, 28, 11, 32, 27, 11, 47, 33, 6, 32, 8, 17, 13, 42, 6, 21, 19, 21, 3, 13, 28, 19, 8, 17, 28, 6, 4, 42, 17, 33, 8, 21, 11, 17, 8, 47, 28, 3, 33, 28, 32, 4, 6, 3, 47, 8, 17, 13, 27, 13};
    vector<string> roads = {"27,28,4281206 34,7,8039888 20,37,5219909 1,2,9", "142520 44,5,9061398 27,21,5812503 8,4,1897374 14,4", "0,5194359 7,44,6995193 16,18,7592403 25,18,6252831", " 17,32,2229341 22,29,7467866 19,13,8658956 31,12,3", "383419 9,43,8379123 30,38,4154961 13,6,9963643 26,", "45,6488172 5,23,9220047 27,17,9791797 4,17,9324773", " 1,12,6545169 20,25,6772918 36,44,3438166 11,6,835", "801 15,44,5548153 33,28,7018301 47,13,1181438 19,3", ",2979634 0,20,8787661 14,16,9674218 48,35,9727069 ", "28,3,6162848 33,4,6107243 30,39,642090 4,47,658483", "0 12,9,254231 28,47,578701 18,48,2917337 22,49,641", "2364 44,35,7284019 26,9,2218689 11,47,2314071 23,3", "6,7158171 1,20,9031444 16,0,8554702 25,34,5715690 ", "31,14,7310829 17,11,6584939 34,1,9965428 29,18,533", "9898 38,49,6849068 19,21,4255883 27,11,4367541 30,", "35,5675753 33,6,4292127 24,29,9251377 3,42,189751 ", "0,45,9537138 5,46,6310165 48,22,6715737 37,49,5710", "117 10,41,9507941 49,7,9025095 38,15,6800706 10,12", ",9669128 8,11,6430411 26,36,8138096 42,19,4517869 ", "11,21,3808543 37,12,7937435 38,24,9997546 19,27,43", "46586 34,45,5850527 15,0,7452784 6,21,1011555 21,3", "2,8494177 40,10,8467597 13,11,9023823 2,38,8718289", " 23,48,3035891 20,24,6240161 34,29,2984084 41,15,7", "222435 27,3,2368379 3,33,2659976 6,47,8689189 42,2", "1,8375105 27,47,468915 47,3,8926691 27,4,818022 6,", "4,4678127 10,45,1012939 10,48,5602770 42,28,139989", "9 37,48,7149724 46,40,8145183 43,46,6938738 34,36,", "6308283 48,34,6126055 30,15,8429617 48,49,8134369 ", "7,0,5789086 10,29,6115849 3,17,7124031 20,2,853165", "2 6,3,3581582 28,11,7440083 32,47,2500845 15,23,91", "33952 35,43,6693289 43,20,7862936 4,13,7489123 33,", "27,8630477 39,1,7640868 9,30,7405375 42,27,2471815", " 29,46,5822435 12,14,9346043 9,49,5523735 2,18,980", "8092 28,13,1085772 29,40,7965727 30,31,5291602 12,", "24,7112346 26,23,8684410 44,31,6696250 31,23,96407", "00 11,3,4720511 13,17,2705018 24,22,313703 46,30,5", "584682 31,15,9717471 48,1,6275823 49,39,5538740 29", ",26,6259976 8,28,8155722 48,44,8068388 8,17,220407", "1 0,48,8506728 33,42,9587023 27,13,9566777 8,42,27", "47046 32,33,2304212 26,16,3139194 6,42,3717823 15,", "43,5992075 32,28,4289603 31,29,9356407 47,17,96519", "52 27,8,1773867 19,11,2830238 28,6,5442374 34,40,5", "749587 20,16,6342057 33,47,5947674 18,49,5990627 4", "2,17,1476194 9,23,5488765 24,30,2631323 43,41,8112", "387 28,4,3026622 33,13,8879731 11,32,2466205 2,5,6", "727268 33,11,6672938 9,10,6491760 48,41,5856737 18", ",22,5225761 8,6,1328755 29,5,8933871 31,38,8054146", " 21,8,4529471 21,28,9440182 37,10,1641607 42,47,53", "06309 35,9,8374473 13,8,8523397 49,35,8755648 11,", "42,6996801 19,32,5144336 13,21,1637073 45,5,490829"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    int N = 50;
    vector<int> cities = {6, 32, 18, 21, 26, 18, 27, 30, 27, 22, 8, 21, 44, 17, 3, 8, 27, 6, 19, 3, 26, 14, 22, 6, 44, 32, 2, 32, 18, 6, 32, 17, 32, 6, 27, 19, 21, 17, 6, 17, 2, 18, 26, 32, 22, 21, 2, 18, 22, 18};
    vector<string> roads = {"21,8,3289528 17,6,47419 26,22,5981572 33,34,751842", "9 26,30,8934564 27,14,6660215 31,7,5001392 28,24,6", "657790 9,47,7398934 26,17,1091717 12,49,7268210 27", ",44,4228773 18,19,9928645 34,28,7150196 14,19,8328", "439 6,21,7748020 48,38,8922400 19,30,3083315 48,41", ",9180428 40,7,4340545 14,21,5268896 33,0,244099 10", ",38,4912708 35,9,5661832 16,29,789334 18,2,2002275", " 19,44,4534569 27,17,3764321 21,30,3447731 23,10,5", "402451 35,15,5226023 19,8,6783704 48,29,1352541 49", ",25,367508 22,6,3232763 45,9,7147652 2,22,3828361 ", "23,37,7985559 24,33,6657638 26,6,1952200 24,34,603", "2346 46,11,3300793 30,8,3413000 19,26,4115937 4,23", ",780952 38,23,6349687 31,34,8633333 0,31,6476089 3", ",21,8874954 32,44,9387648 45,49,236590 34,0,961875", "4 18,32,3681149 45,35,5217604 42,12,9633484 12,47,", "6339857 15,47,8902294 4,20,6728590 44,18,4528816 2", "2,27,3578372 39,9,6191104 33,31,6302317 46,16,9967", "283 48,4,7254470 35,39,8844499 11,29,5979226 14,18", ",1364817 45,25,7166463 22,44,5415237 4,43,8441927 ", "41,20,7277832 0,24,5362270 39,47,6016979 27,30,488", "0096 15,49,8415098 6,8,2911176 17,2,9303415 28,40,", "8247074 34,7,217703 6,14,7347408 44,2,3229682 4,29", ",9162739 41,5,7816906 17,8,8637114 30,44,6813342 1", "0,16,9558178 41,16,6894100 27,3,5125108 39,25,5589", "136 6,3,5462906 41,4,3285774 42,15,9135095 49,1,66", "60298 11,23,9160676 32,6,1509159 35,49,6298715 40,", "13,7322286 21,32,8288333 22,14,1145622 39,42,77693", "72 1,15,9073183 44,6,365620 12,35,7876938 48,11,81", "26660 37,16,410160 43,46,6772247 33,7,7904657 30,1", "7,272879 4,11,7619269 42,25,5111720 25,12,5329229 ", "21,22,5972856 19,3,5430140 0,28,6559431 37,38,8836", "748 22,8,7457722 42,49,8866282 5,43,6969467 8,32,4", "234821 8,2,1819929 0,40,7014903 31,40,5947163 23,5", ",8735697 22,17,4082369 11,43,8505364 32,26,8679515", " 47,45,7448519 2,19,2092613 8,3,6256635 1,36,82725", "25 35,1,6865809 2,27,2165031 4,38,6983874 22,32,99", "78727 27,26,2639386 22,3,9561258 2,30,8410834 29,4", "3,7854245 26,8,4051808 6,27,9577976 32,14,6470836 ", "13,31,8830163 43,38,9953817 37,5,9308944 44,21", ",6655087 13,7,9761061 21,19,9628802 10,4,5136062 2", ",6,5753183 32,19,9903205 42,36,5999690 1,39,636413", "6 35,42,9468142 41,10,7190545 20,46,2549378 33,13,", "7293260 15,39,7274694 30,6,445285 44,17,7729212 20", ",11,7985647 48,23,6614742 7,24,9864579 18,21,84473", "82 0,13,2474489 30,18,5494817 30,22,2286274 9,15,8", "538788 20,29,7880938 15,45,8793504 27,32,8670421 0", ",7,6132266 9,42,7725876 43,41,9848703 24,40,567195", "9 35,36,7340806 44,26,312352 46,38,9560528 45,36,6", "83403 3,30,4327837 46,23,5186626 7,28,8155814 26,3", ",3231880 24,31,6862579 22,18,3665488 20,16,8294923"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    int N = 50;
    vector<int> cities = {41, 7, 19, 7, 44, 3, 41, 39, 41, 21, 39, 3, 47, 31, 38, 2, 1, 3, 16, 35, 41, 44, 35, 44, 7, 35, 16, 47, 44, 41, 38, 31, 47, 44, 39, 38, 47, 19, 31, 39, 41, 2, 44, 38, 35, 19, 44, 21, 16, 1};
    vector<string> roads = {"24,9,5026302 37,34,4311285 18,33,7304889 41,44,366", "0937 27,42,7622867 21,19,8716591 3,47,3857131 7,39", ",414229 32,25,7781039 42,43,5227270 18,43,1513429 ", "45,49,4743577 2,19,284569 18,42,9662986 10,28,6963", "211 40,18,2019073 13,48,8966241 28,49,9928734 13,3", "4,9790402 8,3,1764853 1,41,486201 22,26,1572570 13", ",45,9933802 3,44,2397252 44,8,579534 10,37,7399292", " 5,30,2750826 38,2,1441036 31,3,6145207 16,2,56008", "15 14,25,7399145 6,18,7345236 7,47,283306 36,26,90", "37141 14,32,330884 2,21,8028180 42,33,5032124 35,3", "9,3970166 47,2,1644297 47,38,2874631 49,37,5632775", " 49,0,5810570 5,25,4074563 29,43,5735316 44,16,894", "989 2,39,1349957 30,32,6646091 20,30,8832292 28,45", ",316721 0,28,9604790 28,37,5135559 28,34,8661863 3", "5,31,5893831 14,20,4524879 41,39,2411177 2,35,9669", "312 5,32,9829789 1,2,5718910 7,31,6074233 40,27,89", "08500 39,19,6667097 6,33,9632177 5,4,7560218 1,21,", "4527455 4,32,6794879 0,13,1378769 33,29,8903118 3,", "1,7619107 11,23,543529 2,44,8629239 7,38,1767417 4", "9,13,7830315 8,35,7619164 3,19,6360826 34,49,54593", "85 15,23,7656927 48,45,9545974 38,31,5337469 41,31", ",3116290 19,35,4128137 7,44,7939299 11,15,5490766 ", "2,41,7414724 19,1,1394094 19,38,3399420 8,39,53753", "40 29,42,555979 0,34,9617187 3,7,7536717 3,41,5008", "223 5,14,9434660 1,16,161663 17,22,5595984 44,1,44", "51148 16,3,3639097 45,0,9835320 25,20,5560972 10,1", "3,4560763 6,29,8327673 7,8,7833691 38,41,4700121 4", "6,11,9604731 23,46,9092243 10,0,8614964 3,21,78611", "90 22,36,170422 21,35,9744909 47,21,6063599 4,14,8", "942669 29,40,2129458 3,39,7124026 21,39,2691505 30", ",14,8991056 4,30,9848324 48,37,9237881 38,39,96640", "61 31,44,242901 12,24,6140070 47,19,9922820 4,25,9", "832731 21,41,6769617 48,34,2168402 32,20,9931696 3", "9,47,3543855 29,18,9481888 16,41,4214109 16,19,172", "7619 3,2,5505037 28,48,7870938 45,34,6289969 40,33", ",9518324 43,40,7991253 38,8,882025 0,37,7448339 10", ",34,6508093 8,31,5059115 43,27,3285634 35,44,67175", "74 7,35,6499739 10,48,9850734 27,18,9209759", " 44,19,2625650 26,17,6627208 46,15,7380255 1,38,85", "04641 38,3,1978919 9,12,1352496 6,43,6964847 10,49", ",5447186 39,44,3526088 1,47,6373267 45,37,8181640 ", "0,48,6012205 33,27,9569543 20,4,7330177 8,1,844198", "4 30,25,8621710 1,35,7514125 2,7,7366811 35,38,853", "6119 49,48,9996925 47,31,1448696 5,20,7304433 21,8", ",3986653 19,8,3878661 6,40,672352 6,27,5479158 17,", "36,7370876 8,47,7358610 42,6,8035144 10,45,7575334"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    int N = 50;
    vector<int> cities = {28, 42, 40, 19, 9, 28, 4, 48, 42, 9, 19, 9, 39, 9, 38, 19, 38, 42, 48, 9, 28, 48, 19, 9, 33, 31, 37, 49, 40, 16, 31, 4, 8, 16, 28, 16, 37, 16, 49, 16, 31, 16, 33, 48, 16, 48, 9, 42, 33, 8};
    vector<string> roads = {"42,48,3507335 19,8,4853 33,19,5821357 4,9,2161539 ", "16,28,1204687 38,28,1080075 9,42,3192445 49,16,163", "1908 5,14,2892906 10,26,9314947 18,30,6101947 31,1", "9,2877449 19,16,3507171 37,49,3399408 44,29,833700", "2 0,32,9389698 49,19,8947172 36,43,7764033 15,24,6", "218156 38,16,3292354 39,28,2043493 21,7,7073184 8,", "31,9026298 28,9,4048307 40,38,8231769 15,41,578485", "9 28,42,2289232 39,31,7015789 31,40,1559041 4,42,3", "840547 0,47,5557898 8,38,9020228 33,48,9979517 14,", "0,5069370 38,33,4656690 43,0,2476038 14,6,9113357 ", "13,18,8758137 13,7,4867973 38,19,7124277 15,10,733", "0371 16,39,7155829 3,7,8737828 12,5,9585250 30,3,9", "902068 8,4,4459851 31,9,2206746 23,14,7626915 40,9", ",7904129 42,8,8550033 28,37,4413022 9,8,7721839 8,", "28,5221761 37,19,7275246 4,28,3245250 21,15,835130", "2 25,6,5161309 49,8,6719270 38,39,3748483 32,17,80", "19506 13,0,8723435 5,47,7737014 48,40,7488616 33,9", ",4339437 9,19,3725862 42,39,658045 39,4,1445710 44", ",21,89239 38,31,9234904 38,4,4153809 18,46,1452335", " 39,19,3388125 38,49,1832909 13,20,5491786 25,43,7", "809279 33,16,8632194 26,46,9966550 23,13,5039113 3", "8,48,6962303 4,16,775291 27,20,7006850 28,31,14620", "59 2,45,7923942 6,0,4912192 34,21,752983 44,32,902", "7049 21,23,8054181 16,42,5919974 8,37,7691764 39,9", ",6770829 40,37,7616265 36,25,6633443 26,6,4783705 ", "38,9,7884941 30,27,9643851 44,7,5813923 24,25,5143", "775 37,31,1660787 16,48,5983994 25,29,6378298 31,3", "3,8900130 25,23,7719540 37,9,175022 32,23,5344296 ", "37,48,7934965 42,19,1692479 10,44,8259502 31,16,68", "72190 30,17,8414226 42,49,7490025 4,48,5857948 29,", "7,5148720 43,7,5408531 40,39,5407315 8,33,8702083 ", "27,0,9439850 33,4,2767718 11,2,5368614 37,39,84809", "9 37,38,9802498 29,30,8054499 4,37,4035742 1,35,13", "01761 36,3,9877380 42,31,3991791 31,4,4739600 9,49", ",8614701 43,30,5030245 22,34,2676814 16,8,7108641 ", "23,12,9340893 42,33,9449467 33,40,2246391 33,39,39", "04931 37,16,2951413 27,15,8489518 8,39,894856 12,0", ",2159708 38,42,3506956 36,10,6878136 40,8,2184586 ", "45,27,5282569 14,22,9043559 40,42,2026751 16,9,671", "8173 14,46,8031324 48,8,7560942 28,19,608369 34,41", ",1865789 33,37,7987911 14,17,8478778 20,11,1275", "04 39,49,4664181 10,2,7111970 13,35,5427002 16,40,", "8490469 48,28,511001 45,30,8124955 49,31,4575212 4", ",49,9167610 29,0,9485553 19,40,1528293 39,48,32041", "52 40,28,2690787 29,41,7147719 4,19,7337602 47,45,", "7468429 33,28,3104507 34,1,8873131 25,32,2844178 3", "1,48,9207645 33,49,7100465 2,20,9744180 27,35,7406", "987 24,18,7857520 40,4,56220 47,11,6337887 49,48,3", "574088 48,19,1270848 47,3,4497014 40,49,6588049 42", ",37,8532787 6,18,6338224 48,9,6182000 49,28,890489"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    int N = 50;
    vector<int> cities = {35, 49, 42, 47, 26, 19, 49, 26, 37, 48, 19, 6, 48, 6, 37, 4, 49, 4, 48, 47, 4, 25, 17, 48, 26, 17, 37, 26, 35, 19, 45, 4, 19, 23, 47, 42, 35, 37, 17, 18, 26, 19, 6, 18, 25, 42, 18, 17, 35, 49};
    vector<string> roads = {"26,17,2521766 45,47,5329807 37,25,7513906 2,24,128", "2860 16,32,5354471 18,49,2558860 35,17,7151688 49,", "25,9442494 40,7,7642596 28,22,7557916 48,23,511256", "0 42,49,6088075 11,40,4878651 32,21,5446674 0,34,9", "138356 29,27,7318619 10,40,9778585 37,42,5623524 4", "7,49,7734388 37,6,9297674 6,42,2770974 0,9,9965788", " 24,38,1923307 9,3,7279824 3,0,6107275 18,17,70836", "32 6,4,3174983 7,16,8229659 35,25,1461687 19,42,93", "81419 6,35,1228209 37,45,586293 48,4,6221279 6,18,", "7407586 3,34,8709658 16,10,9454220 0,32,7346341 19", ",47,505369 45,25,4282102 26,37,4632257 3,32,505131", "4 35,49,905516 43,41,6074179 17,6,4318866 45,26,19", "9616 19,48,7291918 23,37,7234086 1,27,4697141 37,4", "7,3887735 20,36,5168259 1,20,4232458 19,4,408051 3", ",7,9505451 21,34,8379241 36,44,5271056 38,41,22019", "21 4,49,617818 25,17,2442854 49,6,8092332 38,12,99", "4954 39,15,4620577 23,26,7095951 18,25,6208733 31,", "15,5679353 26,35,6732441 45,4,2345470 7,9,8792908 ", "14,36,6696662 33,38,8132502 23,42,4643473 40,34,93", "28957 11,32,5078270 11,0,5611429 19,26,1387358 10,", "32,6918713 11,34,6844789 45,48,3528139 23,47,69130", "31 32,9,8816363 10,0,6704731 4,26,2908560 37,17,42", "86729 40,32,5614650 18,19,36444 44,14,5786085 40,2", "1,9999503 11,10,8240742 37,19,5811339 26,25,853036", "2 19,23,4669884 35,4,517873 48,47,1175712 19,49,26", "11946 6,47,4456229 7,0,8511665 25,42,9597958 4,47,", "9188813 23,35,5904935 35,19,6917597 35,47,420076", "4 34,32,9054092 13,24,5572087 15,20,4230480 16,34,", "331819 6,23,2739073 0,40,9683939 45,17,2934822 14,", "5,5466798 48,37,8393207 6,26,270734 45,35,2583603 ", "10,21,6468379 23,18,4595605 17,4,9902303 4,42,3360", "644 48,25,7949336 3,16,410023 16,0,5369565 44,46,5", "000897 3,40,9523391 47,17,1862666 6,19,7356647 17,", "23,366153 25,6,905315 26,42,8190476 47,42,3093132 ", "45,42,8922964 35,37,5702114 34,7,9123020 26,48,200", "7738 2,28,2094640 17,42,7466115 9,16,8178301 4,25,", "4710067 32,7,7358600 18,48,6025649 35,42,1085366 2", "1,7,6635222 16,11,9561704 44,20,4593164 45,23,81", "4162 6,45,5137265 40,16,5678459 42,48,5589958 49,1", "7,9557503 26,47,8136695 47,18,1493550 45,19,340765", "5 40,9,9937222 25,23,3360638 48,35,4779240 34,10,9", "173865 10,9,6667250 17,48,9414179 11,7,9512129 26,", "49,1411666 3,21,9140711 3,10,9159917 37,4,2739921 ", "18,37,9023241 30,28,2223153 12,8,8880212 49,37,148", "770 3,11,5909246 18,42,3337430 35,18,9381709 6,48,", "835465 19,17,6142530 9,34,5224999 49,45,4130089 25", ",19,2182497 47,25,2962647 21,0,102642 23,49,183386", "6 18,26,8318227 11,21,4731632 18,4,7527017 4,23,73", "03144 18,45,6606588 21,9,3536291 49,48,6630060 9,1", "1,7726001 13,33,6659322 7,10,5678319 16,21,9001889"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    int N = 50;
    vector<int> cities = {38, 26, 42, 33, 26, 25, 39, 28, 26, 25, 0, 45, 8, 33, 38, 28, 33, 48, 26, 2, 46, 33, 39, 33, 2, 48, 14, 33, 2, 8, 46, 28, 25, 28, 8, 45, 42, 45, 14, 15, 2, 15, 46, 14, 39, 28, 38, 8, 28, 2};
    vector<string> roads = {"16,31,7237810 7,24,6463781 10,40,8135635 45,0,9380", "619 15,26,5702704 46,39,5266165 45,42,5550035 39,2", "6,4541602 12,5,3468861 0,8,3153991 45,33,6184118 3", "2,37,9923370 26,28,2107332 42,15,9287703 48,46,608", "6013 2,14,2906966 19,44,7193626 8,33,7739511 47,19", ",8951374 8,48,8082148 25,2,3536834 11,40,8732914 4", "5,15,9655111 20,36,9323141 15,48,6552660 0,48,5974", "470 2,48,1134834 21,23,5733771 14,45,5572680 14,38", ",8453765 9,19,6272280 9,47,8408821 33,15,5917072 1", "1,41,5419365 28,38,2800808 35,34,5565395 38,26,490", "1059 38,2,8851519 3,24,8295691 8,26,763116 49,11,5", "205685 28,25,8521478 14,15,3234549 26,33,2528718 2", "9,47,6933394 15,46,9328680 39,2,2660689 28,8,57381", "4 31,22,2472146 23,34,7513319 22,16,3794257 25,", "33,9690132 8,39,2304693 42,14,6240651 31,12,615739", "6 35,41,5575001 35,1,8131387 2,26,4662373 38,15,40", "30086 42,46,2396596 25,39,3653203 4,7,6160185 17,3", "1,5944114 45,25,1273063 8,42,94233 9,29,5669270 49", ",21,5427974 13,7,3801914 22,17,5688482 15,28,88344", "23 46,25,3696931 28,48,2552195 7,6,8588878 2,28,43", "72127 25,15,1973093 3,7,3945396 46,2,8482675 28,14", ",5457914 4,24,5857879 38,39,6519928 1,49,6844171 3", "6,40,515501 29,44,2142473 5,31,5496396 26,48,30814", "09 17,12,6484919 25,38,7902679 5,22,98628", "97 38,8,9221017 18,30,1181956 34,49,8413137 33,14,", "5174789 45,48,1322936 10,1,1608696 27,29,9619804 1", "1,35,6338950 39,15,418116 33,46,6502309 33,0,17028", "97 35,10,6873135 49,10,6501893 0,25,3615873 0,26,1", "717774 26,42,3509790 15,8,8094932 8,45,5619034 42,", "38,9812250 42,2,3027314 4,6,9968770 36,35,3968478 ", "0,42,6676580 28,42,8915890 11,34,2127381 15,0,7765", "294 24,13,9781811 33,39,9269126 39,14,3524866 36,4", "1,109961 3,4,5747120 33,2,631624 40,35,9064396 14,", "0,8259226 36,49,9547877 6,3,5946213 21,34,5600430 ", "26,45,7135912 42,48,5992077 39,0,5529717 46,8,6476", "718 42,25,2708335 48,39,9784297 38,48,1159813 29,1", "9,8490793 35,23,4701220 13,3,6857512 27,19,6327510", " 17,16,3485401 17,5,4696740 0,28,655950 20,1,98572", "28 33,42,7611366 5,16,8230313 22,12,6629007 9,27,4", "950465 45,2,4514178 46,0,2900219 26,25,7820418 46,", "26,7403207 45,28,7330900 2,0,7202426 21,41,9868394", " 48,33,3790218 15,2,7612565 27,47,9450976 45,39,34", "97157 25,48,2813732 24,6,206432 42,39,3690719 28,4", "6,4345254 28,39,3546126 44,27,660212 10,36,9963519", " 47,44,9702260 38,33,3430879 13,4,5726879 20,11,49", "72416 49,20,8122534 25,8,6124167 18,32,8017090 13,", "6,5407514 8,14,7044105 28,33,3851739 38,46,8206837", " 25,14,6048876 2,8,6119087 45,46,6959818 38,0,7088", "597 30,37,9619912 14,46,6060690 16,12,7129678 45,3", "8,1060897 14,48,9164099 9,44,7155616 26,14,9086683"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 84451737;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    int N = 50;
    vector<int> cities = {13, 23, 33, 13, 23, 6, 45, 19, 13, 48, 12, 33, 15, 48, 19, 23, 9, 37, 9, 37, 8, 19, 45, 19, 31, 28, 32, 38, 37, 7, 29, 48, 26, 12, 45, 27, 48, 40, 44, 12, 28, 40, 44, 38, 37, 15, 44, 29, 33, 6};
    vector<string> roads = {"0,19,3746105 13,33,3366252 7,27,9153218 40,48,1212", "679 4,24,9296903 32,37,5917971 1,14,9627834 14,10,", "6149848 20,35,6105381 7,41,9464765 2,11,9133706 34", ",47,7067704 39,14,5289366 18,38,6751541 30,22,9644", "199 28,12,7431980 47,16,9556002 47,43,1370316 1,17", ",8530693 31,44,5633629 17,36,5628545 49,14,7329316", " 47,42,8113441 47,25,9695695 36,39,9944469 27,33,8", "933312 21,22,5541432 45,33,6470203 2,24,7207324 1,", "21,9973273 46,4,6619115 9,29,8072835 10,39,8777724", " 37,27,1967416 18,29,6214522 26,7,564139 22,2,205", "4507 39,11,8788624 17,3,4532208 48,6,9554680 10,20", ",8035003 4,30,6134410 44,18,1787107 5,2,9713693 16", ",11,5050600 34,1,9563050 31,27,729439 46,34,872323", "8 5,49,5202814 22,34,8687198 42,11,8340963 21,34,5", "299414 30,20,8347078 48,29,8773630 41,8,7709162 4,", "25,5674808 36,11,5876130 38,41,6462822 7,8,5266567", " 13,23,322422 3,25,8516020 24,11,8859354 40,37,745", "9092 26,27,9203680 5,4,1476047 19,28,8712506 32,18", ",3432288 14,35,6409656 17,20,8310828 42,21,8473447", " 25,49,6501173 39,20,9147209 23,18,9076609 17,42,6", "590808 8,23,8390061 10,21,7172012 31,18,8657419 3", "0,11,5462976 47,4,7615074 3,34,8984638 17,10,65291", "15 25,42,6041560 28,27,4516225 1,43,5552414 20,1,8", "906866 34,30,5132837 48,8,8735004 24,10,9613809 8,", "27,2133519 4,10,7475163 29,23,537288 15,19,4234001", " 11,25,8394338 39,25,7335075 49,17,7295355 29,28,5", "734724 9,45,7977103 44,45,9426150 21,11,7410719 13", ",12,8148614 5,20,8219045 2,4,7667834 44,0,4065162 ", "17,16,2986739 14,22,4315066 20,21,5163059 21,36,32", "87413 21,4,9270237 35,47,9472017 14,42,7667833 2,1", ",8350709 32,26,3693506 2,30,7349062 27,18,939044 2", "8,23,6695940 16,3,6312580 8,45,5677652 25,36,88445", "87 8,38,9459047 3,20,6964441 6,37,9374938 18,", "37,7300711 5,42,8448125 1,4,7192792 22,35,5676454 ", "35,42,8739794 2,35,8999520 12,8,7948084 25,22,7010", "857 40,12,5036895 15,7,8317692 31,41,2902297 7,9,5", "339948 25,24,4339180 35,30,5265509 12,15,9243649 1", "7,34,9705718 43,11,4879650 19,33,3903102 21,49,512", "2174 14,20,8078448 22,16,6768567 1,46,8416459 7,45", ",8173069 7,38,7821058 31,48,3838632 13,48,5747549 ", "31,40,7768098 2,42,9758402 49,34,13613 44,33,80813", "54 28,8,9691280 7,6,7474648 16,30,8947476 36,14,77", "70743 37,38,6909162 16,42,8302191 30,17,9638063 32", ",48,760845 39,47,7655369 1,10,2997384 8,9,7990292 ", "30,43,8933800 4,36,7295711 9,37,3253482 38,48,1772", "679 27,45,629724 45,31,9757006 24,5,7284402 6,23", ",465230 1,24,6276087 34,24,7967642 37,33,1303791 3", "2,23,466207 26,44,8401434 2,25,8988169 10,11,98562", "84 10,30,7718343 21,14,5342654 22,20,8014270 21,30", ",9449445 25,16,8182137 48,27,6527842 35,36,6584246"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 167330792;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    int N = 50;
    vector<int> cities = {38, 48, 24, 41, 30, 13, 7, 29, 48, 16, 20, 38, 30, 7, 14, 7, 10, 16, 46, 9, 48, 7, 8, 17, 22, 17, 14, 32, 43, 8, 32, 29, 38, 43, 9, 7, 10, 13, 32, 41, 14, 7, 29, 32, 43, 27, 38, 6, 29, 32};
    vector<string> roads = {"5,34,9860058 18,49,7752331 38,10,7930834 13,7,4739", "020 0,5,5516821 34,19,3291139 40,1,9137756 45,31", ",6622856 28,36,6571463 33,12,8630660 19,15,5168319", " 14,43,7930886 1,28,8099389 6,14,3618666 38,9,9019", "714 47,37,8544879 9,6,9311911 9,27,6046638 40,44", ",9851984 31,3,9381325 20,9,1082165 21,26,9443712 3", "8,35,5882058 2,28,9127543 47,12,1376261 2,21,80349", "92 7,32,577286 9,48,5858877 17,39,3250830 2,45,650", "4896 28,21,7814064 31,28,8483823 34,0,80563", "53 10,32,2950869 37,12,6624504 31,36,8365644 1,31,", "5936827 37,18,5682008 16,20,9570666 31,21,5165199 ", "42,40,3978391 48,6,4267442 0,23,604845 15,23,10127", "01 32,35,7382047 26,42,8731145 45,21,5910241 2", "5,37,9438797 21,3,3265966 6,35,9590413 0,15,881637", "5 42,31,2431001 36,40,5051279 25,12,7294967 13,9,5", "876217 17,38,5170551 22,4,6386702 1,26,937277", "6 14,11,6226658 35,7,4631737 31,26,7483093 29,27,7", "901102 47,49,9152002 40,3,5074813 2,31,6998731 15,", "34,6758237 36,42,6208568 12,49,6023109 2,44,679338", "3 40,2,6607977 41,16,9010101 40,45,6121289 3,45,43", "12037 27,8,5650765 14,41,9844993 41,46,9242704 26,", "28,6022957 45,42,8641694 19,23,8995506 45,36,68980", "05 33,47,8624392 9,11,1824670 9,8,5176861 43,48,31", "24236 45,44,6100718 4,16,4267268 47,2", "5,2745728 43,11,9809509 43,38,3802166 36,26,617244", "5 14,48,8700305 45,26,5136270 44,31,7599420 44,42,", "6220555 42,28,9948561 48,22,6980794 31,40,8432130 ", "44,36,8952460 38,14,1271712 33,49,7079967 2,26,713", "7820 49,37,4677473 20,24,204901 33,37,6976939 13", ",41,4891788 29,46,8748104 14,13,7474095 40,21,", "5483224 1,2,7623612 4,38,9301330 40,28,845513", "2 4,41,1493290 29,38,6148303 2,36,6473054 41,48,99", "70265 29,39,8018038 2,3,8096374 36,3,7387720 33,25", ",8605308 21,1,2436020 39,20,8746913 6,4,8674344 6,", "20,8659870 45,28,7291660 44,28,8075761 19,5,621369", "8 3,1,8896719 35,14,1492558 39,14,6327417 33,18,39", "53598 17,27,6205265 32,22,6871189 29,48,798199 18,", "12,7703563 30,11,8342050 0,19,8656838 44,21,176727", "1 45,1,5952601 44,26,9831036 1,36,7909233 43,16,84", "30476 26,3,7999393 21,36,6542546 16,24,8787785 15,", "5,7224516 20,10,9563138 40,26,7832686 13,10,998865", "3 42,21,9905134 30,29,3336643 16,11,9443388", " 39,9,5895074 9,32,100151 1,42,5093824 18,47,40834", "20 32,8,6130877 1,44,5806114 42,3,8199194 25,18,", "5659663 10,14,6089797 7,46,3071279 6,38,7653227 42", ",2,9037266 3,44,5749895 28,3,8034385 6,29,9918365 ", "32,27,7518448 38,11,4898860 25,49,9890148 22,6,974", "8433 6,27,5606910 30,8,5828550 34,23,8247080 10,6,", "6885198 14,32,2923485 23,5,6626909"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    int N = 50;
    vector<int> cities = {31, 12, 31, 40, 17, 25, 38, 17, 28, 35, 18, 28, 26, 30, 31, 9, 12, 40, 30, 22, 8, 44, 3, 35, 9, 25, 44, 49, 8, 25, 38, 35, 30, 8, 13, 30, 26, 3, 28, 6, 20, 42, 13, 27, 9, 30, 35, 49, 8, 18};
    vector<string> roads = {"3,6,9743729 14,1,8446732 14,46,14726", "58 34,16,8162685 11,26,7101154 49,36", ",8339435 22,13,5184125 49,22,6465752 23", ",19,4409461 37,8,8782567 1,2,5743380 35,9,7", "722407 37,9,2796193 46,2,6459773 44,42,9533045", " 5,15,7972261 25,49,4111 46,48,8505556 0", ",43,8660014 12,37,3399380 11,27,840967 ", "20,28,7866919 22,3,376393 3,18,8245260 38,42,284", "0306 48,1,8257883 39,5,6034070 47,2", "3,9851930 40,13,4834844 21,41,2094324 13", ",44,5196825 7,47,7466332 45,43,56461", "36 14,2,3188902 36,30,6657657 21,19,6124410", " 10,34,8986649 43,4,8630456 18,25,17", "02373 19,7,8933341 6,30,8374353 42,11,1", "107358 27,49,5470280 15,39,9653180 8,49,39", "3192 17,40,5981581 27,31,7832443 17,20,582413", "8 25,27,6810012 4,0,9408125 27,38,72874", "18 49,38,1173170 20,42,5093302 41,47,842072", "2 28,42,3089548 38,8,15968 33,10,710", "5251 29,45,5579011 23,41,7007142 11,3", "1,3435322 13,18,6251164 9,36,7334729 40,9,8", "535068 33,24,8500785 17,8,3335961 0,29,81485", "21 17,38,7189575 24,16,8309599 27,4", "0,436593 28,44,4164640 21,23,3940727 16,33,", "6938655 4,29,1198218 14,48,6629885 35,2", "0,5787758 7,41,7482854 20,8,4591664 7,23,895", "6260 35,40,8345662 30,9,9875685 36,12,6987", "126 3,17,7290056 6,17,3196176 34,24,2", "937249 44,12,337710 44,26,3638407 38,44,49572 7", ",21,8300795 29,43,5904865 13,28,1", "785572 3,25,4979615 9,13,92064", "24 11,28,5311661 24,10,6310271 10,", "16,6927829 19,47,7765705 30,13,6903801 17,26,", "6212239 18,8,4659253 30,44,4865779 ", "37,31,3895403 26,35,3486537 30,35,4118431 3,8,821", "0306 11,25,958942 22,26,5587057 8,22,81967", "31 45,4,5154542 48,2,9455414 12,8,5583495 1", "9,41,5787777 12,13,6663781 27,8,285734", "1 45,0,1084620 26,30,1853153 35,12,9", "538383 46,1,5247885 6", ",42,1960603 34,33,2136901 21,47", ",7204774 40,28,722325 35,44,279114"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    int N = 50;
    vector<int> cities = {25, 2, 15, 37, 8, 2, 17, 37, 5, 10, 28, 37, 15, 13, 25, 3, 7, 0, 29, 9, 12, 2, 3, 1, 25, 20, 2, 28, 12, 13, 28, 4, 7, 0, 4, 15, 27, 19, 2, 20, 19, 17, 19, 5, 1, 2, 0, 8, 23, 29};
    vector<string> roads = {"3,27,93736 0,14,5710084 13,8,4441381 34,46,8517349", " 45,31,8441895 18,7,5537102 37,0,9933593 43,27,35", "09086 43,20,9432698 18,8,3569124 8,4,7887567 9,43,", "6822699 43,8,7752751 7,12,721050 6,33,964902 15,2,", "2487042 0,29,3505384 25,13,4517972 6,44,7564033 25", ",37,7873081 3,28,7395023 34,36,4553933 46,45,91565", "54 4,17,7586503 18,5,4697799 19,23,5843300 3,7,478", "5032 48,38,7870710 21,6,4397387 41,16,3781392 8,27", ",8089758 27,2,9793966 35,39,8122112 23,8,4522506 1", "4,18,1675267 18,19,988374 20,29,8338529 43,10,8710", "274 27,28,8634866 18,0,9500804 4,28,767654 18,1,86", "76014 26,40,4351845 11,21,5924737 27,37,114736 37,", "1,1821227 3,37,1312661 35,24,5903425 0,8,297718", "3 3,23,4948947 8,2,2279604 5,15,3200619 8,15,96874", "11 9,20,746179 17,43,3908583 33,42,1954095 21,38,6", "939243 9,7,3727046 9,37,2704062 3,9,8540754 4,15,7", "278236 8,37,1313520 23,29,5916416 39,32,7235818 29", ",25,9647517 20,23,9984241 10,4,9311127 43,29,19950", "9 25,4,443747 25,43,3650023 43,28,834454 38,34,931", "4210 38,41,9715947 25,17,4900908 29,9,1181171 0,20", ",9232241 20,28,4304077 17,3,4392933 28,15,7697299 ", "9,14,8833660 21,46,2470137 37,20,2395633 21,32,570", "1615 1,5,1646809 45,38,2353382 16,24,7260823 41,30", ",3555094 17,13,6214096 14,10,4722849 17,18,2224024", " 13,15,5950008 12,18,8037704 3,25,7279946 27,4,497", "5891 28,0,993739 27,10,2822582 18,25,5817748 1,14,", "5463441 24,22,7345867 43,37,1765704 1,2,4314815", " 2,12,8407505 0,23,1960227 13,3,3550949 15,37,5700", "67 29,27,6966146 19,13,6207354 27,15,9553570 15,0,", "8946871 23,2,5992930 12,8,8628343 1,15,1547169 40,", "44,5942602 1,3,7245428 18,2,5524918 37,29,3670816 ", "0,1,4397399 37,7,2072812 3,0,3172858 5,19,3400590 ", "28,8,5045643 35,32,5159922 19,12,3238922 4,19,6558", "033 13,0,5346425 31,47,8128462 4,14,9468270 2,0,76", "44038 39,45,8835291 8,14,4553945 43,23,2729441 10,", "37,1046372 39,49,9863578 23,28,973720 20,2,300145 ", "9,0,9896453 14,13,6841653 23,7,9824280 29,7,888331", "9 25,9,4856742 20,19,5839368 7,10,896332 3,8,23816", "17 3,12,2402333 20,8,2366130 31,11,4760945 14,37,6", "280461 32,22,2529082 35,36,4222577 17,19,2388223 1", ",10,5628615 25,8,1176876 9,12,2729030 13,7,9978600", " 29,14,3745435 5,2,5084136 43,2,1293915 9,23,35736", "43 28,37,3511414 0,10,2077233 13,29,2894167 37,12,", "7883048 10,5,9729962 2,7,5194089 2,28,7420068 4,1,", "9350110 10,25,262927 0,12,9955020 17,29,7767358 7,", "28,211638 3,4,6104745 0,19,9892410 30,31,8018738 1", ",20,1096269 29,3,3630428 25,2,143914 18,3,5653357 ", "37,23,9974411 0,5,8837249 28,18,1824665 1,25,11043", "24 26,21,8796311 10,19,3882166 16,44,5785656 46", ",24,407175 17,27,6969209 37,5,2098553 3,15,4167929"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 58095196;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    int N = 50;
    vector<int> cities = {13, 47, 18, 16, 17, 16, 42, 14, 29, 25, 13, 47, 40, 25, 5, 36, 32, 40, 17, 40, 29, 21, 32, 25, 43, 21, 29, 21, 48, 33, 4, 40, 16, 25, 6, 17, 37, 30, 26, 48, 6, 40, 43, 30, 48, 32, 3, 33, 6, 4};
    vector<string> roads = {"40,18,6401931 6,30,5334184 4,16,6842406 5,14,22668", "8 48,26,2259099 10,24,1740902 18,33,4265894 17,8,8", "838745 16,43,4098147 8,6,7742039 5,47,7011642 26,2", "0,910605 17,32,2813252 6,5,8557404 26,14,2169324 3", "9,15,4948249 30,26,9535758 1,7,8353537 6,43,280749", "0 31,0,6783455 48,40,8623698 8,43,8103009 1,12,180", "4311 26,8,8114965 43,14,9069883 18,20,3319081 43,2", "6,1966495 21,40,7708122 16,42,1564177 33,40,325379", "6 6,37,8258357 21,32,9865188 7,34,9653112 37,20,47", "92577 47,17,2923001 17,21,5966177 2,38,6490322 6,2", "9,7591373 42,14,1676265 36,16,7776366 40,42,351147", "9 18,36,2947480 3,26,3973805 40,26,9587146 26,36,3", "463996 43,36,5141634 48,21,419034 25,43,7535280 26", ",5,864553 4,33,8772719 23,24,8232695 32,33,1851798", " 21,8,3177461 3,43,4576857 16,48,7199066 8,18,1033", "432 28,39,5539533 16,32,2862111 17,33,5670045 42,2", "6,5185476 40,20,9910578 29,48,3258120 32,37,813992", "0 17,36,9365817 14,29,4808 17,48,666910 4,29,85757", "23 20,25,2979781 44,46,6389592 39,41,8372308 16,5,", "2164840 26,33,6990819 21,18,6333902 26,18,6306830 ", "19,28,4246513 8,30,9475252 6,48,3169580 26,29,6358", "855 33,25,1429282 47,14,8446733 15,22,7166511 30,1", "6,8902828 37,3,6352631 4,48,4326845 38,24,6635097 ", "49,24,6440156 37,40,2891750 11,46,2515463 47,13,67", "24578 30,43,1110229 14,32,9925696 33,20,1336590 37", ",33,9046789 8,42,2695144 33,14,5739332 42,18,72875", "43 36,25,2153463 48,14,6461710 47,21,591098 17,43,", "7446846 6,16,9963163 3,32,292594 17,26,9963672 30,", "21,7014832 40,16,2821573 48,25,493144 47,43,605052", "3 29,33,7987899 27,2,6702770 22,31,796668 32,42,31", "83710 21,43,2834627 48,5,4071884 5,32,4405624 30,3", ",198133 42,4,7691841 36,8,9608768 35,15,3027280 38", ",10,3243444 13,29,4783862 6,13,9247452 12,9,805230", "9 20,36,9469786 20,8,138574 30,32,7704426 49,45,76", "79186 8,29,5329745 14,25,9808154 20,47,1533073 48,", "42,520894 7,9,7083821 11,45,6679388 49,38,9297305 ", "47,4,8967257 20,16,4484985 5,13,9008301 14,6,22815", "75 21,3,6335687 4,32,1211005 26,37,5993396 43,3", "7,2909190 39,22,5747652 6,40,2356834 5,25,7090373 ", "12,34,5867926 5,18,444404 24,2,9948147 42,6,526229", "5 29,32,5461625 13,30,276989 36,47,3804526 20,32,9", "333368 20,42,3513347 13,16,7511406 28,0,1176221 19", ",39,5298222 4,5,2128836 6,18,6283251 47,30,4556981", " 13,21,8946842 13,43,4757034 3,20,6624399 23,11,45", "17272 17,25,1378377 29,20,1661613 36,6,7812510 27,", "10,9561715 32,6,3822292 5,8,5135940 25,42,635210 0", ",41,5210444 18,14,4172238 43,5,6841814 25,16,25261", "30 5,42,865091 34,1,6677608 33,36,1586888 18,25,60", "91980 14,20,4454228 49,27,4746334 18,37,9606223 43", ",4,5829368 39,31,1016249 1,9,1640420 47,16,2832292"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = -1;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    int N = 50;
    vector<int> cities = {39, 45, 33, 5, 34, 41, 13, 2, 43, 41, 39, 33, 41, 39, 27, 9, 43, 40, 49, 11, 24, 3, 24, 35, 41, 8, 12, 13, 26, 34, 12, 4, 27, 34, 49, 38, 24, 13, 40, 46, 43, 8, 33, 12, 35, 39, 33, 26, 28, 9};
    vector<string> roads = {"28,0,6766464 3,41,8537533 24,33,5009270 2,12,41478", "73 25,44,1206321 22,20,5282862 24,12,3852608 2,11,", "8947612 11,8,8756087 45,39,9098060 41,39,8032546 3", "4,41,6609299 38,8,7806179 46,3,3820759 40,2,", "4967859 12,35,1289045 34,5,5080769 33,2,7885439 2", "7,12,7142550 24,3,1816099 39,3,3090542 14,31,55", "46386 2,41,6314120 19,36,5235600 16,15,439305 34,1", "3,1322614 37,1,9357189 39,8,7130661 45,40,4376018 ", "2,39,8934310 21,29,9849429 40,8,2427099 37,6,24559", "09 35,38,4375747 44,42,8506245 5,11,2742450 24,49,", "7184235 35,46,7092107 43,33,5350141 40,41,3932446 ", "4,35,1357316 42,1,6503091 1,25,2441390 7,32,318069", "3 2,45,7736481 12,9,2213129 4,46,2401177 26,33,473", "6250 42,37,9373988 12,49,7887959 34,12,1085531 4,3", "9,306799 43,13,8156524 13,27,9176038 12,40,662021", "1 4,3,5289547 22,30,6686205 13,33,5476879 46,9,398", "0572 49,38,3580281 9,3,1403481 45,13,2848843 13,3,", "4451010 13,2,1163075 20,18,8389927 26,43,9179988 2", "8,27,5851072 24,28,9323346 4,13,2307534 39,46,4654", "450 2,4,5131360 22,18,1972578 8,26,1517561 20,30,2", "550430 42,6,5443716 0,4,7678365 24,11,2039605 40,2", "6,8616596 9,41,7562071 9,26,8739846 33,5,730527 27", ",4,9048799 27,24,6755288 49,28,724451 46,28,668761", "0 39,38,3671237 9,8,1334327 11,41,3656560 0,33,", "7859085 16,48,8740355 27,35,6080741 11,13,3369164 ", "3,35,349923 4,43,5875246 18,30,5084834 12,43,33206", "89 38,13,9124715 46,41,4987093 49,45,1988405 15,48", ",3622304 5,41,33157 12,5,2271278 8,0,3357062 2,8,9", "384275 47,23,565010 24,41,8569813 3,34,8835303 41,", "4,6443389 3,8,7070259 4,5,6729219 3,12,3128952 40,", "24,693097 49,41,5190600 27,33,6408060 45,28,169178", "8 14,32,1267367 46,12,9970325 45,5,5437640 41,0,30", "6905 10,23,9702292 40,39,7096983 8,41,151018 49,33", ",3857213 49,34,7528074 39,5,9262173 0,12,3464974 3", "6,29,7832073 38,12,9918208 5,46,894238 31,32,62933", "08 36,21,1293734 43,45,9061158 19,21,9269085 2,43,", "6856903 38,41,1827405 24,0,9759893 26,0,8029193 ", "49,5,9407770 26,41,2733449 39,43,5718812 19,29,287", "1587 9,34,157846 14,7,8340277 10,47,4835624 7,31,5", "589759 39,9,2808457 9,4,7370538 2,24,589349 11,28,", "6842131 13,41,1077991 34,27,8491611 46,2,3579563 1", "1,45,8634392 35,0,1280624 12,33,1143331 8,49,21731", "88 42,17,3388332 13,28,1732843 24,13,8521885 28,12", ",9776748 45,9,44065 41,27,8472950 49,9,60838", "68 49,11,9085558 5,3,8691561 45,12,2419046 38,9,16", "77159 5,26,4438385 45,3,8973340 13,26,7664495 27,9", ",1737284 11,12,3619312 28,33,1357569 43,24,7967198", " 33,9,7343834 0,49,9058376 37,44,6393240 0,9,728", "1931 38,24,1733321 37,25,5985051 3,28,3940961 41,3", "3,6615439 13,12,754696 40,13,8044785 49,26,5340867"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 72962927;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    int N = 50;
    vector<int> cities = {37, 30, 19, 11, 26, 22, 8, 42, 19, 11, 41, 37, 8, 14, 24, 21, 2, 14, 31, 17, 41, 31, 26, 24, 40, 49, 30, 4, 11, 13, 15, 0, 32, 40, 49, 9, 0, 9, 39, 6, 8, 29, 47, 2, 31, 19, 25, 18, 22, 43};
    vector<string> roads = {"38,7,5847484 7,20,8159323 12,8", ",4462730 16,36,9751362 35,46,671", "5715 20,38,6940476 5,21,32209 4,28,4414467 ", "46,31,4249645 38,27,8453823 20", ",27,9757554 0,15,2578256 27,1", "6,8523133 37,3,6385301 11,25,9527620 7", ",27,7335602 17,13,2663668 9,11,2", "635046 45,7,8384119 0,29,8110075 45,3", "3,7319134 38,23,6432076 45,36,9959", "842 23,16,8783692 7,16,6408325", " 23,27,7796862 34,6,2927979 44,", "7,9934401 45,27,6973966 27,44,58031", "44 25,43,9034116 22,6,9688187 9,40,", "8297991 44,33,7507350 18,40,8486", "158 16,20,7665248 3,4,238595 16", ",38,8319351 26,5,492978 4", "5,16,5526720 11,17,9136582 31,14", ",1999851 34,30,4305170 6,2,9034050 42", ",14,737716 44,20,8841111 44,38,8376327", " 24,3,3446135 11,15,1631018 9,", "17,5070542 4,40,9404519 47,46,", "1478498 23,33,9175317 23", ",45,6315178 36,44,1957318 32,22,1", "023289 20,36,9647508 1,3", ",6781938 13,0,1139726 27,36,", "4524403 0,34,6668242 17,29,8736654 11,2", "1,7553939 4,2,5716787 33,7,57793", "30 29,12,400506 25,19,7429924 20,", "23,5234833 31,9,8696602 20,3", "3,1461714 8,29,6016830 0,18,10130", "01 15,24,4391606 29,2,2578231 33,27,6", "991943 35,48,508457 16,44,5414462 2", "4,41,1467087 47,34,3276866 ", "8,42,9403087 39,35,3073953 29,43,4481", "733 32,5,858067 36,7,506151", "6 10,29,4015415 7,23,6837677 33", ",16,5878809 2,25,7285150 49,5,4853889 31,4", "1,9241997 23,36,5517370 42,28,5382", "70 30,15,3525185 39,0,129020", "9 36,33,5081972 22,26,701896 4", "1,9,6825718 34,13,3393374 22,28,", "5948660 36,38,6594662 23,44,60042", "38 39,19,2413930 37,28,2804", "498 48,39,2448367 45,44,996", "4464 38,33,6147322 29,48,7705067 12", ",48,5319908 5,8,2694801 13,19,25", "31653 43,41,4587108 2,42,3686237 6,", "48,5183278 45,38,5045514 32,14,28908", "90 28,10,6675002 1,34,7910758 37,47,47", "46411 28,13,819646 20,45,5508047"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 241034219;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    int N = 50;
    vector<int> cities = {36, 47, 22, 12, 29, 26, 11, 7, 33, 29, 9, 37, 45, 18, 24, 18, 9, 14, 6, 23, 45, 1, 13, 20, 44, 12, 18, 44, 45, 6, 13, 18, 4, 22, 15, 20, 38, 25, 24, 22, 10, 21, 0, 42, 43, 23, 47, 1, 38, 4};
    vector<string> roads = {"28,39,5842558 26,47,442597 36,9,906422 48,2", "2,6651123 2,39,7079233 11,2", "7,9030757 43,6,2652766 44,3", "8,4342893 35,33,7838075 4", ",35,7867566 32,18,5915472 15", ",9,1928714 3,41,2751718 21,10", ",5364791 28,3,7321717 16,1,994650 38,46", ",3122821 0,27,7014971 39", ",49,8809535 33,15,8869340 41,49,594", "5247 10,29,6666452 13,32,2272599 4", "0,17,9240319 11,36,3976941 12,6,64", "3947 13,15,2766604 6,0,9566768 35,3", "1,2315018 15,46,1074427 16,23", ",1240421 24,45,3959246 28,41,708366", "7 8,35,8353836 43,7,8252582 13,46,6", "042378 22,19,995992", "4 48,38,591842 12,35,8918587 ", "33,1,8263367 46,43,4013921 2", "9,21,3661608 18,5,517397", "9 39,41,1530261 21,14,5516364", " 2,3,8570146 1", ",21,2298923 21,42,8424624", " 28,49,8103438 35,5,78851", "23 3,39,9676539 22,26", ",9976846 2,49,5230038 12,8,81", "92816 4,24,2636490 2,41,9478271 ", "30,40,5848342 11,6,2060360 22,", "21,9429131 6,38,4187064 47,", "45,5035188 8,14,4478178 43,20,1", "747381 29,25,7904886 32,33,4067", "731 19,14,1933316 11,26,7474116 28,2,", "6101435 21,37,4799432 13", ",10,3339903 27,31,6688760 8", ",46,5750891 46,9,817", "4269 20,12,1209520 21,44,3825934 16,48", ",8882250 26,23,1910783 10,16,", "9056116 13,35,6303535 5,32,304", "8291 45,43,5934665 14,42,491498", "4 30,17,8330953 26,37,2020692 ", "21,33,9992934 8,23,8866074 21,20,19", "52857 48,18,8480672 19,8,127", "135 25,7,3722114 3,49,7380411"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 341746806;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    int N = 50;
    vector<int> cities = {2, 5, 15, 6, 37, 38, 32, 6, 23, 5, 30, 36, 9, 46, 19, 38, 10, 0, 19, 11, 19, 4, 8, 26, 31, 33, 22, 10, 38, 12, 18, 27, 15, 20, 32, 43, 46, 15, 0, 6, 23, 30, 43, 18, 11, 13, 46, 9, 0, 14};
    vector<string> roads = {"44,3,2891010 14,43,4256086 5,20,6413", "031 8,43,3984910 38,13,8207159 0,30,7036", "152 35,43,3276217 45,2,9330586 34,41,9", "710820 30,31,1092082 9,43,3992980 2,", "14,9487721 43,33,9364925", " 29,25,7044862 27,37,7223363 28,46,4361989 46", ",12,9659924 42,0,8244709 13,1", "9,2727197 47,40,1554957 18", ",12,4217068 11,26,3209338 20,26,7", "288305 19,35,248499 42,2,", "8743835 15,10,8896150 49,3,94304", "63 11,18,3996639 31,27,9033935", " 3,24,7680401 25,47,8996384 8,28,781921", "8 6,37,840773 5,43,3148043 32,1,3867602 9,12,", "5013022 43,26,2258597 24,49,1191837 8", ",6,6421859 14,1,1523718 12,13,5362717", " 1,47,7296800 8,46,8994677 31,2", ",8024876 46,10,9688257 22,9,", "6256663 10,5,3795449 26,33,4573445 0,4,4206", "571 32,33,5041843 28,42,950", "4325 7,29,6434268 46,32,1772027", " 42,7,6991587 28,47,8607059 10,30,", "4622120 42,37,7178775 14,37,487665 ", "33,27,917511 22,10,8347187 23,31,", "9203235 44,49,4734300 35,15,1736571 37,2", "3,875762 0,13,7691846 29,37,2792", "264 45,43,3071949 32,13,43", "62678 1,2,1641937 19,32,17999", "77 10,13,8370062 28,7,2140840 38,48,76", "34637 36,13,655734 11,48,8558977 48,23,", "8391611 13,22,3759874 44,24,9989797 23,0,6924", "36 10,38,5020263 2,43,8437472"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 235701961;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    int N = 50;
    vector<int> cities = {32, 39, 29, 15, 48, 3, 34, 31, 15, 9, 47, 21, 19, 26, 39, 21, 47, 8, 3, 13, 31, 1, 32, 3, 32, 17, 34, 12, 46, 13, 29, 27, 39, 44, 43, 21, 34, 13, 3, 0, 24, 39, 8, 30, 0, 32, 39, 47, 25, 42};
    vector<string> roads = {"7,11,1489067 46,41,8522482 43,3,552583 13,30,19465", "34 8,1,9381986 43,0,2831655 40,0,3079296 23,20,609", "0711 20,49,6057906 22,31,3289821 17,29,443835 2,25", ",5767582 10,39,5086469 26,10,9731165 2,41,5977698 ", "20,38,5052040 38,23,9226855 42,7,5113230 7,8,59208", "92 5,47,7467332 39,32,954144 44,11,3061146 21,40,4", "945754 12,43,4408860 37,48,5209644 31,43,6769008 1", "7,34,517697 22,5,6670879 24,21,9959202 5,37,556352", "0 12,30,7538672 4,6,9638408 35,39,4191948 17,3,263", "4956 13,41,5335710 30,41,6729443 26,25,7954445 49,", "4,1486029 18,42,2769192 26,34,9117634 41,10,637673", "7 29,31,1309835 30,48,5145131 36,4,7129172 30,42,1", "836893 17,39,2913067 1,10,9906453 46,21,5544892 48", ",9,9594953 29,13,1243790 33,49,9524543 26,47,68429", "00 43,11,1738533 24,13,3996158 3,1,4167317 43,13,5", "045102 11,39,5203652 1,21,4391498 7,47,186999 47,2", ",1017461 32,13,1743724 11,26,4749681 8,3,4319314 3", "0,25,6956521 48,25,2443894 25,37,5415353 32,3", "0,749192 26,8,2025784 24,41,668037 11,29,6160670 3", ",24,9670445 4,33,5658162 18,27,562966 46,42,171046", "6 23,28,7694424 27,45,3931612 44,1,430118 11,2,396", "6984 26,21,1395668 31,42,6969918 23,33,6505102 43,", "26,3499266 18,40,4240129 16,42,4487887 36,20,26877", "22 0,16,6256977 26,1,4997798 31,26,4361815 44,18,1", "232707 10,48,9322892 0,10,2948556 16,19,9899172 27", ",40,3063818 35,41,9374235 8,21,6288705 16,46,69534", "42 6,14,6564328 7,48,7689169 15,37,7600591 3", "5,8,8642185 14,28,8060331 32,19,2401048 6,49,89176", "59 10,18,7482583 1,45,180234 14,23,1680808 38,4,64", "30292 35,7,1120921 49,23,5709781 47,27,895880 39,3", "1,4940992 21,11,3027005 7,40,5267225 20,14,8912390", " 49,38,4904563 3,34,3287984 11,22,2675540 38,14,84", "92662 20,28,5568360 40,10,1833394 42,45,817323 5,2", "5,5663412 26,18,5014924 16,40,3778716 33,6,8447272", " 8,34,8168399 2,48,4475488 4,23,7629034 47,35,9440", "990 36,33,7823782 22,29,385117 28,33,9625001 41,29", ",4102607 29,46,7473054 23,36,9521962 0,13,1202655 ", "19,29,1758370 17,16,1166988 35,16,9138358 11,42,40", "66480 6,23,8123635 48,21,1701012 13,45,3884977 39,", "7,4077078 6,36,5210862 13,22,4214508 12,17,255952", "9 14,33,9466524 34,40,7900396 37,7,4004829 44,30,8", "418113 2,29,1213764 44,9,9943925 0,35,1786056 41,1", "7,1880834 34,0,1806095 18,19,9230341 11,15,6973002", " 46,39,6584346 14,36,9569652 19,1,3589685 42,27,31", "69305 15,7,1644710 31,48,6153357 32,22,5790790 22,", "3,7366531 1,9,187473 40,19,4701445 45,37,4988337 3", "9,24,3141634 5,48,3673735 21,18,7198878 16,12,2820", "98 16,26,1821171 40,17,2417623 46,26,9956608 20,33", ",423566 49,36,7311200 28,36,5015976 4,14,8176475 4", "1,9,353344 17,0,3824488 38,28,5206125 11,10,437304"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 123623595;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    int N = 50;
    vector<int> cities = {16, 20, 10, 3, 38, 17, 10, 33, 7, 47, 22, 35, 18, 29, 31, 18, 5, 24, 42, 21, 2, 1, 25, 49, 41, 35, 42, 31, 22, 5, 26, 20, 25, 35, 25, 45, 47, 20, 26, 42, 0, 33, 10, 2, 42, 37, 20, 34, 6, 14};
    vector<string> roads = {"14,47,7914489 31,15,5938913 2,21,6766783 3", "8,10,2295239 15,33,3854889 39,12,36127", "43 29,32,7190773 15,42,8760106 17,1,7972666 48", ",22,7941052 15,34,1959169 10,48,20552", "73 38,3,9372834 47,38,9093251 3,7,2190325 12,4,877", "3075 10,33,6800086 37,6,7795679 41,35,9900244 16,1", "8,3603069 25,47,7871408 37,2,7478100 18,49,5341433", " 48,3,6707240 25,40,5722408 35,2,5537292 21,16,700", "2369 43,31,4057271 19,43,3142282 27,23,509114 15,1", "9,7557204 29,35,3116988 0,45,387406 2,18,2898184", " 24,17,4721720 38,14,682874 20,10,8439590 21,7,422", "4712 45,1,6409963 0,48,6803599 46,25,1427979 14,21", ",5924955 17,6,5042219 15,30,9799022 15,44,6132067 ", "29,17,3051730 32,37,8768065 32,19,2350746 18,4", "5,1467896 34,42,6036475 46,30,1914985 40,41,363700", "7 3,29,1979834 34,32,3688991 16,3,2662023 18,44", ",9360138 1,20,5257575 20,22,327110 24,44,204", "9888 38,30,7419583 25,48,890593 17,33,6075929 46,", "37,3521074 2,48,6840936 40,6,6964610 22,24,7892282", " 6,21,5566530 17,46,8723091 2,24,2460976 21,3", "8,5455827 32,6,93622 20,35,4074611 12,2", "7,2020743 10,16,8445737 26,46,9822921 21,1,2750982", " 15,49,8490650 44,49,4593668 47,43,", "9465813 11,12,6828773 11,23,8655367 33,32,4904887", " 27,4,7648833 5,35,5562792 42,26,99", "26189 33,37,4683925 11,39,5720759 37,30,155609", " 17,41,1175270 20,40,8713123 40,2,5446398 25,5,637", "8697 20,15,6388645 37,3,6192678 42,35,291647 23,3", "9,7682936 37,14,1376839 1,10,1836632 28,13,4751081", " 34,37,698553 29,0,9458976 42,46,907", "1624 19,41,1408203 31,19,2212110 16,47,374245", "0 25,38,7886031 35,6,5863036 29,45,1007443 36,2", "2,5024382 30,48,4035323 35,33,2812038 27,39,95593", "62 39,4,7843770 19,38,9901580 48,38,3391319 3,0,21", "41399 45,7,3302958 33,14,6610956 30,21,4615873 10,", "46,3224705 30,35,8958048 34,20,9593619 2,16,443", "4498 0,7,7060221 22,38,6432456 29,48,5778519 8,9,7", "657258 27,11,8535228 45,49,9821718 44,46,5056139", " 14,22,2101704 4,11,8006160 49,33,449301 32,0,26", "99639 35,46,6472907 38,36,7117440 23,12,6310918 16", ",6,2226381 44,17,631036 36,0,2274990 34,2,4830285 ", "10,44,417333 10,18,9870724 46,2,2873926 10,6", ",7992353 26,47,3761263 49,22,4796318 ", "21,45,2026096 14,40,1547260 3,31,3449699 45,24,668", "7373 29,1,2627668 24,18,5167200 1", "0,34,9338750 4,23,8324046 35,31,9485681 10,36,9310", "291 18,7,1554145 44,37,6524150 21,44,645240 15", ",2,8290852 2,31,2936283 5,30,6782084 29,24,2808131"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 193004294;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    int N = 50;
    vector<int> cities = {13, 0, 44, 38, 10, 22, 19, 8, 25, 6, 10, 36, 38, 0, 15, 1, 5, 20, 4, 10, 27, 29, 6, 28, 39, 7, 9, 20, 22, 40, 1, 20, 23, 32, 43, 34, 1, 13, 29, 12, 4, 40, 32, 22, 23, 46, 23, 12, 1, 28};
    vector<string> roads = {"25,45,4284916 41,48,9107146 20,15,2180205 6", ",29,7830623 20,49,5430119 9,7,458589 8,18,2534023", " 16,30,9192864 17,34,7959638 20,9,4080728 48,9,752", "8879 9,23,8210873 22,25,4357590 34,45,4045608 22,3", "3,1692216 41,47,2200388 9,15,8333130 29,46,1824145", " 46,12,3897453 47,13,121182 6,14,5846849 1,29", ",3546382 39,6,5470146 36,32,3342270 42,33,361", "6938 36,1,8595277 25,32,773847 47,8,5933846 29,0,9", "033881 9,14,7237281 39,32,6046459 13,36,3696517 45", ",19,8751887 7,1,7627764 0,28,1053075 15,", "17,3138888 7,46,4653670 12,17,4701954 44,20,566011", "6 22,49,5952495 40,14,5998914 10,41,5525138 1,5,10", "40063 41,36,8055541 24,16,264586 14,21,7084149 10,", "42,2333399 43,33,9345729 25,23,6560983 28,6,243133", "1 15,43,7952227 43,1,845356 4,45,7892405 5,49,4094", "995 44,49,5172735 32,18,9445166 1,39,2538294 25,18", ",4986564 29,38,8053464 47,18,4343383 32,45,6445125", " 22,17,3075206 21,44,3326896 48,19,4965427 44,27,1", "794784 45,20,4493649 5,41,6690654 17,1", ",2533917 19,8,8958401 10,33,4759571 33,5,2894619 4", "3,21,2619100 35,26,9797364 0,13,3054636 23,13,3717", "857 14,17,2007621 27,15,9960662 39,22,5966883 43,4", "7,3094194 44,33,8808641 23,41,5543954 4,0,3278973 ", "12,10,7793781 45,21,1620608 23,33,2564651 42,7,339", "4054 19,14,4871133 31,26,5391322 46,39,6780617 25,", "14,2654384 34,9,5435684 28,8,550269 12,6,86629", "86 9,0,1453372 26,11,4839267 19,12,860580 38,47,67", "35183 24,30,4929143 4,1,1298000 43,23,2744823 42,1", "8,5386064 34,40,9611175 21,29,7419189 20,14,735200", "4 49,8,4452149 9,42,979975 8,42,6448611 32,3", "8,5958695 11,35,2204180 6,1,1695523 1,", "22,474850 38,46,3593339 46,15,3405704 43,48,462286", "3 33,7,5866440 34,20,6511445 12,39,5054924 1,12,72", "2874 14,42,1651510 46,14,3649157 48,20,8384901 38,", "14,9836729 15,8,1647422 28,4,9792771 41,42,5636237", " 44,46,6707876 44,34,2933760 44,38,9875137 31,35,8", "524253 12,25,1995688 40,38,7768150 40,36,2188304", " 15,5,164310 0,33,3014087 20,36,1469822 4,44,99444", "04 20,8,5272637 20,42,2420937 12,13,4395971 44,10,", "5533513 44,39,8812322 13,38,842420 17,9,419511 44,", "23,9322187 12,49,9580685 2,3,3857799 20,21,4103718", " 0,39,6690827 32,7,7819643 40,8,4238892 4,42,30182", "84 0,43,8214319 40,1,2640613 31,11,5466430 41,", "49,5478275 32,19,8781036 8,48,2722860 33,6,1985731"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 131427131;
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    int N = 5;
    vector<int> cities = {4, 2, 1};
    vector<string> roads = {"0,1,2 1,2,2 2,3,2 0,3,3 3,4,5"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    int N = 2;
    vector<int> cities = {1};
    vector<string> roads = {"0,1,1", "1"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 11;
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    int N = 50;
    vector<int> cities = {41, 17, 34, 0, 19, 24, 28, 8, 12, 14, 5, 45, 31, 27, 11, 41, 45, 42, 27, 36, 41, 4, 2, 3, 42, 32, 21, 16, 18, 45, 47, 26, 21, 38, 19, 12, 17, 49, 35, 44, 3, 11, 22, 33, 23, 14, 41, 11, 3, 18};
    vector<string> roads = {"0,4,38 0,7,530 0,20,891 0,21,371 0,24,394 0,26,624", " 0,36,627 0,42,542 0,43,116 0,48,307 1,8,778 1,9,9", "8 1,17,575 1,22,725 1,25,192 1,27,458 1,29,384 1,4", "0,169 2,3,596 2,4,603 2,11,349 2,12,669 2,29,311 2", ",36,601 2,41,225 2,47,486 2,48,344 3,4,315 3,28,88", "9 3,30,203 3,33,329 3,46,22 4,11,870 4,14,790 4,15", ",424 4,22,758 4,30,369 4,41,140 4,42,280 5,8,417 5", ",23,54 5,40,451 5,46,254 6,8,187 6,9,475 6,46,544 ", "7,9,4 7,11,594 7,12,32 7,21,975 7,45,852 8,11,61 8", ",22,883 8,24,488 8,25,475 8,26,628 8,33,597 8,45,4", "12 8,47,521 9,30,109 9,37,385 10,12,527 10,14,272 ", "10,16,897 10,20,697 10,23,130 10,40,484 10,47,143 ", "11,13,460 11,24,194 11,37,856 11,38,143 12,17,933 ", "12,26,590 12,29,315 12,30,741 12,36,265 12,38,830 ", "12,39,609 12,41,550 12,46,130 12,48,175 12,49,78 1", "3,19,393 13,20,671 13,29,605 13,37,241 13,41,592 1", "3,48,304 14,16,585 14,32,541 14,38,133 14,43,902 1", "4,44,424 14,49,29 15,16,348 15,18,638 15,20,50 15,", "33,431 15,44,225 15,46,360 16,17,319 16,21,2 16,29", ",143 16,36,405 16,37,627 16,40,566 17,20,132 17,22", ",626 17,24,187 17,29,354 17,34,455 18,24,910 18,26", ",490 18,29,675 18,33,370 18,35,9 18,38,946 18,42,3", "14 18,44,723 18,48,235 19,23,270 19,25,59 19,27,26", "5 19,28,216 19,29,816 19,31,213 19,47,789 20,22,11", "4 20,27,29 20,34,334 20,37,169 20,43,694 20,47,668", " 20,49,865 21,22,406 21,29,965 21,32,663 21,33,65 ", "21,35,903 21,39,763 21,41,807 21,47,13 22,35,713 2", "2,44,480 23,35,459 23,37,99 23,42,353 23,47,763 23", ",48,337 24,28,817 24,30,926 24,36,163 24,47,639 24", ",48,76 25,28,529 25,33,963 25,36,470 25,38,351 25,", "42,337 25,45,637 26,28,338 26,36,86 26,45,641 26,4", "7,944 26,49,290 27,29,806 27,37,75 27,38,301 27,39", ",574 27,41,173 27,44,269 28,33,765 28,45,606 28,46", ",595 29,30,13 29,32,429 29,35,409 29,38,760 29,48,", "693 30,34,22 30,37,377 30,40,983 30,48,325 31,32,9", "70 31,33,535 32,34,239 32,35,444 32,42,193 32,45,4", "66 33,46,238 34,35,328 35,41,719 35,46,258 36,38,6", "4 36,48,361 39,45,190 40,41,475 42,47,561 43,44,78", "6 43,48,393 44,47,972 45,46,621"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 13830;
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    int N = 50;
    vector<int> cities = {27, 13, 42, 12, 43, 25, 26, 16, 8, 5, 33, 17, 16, 15, 8, 34, 7, 5, 21, 0, 15, 9, 27, 12, 7, 28, 19, 3, 10, 47, 11, 26, 25, 41, 14, 45, 14, 3, 11, 30, 31, 35, 21, 27, 36, 34, 36, 46, 3, 23};
    vector<string> roads = {"0,13,6264 0,19,10140 0,23,22831 0,29,31934 0,30,22", "16 0,33,9055 0,37,3226 0,39,8093 0,41,29129 1,7,31", "39 1,26,8908 1,30,7033 1,41,30548 2,12,16084 2,20,", "14375 2,21,26033 2,24,17025 2,33,30111 2,44,23270 ", "2,45,17622 3,16,12710 4,12,2754 4,13,27691 4,19,60", "50 4,23,2664 4,27,19073 4,29,3203 4,30,14584 4,31,", "27870 4,49,15614 5,15,22054 5,35,17927 5,36,28114 ", "5,40,20157 6,8,6378 6,33,12880 7,10,29671 7,11,203", "74 7,38,30272 8,13,28549 8,23,22163 8,26,7357 8,29", ",3938 8,32,13253 8,35,715 8,47,28349 9,11,12790 9,", "24,24875 9,40,16652 10,12,800 10,18,22489 10,48,14", "569 10,49,4182 11,13,20158 11,21,22465 11,22,22944", " 11,30,24562 12,15,3334 12,26,23138 12,28,23667 12", ",30,4848 13,15,395 13,22,4206 13,36,23772 13,38,31", "126 13,42,680 14,21,31624 14,23,14319 14,38,465 14", ",43,27167 15,30,29003 15,32,3598 15,40,32682 16,21", ",19359 16,25,12842 16,27,17958 16,28,17110 16,33,1", "8769 16,44,15810 17,28,18274 17,36,14378 17,38,170", "68 17,39,12088 17,43,10301 17,48,10053 18,25,372 1", "8,34,7724 18,37,14434 18,41,10496 19,26,6636 19,27", ",22770 19,46,8537 19,47,13331 20,24,10888 20,37,29", "703 20,45,24688 20,46,12329 21,39,3632 21,42,1412 ", "21,47,17693 21,49,2337 22,35,15006 23,30,3481 23,4", "3,16369 24,35,2178 24,37,2341 24,49,20573 25,30,19", "378 25,35,13732 25,38,13713 25,41,10522 26,34,1740", "1 26,37,24694 26,39,6466 26,45,15279 27,37,4394 27", ",38,2848 28,46,19346 29,32,18074 29,43,16894 29,47", ",13414 30,36,25608 30,39,4664 30,40,10163 31,39,25", "733 32,34,22169 32,48,31333 33,46,26568 34,36,2460", "6 34,47,18772 35,46,15699 35,47,12860 36,41,3446 3", "6,49,5903 37,40,6860 37,47,1601 37,48,27008 38,39,", "27850 38,44,24995 38,45,7907 39,42,30218 41,43,293", "66 41,45,3604 41,46,3901 42,43,19590 46,47,6097 47", ",49,30173"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 622849;
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    int N = 5;
    vector<int> cities = {2, 3, 2, 4};
    vector<string> roads = {"0", ",", "2", ",", "4", " ", "0", ",", "1", ",2 2,1,2 1,3,3 4,0,4"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 13;
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    int N = 50;
    vector<int> cities = {49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0};
    vector<string> roads = {"0,1,10000000 1,2,10000000 2,3,10000000 3,4,1000000", "0 4,5,10000000 5,6,10000000 6,7,10000000 7,8,10000", "000 8,9,10000000 9,10,10000000 10,11,10000000 11,1", "2,10000000 12,13,10000000 13,14,10000000 14,15,100", "00000 15,16,10000000 16,17,10000000 17,18,10000000", " 18,19,10000000 19,20,10000000 20,21,10000000 21,2", "2,10000000 22,23,10000000 23,24,10000000 24,25,100", "00000 25,26,10000000 26,27,10000000 27,28,10000000", " 28,29,10000000 29,30,10000000 30,31,10000000 31,3", "2,10000000 32,33,10000000 33,34,10000000 34,35,100", "00000 35,36,10000000 36,37,10000000 37,38,10000000", " 38,39,10000000 39,40,10000000 40,41,10000000 41,4", "2,10000000 42,43,10000000 43,44,10000000 44,45,100", "00000 45,46,10000000 46,47,10000000 47,48,10000000", " 48,49,10000000"};
    TimeTravellingTour* pObj = new TimeTravellingTour();
    clock_t start = clock();
    long result = pObj->determineCost(N, cities, roads);
    clock_t end = clock();
    delete pObj;
    long expected = 12250000000;
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    test240() == 0 ? ++passed : ++failed;
    test241() == 0 ? ++passed : ++failed;
    test242() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22654575&rd=14245&pm=10782
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
#include <queue>
 
using namespace std;
 
#define Rep(i,n) for(int i=0;i<(n);++i)
#define For(i,a,b) for(int i=(a);i<=(b);++i)
#define Ford(i,a,b) for(int i=(a);i>=(b);--i)
#define fi first
#define se second
#define pb push_back
#define MP make_pair
 
typedef pair<int,int> PII;
typedef vector<int> VI;
 
class TimeTravellingTour {
public:
  long long determineCost(int, vector <int>, vector <string>);
};
 
int ds[55];
int nd;
long long d[55][55];
long long inf;
int n;
long long F[55][55][55];
 
long long solve(int i, int j, int k) {
  if(i == j) return d[ds[i]][k];
  long long &ret = F[i][j][k];
  if(ret != -1) return ret;
  ret = inf;
  For(t,i,j-1) Rep(x,n) {
    // k -> x -> (i,t) (t+1,j)
    ret = min( ret, solve( i, t, x) + solve( t+1, j, x) + d[k][x]);
  }
  return ret;
}
 
long long TimeTravellingTour::determineCost(int N, vector <int> cities, vector <string> roads) {
  memset(&inf,0x1f,sizeof(inf));
  memset(d,0x1f,sizeof(d));
  {
    string s = "";
    Rep(i,roads.size()) s = s + roads[i];
    istringstream iss(s);
    while(iss >> s) {
      int u, v, c;
      sscanf(s.c_str(),"%d,%d,%d", &u, &v, &c);
      d[u][v] = min(d[u][v], (long long)c);
      d[v][u] = min(d[v][u], (long long)c);
    }
  }
  n = N;
  Rep(i,n) d[i][i] = 0;
  Rep(k,n)Rep(i,n)Rep(j,n) d[i][j] = min( d[i][j], d[i][k] + d[k][j]);
  nd = cities.size();
  Rep(i,nd) ds[i] = cities[i];
  
  memset(F,-1,sizeof(F));
  long long res = solve( 0, nd-1, 0);
  if(res == inf) return -1;
  return res;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/