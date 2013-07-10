/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11334
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

class SlimeXGrandSlimeAuto {
public:
    int travel(vector<int> cars, vector<int> districts, vector<string> roads, int inverseWalkSpeed, int inverseDriveSpeed);
};

int SlimeXGrandSlimeAuto::travel(vector<int> cars, vector<int> districts, vector<string> roads, int inverseWalkSpeed, int inverseDriveSpeed) {
    int ret;
    return ret;
}


int test0() {
    vector<int> cars = {1};
    vector<int> districts = {2, 3, 0};
    vector<string> roads = {"..0.", "...1", "0..2", ".12."};
    int inverseWalkSpeed = 5;
    int inverseDriveSpeed = 1;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> cars = {1};
    vector<int> districts = {2, 0};
    vector<string> roads = {".A.", "A.B", ".B."};
    int inverseWalkSpeed = 2;
    int inverseDriveSpeed = 1;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 262;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> cars = {2, 2};
    vector<int> districts = {1, 2, 1};
    vector<string> roads = {".a4", "a..", "4.."};
    int inverseWalkSpeed = 3;
    int inverseDriveSpeed = 1;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 95;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> cars = {1};
    vector<int> districts = {2, 0};
    vector<string> roads = {".B.", "B.A", ".A."};
    int inverseWalkSpeed = 2;
    int inverseDriveSpeed = 1;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 262;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> cars = {2, 5, 1, 2};
    vector<int> districts = {1, 5, 1, 2, 4};
    vector<string> roads = {".12.4.", "1....7", "2..3..", "..3..5", "4.....", ".7.5.."};
    int inverseWalkSpeed = 53;
    int inverseDriveSpeed = 37;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1259;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> cars = {1, 5, 3, 1, 7, 4, 2, 3, 1, 6, 7, 7, 4, 4, 2, 2, 3, 1, 5, 1, 4, 2, 3, 5, 6, 1, 2, 3, 4, 5, 5, 4, 3, 2, 1, 1, 2, 1, 5, 6, 7, 7, 7, 7, 7, 1, 2, 3, 4, 5};
    vector<int> districts = {41, 5, 33, 11, 27, 4, 2, 33, 21, 16, 47, 42, 34, 14, 12, 32, 13, 41, 25, 21, 34, 12, 43, 25, 6, 31, 12, 43, 14, 5, 45, 24, 43, 32, 1, 41, 22, 21, 25, 6, 17, 27, 17, 16, 7, 21, 22, 43, 44, 5};
    vector<string> roads = {".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "A.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.A", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA."};
    int inverseWalkSpeed = 99;
    int inverseDriveSpeed = 14;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 157990;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> cars = {1};
    vector<int> districts = {1, 0};
    vector<string> roads = {".1", "1."};
    int inverseWalkSpeed = 5;
    int inverseDriveSpeed = 2;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> cars = {6};
    vector<int> districts = {41, 5, 33, 11, 27, 4, 2, 33, 21, 16, 47, 42, 34, 14, 12, 32, 13, 41, 25, 21, 34, 12, 43, 25, 6, 31, 12, 43, 14, 5, 45, 24, 43, 32, 1, 41, 22, 21, 25, 6, 17, 27, 17, 16, 7, 21, 22, 43, 44, 5};
    vector<string> roads = {".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "A.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.A", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA."};
    int inverseWalkSpeed = 99;
    int inverseDriveSpeed = 14;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 180005;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> cars = {1, 5, 3, 1, 7, 4, 2, 3, 1, 6, 7, 7, 4, 4, 2, 2, 3, 1, 5, 1, 4, 2, 3, 5, 6, 1, 2, 3, 4, 5, 5, 4, 3, 2, 1, 1, 2, 1, 5, 6, 7, 7, 7, 7, 7, 1, 2, 3, 4, 5};
    vector<int> districts = {41, 5, 33, 11, 27, 4, 2, 33, 21, 16, 47, 42, 34, 14, 12, 32, 13, 41, 25, 21, 34, 12, 43, 25, 6, 31, 12, 43, 14, 5, 45, 24, 43, 32, 1, 41, 22, 21, 25, 6, 17, 27, 17, 16, 7, 21, 22, 43, 44, 5};
    vector<string> roads = {".Z................................................", "Z.Z...............................................", ".Z.Z..............................................", "..Z.Z.............................................", "...Z.Z............................................", "....Z.Z...........................................", ".....Z.Z..........................................", "......Z.Z.........................................", ".......Z.Z........................................", "........Z.Z.......................................", ".........Z.Z......................................", "..........Z.Z.....................................", "...........Z.Z....................................", "............Z.Z...................................", ".............Z.Z..................................", "..............Z.Z.................................", "...............Z.Z................................", "................Z.Z...............................", ".................Z.Z..............................", "..................Z.Z.............................", "...................Z.Z............................", "....................Z.Z...........................", ".....................Z.Z..........................", "......................Z.Z.........................", ".......................Z.Z........................", "........................Z.Z.......................", ".........................Z.Z......................", "..........................Z.Z.....................", "...........................Z.Z....................", "............................Z.Z...................", ".............................Z.Z..................", "..............................Z.Z.................", "...............................Z.Z................", "................................Z.Z...............", ".................................Z.Z..............", "..................................Z.Z.............", "...................................Z.Z............", "....................................Z.Z...........", ".....................................Z.Z..........", "......................................Z.Z.........", ".......................................Z.Z........", "........................................Z.Z.......", ".........................................Z.Z......", "..........................................Z.Z.....", "...........................................Z.Z....", "............................................Z.Z...", ".............................................Z.Z..", "..............................................Z.Z.", "...............................................Z.Z", "................................................Z."};
    int inverseWalkSpeed = 99;
    int inverseDriveSpeed = 15;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 3745110;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> cars = {1, 2};
    vector<int> districts = {1, 2};
    vector<string> roads = {".IHopeMy", "I.Soluti", "HS.onIsC", "ooo.orre", "plno.t..", "euIrt...", "Mtsr....", "yiCe...."};
    int inverseWalkSpeed = 6;
    int inverseDriveSpeed = 4;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 454;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> cars = {0, 1, 1, 0, 1};
    vector<int> districts = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {".D", "D."};
    int inverseWalkSpeed = 81;
    int inverseDriveSpeed = 51;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 156000;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> cars = {1, 0, 1, 1, 1, 0, 1, 0, 1, 1, 0, 1, 1, 0, 0};
    vector<int> districts = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {".w", "w."};
    int inverseWalkSpeed = 99;
    int inverseDriveSpeed = 92;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 159885;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> cars = {1, 0, 1, 0, 1, 1, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 0, 0, 0, 1, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0};
    vector<int> districts = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    vector<string> roads = {".f", "f."};
    int inverseWalkSpeed = 35;
    int inverseDriveSpeed = 11;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 9184;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> cars = {1, 0, 1, 0, 0};
    vector<int> districts = {2, 1, 2, 0, 2, 0, 1, 0, 2, 0, 1, 2, 1, 2, 0, 2, 1, 2, 1, 0, 2, 1, 0, 1, 0, 1, 2, 1, 2, 0, 2, 1, 2, 0, 2, 1, 2, 0, 2, 1, 0, 1, 0, 1, 2, 0, 2, 0, 1, 2};
    vector<string> roads = {".5w", "5.v", "wv."};
    int inverseWalkSpeed = 72;
    int inverseDriveSpeed = 32;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 85640;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> cars = {0, 2, 0, 0, 1, 1, 1, 2, 0, 1, 2, 0, 2, 1, 0};
    vector<int> districts = {1, 0, 1, 2, 1, 0, 1, 0, 2, 1, 2, 1, 0, 2, 1, 0, 1, 0, 1, 0, 2, 0, 2, 0, 1, 2, 0, 2, 0, 1, 2, 0, 2, 0, 2, 1, 0, 2, 0, 1, 2, 0, 1, 0, 2, 1, 2, 0, 2, 0};
    vector<string> roads = {".ne", "n.k", "ek."};
    int inverseWalkSpeed = 75;
    int inverseDriveSpeed = 69;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 71712;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> cars = {0, 2, 2, 1, 2, 0, 2, 0, 0, 1, 1, 0, 0, 1, 2, 0, 1, 2, 1, 1, 0, 2, 2, 0, 1, 0, 0, 0, 1, 0, 0, 2, 2, 1, 0, 0, 2, 0, 1, 2, 2, 1, 2, 2, 0, 1, 2, 1, 2, 0};
    vector<int> districts = {1, 0, 2, 1, 0, 2, 1, 2, 0, 2, 0, 2, 1, 0, 2, 1, 2, 0, 2, 1, 0, 1, 0, 1, 2, 0, 1, 2, 0, 2, 0, 2, 0, 1, 2, 0, 1, 0, 1, 2, 0, 2, 0, 1, 2, 0, 1, 0, 2, 0};
    vector<string> roads = {".Bh", "B.j", "hj."};
    int inverseWalkSpeed = 93;
    int inverseDriveSpeed = 5;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 6220;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> cars = {2, 3, 3, 2, 3};
    vector<int> districts = {2, 3, 0, 2, 0, 2, 0, 2, 1, 0, 1, 3, 1, 2, 1, 3, 2, 3, 0, 2, 3, 1, 2, 0, 3, 2, 0, 1, 2, 3, 0, 1, 2, 0, 2, 0, 1, 3, 2, 3, 0, 1, 3, 0, 1, 2, 0, 1, 3, 1};
    vector<string> roads = {"..A.", "..kd", "Ak..", ".d.."};
    int inverseWalkSpeed = 75;
    int inverseDriveSpeed = 63;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 140220;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> cars = {3, 2, 1, 3, 2, 2, 1, 3, 1, 0, 3, 3, 0, 1, 3};
    vector<int> districts = {1, 0, 2, 1, 3, 1, 3, 0, 2, 0, 3, 0, 1, 0, 2, 1, 0, 1, 2, 3, 2, 0, 1, 3, 1, 3, 0, 3, 1, 3, 1, 0, 3, 0, 3, 2, 1, 2, 1, 0, 1, 3, 0, 1, 0, 2, 3, 2, 0, 2};
    vector<string> roads = {".uxe", "u.tr", "xt.i", "eri."};
    int inverseWalkSpeed = 90;
    int inverseDriveSpeed = 22;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 89868;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> cars = {0, 3, 1, 2, 2, 3, 0, 0, 0, 1, 1, 1, 2, 0, 3, 1, 1, 1, 3, 2, 3, 0, 0, 1, 3, 2, 3, 0, 1, 0, 1, 3, 2, 1, 3, 1, 3, 3, 0, 2, 2, 1, 1, 1, 1, 2, 1, 3, 3, 1};
    vector<int> districts = {2, 3, 2, 0, 3, 0, 1, 3, 0, 3, 0, 2, 3, 1, 2, 3, 2, 0, 1, 3, 2, 0, 3, 2, 1, 0, 2, 0, 3, 1, 0, 1, 0, 3, 1, 0, 1, 3, 0, 2, 0, 1, 0, 3, 0, 1, 0, 3, 0, 1};
    vector<string> roads = {".ged", "g.oe", "eo.s", "des."};
    int inverseWalkSpeed = 62;
    int inverseDriveSpeed = 15;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 18526;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> cars = {11, 15, 4, 1, 4};
    vector<int> districts = {3, 2, 4, 3, 6, 2, 3, 12, 10, 13, 1, 13, 3, 11, 1, 13, 8, 11, 1, 8, 1, 10, 0, 14, 13, 2, 7, 15, 3, 10, 8, 11, 13, 0, 3, 7, 4, 12, 1, 5, 0, 13, 0, 3, 4, 7, 3, 12, 10, 0};
    vector<string> roads = {".f7y.twy.hpbvs.k", "f.8kfg.wChs....5", "78.soo...hs9..lc", "yks.5..qro.n3daj", ".fo5.4otvnvl0f4.", "tgo.4....jr.398g", "w...o..4becln...", "yw.qt.4..hb..dwA", ".C.rv.b.....uiAG", "hhhonjeh...7n...", "pss.vrcb...iv.xx", "b.9nl.l..7i..gkg", "v..303n.unv.....", "s..df9.di..g....", "..la48.wA.xk....", "k5cj.g.AG.xg...."};
    int inverseWalkSpeed = 94;
    int inverseDriveSpeed = 57;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 114055;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> cars = {12, 4, 11, 4, 11, 14, 1, 8, 0, 0, 0, 6, 5, 8, 13};
    vector<int> districts = {7, 10, 11, 7, 9, 12, 15, 6, 13, 0, 3, 2, 13, 10, 6, 8, 7, 15, 2, 4, 2, 9, 11, 15, 2, 13, 8, 4, 15, 12, 5, 2, 15, 12, 7, 15, 5, 13, 10, 7, 10, 14, 7, 13, 14, 7, 13, 1, 15, 6};
    vector<string> roads = {".....i....8..7.2", "......q..3ss....", "....f.7.....5.n.", "....i..G..j.....", "..fi...E.l......", "i......w...y.d7.", ".q7.....h..1.m..", "...GEw...u.t..p.", "......h.........", ".3..l..u.......k", "8s.j...........6", ".s...y1t........", "..5............s", "7....dm.........", "..n..7.p........", "2........k6.s..."};
    int inverseWalkSpeed = 77;
    int inverseDriveSpeed = 9;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 93398;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> cars = {13, 9, 15, 3, 2, 5, 11, 13, 4, 10, 0, 12, 2, 12, 1, 13, 10, 3, 2, 8, 11, 6, 11, 15, 6, 8, 11, 6, 11, 15, 2, 7, 6, 7, 13, 12, 6, 7, 14, 3, 8, 11, 9, 6, 15, 14, 5, 15, 0, 9};
    vector<int> districts = {7, 15, 9, 3, 10, 11, 5, 9, 1, 11, 2, 15, 7, 13, 1, 5, 6, 12, 10, 8, 3, 13, 7, 4, 10, 3, 12, 13, 6, 11, 6, 5, 0, 15, 2, 0, 8, 7, 15, 6, 8, 14, 12, 2, 1, 13, 0, 11, 0, 6};
    vector<string> roads = {"..........M..B..", "..............6g", "...B.......j...3", "..B............z", ".........7...p..", ".......a..7.....", "..........w...ii", ".....a.....9...i", "...............o", "....7......2c..e", "M....7w.....fv..", "..j....9.2..9.i.", ".........cf9...j", "B...p.....v....f", ".6....i....i...k", ".g3z..iioe..jfk."};
    int inverseWalkSpeed = 52;
    int inverseDriveSpeed = 38;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 78520;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> cars = {33, 42, 39, 38, 46};
    vector<int> districts = {5, 46, 31, 0, 36, 15, 30, 29, 47, 24, 5, 19, 32, 38, 3, 32, 27, 33, 44, 33, 40, 4, 9, 0, 41, 21, 5, 33, 3, 46, 48, 4, 46, 27, 13, 25, 27, 18, 19, 11, 45, 3, 7, 5, 41, 39, 30, 18, 37, 47};
    vector<string> roads = {".HyfBt8.rMk..nutH.uq..fyq..tyy....m.mF..ic..he..K", "H.8.e.zFn.v..F...Elh..ue...l.l.lFHp..k9..C.ypt5.f", "y8.y...whg.ykzc.d.e8.il.lc.f1...w.iw.l.7k..sg...i", "f.y.u.hl...7.7ze.......B..mAw.kk...dtwxsr.gc.lAEC", "Be.u......k..spn.wr.l7..de...6..Atey....ssB..q.k8", "t.....k...twzD0D.....td6..J.fueoq.os..c9...zgfgc.", "8z.h.k..lEh....sA.m.l.6.mfA.q.8l5uh6..pi.d.o....D", ".Fwl....s.ndMspxGdp.qxa.s...w.e.3yo7.Guo.h.tgazz.", "rnh...ls..8.lhp..lrc....3.....f1.k..meh..g.ac.j..", "M.g...E....J.E..3Hvm.j...oxvf.....q.xdhn.EM..A.j.", "kv..kthn8..eu....c.gq...6ci.n.fake.hom..n8k6c..w.", "..y7.w.d.Je.If..F1ypwsj..luxx.hoali.p.xrm58jhh.E.", "..k..z.Ml.uI.Byu7HAp...t..s.jex.L.p..8m.....vC.p1", "nFz7sD.shE.fB..7AfF....Ee..E.mp..5.l.s..w.o7mrBGz", "u.czp0.pp...y..D.v1c...5..I1.t..rIos.xb9b..zg..bw", "t..enDsx....u7D.vlF.Af.Dam......u5eqzl.ty......Et", "H.d...AG.3.F7A.v.D.imf.l.k..bd.gG.mFtbej...s.wb..", ".E..w..dlHc1HfvlD.wnu..yk....s..9lg5ozvpl48iffzCF", "ule.r.mprv.yAF1F.w..5.e6uiK.g..p..qt.zd...uAhg.c.", "qh8.....cmgpp.c.in...fdcf.v...8..v....7.dl...c.fm", "....l.lq..qw...Amu5..pe3p..5...krFls8t.5ct....b9.", "..i.7t.x.j.s...ff..fp.r.6..u.1l..l9...i.slx..pkq.", "ful..d6a...j......eder.in..dls.lcy.e6yjd3jf.8..oA", "ye.B.6......tE5Dly6c3.i.rg.7.qh.vIo....8.x...j9.r", "q.l.d.ms3.6..e.a.kufp6nr.b.t.8h5qg..p.ki.f.7.lns.", "..c.e.f..ocl...mk.i....gb.r..e7.lr7k.l.7ehnh5c...", "...m.JA..xius.I...Kv.....r.....k.a.zFjz...C..AA.r", "tlfA.....v.x.E1.....5ud7t...g.fp...s6z.aav...fgdy", "y.1w.fqw.fnxj...b.g...l....g.ghdw..w..27ktyqgl39g", "yl..6u......emt.ds...1sq8e..g.m.y.b.s6ij.o......c", "...k.e8ef.fhxp.....8.l.hh7.fhm..eu...tg97.hl.3.m.", ".l.k.ol.1.ao....g.p.k.l.5.kpd...rm....fd..sc.jhni", ".Fw.Aq53..kaL.ruG9..r.cvql..wyer..m..F.o..2.gbzB.", ".H..t.uyk.el.5I5.l.vFlyIgra...um...rD.ByBg.8...J.", "mpi.eoho.q.ip.oemgq.l9.o.7...b..m..kk.ifkdn.9glqn", "..wdys67..h..lsqF5t.s.e..kzsw....rk..Dvo.a.nfc..H", "m..t....mxop...zto..8.6.p.F6.s...Dk...f.3p.ub8jiy", "Fklw...Gedm.8sxlbzz.t.y..ljz.6t.F..D..lo..Gkqxlr7", ".9.x.cpuhh.xm.b.evd7.ij.k.z.2igf.Bivfl.6i..sf..7j", "..7s.9io.n.r..9tjp..5.d8i7.a7j9doyfo.o6.c.rp9c.co", "i.krs.....nm.wby.l.dcs3..e.ak.7..Bk.3.ic..i.a.m.B", "cC..s.dhgE85.....4.ltljxfh.vto...gdap........h...", "...gB....Mk8.o...8u..xf..nC.y.hs2.n..G.ri....eC.L", ".ysc.zota.6j.7z.siA.....7h..q.lc.8.nuksp.....pu..", "hpg..g.gc.chvmg..fh...8..5..g...g.9fbqf9a.....jmt", "et.lqf.a.A.hCr..wfgc.p.jlcAfl.3jb.gc8x.c.hep..ooz", ".5.A.g.zj....B..bz..bk.9n.Ag3..hz.l.jl..m.Cujo.6h", "...Ekc.z.jwEpGbE.Ccf9qo.s..d9.mnBJq.ir7c....mo6.n", "KfiC8.D.....1zwt.F.m..Ar..rygc.i..nHy7joB.L.tzhn."};
    int inverseWalkSpeed = 82;
    int inverseDriveSpeed = 72;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 103464;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> cars = {10, 43, 4, 15, 2, 0, 1, 41, 11, 36, 1, 32, 26, 38, 33};
    vector<int> districts = {41, 5, 23, 18, 5, 41, 20, 48, 0, 16, 20, 0, 10, 12, 29, 47, 9, 13, 26, 33, 32, 40, 21, 19, 25, 14, 3, 44, 43, 1, 44, 12, 4, 18, 34, 20, 32, 20, 27, 39, 5, 4, 36, 0, 17, 29, 25, 44, 1, 25};
    vector<string> roads = {".tBomuxy..EFV.Cu.udf.AxEpfHweEqy.PCt.JwyJzB.jCGwD", "t.m45.ddi6fcr8..h.hi.ord.m.iepkfnlk68..6iojhandcb", "Bm.lnp8A9gbuwdeAu.wm5.9xemoF..G5ss2t..v.B4F.r0vzh", "o4l.17cgf9hhw7ffd6ddrmoikhik9.kfiqk.ckcannmg6mj.f", "m5n1.7eggbji..heb8bdtoqilhki.qihhrm8..b..olh4.jeh", "u.p77.g.l9iarc.bi8hl.rvarp.fgsijpln.9g58.s..aqb9d", "xd8ceg.r877ms47.o.pifa.pf..vjbx.on7..h..tc.3j9mqa", "ydAgg.r..jraum.5njltGCF7B.i6mDdtwoy7il4i.D5vgBb.l", ".i9fgl8...g.B9h.kdnbd.9w6cqzh.z8iwb.jq.hA8B6jauvj", ".6g9b97j..8en5.lm2nk..n.mnaoij.a.h.d3ce1lk.c.h.j5", "Efbhji7rg8.kla3t.av...lnnrcxqdA8wg.m8..8.g.9obkr5", "Fcuhiama.ek..jgft.swBxC3Az8..xooAd.b.a9c6yeqlv0cd", "Vrww.rsuBnl...k.KqJIBzGn.LdBGx.t.5.ukbtml.xv.wiwh", ".8d7.c4m95aj..9n.3kfjfil..g.fgs7lncf9.h.qfs8.ekmb", "C.efh.7.h.3gk9.qs8to.hnkor9uog.9v.bi.9j.nitbmego2", "u.Afeb.5.ltf.nq.jkgrHCFcAvm3.D8ustz7kp6kgD.vd.g.o", ".hudbionkm.tK.sj...azutsmdw.3xip..uhp..nxurp.vult", "u..688.jd2a.q38k...hmimhkld.gjqan.ec6e.3.jobdhgi.", "dhwdbhplnnvsJktg...dBxwqphvj..erc.w.pxiovwor6xt.t", "fimddlitbk.wIforahd.pl.wb3vu8o.i6Cmmoxp.Bkyhdnxs.", "..5rt.fGd..BBj.HzmBp.38EfouL.3Mcv.8.ptB.H4Max5BGn", "Ao.moraC...xzfhCuixl3.7.c.rGq3.8rv.vlqxk.1I6.2xBk", "xr9oqv.F9nlCGinFtmw.87.F7hxJqa.do.c..xApJ4L..aDEq", "Edxiiap7w.n3nlkcshqwE.F.CAc.q.kr.h..ef.f4.atky...", "p.eklrfB6mnA..oAmkpbfc7C.9xE..Deg.g.qyxo.aHcn..Aq", "fmmhhp..cnrzL.rvdlh3o.hA9.yyc.v.6Fn.rAtp.jCihnAwt", "H.oik..iqac8dg9mwdvvurxcxy.psq.jB7lg6.f8.t.l.p7j.", "wiFkifv6zox.B.u3..juLGJ.Eyp.mI.ywvD..s9ogH5z.Fi5s", "ee.9.gjmhiq.Gfo.3g.8.qqq.csm.tjl9Aqf.ui.v.ql5rsk.", "Ep..qsbD.jdxxggDxj.o33a...qIt.J8vt4wlpykD5I8u.x.j", "qkGkiixdz.Ao.s.8iqe.M..kDv..jJ..rCFesyeroHdBfHpbw", "yf5fhj.t8a8ot79uparic8dre.jyl8...o4ndjocv.z.l.ptc", ".nsihpowi.wA.lvs.nc6vro.g6Bw9vr..Itp.C.sFqAo.t.uw", "Plsqrlnowhgd5n.t...C.v.h.F7vAtCoI.pod5mggx.qwscqc", "Ck2kmn7yb....cbzuewm8.c.gnlDq4F4tp...ltfz7D.q2sxe", "t6t.8..7.dmbufi7hc.m.v....g.fwenpo...j.c.wco.uc.h", ".8.c.9.ij38.k9.kp6popl.eqr6..lsd.d.....1hnnfijbi.", "J..k.ghlqc.ab.9p.exxtqxfyA.supyjC5lj..ia.s.l.o.m6", "w.vcb5.4.e.9thj6..ipBxA.xtf9iyeo.mt..i.dcyaqc.a3h", "y6.a.8.ih18cm..kn3o..kpfop8o.krcsgfc1ad.j.n.gidi4", "JiBn..t.Al.6lqngx.vBH.J4...gvDovFgz.h.cj....pC5ck", "zo4noscD8kgy.fiDujwk414.ajtH.5H.qx7wnsy...I7s.zCm", "BjFml..5B..exst.rooyMILaHC.5qIdzA.Dcn.an.I.A.Gf.r", ".h.gh.3v6c9qv8bvpbrha6.tcilzl8B.oq.oflq..7A.m5rue", "jar64ajgj.ol..md.d6dx..knh..5ufl.wq.i.cgps.m.sm.m", "Cn0m.q9Bahbvwee.vhxn52ay.npFr.H.ts2ujo.iC.G5s.vAh", "Gdvjjbmbu.k0ikggugtxBxD..A7isxpp.cscb.ad5zfrmv.dd", "wcz.e9q.vjrcwmo.li.sGBE.Awj5k.btuqx.im3icC.u.Ad.m", "Dbhfhdalj55dhb2ot.t.nkq.qt.s.jwcwceh.6h4kmremhdm."};
    int inverseWalkSpeed = 83;
    int inverseDriveSpeed = 19;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 70813;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> cars = {3, 1, 18, 4, 20, 34, 12, 9, 32, 25, 38, 23, 27, 11, 12, 27, 16, 13, 4, 37, 47, 34, 17, 10, 33, 42, 18, 19, 9, 27, 42, 11, 7, 44, 28, 12, 47, 7, 28, 13, 41, 34, 22, 8, 26, 43, 14, 17, 8, 26};
    vector<int> districts = {36, 45, 11, 43, 32, 7, 26, 44, 43, 18, 43, 47, 45, 27, 37, 13, 16, 44, 10, 41, 43, 26, 24, 36, 26, 35, 41, 16, 46, 3, 28, 26, 39, 18, 6, 27, 32, 45, 20, 44, 39, 9, 10, 12, 29, 34, 4, 40, 22, 14};
    vector<string> roads = {".lkc8d44kfdjhcmkotgeiubpjrhjqasoqgimdd8c9fo.2c9ee", "l..dmwiqpqbuloA63I8mx8hICHbABq.p.ymuxtj.vxgl.sh.s", "k..emwipoqatkoA53H8lw9iIBGazB.HoIxltwtjeu...krhkr", "cde.8j7fspetoayhfF5mul3CvDiwBcEuCtpvpp5hlspsaoglp", "8mm8.948snjr.3uooAfmqu5wpynrz3zwwo.v.l2kdnuw4khmn", "dwwj9.d9wqrtvatxzyprqFgrlwvq.6xCsnvygldqamCCblnro", "4ii74d.7ojenl8.jlycinr6uowiov8xsvmlrhi3fdlpr2hchj", "4qpf897.mgiklc.ptrkhhzemgpmir9qsnflo9dah5ess5cdhf", "kposswom.6e63xdjtls5cxuplkdfcvk5of23k.sa.fd8n.b59", "fqqpnqjg6.f37s9muhr46zqjegg9bqgci877d5oag8ifi4852", "dbaejreief.ianp7e.damkhxrw3oqnwfxmbinih3mmadfh69h", "juttrtnk63i.9w6.xev75Cuhedj87tdch884e7rej8kgm7c84", "hlko.vll37a9.ugfpoo3etqrmn9hgtn6qg08kdp6mga7kc83a", "cooa3a8cxsnwu..rqEgruw6zsCrvD3DBAsvzmp.ogryA9olqr", "mAAyut..d9p6g..wE7Ae3J.ba6q35w6ja.gad8.kj7rnp9if8", "k65hoxjpjm7.frw.9DdhtdlF.D5wwsDiEugouqlaut9eloefo", "o33fozlttuexpqE9.M9pB5jMGLfDFsLsMBqxA.ljyAjonwlow", "tIHFAyyrlh.eoE7DM.ImaRF8c1y89B0p7bnhhfBsncyuvgqnf", "g885fpcksrdvogAd9I.nxf9Gz.gzDiHuGwpwtsbhqvnrfrhms", "emlmmrih54a73rehpmn.buoojlbefpland38g9m6iddb.85.7", "ixwuqqnhc6m5eu3tBaxb.Guc89n2.s9ib3eaa4rhf3pml5fd4", "u89luFrzxzkCtwJd5RfuG..SLQj.KyQwRHu.GDroEGmruBr.B", "bhi35g6euqhuq6.ljF9ou..BuDmwC8ExCtrxop3kjstv8oinq", "pIICwrumpjxhrzbFM8GocSB.66z8gw8u0armceythaCysfqpg", "jCBvplogleremsa.Gczj8Lu6.9u6gpbr65mj58rob5xulakkb", "rHGDywwpkgwdnC6DL1.l9QD69.x7az0q5.nhfdArlayuufpme", "hbainvimdg3j9rq5fygbnjmzux.qqrxdzpa.qkl5qo69jj.ai", "jAzwrqoif9o8hv3wD8ze2.w867q.as7l82hd96skf3.pm7hg7", "qBBBz.vrcbq7gD5wF9Df.KCggaqa.B9gfcf7jdzlpdpktekgb", "aq.c3689vqntt3wssBipsy8wpzrsB.AAwptxjn6ndoyz7mkpp", "s.HEzxxqkgwdnD6DL0Hl9QE8b0x79A.p6anggeArmbytufpme", "opouwCss5cfc6BjispuaiwxurqdlgAp.ul58qivctl94rif.f", "q.ICwsvnoixhqAaEM7GnbRC065z8fw6u..qldeytiaBxsfqpg", "gyxtonmff8m8gs.uBbwd3Hta5.p2cpal..ge63pic0roj5fe5", "imlp.vll27b80vggqnp3eurrmnahftn5qg.7k.p7nga7lc83.", "mutvvyro37i48zaoxhw8a.xmjh.d7xg8le7.kcveoehcpce99", "dxwp.gh9kdnekmduAhtgaGoc5fq9jjgqd6kk.7lk55usf7gha", "dttpllid.5i7dp8q.fs94Dpe8dk6dneie3.c7.meb3olg0ba2", "8jj52d3asohrp..llBbmrr3yrAlsz6Avyppvlm.igosu5lgl.", "c.ehkqfhaa3e6okajsh6hoktor5klnrcti7ekei.kiabfd34c", "9vuldad5.gmjmgjuynqifEjhblqfpdmticno5bgk.bvuabgje", "fx.snmlef8m8gr7tAcvd3Gsa5ao3dobla0ge53oib.roi4fe5", "og.puCpsdiakayr9jyndpmtCxy6.pyy9Brahuosavr.4qmecl", ".l.swCrs8fdg7Aneourbmrvyuu9pkzt4xo7cslubuo4.rkeai", "2.ka4b25nifmk9plnvf.lu8slujmt7ursjlpfg5faiqr.fchh", "csroklhc.4h7co9owgr85Bofafj7emfif5cc70ldb4mkf.a92", "9hhghncdb86c8lielqh5friqkp.hkkpfqf8egbg3gfeeca.4a", "e.klmrhh55983qffonm.d.npkmaggpm.pe39hal4jecah94.8", "esrpnojf92h4ar8owfs74Bqgbei7bpefg5.9a2.ce5lih2a8."};
    int inverseWalkSpeed = 90;
    int inverseDriveSpeed = 41;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 50616;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> cars = {21};
    vector<int> districts = {40};
    vector<string> roads = {"..sv..gp.yfonp.9xeclphnwtf235ncd.A59..rwf.Ge5.D.Bo", "..tv4.ct.Adrr.wb..bopkn.wf15.qfa.C88qrtz...i9dEoEs", "st..qbuBh8inA35.c.j.4E5.fer.pEkqt.xkHg9ifpytuC.tsC", "vv..tfvFl9jrE81Dfllq5I7Ejg..r.n.xgAm.kdm.tCxxG.xw.", ".4qt.fg..xemmn.avccjn.l.re.2.madsy6.nmpue.Ed5.B.z.", "..bff.or6hcgp7.og.cdas..e8gcft8jm..awb.iak...qmj.s", "gcuvgo.G.C..E.vo.pbyp.o.Df.g.Ep3.HldEzyGeHTumqE.OF", "ptBF.rG.kCAe1.Hl.lzfC.A8pys.u6..c.mvaltqzhobjlK8.1", "..hl.6.k.lhaidnki.g7h.fmd.g.gm2mglhdp8cgffrbemrcm.", "yA89xhCCl.qn.9aF6lr..IdzdmyuwGoyr7..Kg8enntw.H7uoD", "fdijec.Ahq.syhko.g1p..c..3cb9Ah7zvl...nv.x.pkrstD.", "ornrmg.eans.djtp.b.2p.ncaopl.j......n7ec.5.c.qv6df", "nrAEmpE1i.yd.vGjwjxdAcy9owqn.5hAd.kt9kspx.p8hjJ6n.", "p.38n7..d9hjv.9wbchh.A5wcc.kmAfop...Dc6..lvpqyeopy", ".w51..vHnaktG9.Fgm.s6.8Gl.us.Kp.zi.nNmfohvEzyH.zyI", "9b.DaoolkFopjwF.Dkmny.wtypcdfgh.t..jfs....Gc61LkCk", "x.cfvg..i6..wbgD.ishhEgt6oxtw..Al2A.Fa5.pgmswEeohy", "e..lc.pl.lgbjcmki.f8gmenedfafn.lil..p9d.eh.cdl.d.l", "cbjlccbzgr1.xh.msf.o.udCr4a.7y..yvj3zonv3wI.housDy", "lo.qjdyf7.p2dhsnh8o.n.lebmmin.8u..llm...n.kahou6fg", "pp45napCh..pA.6yhg.n..1Cj.n.lEjlv.ugGid.asCtrAetw.", "hkEI.s...I..cA..Emu...Anxv.kn8k.pGbq.t.zwsCb.7Pgzc", "nn57l.oAfdcny58wgedl1A.Ai.lijCgktj.....l9qBqp.grvA", "w..E...8mz.c9wGttnCeCnA.lByv.fmH7.tzjjrlC.fhqtHaf.", "twfjreDpdd.aocly6erbjxil.nu.tu.ye8.py453p.imrzlhcr", "ffege8fy.m3owc.pod4m.v.Bn.d.by.bv.l.Aki..tFnj.pqzy", "21r..g.sgycpq.ucxfamn.lyud.32q..vA.7qpr.d.Hg.eCnC.", "35..2cg..ublnksdta.i.kiv..3.4o9crw95plntcrDe7fzkyp", "5.pr.f.ugw9..m.fwf7nlnj.tb24..e7wzb4.pqxawIjbh.pDu", "nqE.mtE6mGAj5AKg.ny.E8Cfuyqo..kB.Diu3qxvznvagfOct4", "cfkna8p.2oh.hfph...8jkgm...9ek..hoecnbfjf.t9a.ub.j", "daq.dj3.my7.Ao..Al.ul.kHyb.c7B...Dj8.vuCaDPrjo.xJ.", "..txsm.cgrz.dpztliy.vpt7evvrw.h..m.uncjd.4cgo..89e", "AC.gy.H.l7v...i.2lv..Gj.8.AwzDoDm.DuHd.8shmvzHerhA", "58xA6.lmh.l.k...A.jlub.t.l.9biej.D.fh.uyluF.3.IjB.", "98km.advd...t.nj..3lgq.zp.754uc8uuf.v.mt5...elvo.u", ".qH.nwEapK.n9DNfFpzmG..jyAqp.3n.nHhv.tAz..z...Rg.8", ".rgkmbzl8g.7kcmsa9o.it.j4kplpqbvcd..t.77m8kh.u..e.", "rt9dp.ytc8nes6f.5dn.d..r5irnqxfuj.umA7.8k..nrzgliu", "wzimuiGqgevcp.o...v..zll3..txvjCd8ytz78.s8fouBmj9r", "f.f.eaezfn..x.h.pe3naw9Cp.dcazfa.sl5.mks.vGokr..Bz", "..pt.kHhfnx5.lv.ghw.ssq..t.rwn.D4hu..8.8v.biqw..6j", "G.yCE.Tort..pvEGm.IkCCBfiFHDIvtPcmF.zk.fGb...HBm5q", "eitxd.ubbwpc8pzcsc.atbqhmngeja9rgv...hnooi..8dD.pa", "59ux5.mje.k.hqy6wdhhr.pqrj.7bgajoz3e..rukq.8.8F.xi", ".dCG.qqlmHrqjyH1ElooA7.tz.efhf.o.H.l.uzBrwHd8.NkDj", "DE..BmEKr7svJe.Le.uuePgHlpCz.Ou..eIvR.gm..BDFN.CwL", ".otx.j.8cut66ozkods6tgrahqnkpcbx8rjog.lj..m..kC..8", "BEswz.O.moDdnpyCh.DfwzvfczCyDt.J9hB..ei9B65pxDw..o", "osC..sF1.D.f.yIkylyg.cA.ry.pu4j.eA.u8.urzjqaijL8o."};
    int inverseWalkSpeed = 65;
    int inverseDriveSpeed = 25;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1040;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> cars = {41};
    vector<int> districts = {16, 23, 41, 26, 28, 34, 36, 23, 29, 20, 34, 27, 42, 31, 47, 12, 29, 18, 13, 28, 17, 47, 1, 19, 5, 20, 27, 10, 37, 35, 13, 12, 6, 17, 46, 20, 16, 22, 43, 12, 42, 25, 15, 26, 12, 16, 18, 19, 32, 36};
    vector<string> roads = {".BF.u.zqn.dyttx1.i.dqvormtwzBluGA.dA.o.uw3R5ykwDsp", "B.57rn.hu8nalorB3hFticr.e85v8f.d8zr8.c..4yfw2gsn.e", "F5.7xs5nw8rgr.wG9m.xoixAjbbu6ka.7Du.oinc9D.B8l.lhk", ".77.ttalC.ucoq..9pNBmfvxlf..dndgeG.9ljuccG.D9nus..", "urxt..ta.tp.422.nn.y9d5.mrl.yoqEy.w...Ilpv..o..Kyd", ".nst..mc.u5kghmf.6j.c.ei8.h.p9h.ofclgas..dD8k7lwj.", "z.5atm.ir.ld.qtz5gDqjf.wc57r..3b5woblck73wiv4.ujcf", "qhnlaci.xlh85..rdd.q0.9cbgbDnefun.nb..yafq.keccAo3", "nuwC..rx.DgzCEI.ujo9xyCGl.t.p.osofazBp.sqjIot.Ije.", ".88.tu.lD..c..s.apN.m.vxmgcC.oe.fHz.lkvdcG8.ao..ok", "dnrup5lhg..nmnsdl.h8h..p8f.q.7..m..o.cnh.a.ak.s.f.", "yagc.kd8zcn..dfz.hDv..ik.e.Dihcpjzs28ax7.xms8ghx.8", "tlro4g.5C.m..15uh.yv4868hlgJskkz.wse2dDf.tynji6.t.", "to.q2hq.E.nd1.3vkk.x6a56jo.Lum.Bvx.g4.Fhmuzn..4Hwa", "xrw.2mt.Issf53.znpCB..87.slPy..FyByi.k.l.yBroo1L.f", "1BG..fzr..dzuvz.y.3crwqtmu.yBlvGA5c.vpxv.2R7ykyCs.", ".399n.5dual.hkny.fD..8n.b.1w.d5..x.5f9p33wit.d.pg.", "ihmpn6gdjp.h.kp.f.ndd..n3a.ri2boihaih6.ccgyef0ppda", ".F.N.jD.oNhDy.C3Dn.fvAtwryB..pzKE8.FztAzA6WaDoBGwv", "dtxBy.qq9.8vvxBc.df.qttxgl.lrenvq62wu.kp.9Je.e.qgo", "qiom9cj0xmh.46.r.dvq.68bchcEofg.osoc38ybfpwkfdb.o3", "vcifd.f.y...8a.w8.At6..hce7Dk.cqkwq55..7buppaefy.4", "orxv5e.9Cv.i658qn.tt8....plLxlp.xtrl9g.kopE.oj7Iwc", "r.Ax.iwcGxpk867t.nwxbh....oPApsHB.vnbkK..tHlrn..Ag", "mejlm8cblm8.hj.mb3rgcc...79rf28mfkdff.m.9.uhb1ooc8", "t8bfr.5g.gfelosu.aylhep.7.7o781e7..dj8i...np69tj8c", "w5b.lh7btc..g.l.1.B.c7lo97.w.c.ic.n5d7.03ul.2cnqg8", "zvu...rD.CqDJLPywr.lEDLProw.no.mmsm.Hv6wsvFAv.Q.f.", "B86dyp.np..isuyB.i.rokxAf7.n..7.0xogpgg.8.ix9hzfak", "lfkno9.e.o7hkm.ld2pef.lp28co..9mfibhi6jaaiwhd1rm.b", "u.adqh3foe.ck..v5bzngcps81..79.e7s.bi8k51...4.ska.", "Gd.gE.bus..pzBFG.oKv.q.Hmeim.me.6Cum.ngjfDiEgnGc.r", "A87eyo5nofmj.vyA.iEqokxBf7cm0f76.wohq..c8.jxag.e9k", ".zDG.fw.fH.zwxB5xh86swt.k..sxisCw.8.wortu.Pb.iB.nr", "dru.wconaz.ss.yc.a.2oqrvd.nmob.uo8..rhkmm..d.b...l", "A8.9.lbbz.o2egi.5iFwc5lnfd5.ghbmh...bbv69...6hkvma", "..ol.gl.Bl.824.vfhzu359bfjdHpii.qwrb.b.c.tv.gg9Dr6", "ocij.ac.pkcad.kp96t.8.gk.87vg68n.ohbb.p.8..j9...f4", "..nuIsky.vnxDF.xp.Aky..Kmi.6gjkg.rkv.p.plu.xo.K59u", "u.ccl.7asdh7fhlv3czpb7k...0w.a5jctm6c.p.3smp3amqg.", "w49cp.3fqc...m..3cA.fbo.9.3s8a1f8um9.8l3.tkr2brmcb", "3yDGvdwqjGaxtuy2wg69pupt..uv.i.D....t.ust.P7wh.zpp", "Rf...Di.I8.myzBRiyWJwpEHunlFiw.ijP..v..mkP.MiwDvtt", "5wBD.8vko.asnnr7teaekp.lhp.Axh.Exbd..jxpr7M.t.qCq.", "y289ok4etak8j.oy.fD.faorb62v9d4ga..6g9o32wit.dqof.", "kgln.7.c.o.gi.okd0oedejn19c.h1.ngibhg..abhw.d.ppc9", "ws.u.lucI.sh641y.pB.bf7.otnQzrsG.B.k9.Kmr.Dqqp.MBf", "DnlsKwjAj..x.HLCppGq.yI.ojq.fmkce..vD.5qmzvCopM.cw", "s.h.yjcoeof.tw.sgdwgo.wAc8gfa.a.9n.mrf9gcptqfcBc.k", "pek.d.f3.k.8.af..avo34cg8c8.kb.rkrla64u.bpt..9fwk."};
    int inverseWalkSpeed = 75;
    int inverseDriveSpeed = 1;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 86730;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> cars = {43, 13};
    vector<int> districts = {49};
    vector<string> roads = {".qgaiu2fogo4tr..js.v5fi6pcfpch.u6o.lp5g.2hslh.gneB", "q.hAels.6mptt6FBK3.6wtwpdeD.iI.3.a9db..xoy3iwylwAa", "gh.l3d.qj4vgf..l..7oisvk.8oyitzlf.f5nma.fw.4vk.ykr", "aAl..x74yiy5tz639CiF3nqg.l4z.7xEgz.rz8fccnAqp1qv6K", "ie3......8ujgaspyhbkls.l67rx..yigkd2l..qgw.5vnnyno", "uldx..tB.eHt9f.wGpfs.FJy.kyKvEL.tupawziC.Jh7Iv.L.s", "2s.7.t..q.r1s..ahugx3hk.pdc.ffrw8rkl.5.84jtlk6jqbD", "f.q4.B..DmCawD.44HlK8rtlzq2Dr2BJl.xwEcifhqFus5vz7P", "o6jy..qD.oisx.EAI4r6unqli.Cl.Gp7h.5h5t.t.samqxfpA.", "gm4i8e.mo.zedikhrq.tgt.ldbkBlpCrhrk.sl5ofxl7w.rBf.", "opvyuHrCiz.tLuFCFnBnuc.hz.D2dE6qifhwdpCnmftAcy78Du", "4tg5jt1aset.rtc8fwf..jmbqfaugdtyatmmt6da6lu..4lr9E", "ttftg9swxdLr..trBxbAsHLzfn.Oyz..uBvfCydBsKqbKrEO..", "r6.zaf.D.iut...zIa.c..Ar7eBxlG.9mgd8hxoy..2dzxpAye", ".F.6s...EkFct..37HjKauxnyq1Gt5EJnFyv.fgijuF.w6xC4.", ".Bl3pwa4AhC8rz3.9Eg..r.kvn1Dq7BGk.vrCddgfsBpt3uA..", "jK.9yGh4IrFfBI79.MrPdtvoFv7Gv1D.qICBIfnhms.zubyBcU", "s3.ChpuH4qnwxaHEM.t2y.vq.gG.iKt2m7.h8xwxp.7mvB.u.8", "..7ibfglr.Bfb.jgrt..gwznfej.ooEujun.vm3ph.o8ygtDez", "v6oFksxK6tn.AcK.P2...uxskjJqk..3p8ck9.zAsz9pxE.vG6", "5wi3l.38ugu.s.a.dyg..k.csh8vibuAcuoov5e.8kw.l3ms8G", "ftsnsFhrntcjH.urt.wuk.38yk.bas9.cljv.evb.4wx2o87tB", "iwvq.Jktq..mLAx.vvzx.3.bCovbeu7yfomyngzdh3zB0qa5.E", "6pkgly.lllhbzrnkoqnsc8b.sdli7m.t4kgok8n75brp.g.g.z", "pd..6.pzidzqf7yvF.fksyCs.exCoCEhnmh3.vix.Da.CttEtl", "ce8l7kdq.b.fneqnvgejhkode.ppatri8f8agigj9ofcnkfqmo", "fDo4ryc2CkDa.B117GjJ8.vlxp.Er5..lDxuEdfghsD.u4.A4O", "p.yzxK.DlB2uOxGDG..qvbbiCpE.fE3tki.zgq.noewDcz95Ex", "cii..vfr.ldgyltqviokiae7oarf..gl5c8kcfo.9fln.m5fqr", "hIt7.Ef2GpEdzG571Ko.bsumCt5E..CMoGAzHelgk.Ixt8xAa.", "..zxyLrBpC6t..EBDtE.u97.Er.3gC.wklm.koElnbzE8ya1DB", "u3lEi.wJ7rqy.9JG.2u3A.ythi.tlMw.p.chbAx.sA6myDnxF.", "6.fggt8lhhiaumnkqmjpccf4n8lk5okp.icjiajb3.nkfgajkv", "oa.zkur..rftBgF.I7u8ulokmfDicGl.i.6.0tw..qepoydmBf", ".9f.dpkx5khmvdyvC.ncojmgh8x.8Amcc6.f7npnfo.jmr.m.i", "ld5r2alwh.wmf8vrBh.kovyo3auzkz.hj.f..r.tj...yp.Apm", "pbnzlw.E5sdtCh.CI8v9v.nk.gEgcHkbi07..txsmqfrn.clCg", "5.m8.z5ctlp6yxfdfxm.5eg8vidqfeoAatnrt.k38eyrf9.mfG", "g.af.i.i.5Cddogdnw3zevznigf.olExjwp.xk.ngyr.yduDaC", ".x.cqC8ftonaByighxpA.bd7xjgn.gl.b.nts3n.9by.cc..iG", "2ofcg.4h.fm6s.jfmphs8.h5.9ho9kns3.fjm8g9.hpkhc.mgy", "hywnwJjqsxflK.uss..zk43bDosef.bA.qo.qeybh.BB2od.uG", "s3.A.htFaltuq2FB.7o9wwzrafDwlIz6ne..fyrypB.fzzozAb", "li4q57lum7A.bd.pzm8p.xBp.c.DnxEmkpj.rr..kBf.AotDnr", "hwvpvIksqwc.Kzwtuvyxl20.Cnuc.t8yfomynfych2zA.pa6vE", ".yk1nv65x.y4rx63bBgE3oqgtk4zm8yDgyrp.9dccozop.qw5J", "gl.qn.jvfr7lEpxuy.t.m8a.tf.95xanad..c.u..dotaq..v.", "nwyvyLqzpB8rOACABuDvs75gEqA5fA1xjmmAlmD.m.zD6w..BC", "eAk6n.b7AfD9.y4.c.eG8t..tm4EqaDFkB.pCfaiguAnv5vB.L", "BarKosDP..uE.e..U8z6GBEzloOxr.B.vfimgGCGyGbrEJ.CL."};
    int inverseWalkSpeed = 80;
    int inverseDriveSpeed = 75;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 3040;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> cars = {29, 46};
    vector<int> districts = {40, 36, 11, 13, 7, 49, 28, 8, 39, 11, 23, 12, 9, 17, 19, 23, 19, 10, 14, 40, 47, 0, 6, 37, 3, 25, 23, 1, 35, 15, 38, 6, 14, 2, 6, 10, 21, 41, 7, 12, 10, 48, 37, 15, 49, 3, 14, 2, 38, 41};
    vector<string> roads = {".fz6k8lo6B6deps7FsBmyjlg7ucu5i65uqzn3yyfppjEimluks", "f.j87m89ho97jdpargm9ma6dmfjef3ilfplrjpljcf8r4d7jdk", "zj.shGhaAetozgxueh8gildsH7B5zgBFaycEDohzelkhhlfjoo", "68s.defi8v39dkp5ymvgsdfddncn7c9cnntmatsejleybgfpfn", "k7hd.sebjhgfhiihk8hfe46lrajbh8kq9jfnnheh5mfk26co7c", "8mGes.rvcKciluAcNBJsGsti3CiCdpc4CyIt5HGmytoNqvrysB", "l8hfer.6pre7s3xetmn0rj8asgsen5qrixoApvqsh72ucl1alr", "o9aibv6.rkids7ujmhg5lg4hw9t8p5svcvhztqkscc8n9h4djn", "6hA8jcpr.Abi8tncEqBqwhnm9u5v1l08tlyg6vw9ouoCikozhp", "BoevhKrkA.xvvsmz395q5iiBIaycynBH8p2xFb4vbxt2jgpxje", "69t3gceibx.6hit1BpwfvhgadpgoacccprvqaxuilicAdkenir", "d7o9fi7div6.nbw6yot8uic5klmkg8jjnvtwhxtokb5ycl8gks", "ejzdhlss8vhn.wfjzlytqdnsis3t8n8gqcu8foq0lyrxifrCbi", "pdgkiu37tsibw.Biupo3tnbcwhxfr9uvkBpEtysxk45vfp55pv", "spxpiAxunmtwfB.vqfrygepCxpirnsowm3ncubheiFynlcwIb8", "7au5hcejcz16jiv.Cryfxjh8dqipbddcrtwsaywknicCfmfnkt", "FreykNtmE3ByzuqC.d5s9mlDMcCeCpFLat5BJf8zfzv3mkryni", "sghm8Bmhq9polpfrd.cm58duzaocphry6h8ow85l4uobb6kv96", "Bm8vhJngB5wtyory5c.nbkgyJ7A8zkCH7u3BFh9xctq8iilslj", "m9ggfs05qqf8t3yfsmn.rj8btfteo5rsiyoBqwqth63ucl19ms", "ymiseGrlw5vuqtgx95br.eiAFcteumwD8j6rB50p9yt6hbpze8", "jald4sjghihidnejm8kje.boqefffdiocegimfed7qkk62ht29", "l6df6t84nigcnbphldg8ib.ht8o8l3osaqguqmhn8fal4d6hej", "gdsdliahmBa5scC8DuybAoh.lqrpkdmksByBjDztqa7Eircfqy", "7mHdr3sw9IdkiwxdMzJtFqtl.BeBaq80BuHp3FFjxvqLptsAqy", "uf7naCg9uaplshpqca7fce8qB.u1sdvA3r7xyibs6midbeemgh", "cjBcjist5ygm3xiiCoAttforeu.v6n5dtfxacrt3oyrAjhrCel", "ue5nbCe8vcoktfrpec8eef8pB1v.tcwA5t9yykdt8khfbfckij", "5fz7hdnp1yag8rnbCpzouflkas6t.j28skxh7uu9ntmBginxfn", "i3gc8p55lnc8n9sdphk5md3dqdncj.mpeskunqlncc6q6f3fgm", "6iB9kcqs0Bcj8uodFrCrwiom8v5w2m.7ulzg6wx9pvpDjkpAhp", "5lFcq4rv8HcjgvwcLyHsDosk0AdA8p7.AtFo1DDhvvpKorrzpx", "ufan9Cict8pnqkmra67i8casB3t5seuA.o5uye7q4plbbbgped", "qpynjyxvlprvcB3tthuyjeqBurftkslto.p8sfkbkFyqldwIba", "zlctfIohy2vtupnw583o6ggyH7x9xkzF5p.xDd5u9uq5hfmuie", "nrEmntAzgxqw8EcsBoBBriuBpxayhugou8x.nns7qHAzpizLgi", "3jDan5pt6FahftuaJwFqBmqj3ycy7n61ysDn.BBgttnImppynv", "ypothHvqvbxxoybyf8hw5fmDFirkuqwDefdnB.7ndDxbkctEe5", "ylhseGqkw4utqshw859q0ehzFbtdulxD7k5sB7.q8xs6gboye9", "fjzehmss9vio0xekzlxtpdntjs3t9n9hqbu7gnq.lzsxierDbh", "pcej5yhcoblklkinf4ch978qx6o8ncpv4k9qtd8l.oje76fq9a", "pfllmt7cuxiby4Fizut6yqfavmyktcvvpFuHtDxzo.6Ajt84tz", "j8kefo28otc5r5ycvoq3tka7qirhm6pplyqAnxssj6.wdm3amt", "ErhykNunC2AyxvnC3b8u6klELdAfBqDKbq5zIb6xeAw.misAlf", "i4hb2qc9ijdciflfmbich64ipbjbg6joblhpmkgi7jdm.8am9f", "mdlg6vlhkgklfpcmk6ilb2drtehfifkrbdfipcbe6tmi8.jv26", "l7ffcr14ope8r5wfrkl1ph6csercn3prgwmzptorf83saj.bkq", "ujjpoyadzxngC5Inyvs9zthfAmCkxfAzpIuLyEyDq4aAmvb.wB", "kdof7sljhjikbpbkn9lme2eqqgeifghpebigneeb9tml92kw.8", "skoncBrnpersiv8ti6js89jyyhljnmpxdaeiv59haztff6qB8."};
    int inverseWalkSpeed = 78;
    int inverseDriveSpeed = 45;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 86382;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> cars = {48, 36, 25};
    vector<int> districts = {23};
    vector<string> roads = {".sm..zrBo6xyf.ckyqr.h.ffrqlo4Bq9sy.r.kijlom.g.h..f", "s.8.k8N.2pt8Aoz..DeIancDgc.twrlp.zI0F9llH...mEbl.i", "m8.kccFo6mmb.hs9b.8A7f7w..wlqldn9rA7y1ccztid.wadca", "..k.fwk.pkj.889brc.fk4hdijc.do.nk.gre.78.a7n5.m.a8", ".kcf.kz.ju8io.p6..5ujehu3.qar..v5erk.c.7ul87armb4b", "z8cwk.R..ys1FuFl8G.N.s.JgdJvDnlyeyL9LfooMFsfq..qn.", "rNFkzR.CKy.Pcpf.MdE4EpB.CE7omExBEs8M8D.t5d.Gr8Gruu", "B.o...C..F4pvtxhiofzvotB.hvf.3bHea..Ao.i.ofbkxymf.", "o26pj.K..mta.lwgfBeF7l.AgcCrt.km.yG1D..jEA.jkC8jjg", "6pmkuyyFm.B.mc.nzxttfheltrstbEt2uDyopk.msurykqejpi", "xtmj8s.4tB.pqpsejjeuskqwcgqa.68Dd6ptvlfeuk.cgsw.bj", "y8b.i1Ppa.p.DtDj6EcL.qiHdaHtBljxcwJ9..mmKD..o.jokl", "fA.8oFcv.mqD.c3kAbs.rco5.s5fbwnpt.bz.qgh.9f...tejh", ".oh8.uptlcptc.acrkkke4bfkjig..if.qnnh.ab.i.p.gg.e7", "czs9pFfxw.sD3a.kBft9p.m.st8h7.omtqfy6p.i8chxf..ekg", "k.9b6l.hgnejkck..k8re8bp.8nalg5.8iqip832qj7c.nh524", "y.br.8Mifzj6ArB..z7.jojF87.oAe.z7qFeGdj.Hym6lEmlg.", "qD.c.GdoBxjEbkfkz.rbxhtgq.8..qkzre.Ddthi.1.th.z..l", "re8.5.Efetecskt87r.zf.ex.1vgt..u0kxey8b.zre.dwje8c", ".IAfuN4zFtuL.k9r.bz.zkw.yz.khBtwzq8H3yno.a..m3Bmqo", "ha7kj.Ev7fs.repejxfz.f2.hdw.lsjfhwB9w6ffyvl.fv3ehb", ".nf4espolhkqc4.8oh.kf..ggggbco...llnhd56jf.l3gh.94", "fc7hh.Bt.eqiobmbjtew2..rfc.l.rhfguxbt5ccvs.kcs5b.8", "fDwduJ.BAlwH5f.pFgx..gr.xx8l9...ytfD3ulm.elB.5vjpl", "rg.i3gC.gtcd.ks.8q.yhgfx..ufta..0iwgxaa.xpc4c.kd7c", "qc.j.dEhcrgasjt87.1zdgcx..whse8s3m..y6bazrf7dwhd.b", "l.wcqJ7vCsqH5i8n.8v.wg.8uw.ggxpv.m6E5ukk36..i2yi.l", "otl.avofrtatfghao.gk.bllfhg...9vg9gt..88ka2i8.ra8.", "4wqdrDm.tb.Bb.7lA.thlc.9tsg..Bqeuw..dnijgkl.gem..g", "Brlo.nE3.E6lw..geq.Bsor.aex.B.aFbdwrBlih..g7kzw.el", "qld..lxbkt8jnio5.k.tj.h..8p9qa.v6dq.sd76tk789qna3.", "9pnnvyBHm2Dxpfm.zzuwf.f..svveFv..FBoslo.vxtAmtd..k", "s.9k5eEe.udct.t87r0zh.gy03.gub6..j.f.acbzre3ewke.d", "yzr.eysayD6w.qqiqekqwlutimm9wddFj.jzr.hgqfbji.Aj.l", ".IAgrL8.GypJbnfqF.x8Blxfw.6g.wqB.j.Ibym..5izl8.mop", "r07rk9M.1ot9znyieDeH9nbDg.Et.r.ofzI..9lk.Bq..Ea.k.", ".Fye.L8ADpv..h6pGdy3wht3xy5.dBss.rb....n2clBk2xk.m", "k91.cfDo.kl.q.p8dt8y6d5ua6u.nldla.y9..ba.sgecu.b.8", "ilc7.o....fmga.3jhbnf5clabk8ii7ochml.b.0ng5f1ki23.", "jlc87otijmemhbi2.i.of6cm.ak8jh6.bg.kna0.n..e2li.24", "lHz.uM5.EsuK..8qH.z.yjv.xz3kg.tvzq..2.nn.al.l2A..o", "o.talFdoAukD9icjy1ravfsepr6ak.kxrf5Bcsg.a.csf8xghj", "m.i78s.f.r..f.h7m.e.l..lcf.2lg7tebiqlg5.lc.g6i..59", "..dn7fGbjyc..pxc6t...lkB47.i.78A3jz.Befe.sg.h.oi.h", "gm.5aqrkkkgo..f.lhdmf3c.cdi8gk9meil.kc12lf6h..i0.3", ".Ew.r.8xCqs..g.nE.w3vgs5.w2.ezqtw.8E2ukl28i...xinl", "hbamm.Gy8ewjtg.hmzjB3h5vkhyrmwndkA.ax.iiAx.oix.hke", ".ld.bqrmjj.oe.e5l.eme.bjddia..a.ejm.kb2..g.i0ih.62", "..ca4nufjpbkjek2g.8qh9.p7..8.e3...ok..32.h5..nk6.7", "fia8b.u.gijlh7g4.lcob48lcbl.gl.kdlp.m8.4oj9h3le27."};
    int inverseWalkSpeed = 92;
    int inverseDriveSpeed = 64;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1380;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> cars = {26, 8, 43};
    vector<int> districts = {3, 30, 39, 41, 36, 26, 31, 14, 45, 41, 43, 28, 25, 22, 44, 7, 26, 18, 20, 46, 23, 44, 46, 34, 1, 33, 48, 35, 46, 44, 10, 44, 19, 48, 18, 44, 25, 37, 4, 21, 34, 39, 33, 21, 18, 28, 23, 11, 26, 41};
    vector<string> roads = {".rg3eqepb.o.ggcl59pplcmle.aqnjdhf.jbq1okc.dehehhls", "r.jsfEB2CHjDuof.lAnuxnNucvtCxGhDE2Bgmpozrup.yvcb8x", "gj.eik.gsq7lur.xbp8cznwb9k.jen3loih79e8y8b6pfcj79f", "3se.hmaqdemtklek6amlqgkhf5emjf.dcqebo3lo.i9cdakhl.", "efih.BsfowoFe83Abmrvi7Bt9id...evu.va.erjltlttp3dey", "qEkmB.eBxll9HHxtq.iaNDo8trB05dndkD8qlpgLf8fn8cCsu9", "eB.ase.yh7pnuvpfgf.jAr.eod.fe4j25z6kqemxafc867vpsk", "p2gqfBy.BFgA.o.LjzkrxnKrautzuDeBC..ejnlzormDws.85u", "bCsdoxhB..AFglndi2.zlihuq7bxvkpkd.onCdzhmvnaomrtxB", ".Hqewl7F..xvuxt7lcwrzt5mueomm7q72Fdqyi.whnk3efzwzs", "oj7molpgAx.jBxkEjx3aGuCdfsxkfsbqukmf2.4Gfcdxkhobb.", ".DltF9nAFvj.NMACuCf8TIybvzI89npntDhthweRkakxgiFtu5", "guukeHu.guBN.6.uihDF56.Bmg5H.ypxsrzlEhD4sCt.yvhqtI", "gorl8HvolxxM6.czglA.83CAii.GCAmyvlAiAhAarArt.ubmoG", "cf.e3xp.ntkA.c.y.lnrl9zp5gewr.asrcr6nbnmhpgqpl59bu", "l.xkAtfLd7ECuzy.rdDzzv5uz.ptue..9KlwGmCvpvr7mnDC.A", "5lb6bqgjiljuig.r.fkmodri8adplm7jjjj4l3knajajhddbeo", "9Apam.fz2cxChlldf.xwm.gro4businhby.lzb..isk8ljqr..", "pn8mri.k.w3fDAnDkx.7IxBahsygcqdotojh2n0Ie9cwhgref9", "puclvajrzra8F.rzmw7.K.w4msz95lgjpuek9n5.c3bsccwkl2", "lxzqiNAxlzGT58lzomIK.bDHrlbNJEvDyuFqJnI3yIyvEAkvxN", "cnng7DrnituI639vd.x.b.yw.e6Czwjurkwfxdwbnxnpuq.jmC", "mNwkBo.Kh5Cy.Cz5rgBwDy.rzjspqa.b7LhwDnzznsp8jkFBFw", "lubht8erumdbBApuira4Hwr.knw72gefku9ick8F808n.7ujl6", "ec9f9toaqufvmi5z8ohmr.zk.ijsnt5qrbo3hcireldrmi936p", ".vk5irdu7eszgig.a4sslejni.9rp.hgctjfu5sjeogaifllpu", "at.edB.tboxI5.epdbyzb6swj9.Byslrmrthzby9mwnksphnqC", "qCjm.0fzxmk8HGwtpug9NCp7srB.4e.e.C8pjpfLe7fo8bCrt8", "nxej.5euvmf9.Crulsc5Jzq2npy4.fhekx8lfmaIa2an78xmo5", "jGnf.d4Dk7snyA.emiqlEwagt.sef.o16E6ptjpBehga8a.uxl", "dh3.enjepqbppma.7ndgvj.e5hl.ho.lngj3dbcu9f7ohdf58j", "hDldvd2Bk7qnxys.jhojDubfqgree1l.6C5nrhnAcfe96.yrvk", "fEocuk5Cd2utsvr9jbtpyr7krcm.k6n6.Cbnwfsvflh3ccxtwq", ".2iq.Dz..FkDrlcKjyouukLubtrCxEgCC..emnowquoDxu.a8x", "jBhev86.odmhzArlj.jeFwh9ojt886j5b..lm.iD9abf15xpse", "bg7baqkenqftli6w4lhkqfwi3fhplp3nnel.h9hqbiao.fb5.n", "qm9o.lqjCy2hEAnGlz29JxDchuzjftdrwmmh.o3Jgceykireec", "1pe3ependi.whhbm3bnnndnkc5bpmjbhfn.9o.mla.bfgdgfjq", "oo8lrgmlz.4eDAnCk.05Iwz8isyfapcnsoih3m.H.7bugfrff8", "kzyojLxzhwGR4amvn.I.3bzFrj9LIBuAvwDqJlH.wGxsCymvyM", "cr8.lfaomhfksrhpaiecynn8eemeae9cfq9bga.w.9.h7.nfi.", ".ubit8frvncaCApvjs93Ixs0low72hffluaic.7G9.8o8.ujl5", "dp69lfcmnkdktrgrakcbynp8dgnfag7ehobaebbx.8.j85mdge", "e.pctn8Da3xx.tq7j8wsvp8nrakonao93Dfoyfushoj.ffwuxt", "hyfdt86woekgy.pmhlhcEuj.mis878h6cx1.kggC788f.3vmpd", "evcapc7smfhivulndjgcAqk7ifpb8ad.cu5fidfy..5f3.rjme", "hcjk3Cv.rzoFhb5Ddqrwk.Fu9lhCx.fyx.xbrgrmnumwvr.cdz", "hb7hdsp8twbtqm9CbrekvjBj3lnrmu5rtap5effvfjdumjc.3n", "l89leus5xzbutob.e.flxmFl6pqtox8vw8s.ejfyilgxpmd3.o", "sxf.y9kuBs.5IGuAo.92NCw6puC85ljkqxencq8M.5etdezno."};
    int inverseWalkSpeed = 31;
    int inverseDriveSpeed = 12;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 33673;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> cars = {36, 0, 5, 32, 1, 35, 5, 45, 8, 38};
    vector<int> districts = {35};
    vector<string> roads = {"..f8....lp....f.m.9n....jA.pAi...q.c..f..o..k....m", "....t38j.hck.c5.f8.4g.dd.....d.6.5drga.k.mhai.jq..", "f....8d....l..1mg..7kehe.ljg..j6n.8ob.0i3mg...k.8.", "8....s..ux..Fn.gj.1st.r.o.cxG..i.tf..m.xh....sls.l", ".t....vNHHraAy.v.A.yo....y..L...Pxr..k.I..I.bD.G..", ".38s..7..g..n.8.i4..h7eb5eo.ee...2.w....9.gd..l.de", ".8d.v7.m..l.glfAf..a......n.il...4m....s.mocjn...b", ".j..N.m.lb...jk.zf...8.7gqE.5..q.h.J.t.goG9u.fCstv", "l..uH..l.........r..D.....z7..w..q..kw.4m.a.z.....", "ph.xHg.b..hBE9e....dy....v.0g6on9jh..sh4k.1ry.Af.t", ".c..r.l..h.....ek..e.k..a.j.....q.0k5i..8oiejc.gb.", ".kl.a....B....nx..kp..dy.....v...n.jlakD..Ca..3Ec.", "...FAng..E....v.m..q...y.8u.u..p..C..jtJr.Doq....k", ".c.ny.lj.9......p.o.t.qb7..9l..fj...cm99cua....d..", "f51..8fk.e.nv....e........kf..k....pbe.g5ofcjamk9f", "..mgv.A...ex....wA..E.B.p.r.Ek.p..d..w.....rtl..o.", "mfgj.ifz..k.mp.w..lk.q.t............j...c6.5.t..8.", ".8..A4.fr.....eA..z...e.ab..c..e.2m..f.oer.gojnw.g", "9..1.......k.o..lz..vAtz.CdyH.Ek..h.bol..k.j..nt.n", "n47sy.a..depq...k...k6.8..pfdbcbh5....8.a.dfn.o.eg", ".gktoh..Dy...t.E..vk.o.tm..zt.ie..s..7j.....ew9H.8", "..e..7.8..k.....q.A6o......f.eahd8l.pkei...ltets.l", ".dhr.e.....d.q.B.et.....i.hwr..b....p.gze.v..t...5", ".de..b.7...yyb..t.z8t...9ox7.9hk8d.....biA..v.x..p", "j..o.5.g..a..7.p.a..m.i9..nd....i8.t..5.8.....o.cg", "A.l.ye.q.v..8....bC....o..r.l..i.buDw.l.kpu..u.Hlf", "..jc.onEz.j.u.kr..dp..hxnr...twdHokcgdiB.5Aa3v.Aa.", "p.gx....70...9f...yfzfw7d...h6p.a.h..t.3l.....B.p.", "A..GLei5.g..ul.E.cHdt.r..l.h....aerKw....De.A..wss", "id...el..6.v...k...b.e.9..t6....ghauf.b..x..s1.d.o", "..j.....wo....k...Ecia.h..wp.....8sG.i.tk.nls.q..k", ".66i...q.n..pf.p.ekbehbk.id......bdl.....f...j...6", "..n.P....9q..j.....h.d.8i.Haag....q.wx.dr..x.e.p..", "q5.tx24hqj.n.....2.5.8.d8bo.eh8b..jxmc.nb....i..ed", ".d8fr.m..h0.C..d.mh.sl...ukhrasdqj.k5....p.gk.pfc.", "cro..w.J..kj..p.........tDc.KuGl.xk.e.nB.i..g.m..n", ".gb.....k.5l.cb.j.b..pp..wg.wf..wm5e..b..mofhh.jb.", ".a.mk..twsiajmew.fo.7k....dt..i.xc..........9.8..0", "f.0......h.kt9....l8jeg.5li..b.....nb..j2l.9.djn..", ".kixI.sg44.DJ9g..o...izb..B3..t.dn.B..j.mF6.A5D...", "..3h.9.omk8.rc5.ce.a..ei8k.l..k.rb....2m.il6.g....", "omm...mG..o..uo.6rk....A.p5.Dx.f..pim.lFi....z4..a", ".hg.Igo9a1iCDaf....d..v..uA.e.n.....o..6l..ry..h.t", ".a...dcu.reao.cr5gjf.l....a...l.x.g.f.9.6.r.7n.w..", "ki..b.j.zyj.q.jt.o.net.v..3.Ass...kgh9.A..y7.u5A88", "...sD.nf..c...altj..wet..uv..1.jei..h.d5gz.nu.xdkq", ".jkl.l.C.A.3..m..nno9t.xo..B..q...pm.8jD.4..5x.F.7", ".q.sG..s.fgE.dk..wt.Hs...HA.wd..p.f.j.n...hwAdF.s.", "..8..d.t..bc..9o8..e....claps....ec.b.......8k.s.7", "m..l.ebv.t..k.f..gng8l5pgf..sok6.d.n.0...at.8q7.7."};
    int inverseWalkSpeed = 46;
    int inverseDriveSpeed = 18;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 234;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> cars = {17, 2, 12, 5, 30, 26, 10, 24, 41, 30};
    vector<int> districts = {25, 19, 47, 10, 23, 25, 20, 38, 7, 38, 30, 20, 47, 20, 42, 23, 28, 1, 34, 11, 16, 4, 28, 18, 47, 41, 35, 21, 15, 6, 3, 44, 17, 36, 49, 42, 18, 46, 1, 42, 41, 15, 18, 9, 30, 26, 33, 22, 0, 9};
    vector<string> roads = {".....N.....k9A............5.............N.I..Q....", ".....v..4.........t...w..............0............", "..............................c..........a..o..7..", ".....y.................j.......b2......k.........p", ".......p.....z..l...uf........g........b...s......", "Nv.y.....9.....v.............................3D.v.", ".............g..A..........................8......", "....p...........d.ov....yo.....p..b.............6.", ".4.....................D.....ne............x......", ".....9.....k......................................", "............ra.4............3.................v...", "k........k.............l..............h......w..k.", "9.........r................8.........o........d..y", "A...z.g...a.......................................", "..........................w............m....8.....", ".....v....4.......k..........m.......C.........n.m", "....l.Ad...........GK.s..B..D..v.....7............", "..................c.....z..............g..a.......", ".t.....o.......k.c......E....u.......t...G...d.o..", ".......v........G...k............t.d......g.......", "....u...........K..k....u......f................G.", "....f..................x..l.........s8a...........", ".w..............s.......3....d...........2..B.....", "...j....D..l.........x........p.i........H........", ".......y.........zE.u.3.......o.q.....y.....B....D", ".......o........B.........DJ..ol.....u......k.....", "5.............w......l...D.6.......zA.............", "............8............J6...o..p..............u.", "..........3.....D.................x....h..........", "........n......m..u...d...........h........n..g...", "..c.g...e..............poo.o......9.mc........c...", "...b...p........v...f....l................l.....r.", "...2...................iq.........yqrC.......A.mzn", "...................t.......p......7m...........6..", ".......b....................xh9.y7......w.........", "...................d......z.....qm.....n.H.ch.x...", ".....................s....A...m.r.....j...........", ".0..........o..C7.t..8...u....c.C...............2p", "...........h.........a..y...........j.............", "...kb.........m..g..........h......n.....j.g......", "N.................................w...............", "..a...............G...2H...........H...j.........D", "I................a.g...........l.............8.qq.", "....s.8.x....................n.....c...g..........", "..o...........8.......B.Bk.........h...........h.g", "Q....3.....w......d.............A.........8.......", ".....D....v.d................gc....x..............", "..7............n..o.............m6........q.h....l", ".....v.6...k........G......u...rz....2....q.......", "...p........y..m........D.......n....p...D..g..l.."};
    int inverseWalkSpeed = 84;
    int inverseDriveSpeed = 20;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 142004;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> cars = {15, 18, 44, 36, 19, 34, 39, 47, 22, 35, 30, 2, 17, 14, 41, 13, 23, 43, 38, 7, 5, 31, 12, 43, 34, 17, 44, 5, 7, 46, 19, 0, 21, 1, 40, 10, 16, 23, 30, 3, 47, 1, 16, 5, 13, 5, 46, 18, 49, 18};
    vector<int> districts = {5};
    vector<string> roads = {"....g8..6...p..kk.4...tm..a.y.tzga..q...c.t.....a.", "..w..y......3.I.c.o...f..Cs...3....I...s.s...g..j.", ".w.C...Nz..5s........g....Da4.v..o.m....k..k.g..z3", "..C.m..a2......s.n7....v..5r.....g..u.....wl......", "g..m....mEt........v8..d..i......q....w..kJ..k.u9s", "8y.....l7hd..5c..o...f.t..f...B...A.j5.e...a..buj.", "........bBv......oaHr......y.IA..oN.D..t.j..xE.I.E", "..Na.l..d..LDi..B....w...0..SN.Tq....pk.vn........", "6.z2m7bd..k...kp.m7........o.BzG..Eq....k9thmz5.d.", "....EhB....lI...AB..N.F.........b..4..ii..5.gD..Ao", "....tdv.k...w..6..l..9.....am..r.....c...bh14r..qe", "..5....L.l..w.n.m.w...ooq.C....erk...qwd.nq.a....5", "p3s....D.Iww.tG......ma..Etn.l3r......Eq......Brl.", ".....5.i....t.i....s....i..k..wBd..no.bef4rd......", ".I...c..k..nGi...y..K.....t...KB6.y.67.....a..n.w.", "k..s....p.6.....l.p8.9.nj.v.........f.o..gl..n.c.8", "kc.....B.A.m...l.8.......Cr....k.o.wA..h.k........", "...n.oo.mB....y.8..qcff..u..v.ctvn.y...j.hG..gr...", "4o.7..a.7.lw...p..........5.....k.....h....j......", "....v.H......s.8.q..C.k..M...b..t...n.xd.n..bi.3..", "....8.r..N....K..c.C..mhK.p..........E...t......g.", "..g..f.w..9.m..9.f........m........i....88.8.j...c", "tf.......F.oa....f.km..6.K....c.E..B..GnfsL.o1....", "m..vdt.....o...n....h.6.C....e....ly..Aj..I.m7....", "...........q.i.j....K..C.wroz..E..C.....th.c.Flwv.", ".C.....0....E...Cu.M..K.w.....GU..S.Fq.y.o........", "asD5if.....Ct.tvr.5.pm..r...IDw.m..y......Bo.A8..z", "..ar..y.o.a.nk..........o...f.r..f.......f..5g.a.5", "y.4....S..m......v......z.If.ay6A...t..k.......4E.", "......INB...l......b...e..D.a.n5....y..j.sEpj8H...", "t3v..BA.z...3wK..c....c..Gwryn....uJ....iu...e.t..", "z......TG.rerBB.kt......EU..65...w2v..I..wF....7..", "g......q.b.r.d6..vkt..E...m.A.....C..15..de.i..x..", "a.ogq.o....k....on.........f...w...d....h6i..u.o.k", ".....AN.E.....y........lCS....u2C..s..G.n.C.....C9", ".Im.....q4...n..wy...iBy..y...Jv.ds...kfr...c..n..", "q..u.jD......o6fA..n.....F..ty.......eki......ur.o", ".....5.p..cq..7.....E....q......1...e.5f.b...B...r", "....w..k.i.wEb.o..hx..GA.......I5.Gkk5.k.d..m...o.", ".s...et..i.dqe..hj.d..nj.y..kj.....fifk..9.53m.gm.", "c.k....vk....f.......8f.t.....i..hnr......z.ffpj.g", ".s..k.jn9.bn.4.gkh.nt8s.ho.f.suwd6...bd9..p....pf.", "t..wJ...t5hq.r.l.G....LI..B..E.FeiC.....zp.h..vx.u", "..kl.a..h.1..da...j..8..c.o..p.........5..h..s....", "......x.mg4a.......b..om...5.j..i..c..m3f......eq.", ".gg.k.E.zDr....n.g.i.j17F.Ag.8e..u...B.mf..s..Ffs.", ".....b..5...B.n..r......l.8..H......u...p.v..F.FhB", "....uuI.....r..c...3....w..a4.t7xo.nr..gjpx.efF...", "ajz.9j..dAq.l.w.....g...v...E.....C...om.f..qsh...", "..3.s.E..oe5...8.....c....z5.....k9.or..g.u...B..."};
    int inverseWalkSpeed = 23;
    int inverseDriveSpeed = 13;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 117;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> cars = {47, 35, 19, 10, 38, 47, 20, 40, 42, 31, 5, 40, 0, 12, 13, 2, 41, 32, 34, 2, 5, 45, 39, 5, 26, 48, 43, 19, 34, 0, 34, 8, 14, 36, 43, 8, 1, 15, 28, 6, 45, 43, 45, 4, 2, 24, 4, 21, 47, 17};
    vector<int> districts = {11, 15, 41, 30, 20, 38, 48, 33, 4, 19, 43, 33, 19, 5, 29, 48, 47, 0, 7, 10, 49, 7, 45, 28, 13, 28, 29, 15, 1, 31, 7, 35, 45, 42, 39, 33, 6, 49, 18, 2, 49, 28, 45, 24, 23, 22, 49, 44, 4, 1};
    vector<string> roads = {"...r...n4.....m....u.i.6.3.v.zm..........G..ec....", "....u......Li..c.....j.7.4awuAn...eFm....Gc.fd5gh.", "......i1l.A.....ulhgb........A2.n.........e......k", "r....nPx...Ca.4.d..M.j.o.....8.....r.t......d....o", ".u...hq..pv..o....c..d..es.....l...fl.....lmmh....", "...nh.Ir.G...v......B.....yami......j.....z.o...m.", "..iPqI.........l.....v...A.xl.....................", "n.1x.r.......j..tj.f.d.g.......qpd....a..k......c.", "4.l.........j.o7i3.ph......t..i...g....v...pf....y", "....pG......xoDazlv.4....p...Nd.Er..zm....b..l....", "..A.v........rb.k....n..y....2B.zy.od...z...j.tH..", ".L.C.........D.EI.bC..n..I...yr.....w.in.8...x.E.d", ".i.a....jx....5..f.C.ay.j..lqhoay.3q.jv...m6.b....", "....ov.j.orD..g.b.Aul..3d37o....C...e....A..76....", "m..4....oDb.5g.u...I.g.j.....d.......o.F.Ds7...y.p", ".c....l.7a.E..u.....9.n...ks..c...l..c...y1...d3..", "..ud...tizkI.b......xhE...4t..t..z5y...Gf.o.8.b..v", "..l....j3l..f...........d.9..x.o...A.5.w.C9l...f.v", "..h.c....v.b.A.....r.p.z.EHfb..v.........1....Cw.h", "u.gM...fp..CCuI...r...e..w.v.Q..BpB...jf.....q.drA", "..b..B..h4...l.9x......i.....J8......m..os..qi.6..", "ij.jd.vd..n.a.g.h.p.....a.h......h..........8.d...", "...........ny..nE..e....gy....a.m..sx.41.....o.l..", "67.o...g.....3j...z.i.....ao.vgmB..xg...9.8.......", "....e.....y.jd...d...ag......y.....sk....p........", "34..s.A..p.I.3....Ew..y....ttv....9B...A.Ee.a..j..", ".a...y.......7.k49H..h.a...u........f....H..9d7..w", "vw...ax.t...lo.st.fv...o.tu...........f.yeq......4", ".u...ml.....q.....b......t...z8.h..k............f.", "zAA8.i...N2yh.d..x.QJ..vyv..z...x..m.B.JB..blsu...", "mn2.....idBro..ct...8.ag....8............l.q.d...m", "....l..q....a....ov....m..............t..u..c...fe", "..n....p.Ez.yC.....B..mB....hx...b.a....L.Bt......", ".......d.ry.....z..p.h..........b..f.z.....p......", ".e......g...3..l5..B.....9.................a.a8p..", ".F.rf.....o.q...yA....sxsB..km..af.......h.k.r..n4", ".m..lj...zdw.e........xgk.f..............w....g...", "...t.....m..j.oc.5..m........B...z......1H..g.6g..", ".......a...iv......j..4....f...t.......5B9nut....j", "........v..n..F.Gw.f..1..A...J........5...o.x...o.", "..........z.....f...o..9...y.B..L....1B.......7ij.", "GG.....k...8.ADy.C1.s...pEHe..lu...hwH9....w..Cx.g", ".ce.lz...b..m.s1o9.....8.e.q....B.....no....i..5d.", "....m...p...6.7..l...........bq.tpak..u..w.....w.h", "ef.dmo..f.j..7..8...q8...a9..l.c.....gtx..i..8..8.", "cd..h....l.xb6.....qi.o...d..sd...ar........8..g..", ".5........t....db.C..d....7..u....8.g6..7C.......u", ".g........HE..y3.fwd6.l..j........p..g..ix5w.g....", ".h...m.c...........r........f..f...n...oj.d.8.....", "..ko....y..d..p.vvhA......w4..me...4..j..g.h..u..."};
    int inverseWalkSpeed = 75;
    int inverseDriveSpeed = 28;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 58152;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> cars = {4};
    vector<int> districts = {24};
    vector<string> roads = {"..H..zCz..quFE.toEvn..ft.wB.gLz.r..5m.Fhd.Fh.q.as.", "..aPDC.nOCspyhr....w..D..F.C.5...JzN..z.E.hH.w.I..", "Ha...u.....f...xl.h.vxtk...rq3.mwzp.lsst.r9x..7xea", ".P..fsw...mq.ArxoAv.c..n...ce.B.k..2l.yjbk.aj.K...", ".D.f.v..c9fj..ci8.....9k.tx6.wl.p..c.f..4.sg6h..d.", "zCusv..C..ig6lw.wqzifp.cz.2o......ett.6zrz.hC.Cqqy", "C..w...r.l..b6m.o..e.q.8Ehhm...6h.fwm.cu..5.......", "zn...Cr.wok.C.7g.h3.v..pEDF.........dsDhnfnwkp....", ".O..c..w....BAp.lA..f6....x.c.xvo.i1.g...gBd.m..ox", ".C..9.lo....q.greok67.0cjj.2.w..ff6b...d.do7g9y.dn", "qs.mfi.k...3j.duee..c.b5th....s.f.6.b..i.hd..4pg..", "upfqjg....3.h9..gbi7f.f4xh.fekua.q.pec..h..hp6..9h", "Fy...6bCBqjh.....nAlluqeF.8..uM6.Fiz.k.CvB.nGgz..x", "Eh.A.l6.A..9..kB.5l.o.p.Hooo..xd.yjzl....s0r...t..", ".r.rcwm7pgd..k.g3..enkh.x.ze.leq.h.o.kybf..o.ilj.8", "t.xxi..g.ru..Bg.fxftzs...LP.n.8..gxti.Odn..zc..r..", "o.lo8wo.leeg..3f...d...ktv.cao.rtd.l3j.7c6.mb.og7c", "E..A.q.hAoebn5.x..g.rtp.I.t.n8s.s...j..r..6...b.c.", "v.hv.z.3.k.iAl.f.g.irolm..C..jbtxk..9.B.j..s.mjn..", "nw...ie..6.7l.etd.i....6....7qte..4h.6lg...bk..c9j", "..vc.f.vf7cflonz.rr...7b..h.cz.g8m5.i2l..l.1.8Caj.", "..x..pq.6...u.ks.to...3h.m.5.B..ic.5.9ue4...f.D.is", "fDt.9....0bfqph..pl.73....o24xu..e79.6r..e.7..z...", "t.knkc8p.c54e...k.m6bh...c.e.....r...8.nhn.d..s...", ".....zEE.jtxFHx.tI.......v..k...rio7qlF..oHhm.Rdw.", "wF..t.hD.jhh.o.Lv....m.cv.4.nALa..cq.dax..n..cEn..", "B...x2hFx...8ozP.tC.h.o..4...BOa8....h....njF...tB", ".Crc6om..2.f.oe.c....52e.....wr..c..88...b....x.dm", "g.qe....c..e...nan.7c.4.kn.....mkb..6a.9.9o..cw6.k", "L53.w....w.ku.l.o8jqzBx..ABw..s.ACtHpwv..v.....Bic", "z..Bl...x.suMxe8.sbt..u..LOr.s...mxy..Nh.gy.ixqukg", "..m...6.v..a6dq.r.teg....aa.m....ycto...ouciy9.p.r", "r.wkp.h.off.....tsx.8i..r.8.kA...v9.p.e.k..9wa..o.", ".Jz......f.qFyhgd.k.mceri..cbCmyv.mdd.F.9...3o.bkq", ".zp..ef.i66.ij.x...45.7.oc...txc9m..e.jk...7.3w.eo", "5N.2ctw.1b.pzzotl..h.59.7q...Hyt.d....zg8hz..k.5ox", "m.ll.tmd..be.l.i3j9.i...q..86p.opde..f.7..m..fq.6.", "..s.f..sg..ck.k.j..62968ldh8aw......f..kbk.4m5za.q", "Fzsy.6cD......yO..Bllur.Fa...vN.eFjz......h.G.Avry", "h.tj.zuh.di.C.bd7r.g.e.n.x..9.h...kg7k..90u.3lwc.k", "dE.b4r.n...hv.fnc.j..4.h.......ok9.8.b.9....bez.fo", "..rk.z.fgdh.Bs..6...l.eno..b9vgu...h.k.0..tl4lv...", "Fh9.s.5nBod..0...6......Hnn.o.yc...zm.hu.t.ryf..f.", "hHxagh.wd7.hnrozm.sb1.7dh.j....i9.7..4...lr.na.9k.", "...j6C.k.g.pG..cb..k.f..m.F...iyw3...mG3b4yn.o..in", "qw..h..pm946g.i...m.8....c..c.x9ao3kf5.lelfao.t.dm", "..7K.C...yp.z.l.obj.CDzsRE.xw.q...w.qzAwzv...t.Dkc", "aIx..q....g..tjrg.nca...dn..6Bup.b.5.avc...9..D..s", "s.e.dq..od.9....7c.9ji..w.td.ik.okeo6.r.f.fkidk..9", "..a..y..xn.hx.8.c..j.s....Bmkcgr.qox.qyko...nmcs9."};
    int inverseWalkSpeed = 88;
    int inverseDriveSpeed = 43;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1232;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> cars = {18, 38, 33, 9, 48, 15, 23, 22, 0, 8, 14, 11, 15, 48, 2, 31, 5, 36, 34, 8, 22, 26, 28, 35, 5, 34, 6, 3, 48, 15, 15, 26, 37, 39, 27, 37, 43, 33, 20, 12, 33, 15, 2, 49, 39, 21, 25, 38, 37, 32};
    vector<int> districts = {47};
    vector<string> roads = {".............z.u........w..............f..........", "................s.....m....m...7..m............i..", "...........................f....................n.", "..............z.....B...z....A............i.....y.", "......n........4..d......j....................r...", ".................pc6............o.a..........y..e.", "....n.........z..........u..................8D....", "..........t......s5............E.......u....o.x..b", "............6...p....................A............", "...............fi..e......i.....d.....l...........", ".......t.............k.........k.........s....4...", "..............0.....3.......o.......C...b.....a...", "........6......u..............e......u...........G", "z...............l.b..................w.....8r..g..", "...z..z....0...n.8.......5..q....a................", "u...4....f..u.n.......g.....o...c.................", ".s......pi...l....sw................xA...H........", ".....p.s......8.....8........14..h.b......x..9.d..", "....dc.5.....b..s...y....................w........", ".....6...e......w...............q.................", "...B.......3.....8y..w............................", "..........k.........w.........s.......d....d.xo.9.", ".m.............g................................k.", ".............................g......g.............", "w..z.......................8......................", "....j.u.......5...........b.......y.......x.....k.", ".........i...............b......h...H.DkhC....b...", ".mf.....................8....d....................", "...........o..qo..........................e......o", "...A.............1.....g...d......B..........7....", "............e....4...s...........e........A...d...", ".7.....E..k.....................w.................", ".....o...d.....c...q......h....w.........D.o...c..", "..............a..h............e.....I..h...G....x.", ".m...a...................y...B...............G....", ".................b...................zz.....w.....", "...........C....x......g..H......I..........oE....", "........A...uw..A..................z....z....C..p.", ".........l...........d....D........z...j..0....j.e", "f......u..................k......h....j....v......", "...........b..............h..........z....A...i.j.", "..........s.....H.w.......C.....D..........D.H....", "...i.............x.......x..e.A.......0.A..p......", ".............8.......d..........oG.....v.Dp.......", "......8o.....r.....................wo.............", ".....yD..........9...x.......7....G.EC...H........", "....r..x..4a.........o....b...d.........i.........", ".i...........g...d..............c.....j...........", "..ny.e...............9k..k.......x...p..j.........", ".......b....G...............o.........e..........."};
    int inverseWalkSpeed = 63;
    int inverseDriveSpeed = 52;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 2756;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> cars = {16};
    vector<int> districts = {20, 23};
    vector<string> roads = {".rm.Bu.em.dfmrzG3bwuai8..Ptrpap..i.wC3.s.Cacdcuhmq", "r.rdi.ac58k.52nf.fh6xbk8anll2lj46hidupn8.nz.dtfeen", "mr.u.dzlr.u.qphDkhG.hg.x.LbGos9pw9qlhh3y7lj9.b..y6", ".du.9im.jiyqjbha.qs8Gk.l7g.ydyk.jnv9pAqlwfIvpBrlso", "Bi.9.atpoiB..g7.CqAbDjys7pc.h.empjx5fykrr5.r.x..xh", "u.dia.ulnfxqmh4sukCetettb..Ehw.lrbt8aq..i7vilnAdw6", ".azmtu.f7.hc8cxiwj6.Bik1.q.bcjt93ph..sw0vyCtgz.l7x", "ecl.plf..6b47.prh3.f..8d..lkaah7.b7jvdh.frmd0ij7.k", "m5rjon7...e707.k.ce.uaf5g.og.fl14hc.ylo6nsvl9r.d8p", ".8.iif.6..i.88jnl8n9o1ffbwfp6hc6.8ec.hefflqe7kl4hg", "dkuyBxhbei.7emByhcjqo..gt.xdk2tfhm3vHfshn.olbohjaw", "f..q.qc47.7.7eus.7hioa.bl.qfc7m7bg4.Afm.jwph4.fc.p", "m5qj.m8708e7..qkpbfbt9e.ftnh5fk05gchxln7.ruk8q.c.o", "r2pbghc.78me..k.uf.3.alb8njo1mh69gjas.lbo.ymeticgl", "znhh74xp.jBuqk.s.pEgyjxwcx.IkA.o.gy97vf.n3AnqsD.Aa", "GfDa.sirknysk.s.JvmeNpzig8u..AukhvxjA..hDqOCtImspy", "3.k.Cuwh.lh.pu.J.dAw6kbuxStvre.ouifxB3kvcC.b.9yiqp", "bfhqqkj3c8c7bfpvd.pih68hkDkn.bgbh98ku9fjbri92en6gi", "whGsAC6.enjhf.EmAp..Gpn8stD.jl.ga.kv.xC8B.GzmE1.8E", "u6.8be.f.9qib3gewi..ybof3mgs5qfadgn6orkfogAnhtmdlj", "axhGDtB.uooot.yN6hGy.mi.zVsCv.otzjlyz8iBbC1bk5Ekxn", "ibgkjei.a1.a9ajpk6pbm.e.d.fq8.b8f..dpfchdloc6in.ie", "8k..ytk8ff..elxzb8noie.irItjj3o.jh2.C9mkhAif7il.eq", ".8xlst1d5fgb.bwiuh8f..i.k.ucahr.1nfmDqu0tw.rfx6j6v", ".a.77b..gbtlf8cgxks3zdrk.ndw9tdehfq.ktjko.An.tr.ph", "PnLgp.q..w..tnx8SDtmV.I.n.BB.IBspDGqFNHpLvW.BQtAxF", "tlb.c..lofxqnj.utkDgsftudB.Fjw3m.ata9p.ug9.hlmBdx4", "rlGy.EbkgpdfhoI.vn.sCqjcwBF..g.iewgzP.Cd.JC.lB7s7F", "p2odhhca.6kc51k.r.j5v8ja9.j..kg48ehbsn.bmlwkcribf.", "alsy.wjafh27fmAAeblq..3htIwgk.sfil2uGcqjlDli9lkicu", "pj9ke.thlctmkh.u.g.fobordB3.gs.jq6pbdl5.dcq.iiy.u3", ".4p.ml9716f706okobgat8..esmi4fj.6fdg.k.8lquk8qeban", ".6wjpr3.4.hb59.huhadzfj1hp.e8iq6.mg.Bqs1suAqew8i.t", "ih9njbpbh8mggggvi9.gj.hnfDawel6fm.ieke5o7jk7bd.3o8", ".iqvxth7ce34cjyxf8knl.2fqGtgh2pdgi.r.cohjAl.7k.f.r", "wdl958.j.cv.ha9jxkv6yd.m.qazbubg.er.hshmn9Amkstere", "Cuhpfa.vy.HAxs7ABu.ozpCDkF9PsGd.Bk.h.y.Do9Bpv.KnHb", "3phAyqsdlhffl.v.39xr8f9qtNp.nclkqecsy.h.9y98b8v.nm", ".n3qk.whoesmnlf.kfCkicmujH.C.q5.s5oh.h..7..8h.A9v4", "s8ylr.0.6fh.7b.hvj8fBhk0kpudbj.81ohmD...uwBsg.6k7w", "..7wrivfnfnj.onDcbBobdhtoLg.mldls7jno97u.qd.e5zasc", "Cnlf57yrsl.wr.3qCr.gClAw.v9JlDcqujA99y.wq.E.swDkBe", "azjI.vCmvqopuyAO.iGA1oi.AW.CwlquAklAB9.BdE.cl7E.xp", "c.9vritdlelhkmnCb9znbcfrn.h.ki.kq7.mp88s..c.c5x9qd", "dd.p.lg097b48eqt.2mhk67f.Bllc9i8eb7kvbhgeslc.hk8dk", "ctbBxnzirko.qtsI9eEt5iixtQmBrliqwdks.8..5w75h.Cfvh", "uf.r.A.j.lhf.iDmyn1mEnl6rtB7ikye8..tKvA6zDExkC.q7C", "he.l.dl7d4jccc.si6.dk..j.Adsbi.bi3fen.9kak.98fq.kc", "meysxw7.8ha..gApqg8lxie6pxx7fcua.o.rHnv7sBxqdv7k.x", "qn6oh6xkpgwpolaypiEjneqvhF4F.u3nt8rebm4wcepdkhCcx."};
    int inverseWalkSpeed = 81;
    int inverseDriveSpeed = 79;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 3793;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> cars = {43, 37, 25, 17, 19, 46, 42, 45, 5, 40, 12, 27, 26, 4, 31, 7, 37, 18, 30, 7, 9, 13, 26, 14, 30, 1, 23, 38, 2, 3, 6, 10, 21, 25, 20, 2, 36, 21, 42, 3, 28, 15, 6, 46, 38, 43, 38, 11, 3, 46};
    vector<int> districts = {12, 17};
    vector<string> roads = {".D..op..7.sq....van...Hh.r.k.B..G..L.x.n.....a....", "D.B..lCsy......d........p..n.viB.h4..9....A.7w.L..", ".B.k..z.n.5..i..7..wx..c.l.h6.j.f...p......h.y...v", "..k.j.....lfOn..gs.y.v..k..m.u.....E.Hq.7...H.....", "o..j.7s........g.u..p...8dr..ce9...m.td..n..sqli..", "pl..7..l..9.q5c..r8g.....5k4..9..4.nf.jr..l3...p.g", ".Cz.s...a.w.E....5n.6......m.F...p....F....nw.....", ".s...l.....vu....6f.2.Em.kvg.A......x.C...bh.3.u.7", "7yn...a..8k.....p...awA..kz..us....D..u.......mh.f", "........8....it.k..sjwC9...i.vwm...E....3....j..n.", "s.5l.9w.k..8z..id.i.t.g..fs...d6........h.o.u.o.q.", "q..f...v..8.H....y.w..n8f..gb....l.otD..d.........", "...O.qEu..zH..y..Aki..x...............HR..Cr......", "..in.5...i.....8.m.....c.7n.o.f...r..knp....k..n..", ".....c...t..y....El..5..hg..9.....y...............", ".d..g.....i..8..vp28..o.b....n.q...tf.s...m.......", "v.7g....pkd....v........l...a..6m..p...c.z..H.....", "a..sur56...yAmEp..mi......C...B.K.BPFq..m.b...ovbe", "n....8nf..i.k.l2.m.7..p..5h.t...p3.vi.....j..i....", "..wy.g...s.wi..8.i7....pf.k.B..xxb..o......e9f6...", "..x.p.62ajt............mh..hE...F..K..D.jB8....s.a", "...v....ww....5.......9..mv....a5n.8k.5s..A......A", "H......EACgnx..o..p..9.rp.nng.a..m.....A...n.....z", "h.c....m.9.8.c.....pm.r....bj........xic5..cxn..m.", ".p.k8......f..hbl..fh.p......kghn7...........i..e.", "r.l.d5.kk.f..7g...5..m....f8p..m.2kpd.o....7fo..ge", "....rk.vz.s..n...Chk.vn..f.n.r.z...t.fz...B.cz..q.", "knhm.4mg.i.g........h.nb.8n.n..i...s.....m.0ljd.ed", "..6........b.o9.a.tBE.gj.p.n...5c.........yn...n.B", "Bv.uc.FAuv.....n........k.r.........g.7.r.xi...s..", ".ij.e9..swd..f...B....a.g.........o..ojys..e..g.q.", ".B..9....m6....q6..x.a..hmzi5...f.H..D.h......v...", "G.f.............mKpxF5..n...c..f.l.......g.mx...Az", ".h...4p....l......3b.nm.72......l..r.h.......l8s.c", ".4...........ry..B.......k....oH....k..RH..r.zeP..", "L..Emn..DE.o...tpPv.K8...pts.....r...E..A..r.M..G.", "..p..f.x...t...f.Fio.k...d...g....k..n.Fz.....h..q", "x9.Ht......D.k...q.....x..f...oD.h.En...z.ul2o7..c", "...qdjFCu...Hn.s....D5.i.oz..7j.........o.x..E..BA", "n....r......Rp..c....sAc......yh..R.F....H..K.D.y.", "...7.....3hd.....m..j..5.....rs...HAzzo..B...k..m.", "....n...........z...B......m....g......HB..l.D.G.s", ".A...l.b..o.C..m.bj.8A....B.yx.......ux....g.9....", "..h..3nh....r......e..nc.7.0nie.m.rr.l...lg....n..", ".7.Hs.w...u..k..H..9...x.fcl....x....2.K.....p..g.", "awy.q..3.j........if...niozj.....lzM.oE.kD9.p.l.8b", "....l...m.o......o.6.......d..gv.8e.h7.D.....l...9", ".L..ip.uh....n...v..s.......ns...sP......G.n....vx", ".........nq......b.....megqe..q.A..G..Bym...g8.v.2", "..v..g.7f........e..aAz..e.dB...zc..qcA..s...b9x2."};
    int inverseWalkSpeed = 98;
    int inverseDriveSpeed = 67;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 5902;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> cars = {42};
    vector<int> districts = {38, 2, 14};
    vector<string> roads = {".h.....3..o...v...u..4.x..ip..m.b..ed...q...u.a...", "h....As...v...n..ik.B.....9.f75x...vo........o.4..", "..........5...............g..h..k................c", "......Ci...e.E......Nr.D.......F.v.By.a..h........", ".......d.AD.kB..k.......nan.0.......t...yk4..ym...", ".A......g..z.........lowCx......v..f........p.....", ".s.C....c.8.................w.....6......xCv......", "3..id..........9...d...wk.....i...o...fv.lhc......", ".....gc...l..u...y.7k.o.lr.....3r........ECr......", "....A..........zm...o..6......r.l....s......2dh.C.", "ov5.D.8.l.........o........4........ba........g...", "...e.z..........e.....h..8......cv....f..m......ii", "....k...........a..............q.d....dv...o......", "...EB...u........8........f.B.u..fn........D......", "vn.....................................x4.E.3.k...", ".......9.z......cx...9..a..t..rj.A...u.......r.o..", "....k....m.ea..c.k..n....b.k.....o..8....n........", ".i......y....8.xk....o....8.w..w..........z..e....", "uk........o.........v...N...z...l..A..o..i....kp.u", ".......d7............7k........al..7...n...j......", ".B.N....ko......n.v..n........Hf....e..5.....c.G..", "4..r.l.........9.o.7n....ej....d.......nor.i.g8...", ".....o..o..h.......k.....a......7....q......id4...", "x..D.w.w.6...................m..p..C.zsA.m........", "....nC.kl......a..N......qB.m.B..L....y.......t..n", "....ax..r..8....b....ea.q.d..6...m....8A..........", "i9g.n........f...8...j..Bd.q...t.9.r.v....q...af.k", "p.........4....tk.........q.......8f...6...D..i.q.", ".f..0.w......B...wz.....m....hfye..ut..I...7..m..p", ".7h....................m.6..h..........v....lh.c..", "m5.....i.r...u.r....H...B...f..Db..A..2Jp4...u..z.", ".x.F....3...q..j.w.afd....t.y.D..B.3......Du..iBd.", "b.k..v..rl.c......ll..7p....e.b..i.o..8y.ch.....p.", "...v.......vdf.Ao.......Lm9....Bi....A....y....lE.", "......6o.....n.............8.......7...7......iC..", "ev.B.f............A7...C..rfu.A3o.7...x..B..x..y.6", "do.yt.....b.....8...e.......t........ds....r......", ".........sa....u......qz..v......A..d.........m..g", "...a...f...fd.....o....sy8....2.8..xs........t...r", ".......v....v.x....n5n.A.A.6IvJ.y.7........F..n.q.", "q...y.........4......o........p...............f...", "...hk.xlE..m....n.i..r.m......4.c..B..............", "....4.ChC.....E..z........q....Dhy.........c.C....", "......vcr...oD.....j.i.....D7..u....r..F..c..y...n", "u....p...2....3.......i......l.....x..............", ".o..y....d.....r.e..cgd......hu.......t...Cy...ur.", "a...m....hg...k...k..84.t.aim..i..i..m.nf........9", ".4.............o..p.G.....f..c.B.lCy.........u....", ".........C.i...............q..zdpE.....q.....r....", "..c........i......u.....n.k.p......6.gr....n..9..."};
    int inverseWalkSpeed = 41;
    int inverseDriveSpeed = 8;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 3854;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> cars = {44, 46, 8, 39, 9, 46, 29, 48, 1, 11, 29, 3, 49, 35, 38, 25, 37, 18, 45, 10, 26, 7, 33, 35, 3, 31, 14, 1, 45, 48, 40, 11, 42, 26, 33, 11, 26, 3, 48, 21, 0, 8, 0, 44, 34, 0, 17, 38, 30, 8};
    vector<int> districts = {1, 9, 8};
    vector<string> roads = {".............f...............q.............c......", "..e...B.......fE..t...5..........7.........k....7.", ".e........l...........8q..............g..........f", "....q...............................y..F....b.....", "...q...vB4...r...B.................C....d...C.cb.i", "........it....3..........................r....i...", ".B...........5k....B........5eD6..tg..kK..........", "....v........3.vA.....q....q........x....F........", "....Bi....ba..........s...........................", "....4t...............3.zd..e.....D...e............", "..l.....b..........q.w........o......h......c...n.", "........a....e..B.y.B........u........7..B...e..o.", ".................k......n....o..k..h........k...k.", "f...r.53...e...r........y.s...y5.o..z..Hp...a.i...", ".f...3k..................q......h....h............", ".E.....v.....r...B......d.....xx.............x....", ".......A...B..........t............F.....e....g.v.", "....B.......k..B.............r.7.......Ox.........", ".t.........y.........n.z..hw.............7..G.....", "......B...q.............f...........i...g7.8...xf.", "...........B...........Ab............f...q.l......", ".........3w.......n......xwa........Ie......BA..F.", ".58....qs.......t.......................p.........", "..q......z........z.A.........t.n....k......8i....", ".........d..ny.d...fb.........n.B.6E.............f", "..............q......x.....F.D7.....i.p...H.......", ".............s....h..w........5.........k.........", ".......q.e........w..a...F..........N...k..t..f4..", "......5...........................n.............E.", "q.....e....uo....r.......D.........t.....D........", "......D...o..y.x.......tn75.....f.q.....n.F.......", "......6......5.x.7................y.............E.", "............k.h........nB.....f.....5.......v.....", ".7.......D...o.........................A..........", "......t.................6...n.qy................w.", "....C.g.....h...F.......E....t................q...", "...y...x.....z.....i.I...i.N....5....v..w...z..I.r", ".........eh...h.....fe.k............v........m....", "..g...k....7.............p..............lt........", "...F..K......H...O...............A.........j..r...", "....d........p...x.g..p...kk..n.....w.l.....y.....", ".....r.F...B....e.77q........D........t.....Lo....", ".........................H....F.............g.....", "ck.................8l......t...........j......d...", "...bC.....c.ka....G..B.8........v...z...yLg.......", "...........e...x.....A.i.............m...o........", "....ci.......i..g..........f.......q...r...d......", "....b..............x.......4........I...........G.", ".7........nok...v..f.F......E..E..w............G..", "..f.i...................f...........r............."};
    int inverseWalkSpeed = 31;
    int inverseDriveSpeed = 19;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 2375;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> cars = {13};
    vector<int> districts = {41, 9, 23, 33, 20, 32, 7, 0, 48, 8};
    vector<string> roads = {"..................eAw......................o.....D", "................8o......n........i....v.E......i..", "........p.....z........o...........v..............", ".......2..........B.........8..k..yl...Hwm....I.C.", ".........n.........e.........l............j.......", "...............p..vE...............ok.......B.DF..", "............53.......q.............k......f.......", "...2....a..Ag..zA...t.....A...........cK.p..Al....", "..p....a.......p..u....c..p.5................l....", "....n.....hz.9.......p......9c..g.t..t.z.b....y...", ".........h.........z.....t...4n...i.9qk.vb.n.s....", ".......A.z.......t.....lx.v.......f..5o.....2...3.", "......5g...........B...c.....9C.....ds.......ow..E", "......3..9.....f.................o........d...p...", "..z......................bx...N....h.o....u....Ixy", ".....p.zp....f..ct....j.....s......w............K.", ".8.....A.......c...z..j....k............vh7.s..cz.", ".o.........t...t...............E..f..........B....", "e..B.v..u............F.........H...y...j......d...", "A...eE....z.B...z.......B.z......wk........b..F...", "w......t..............r....km........6....p.......", "......q..p........F...m.......F3....z......8e1E...", "...............jj...rm....i.........e.............", "..o.....c..lc...........x....bx....7......d.......", ".n.........x.......B...x..j.....F7.......A..u...A.", "..........t...b.......................a......3....", ".......Ap..v..x....z..i.j.....h.....d.............", "................k...k.......................a.o.g.", "...8....59.....s....m.........G......l............", "....l....c4.9..........b.........m....g...........", "..........n.C.N......F.x..h.G..........5..i.......", "...k.............EH..3............o8............i.", ".........g..............F.............s.K.r.......", ".i...........o.....w....7....m....cr..........9...", "...y.....tif.....f.k...........o.c.....e......l.j.", "..vl.ok.......hw..y....7.......8.r........h.......", ".....k....9.d........ze...d..........y...4i.......", ".........tq5s.o.....6.......l.......y...4..2..y..b", ".v.....c..ko.............a...g..s.................", "...H...K.z........j...........5...e...............", ".E.w......v.....v...............K....4...Do.....57", "...m...p.bb.....h.......A...........4...D.....q...", "....j.f......du.7...p..d......i.r..hi...o........u", "o.........n........b.8...............2......7.....", ".....B.A...2....s....e..u..a...............7......", ".......ll.s.o....B...1...3.....................Ah.", "...I.D...y..wp....dF.E.....o.....9l..y...q.....8F.", ".i...F........I.c............................A8..z", "...C.......3..xKz.......A..g...i..j.....5....hF...", "D...........E.y......................b..7.u....z.."};
    int inverseWalkSpeed = 69;
    int inverseDriveSpeed = 16;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 25858;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> cars = {40, 24, 36, 27, 17, 4, 13, 35, 29, 10, 13, 40, 43, 26, 7, 15, 43, 27, 24, 1, 9, 24, 24, 26, 0, 44, 33, 4, 0, 10, 25, 15, 41, 12, 32, 29, 22, 49, 0, 19, 28, 28, 41, 9, 16, 14, 41, 33, 42, 19};
    vector<int> districts = {8, 4, 35, 19, 22, 38, 30, 3, 15, 40};
    vector<string> roads = {".jy........l.................0............l..dq...", "j.............................................C...", "y..Fx..................l7.....i......m....k.......", "..F...............................................", "..x.....b...........8.............................", ".......d5..................i...qr.........8d......", "....................K.d.........t...4.....s....b..", ".....d.................m.j........................", "....b5.....dl.....................o...8.pw...3....", "............k....................................F", ".....................u..f..................2.....f", "l.......d........k.............7...n..............", "........lk....................b.........f........u", ".........................3.................k...p..", ".........................o.............z...a......", "...................l.......h.....................y", "..........................................c..g....", "...........k.......y.....FE......8.......5........", ".............................y....................", "...............l.y................B.......h..a....", "....8.K................g...u..j....x..............", "..........u....................t................u.", "......d.................................j.........", "..l....m............g..............l.......h..p.nt", "..7.......f......................b................", ".......j.....3o..F.............ur....p..........u.", ".................E............5...........5......x", ".....i.........h....u....................k.d..c..g", "..................................w.............b.", "0.................y.........................6...r.", "..i.........b.......j.....5....n............C..p..", ".....q.....7.........t...u....n.....e.............", ".....rt..................r.................r......", ".................8......b...........8b............", "........o..........B........w................r....", "...........n........x..l.....................t....", "......4........................e.8.......a........", "..m......................p.......b.....m.....f....", "........8.........................................", "..............z......................m...........k", "........p...f.........j.....................G.....", "........w........5.........k........a.............", "l.k..8s.........c..h......5.......................", ".....d....2..ka........h...d....r.............f...", ".............................6C.........G....l....", "d.......3.......g..a..............rt.f......l.....", "qC.....................p...c...............f....2.", "......b......p................p...................", ".....................u.n.u..br................2...", ".........Ff.u..y.......t..xg...........k.........."};
    int inverseWalkSpeed = 59;
    int inverseDriveSpeed = 58;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 28625;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> cars = {18};
    vector<int> districts = {2, 3, 49, 27, 16, 28, 18, 16, 10, 1, 5, 19, 43, 17, 38, 15, 27, 35, 0, 8, 33, 39, 8, 22, 17, 34, 49, 11, 35, 45, 11, 24, 25, 29, 36, 44, 8, 6, 32, 48, 14, 34, 15, 17, 19, 11, 7, 25, 19, 38};
    vector<string> roads = {".zHdoEn..NAvDequ......iE.njyb.b......GF.oGHN.z....", "z..o....b.h.hyaw..m....I..o7.wo....6..a.A.ch.w.c..", "H.....Dz...B.H.D..tuo.oP..w9x.vk.GN.3z.jI.f..D.g.C", "do...q.9fzmj..d...j9......6p.o.B.c....w...tzt..k.v", "o....f.l.oc8..c.9.7.p...5.4r..k.e.j.vgxbd.ms....a.", "E..qf...u...b....c7..s..a.kz.....DhsA1C.lGj....Ao.", "n.D......s.8.9k7..e.wxoh..7z.d....erDk..4.uzk.pw..", "..z9l....Jvty.jt..t4Hv.E...q.y..h..lwC.o...G...jiF", ".b.f.u.....sn.7urA.c.e...1.9fw....D..w.d.i.s.....z", "N..zo.sJ.....C.mg.fGasDqi..BBh.gBMq...Dl.....hp..8", "Ah.mc..v...e3..g.k5sc.oq.......g.zp.qbs7..af.e.q.e", "v.Bj8.8ts.e......7.....d....l...h.b.CaE...pta3..ec", "Dh...b.yn.3...f.e.9v8g...pk.riv.vD..ocr9s.7b.h..r.", "eyH...9..C....n.m.mjF..p.qaA...I0..t.t..9JBH.m..3.", "qa.dc.kj7...fn.mk.ff.d...9d..o.o...6.o.5p.....5..r", "uwD...7tumg...m.6......c.....5tx..9.E.G..Ksw.5pzc.", "....9...rg..emk6..5.ls..7t.y.4u...e..7C.fGl.7.lxh.", ".....c..A.k7......fAt.A.g.jHs..zl..A.c..d.vy......", ".mtj77et.f5.9mf.5f....ol.o.slar.m.j..9..i...a9fsic", "..u9...4cGs.vjf..A....5..a.......bCg..s.rtw.Cx..kE", "..o.p.wH.ac.8F..lt...jz....tB..5EMzqrh..........Bi", ".....sxves..g.d.s...j.........s.BC.9..acCe..v..fzw", "i.o...o..Do......Ao5z..F....b..zn.C..y...nrx.wf8mB", "EIP...hE.qqd.p.c..l...F.m..N.b..o...Qh.w...E.....h", "....5a...i......7g.....m.m..icoo.....cv8.yhm..eqg.", "n.......1...pq9.t.oa....m.ja..b.r.F6g.hfwiou....p.", "jow64k7.....kad..j.......j...h......w.x.....m..o7.", "y79przzq9B...A..yHs.t..N.a..q.mr..L.5.....k...c...", "b.x.....fB.lr....sl.B.b.i..q.q.Dba.jvu.j...B......", ".w.o..dywh..i.o54.a....bc.h.q..u...vF7H.f.qt70q..8", "bov.k.......v..tu.r..s..ob.m........sB....xD.xm..E", "..kB.....gg..Iox.z..5.z.o..rDu...O.p..q..u71otjxE.", "....e..h.B.hv0...lm.EBno.r..b............K.G..tw3.", "..Gc.D...Mz.D......bMC......a..O..B.D.Eu..G.F.v.h.", "..N.jhe.Dqpb...9e.jCz.C..F.L.....B....Q..UA.gaz..h", ".6...srl.....t6..A.gq9...6..jv.p......da.gh.....r.", "..3.vADw..qCo..E....r..Q.gw5vFs..D....1k.....E.d..", "G.z.g1kCw.bacto.7c9.h.yhc...u7B..........I.m08o.p2", "Fa.wxC...DsEr..GC..s.a..vhx..H.q.EQd1..m..l.F..dF.", "..j.b..odl7.9.5......c.w8f..j....u.ak.m..pbh..5i.m", "oAI.dl4.....s9p.fdir.C...w...f...........NzEmeuA.o", "G....G..i....J.KG..t.en.yi.....uK.Ug.I.pN.p.J..e..", "Hcftmju...ap7B.slv.w..r.ho.k.qx7.GAh..lbzp.5...px.", "Nh.zs.zGs.ftbH.w.y....xEmu..BtD1G....m.hE.5.o.h.Do", "...t..k....a....7.aC.v....m..7.o.Fg..0F.mJ.o....p.", "zwD......he3hm.5..9x..w......0xt..a.E8..e.....p..9", "......p..p....5pl.f...f.e..c.qmjtvz..o.5u..h.p.eq.", ".cgk.Awj..q....zx.s..f8.q.o....xw...d.diAep...e..F", "....ao.i...er3.ch.ikBzm.gp7....E3h.r.pF...xDp.q...", "..Cv...Fz8ec..r...cEiwBh.....8E...h..2.mo..o.9.F.."};
    int inverseWalkSpeed = 80;
    int inverseDriveSpeed = 32;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 104688;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> cars = {26, 7, 5, 40, 39, 36, 15, 3, 48, 44, 16, 20, 5, 27, 11, 38, 4, 10, 6, 39, 24, 5, 31, 4, 16, 41, 45, 13, 32, 8, 42, 43, 10, 18, 14, 0, 48, 4, 10, 13, 11, 32, 26, 27, 11, 2, 22, 26, 48, 31};
    vector<int> districts = {33, 47, 43, 35, 36, 39, 8, 46, 12, 8, 7, 14, 37, 11, 46, 5, 3, 1, 48, 7, 5, 12, 27, 11, 34, 45, 12, 45, 35, 42, 19, 12, 49, 18, 23, 46, 44, 1, 29, 34, 7, 45, 39, 6, 3, 41, 32, 47, 0, 44};
    vector<string> roads = {".c.kB9D1vjAd..hg.iezsn9xF6J3tCik9u..C4...lh.l9nr.8", "c.JuI8Aax6.0.F.t4.r.tpk.L5E.lF.73uatGc.kgaq.8clu.k", ".J.o6.pEeMB.m.mDIlG.ijvy6GvC.6lNGiz.4.5AtGnrNxqe5A", "kuo..lAknAFvpJ6.qb.Bnha.mpHgApaBqok0phi.hy4.Ciohlc", "BI6..z.Bh.FJ..jxGjB.kjrB3.AyEc.NElxjax.CrHjpNvrf8.", "98.lz.u.od.ajBg.7fnplhcnC6zakxfe5m1lx5w.7.h8f3elu.", "DApA.u.C..dBb8.MCp.8dizcwB.D.i.zzb.zkyriprw..tfil.", "1aEkB.C.u.ybqIhi5igxrmavF4H4rBii7s6kC3zpcjidj7lqy.", "vxenho.u..ny.mhAwdCh..pjkvkum8ezu..maq.lh.j.zmb5.u", "j6MA.d.....5rCuAbsyrvs.o.c.miH.09.fzIiJ.k7wm1.mxGr", "A.BFF.dyn..tgcxNwtO4k.A3HwdB7uuptjsE.wC8piAqprgqwF", "d0.vJaBby5t..Fr.5psuur.rN6..mG.6..buHd.khbsj7d..El", "..mp.jbq.rg..k.ArdB.37nc.qhrfgeso3johmlddkkdsi49gs", ".F.J.B8ImCcFk.CUHyWb.rIdFH2KjrzCEkCItFAkwuFxCAm.uN", "h.m6jg.hhuxr.C.im3...a8tmlAf.l3vmh.5ldhrar18wdhch.", "gtD.x.MiAAN.AUi..m3KztcJAnSd.DlBqAm.DhwF..g.Clxu.8", ".4IqG7C5wbw5rHm..mm..pgt.0GapEmc.u8pF8DnffngdamtCf", "i.lbjfpidstpdy3mm.opc6apnk.g.j0tkdd.jegn.o.5ubc8fg", "erG.Bn.gCyOsBW.3mo.LBvdKElU.HHo...lhG..F..joAlyxC8", "z..B.p8xhr4u.b.K.pL.fjx.Cva.8pqrs.qAruw9mjwnrpclrC", "stinkldr.vku3..z.cBf.5ng..jrj.cvq.lmdnhieoi.wj85cs", "npjhjhim.s.r7ratp6vj5..jnopmkf7tm6gggigj9md8te.4d.", "9kvarczap.A.nI8cgadxn..wveG6uu.rgoa.u7qsb.8a.9kkq4", "x.y.Bncvjo3rcdtJtpK.gjw.E.dy5r.oqf.Atty6.gwmo.cmsB", "FL6m3CwFk.HN.FmA.nEC.nvE.ICCHdmQInBmbB5.vKmtR.ui.z", "65Gp.6B4vcw6qHln0klv.oe.I.G9pDld3t6oE.Cndf..e8ls.e", "JEvHAz.Hk.d.h2ASG.UajpGdCG.I...CDiAGqE.k..CvCzlp.L", "3.CgyaD4umB.rKfdag..rm6yC9I...gncs.f.4wsdnedo9npw.", "tl.AEk.rmi7mfj..p.H8jku5Hp...v...jl.x.B1ja.lilcowy", "CF6pcxiB8HuGgrlDEjHp.furdD..v.jICcwp1.9u.BnoIuka.z", "i.la.f.ie.u.ez3lm0oqc7..ml.g.j.u.e.9jego8p.6vc.8ff", "k7NBNeziz0p6sCvBct.rvtroQdCn.Iu.aw.A..Khk7.n0inyGs", "93GqE5z7u9t.oEmq.k.sqmgqI3Dc.C.a.r6pD.Cjcbneb8jrAh", "uuiolmbs..j.3khAud...6ofntisjcewr.mnd.hi.o.fwk.6.t", ".azkx1.6.fsbjC.m8dlqlga.B6A.lw..6m.j..vj6.g8.1fltd", ".t.0jlzkmzEuoI5.p.hAmg.AmoGf.p9Apnj.ogix.x3eBhn..c", "CG4paxkCaI.HhtlDFjGrdgutbEq.x1j.Dd.o.y8wqC.oKumb3.", "4c.hx5y3qiwdmFdh8e.uni7tB.E4..e....gy.vn8ie9k4im..", "..5i.wrz.JC.lAhwDg.whgqy5C.wB9gKChvi8v.z.E.nK.oc5u", ".kA.C.ipl.8kdkrFnnF9ijs6.nks1uohjijxwnz.h9tihjanuw", ".gthr7pchkphdwa.f..me9b.vd.dj.8kc.6.q8.h..c1l.9emf", "laGyH.rj.7ibkur.fo.jom.gKf.naBp7bo.xCiE9...i7ffrAs", "hqn4jhwijwAskF1gn.jwid8wm.Ce.n..n.g3.e.tc..axejd.c", "..r.p8.d.mqjdx8.g5on.8amt.vdlo6nef8eo9ni1ia.n5aclf", "l8NCNf.jz1p7sCwCduArwt.oReCoiIv0bw.BKkKhl7xn..nyH.", "9cxiv3t7m.rdiAdlablpje9..8z9luci8k1hu4.j.fe5..djrc", "nlqoreflbmg.4mhxmcyc8.kcullnck.nj.fnmioa9fjand.c.p", "ruehfliq5xq.9.cut8xl54kmisppoa8yr6l.bmcnerdcyjc.8p", "..5l8uly.GwEguh.CfCrcdqs...ww.fGA.t.3.5umA.lHr.8.v", "8kAc....urFlsN.8fg8Cs.4BzeL.yzfshtdc..uwfscf.cppv."};
    int inverseWalkSpeed = 69;
    int inverseDriveSpeed = 13;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 28389;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> cars = {46, 6, 32, 9};
    vector<int> districts = {40, 0, 11, 3, 27, 16, 30, 29, 49, 38, 4, 37, 45, 10, 2, 41, 9, 12, 13, 14, 13, 7, 18, 16, 24, 2, 40, 46, 11, 36, 45, 2, 6, 17, 35, 43, 11, 30, 46, 49, 45, 24, 36, 11, 21, 25, 30, 43, 5, 37};
    vector<string> roads = {"..x...................6...........O.....5.........", "..............r........t.........5................", "x......d......U.M....L.....2.............U...ST...", "...........2.......t....3......M..................", "..................s.q....l..8....l......H....V...m", "..........E.........F...........J.h..........t....", "........6.............................r.F....Q....", "..d.........8..........C..........p...............", "......6...............t..s........................", "...............x........r.......................g.", ".....E............1........N.....po...............", "...2...................m................P...b....c", ".......8.......W.J..VL........B..a...8....J0......", "..............Z..............................w....", ".rU..........Z...................V...5............", ".........x..W..............W....g..............M..", "..M..............5..F.R.............f.............", "............J...5...n.........J..x..i........a....", "....s.....1......................5...O.....T...U..", "...t.........................................8.f..", "....qF......V...Fn...A..m.......Y....Y......D..h..", "..L.........L.......A.......8....................N", "6.......t.......R...............z.......3....W.V..", ".t.....C...m...................1O.T....2......Y...", "...3.....r..........m........8..k.................", "....l...s.........................................", "....................................o...s.........", "..2.......N....W.............i...............h..qM", "....8................8..........L..........xM.....", "........................8..i...M.D................", "............B....J........................D.......", "...M...................1.....M...........p........", ".....J.........g....Y.zOk...L.....................", ".5..l.....p.a.V..x5..........D......e.....C.......", "O....h.p..o............T..........................", "...........................................A..Q...", "................fi........o......e...........R....", "............8.5...O.Y.................z...........", "......r..............................z.......5....", ".......................2.....................v....", "5...H.F....P..........3...s...............k.......", "..U............................p..................", "............J.................D..C......k.........", "............0.....T.........x......A..............", "...........b........D.......M.....................", "..S.VtQ......w...a.8..W....h........R.5v......T.I.", "..T....................Y...........Q.........T..Q.", "...............M..Ufh.V...........................", ".........g.................q.................IQ...", "....m......c.........N.....M......................"};
    int inverseWalkSpeed = 66;
    int inverseDriveSpeed = 56;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 179050;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> cars = {45, 37};
    vector<int> districts = {48, 18, 3, 24, 8, 17, 45, 49, 12, 24, 45, 20, 42, 30, 34, 12, 1, 43, 5, 36, 9, 28, 9, 42, 46, 44, 48, 19, 20, 5, 26, 42, 46, 14, 25, 45, 24, 45, 34, 21, 32, 26, 28, 2, 34, 17, 39, 48, 42, 27};
    vector<string> roads = {".p88qHIoCf1wDl293I0JcwBxilUJ89gzq5yuDFdjk6kYkG0iu7", "p.ZpEjNk9HhtPZzA3JmF0LY3LfdSm0E9xGaQWDlbpoAp4c5QNH", "8Z.Tcb4MzG9PgcbSaQTiJrYLuDQJGZaEBSNZVN9zNPUjnSh8ba", "8pT.3MY6cCfk1S8ISkCRUPvsrjNXEqxTNwSISobRfRimTngN2V", "qEc3.lbD0yz4aMZFVMQKmtqJ50quigco0crh7z62cBeuun21wf", "HjbMl.yah2I7kf9Hc5Oa2ZHNJQAQ7NHZSxI0FOT.uHm13rdV7r", "IN4Yby.sNEtxyOWMYQYsho9eWkMK9XajVCtbijHA0Tgp7aFHwV", "okM6Das.PdqRF0NWqBlyjv847TGbsDb4kxvQUqCjUwTgZI1Oxe", "C9zc0hNP.2g9JBVTrICX0lQgSR8zOnhGN4UI3.fX9kT22Tqxco", "fHGCy2Ed2.qx0netNOvET8p3GtKWSSzQKB9fg6d75Z06oc4Sv4", "1h9fzItqgq.C5JSUQ87cuZNKFkwPBEPl.5al0KEm6v8rFH1RoM", "wtPk47xR9xC.68HBG0VKffEikqgIYjmAXty7nu0f1B5HfSOe9U", "DPg1akyFJ056.lO21yPnTsmxXw2W1SdYDsMPuWtOXge3vrva7y", "lZcSMfO0BnJ8l.xeC8OGu7mS9qk52mizW3jUeGmDpGcYFD1Iy3", "2zb8Z9WNVeSHOx.a15BXuVL5Ji7WdZAqMQE.p.B7LA1rDD6mP0", "9ASIFHMWTtUB2ea.Hyti7eXbZqiHKPMdwBZ7D7v85vV8Fo11nm", "33aSVcYqrNQG1C1H.oWs5.5gMk3Jmu6KFgMxxGmEY8eOYHhZoI", "IJQkM5QBIO80y85yo.9bC5QPRdGEvhqUCgbR4tpfefGDGAUYcR", "0mTCQOYlCv7VPOBtW9.KNPG0tKjWv4sHkLYEzFngxcGfhhIGqi", "JFiRKasyXEcKnGXisbK.ra7vx7ej58jhYvkgwu0WksbkS7jYcj", "c0JUm2hj0TufTuu75CNr.ba3fL3usu51bC2PrAqq61IavTefF.", "wLrPtZovl8Zfs7Ve.5Pab.VduF9YihsI4sNR70xpSw1B5U7bXn", "BYYvqH98QpNEmmLX5QG7aV.s4vEIsBTHvMxVTmLVG5izo.0qI3", "x3LsJNe4g3KixS5bgP0v3ds..K7q099sVerpSCCCYvnSIkm9Wl", "iLur5JW7SGFkX9JZMRtxfu4..ijKHxpmhLHfomcqtZoKQbimiu", "lfDj0QkTRtkqwqiqkdK7LFvKi.sWI4YZpS0mGscxQxmVC3TvQr", "UdQNqAMG8Kwg2k7i3Gje39E7js.A50Yk1d4VUTZTBv5bo4cDjA", "JSJXuQKbzWPIW5WHJEWjuYIqKWA.fllqXDZIHckpF7NbTae2pJ", "8mGEi79sOSBY12dKmvv5sis0HI5f.0TGL11bBojB3PC0IUNu2z", "90ZqgNXDnSEjSmZPuh48uhB9x40l0.VJ34Y2LpBXJv8EC6kymd", "gEaxcHabhzPmdiAM6qsj5sT9pYYlTV.lmOY1qcyiiBZ911hopG", "z9EToZj4GQlAYzqdKUHh1IHsmZkqGJl.paesF1sJRSLGujd4Z8", "qxBN0SVkNK.XDWMwFCkYb4vVhp1XL3mp.h68hRm4SqKWLsKPhE", "5GSwcxCx4B5ts3QBggLvCsMeLSdD14Oah.qAfuE66kBOZ2R66F", "yaNSrItvU9ayMjEZMbYk2NxrH04Z1YYe6q.cu5uWtKsgcWABUR", "uQZIh0bQIfl7PU.7xREgPRVpfmVIb21s8Ac.pAefDJ3N8qH8ma", "DWVS7FiU3g0nuepDx4zwr7TSoGUHBLqFhfup.bmeQvRsYsKeKS", "FDNozOjq.6KuWG.7GtFuA0mCmsTcopc1Ru5Ab.BUmBPR52NzZT", "dl9b6THCfdE0tmBvmpn0qxLCccZkjBysmEuemB.3QeQSJmL3xb", "jbzR2.AjX7mfOD78EfgWqpVCqxTpBXiJ46WfeU3.4DKHEiPdck", "kpNfcu0U9561XpL5Yexk6SGYtQBF3JiRS6tDQmQ4.XuieJ1fQC", "6oPRBHTwkZvBgGAv8fcs1w5vZxv7PvBSqkKJvBeDX.LV071Rg0", "kAUiemgTT085ec1VeGGbI1inom5NC8ZLKBs3RPQKuL.MjQdPlD", "Ypjmu1pg26rH3Yr8ODfkaBzSKVbb0E9GWOgNsRSHiVM.QC5fHW", "k4nTu37Z2oFfvFDFYGhSv5oIQCoTIC1uLZc8Y5JEe0jQ.eyT3S", "GcSnnraITcHSrDDoHAh7TU.kb34aU61js2Wqs2miJ7QCe.yh5R", "05hg2dF1q41Ov161hUIje70miTceNkhdKRAHKNLP11d5yy.187", "iQ8N1VHOxSReaIm1ZYGYfbq9mvD2uyo4P6B8ez3dfRPfTh1.PN", "uNb2w7wxcvo97yPnocqcFXIWiQjp2mpZh6UmKZxcQglH358P.L", "7HaVfrVeo4MUy30mIRij.n3lurAJzdG8EFRaSTbkC0DWSR7NL."};
    int inverseWalkSpeed = 55;
    int inverseDriveSpeed = 45;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 17175;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> cars = {0, 35, 37, 29, 5, 18, 15, 28, 20, 24, 35, 9, 46, 42, 34, 33, 24, 41, 38, 23, 11, 35, 7, 41, 8, 28, 34, 41, 45, 33, 32, 45, 4, 17, 8, 22, 30, 1, 44, 25, 48, 38, 41, 1, 32, 1, 29};
    vector<int> districts = {22, 48, 42, 25, 31, 36, 15, 38, 36, 31, 29, 32, 18, 16, 22, 16, 23, 16, 43, 32, 21, 37, 0, 2, 41, 32, 16, 21, 49, 45, 6, 37, 16, 30, 21, 29, 38, 44, 12, 49, 45, 6, 47, 31, 43, 31, 45, 24, 8, 22};
    vector<string> roads = {".EzWP.oKd.1i..f..UD.gVWB.A.G.....ge.....I.X2G..qO.", "E.eupDdtx....j..vdT.J31.kPCZ...SZ.dQk3w.9XKJOY.1.i", "ze.c7.z.YRE.2m.gr.D..uhn5.hCc2.q...z.d..Q.wD..7aL.", "Wuc.r7W..aAh...1dq.H.f3.eIBECCWaN.HjX.z.z.v9M.caL.", "Pp7r..g.UjEz..as5.NHn..J...QCXWCYgr..cje.B..F..n.P", ".D.7..DedKdBty4.D.jufO..zPg.n.3.I.SuW.puqS5Nw9.SO.", "odzWgD.lWh..4X..eC..K.pR..5F..Q9.DFA..limQ.KN.3..c", "Kt...el.v....H.FlM.78i.Pd.21..NFfe.U8..HWA..A8P.2.", "dxY.UdWv.j.nsAO.D.Oj..EI3.d5s..QMnC..D..STK.9.z4.U", "..RajKh.j.Xz..vDb.c.4Di3...jl..u.nBu.kiTZpGhC....I", "1.EAEd...X...ttK..QEsC...W..R.bAHp.UjR7Wv7gNrgx.4V", "i..hzB..nz..k.kr...qf...63...UGsAc.r.n..nD7.R.2.e.", "..2..t4.s..k..u.ZbI...9.nJ.LX8c..9dF..O.Lx..qPUu.J", ".jm..yXHA.t.....2m.G.l..OR.9Z.m.8l.x.....BR.e.HSC7", "f...a4..Ovtku..9.I.N8ajXP3Mq.5SrIaf.CJ9m.hrMzVi...", "..g1s..F.DKr..9..xq7.NK.mScd.dkT..n.Tl.e.61YSrM...", ".vrd5DelDb..Z2...q.F..U......O.....nIw8k.7LVoq.gLA", "Ud.q..CM....bmIxq..Lk7SJ5kZ..M...1nW0.m.O.wEI.ozYF", "DTD.Nj..OcQ.I..q.....Xhp..0j7.FmbjgOSA.Jv....8g8.3", "...HHu.7j.Eq.GN7FL..CH.6ZL..0ej..WRwE.7GU.FvnS.z.g", "gJ..nfK8.4sf..8..k.C.Cw.J....rrQO..CFCozuBo.r.s...", "V3uf.O.i.DC..laN.7XHC.Sitd7.OL...6..fs.Ko.QLzOF.Zv", "W1h3..p.Ei..9.jKUSh.wS..J2LPF1.XiQ.r.f..X....ig.nS", "B.n.J.RPI3....X..Jp6.i..Tz...FFDFURm.z7Q....V0hXL.", ".k5e.z.d3..6nOPm.5.ZJtJT..e...pz.Xn.z..NCH..yUS.d5", "AP.I.P....W3JR3S.k.L.d2z...quq..r.3mL.J9..mkR.P.HY", ".ChB.g52d.....Mc.Z0..7L.e...X..ntyOp..p.kv..a.Szv.", "GZCEQ.F15j..L9qd..j...P..q..n13O.o..OOk.T.Eo.rSa.X", "..cCCn..slR.XZ....70.OF..uXn.f.d...q....g..0B0Umy.", "..2CX......U8.5dOM.erL1F.q.1f.QD.hbuLbFY467.wv.k.W", "...WW3QN..bGcmSk..Fjr..Fp..3.Q...9O.e.q4d7..WF.GVm", ".SqaC.9FQuAs..rT..m.Q.XDz.nOdD...7f.4.u..rsF.n.Bf.", ".Z.NYI.fM.HA.8I...b.O.iF.rt......d...xg.XZ.cF.B...", "g...g.Dennpc9la..1jW.6QUX.yo.h97d...ekB.Xo.u....e.", "ed.HrSF.CB..d.fn.ngR...Rn3O..bOf.....6.Ou.........", ".Qzj.uAU.uUrFx..nWOwC.rm.mp.qu........Tf..w.o.QCGG", ".k.X.W.8..j...CTI0SEFf..zL.O.Le4.e....0.Os.i.Ah.3.", ".3d.c...DkRn..Jlw.A.Csfz...O.b..xk6....E...5qmmON.", ".w.zjpl..i7.O.9.8m.7o..7.Jpk.FqugB.T0.....Sk.....7", "....euiH.TW...mek.JGzK.QN9...Y4...Of.E...Q.l..tcoQ", "I9Qz.qmWSZvnL....OvUuoX.C.kTg4d.XXu.O....R.clCCaws", ".X..BSQATp7DxBh67...B...H.v..67rZo..s..QR.tk.z.8.V", "XKwv.5..KGg7.Rr1Lw.FoQ...m.E.7.s...w..S..t......3H", "2JD9.NK..hN...MYVE.v.L...k.o0..Fcu..i5klck....M..V", "GO.MFwNA9CrRqezSoI.nrz.VyRa.BwW.F..o.q..l....R1.Zp", ".Y...9.8..g.P.Vrq.8S.Oi0U..r0vFn....Am..Cz..R.x.DR", "..7c..3Pz.x2UHiM.og.sFghSPSSU...B..Qhm.tC..M1x.H7.", "q1aanS..4...uS..gz8z...X..zamkGB...C.O.ca8....H.GN", "O.LL.O.2..4e.C..LY...ZnLdHv.y.Vf.e.G3N.ow.3.ZD7G.7", ".i..P.c.UIV.J7..AF3g.vS.5Y.X.Wm....G..7QsVHVpR.N7."};
    int inverseWalkSpeed = 70;
    int inverseDriveSpeed = 39;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 33707;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> cars = {26, 35, 30, 3, 38, 4, 15, 49, 38, 14, 40, 45, 24, 8, 24, 12, 8, 29, 3, 14, 30, 14, 44, 12, 17, 24, 26, 40, 18, 14, 34, 38, 14, 22, 39, 9, 39, 7, 16, 14, 34, 16, 43, 42, 16};
    vector<int> districts = {2, 29, 44, 13, 38, 4, 5, 1, 41, 16, 26, 2, 49, 0, 23, 7, 32, 2, 36, 23, 35, 16, 4, 35, 44, 28, 20, 21, 19, 38, 28, 47, 12, 42, 30, 27, 3, 18, 7, 16, 25, 0, 1, 11, 24, 19, 46, 11, 38, 42};
    vector<string> roads = {".UWSCH0wmxC7fkM8pZereXB.sgQBfgx51pcEzOiCURjaOHOy..", "U.0MZt8RkMcRCXcYifdXMXfW3BDRSN.fkP6D2jI.BRloWT.q3.", "W0.WBHX9HPQzTkMS8FS7OxnnFx8kk1.zTKg9bFUZwyAsEjxRNE", "SMW.ezJh.Tn5xRCuiHbaKxserFpoT5Btj.fw83.hF3VATg48bk", "CZBe.fGHV.WLu.u.q.rZm6aCdW0Pi8rHbrcky.iaVpE7BvAQJG", "HtHzf.i24UtdEu8WU.jr3KE4s.HtGVjYpTOI04ABZlGMW9.OXQ", "08XJGi.FVUQ5ccH9LxmoiYc.JTRTRcSHZQk..TkDILGxGWCshq", "wR9hH2F..WAGFUFLLK.C18IekG.Znun3GSAnl4X7IaIJkP7Ius", "mkH.V4V...2oRkr15mPEim0vPo9ng1fI0OCRNim.pUCrLTGFPy", "xMPT.UUW..P3CI1l1Wp8lv1QpW.riwa7.IWiKiO.pIcuMKJNtS", "CcQnWtQA2P.q20f3wH5f.A2wXe5QobBXv3pvF7.Bqg1LdFJv.z", "7Rz5Ld5Go3q.u4FDuJzP.E..N2XWuGOF9pC1DI4xBjjToODJ1S", "fCTxuEcFRC2u.1s1DlCJg63tJ.31T1rD6iTK.gU4wlgiGkuPT3", "kXkR.ucUkI041.I0Cjpl2AdDNK8T.Y9XKqja7.Ww.sZW.701RI", "McMCu8HFr1fFsI..IGa4.Um1Fz3IFzEi4eWMwI.A.Yu6zqmrzN", "8YSu.W9L1l3D10..al5k.3HQH.13G3pT5jtIN9uYdQPY.H....", "pi8iqULL51wuDCIa.wKE2XzPceKFQQcTMnOLW.3RO.yIjO9wEv", "ZfFH..xKmWHJljGlw.6GX.C39sBDprV.GnjfVz8L.I4r0.pdFI", "edSbrjm.Pp5zCpa5K6.FmDvSsWZJsre.jFY8IpKMkVd8.3A.8G", "rX7aZroCE8fPJl4kEGF.J.ibyHf.TG5gLGkH7qp5A8viq.YHYl", "eMOKm3i1il..g2..2XmJ.k86C5957Ob5nK33viE.tw.v.LuXKg", "XXxx6KY8mvAE6AU3X.D.k.o5p3I3D76GbvqK81TJOm4ot5LAB.", "BfnsaEcI012.3dmHzCvi8o.fxrarvzTFvA1of8aIQ1bkGfyeG.", ".WneC4.evQw.tD1QP3Sb65f.1ECDJBKHP.2W5Fz1bykDxRJ.aO", "s3FrdsJkPpXNJNFHc9syCpx1.bUvGcDDubd5TgpblaEuhyd5nA", "gBxFW.TGoWe2.Kz.esWH53rEb.Wg5CHs.MhT3xwMKpOZXOr.jP", "QD8p0HR.9.5X3831KBZf9IaCUW.kKNTCR5FJJmbqBehV96Y3xP", "BRkoPtTZnrQW1TI3FDJ.53rDvgk..L.A4erV4RcxZN.X.2Vev8", "fSkTiGRngiouT.FGQpsT7DvJG5K..L00k7WbJyNgzNNX.6ERQK", "gN158Vcu1wbG1Yz3QrrGO7zBcCNLL.GBjdbMI7GNW7WPeO1iif", "x..BrjSnfaBOr9EpcVe5b6TKDHT.0G.xr.XYhCOhxuRT4BfelV", "5fztHYH3I7XFDXiTT..g5GFHDsCA0Bx.iIa0pq1YfHVFSEZ0ub", "1kTjbpZG0.v96K45MGjLnbvPu.R4kjri.EaxvQ4XW1Smf2OLXm", "pPK.rTQSOI3piqejnnFGKvA.bM5e7d.IE.GmZ64uE1A5AVEMrz", "c6gfcOkACWpCTjWtOjYk3q12dhFrWbXaaG.WFrarMowV13cHhS", "ED9wkI.nRiv1KaMILf8H3KoW5TJVbMY0xmW.hVvm.SzYbPRhx9", "z2b8y0.lNKFD.7wNWVI7v8f5T3J4JIhpvZFh.y6GVkSyA2u3.X", "OjF3.4T4ii7Ig.I9.zpqi18FgxmRy7CqQ6rVy.lQ4ivUFH4RqX", "iIU.iAkXmO.4UW.u38KpETazpwbcNGO144av6l.m4b3N9VnnAx", "C.ZhaBD7..Bx4wAYRLM5.JI1bMqxgNhYXurmGQm.rnxk8GqalW", "UBwFVZIIppqBw..dO.kAtOQblKBZzWxfWEM.V44r.jLLjhfRiC", "RRy3plLaUIgjlsYQ.IV8wm1yapeNN7uH11oSkibnj.sjxdE.cA", "jlAVEGGICc1jgZuPy4dv.4bkEOh.NWRVSAwzSv3xLs.ydX.Z2w", "aosA7MxJruLTiW6YIr8ivokDuZVXXPTFm5VYyUNkLjy.RV8HYX", "OWETBWGkLMdoG.z.j0.q.tGxhX9..e4SfA1bAF98jxdR..5EVP", "HTjgv9WPTKFOk7qHO.3.L5fRyO626OBE2V3P2HVGhdXV..ZiEW", "O.x4A.C7GJJDu0m.9pAYuLyJdrYVE1fZOEcRu4nqfE.85Z.RzR", "yqR8QOsIFNvJP1r.wd.HXAe.5.3eRie0LMHh3RnaR.ZHEiR.Vj", ".3NbJXhuPt.1TRz.EF8YKBGanjxvQiluXrhx.qAlic2YVEzV.c", "..EkGQqsySzS3IN.vIGlg..OAPP8KfVbmzS9XXxWCAwXPWRjc."};
    int inverseWalkSpeed = 29;
    int inverseDriveSpeed = 26;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 10048;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> cars = {10, 45, 40, 15, 35, 15, 38, 6, 39, 26, 30, 9, 32, 45, 5, 24, 29, 8, 12, 12, 25, 11};
    vector<int> districts = {47, 4, 47, 45, 31, 28, 1, 19, 5, 41, 45, 5, 38, 4, 22, 41, 8, 35, 0, 36, 39, 4, 10, 33, 4, 32, 46, 23, 11, 3, 15, 0, 40, 37, 0, 6, 46, 16, 7, 11, 3, 48, 1, 30, 44, 4, 19, 39, 32, 42};
    vector<string> roads = {".........M..c..N..........c.p.........W...z.......", "....6..T.......6......l.........................I.", "...6......L.K.5................................H.C", "..6.....T.o....4w...K......k........R.........T..9", ".6...L.........6........5...........v....a.9......", "....L....................3.....8D................L", "............J.2.........k...........Wi...B........", ".T.........Fk.yt.............P........w.......s...", "...T.......g.....k...............ZU......P........", "M............................I.........b....D...D.", "..Lo..............N......M.....D....S....t....2...", ".......Fg......3......F.......6......c.......L....", "c.K...Jk......d..............O....................", ".......................R.....T......5.............", "..5...2y....d....Vn......4.......S9.uN............", "N6.46..t...3.............v....F.............i.o...", "...w.............l..................w.V...v.......", "........k.....V.l.Lp....................y.........", "..........N...n..L..........4..............L..E...", ".................p...4.................H..........", "...K.....................bC..................nE...", "...................4......L.7h...6u..........9...t", ".l.........F............................k..y......", ".............R..........................T.........", "....5.k......................O..........a......O..", ".....3....M...4v....b..............r........b..C..", "c...................CL................Z...........", "...k.............................6............o...", "p.................4..7............................", ".......P.I..OT.......h..O..............J.........M", "...........6...F.................................2", ".....8....D..................................l...z", ".....D............................p...6...........", "........Z.....S......6.....6.............1o.F.O...", "........U.....9......u..........p.................", ".........................r...............z....T...", "...Rv.W...S..5u.w.................................", "......i....c..N.............................l..e..", "W......w........V.........Z.....6.................", ".........b.........H.........J............F.......", ".................y....kTa......................X..", "....a.B.P.t......................1.z..............", "z...............v................o.....F..........", "....9.............L...y......................V....", ".........D.....i.........b.......F...l..........gc", "...........L........n9.........l...........V.....v", "...T...s..2....o..E.E......o.....O.T..............", "..H.....................OC...........e..X.........", ".I.......D..................................g.....", "..C9.L...............t.......M2z............cv...."};
    int inverseWalkSpeed = 75;
    int inverseDriveSpeed = 34;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 127730;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> cars = {16, 48, 9, 47, 0, 8, 28, 19, 7, 48, 6, 31, 20, 34, 16, 4, 46, 31, 0, 33, 27, 37, 10, 24, 27, 26, 23, 38, 28, 35, 22, 21, 24, 33, 15, 42, 44};
    vector<int> districts = {13, 44, 14, 31, 35, 22, 33, 0, 34, 22, 0, 6, 36, 10, 42, 24, 1, 36, 12, 3, 42, 25, 46, 20, 49, 11, 0, 14, 34, 49, 19, 11, 40, 7, 29, 49, 46, 45, 19, 26, 36, 30, 8, 15, 3, 22, 0, 23, 47, 17};
    vector<string> roads = {".......8.....s........g.k..N.Q............f....J..", "....N.p......u..............sn.2...........W.5Y..q", "....0..........t.9......Y.v..x.............4..Nh..", ".......dp.I.....E.x.....F......Eu....O....P.......", ".N0...3f..a...Y.r...V..4....8...............7..jT.", ".......ex.......8v...B...U.U.....W......4..R......", ".p..3....R..p......6......Z.........ci............", "8..dfe....D.m........1..d1.......u..........t....N", "...p.x.......k.kF...LX..7.....T...n...K.vx.w...g.0", "......R.....X.........j.....................G....J", "...Ia..D....To......j......I....J......g..X....z..", "...................n..8M..........I.......a.....1W", "......pm.XT...........X........5G........V........", "su......k.o......R..8..............T.....b......OJ", "....Y......................3.......B........1.e...", "..t.....k.......Kr.D..qY......GsMZZ...N.2.......d.", "...Er8..F......K...Q.....O.......R..T.O...........", "..9..v.......R.r..i.O.......9j....o......Ae......a", "...x.............i..........b.......h.b3..W.W.G...", "......6....n...DQ...e..........D....N.............", "....V...L.j..8...O.e.4....Z...M.GV.3...6QV........", ".....B.1X...........4.......7...2.24..........1q..", "g........j.8X..q.......S....j..d.i.of.c..y...Z...2", "....4......M...Y......S....o.gP..7..rJ............", "k.YF...d7..................Q........5.......R.....", ".....U.1........O............u...a..........y..T..", "..v...Z.............Z...........................9.", "N....U....I...3........oQ......h9..n.........z....", ".s..8............9b..7j......N..........E...Z.....", "Qnx..............j.....g.u..N....C.e.d....q.......", "........T......G....M..P.........6................", ".2.E........5..s...D..d....h......................", "...u......J.G..M....G2.....9........E.............", ".....W.u.......ZR...V.i7.a...C6....5..0.....W....x", "........n..I...Z.o...2..................B.T..k....", ".............TB.....34o....n.e...5....C......a....", "......c.........T.hN..fr5.......E....D............", "...O..i................J.....d......D..7.t......h.", "........K......NO.b...c..........0.C..............", "..........g.......3.6................7...6...g..X.", ".....4..v......2....Q.......E.....B......HN....p..", "........x...Vb...A..V.y..............t.6H.4.W.X...", "f..P......Xa.....eW..........q....T.....N4...F....", ".W4..R..w....................................S...e", "....7..t.G....1...W.....Ry..Z....W.......W.......8", ".5....................Z....z......ka...g..FS....5.", ".YN...........e...G..1...................X........", "J.h.j...g.z..........q...T..............p.........", "....T......1.O.d..........9..........h.X.....5....", ".q.....N0J.W.J...a....2..........x.........e8....."};
    int inverseWalkSpeed = 64;
    int inverseDriveSpeed = 59;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 75711;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> cars = {30, 44, 27, 3, 18, 37, 22, 25, 17, 13, 22, 44, 39, 28, 28, 29, 31, 1, 34, 23, 15, 0, 3, 34, 2, 42, 1, 25, 19, 36, 8};
    vector<int> districts = {34, 16, 17, 1, 19, 12, 1, 36, 34, 32, 29, 14, 37, 28, 43, 7, 44, 13, 8, 29, 22, 43, 4, 34, 10, 42, 43, 9, 18, 45, 38, 18, 43, 21, 29, 1, 33, 39, 12, 28, 24, 9, 4, 35, 39, 43, 4, 28, 16, 44};
    vector<string> roads = {".atxB2xGGvZja1mACQ1W..9..gM.o..P.f7.f...oaE..fWKYh", "a.iVAu.BN9s.y.c..t.q.z.L3D....ZEbDBTfN0dHJB.z09A..", "ti..m5Tfxrtj..3yTpa.KX4UXT..8Lp...lAK9GBCeBDpXK..4", "xV..r.MrajV..P...9mB4u.F.j..XrgfN3P.Q7n4GHm..VS.z.", "BAmr.oItIV....mRql..srS7.lCyYz9kYS....D.ZVP.Zuc.0.", "2u5.o.DBwE.R..3..60m..UCfv.D.QI.9.ItgtX.VMCgj.Yn.b", "x.TMID..j.xH2OXkuhlhr6MB.q..zaCuODx.3.....fr.ra.nx", "GBfrtB..ku..L.pNv.5.FD..xu.7v83v.r.M.vbmyrokA1O.V.", "GNxaIwjk...s...fk.wYwVVS1LBbR5Pl.WH6Bo1zYoBG.UInIY", "v9rjVE.u..PEB7vY.g.VQFNiaXxnrz.nGsXx...6.z..cdo.RU", "ZstV..x..P.UTU.am1R4ky..9.27ATKDW.A.7MnY.dPz.j.k4a", "j.j..RH.sEU.sK7VkYqbou..nhXU4w.R..xr.yi..Sf.mm.OJA", "ay....2L.BTs.WD.wPZHHw.Nl.KiYC..mnJ.o.iR.2gf.whs3p", "1..P..O..7UKW.VD..54VnS7t.GUQW3X....u8wT.13Y.aCbWS", "mc3.m3Xp.v.7DV.6gW.NxR.f.l..L..rvNb0lEL.2jo3.n7.K.", "A.y.R.kNfYaV.D6..r4Rl42uEJItk..Ts.L.a..LbLFIa.e..H", "C.T.q.uvk.mkw.g....b7C4dKm.Fk.a5..9.okJUIRl3m.6J.T", "Qtp9l6h..g1YP.Wr..e...h9l.E..w06Y.E..V.DxIZ..cEk..", "1.am.0l5w.RqZ5.4.e.f8j..53x.Xf.Elv.rY7..7jMu..yyv5", "Wq.B.mh.YV4bH4NRb.f..z..U5gwAP.x.s.8.a..yAxh.....X", "..K4s.rFwQkoHVxl7.8....fe.eGB.sXT.AJVtp.P.Yy..UM4.", ".zXur.6DVFyuwnR4C.jz..8b.u5CDi..81W7a5KwfPpMkqZ..D", "9.4.SUM.VN...S.24h...8..M.kz3UX.7W.YlY.m.y.E7...O.", ".LUF7CB.Si..N7fud9..fb....cJ8z2YXw.s.z7.cMazVpGRH.", ".3X..f.x1a9nlt.EKl5Ue.M..y.w.ONC..nCh.W.KvNrY7.24X", "gDTjlvquLX.h..lJm.35.u..y.ad8M.wuph3V..3g.BOPlr...", "M...C...Bx2XKG.I.Exge5kc.a.q.F..Qt...T.j.v.AV.9.LX", "....yD.7bn7UiU.tF..wGCzJwdq.t..S2hl.Uuq1.W.iLZZ.q.", "o.8XY.zvRrA4YQLkk.XABD38.8.t.omU16wMFQEp...N..7F..", "..LrzQa85zTwCW...wfP.iUzOMF.o.hTP.k..t.i.6QAQ..bFh", ".Zpg9IC3P.K..3..a0..s.X2N...mh.HZKtVf...2T7dv2su..", "PE.fk.uvlnDR.XrT56ExX..YCw.SUTH.Aw..y.U.b.Y..wL.Bm", ".b.NY9O..GW.m.vs.Yl.T87X.uQ21PZA.WpMTyOQUk.OES.bBn", "fD.3S.DrWs..n.N...vs.1Ww.pth6.KwW.....l.g..j.qC.LQ", "7BlP.Ix.HXAxJ.bL9E..AW..nh.lwkt.p..Ll.il.y8YCb.AqQ", ".TA..t.M6x.r..0...r8J7YsC3..M.V.M.L.NIC4TyO.Y.h8.o", "ffKQ.g3.B.7.oulao.Y.Val.hV.UF.fyT.lN.G1.U..nraOwI.", ".N97.t.vo.My.8E.kV7at5Yz..TuQt..y..IG.YZ.F9.dhxBxp", ".0GnDX.b1.niiwL.J...pK.7W..qE..UOliC1Y..fb.j.Vg4gP", ".dB4...mz6Y.RT.LUD...wm..3j1pi..Q.l4.Z..ZMM4S.VO.j", "oHCGZV.yY.....2bIx7yPf.cKg....2bUg.TU.fZ...V.f.uXu", "aJeHVM.rozdS21jLRIjA.PyMv.vW.6T.k.yy.FbM..V5.l..Ab", "EBBmPCfoB.Pfg3oFlZMxYp.aNB...Q7Y..8O.9.M.V.Kl.xih.", "..D..grkG.z.fY3I3.uhyMEzrOAiNAd.OjY.n.j4V5K.Yb..rq", ".zp.Zj.A.c.m...am....k7VYPVL.Qv.E.CYrd.S..lY.h5tC.", "f0XVu.r1Udjmwan..c...q.p7l.Z..2wSqb.ahV.fl.bh.cW..", "W9KScYaOIo..hC7e6Ey.UZ.G.r9Z7.sL.C.hOxgV..x.5c.c1U", "KA...n..n.kOsb..Jky.M..R2...Fbu.b.A8wB4Ou.i.tWc.kX", "Y..z0.nVIR4J3WK...v.4.OH4.Lq.F.BBLq.Ixg.XAhrC.1k..", "h.4..bx.YUaApS.HT.5X.D..X.X..h.mnQQo.pPjub.q..UX.."};
    int inverseWalkSpeed = 93;
    int inverseDriveSpeed = 67;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 48816;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> cars = {17, 11, 7, 36, 35, 35, 5, 9, 40, 21, 49, 4, 46, 14, 27, 24, 23, 1, 47, 41, 29, 24, 8, 26, 2, 17, 14, 22, 3, 28, 23, 4, 22, 29};
    vector<int> districts = {18, 42, 36, 24, 44, 26, 47, 45, 39, 28, 33, 43, 5, 29, 22, 43, 24, 29, 14, 32, 25, 44, 16, 29, 5, 6, 12, 33, 20, 23, 17, 46, 19, 25, 32, 35, 14, 12, 4, 7, 3, 0, 36, 35, 30, 24, 32, 5, 24, 14};
    vector<string> roads = {".It.PGVGUDDbm.Cp...p...7I.0wl.imNuqDo.y.k.d...7epo", "I....mIyTwfJ.e.....euyIG.i.Tila..tD.S.n.5u7Hdyv.n.", "t..dba.6N.CX..n.44O.V.yP.3K..4wW.uUX.VWwbv.tk.q4.y", "..d.z.pVcY3.pDL..kVIN.dsBH.vJHuMN.dF.j.u7CM.HbyV1e", "P.bz...3.3..aS.2.pvYDcH.J4..T..sMUVsF6R.jj.4..SipX", "Gma...eb99K5U..GvzwOOjIjQ6j2..m.S..1rhPFgS6tJ1fp7.", "VI.p.e..B1m.jh3...LC..e.Dap.iN.O.G.eB.mI.tUv3.dUm.", "Gy6V3b..Ycoe7.HM...zj..9.G..XBh.greY.2x.N.B.2i..ZG", "UTNc.9BY..A.R12T..0V.S.D0O.QomzezLrbdxW.g.SWJ.VaQ.", "Dw.Y391c..BTVinBxG.Rf..J.X.v9qVV.4V.APuY..UHh..9Fr", "DfC3.KmoAB.t.lTFo.Jsz..nFzmC.iIA8pO.7Y.e7w2Y.8.3Zj", "bJX..5.e.Tt.j.G9Pg.5.w...V.8fc.JlY..4MDLtww.vJ.k..", "m..paUj7RV.j...1m8I.Azxff5rzdr.fH.EdX.F3..DthO.hhO", ".e.DS.h.1il...Fek.Z.ndY.flB6lEUN.ZK.Si.O1e.i..I1.A", "C.nL..3H2nTG.F.x.d.Q2...Mm6..r1LZSgwOYPE9.g..u.1.Q", "p...2G.MTBF91ex.M.oC5SErx...D1z...cUJeZG.K2.k..E1C", "..4..v...xoPmk.M.V3M.9zCyb.hH0msgwKt.i7nI..G.mIGkT", "..4kpz...G.g8.d.V.v.F.p2Gg..18.t.7D.vnU.XQOLm..H4.", "..OVvwL.0.J.IZ.o3v.nzN5EJ28..E....Yc..DuO5y...a..y", "pe.IYOCzVRs5..QCM.n.cf.L...zg..C9.2wUBes.T.dNp.m.R", ".uVNDO.j.fz.An25.Fzc.q159.94y.s.0.mWK.Tm2UDDN.D..O", ".y..cj..S..wzd.S9.Nfq..AoEp.vteG.Ps.W.Gwjv..e.2.P.", ".IydHIe.....xY.Ezp5.1...pRoK.2.V.5gKgxk...t1Ws2dFS", "7GPs.j.9DJn.f..rC2EL5A..P4Cqon.NR..QbZ2mGIo3s.A.8.", "I..BJQD.0.F.ffMxyGJ.9opP..s.jR.ykk.l81.lX.mMD.gG.Z", ".i3H46aGOXzV5lm.bg2..ER4..9fGuI..5w.x4QB..jNF.L..M", "0.K..jp...m.rB6...8.9poCs9.wt..eAYV.u..QGf5g2.LY..", "wT.v.2..QvC8z6..h..z4.Kq.fw.oys.q.UCmQ..CuY.QYp..P", "li.JT.iXo9.fdl.DH1.gyv.ojGto.R.NGt.WvnQ.TuEB..nQND", ".l4H..NBmqicrEr108E..t2nRu.yR..LFD.xH3UhB...E4gBD4", "iawu.m.hzVI..U1zm...se...I.s....hH.l.8..QkbdwVkR.e", "m.WMs.O.eVAJfNL.st.C.GVNy.e.NL..4kd..DbBiSB.MA.R00", "N..NMS.gz.8lH.Z.g..90..Rk.AqGFh4..tVA.DDdy5s...vN.", "utu.U.GrL4pY.ZS.w7...P5.k5Y.tDHk..nKg.qaeN4C.g.pq.", "qDUdV..erVO.EKgcKDY2msg..wVU...dtn.0.b.Ir.JHX3F00p", "D.XFs1eYb...d.wUt.cwW.KQl..CWxl.VK0..EYNY.WtJbZAA.", "oS..FrB.dA74XSOJ.v.UKWgb8xumvH..Ag...AIF..va.h.8.h", "..Vj6h.2xPYM.iYein.B..xZ14.Qn38D..bEA.a.3.dl.3mx.M", "ynW.RPmxWu.DF.PZ7UDeTGk2.Q..QU.bDq.YIa.4Ic5o.FzTG.", "..wu.FI..YeL3OEGn.usmw.mlBQ..h.BDaINF.4.J..v.aZGlC", "k5b7jg.Ng.7t.19.IXO.2j.GX.GCTBQiderY.3IJ...p.MxcPa", ".uvCjSt...ww.e.K.Q5TUv.I..fuu.kSyN....c...6o..6o.Q", "d7.M.6UBSU2wD.g2.Oy.D.tomj5YE.bB54JWvd5..6.tb...9k", ".Ht.4tv.WHY.ti..GL.dD.13MNg.B.d.sCHtalovpot.K2b.I7", ".dkH.J32Jh.vh..k.m.NNeWsDF2Q.EwM..XJ......bK.UPW.O", ".y.b.1.i..8JO.u.m..p..s....Y.4VA.g3bh3FaM..2U...O.", "7vqySfd.V....I..I.a.D22AgLLpngk...FZ.mzZx6.bP..KX.", "e.4VipU.a93kh11EGH.m..d.G.Y.QBRRvp0A8xTGco..W.K.g3", "pn.1p7mZQFZ.h..1k4...PF8....ND.0Nq0A..GlP.9I.OXg.U", "o.yeX..G.rj.OAQCT.yRO.S.ZM.PD4e0..p.hM.CaQk7O..3U."};
    int inverseWalkSpeed = 84;
    int inverseDriveSpeed = 6;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 15900;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> cars = {29, 19, 10, 35, 42, 17, 32};
    vector<int> districts = {44, 43, 15, 5, 35, 40, 35, 30, 1, 24, 15, 0, 3, 23, 16, 43, 23, 8, 16, 40, 6, 11, 17, 38, 49, 34, 18, 46, 37, 21, 15, 42, 20, 42, 13, 7, 33, 48, 23, 24, 42, 34, 40, 23, 41, 19, 28, 43, 3, 35};
    vector<string> roads = {".1AoOOx1uYm.OvXcWK3BSt8WklBUmAb6.qy.KBh2bpiV..6aE7", "1.SbezMben.unK..dCKB.19QYiqSEZuQv.X3q.VszyJ.Sqt1..", "AS.T.WwBTTCs4v8Q.aPfRV..kN0pNW0Te.EXoMkbfT.WR.oUEr", "obT..V1PR4dr2R9cTt37PlVUMP47YwhbxgG1v.ZdKudIrDgxjZ", "Oe...2D.RXBIqcbxfYbmOlJUwN.YtWnwqfkc9.oaBO.9Gerrsv", "OzWV2.pFF.ufYU36Eg7sJg.maxfjB2EY3A.l5jS6Qc95X6ZBip", "xMw1Dp.nNRt1e.b4eamDeaE9rzC1zky.V6ztCZ.x.6.TN4PNNm", "1bBP.Fn.erEabY86BShHRne4.3b.a.CvBDVk86d.YI4AWzfJeN", "ueTRRFNe.bJ.VtOg3Svyq.U.5hosqGFqERneknM35mofR6VdXk", "YnT4X.Rrb..OImLRWcKVeya.QzHpP6DgCskMt6Mlm.Uu3e80gc", "m.CdButEJ..QoSrWnN2ybHySBzPa2zOSzRjvUtmy.xOKXgkU7e", ".usrIf1a.OQ.yfBCECMr2A.E8QjKYl5m.wY0u.3FSyha.yZ82t", "On42qYebVIoy..QsC7gSg5cP5rYLyeVP.O8v.wZVDW0.0XqpmE", "vKvRcU.YtmSf..fa.LKCZ.4HIO.g.iJaUM.IlFlDfHYUnvk2.n", "X.89b3b8OLrBQf.DjBwOn1a1mp.iUSzoOPETWlKlCny5h4738h", "c.Qcx646gRWCsaD.ljJzwSXmVkigUm0REYs.xFM7sX4Du3WQqu", "Wd.TfEeB3WnEC.jl.7PQzG.Mq.uMSZ.dkSNKA67zvFljllkDk1", "KCatYgaSScNC7LBj7.PyObSXkvaGqigi.RRy27KccpCIzPAZs5", "3KP3b7mhvK2MgKwJPP.aiwxBXWq.tfT4gAoDIQ584krzMRg8gM", "BBf7msDHyVyrSCOzQya.h9JbgSyhjyPCZn2.iXfzoqMjKaDLtJ", "S.RPOJeRqeb2gZnwzOih.C37.uxYXvHmogJiMlbbu.4ecNTNjE", "t1Vllgan.yHA5.1SGbw9C..pgG.Fe60iJiA78.gL.h8.8CaILK", "89.VJ.EeUay.c4aX.SxJ3..lQlkWI2RHdpcpH4QBTZQkIxtxI.", "WQ.UUm94..SEPH1mMXBb7pl.T.AJ.2D6WPA.7gHOLlJW1fj2wx", "kYkMwar.5QB85ImVqkXg.gQT.zUQVsT47WBJHd8tqQ9gMzospv", "liNPNxz3hzzQrOpk.vWSuGl.z.3nigtW6If.qTDVE0k4Tx.ofH", "Bq04.fCboHPjY..iuaqyx.kAU3.zEl.4wPVe.NDMNBvgPLAGcI", "USp7Yj1.spaKLgigMG.hYFWJQnz.QxijKZsn.0l0.D3m0SXi7P", "mENYtBzaqP2Yy.UUSqtjXeI.ViEQ.v.RXh03zz..VBnknQrzQG", "AZWwW2k.G6zleiSmZifyv622sglxv.QKWmb0UZ9e2vllnWR7No", "bu0hnEyCFDO5VJz0.gTPH0RDTt.i.Q.Q.sEW.Xvn48lSvYlX4d", "6QTbwY.vqgSmPaoRdi4CmiH64W4jRKQ.N8jNVPXTZUr9lB.kjT", ".vexq3VBECz..UOEk.gZoJdW76wKXW.N..BnBR4ZPLqP54YwAb", "q..gfA6DRsRwOMPYSRAngipPWIPZhms8..wa20qPb.a4trFN1K", "yXEGk.zVnkjY8.EsNRo2JAcABfVs0bEjBw.gtr.ySuY..zqO4S", ".3X1cltkeMv0vIT.KyD.i7p.J.en30WNnag.NLvKxcibHxBqAN", "Kqov95C8ktUu.lWxA2IiM8H7Hq..zU.VB2tN.jR6IYZYvAYkA6", "B.M..jZ6n6t.wFlF67QXl.4gdTN0zZXPR0rLj.eMjd.IGJRalQ", "hVkZoS.dMMm3ZlKM7K5fbgQH8DDl.9vX4q.vRe.qt0D..TMivk", "2sbda6x.3lyFVDl7zc8zbLBOtVM0.enTZPyK6Mq.DQPc8wKs.k", "bzfKBQ.Y5m.SDfCsvc4ou.TLqEN.V24ZPbSxIjtD.MJIF.KKvE", "pyTuOc6Im.xyWHnXFpkq.hZlQ0BDBv8UL.ucYd0QM.MMey5JOu", "iJ.d.9.4oUOh0Yy4lCrM48QJ9kv3nllrqaYiZ.DPJM.j1fD8Dg", "V.WI95TAfuKa.U5DjIzje.kWg4gmklS9P4.bYI.cIMj.s3uY4I", ".SRrGXNWR3X.0nhulzMKc8I1MTP0nnvl5t.HvG.8Fe1s.qa8UP", ".q.De64z6egyXv43lPRaNCxfzxLSQWYB4rzxAJTw.yf3q..o8B", "6togrZPfV8kZqk7WkAgDTatjo.AXrRl.YFqBYRMKK5Dua..vpD", "a1UxrBNJd0U8p23QDZ8LNIx2soGiz7XkwNOqkaisKJ8Y8ov.2D", "E.EjsiNeXg72m.8qksgtjLIwpfc7QN4jA14AAlv.vOD4U8p2.E", "7.rZvpmNkcetEnhu15MJEK.xvHIPGodTbKSN6QkkEugIPBDDE."};
    int inverseWalkSpeed = 93;
    int inverseDriveSpeed = 58;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 35020;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> cars = {19, 49, 11, 19, 19, 42};
    vector<int> districts = {48, 21, 42, 29, 9, 13, 42, 14, 30, 10, 23, 9, 24, 44, 40, 25, 48, 31, 15, 20, 14, 28, 18, 32, 23, 38, 5, 27, 28, 14, 18, 17, 34, 43, 26, 8, 7, 21, 3, 42, 30, 7, 28, 11, 48, 29, 11, 27, 36, 44};
    vector<string> roads = {".WMa9wP.PPgvKWP.O.RjbF6CVo6eWtZ27f1H.qcL.X6PHO.IAr", "W.hVZP00xLhMw8.CYPovziI..x6Y2..YM3VJ.Y.T3JSI13IMGP", "Mh.rN6U8m.8bX9ByQi.C1N1Ce.MDl1gF.QOtHF22.z9XoXZx6f", "aVr.5VH3PD4RiNMOpxBG.v0hQbj..sbTIj6s1pX.5zsl3X.LCH", "9ZN5.cZNcROUEj4BvmJEQpDdhcsgiEYHBwU1Yr.QI.5kwl.k25", "wP6Vc..AF.MQ6fwiuvJ478bzpEJ4jQu.UKLS.QqJ.tV1.0j..a", "P0UHZ..S2.3N33clgU..kxSEv06.2.XRB0SX9ALr.mVFTSTKEq", ".083NAS.94X8.lLVvlO.g3fJvoYE.GFu.QQIP0.vYlm5z9qtL0", "PxmPcF29.r.hJV5.P.RtNnOZLfZ1F1G6jpykUDX0iLIpceQ2rt", "PL.DR..4r.h4GW6.5.8.FSktuYzBSsjn71PQ..N..hpjBM.AWQ", "gh84OM3X.h.N8.L.w4Zgn.kIpdJ4Q3E16DiVCmMgGF..jDapY6", "vMbRUQN8h4N.PY5n6S.w669OcR5pJFt.dEB7Gn2ntc7VcmpjfS", "KwXiE63.JG8P.N1zftFHbBYou.ygFQQ.h.4M.iQaaeIr7m3Hbd", "W89Njf3lVW.YN.iykvb2..hFNnJug5DGfTES.m.ZFKo.JM0xTT", "P.BM4wcL56L51i.wtbQmcMu.drcL.gXpa.y62.GPSsjV.PdoN.", ".CyOBilV...nzyw.jnlQykfaEN.F.MoufJ.U53.UuhEJ..zwj7", "OYQpvugvP5w6fktj.mHZOZmyWJvDO4.jmrWDaH5Mbj.dzMMC.w", ".PixmvUl..4Stvbnm.e..tZ.mfVKYNwoj4R7F..1Ndc5.fsoQs", "Ro.BJJ.OR8Z.FbQlHe.piHgC8g3gZsx.ZR.QjadaEvx5vGW.d.", "jvCGE4..t.gwH2mQZ.p..ibmqSIc2XfPEr.w..uWN10dL8kiYr", "bz1.Q7kgNFn6b.cyO.i..u.NRuEU.8Q.j1fy7.o5F.3.OogvLn", "FiNvp8x3nS.6B.MkZtHiu.TCzz.KXzR.rCxB.2os7vjxIlj060", "6I10DbSfOkk9YhufmZgb.T.mG.jrBvMUeB.pCk9Zpfh7.WKBR.", "C.ChdzEJZtIOoF.ay.CmNCm.g7cGJ.jJkBHAjNov..IdzBAFA.", "V.eQhpvvLupcuNdEWm8qRzGg.4AXfn2XFJpGdT.3.C09D30Iit", "ox.bcE0ofYdR.nrNJfgSuz.74.Gtx.UV.6b1db.szWvFMCYS.f", "66MjsJ6YZzJ5yJc.vV3IE.jcAG.78.V2fE.ZTlTC.iFXBTW.s1", "eYD.g4.E1B4pguLFDKgcUKrGXt7.0TqHE5keOj7.ipcCTJxHxe", "W2l.ij2.FSQJFg..OYZ2.XBJfx80..gDHmzIXIwRd4Q.qKGvGH", "t.1sEQ.G1s3FQ5gM4NsX8zv.n..T..1lLQo5wNJ.U2UPinvdnh", "Z.gbYuXFGjEtQDXo.wxfQRMj2UVqg1.q.om.TC74p0V.iH9y.S", "2YFTH.Ru6n1..Gpujo.P..UJXV2HDlq..F1s40w0AiZQc04L3J", "7M.IBUB.j76dhfafmjZEjrekF.fEHL...5fF3..wMDAYhRdmNX", "f3QjwK0Qp1DE.T.Jr4Rr1CBBJ6E5mQoF5.IN832jdQMyr4Glyf", "1VO6ULSQyPiB4Ey.WR..fx.Hpb.kzom1fI.DWm7B5.r7Obdook", "HJts1SXIkQV7MS6UD7QwyBpAG1ZeI5.sFND.kCA27q1gz8j1.H", "..H1Y.9PU.CG..25aFj.7.CjddTOXwT438Wk.rsutfxHN.0SZW", "qYFprQA0D.mnim.3H.a..2kNTbljINC0.3mCr.1oQIgAtsioGR", "c.2X.qL.XNM2Q.G.5.duoo9o..T7wJ7w.27As1.ehQ.Yp3Odta", "LT2.QJrv0.gnaZPUM1aW5sZv3sC.R.40wjB2uoe.Q.gUnb.UGU", ".3.5I..Yi.GtaFSubNENF7p..z.idUpAMd57tQhQ..Jb3OxJA4", "XJzz.tmlLhFceKshjdv1.vf.CWip420iDQ.qfIQ...H.Hre3aO", "6S9s5VVmIp.7IojE.cx03jhI0vFcQUVZAMr1xg.gJH.Xj.bppO", "PIXlk1F5pj.Vr.VJd55d.x7d9FXC.P.QYy7gHAYUb.X.L7zqf5", "H1o3w.TzcBjc7J..z.vLOI.zDMBTqiichrOzNtpn3HjL.6OnJb", "O3XXl0S9eMDmmMP.MfG8olWB3CTJKnH0R4b8.s3bOr.76.QLK.", ".IZ..jTqQ.ap30dzMsWkgjKA0YWxGv94dGdj0iO.xebzOQ..Pi", "IMxLk.Kt2ApjHxowCo.iv0BFIS.HvdyLmlo1SodUJ3pqnL..FZ", "AG6C2.ELrWYfbTNj.QdYL6RAi.sxGn.3Nyo.ZGtGAapfJKPF.b", "rPfH5aq0tQ6SdT.7ws.rn0..tf1eHhSJXfkHWRaU4OO5b.iZb."};
    int inverseWalkSpeed = 75;
    int inverseDriveSpeed = 23;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 25732;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> cars = {24, 43, 15, 1, 26, 34, 30, 6, 20, 18, 15, 36, 26, 25, 24, 41, 26, 34, 24, 26, 41, 19, 11, 45};
    vector<int> districts = {43, 7, 5, 47, 34, 31, 48, 34, 29, 49, 9, 3, 33, 31, 15, 25, 0, 47, 8, 21, 0, 33, 34, 27, 10, 6, 17, 47, 46, 29, 42, 1, 36, 22, 38, 46, 21, 14, 23, 8, 38, 25, 10, 48, 12, 10, 43, 5, 27, 23};
    vector<string> roads = {"........v.O.aa.wY.V..i..7.....S.t.Uj......GF.Fj0.2", "...y.Y.jZ...E.X3.M.X...W.....8crT5.C......A.w.....", "...H......Gf.Y.c..H...Nv...b..d0H...w6.......K..Y7", ".yH.3..u....zC..P.e...t..d..X.6.....n.kYQ.Dd.K..O.", "...3...tNo............Q..B1k....k......q.....j1...", ".Y....D.R.A..i....n.o......B......i......rnu......", ".....D.8K4UIw.g.37.At..E.....D...9..K....OUX....LQ", ".j.ut.8...kLz...wI...c.D..oUa.DA.......a....D.....", "vZ..NRK.....D....w...z....x.MUT.Q.1...m..jx.Q.....", "....o.4......RA.......aX.7...e7.....9..BH..NB...TM", "O.G..AUk.....I...d.F....N.g.w3C.0.0OP.1w...8D.....", "..f...IL....9Q.9.W.....ub...Up......d....7R9......", "aE.z..wzD..9.I.i.1......4.............8.......O..O", "a.YC.i...RIQI.q.y...v.k...O..xF...e.....f..s.....o", ".X....g..A...q...e.r....T.....t.P..c..0.4...y....Z", "w3c........9i.....Z..iJ.d.zf...x..O.ITo...E....LG.", "Y..P..3w.....y.....N..9..G..w.....g....I..7L......", ".M....7Iw.dW1.e..............7...n......s.......uG", "V.He.n.........Z....J.Nv...x.N..SJ....v....q...a..", ".X....A...F...r.N...ZA5JLZ..................h.A.SC", ".....ot......v....JZ.7............S....BH.R.f.Qxl.", "i......cz......i...A7.8c....bk......f3Em.P.G.g..9h", "..NtQ....a...k.J9.N5.8.......4....A....qv....F.m..", ".Wv...ED.X.u......vJ.c.....b.eGY..h.Z..G..........", "7.........Nb4.Td...L.....V........M..t....pG......", "...dB....7......G..Z....V..........p.....C.8....q.", "....1..ox.g..O.z............u....3v..C..F...y..Vs.", "..b.kB.U.......f..x....b......R.rv.iO......k0.QRh.", "...X...aM.wU....w....b....u...Z8C..7..h7......ZEZ.", ".8....D.Ue3p.x...7N..k4e.......Bm...B.8.....V.T.v.", "Scd6...DT7C..Ft........G...RZ.....y.r...TGtu..A6..", ".r0....A.......x.......Y....8B.........m.2.Rh..Hx.", "tTH.k...Q.0...P...S........rCm.....p...9.A......9.", ".5....9..........nJ.......3v............y.Q.2.N..q", "U....i..1.0..e.Og...S.AhM.v...y....pCLm...X..demR.", "jC........O...c..........p.i7...p.p.f.......Jy.DV.", "..wn..K..9Pd...I.....f.Z...O.Br...Cf....yy......U.", "..6............T.....3..t.C.......L...g.....b.T..G", "...k....m.1.8.0o..v..E......h8....m..g....O.t.g...", "...Yq..a.Bw.....I...BmqG....7..m9........A.4v.e.E.", "...Q.....H...f4..s..H.v...F...T..y..y.....fu...I..", ".....rO.j..7.........P...C....G2A...y..A.....c.rS.", "GA.D.nU.x..R...E7...R...p.....t..QX...O.f......L..", "F..d.uX..N89.s..L.q..G..G8.k..uR.......4u.....h...", ".w.....DQBD...y....hf.....y0.V.h.2.J.btv.......fN.", "F.KKj................gF...........dy.....c.......d", "j...1.......O......AQ......QZTA..Ne..Tge...h......", "0..............L..a.x.m...VRE.6H..mD....IrL.f....D", "..YO..L..T.....G.u.Sl9...qshZv.x9.RVU..E.S..N.....", "2.7...Q..M..OoZ..G.C.h...........q...G.......d.D.."};
    int inverseWalkSpeed = 90;
    int inverseDriveSpeed = 78;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 85410;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> cars = {20, 36, 33, 42, 31, 13, 23, 29, 39, 20};
    vector<int> districts = {48, 19, 14, 22, 18, 45, 10, 49, 3, 6, 9, 43, 49, 20, 47, 35, 31, 7, 29, 27, 33, 22, 46, 34, 36, 7, 18, 6, 20, 29, 35, 5, 33, 24, 2, 44, 46, 33, 32, 8, 20, 37, 47, 35, 7, 30, 6, 29, 15, 29};
    vector<string> roads = {"...X7..06CV.5QVxdB.i4VJW.iHwyK.bUV..V.ZH.O.5xh..z9", "...M9wopIBB.WB.F.maZ.Eb..f0Z.Gv..T68.nQn.kP...IL6Q", "....6aJ.LQK.p2.3.wzim.1EYL.e.k.K..sXxJaz4.y.P.v.T.", "XM..7l6BXt9o.gP8A.Kk0.ZEOAidjExU..0xi...x.oJ.L..J.", "7967.GJ.x....sI..f.4x.b0....S..zH..O..V6.9.o6dPj..", ".walG...sR.NFVq.z....mixc..O.5J2VdAuA....d2V..Qdn1", ".oJ6J....SA.x.h..aF......fyaV..yaJcd..7yoC.RDHtih3", "0p.B....I8tCpuC.t5Y.nIu..zQ.pPVY.73gSjLD.SU.3qnG.f", "6ILXxs.I.pX.sL..p5.Wl.4tx.r.k.X1..2wjqI.O26H.mo.y.", "CBQt.RS8p.zFCpx.5..raAPi7E.g.W.Ys.eKDk74V.sW..g..X", "VBK9..AtXz.9FC..a.H.V.ty.SS....lW..SUevD.qT...y.Sr", "...o.N.C.F9.K..skS.u89.QZDl3p..Bpe.pB.S.l.E..k8vnQ", "5Wp..FxpsCFK..gr.ElBCY..3.CLtGd2tUCAw7.1jajLW.7W..", "QB2gsV.uLpC...fL99X.0....6TZZG.yr.jy.Njc.v.2W1.p.1", "V..PIqhC.x..gf.cgc3.3Eo1.Fvb..oC.liF.1..CeDHDK2.Z.", "xF38.......srLc..EF....LyV.RRj1ax.O.JX..T.rY1Rct8N", "d..A.z.tp5ak.9g..cML44Cg.Dc8cd.M.3QuKD...RR7lLT9D.", "Bmw.f.a55..SE9cEc.ny..w.jn....GOEQ.IaVhOQ.n.Vhm...", ".azK..FY..H.lX3FMn.i.Y...bZeZ.Vst.JO7QyJX.dQn...Tk", "iZik4...Wr.uB...Lyi..3M.H7x..n.1NW.7.zi2IUN.6...2.", "4.m0x..nlaV8C03.4.....BbuBMN...6W1g.wJgZ.d1l......", "VE...m.I.A.9Y.E.4.Y3..vN.BMD.O.U.2.6NtzWMU..OE.36K", "Jb1Zbi.u4Pt...o.Cw.MBv..bw.iuosfa.P52.i.uJi5..pvm.", "W.EE0x..tiyQ..1Lg...bN..B....9wNW3.5X.z.BCLSTI..pe", "..YO.c..x7.Z3..y.j.Hu.bB.QbGOae.aX..f.o.BrUf.cn..2", "ifLA..fz.ESD.6FVDnb7BBw.Q.8...SNmUcz....9..TGnsiS.", "H0.i..yQr.SlCTv.c.ZxMM..b8..S...c9cs..Y.v.EH.T.0C.", "wZed.Oa..g.3LZbR8.e.NDi.G...ISmw.z....d.5.0...t.G.", "y..jS.Vpk..ptZ.Rc.Z...u.O.SI.cQfNET.zBR.z..v4.M.OP", "KGkE.5.P.W..GG.jd..n.Oo9a..Sc....MN.0A2jfVOfJ8ow1C", ".v.x.J.VX...d.o1.GV...sweS.mQ...9zl3..6u.ne.KF.5..", "b.KUz2yY1YlB2yCaMOs16UfN.N.wf....A.2eCD..TXj..9.OC", "U...HVa..sWptr.x.EtNW.aWamc.N.9..U......Q4.Bb.NqUZ", "VT...dJ7...eU.l.3Q.W12.3XU9zEMzAU.hSi.sS..MWbk.eon", ".6s0.Ac32e..CjiOQ.J.g.P..cc.TNl..h..NJ.yUdu4XtZ...", ".8XxOudgwKSpAyF.uIO7.655.zs...32.S...WOKP.aao.4B3v", "V.xi.A.SjDUBw..JKa7.wN2Xf...z0.e.iN...l.N..y.dD..K", ".nJ....jqke.7N1XDVQzJt......BA.C..JW..tb.HZ2.Tq3.0", "ZQa.V.7LI7vS.j...hyigzizo.YdR26D.s.Olt..C.PiS4LoIG", "Hnz.6.yD.4D.1c...OJ2ZW.......ju..SyK.b..q0nBqT.f..", "..4x..o.OV.lj.CT.QXI.MuBB9v5zf..Q.UPN.Cq.gdDS.VG.M", "Ok..9dCS2.q.ave.R..UdUJCr....VnT4.d..H.0g.Bv..I1.A", ".Pyo.2.U6sTEj.DrRndN1.iLU.E0.OeX.Mua.ZPndB..7.t..6", "5..JoVR.HW..L2HY7.Q.l.5SfTH.vf.jBW4ay2iBDv...6..G6", "x.P.6.D3....WWD1lVn6.O.T.G..4JK.bbXo..SqS.7....8.d", "h..Ld.Hqm..k.1KRLh...E.IcnT..8F..kt.dT4T...6....Gw", ".Iv.PQtnogy87.2cTm....p.ns.tMo.9N.Z4DqL.VIt.....hs", ".L..jdiG...vWp.t9....3v..i0..w5.qe.B.3ofG1..8...1Y", "z6TJ.nh.y.Sn..Z8D.T2.6mp.SCGO1.OUo.3..I....G.Gh1.W", "9Q...13f.XrQ.1.N..k..K.e2...PC.CZn.vK0G.MA66dwsYW."};
    int inverseWalkSpeed = 89;
    int inverseDriveSpeed = 70;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 38601;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> cars = {10, 11, 3, 23, 41, 0, 1, 40, 38, 8, 30, 42, 16, 1, 35, 37, 13, 15, 4, 44, 31, 22, 5, 4, 13, 11, 26};
    vector<int> districts = {5, 20, 34, 42, 1, 2, 15, 2, 40, 35, 6, 17, 28, 42, 46, 49, 38, 21, 18, 36, 6, 18, 12, 25, 41, 21, 9, 42, 17, 32, 45, 26, 49, 33, 13, 40, 5, 17, 16, 26, 19, 1, 33, 48, 19, 24, 47, 40, 10, 4};
    vector<string> roads = {".v........W......v.....i.....hmc..e...hlS...z....X", "v..M.....5.........Xs.....X.v.7Q..2..w..5..Q...RSe", "....................T............U.7.S....gZ.F2...", ".M......JLj.......um......a..qD....Sk.K........2..", "......X..V....6...............e..................B", "......o.6........CVj........2...Nw1.fC...w........", "....Xo....j..e.....pj.......C8..j....y....XL....j.", "...........9tq..u...............C....f.W.......H.c", "...J.6...E..M8.2........t..................e......", ".5.LV...E.....j....T...0.............G...CsYJ....2", "W..j..j......W..n.Q....o.EK.....f.......OF.b..z..w", ".......9......TA.Qf..9H...M.........Z....M.......o", ".......tM......TH.cI.T..Q...7......m......PQ......", "......eq8.W....O..0.X.....H.0......st.............", "....6....j.T....oZk........SX.....H..........JF...", "........2..ATO..Z.......h....a..m.Y.6...G..Nm.....", ".......u..n.H.oZ......A..nto..C...MG..............", "v....C.....Q..Z..........8..m..........8.zN.......", "...u.V....Qfc0k.....T.Pm............V.OF...y....8W", ".X.m.jp..T..I..............G.......W............rz", ".sT...j......X....T..B................l........n..", "...........9T.......B..........1....Y....No.......", "...........H....A.P.......C........5V..X.....h...x", "i........0o.......m......b..zd...8B.......0.......", "........t...Q..h.............M.....s.....Ov..s....", "..........E.....n8.....b.........H.....h.T5a2.H..4", ".X.a......KM.H..t.....C.......0....C6......r..A...", "..............S.o..G................u.knlc..N.ZLw.", ".v...2C.....70X..m.....z......q.W.....f.oS...d..0z", "h..q..8........a.......dM......x.7.............g..", "m7.De...........C.........0.q........M........2P..", "cQ...................1.......x..............KA....", ".....NjC..f....m............W....................V", "..U..w.................8.H...7....IBsBw..Q.....7.K", "e2...1........HYM......B.........I.........e..L..A", "..7S........ms..G..W..5.s.C......B..z.........a...", "...k.f.....Z.t.6..V..YV...6u.....s.z..0..........J", ".wS..Cyf.G....................M..B....h..S.8f...k.", "h..K..............O.l......kf....w..0h........2.p3", "l......W.........8F...X..h.n......................", "S5........O....G...........lo..............Mvq..ZN", ".....w...CFM.....z...N..OT.cS....Q...S......50....", "..g...X..s..P....N...o.0v5..................dgC...", ".QZ...L.eYb.Q..N..y......ar.......e..8..M.......i.", "z........J.....m.........2.N...K.....f..v5d.......", "..F...........J.......h.s...d..A........q0g......r", "..2.......z...F..........HAZ..2...La..2...C.......", ".R.2...H............n......L.gP..7................", ".S....j...........8r.......w0........kp.Z..i......", "Xe..B..c.2wo......Wz..x..4..z...VKA.J.3.N....r...."};
    int inverseWalkSpeed = 53;
    int inverseDriveSpeed = 44;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 58848;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> cars = {20, 48, 36, 7, 22, 32, 37, 8, 34, 10, 2, 9, 28, 35, 14, 20, 36, 22, 16, 20, 24, 33, 1, 30, 23, 15, 26, 6, 37, 24, 31, 2, 12, 1, 33, 27, 8, 10, 15, 23, 10};
    vector<int> districts = {40, 10, 1, 4, 1, 13, 47, 13, 42, 39, 26, 14, 44, 25, 33, 28, 35, 36, 40, 49, 22, 16, 10, 40, 12, 3, 4, 19, 15, 43, 24, 4, 45, 38, 9, 10, 8, 32, 28, 35, 41, 32, 15, 40, 38, 9, 47, 7, 10, 13};
    vector<string> roads = {".Z08.adwemViFA...sWIGB...cICkgYT..9.HLX..bQmb.Y.3.", "Z.Nx.97.9jq.Z.yx..X7jhNecV0.f.If...7.w.wqpQy.n..Rm", "0N..u..Rm.k...85..d..tQ..wKzbPL.kR....J.CNCCZ.uMdg", "8x..mBQdZMH...6pT..g.BL..Su.yP.p2jMuJ1T.v.W.mH.w.G", "..um.Tucq.qZk.VDk.czVL......ueo..nIQ..r..In.8.Ek.Y", "a9.BT...IADcCnJRo.TaBZgAPbAQ..GB.eumX.6r43gJyHCu0.", "d7.Qu..X.......8iJ.zt7w.4..A.L.FDyu.0S....Y9v...pK", "w.Rdc.X...vQ..Wk.gQ.4F..lJho.XTQmoE7..GmO.qd1r.QVL", "e9mZqI...Vc..j.X.NA.vKFM1...s5..8AO3G.UA.....D..n.", "mj.M.A..V.Pz6.nepA..qrS.RY...GfXTl..Q..h.n..chQhSg", "VqkHqD.vcP..k....3..U.qiW..aL.5..31...KI.e.KO..652", "i...Zc.Q.z...D9aN..X.xd...C.w.Ns.....om7X3u.fEnjGJ", "FZ..kC...6k......1j.wJ12L.G8l84G..x.l.d.2kF16obmJ.", "A....n..j..D..gIs.99....U4.QI.9.pSO......2wEiSK.h.", ".y86VJ.W.n.9.g.....cF..HVnjZ.0Q...KyN.EwB.c.MV.q.w", ".x5pDR8kXe.a.I..CEx.o.ae..ArTauNn...U..h.Re.I..i8T", "...Tkoi..p.N.s.C..o.t.y2.qd.yHl.S....EqV.......ak.", "s.....JgNA3.1..E..H.0B.5.5p.Q.8...o...dJ.T.Zp.U...", "WXd.cT.QA...j9.xoH...n3aMg...C2LrYo.iI.Nf.ufD....2", "I7.gzaz....X.9c.....fapp.x4.Z.v4yF.v31V9.EA....d.u", "Gj..VBt4vqU.w.Fot0.f.M.2.d...C.SC....UcA.n.P..yB..", "BhtBLZ7FKr.xJ....BnaM....m3Xx9T.W..fSca.8..w3M1...", ".NQL.gw.FSqd1..ay.3p...K.1...55..S.q.Sdy...5IHv..z", ".e...A..M.i.2.He25ap2.K.Se.3....oX.cu..qMZl1.iXVmI", ".c...P4l1RW.LUV...M....S...t.2.j.kV.R..vbx.YLNYd..", "cVwS.b.J.Y...4n.q5gxdm1e...XT.9..Cs..8.M.0...U..MO", "I0Ku.A.h...CG.jAdp.4.3.....GH.9J.7.C..H.MjEKZ.yu.t", "C.z..QAo..a.8QZr.....X.3tXG.Ij.J.d8...dY..o...B.g.", "kfbyu...s.LwlI.TyQ.Z.x...THI.m.o.zKC1.D.eYxZrG.h.Q", "g.PPe.LX5G..8.0aH.C.C95.2..jm.c..G.....NRM..1Q7rAk", "YIL.oG.T.f5N49Qul82v.T5..99..c.....Y..vEWm4.....B.", "Tf.p.BFQ.X.sG..N..L4S...j.JJo...yhcjV.khAsC..9oVMO", "..k2..Dm8T...p.nS.ryCW.o.......y.HD.w8R.KODrtL.3eX", "..RjneyoAl3..S....YF..SXkC7dzG.hH..i4y.a.yTen.IL7.", "9..MIuuEO.1.xOK..oo.....Vs.8K..cD...xlRcRz.o..M...", ".7.uQm.73.....y....v.fqc..C.C.Yj.i....gJl8Pz.Hd.i.", "H..J.X0.GQ..l.NU..i3.S.uR...1..Vw4x..Ey..Ew.W8xA.m", "Lw.1..S....o....E.I1UcS..8......8yl.E..Y...G.ep.SU", "X.JTr6.GU.Kmd.E.qd.Vcad...HdD.vkR.Rgy..9Es.p.5..p7", ".w...r.mAhI7..whVJN9A.yqvM.Y.NEh.acJ.Y9.WUf.F...t.", ".qCv.4.O...X2.B...f..8.Mb.M.eRWAK.Rl..EW..X0l.y.4i", "bpN.I3...ne3k2.R.T.En..Zx0j.YMmsOyz8E.sU..9c...akP", "QQCWngYq...uFwce..uA...l..Eox.4CDT.Pw..fX9.p..eGd.", "myC..J9d..K.1E...Zf.Pw51Y.K.Z...reoz.Gp.0cp.8TRV..", "b.Zm8yv1.cOf6iMI.pD..3I.L.Z.r1..tn..W..Fl..8.rEl8.", ".n.H.H.rDh.EoSV......MHiNU..GQ.9L..H8e5....Tr.3S2l", "Y.u.EC...Q.nbK...U..y1vXY.yB.7.o.IMdxp..y.eRE3.8Lh", "..Mwku.Q.h6jm.qia..dB..Vd.u.hr.V3L..A....aGVlS8.CW", "3Rd..0pVnS5GJh.8k......m.M.g.ABMe7.i.Spt4kd.82LC.w", ".mgGY.KL.g2J..wT..2u..zI.Ot.Qk.OX...mU7.iP...lhWw."};
    int inverseWalkSpeed = 32;
    int inverseDriveSpeed = 15;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 14431;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> cars = {26, 14, 35, 22, 47, 0, 46, 35, 41, 9, 4, 42, 11, 11, 28, 40, 0, 36, 18, 32, 30, 25, 2, 32, 38, 8, 22, 4, 40, 22, 30, 31, 37, 24, 10, 20, 46};
    vector<int> districts = {21, 19, 13, 5, 15, 17, 10, 2, 3, 2, 41, 8, 45, 46, 1, 23, 44, 32, 9, 16, 37, 0, 33, 4, 46, 29, 0, 28, 8, 25, 41, 21, 47, 13, 0, 17, 19, 18, 3, 7, 40, 7, 48, 19, 42, 35, 34, 38, 10, 47};
    vector<string> roads = {".jPO.ZEV8.B6UF8.Is.dp5q..x.g...IvzBy.DFAale8f.4Jcl", "j...Uj...F9WdLO1.S..O.kl..fGlOG..33.JMwXi..w.aNeWb", "P....P..6.z..DoEDgUROc.XYwfV.zeaz9HyT.ZYa.J.G.B8Xk", "O...F5MVgaNeJx..P..n.As.2.L.qbqK..3UnPX.t.h9HYOJ.O", ".U.F..vDAL...g.FB3DYi.JXxI8L5bq6koP.9vKzmk...e0jRK", "ZjP5..NxFfKj.V.2..9.V.AfHGNdjUdn0u.y6wgOq0.F.uoxZx", "E..MvN.aGcF8Euoav.1ey5UC.fhHPL7Ak.OCLpcGb..82kW0.h", "V..VDxa.m0.WLyFJ...6Z.ML..uDL1JIu8Z.wQ.QdXSAC.D.j3", "8.6gAFGm.1xdIxqUZ..fMd.geISwjEzbP.zk4.E..ktYG.lTW.", ".F.aLfc01.7M.G.M3879X.WW.hv.Vokzas.9tsH8Td.zw1p.d.", "B9zN.KF.x7.dsJx8pW.dQn1.GlV...I.mGKY......CVYCIh7T", "6W.e.j8WdMd.tLT..k.qk.U1..3E.8rkCRNB734hJ.C.TR.cS5", "Ud.J..ELI.st...l.i.uI.h.lpV...arzpt1vAw.zRzPO...dR", "FLDxgVuyxGJL..g...EOw.6XI2Wdz..Mj7oNNgVoXib.a.j1Xb", "8Oo...oFq.xT.g...0L2Ku1.cjgm.J.y1gcO.AFwY.FX..H8tP", ".1E.F2aJUM8.l....Sn0aB.x4W..v.X..Vb3.B.gRS1kt.bk.3", "I.DPB.v.Z3p......Qu..zNsSS94588eacO.sb.vSpK.t.n.W1", "sSg.3....8Wki.0SQ.7VqH...H..S.jDbEH0.OH.JG1HSh.3Yg", "..U.D91..7...ELnu7.bm.u.B5Vjovqc5qg.p.U.Jh.ALt2eaV", "d.RnY.e6f9dquO20.Vb.quVYh.9JKi.9ul.6G.X.c.FrjKVBox", "pOO.iVyZMXQkIwKa.qmq..TKV.l.3....aDUfokl...D.05sGc", "5.cA..5.d.n...uBzH.u..tP8.P7U.bOSdRt.BsuTG..2..0j.", "qk.sJAUM.W1Uh61.N.uVTt..wU2DNv3wxu.aLl.xIWw3qPm.P5", ".lX.XfCLgW.1.X.xs..YKP..a..A.N7O.Y.....y.Yi.E.sJEB", "..Y2xH..e.G.lIc4S.BhV8wa.CHLzD..zxB.OT.msBZ5sH.X.X", "x.w.IGf.Ihl.p2jWSH5...U.C.N.PN.ARoY.zw.g7LrJf.rfFr", ".ffL8NhuSvV3VWg.9.V9lP2.HN.NF.rj.BZe3ALES3.zPZKSI3", "gGV.LdHDw..E.dm.4.jJ.7DAL.N..D86JgI.Y.GCb...Yo.N3m", ".l.q5jPLjV...z.v5SoK3UN.zPF...Ma.d..0Dq.MkzoG3jLQg", ".OzbbUL1Eo.8..J.8.vi..vNDN.D..M.JZ..72F.lz8.mw.nfX", ".Geqqd7JzkIra..X8jq..b37..r8MM.y.b.9P...CE....qix.", "I.aK6nAIbz.krMy.eDc9.OwO.Aj6a.y.C.U.dINxrR41RC.9o1", "v.z.k0kuPamCzj1.ab5u.Sx.zR.J.J.C.7GW.nTp.qJimNhosu", "z39.ou.8.sGRp7gVcEqladuYxoBgdZb.7.4RSl.oJG3N..4mM.", "B3H3P.OZz.KNtocbOHg.DR..BYZI...UG4...DN3.MeBrMc1CT", "y.yU.yC.k9YB1NO3.0.6Uta...e...9.WR..Kg..w9N9X.06pz", ".JTn96Lw4t.7vN..s.pGf.L.Oz3Y07Pd.S.K.32h.rc.dsT.u.", "DM.PvwpQ.s.3AgABbO..oBl.TwA.D2.InlDg3..F.qQygVXX..", "FwZXKgc.EH.4wVF..HUXks....LGqF.NT.N.2..sk.W..sM.C.", "AXY.zOGQ.8.h.owgv...luxymgEC...xpo3.hFs..jFlJ.V..X", "aiatmqbd.T.JzXYRSJJc.TI.s7SbMlCr.J.w..k..Wr.tJZ3.T", "l...k0.Xkd..Ri.SpGh..GWYBL3.kzERqGM9rq.jW.hMi.nSEB", "e.Jh...St.CCzbF1K1.F..wiZr..z8.4J3eNcQWFrh.EuAd0hx", "8w.9.F8AYzV.P.Xk.HArD.3.5Jz.o..1iNB9.y.l.ME.Qt..M.", "f.GH..2CGwYTOa.ttSLj.2qEsfPYGm.Rm.rXdg.JtiuQ.F5.R.", ".a.Yeuk..1CR.....htK0.P.H.Zo3w.CN.M.sVs.J.AtF.2ujn", "4NBO0oWDlpI..jHbn.2V5.ms.rK.j.q.h4c0TXMVZnd.52..h.", "Je8Jjx0.T.hc.18k.3eBs0.JXfSNLni9om16.X..3S0..u..M4", "cWX.RZ.jWd7SdXt.WYaoGjPE.FI3QfxosMCpu.C..EhMRjhM..", "lbkOKxh3..T5RbP31gVxc.5BXr3mgX.1u.Tz...XTBx..n.4.."};
    int inverseWalkSpeed = 78;
    int inverseDriveSpeed = 14;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 16254;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> cars = {45};
    vector<int> districts = {39, 45, 27, 42, 35, 4, 49, 1, 18, 42, 45, 7, 40, 49, 12, 15, 34, 3, 32, 16, 7, 36, 4, 9, 38, 17, 30, 4, 35, 30, 9, 15, 27, 17, 2, 21, 41, 45, 31, 35, 1, 13, 44, 43, 12, 41, 29, 7, 36, 42};
    vector<string> roads = {".4m3CzuDhzneo4apll9zaewzpfjb8tAxjytfgCpdmfsgEomEzq", "4.o0yuqzdvick47kog4vaerumce6cqvsetrbbykakcpfBrhBun", "mo.oDQCCtGzkyrwI0FtIfdIJqmAvqsHLzJnrzEIAoBsfE2BDKs", "30o.zvrAewjcl37lnh5waesvmcf7brwtfuscczlbkcqfCriBvo", "CyDz.wb2l9jogDDvDywctrjedmqwLaampggmu1xDfCap2Cn3ib", "zuQvw.lzmmhwkvq8PeojACchwtfnExl9gfEoiuaowlxBzRfAdv", "uqCrbl.dc47i5usjBmm5oo86cgfmCc5ce7jej9ltdrbmeCbf9a", "DzCA2zd.mcloiEExCAxftrmhdnsyL9dprjeow4AFgDap1Bp0lc", "hdtelmcm.h586hhfsfahdffhb67aqfhh6gj19kgiageeou7ohc", "zvGw9m4ch.cnazxmGqr2ts94gljrHf0ci6mjn7pxhvercGfd8e", "nizjjh7l5c.e2mkczeeckl8bec6evgcb5am7aiekdifkmA3mbd", "eckcowio8ne.egjojmco55opa1gemeoqfof7gool8ld5qlgpqc", "okylgk5i6a2e.onfyhgakk9abc9gxdac89j8dfhnblcjjz6jba", "44r3DvuEhzmgo.5mqg7zeiuyrhh88vzvhxwgdDl8paukGukGxs", "a7w7DqsEhxkjn5.hvb6ximrwsie5dwxreuyf9Cf3q5vnFzhGut", "pkIlv8jxfmcofmh.H5fkruciqm7dvtlb8gzg8t2fqcsuyJ8yfq", "lo0nDPBCsGzjyqvH.EsIfdIIplzupsHKyInryEHzoAseE3ADKr", "lgFhyemAfqemhgb5E.bopsinrl79puqh8lzf5x39q6tsBHaBlr", "94t5womxarecg76fsb.rdgmqkb91gprn9or86vf8j8ohyvcypl", "zvIwcj5fh2coazxkIor.uu71imiqHh19h3ojmanwjuhsfIeg5g", "aafatAotdtk5keirfpdu.3tvf7kfijuvjuiciusldmj5vhlvwh", "eederCorfsl5kimudsgu3.uvd8mjmhuwlufdlsupbpg1tfmswf", "wrIsjc8mf98o9urcIim7tu.5klclDl82c3shhhfqloktmJ9n2j", "zuJveh6hh4bpaywiInq1vv5.jnhqHj37g1qjlclvktithJdi3h", "pmqmdwcdbgeabrsqprkifdkj.9jmx3hnik7clest1s3bfqhfm1", "fcmcmtgn6lc1chimllbm78ln9.edndmodmf5emnl7kc7pneooa", "jeAfqffs7j6g9he7z79ikmchje.8qmjd0fr83p8diblltB3tfj", "b6v7wnmyareeg85du91qfjlqmd8.hqrm8ot94wd7k6pjzxbzon", "8cqbLECLqHvmx8dvppgHimDHxnqh.BIEqGBomKtgviBoNttNGz", "tqsraxc9ffgedvwtsuphjhlj3dmqB.golk6gpbvx5w0fbskbm2", "AvHwal5dh0coazxlHqr1uu83hmjrIg.bi5njn8oxivfsdHfe7f", "xsLtm9cphcbqcvrbKhn9vw27nodmEob.d5vjhkeqonovpMaq3m", "jezfpger6i5f8he8y89hjlcgid08qlid.fq74o9ehcklsB2tfi", "ytJugf7jg6ao9xugIlo3uu31kmfoGk55f.rikejtkrjtjJck1i", "trnsgEjejmmfjwyznzroifsq7frtB6nvqr.jthAA8A7cgmpft8", "fbrcmoeo1j778gfgrf8jcdhjc589ogjj7ij.9mhhagfdpt8pjc", "gbzcuijw9nagdd98y56milhlle34mpnh4kt9.t89k7olxA7xkm", "CyEz1u94k7iofDCtExvaushcempwKb8koehmt.wDgBbq4El5gc", "pkIlxalAgpeohlf2H3fnsuflsn8dtvoe9jAh8w.drauuAKaBis", "daAbDotFixkln83fz98wlpqvtld7gxxqetAh9Dd.s2xqGChHtu", "mkokfwdgahd8bpqqoqjjdblk17ikv5iohk8akgrs.r59hohhm3", "fcBcClrDgvilla5cA68umpotskb6iwvncrAg7Ba2r.vqFDfFrt", "spsqaxbaeefdcuvsstohjgki3clpB0fokj7fobux5v.ecsjbl1", "gfffpBmperk5jknueshs51ttb7ljofsvltcdlquq9qe.rfmqvd", "EBEC2ze1ocmqjGFyEByfvtmhfptzNbdpsjgpx4AGhFcr.Dq0ld", "or2rCRCBuGAlzuzJ3HvIhfJJqnBxtsHMBJmtAEKCoDsfD.CCLr", "mhBinfbp7f3g6kh8Aacelm9dhe3btkfa2cp87lahhfjmqC.qch", "EBDB3Af0odmpjGGyDBygvsnifotzNbeqtkfpx5BHhFbq0Cq.md", "zuKvid9lh8bqbxufKlp5ww23mofoGm73f1tjkgitmrlvlLcm.k", "qnsobvaccedcastqrrlghfjh1ajnz2fmii8cmcsu3t1ddrhdk."};
    int inverseWalkSpeed = 47;
    int inverseDriveSpeed = 20;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 52049;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> cars = {45};
    vector<int> districts = {39, 45, 27, 42, 35, 4, 49, 1, 18, 42, 45, 7, 40, 49, 12, 15, 34, 3, 32, 16, 7, 36, 4, 9, 38, 17, 30, 4, 35, 30, 9, 15, 27, 17, 2, 21, 41, 45, 31, 35, 1, 13, 44, 43, 12, 41, 29, 7, 36, 42};
    vector<string> roads = {"..9...............................................", "..............................f...................", "9.............3..........c.....9....q...x.........", "........hb........................................", "...........o.......................58.............", "..........................o..................7....", "...........................................k......", "..........................................t.......", "...h..........................................d...", "...b..............................................", ".............................................l....", "....o.............................................", ".......................................z.........b", ".................E.......B...........b............", "..3...................................s...........", "..........................................l.......", ".........................F........................", ".............E....................t...............", "................................................h.", "........................e...q.....................", "........................l.........................", "......................................c...........", ".....................................5............", ".............................................s....", "...................el.............................", "..c..........B..F............................z....", ".....o............................................", ".......................................n..........", "...................q................x....C........", "....................................g.............", ".f..................................v..........o..", "..9...............................................", "..........................................8.......", "......................................c...........", ".................t................................", "....5.............................................", "..q.8.......................xgv........l........j.", ".............b........5...........................", "..............s......c...........c................", "............z..............n........l......j..z...", "..x...............................................", "............................C.....................", ".......t.......l................8...........ka....", "......k................................j..........", "..........................................k.......", ".....7....l............s.z................a.......", "........d..............................z..........", "..............................o...................", "..................h.................j.............", "............b....................................."};
    int inverseWalkSpeed = 97;
    int inverseDriveSpeed = 20;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 500219;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> cars = {45};
    vector<int> districts = {39, 45, 27, 42, 35, 4, 49, 1, 18, 42, 45, 7, 40, 49, 12, 15, 34, 3, 32, 16, 7, 36, 4, 9, 38, 17, 30, 4, 35, 30, 9, 15, 27, 17, 2, 21, 41, 45, 31, 35, 1, 13, 44, 43, 12, 41, 29, 7, 36, 42};
    vector<string> roads = {".......................S.....................g....", "...o...............................E..............", "..........3......................f................", ".o...................................b............", ".............b....................G...............", "...........o..................................i...", "....................W..............0..............", "..................D..........................7....", ".........................8...............z........", "..........................i..............K........", "..3..............Y................................", ".....o.........k..................................", "...........................................z....T.", "....b..........................R..................", "......................................r.....g.....", "...........k............................m.........", "............................j..........x..........", "..........Y............H..........................", ".......D...................................i......", "...............................h5.................", "......W...........................................", "........................V.............1...........", "..........................y...9...................", "S................H................................", ".....................V.....3......................", "........8....................c....................", ".........i............y...........................", "........................3.........l...............", "................j...........................G.....", ".........................c.....................c..", "......................9..............N............", ".............R.....h..............................", "...................5.............................s", "..f.....................................P.........", "....G......................l......................", ".E....0...........................................", "..............................................Cj..", "...b..........................N...................", "..............r......1............................", "................x.........................A.......", "...............m.................P................", "........zK........................................", ".......................................A..........", "............z.....i...............................", "..............g.............G.....................", "g......7..........................................", ".....i..............................C.............", ".............................c......j.............", "............T....................................y", "................................s...............y."};
    int inverseWalkSpeed = 63;
    int inverseDriveSpeed = 48;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1644168;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> cars = {45};
    vector<int> districts = {39, 45, 27, 42, 35, 4, 49, 1, 18, 42, 45, 7, 40, 49, 12, 15, 34, 3, 32, 16, 7, 36, 4, 9, 38, 17, 30, 4, 35, 30, 9, 15, 27, 17, 2, 21, 41, 45, 31, 35, 1, 13, 44, 43, 12, 41, 29, 7, 36, 42};
    vector<string> roads = {"...................Z...........Z..................", "......Z.........Z.................................", "....................................ZZ............", "............Z.................Z...................", "......Z.Z.........................................", "....................Z.........................Z...", ".Z..Z.............................................", "........................Z......................Z..", "....Z........................Z....................", "...........................Z......Z...............", "..................Z.........Z.....................", "..............................Z....Z..............", "...Z.........Z....................................", "............Z..................Z..................", ".................Z..........Z.....................", ".................Z........Z.......................", ".Z........................................Z.......", "..............ZZ..................................", "..........Z.....................................Z.", "Z................................Z................", ".....Z............................................", ".............................Z...........Z........", "............................................Z.Z...", ".................................Z...............Z", ".......Z....................................Z.....", ".............................................Z..Z.", "...............Z........................Z.........", ".........Z...............................Z........", "..........Z...Z...................................", "........Z............Z............................", "...Z.......Z......................................", "Z............Z....................................", "......................................Z........Z..", "...................Z...Z..........................", ".........Z.......................................Z", "...........Z............................Z.........", "..Z........................................Z......", "..Z..........................................Z....", "................................Z......Z..........", "......................................Z....Z......", "..........................Z........Z..............", ".....................Z.....Z......................", "................Z.................................", "....................................Z..Z..........", "......................Z.Z.........................", ".........................Z...........Z............", ".....Z................Z...........................", ".......Z........................Z.................", "..................Z......Z........................", ".......................Z..........Z..............."};
    int inverseWalkSpeed = 99;
    int inverseDriveSpeed = 93;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 5278308;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> cars = {45};
    vector<int> districts = {39, 45, 27, 42, 35, 4, 49, 1, 18, 42, 45, 7, 40, 49, 12, 15, 34, 3, 32, 16, 7, 36, 4, 9, 38, 17, 30, 4, 35, 30, 9, 15, 27, 17, 2, 21, 41, 45, 31, 35, 1, 13, 44, 43, 12, 41, 29, 7, 36, 42};
    vector<string> roads = {".......................i..........................", "................d.................................", "....6...............................j...........h.", "....................................l.............", "..6.............h...r.............................", "...........v.........................e............", "...........................68.....................", "........................u.........................", "..........................m....................f..", "..........................................8.......", "...........l........................y.............", ".....v....l.j.........................t...........", "...........j......................................", "...................w......p...g........7.r........", "..........................................C.......", ".......................n............m.............", ".d..h................l....................u.......", ".............................................y....", "...............................s.......w...v......", ".............w.........r..........................", "....r...........................x............k....", "................l.................................", ".......................................q..........", "i..............n...r........6....p...8......7.....", ".......u............................x...Ex........", "...........................................s......", "........m....p..............g.....................", "......6...........................................", "......8................6..g...g.....h........f....", "........................................o.........", ".............g..............g..........8.........u", "..................s...............................", "....................x.............xm......o.......", ".......................p..........................", "................................x.................", "................................m...........5.C...", "..jl......y....m........x...h...............9..r..", ".....e.................8..........................", "...........t.................................3....", ".............7....w...q.......8...................", "........................E....o....................", ".............r..........x.........................", ".........8....C.u...............o.................", "..................v......s........................", ".......................7...........59.............", ".................y..k.......f.........3...........", "...................................C..............", "........f...........................r.............", "..h...............................................", "..............................u..................."};
    int inverseWalkSpeed = 50;
    int inverseDriveSpeed = 30;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 204420;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> cars = {45};
    vector<int> districts = {39, 45, 27, 42, 35, 4, 49, 1, 18, 42, 45, 7, 40, 49, 12, 15, 34, 3, 32, 16, 7, 36, 4, 9, 38, 17, 30, 4, 35, 30, 9, 15, 27, 17, 2, 21, 41, 45, 31, 35, 1, 13, 44, 43, 12, 41, 29, 7, 36, 42};
    vector<string> roads = {".oR.bgvuOHhmUIgeNqlXi.jqfgkqN.EtX.Nh6zs7s76fFXLZON", "o.B.D5vv14gwi..h.gPgOp8hrABjZLC20aHF.aOCR6RRDuM3rV", "RB.Md8c2JEys8iB.XeHR...mARreFJlagoCZPDfMyxnw1nam.J", "..M.vcfWiwEQq6iJ7mg.d.BcnXEiYV.fI3mDPVWaTGuAYy4GWM", "bDdv..ZXnd.7IAWrouckoxc.zJDDRD3.tKoB75T0ApCC4VT.jR", "g58c..7ZGuGvrJh.q.ozZdmcu.Xy.Pyw97bo1mBw.V87c5YHf4", "vvcfZ7.kz.XWv.6GBb8vxf2Z566diNRBb.CfiSa.Rib0zfrTZe", "uv2WXZk.rDQWJVILrpuQ70JbC..5.xmJd7b.g.XND.N.zAN3.5", "O1JinGzr.nAXXDwleTNlCYBQL.n0WmCI.FJmvs2y.e6LfaX.3f", "H4Ewdu.Dn.omvrBcIg.LOPRSWWESy.7E.HA.JKfCXH2ugdXKkA", "hgyE.GXQAo.jzSyMzY.CSB6.O4wuVBYNzxU7yKPrmvy0rSc.xv", "mwsQ7vWWXmj.c0l8rg.15idjpiqzXd9.q7.rqjErYy4.zSZsjQ", "Ui8qIrvJXvzc.4.nywF2.qS5mDX8.P7LuO2ps9ba4xm.aWD6w.", "I.i6AJ.VDrS04.I..2MaasXAhaGI..FY.DBwnBU7oi013.xeEn", "g.BiWh6IwByl.I.z7SdJ.lyWqh.2..ZeKxXFlb7gm62a3.SP22", "eh.Jr.GLlcM8n.z.h6hvnsIHPSOf3Wf..eOctKScYVGQHuCvxn", "N.X7oqBreIzry.7h.fYl64T5TM409.rULlO.F.Pw.9O.nAZ9gK", "qgemu.bpTgYgw2S6f.kHAY9.zLFnmQebliz.Ai..Pdy.hjN5.P", "lPHgco8uN...FMdhYk.nVCN.TA7w.d.fvcszo.hHU1QiTy8PYq", "XgR.kzvQlLC12aJvlHn.Jt.adrYMRhglRkTLfnKy.v8NYtQ47J", "iO.doZx7COS5.a.n6AVJ.PwB.YZJPAvUmuSN5l5yI4o9t.Q5.P", ".p..xdf0YPBiqsls4YCtP.59gnZj.o.FtafzS.tJj.vUJpiG.o", "j8.Bcm2JBR6dSXyIT9N.w5..NZvkQf.Q5LV5.50y.X9.vpY3dm", "qhmc.cZbQS.j5AWH5..aB9..cOAcI9vU.27XqMrsNCnQplwtt.", "frAnzu5CLWOpmhqPTzTd.gNc.3HT6oeoOjNjJ02L...9iR2T.J", "gARXJ.6..W4iDahSMLArYnZO3.w.gaaEw0WDb3zVRKUG.N0a6g", "kBrEDX6.nEwqXG.O4F7YZZvAHw.IF5sE.Pf.BIkVl.0ytA.Vv.", "qjeiDyd50Suz8I2f0nwMJjkcT.I..wsbcWyS.yrrkj5kNxJCLJ", "NZFYR.i.WyVX...39m.RP.QI6gF..1ME9QZt.BK.m.FzQQZGaC", ".LJVDPNxm.BdP..W.QdhAof9oa5w1.1OPWhBfqbpdYAYY8OR.D", "ECl.3yRmC7Y97FZfre.gv..veassM1.TFeIry6jZrl8g.EnMUM", "t2af.wBJIEN.LYe.UbflUFQUoEEbEOT.3.7G.5.kInrUz58Jlm", "X0gIt9bd..zqu.K.LlvRmt5.Ow.c9PF3..gJH.680JgDoa.gB4", ".ao3K7.7FHx7ODxelickuaL2j0PWQWe...GJCplpEJ.dt05.wb", "NHCmobCbJAU.2BXOOzsTSfV7NWfyZhI7gG.trL6.aBp.tDFDDr", "hFZDBof.m.7rpwFc..zLNz5XjD.StBrGJJt.AjWGdT.k2kRaBQ", "6.PP71igvJyqsnltFAof5S.qJbB..fy.HCrA..GK.BdFYpvw.0", "zaDV5mS.sKKj9BbK.i.nl.5M03IyBq65.pLj..o.CSDAkE41QV", "sOfWTBaX2fPEbU7SP.hK5t0r2zkrKbj.6l6WGo..wIdB1Bsrs.", "7CMa0w.NyCrra7gcw.HyyJysLVVr.pZk8p.GK...bz4kcMW3wR", "sRyTA.RD.XmY4omY.PU.Ij.N.RlkmdrI0Ead.Cwb.hm.h.QjI.", "76xGpVi.eHvyxi6V9d1v4.XC.K.j.YlnJJBTBSIzh.ikncLLk.", "6RnuC8bN62y4m02GOyQ8ov9n.U05FA8rg.p.dDd4mi.5MCLho.", "fRwAC70.Lu0..1aQ..iN9U.Q9GykzYgUDd.kFABk.k5.Y.Ej.T", "FD1Y4czzfgrza33HnhTYtJvpi.tNQY.zott2Yk1chnMY.RX1.2", "XunyV5fAadSSW..uAjyt.pplRNAxQ8E5a0DkpEBM.cC.R.vtQr", "LMa4TYrNXXcZDxSCZN8QQiYw20.JZOn8.5FRv4sWQLLEXv.gPX", "Z3mG.HT3.K.s6ePv95P45G3tTaVCGRMJg.Daw1r3jLhj1tg.4q", "Or.WjfZ.3kxjwE2xg.Y7..dt.6vLa.UlBwDB.QswIko..QP4.6", "NVJMR4e5fAvQ.n2nKPqJPom.Jg.JCDMm4brQ0V.R...T2rXq6."};
    int inverseWalkSpeed = 100;
    int inverseDriveSpeed = 6;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 46966;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> cars = {2};
    vector<int> districts = {37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12};
    vector<string> roads = {".D9wmDrxGxCfDEB57fqvCwq8f7EmCtfaco2oempkAtwxCgbnAI", "D.u6t6o54t4wc0exFokbq7kwnB5g2iyyDoBjplgAmfg90mtgh6", "9u.onthpznthywr7aagpsnn97exdtq84jm7ebkkoqosoua1hqA", "w6o.q6i3bn5sg7bryidam0iqgwb94hrrylvckidwheg46gmcdd", "mtnq.xzouGw7muBhudvhIr8ekgrkubwsd4osb7c6FdevsfoeCv", "D6t6x.j9bn1zk77yEpfgj6pxmDcg3ovwFtBgrpkDfkm58nsjac", "rohizj.lt6kwypdppm4qahvqfwtflwehAwp6otpD8swepkfmav", "x5p3o9l.9r7qc6frAhg6q4fqhv8a5eutxjwfjgaumad84goaha", "G4zbubt9.y9ya3jBKrpcvclzrE2k7iDDFpGosniBrggf4pyjm0", "xtnnGn6ry.oDEufvtsaw6mBwmCzlqChlGDuduzwJ7zDiuqltcz", "C4t5w1k79o.yh59xEogel5nwmCaf1mwwErBgqoiChik55mshca", "fwhs7zwqyDy.sxBamatlGsd7g8vjwhqm6agq8af6DikvvcjfBz", "DcygmkycaEhs.cryIot8ChevqA7lfaFDziDsphetya7lbnygua", "E0w7u7p63u5xc.fzHplbr8lxoD4h3jAzEpDkqmhAnggb1nvhi4", "BerbB7dfjf9Brf.xBqalbatxlDkgbtrtGwzcstoG7ps5fopm2k", "5x7rhyprBvxayzx.b9npArk2b5zhxogbai5l8hjgynrtxbahxC", "7FayuEpAKtEmIHBb.kpzzywfifIoEza7ku5oktusyyCyFkbrzL", "foaidpmhrsoaopq9k.ifwic76do8nfjffbff189gsdhln1b7qs", "qkgdvf4gpagttlanpi.lccqoctpahrghxso2kokz9orakgeh9q", "vbpahgq6cwel8blpzfl.wb8nhs9cc7vtscujga5os36f9eo7od", "CqsmIjaqv6lGCrbAzwcw.lCBpGwnnDosLFAfyBxN3zDgrtqu8w", "w7n0r6h4cm5sh8aryicbl.jqgwc95irqymvbkjdxgfh37gmccd", "qkni8pvflBndeltkwcq8Cj.hhlifl3vsl3qnc35fz46njco8vm", "8w9qexqqzww7vxx2f7onBqh.b5xgvlie9f8l6egeykosv9bfxA", "fn7gkmfhrmmgqolbi6chpghb.hp6ljebkhe98edmmhlhm46als", "7BewgDwvECC8ADD5fdtsGwl5h.CmBpmh4i9rbilcEpsyBfglDG", "E5xbrct82zav74kzIop9wcixpC.j8fCBDmDoqkfysddf4nwgn3", "mgd9kgfaklfjlhgho8acn9fg6mj.fgjhpgl8bd9pkdhbg6c6hm", "C2t4u3l57q1wf3bxEnhcn5lvlB8f.kwwDpAhpmhAjgi73lsge8", "tiqhboweiCmhajtozfr7Di3ljpfgk.yvo6uof66iz32nhfq9vj", "fy8rwveuDhwqFArgajgvorviemCjwy.4rvcfksrxnwAqyi7opF", "ay4rswhtDlwmDztb7fhtsqsebhBhwv4.mr8ggposqtxqyf4mrE", "cDjydFAxFGE6zEGakfxsLyl9k4DpDorm.hfvdim8IprBCilmGH", "ooml4twjpDraipwiubscFm3fhimgp6vrh.opa38bB89qncnayq", "2B7voBpwGuBgDDz55fouAvq8e9DlAuc8fo.menomytwwBf9myH", "ojecsg6fodgqskclof2jfbnl9ro8hofgvpm.hliwclpajdcfbq", "epbkbrojsuq8pqs8k1kgykc68bqbpfkgdaeh.8aeuehno3c8tu", "mlki7ptgnzoahmtht8oaBj3eeikdm6spi3nl8.4dx69nk9k6uo", "pgkdckpaiwifehoju9k5xd5gdlf9h6rom8oia4.jt38hf8k2pj", "kAow6DDuBJC6tAGgsgzoNxfemcypAixs8bmwedj.JklAzipkHC", "AmqhFf8mr7hDyn7yys9s3gzymEskjznqIBycuxtJ.vycnqoq4s", "tfoedksagziiagpnydo3zf4khpddg3wtp8tle63kv.3jedo6rh", "wgsgemwdgDkk7gsrChr6Dh6olsdhi2Axr9wph98ly3.mfhsaug", "x9o4v5e8fi5vlb5tylafg3nshyfb7nqqBqwannhAcjm.aimg8g", "C0u6s8p44u5vb1fxFnk9r7jvmB4g3hyyCnBjokfznefa.ltfi5", "gmagfnkgpqmcnnobk1getgc94fn6lfificfd398iqdhil.a6or", "bt1mosfoylsjyvpabbeoqmob6gwcsq74ln9cckkpoosmta.hoz", "nghcejmajthfghmhr7h7uc8falg6g9ommamf862kq6agf6h.nk", "AhqdCaahmccBui2xzq9o8cvxlDnhevprGyybtupH4ru8ioon.n", "I6Advcva0zaza4kCLsqdwdmAsG3m8jFEHqHquojCshgg5rzkn."};
    int inverseWalkSpeed = 46;
    int inverseDriveSpeed = 26;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 41552;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> cars = {2};
    vector<int> districts = {37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12};
    vector<string> roads = {"...................................t..............", "...............................i..................", "..........5.......................n...............", ".....p.....................................q......", "...............s..................................", "...p.....n.........o....................G.........", "................................n.......C.........", "..................................t...............", "...................G..................q...........", ".....n...........j................................", "..5...............................................", "...............................................q..", "..................................m...............", ".................u................................", ".....................d.......................v....", "....s............0................................", "....................F.............................", ".........j...u.0.............w...k...A......c.....", "..................................8...............", ".....o..G..................4...u..g.y.............", "................F.................mu......F.......", "..............d...................................", "....................................7.............", "...............................................p..", "............................h.....................", "..........................................E.......", "....................................p.............", "...................4..............................", "........................h.....o....7..............", ".................w............................w...", "............................o.....................", ".i.................u..............................", "......n...........................................", ".................k................................", "..n....t....m.....8gm.............................", "t...................u.......7..................0..", "...................y..7...p.....................3.", ".................A................................", "........q.........................................", "............................................c.....", ".....GC......................................C...F", "................................................p.", "....................F....E........................", "...q..............................................", ".................c.....................c..........", "..............v.........................C.........", ".............................w....................", "...........q...........p...........0..............", "....................................3....p........", "........................................F........."};
    int inverseWalkSpeed = 71;
    int inverseDriveSpeed = 15;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 517807;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> cars = {2};
    vector<int> districts = {37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12};
    vector<string> roads = {".....9...............6............................", "....................H...........W.................", ".................Q.........................o......", "...........G.................................c....", "......................W..........................n", "9............z....................................", "......................................D........G..", "...................B........................f.....", "...............6.............T....................", ".............e................k...................", "................................4f................", "...G...............................y..............", "..........................s.......................", ".....z...e........................................", "............................X...................6.", "........6.......c.................................", "...............c........................1.........", "..Q..............................................r", "...........................z............i.........", ".......B.............................c............", ".H...........................................g....", "6.........................L.......................", "....W...........................................j.", ".........................N.............p..........", "..................................Q............X..", ".......................N...................T......", "............s........L............................", "..................z...........................6...", "..............X...............a...................", "........T..........................9..............", ".........k..................a.....................", "....................................u....V........", ".W........4.......................................", "..........f.................................P.....", "........................Q.................6.......", "...........y.................9....................", "...............................u..........M.......", "...................c..............................", "......D.......................................a...", ".......................p.................2........", "................1.i...............................", "...............................V.......2..........", "..................................6.M.............", "..o......................T........................", ".......f.........................P................", "...c................g.............................", "...........................6..........a...........", "......G.................X.........................", "..............6.......j...........................", "....n............r................................"};
    int inverseWalkSpeed = 13;
    int inverseDriveSpeed = 6;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 928467;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> cars = {2};
    vector<int> districts = {37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12};
    vector<string> roads = {"...........................Z....................Z.", ".................Z..............Z.................", "...............Z........................Z.........", "..............Z..................................Z", "....................Z...............Z.............", "...............................ZZ.................", "..............Z.Z.................................", "......................................Z..Z........", ".....................Z....................Z.......", ".............................Z.........Z..........", "...................................Z...........Z..", "............................Z..............Z......", "........................Z.........................", "......................Z.............Z.............", "...Z..Z...........................................", "..Z.............Z.................................", "......Z........Z..................................", ".Z...................Z............................", "..................................Z......Z........", "............................Z..Z..................", "....Z.......................................Z.....", "........Z........Z................................", ".............Z...............Z....................", ".............................................Z.Z..", "............Z.............Z.......................", "...........................Z..Z...................", "........................Z........Z................", "Z........................Z........................", "...........Z.......Z..............................", ".........Z............Z...........................", ".........................Z.......Z................", ".....Z.............Z..............................", ".Z...Z............................................", "..........................Z...Z...................", "..................Z...........................Z...", "..........Z.............................Z.........", "....Z........Z....................................", "..........................................Z.......", ".......Z.........................................Z", ".........Z....................................Z...", "..Z................................Z..............", ".......Z..........Z...............................", "........Z............................Z............", "...........Z................................Z.....", "....................Z......................Z......", ".......................Z........................Z.", "..................................Z....Z..........", "..........Z............Z..........................", "Z............................................Z....", "...Z..................................Z..........."};
    int inverseWalkSpeed = 97;
    int inverseDriveSpeed = 50;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 14593126;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> cars = {2};
    vector<int> districts = {37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12};
    vector<string> roads = {".rcb.1.n.sn.b.vkpx9n5h.lCq3.vhxi.gvu..9.cB9.tgboqg", "r.zv3s.Iv..h.q6AH...tF.I.kofHd.Gq..inz.a...wg9l.G.", "cz.3.a.9bolxmnB9cwj...89..bl.m.6q..uo.mno.k4up...6", "bv3.u...c.htkjx.....5a.c.l9g.inan4..nskko.k5.m9.ea", ".3.u.t.Gwoj..n.y.ji5.....gpd.b.F.x.eq.nazo..cb.7E.", "1sa.t.t..s.xdqxjn.b..fg.Cq.itiwg..s.dB.i.B....bqod", ".....t.lw.c.x8.d.h....s..f.k.n...gn.E..qHfEp.v.A.s", "nI9.G.l.lq....J...t.h78.A.lsduo4t87.zvww...eA.mH7.", ".vbcw.wl..q.f.zlo.dr5ff.F..lv..gxgtx.D.lbE86xke.q.", "s.o.os.q..5es.phn.pqpt..a6oeig8s2jt.A..jF9..cp.t.u", "n.lhj.c.q5.c.4lho.jkkr..f3j7lae.6h.8uf.dzdx.9.b.m.", ".hxt.x...ec.qecuB6phv.G..8.dxe..b.H.zjwgG.F.2klk.E", "b.mk.dx.fs.q.q.sy.2c.stwA.adBbzts.E.8...gygin5cdy.", ".qnjnq8...4eq.....o.n..s.6n..f......zav.DaB..o.s..", "v6Bx.x.Jzplc...BIj..xI..ri..H.y.n...u.reC.C..f.aHI", "kA9.yjd.lhhus.B.6royf..brlik.n.a.3.q...pxrtdrt.A.e", "pHc..n..onoBy.I6.xv.....w.nr8.k....xBr.....hyz.H2.", "x.w.j.h....6..jrx..nv.E.77ufshg.6..4.c.kJ4Hx6...uD", "9.j.ib.tdpjp2o.ov..ecpr.yl7cya.qqlBn.z.8gwffm.9..o", "n...5...rqkhc..y.ne..C.F..ldFaz...M..y.....t.6i2EC", "5t.5...h5pkv.nxf.vc..cd.z.4.ph.dr.pshxfihye2.j9.kb", "hF.a.f.7ftr.s.I...pCc.14Ev.rktt.w9..tAruqD..Bw.Ee.", "..8..gs8f..Gt....Er.d1.4G.itmu...b.C.C.wqFmaDxlGf1", "lI9c........ws.b...F.44....uh.s2.a9Cxzvxv.rdCz.I.6", "C....C.AFaf.A.rrw7y.zEG..d.mpo...uC.J..rP2.A..r..F", "qk.lgqf..638.6il.7l..v..d..8obf...z4wesd..z.5je..w", "3ob9p..l.oj.an.inu7l4.i.....s.ui..t...aef.c7qe7n.g", ".flgdiksle7dd..krfcd.rtum8..r2m..j.bm.j.tk.j.a7..r", "vH...t.dvilxB.H.8syFpkmhposr.ucil..tGjDx.qDovB.I.m", "hdmibinu.gaebf.n.haahtu.ob.2u.ptg.B.kq..r.qkc78.tt", "x..n.w.o.8e.z.y.kg.z.t.s.fumcp.sakpj.6D.KdHtlxnC.v", "iG6aFg.4gs..t..a..q.d..2..i.its.v.cA..s.sCoaA...c3", ".qqn...tx26bs.n..6q.rw......lgav.m.8.8xj.6.sap..o.", "g..4x.g8gjh....3..l..9bau..j..k.m.frsqpnstp9rqd.9.", "v....sn7tt.HE.....BMp..9Czt..Bpc.f..HwEDFD..FGt...", "uiu.e...x.8....qx4n.s.CC.4.bt.jA8r......F9Du.k..vB", ".nonqdEz.Auz8zu.B...ht.xJw.mGk...sH..J3i8....e.kCr", ".z.s.B.vD.fj.a..rczyxACz.e..jq6.8qw.J....8L.iy..oB", "9.mkn..w...w.vr.....fr.v.sajD.DsxpE.3..fa..h.b..zp", ".ankaiqwljdg..ep.k8.iuwxrde.x...jnD.i.f.q.p.d4a..u", "c.ooz.H.bFzGgDCx.Jg.hqqvP.ft.rKs.sFF8.aq.N3j..ntCo", "B...oBf.E9d.ya.r.4w.yDF.2..kq.dC6tD9.8..N.Kzb.pv.E", "9.kk..E.8.xFgBCt.Hf.e.mr.zc.DqHo.p.D.L.p3K..Cm.tyk", ".w45..pe6...i..dhxft2.adA.7joktas9.u..h.jz...mbu.8", "tgu.c..Axc92n..ry6m..BDC.5q.vclAarF..i.d.bC.....w.", "g9pmb.v.kp.k5oftz..6jwxz.jeaB7x.pqGkeyb4..mm..c8..", "bl.9.b.me.blc.....9i9.l.re77.8n..dt....anp.b.c..lk", "o...7qAH.t.kdsaAH..2.EGI..n.I.C.....k...tvtu.8..G.", "qG.eEo.7q.m.y.H.2u.Ekef......t.co9.vCoz.C.y.w.lG.g", "g.6a.ds..u.E..Ie.DoCb.16Fwgrmtv3...BrBpuoEk8..k.g."};
    int inverseWalkSpeed = 81;
    int inverseDriveSpeed = 68;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 153981;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> cars = {2};
    vector<int> districts = {37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12, 37, 12};
    vector<string> roads = {"..5..l...7m.7........O.oq..tcnU.c..ZL.v...w..d...2", "..MU.U2.51..m1...D.yx.CC......Pa8.T...fx.h.T......", "5M.F.b.r...H..d6...8X.C..Pp..sT.I.Gt.Oc..e.a....sp", ".UF.....I..U.7Q.d......Z.....u....MI97.G3My..0U...", "........r..c.mM..ZV.e.G...T.B.......G.u.ZJ.i6.....", "lUb....8V2..R.nSJ.j...Z...EZ....V.2j.4G......h.x..", ".2.....N.M5..HM..VR.z2D.b8.1.NG..k.......H..Ds....", "..r..8N..X.....s....N......V8.J..8t.....u.lsl5.XpY", ".5.IrV....L..C.b.pVxA....ng.4......I....k.0P.zq.f.", "71...2MX..E.nI.m...H..M.xp...U.H..o.....U..Q9Gs...", "m.....5.LE...ZL..gXW.dBi.....VPf..........tj0..Aoy", "..HUc........F..mM.Q...H.o..6.nh.xy...FTP.A.ijeT..", "7m...R...n...T.Q..S.J...xq..YP.....X.Ai....AeQ....", ".1.7m.H.CIZFT..T..s.1M.XWi.N.9f.9C.SO...Hbc4R...r9", "..dQMnM...L......r.f.g.7P.z.a..khe.u.a...p..X..UcN", "..6..S.sbm..QT..ik.q..d..gQbf..I.jxa.....0xO.....E", "...d.J.....m...i..b.8..ThvNb.ZP...8O......J.ZD.U.1", ".D..Z.V.p.gM..rk.......YC...J.4.....In..F.b4..U.2t", "....VjR.V.X.Ss..b......I.u..L...hd.....qw..I.y....", ".y8.....xHWQ..fq....XT..D.C..D.Id...B.....2alb...5", ".xX.e.zNA...J1..8..X..Gc...0O....zL7.xZ...t.o.a.V.", "O.....2...d..Mg....T..gF...m..wqr..0kE..s.8Zeh...o", ".CC.GZD..MB....d....Gg..E...SEks.K..z7..G.3..F.A..", "oC.Z......iH.X7.TYI.cF..X.X....B.I..c..G....r.zTc.", "q.....b..x..xWP.hC.D..EX.........WO..EG...M.lT2.4.", "..P...8.np.oqi.gv.u.......BF.3VM...ro...Pjb....L.2", "..p.TE..g.....zQN..C...X.B.2......nJ..o...bX..N...", "t....Z1V.....N.bb...0m...F2..N.Jl.eAEyI..Cm.K...J.", "c...B..84..6Y.af.JL.O.S......7CgM5e26.0l..vZE1....", "n.su..N..UV.P9..Z..D..E..3.N7..i.J....K.hee...xje.", "UPT...GJ..Pn.f..P4...wk..V..C..nZzIO9..k...A..mWO.", ".a.......Hfh..kI...I.qsB.M.Jgin.O...a.N.AK.m..R.5.", "c8I..V.......9h...hd.r.....lM.ZO...M..z..wDl.sQ..K", "......k8...x.Cej..d.z.KIW...5Jz....6N......6h..i..", ".TGM.2.t.o.y...x8...L...O.nee.I....e0TvgkqK...5kp.", "Z.tI.j..I...XSuaO...70...rJA2.O.M6e.08.PAc.LJ..I.j", "L..9G........O...I.B.kzc.o.E6.9a.N00..D.p.ND.D....", "..O7.4......A.a..n..xE7.E..y......T8..n.......5...", "vfc.uG.....Fi.......Z...G.oI0K.Nz.v.Dn..S...7d....", ".x.G.......T......q....G....l.k...gP....p9....La..", "...3Z..ukU.P.H...Fw..sG..P...h.A..kAp.Sp...N...oQ.", ".heMJ.H......bp0.........j.C.e.Kw.qc...9...Nmv..Ta", "w..y...l0.tA.c.xJb.2t83.Mbbmve..D.K.N......f3jwx..", ".Ta.i..sPQj.A4.O.4Ia.Z....X.Z.Aml6.LD...NNf.B.8..h", "....6.Dl.90ieRX.Z..loe.rl..KE....h.J..7..m3B....sK", "d..0.hs5zG.jQ...D.yb.hF.T...1...s...D.d..vj....gB4", "...U....qs.e.....U..a..z2.N..xmRQ.5..5.L..w8...Ws.", ".....x.X..AT..U.U.....AT.L...jW..ikI...ao.x..gW.g.", "..s....pf.o..rc..2..V..c4..J.eO5..p.....QT..sBsg..", "2.p....Y..y..9NE1t.5.o...2......K..j.....a.hK4...."};
    int inverseWalkSpeed = 96;
    int inverseDriveSpeed = 14;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 113710;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> cars = {30};
    vector<int> districts = {40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6};
    vector<string> roads = {".............4.z..................................", "......n............................U..............", ".................X......................2.........", "........s...........Z.............................", "..................................n...A...........", ".........l..........................p.............", ".n..........3.....................................", ".............................u...............z....", "...s..................T...........................", ".....l..........................M.................", "........................0............R............", "......................EY..........................", "......3..............................X............", "4.........................L.......................", "..............................c...........g.......", "z...................................P.............", "............................................1.v...", "..X....................u..........................", ".................................t..............I.", ".........................A...............2........", "...Z............................................O.", ".........................B...................X....", "........T..E......................................", "...........Y.....u................................", "..........0......................M................", "...................A.B............................", ".............L.............................j......", "...........................................74.....", "..............................................0...", ".......u.......................................E..", "..............c........................A..........", "..................................7......d........", ".........M................................Z.......", "..................t.....M.........................", "....n..........................7..................", ".U...............................................E", ".....p.........P..................................", "..........R.X.....................................", "....A.............................................", "..............................A..................0", "..2............................................O..", "...................2...........d..................", "..............g.................Z.................", "..........................j7......................", "................1..........4......................", ".......z.............X............................", "................v...........0.....................", ".............................E..........O.........", "..................I.O.............................", "...................................E...0.........."};
    int inverseWalkSpeed = 42;
    int inverseDriveSpeed = 35;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1350475;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> cars = {30};
    vector<int> districts = {40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6, 40, 6};
    vector<string> roads = {".........Z......Z.................................", "....................Z..Z..........................", "............Z.................................Z...", "..............Z.......Z...........................", "..........Z......................Z................", ".......Z.......Z..................................", "..............................Z..................Z", ".....Z.......................................Z....", "..................................Z.Z.............", "Z..............................................Z..", "....Z......................................Z......", "..........................Z.............Z.........", "..Z......................Z........................", "..................Z......................Z........", "...Z.............................Z................", ".....Z.............................Z..............", "Z..................Z..............................", "...........................Z...Z..................", ".............Z...............................Z....", "................Z........Z........................", ".Z..........................................Z.....", ".............................Z.......Z............", "...Z.................................Z............", ".Z..............................Z.................", "............................ZZ....................", "............Z......Z..............................", "...........Z.............................Z........", ".................Z..................Z.............", "........................Z.........................", ".....................Z..Z.........................", "......Z...................................Z.......", ".................Z.................Z..............", ".......................Z........................Z.", "....Z.........Z...................................", "........Z.......................................Z.", "...............Z...............Z..................", "........Z..................Z......................", ".....................ZZ...........................", ".......................................Z..........", "......................................Z..........Z", "...........Z...............................Z......", ".............Z............Z.......................", "..............................Z................Z..", "..........Z.............................Z.........", "....................Z.........................Z...", ".......Z..........Z...............................", "..Z.........................................Z.....", ".........Z................................Z.......", "................................Z.Z...............", "......Z................................Z.........."};
    int inverseWalkSpeed = 12;
    int inverseDriveSpeed = 1;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1238574;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> cars = {13};
    vector<int> districts = {7, 30, 7, 39, 29, 43, 22, 8, 2, 12, 25, 19, 3, 47, 32, 38, 34, 0, 47, 15, 45, 27, 17, 12, 25, 21, 29, 18, 8, 10, 34, 37, 48, 4, 44, 11, 10, 40, 29, 39, 44, 39, 19, 15, 41, 35, 44, 13, 7, 0};
    vector<string> roads = {".aaaxskb86od6icwvkkbhoAv8boaaedhabyefnwptArkgjyf7t", "a.jlHCom29i5atfCzqb7oyEE9jn05ed611BonlytuBhgroI4iC", "aj.6vpucghznhemCDrumnlIyahykgpoqilG5kyFxDJBvgrxo6u", "al6.pjp5ifyof8ivylvmheDrfcvlkmmslmB5evArzFCt9lqq2n", "xHvp.5vlGyNIxgwnvnOElaycEoEIIABOIIxrkGzsCFVHgq2Mr7", "sCpj5.tgAtKDtasovlKAj4zezkCDDxxJDDylhDzrBFREao7Hl8", "koupvt.kofikeq8fa7ng9sfltc8nt9arqndvcaa59ftdl4upnn", "bmc5lgk.kewnd7fqsfukccxlj7rmmjjtnnva8sumuACq4gmr5i", "82giGAok.9l8arfCAqe9owED6ip33fe924ClnnzuwCkipoG7fB", "69hfytfe9.i90l6sqgg6eqvtd9h9d77fbatkdgqkntndieydct", "oizyNKiwli.ciEgxrp8cqHuEspbhpccgkgsDs8ooinb5zmMfvG", "d5noIDkn89c.avdzvo63nAzCfji4ba9673xsnguqqwdasmI4lC", "6ahfxteda0ia.l5rpfg6dquse8gae76gcbskcgpjmtndidxecs", "ite8gaq7rlEvl.msxkCsh5BloeytsrrAtuzadzzrAFJy4miyag", "cfmiws8ff6gd5m.mjai8aqopk8cfk34khfmoacjdhnobi8whgp", "wCCvnofqCsxzrsm.8bDveqaaFkmCGopGEC9Bhpc9hiJtndlEvf", "vzDyvvasAqrvpxj8.cxrfw4iElfzEklCBz2Dji3589CmrctAwn", "kqrlnl7fqgpofkabc.tk3lhet8gquefvsqfr6ie6fkzkf2mtkg", "kbuvOKnueg86gCiDxt.9sHBHlpiahed7c9zztfvtqw6azqO7sI", "b7mmEAgk96c36s8vrk9.jxwygff7d65a96uqjdqmmtg8phE8iy", "honhlj9coeqndhaef3sj.ikeq5ipsefuqpin3ki9inzkb4lsgf", "oylea4scwqHAq5qqwlHxi.AhuhAzzuvFzAzgfCArBGOC7ncDgc", "AEIDyzfxEvuzuBoa4hBwkA.lJqiDJpqGGD1Iol5aa8GqwhwEBq", "vEyrcellDtECslpaieHyehl.EjuEGtuJFEkvfwngqtOyhhaHr5", "89afEztj6dsfeokFEtlgquJE.kva4lkf8bHgouEyBIrposGedB", "bjhcokc7i9pj8e8kl8pf5hqjk.jkmccplkoi3knfmswj98onai", "onyvEC8rphbigycmfgifiAiuvj.mt9aopmgBk2cc7dn7tdDmsw", "a0klIDnm39h4atfCzqa7pzDEakm.6ed520BpokytuAgfroI3iD", "a5gkIDtm3dpbeskGEuhdszJG4mt6.kja37HlqrEyAHmmssJ9hE", "eepmAx9jf7ca7r3okee6euptlc9ek.0hgdnrf8jfgmk6mbAfjt", "ddomBxaje7c96r4plfd5fvqukcadj0.gfcorf9kggnk6ncAeju", "h6qsOJrt9fg6gAkGCv7auFGJfpo5ahg.65EvtlAxwCbgytO1pJ", "a1ilIDqn2bk7cthEBsc9qzGF8lp23gf6.3EopnAvxDiisqJ5iE", "b1lmIDnn4ag3bufCzq96pADEbkm07dc53.BqokxttAffsoJ3jD", "yBGBxydvCtsxszm92fzuiz1kHogBHnoEEB.Gmj3898EoufvCzp", "eo55rlvalkDskaoBDrzqngIvgiBplrrvoqG.kBFxFLGydrtt7r", "fnkekhc8ndsncdahj6tj3fofo3koqfftpomk.mldmrAm87krde", "nlyvGDasng8ggzcpiifdkClwuk2kr89lnkjBm.ffafj4ufFktz", "wyFAzzauzqoupzjc3evqiA5nEncyEjkAAx3Flf.845zkudyzyr", "ptxrsr5mukoqjrd956tm9ragyfctyfgxvt8xdf8.9dzjl5rvqk", "tuDzCB9uwniqmAhh8fqmiBaqBm7uAggwxt9Fma49.5ufvdBuxu", "ABJFFFfACtnwtFni9kwtnG8tIsdAHmnCDA8Lrf5d5.zlAjDADx", "rhBCVRtCknbdnJoJCz6gzOGOrwngmkkbifEGAjzzuz.fGwVczP", "kgvtHEdqid5adybtmka8kCqypj7fm66gifoym4kjflf.uhGfqA", "grg9gal4pizsi4inrfzpb7who9trsmnyssud8uulvAGu.ghwad", "jorlqo4goemmdm8dc2qh4nhhs8dosbctqofr7fd5djwhg.pqki", "yIxq27umGyMIxiwltmOElcwaGoDIJAAOJJvtkFyrBDVGhp.Ms6", "f4oqMHpr7df4eyhEAt78sDEHenm39fe153CtrkzvuAcfwqM.nG", "7i62rln5fcvlcagvwksiggBrdasihjjpijz7dtyqxDzqaksn.o", "tCun78niBtGCsgpfngIyfcq5BiwDEtuJEDprezrkuxPAdi6Go."};
    int inverseWalkSpeed = 55;
    int inverseDriveSpeed = 34;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 55918;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> cars = {13};
    vector<int> districts = {7, 30, 7, 39, 29, 43, 22, 8, 2, 12, 25, 19, 3, 47, 32, 38, 34, 0, 47, 15, 45, 27, 17, 12, 25, 21, 29, 18, 8, 10, 34, 37, 48, 4, 44, 11, 10, 40, 29, 39, 44, 39, 19, 15, 41, 35, 44, 13, 7, 0};
    vector<string> roads = {"..............................D...................", "...................B................x.............", "...........................e......................", "......M.....................................A.....", "........................E.......................o.", "........k.....k.............n...D..A..............", "...M..............................................", "..........h.......................y.........m.....", ".....k.........................m.................j", "...........................x......................", ".......h..............................x...........", "...........................p.........c...0........", "..........................f.......................", ".................s.........pc.....................", ".....k....................t.......................", "..................i...w...........................", "...................c..............................", ".............s........F...........................", "...............i..................................", ".B..............c......n....j.....................", ".....................................h............", "...................................F.......d......", "...............w.F.............................4..", "...................n..............................", "....E....................k....a....B..........t...", "........................k.................n.......", "............f.t...................................", "..e......x.p.p..............................B.....", ".....n.......c.....j..............................", ".........................................k........", "D.......................a.........................", "........m....................................b....", ".....D............................................", "....................................w.............", ".......y..........................................", ".....A...............F..B.........................", ".x...............................w................", "...........c........h.............................", "..........x.......................................", ".............................................k....", ".................................................b", "...........0.................k....................", ".........................n........................", ".....................d............................", "...A...m...................B......................", "...............................b.......k..........", "........................t.........................", "......................4...........................", "....o.............................................", "........j...............................b........."};
    int inverseWalkSpeed = 83;
    int inverseDriveSpeed = 17;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 635154;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> cars = {13};
    vector<int> districts = {7, 30, 7, 39, 29, 43, 22, 8, 2, 12, 25, 19, 3, 47, 32, 38, 34, 0, 47, 15, 45, 27, 17, 12, 25, 21, 29, 18, 8, 10, 34, 37, 48, 4, 44, 11, 10, 40, 29, 39, 44, 39, 19, 15, 41, 35, 44, 13, 7, 0};
    vector<string> roads = {"...............................................f6.", "...................u......................0.......", ".........................4.y......................", ".....o...........................................q", "......5......D....................................", "...o..................S...........................", "....5.....................N.......................", "..........f...................................o...", ".....................e.......................4....", "................q...............3.................", ".......f...............................w..........", ".................................9....J...........", ".................x..........H.....................", "....D........................F....................", "................I....................O............", "....................k..........C..................", ".........q....I...................................", "............x......E..............................", ".........................1.................E......", ".u...............E................................", "...............k............N.....................", "........e.........................................", ".....S..........................................r.", "................................q...........o.....", "......................................M....W......", "..4...............1...............................", "......N...........................W...............", "..y....................................8..........", "............H.......N.............................", ".............F.....................3..............", "..................................i............G..", "...............C.........................7........", ".........3.............q..........................", "...........9............................A.........", "..........................W...i...................", ".............................3..........3.........", ".....................................d...........V", "..............O.....................d.............", "...........J............M.........................", "..........w................8......................", ".................................A.3..............", "...............................7............v.....", ".0...........................................f....", "..................E.....W.........................", ".......................o.................v........", "........4.................................f.......", ".......o..........................................", "f.............................G...................", "6.....................r...........................", "...q................................V............."};
    int inverseWalkSpeed = 43;
    int inverseDriveSpeed = 32;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1263411;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> cars = {13};
    vector<int> districts = {7, 30, 7, 39, 29, 43, 22, 8, 2, 12, 25, 19, 3, 47, 32, 38, 34, 0, 47, 15, 45, 27, 17, 12, 25, 21, 29, 18, 8, 10, 34, 37, 48, 4, 44, 11, 10, 40, 29, 39, 44, 39, 19, 15, 41, 35, 44, 13, 7, 0};
    vector<string> roads = {"...........................................Z.Z....", "...........Z.........................Z............", "................Z........Z........................", "......Z........Z..................................", ".........................ZZ.......................", ".........................................Z.......Z", "...Z...Z..........................................", "......Z....................Z......................", "..........Z............................Z..........", "................Z....................Z............", "........Z.........Z...............................", ".Z....................Z...........................", ".............Z...Z................................", "............Z...............Z.....................", "........................Z......Z..................", "...Z.............................Z................", "..Z......Z........................................", "............Z...........................Z.........", "..........Z.....................................Z.", ".............................ZZ...................", "................................Z.........Z.......", ".........................................Z........", "...........Z............Z.........................", "..........................Z................Z......", "..............Z.......Z...........................", "..Z.Z.............................................", "....Z..................Z..........................", ".......Z.......................................Z..", ".............Z...................................Z", "...................Z..............Z...............", "...................Z........................Z.....", "..............Z................................Z..", "....................Z...............Z.............", "...............Z......................Z...........", ".............................Z..........Z.........", "......................................Z.....Z.....", "................................Z......Z..........", ".Z.......Z........................................", ".................................Z.Z..............", "........Z...........................Z.............", ".................Z................Z...............", ".....Z...............Z............................", "....................Z.........................Z...", "Z......................Z..........................", "..............................Z....Z..............", "Z...............................................Z.", "..........................................Z.......", "...........................Z...Z..................", "..................Z..........................Z....", ".....Z......................Z....................."};
    int inverseWalkSpeed = 88;
    int inverseDriveSpeed = 6;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 4635740;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> cars = {13};
    vector<int> districts = {7, 30, 7, 39, 29, 43, 22, 8, 2, 12, 25, 19, 3, 47, 32, 38, 34, 0, 47, 15, 45, 27, 17, 12, 25, 21, 29, 18, 8, 10, 34, 37, 48, 4, 44, 11, 10, 40, 29, 39, 44, 39, 19, 15, 41, 35, 44, 13, 7, 0};
    vector<string> roads = {".m..f...h.......m3...Dh....j......r...............", "m........a.....iw....y....7.......l...cF.......a.w", ".....s.m.....l.5b..0n..a...f.5..bh.....i.fk...g...", "......8...fn....s...tG...z.rml....u.w..s..........", "f.......t...........q.....o................j...q8.", "..s....O.....gc...G...x......x..g..f.i...s..u....t", "...8..............h..x..c.am.e..8i.h.g.........b..", "..m..O....D........m.B.....8..hs....e..8.p..m.....", "h...t.....9..3..y..n..v.n.4...t...s.C2iDh.......zC", ".a.........gl.k.obm.i..p..........l......ok..n...u", "...f...D9.......pf.f...qd.5va.p..d...a...n..o.....", "...n.....g....f........b1..kp.ic..aq.......i8.o.ae", ".........l....b..m.....f.u.p.g....5..u.......d..b.", "..l..g..3.....l...s...t.kJ..........A3.D..la......", ".....c...k.fbl.f.q.....q....i........o...g.....p..", ".i5...........f.......b..s.k.b.h.......o........ej", "mwbs....yop......j..r..3...................p.prv2.", "3........bf.m.q.j........qfh.......m..g.....m..f.t", ".....Gh..m...s......E.p.....z..FrA...t..mA..yH5...", "..0....mn.f...............i...cia......j.dj..n..ck", "..ntq....i......r.E..lr......sylc.aiul.......5..r.", "Dy.G..xB............l..........8.h..m.m..d...f.E..", "h....x..v....t.b..p.r......ax.....j..xiec.....m...", "..a......pqbf.q.3.........t9....k.......g.p.9t....", "......c.n.d1.k................j.....fo7...........", "...z........uJ.s.q..........O..u..........E.n.....", ".7..o.a.4.5......f.i...t...........7...z...7t.....", "j.fr..m8..vkp..k.h....a9......8..v....s.k.y.......", "...m......ap..i...z...x..O....z..in....J.v........", "..5l.xe.....g..b....s..............v.....f.j.s....", ".......ht.pi.......cy...j..8z.....t.j.o9.......p.v", ".......s...c...h..Fil8...u......k.a..Bi....v.h....", "..b..g8...........rac..k.......k.9.f.g...hc......m", "..h...i...d.......A..h.....vi...9....n...d..g.v...", "rl.u....sl.a5.......a.j.....n.ta......9....od.x..a", ".....fh....q.....m..i.....7..v..f.......kx...o....", "...w...eC....A......um..f.....j......E........u...", ".....ig.2.a.u3o...t.l.x.o......Bgn..E....yp.......", ".c......i........g...mi.7..s..oi..9......f.f......", ".Fis...8D....D.o...j..e...z.J.9.........o.......kx", "........h.........m...cg...k.......k...o..h9....hm", "..f..s.p.on...g...Ad.d......vf..hd.x.yf.........6.", "..k......k...l.....j...p.E.y....c....p..h.......lf", "....j......i.a..p.........7..j.v..o...f.9.........", ".....u.m..o8.....my....9.nt......gd...........v...", ".........n..d...p.Hn5f.t.....s.h...o..........C..g", "..g........o....r.5...m..........vx.u.......vC..t.", ".a..q.b.......p.vf...E........p..................B", "....8...z..ab..e2..cr..................kh6l...t..c", ".w...t..Cu.e...j.t.k..........v.m.a....xm.f..g.Bc."};
    int inverseWalkSpeed = 71;
    int inverseDriveSpeed = 19;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 88966;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> cars = {13};
    vector<int> districts = {7, 30, 7, 39, 29, 43, 22, 8, 2, 12, 25, 19, 3, 47, 32, 38, 34, 0, 47, 15, 45, 27, 17, 12, 25, 21, 29, 18, 8, 10, 34, 37, 48, 4, 44, 11, 10, 40, 29, 39, 44, 39, 19, 15, 41, 35, 44, 13, 7, 0};
    vector<string> roads = {".7EZUeLduucdpy8NtHL4Icwy0kAiNq.j.JSQCdvEuDwdi01edV", "7.TVu0T.Ax69YazuZ.pP4JwIs1Ibmb6.JSAgxduVIyjDKgxiIh", "ET.nzsWs1T6etKqZ.QlV2c.bJ6i1gW.r0y6yeicjfJ95gcX8Q2", "ZVn.F.kLol3LWWpl.i.a7w1gEarJjI7iKfR4aYxnUazYfxRsFX", "UuzF.CLFZJF9ZX8FqHQB61UbcAlU7z4yjyKF7fgnzdpHhjeB2Y", "e0s.C.6kKkOhYJmN2eEgUqhClBgTQ.ZxaRUEhQ.uSuIqvJAVjH", "LTWkL6.k6J7flYKQp89WmIS9BL5VS9sO6N80WqiwhUpIzbpVS5", "d.sLFkk.XYkDD8rU748..n33jiR5QAdIeBKi46oOjnRm6orS..", "uA1oZK6X.i.EsdJpjVeHNnRTROIrfLI2h0tj.CYs3YejS0ViGh", "uxTlJkJYi.QsQQoaUORiJ4e5vxkXHAUHk5xv66WdAcV4iXg4FP", "c663FO7k.Q.tsyA.6fUza19U3v5qTNjkSdj1qksfy8mPdc12.c", "d9eL9hfDEst.PktsR0DbOm42ifDx58P.HKhYJWmrDD3CpVfAtO", "pYtWZYlDsQsP.V.Y9.uluXeZv3LGCfqpkjqHWcohDy6izJMPuk", "yaKWXJY8dQykV.XpV.tAsHMSj9xlxiwDQG2rgyRpQzW06xrud8", "8zqp8mKrJoAt.X.mWJorMRt2NtqlYIXV.1owdczde4BaBydPEt", "NuZlFNQUpa.sYpm.D9AB.hDtnsB2EBK31F6trIFeELZLuiU.dP", "tZ..q2p7jU6R9VWD.TRM0Yz7kNmoH4uGLF9MLCNH1j0MvHeuZ4", "H.QiHe84VOf0..J9T.8Vk6j52..F3eDNOSLt9K8PUfrpaQ2UJN", "Lpl.QE98eRUDutoAR8.AKSelj9CeUV6DKY1gztFwedPx6dZpb1", "4PVaBgW.HizblArBMVA.boBC6kMyepiNoiKXdhaZFW7pAu5Uz4", "I4276Um.NJaOusM.0kKb.b4s0jvc.LEN2ptjjv2zb4NJmPHQhI", "cJcw1qInn41mXHRhY6Sob.kr496PALxTbZQilmlRwASvXl0nUe", "ww.1UhS3Re94eMtDzjeB4k.e9gJB7lGWHvNKc7NMiwpFIT6mLu", "yIbgbC93T5U2ZS2t75lCsre.YcWev40Ho2X3icrCQaREucX47q", "0sJEclBjRv3ivjNnk2j6049Y.NNtC4dQcUW3RZERPCQlR3pWsA", "k16aABLiOxvf39tsN.9kj9gcN.EsE5227An1GCiGAcZPzp8UKN", "AIirlg5RIk5DLxqBm.CMv6JWNE.Seph.2SVe42mQDdK95E.fnp", "ib1JUTV5rXqxGll2oFeycPBetsS.P4t3sMHQ7QVg.UIUFbFuV7", "Nmgj7QSQfHT5CxYEH3Ue.A7vCEeP.1PME7P1FLjzJDjw2CFJMB", "qbWIz.9ALAN8fiIB4eVpLLl445p41.bxSc.oEK3RwR7NrJMfZT", ".6.74ZsdIUjPqwXKuD6iExG0d2htPb.uwP9Qn2xPOjSlAmyCnh", "j.riyxOI2Hk.pDV3GNDNNTWHQ2.3Mxu.9QUUYwYpq7HJAYix5O", ".J0Kja6ehkSHkQ.1LOKo2bHoc72sESw9..Vk741aVjxI84qZK6", "JSyfyRNB05dKjG1FFSYipZv2UASM7cPQ..7pygfxHMZHikxUus", "SA6RKU8Ktxjhq2o69L1KtQNXWnVHP.9UV7.cNU8HvgChoCb8U8", "Qgy4FE0ijv1YHrwtMtgXjiK331eQ1oQUkpc.X1f3KtGOrPJOlX", "Cxea7hW4.6qJWgdrL9zdjlciRG47FEnY7yNX..k90ruWSbCZeb", "ddiYfQq6C6kWcycICKthvm7cZC2QLK2w4gU1..xnvZu5thgI.y", "vucxg.ioYWsmoRzFN8Fa2lNrEimVj3xY1f8fkx.n.Fkoze2Zy7", "EVjnnuwOsdfrhpdeHPwZzRMCRGQgzRPpaxH39nn.iZG..j064w", "uIfUzShj3AyDDQeE1UeFbwiQPAD.JwOqVHvK0v.i.yr4x4cRm8", "DyJaduUnYc8Dyz4LjfdW4AwaCcdUDRj7jMgtrZFZy.TN0t2f5V", "wj9zpIpReVm36WBZ0rP7NSpRQZKIj7SHxZCGuukGrT.unS8ibX", "dD5YHqImj4PCi0aLMpxpJvFElP9UwNlJIHhOW5o.4Nu.nWvBNl", "iKgfhvz6Sidpz6Buva6AmXIuRz5F2rAA8iorStz.x0nn.Mhf9O", "0gcxjJbo0XcVJxyiHQduPlTc3pEbCJmY4kCPbhej4tSWM.Hd.P", "1xXReAprVg1fMrdUe2Z5H06Xp8.FFMyiqxbJCg20c28vhH.tiv", "ei8sBVVSi42APuP.uUpUQnm4WUfuJfCxZU8OZIZ6RfiBfdt.Tr", "dIQF2jS.GF.tudEdZJbzhUL7sKnVMZn5KuUle.y4m5bN9.iT.i", "Vh2XYH5.hPcOk8tP4N14IeuqANp7BThO6s8Xby7w8VXlOPvri."};
    int inverseWalkSpeed = 93;
    int inverseDriveSpeed = 65;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 36650;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> cars = {9};
    vector<int> districts = {35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17};
    vector<string> roads = {".c7nls8dkgxf6gEitt4kugplxaghdkqbjdh1t3g9hczfuo234r", "c.iiywlnqsDofgIqBEfwzjprImqonizntlraDfsll9D4Cua89C", "7i.ofn2hedpicfybll3fndnfp38m6ji3bi99l7f3detkmha9cj", "nio.BjrBjBtDu8tmvDlEpb9kFspEn5ursBqnyrDseapdvmojoB", "lyfB.scmkboontzfh8i7ppxkebbsdwfa9paoejecntwzikooq7", "swnjs.pE8yaGzfbdeqny5c98qphJhefmiGhtjuBpam7se7uqwo", "8l2rcp.fgaqhcizclj5cogpgo08k7mi2ah9bk7c0fhvmmibbdh", "dnhBmEf.wbG07uPsBwhgFuDwBfp4nyyiq2peza8fuqLrCydhdu", "kqejk8gw.qcxrcj4bkfp98c0mg8A8dadax9lfmtg4hfoc3njoi", "gsdBbyabq.ycetIlrkf4xrAqq9hghxobhegipc39qrEvsrhkjj", "xDptoaqGcy.IDoae6jrw3kkbhqhMjo9ngIhybxBrhu8B68zwBi", "foiDoGh0xcI.8wRtCxihGvFyChq3oAzkr2qfBb9gwrNsDAeiev", "6fcunzc7reD8.nLoywbjAnxsBdlajrwfo6m6y4dcoiGjzu595u", "ggf8tfiuctown.rfowdvk39dyjhye3nikuigrkvj76ncpghdit", "EIytzbzPjIaRLr.mhuzGaojiszqUrpkwqRqFmGLAmy3EhgGCIu", "iqbmfdcs4letofm.agdkcah4ic3x4h895u4kcjoc8iipb5line", "tBlvhelBbr6Cyoha.cnp8kmabkcGep2iaDbu4tvlgtfA08wtyb", "tElD8qjwkkjxwwugc.pglrxk4ieBhyahazdv7rojpysFciwvy1", "4f3lin5hffribdzdnp.ipclgt7bl8hl7eic6o6h6dbugoi759m", "kwfE7ycgp4whjvGkpgi.wsBplbglhzmcfjfmmg7bruDzpqmnnf", "uznpp5oF9x3GAkac8lpw.gf8kofKhkamgGgvdvApdq6x85xtyk", "gjdbpcgu8rkvn3oakrcsg.88uhdyb6jfguehnjth29kglbiekp", "ppn9x9pDcAkFx9jhmxlBf8.cyqkHj6nonEmqrtDq9fflnernsv", "lrfkk8gw0qbysdi4akgp88c.lg8B8eaeay9memth5iepb2okpi", "xIpFeqoBmqhCBysib4tlkuyl.nhGlAaleEgz6wtorBqIbjAzC6", "am3sbp0fg9qhdjzcki7bohqgn.8l7ni2ah8ck8c0gjvoliddfg", "gq8pbh8p8hhqlhq3cebgfdk8h8.u2k953q0icgk9bjmqd9jhlc", "homEsJk4AgM3ayUxGBllKyHBGlu.sCDnv3uhFedkztQtHDgkfz", "dn6ndh7n8hjojer4eh8hhbj8l72s.hc46p3ffek89gnnfageif", "kij5wemydxoAr3phpyhzk66eAnkCh.pmnylktozn89leqglhmw", "qziuffiyao9zwnk82almajnaai9Dcp.f7A8s3qsjgrhy38trv9", "bn3ram2idbnkfiw9ih7cmfoel25n4mf.7k6dhae3eisojfedgf", "jtbs9iaqahgrokq5aaefggnaea3v6n77.s1l9ikbenntbamko8", "dliBpGh2xeI26uRuDzijGuEyEhq3pyAks.reCabgvqMqEAchcx", "hr9qah9p9ghqmiq4bdcfgem9g80u3l861r.jbhk9clnrcakima", "1a9notbeliyf6gFkuv6mvhqmzcihfksdlej.v5ibibAdvp022t", "tDlyejkzfpbByrmc47omdnre6kcFft3h9Cbv.sslkvkC4cwuy7", "3f7rju7amcxb4kGjtr6gvjtmw8geeoqaiah5s.c7kgBjup576p", "gsfDeBc8t3B9dvLovoh7AtDttckdkzsekbkisc.bttHwwuhkim", "9l3scp0fg9rgcjAclj6bphqho09k8nj3bg9bl7b.giwnmjcceh", "hldenafu4qhwo7m8gpdrd295rgbz98geevcikktg.chjh8kgln", "c9eatmhqhruri6yitybuq9fiBjjtg9rinqlbvgtic.t6ulc8dw", "zDtpw7vLfE8NGn3ifsuD6kfeqvmQnlhsnMnAkBHwht.AfcCyDr", "f4kdzsmrovBsjcEpAFgzxglpIoqtneyotqrdCjwnj6A.BsebdC", "uCmviemCcs6Dzphb0cop8lnbbldHfq3jbEcv4uwmhufB.8xuzb", "ouhmk7iy3r8Augg58iiq5be2ji9Dag8faAapcpuj8lcs8.qnsh", "2aaooubdnhze5hGlww7mxiroAdjggltemck0w5hckcCexq.31u", "389joqbhjkwi9dCitv5ntenkzdhkehrdkhi2u7kcg8ybun3.5t", "49coqwddojBe5iInyy9nykspCflfimvgocm2y6ieldDdzs15.w", "rCjB7ohuijivutueb1mfkpvi6gczfw9f8xat7pmhnwrCbhutw."};
    int inverseWalkSpeed = 23;
    int inverseDriveSpeed = 13;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 34980;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> cars = {9};
    vector<int> districts = {35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17};
    vector<string> roads = {"...................F..............................", "...................q..............k.......f.......", "..............................................l...", "..............i......f..................i.........", "..........8.......................................", "..........................................l.......", "..................................b...............", "...........C.......................t...........x..", "..................g...............................", "...............................4...........I......", "....8..........l..................................", ".......C..........................D...............", "........................2.........................", "..................................k...............", "...i...................................6..........", "..........l..........w............................", ".................k..............1.................", "................k.............b.....2.............", "........g...................c..u..x...............", "Fq................................................", "..........................l..........k..........pa", "...f...........w..................i...............", "...........................5...j..................", "..................................m...............", "............2.......................g....o........", ".................................................4", "....................l.............................", "......................5...........................", "..................c..............u..b........j....", "...................................7..............", ".................b................................", ".........4........u...j...........................", "................1.................................", "............................u.....................", ".k....b....D.k....x..i.m.........................l", ".......t.....................7....................", ".................2......g...b.....................", "....................k.............................", "........................................C.........", "..............6...................................", "...i..................................C...........", "........................o.........................", ".f...l......................................v.....", ".........I....................................b...", "..........................................v.......", "............................j.....................", "..l........................................b......", ".......x..........................................", "....................p.............................", "....................a....4........l..............."};
    int inverseWalkSpeed = 97;
    int inverseDriveSpeed = 1;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 821866;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> cars = {9};
    vector<int> districts = {35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17};
    vector<string> roads = {"......Fm..........................................", ".......................0............w.............", "............6.........x...........................", ".......S......................k...................", "........................................I......l..", "..............1..............................l....", "F.................................8...............", "m..S..............................................", "..........................d.......4...............", "............n...........q.........................", "................7....................G............", "....................................A............6", "..6......n........................................", "............................1.................C...", ".....1.................................4..........", "..................Y6..............................", "..........7..............v........................", "............................................h.....", "...............Y.....................u............", "...............6................................1.", ".....................Q.......K....................", "....................Q......................l......", "..x....................n..........................", ".0....................n...........................", ".........q................................W.......", "................v........................V........", "........d......................c..................", "........................................y...H.....", ".............1.........................T..........", "....................K...........n.................", "...k.............................................O", "..........................c......9................", ".............................n............g.......", "...............................9......H...........", "......8.4.........................................", "..............................................I...", ".w.........A......................................", "..........G.......u...............................", ".................................H..............b.", "..............4.............T.....................", "....I......................y......................", ".........................V.....................Z..", "........................W.......g.................", ".....................l.......................t....", ".................h.........H......................", ".....l.....................................t......", ".............C.....................I..............", "....l....................................Z........", "...................1..................b...........", "...........6..................O..................."};
    int inverseWalkSpeed = 60;
    int inverseDriveSpeed = 51;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 4106574;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> cars = {9};
    vector<int> districts = {35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17};
    vector<string> roads = {"..........................Z..Z....................", "...........Z.........................Z............", ".......................Z.....................Z....", "...............................Z........Z.........", ".............Z..........Z.........................", "...............Z....Z.............................", ".................Z.............Z..................", ".......................Z......Z...................", "...........Z.......Z..............................", "......................................Z.....Z.....", "................Z.......Z.........................", ".Z......Z.........................................", "..................................Z........Z......", "....Z................Z............................", "............................Z....Z................", ".....Z....................Z.......................", "..........Z...................................Z...", "......Z...........................................", "................................Z.Z...............", "........Z.............Z...........................", ".....Z...................Z........................", ".............Z.................................Z..", "...................Z.............Z................", "..Z....Z..........................................", "....Z.....Z.......................................", "....................Z..........................Z..", "Z..............Z..................................", "..............................Z.............Z.....", "..............Z..................................Z", "Z....................................Z............", ".......Z...................Z......................", "...Z..Z...........................................", "..................Z................Z..............", "..............Z.......Z...........................", "............Z.....Z...............................", "................................Z.................", "......................................Z...Z.......", ".Z...........................Z....................", ".........Z..........................Z.............", ".............................................Z...Z", "...Z............................................Z.", "...........................................Z..Z...", "....................................Z...........Z.", "............Z............................Z........", ".........Z.................Z......................", "..Z....................................Z..........", "................Z........................Z........", ".....................Z...Z........................", "........................................Z.Z.......", "............................Z..........Z.........."};
    int inverseWalkSpeed = 82;
    int inverseDriveSpeed = 21;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 12157084;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> cars = {9};
    vector<int> districts = {35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17};
    vector<string> roads = {"..a.s...i....2.......Gc.....iuAv...s..........k6.A", "......8a6t..k..hg....i..f..nh...........h.......5.", "a..m.e8......8..i.....7....8..p.sg.m..s.....a..8fr", "..m.4.dg...ocrg...6i.mt.7...p.p...qD..a...c.....65", "s..4..a...gk.pfgk...aj....rq.i.......p.t.....spm57", "..e....ok..8....d.....7....67.m....74i.6......3nr.", ".88da..g...b.e9p....i.f....gd....7t..o..a.6...h.7.", ".a.g.og.f..j..pa.a......on.ph.........s...9.f.kt..", "i6...k.f.q7.p.......h..4kh.g....k...l..m.o...nh...", ".t......q...Pt.zdv.......Itfd.k.u..2..L....n......", "....g...7.......k......7pm.cc..l.d..l.on6..o.p.6c.", "...ok8bj.....e......us.7wt..2....iu....c3.ck.f.f.s", ".k.c....pP.....q.x.p6w.....G.......QKG6K...w..G..d", "2.8rp.e..t.e...E..pcu....t..h...AmH.o......w..j...", "...gf.9p..............k...f....fu...........mxp..m", ".h..g.pa.z..qE...7f.m..o.o......4...w..w....qrv.md", ".gi.kd...dk......i.....cx.....8.g....6z.....7.a...", ".......a.v..x..7i.kDt1ypu.H.r..s....t....l..p.t.q.", "...6.........p.f.k..c.n..cr.j.i..3lx.nhr..6.h..m.8", "...i........pc...D.....g...m........v.i...i.n..7cp", "....a.i.h..u6u.m.tc..r..1..z..v1n..J.A..t.iq...q.8", "Gi.mj......sw....1..r.xn..F..........gxr.l....sCo.", "c.7t.7f.......k..yn..x....c.........b..d..h..i7.m.", "........4.77...ocp.g.n...m.......a.m.j.h..5.7i....", ".f.7...ok.pw....xu..1.......xuw.od..F....Eks....c.", ".......nhImt.t.o..c....m...y.tv....J.A...Cirt.y...", "....r....t....f..Hr..Fc....di...Co..o..q..my.vk5m.", ".n8.q6gpgfc.G......mz....yd...p.vn.e.mBd5.ip.h....", "ih.p.7dh.dc2.h...rj.....x.i..c.s...e......c...3.ks", "u...i...................ut..c...c..k.6..i.....e...", "A.pp.m...k......8.i.v...wv.p....ala.i.A.o.........", "v.........l...f..s..1.......s...m9....6....pr..o..", "..s.....ku...Au4g...n...o.Cv.cam....r.....f.......", "..g...7...di.m....3....ad.on..l9...x..f.h.......2a", "...q..t....u.H....l...........a.....t..sxlm..nu...", "s.mD.7...2..Q.....x.J..m.J.eek...x.......c..f.a.yF", ".....4..l.l.Ko.w.t.v..b.F.o...i.r.t..dG..9....4.sz", "....pio.....G...6.n.Ag.j.A.m.6......d.....i...fys.", "..sa...s.Lo.6...z.hi.x.....B..A6.f..G..HvHm...C.d.", "....t6..m.ncK..w..r..rdh..qd......s...H.g.k.95...z", ".h....a...63........t......5.io..hx...vg...n8j9b.s", "........o........l...l..EC........lc9.H.........t.", "...c..69...c......6ii.h5kimic...f.m..imk.....k.j.f", ".........nokww......q...sryp...p........n....fj.k.", "..a....f......mq7phn...7.t.....r...f...98......j.q", "....s...n.pf..xr......ii..vh......n....5j.kf......", "k...p3hkh...Gjpvat...s7..yk.3e....ua4fC.9..j.....w", "6.8.mn.t..6f......m7qC....5....o.....y..b.j.j....t", ".5f65r7...c....m.q.c.om.c.m.k....2.yssd..t.k......", "A.r57......sd.md..8p8.......s....a.Fz..zs.f.q.wt.."};
    int inverseWalkSpeed = 75;
    int inverseDriveSpeed = 35;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 129520;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> cars = {9};
    vector<int> districts = {35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17};
    vector<string> roads = {".w....G....a.d.....R.zW..E......x1.....J.m...9i...", "w....0.k.uv.M...Ow....u...p....YG.l..rDR.W.F.....a", "....7............H....k.k...r....j.fO6u..Ww.Q3..M.", "......x.P..fY...K....W..q...Jg9.r.U.........rN..5.", "..7..w....ed.j.p.R.37...2....o..Xlc.l...C..f.....S", ".0..w.8K....R.q....g.F...P..Qog.D7.....X.R..j...9.", "G..x.8....q..8X.h.........g.MY..P....R............", ".k...K.....N..2.c..G..K.syB...P...ug.PE.S.D.......", "...P............Ru.....o..v..Mg..n.......J.....FZ.", ".u.........1...Yf...3Y.Uh..TdX.......jf..rA.6.....", ".v..e.q.....Q.Rm.K...2q.........WQ....UdO...7O...I", "a..fd..N.1.........mX.........D.U..D...G......G.YG", ".M.Y.R....Q..tp.......z...gm.....e.q.8........4...", "d...j.8.....t.G...B.......aC...5O..7.TR.w.J..2....", ".....qX2..R.pG..5..B........c.t.z.D...........a...", "....p....Ym.....1...M.i69......OB..1J..g...ltaEI..", ".O.K..hcRf....51.....5..J..h...j....m..oXD....nhr.", ".wH.R...u.K...........q..Z3..P.k...T.XZ...z...a...", ".............B.......d...O....zFc.S..l.e..0zjT....", "R...3g.G...m..B.....P..f....r.....K..b0..XbJ...Hb.", "....7....3.X...M...P..ht.Uw8Je........0...c.p...1U", "z..W.F...Y2.....5.d...0.72..3..CL9............MD..", "Wuk....K..q.z..i.q..h0....O.....W....QVL.jU....s..", "........oU.....6...ft.....4.....zD..g.......7..wZ.", "..kq2..s.h.....9J....7....p.D5..mD.eH....85k...E.w", "E....P.y.........ZO.U2....8qX6..H.b........i.HG...", ".p....gBv...ga...3..w.O4p8.....C..6.....D.E.3.A...", ".........T..mC..h...8....q.....J........m..Jd.m...", "..rJ.QM..d....c....rJ3..DX...W.......c..o.........", "...gooY.MX.......P..e...56..W.....kuw....r....p.n.", "...9.g.Pg..D..t...z...............w..........J.y..", ".Y...........5.OjkF..C....CJ.....y..U6P.J.........", "xG.rXDP...WU.OzB..c..LWzmH.......Op..2..b.........", "1.j.l7..n.Q.e........9.DD......yO....1.....f..WW..", ".l.Uc..u......D...SK.....b6..kw.p..8j...9h......1P", "..f....g...Dq7.1.T......e....u....8...v..........i", "..O.l..........Jm......gH....w.U..j..JD...T....kCP", ".r6...RP.j..8T...Xlb..Q.....c..621..J..U.....lK.R.", ".Du....E.fU..R...Z.00.V........P...vD..eb.bk.0cy..", "JR...X....dG...go.e...L..............Ue.....4.....", "....C..S..O..w..X.........Dmo..Jb.9...b..8b.......", "mWW..R..Jr......D..X..j.8....r....h.....8..Y.V..M.", "..w....D.A...J...z0bc.U.5.E.........T.b.b..z..p..Y", ".F..f..........l..zJ....ki.J.....f....k..Yz.......", "..Qr.j...67....t..j.p..7..3d...........4......N...", "9.3N......O..2.a..T......H....J......l0..V........", "i..........G4.aEna...M...GAm.p...W...Kc...p.N....9", "........F......Ih..H.DswE.....y..W..k.y.........g.", "..M5.9..Z..Y....r..b1..Z.....n....1.CR...M.....g..", ".a..S.....IG........U...w.........PiP.....Y...9..."};
    int inverseWalkSpeed = 96;
    int inverseDriveSpeed = 69;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 86688;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> cars = {7};
    vector<int> districts = {35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3};
    vector<string> roads = {"........z................n........................", ".......E....................y.....................", ".................E...................A............", ".................O...O............................", "....................................u.h...........", "........................................k........Z", "...................................j........7.....", ".E................z...............................", "z..............................................b..", "...........................N..........9...........", ".........................E......D.................", ".....................................s........D...", "..................3.............8.................", "................8..................X..............", "...................2.......................t......", "........................j...............A.........", ".............8...........................y........", "..EO..............................................", ".......z....3.....................................", "..............2...........g.......................", ".....................H........o...................", "...O................H.............................", ".......................................D.......A..", "...........................P.o....................", "...............j..................0...............", "n.........E.......................................", "...................g..............Y...............", ".........N.............P..........................", ".y...............................................B", ".......................o......................Z...", "....................o.......................B.....", "...........................................5....L.", "..........D.8.....................................", ".......................................b.0........", "........................0.Y.......................", "......j......X....................................", "....u.....................................E.......", "..A........s......................................", "....h....9........................................", "......................D..........b................", ".....k.........A..................................", "................y................0................", "....................................E.............", "..............t................5..................", "......7.......................B...................", "................................................f.", "...........D.................Z....................", "........b.............A...........................", "...............................L.............f....", ".....Z......................B....................."};
    int inverseWalkSpeed = 96;
    int inverseDriveSpeed = 62;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 898176;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> cars = {7};
    vector<int> districts = {35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3, 35, 3};
    vector<string> roads = {"................Z.............................Z...", "....................Z.....Z.......................", ".....................Z.........Z..................", "..................Z.........................Z.....", "..............................................ZZ..", ".......................Z...............Z..........", ".........Z..............Z.........................", "...........Z......................Z...............", ".........................Z................Z.......", "......Z...Z.......................................", ".........Z..............................Z.........", ".......Z....Z.....................................", "...........Z................Z.....................", "............................Z..Z..................", "......................Z...............Z...........", ".................................Z...........Z....", "Z...............................................Z.", ".......................ZZ.........................", "...Z.............................................Z", "..................................Z.........Z.....", ".Z.............................................Z..", "..Z........................................Z......", "..............Z..........................Z........", ".....Z...........Z................................", "......Z..........Z................................", "........Z.......................Z.................", ".Z..............................Z.................", "....................................Z......Z......", "............ZZ....................................", ".........................................Z......Z.", ".....................................ZZ...........", "..Z..........Z....................................", ".........................ZZ.......................", "...............Z.......................Z..........", ".......Z...........Z..............................", ".....................................Z...........Z", "...........................Z............Z.........", "..............................Z....Z..............", "..............Z...............Z...................", ".....Z...........................Z................", "..........Z.........................Z.............", "......................Z......Z....................", "........Z.........................................", ".....................Z.....Z......................", "...Z...............Z..............................", "...............Z..................................", "Z...Z.............................................", "....Z...............Z.............................", "................Z............Z....................", "..................Z................Z.............."};
    int inverseWalkSpeed = 80;
    int inverseDriveSpeed = 12;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 778720;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> cars = {34, 34};
    vector<int> districts = {41, 37, 44, 0, 8, 34, 31, 4, 38, 3, 23, 16, 41, 15, 31, 23, 31, 28, 35, 49, 27, 43, 49, 12, 38, 6, 29, 40, 25, 47, 44, 21, 35, 44, 8, 32, 30, 32, 0, 5, 34, 45, 14, 8, 27, 1, 33, 49, 16, 8};
    vector<string> roads = {".Fgoyjun2AqBf2pAlkmn8jhfxamjlg4lHFmH8DknllkfksoA9f", "F.pLdncADef4pGtDkkzkxlyxkuOCIxHp1DLAI1khmECpLkD5GA", "gp.ul3endn9l2hkx75mb85dbm5vlrfidqBtBln37aoi1shpkjh", "oLu.yyGaqyBFrlhhrtarusECsr482ejlNn1rfIxAo6Is4q7Fec", "ydly.lhnx1g8jygodematfyw6pBpwmydfpynybhhcrDky7q8wp", "jn3yl.bqgn6k6knA97pca7cao8zpvjmgoExEpl34dsh5wjtjnl", "uceGhb.xsj4cfwrDecwfmdlknkIxDrxkdFGEzba6hzpfFjAbxt", "nAnanqx.oosvjk6cik0hpjzxild387jbCialhyore3Dlbf2ue7", "2Ddqxgso.znzd5pBjinm5hecx8pkog7lFGpIbBilknhdmrpycg", "Aeny1njoz.i9lzhofgncvhAy6rCqwnAfgozlAckjesFmz8r9xq", "qf9Bg64sni.darnA97rbh8ihlfDsymsghDBBue51dvnaAgvcsp", "B4lF8kcvz9d.lBoyggufuhwvfrIwDsCk7yGvD2hfhzBmGfy0Bv", "fp2rj6fjdlal.ggu54i893gek5siocharyqyjn588ll0pfmkhe", "2Ghlykwk5zrBg.nxlkknbjkiwbjgie1kHDjF5ElokinfgrlB6c", "ptkhgnr6phnogn.cdf5bofxvbkk9f8m6whhilrkm9aCii89oia", "ADxhoADcBoAyuxc.rtdoBsKIhxmghkwkF5j9tBxzmfPvljcxrk", "lk7rd9eijf9g5ldr.1h3f1ljebtipcl6muruni683lq6q9lfkf", "kk5te7ckig7g4kft1.j5e0jhgavkqel8mwtwni365no5sbnflg", "mzmampw0nnruik5dhj.goiywhke386jaCiblgxnqd4Ckcf3ue6", "nkbracfhmcbf8nbo35g.j5pnbethocn4mrrqoh9b2kuaq5kelf", "8x8utamp5vhu9boBfeoj.d97u3tmrhdjzGsHgwcfhpd8qprtgi", "jl5sf7djhh8h3jfs10i5d.jhg9tipdk8nwrwmk475lo4qbmgkf", "hydEyclzeAiwgkxKljyp9j.1AcDwBrmrzPDPqxggoz4fAvBvqs", "fxbCwakxcyhveivIjhwn7h1.zaBuzokoyNANowefmx6cytzuoq", "xkms6onix6lfkwbheghbugAz.qwkqiwbnitgwiklcmFlu4kftl", "au5rp8kl8rfr5bkxbake39caq.rjoddewCqDgt9ddmh4okoqff", "mOv4BzIdpCDIsjkmtvetttDBwr.b5ghoQs2wdLyBq9Ht2tbIcd", "jCl8ppx3kqswig9gik3hmiwukjb.65fcEm8pdznqf2Bj8h4wa3", "lIr2wvD8owyDoifhpq8orpBzqo56.bhjKn2rdGuxl3Fp3o5Cb9", "gxfemjr7gnmsce8kce6chdroidg5b.d8zpercvhla8vdde9r92", "4Hijymxj7AsCh1mwlljndkmkwdhfhd.kIChE3FmqlhphfrkB5c", "lpdldgkblfgkak6k68a4j8robeocj8k.rnlokmdf2fwbl6fjha", "H1qNfodCFgh7rHwFmmCmznzynwQEKzIr.FNCK3mjoGDrNmG7IC", "FDBnpEFiGoDyyDh5uwirGwPNiCsmnpCnF.p4zBBCqlUzrliyxp", "mLt1yxGapzBGqjhjrtbrsrDAtq282ehlNp.tdJwzo6Gr2r8Fcb", "HABrnEElIlBvyFi9uwlqHwPNgDwprrEoC4t.CyACqoUAvklvzs", "8IlfypzhbAuDj5ltnngogmqowgdddc3kKzdC.GpsletjbrhD2a", "D1nIblbyBce2nErBiixhwkxwitLzGvFm3BJyG.jgkCBoIiB3Ey", "kk3xh3aoik5h5lkx63n9c4gek9ynuhmdmBwApj.3aqk5vfrgnk", "nh7Ah46rlj1f8omz86qbf7gfldBqxlqfjCzCsg3.ctl8ygueqn", "lmaocdhekedh8k9m35d2h5omcdqflal2oqoqlkac.ht9n6hhjc", "lEo6rsz3nsvzliafln4kplzxmm9238hfGl6oeCqth.Dm7k2yb6", "kCiIDhpDhFnBlnCPqoCudo46FhHBFvpwDUGUtBkltD.kEAFAuw", "fp1sk5fldmam0fiv65ka84fcl4tjpdhbrzrAjo589mk.qgnlhf", "kLs4ywFbmzAGpgilqscqqqAyuo283dflNr2vbIvyn7Eq.r9F9a", "skhq7jjfr8gffr8j9bf5pbvt4kthoer6mlrkrifg6kAgr.ieoh", "oDp7qtA2prvyml9cln3krmBzkob459kfGi8lhBruh2Fn9i.xe8", "A5kF8jbuy9c0kBoxffuetgvufqIwCrBj7yFvD3gehyAlFex.Au", "9GjewnxecxsBh6irklelgkqotfcab95hIxcz2Enqjbuh9oeA.7", "fAhcplt7gqpvecakfg6fifsqlfd392caCpbsayknc6wfah8u7."};
    int inverseWalkSpeed = 25;
    int inverseDriveSpeed = 14;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 30471;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> cars = {34, 34};
    vector<int> districts = {41, 37, 44, 0, 8, 34, 31, 4, 38, 3, 23, 16, 41, 15, 31, 23, 31, 28, 35, 49, 27, 43, 49, 12, 38, 6, 29, 40, 25, 47, 44, 21, 35, 44, 8, 32, 30, 32, 0, 5, 34, 45, 14, 8, 27, 1, 33, 49, 16, 8};
    vector<string> roads = {".......................................q..........", "......................3...........................", ".............c.........9..........................", "........2.........................................", "..........v...........w................z..........", "................i...............................9.", "................................................k.", ".........................................8......o.", "...2........A............m........................", ".......................................y..........", "....v............t...a............................", "................u...............0.................", "........A.....v.................................m.", "..c...............................................", "............v.....................................", "..................C...............................", ".....i.....u.....................u...........o....", "..........t.......................................", "...............C..................z..........h....", "....................b......................f......", "...................b...g...........i............B.", "..........a.................................r.....", ".3..w................................d..........m.", "..9.................g...c......................a..", ".......................c..........................", "........m.........................................", "...................................a..............", "................................................s.", ".....................................C............", "................................C.................", "..........................................a.......", "........................................q.........", "...........0.................C........p.w.........", "................u.................................", "..................z...............................", "....................i.....a.......................", ".....................................w........a...", "......................d.....C.......w.............", "................................p.................", "q...z....y........................................", "...............................qw.................", ".......8..........................................", "..............................a.................r.", "...................f..............................", ".....................r............................", "................o.h...............................", "....................................a.............", ".......................a..........................", ".....9ko....m.......B.m....s..............r......y", "................................................y."};
    int inverseWalkSpeed = 49;
    int inverseDriveSpeed = 13;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 288401;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> cars = {34, 34};
    vector<int> districts = {41, 37, 44, 0, 8, 34, 31, 4, 38, 3, 23, 16, 41, 15, 31, 23, 31, 28, 35, 49, 27, 43, 49, 12, 38, 6, 29, 40, 25, 47, 44, 21, 35, 44, 8, 32, 30, 32, 0, 5, 34, 45, 14, 8, 27, 1, 33, 49, 16, 8};
    vector<string> roads = {"....................U.t...........................", ".....................7.........................a..", ".....n.................................g..........", "...............................x.........t........", "....................W.............................", "..n......................W........................", "..................f........z......................", "...............d...............................h..", "...................R...z..........................", "....................................N.....4.......", ".....................c...........................k", "............................x......j..............", "............................e.................P...", "...................p.......Q......................", "................................Z...............3.", ".......d........................9.................", "......................................D..........2", "....................................g.........W...", "......f......................................y....", "........R....p....................................", "U...W.............................................", ".7........c.......................................", "t........................m........................", "........z................................6........", "..............................f....3..............", ".....W................m...........................", ".......................................p...T......", "......z......Q....................................", "...........xe.....................................", ".....................................N............", "........................f.........S...............", "...x........................................P.....", "..............Z9..................................", ".....................................d.......i....", "..............................S.............d.....", "...........j............3.........................", ".........N.......g................................", ".............................N...d................", "................D..........................T......", "..g.......................p.......................", "..........................................Q.....j.", "...t...................6..........................", ".........4..............................Q.........", "..........................T...........T...........", "...............................P..d...............", "..................y..............i................", "............P....W................................", ".a.....h..........................................", "..............3.........................j.........", "..........k.....2................................."};
    int inverseWalkSpeed = 61;
    int inverseDriveSpeed = 32;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1472898;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> cars = {34, 34};
    vector<int> districts = {41, 37, 44, 0, 8, 34, 31, 4, 38, 3, 23, 16, 41, 15, 31, 23, 31, 28, 35, 49, 27, 43, 49, 12, 38, 6, 29, 40, 25, 47, 44, 21, 35, 44, 8, 32, 30, 32, 0, 5, 34, 45, 14, 8, 27, 1, 33, 49, 16, 8};
    vector<string> roads = {".........Z.................................Z......", "...Z............................Z.................", "...Z...........................Z..................", ".ZZ...............................................", ".....Z............................................", "....Z..................................Z..........", "...............Z.....Z............................", "........Z...............Z.........................", ".......Z.................................Z........", "Z.........................................Z.......", "........................Z.....................Z...", ".........................Z.........Z..............", "..............................Z...Z...............", "..............Z.................Z.................", ".............Z.............................Z......", "......Z.....................................Z.....", "..................Z.........Z.....................", "......................Z........................Z..", "................Z.............Z...................", ".....................Z...............Z............", "...............................Z......Z...........", "......Z............Z..............................", ".................Z.....Z..........................", "......................Z.............Z.............", ".......Z..Z.......................................", "...........Z.........................Z............", "....................................Z...Z.........", "...................................Z.........Z....", "................Z................Z................", "..................................Z...............", "............Z.....Z...............................", "..Z.................Z.............................", ".Z...........Z....................................", "............................Z............Z........", "............Z................Z....................", "...........Z...............Z......................", ".......................Z..Z.......................", "...................Z.....Z........................", "....................Z............................Z", ".....Z..........................................Z.", "..........................Z...............Z.......", "........Z........................Z................", ".........Z..............................Z.........", "Z.............Z...................................", "...............Z..............................Z...", "...........................Z...................Z..", "..........Z.................................Z.....", ".................Z...........................Z....", ".......................................Z.........Z", "......................................Z.........Z."};
    int inverseWalkSpeed = 99;
    int inverseDriveSpeed = 91;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 5789746;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> cars = {34, 34};
    vector<int> districts = {41, 37, 44, 0, 8, 34, 31, 4, 38, 3, 23, 16, 41, 15, 31, 23, 31, 28, 35, 49, 27, 43, 49, 12, 38, 6, 29, 40, 25, 47, 44, 21, 35, 44, 8, 32, 30, 32, 0, 5, 34, 45, 14, 8, 27, 1, 33, 49, 16, 8};
    vector<string> roads = {"...............f........1.........u.......H.a.....", "....................m........3...k..c..E..........", "......i.f.........g...6b................t.........", ".......................af............4.........9..", ".......................eD.............j....e......", "............k..........5..n........r6..u......e...", "..i.................7..a...............l..........", ".........8..........................d.p.b.......i.", "..f......FN.3...q.q..C8......3....................", ".......8F........x........d..........k............", "........N...........k..vuf.......A.t.....i........", "............st......................e..e...f......", ".....k..3..s...............C...........H......6...", "...........t......i.....cyz.....s3..i.............", "..................h.........n.....w.g.............", "f...................fC....k........t..s......D...w", "........q..........t.....l..f..B....m.....8.......", ".........x..............M.....k...............r.7.", "..g.....q....ih..........................5........", "................t...8..f..e...j...................", ".m....7...k....f...8.....7....e.n....f...7m.i.....", "........C......C......uw......uE........o.......8.", "..6.....8............u..A..x..7...r...d.......8...", "..bae5a...v........f.w..ol......e.........k..i.2..", "1..fD.....u..c...M....Ao....Azt.C....g......c...I.", "..........f..y..l...7..l.....x.k..0......c........", ".....n...d...z.k...e..........................v...", "............C.........x.....s............oq.......", "..............n.f.......A..s........b.............", ".3......3...............zx.........t............r.", ".................k.jeu7.t........g................", "................B....E...k...........d.m.8........", ".............s......n..eC...................A..g..", ".k........A..3................g...u......j........", "u.............w.......r..0.......u.....b..p.lx....", ".....r....t....t.............t..............x....m", ".c...6.d...e.ig.m...........b...............k.c.l.", "...4.....k..........f...g......d..........s.e.g...", "....j..p.......s......d....................v......", ".E...ul....eH..................m..b...............", "..t....b.............o..........................m.", "..........i.......5.7....c.o...8.j..............o.", "H...............8...m..k...q......p..s..........d.", "....e......f..........................v......r....", "a...................i...c.......A.lxke...........x", "...............D.......i..........x........r......", ".....e......6....r....8...v.........cg............", "...9...................2........g.................", ".......i.........7...8..I....r......l...mod.......", "...............w...................m........x....."};
    int inverseWalkSpeed = 62;
    int inverseDriveSpeed = 11;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 120154;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> cars = {34, 34};
    vector<int> districts = {41, 37, 44, 0, 8, 34, 31, 4, 38, 3, 23, 16, 41, 15, 31, 23, 31, 28, 35, 49, 27, 43, 49, 12, 38, 6, 29, 40, 25, 47, 44, 21, 35, 44, 8, 32, 30, 32, 0, 5, 34, 45, 14, 8, 27, 1, 33, 49, 16, 8};
    vector<string> roads = {"..q.t.S6...2...m......u.4..v..Dd.....kx.IXl....l..", "...MLTMZ.3......9....mUx......L...zV......5f......", "q..U.n.a......MS...c..7v....73r........K.......aGo", ".MU..n.HJq.h.U.v......2j...D..G....3T...17.q.W....", "tL.....R.ap....F......v.8gQL..z....t..K...C.OR.b..", ".Tnn......Y..R.28B..a....Ss......HC....r.N..W..S..", "SM.............p.......5..cL......3s.....2.....wu.", "6ZaHR.....E..........F4.ht.q.x...q..uO..5P.Lb....X", "...J.....4......A.lT.sI.8....p.......KJ..2.....N.G", ".3.qa...4.......6..Q...G...TBj..A.S.WJ......ZM...7", "....pY.E.......1Ps3...p....xw.Xe..z.....7.....od..", "2..h........M.2.q................nN.BZA.....0..2O.", "...........M....yG...O..B.Sk.5...Er...G......R....", "...U.R.............x......s...I......i.W.w1...o..B", "..M........2...B..c.r9..LD1g...XtW.7zN............", "m.SvF2p...1...B.A.lvG.g.E..8v.qo.....U3..w....4..e", ".9...8..A6Pqy..A.n....r.............AyU...K.uwu..y", ".....B....s.G...n...R...J.zy...j............B.P...", "........l.3...cl.........dHq....iEs.PTJ....R.Y....", "..c.....TQ...x.v.......YQ.........c...HC....QO....", ".....a........rG.R....E..dq....5....i..........NEl", ".m.....Fs...O.9.......5.v..Qd..X.1.DFc...d........", "uU72v..4I.p....gr...E5.....EO.....4b.R....R8..YQ..", ".xvj..5..G.........Y....W....a...CF...P...........", "4...8..h8...B.LE.J.Q.v.W..XE....6...N.J.Ky..m....G", "....gS.t......D...d.d......M..Vf.5..O...b.......s7", "....Qsc.....Ss1..zH.q...X.....a.....Eg..x.Nq.E....", "v..DL.Lq.Tx.k.g8.yq..QE.EM....l.gjbia..Mu.s..MB...", "..7......Bw....v.....dO...........e...x.NU.fz.6.u.", "..3....xpj..5..........a......K.....B......v.I...G", "DLrGz.....X..I.q.........Val.K...........SOYUC...s", "d.........e...Xo.j..5X...f......w....2.c..r......X", ".........A....t...i.....6..g...w.....Z...L.....3..", ".....H.q...nE.W...E..1.C.5.j........M...2....Y...V", ".z...C3..SzNr.....sc..4F...be.............eCu..XH.", ".V.3t.s.......7......Db....i.........8...5....7...", "...T...u.W.B..z.A.P.iF..NOEa.B...M.....x...R.d.S.d", "k......OKJ.Z.iNUy.T..cR...g....2Z..8..H...........", "x...K...J..AG..3U.JH...PJ...x........H.....j..x...", "..K..r.......W.....C.......M...c....x.....B....I..", "I..1...5..7.............KbxuN....2.............nJ.", "X..7.N2P2....w.w.....d..y...U.S.L..5........hrX...", "l5..C........1..K.....R...Ns..Or..e....B...7..J...", ".f.q...L..........R...8...q.fvY...C.R.j...7.......", "....OW.b.Z.0....uB.Q....m...z.U...u......h...0.1.o", "...WR....M..R...w.YO......EM.IC..Y..d....r..0.i.m.", "..........o..o.4uP....Y....B6......7..x..XJ..i.m..", "l.a.bSw.N.d2........N.Q.........3.X.S..In...1.m.au", "..G...u....O........E....s..u.....H.....J....m.a.P", "..o....XG7...B.ey...l...G7...GsX.V..d.......o..uP."};
    int inverseWalkSpeed = 85;
    int inverseDriveSpeed = 5;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 78600;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> cars = {25, 46};
    vector<int> districts = {16, 28, 4, 26, 32, 15, 41, 7, 37, 3, 22, 27, 19, 17, 49, 41, 19, 47, 40, 4, 10, 7, 9, 44, 40, 45, 47, 8, 29, 8, 37, 12, 15, 41, 0, 3, 0, 47, 20, 24, 9, 30, 44, 6, 30, 33, 5, 18, 8, 7};
    vector<string> roads = {".uf3jn8wscttsasdCnp7dByovghmFddqfnoIn7kDBBcmvhfbn2", "u.Itaiu3yzBjinCBdsophCxrcxIlEokaH86egnfDyqzizektjx", "fI.exDcLq9qAzqo7NptnqAyDEf2CDknF1zCUDntCBG8Ctxofuc", "3te.ip5wo9qqpcpaBkm9cyuqtcfoBabrdmoGo8hAxy8oric7k3", "jaxi.fkdsovigdvrklje6ytmenxgBeaaw55occ8zwqpeu6bjem", "niDpf.thGyJxwcJAwAzfjOI8tzF2Qrn7Dkcw1goPLFy0J8putq", "8uc5kt.xj4knnhj6zfiectpvr7dtw7atbmqGscgvtu4smla2h8", "w3Lwdhx.CCFnmoGFgwsqkGBqgALkIrn9Kc7efojHDuChDfownz", "syqosGjC.h2ggy3jv59wm98LoboHcfiDopxEFtjbahiG2xgger", "cz99oy4Ch.ippmg2DfjjhrpAu59yvaey8quKxhktsw0xkqe5ka", "tBqqvJkF2i.jjA1jy8cyp99OqcoKcilGosAHHvmbbkjI3Ajiht", "tjAqixnngpj.0tkseb6tgicE7kzzkffryclnvp9ie8qwgodl5u", "sizpgwnmgpj0.slsec7rfjeD6kzxlfeqybkmto8kg9qvhnck4u", "anqcdchoymAts.znyss2cGCdsosbJhfgqjgCc4jIFCmbA8hiod", "sCopvJjG3g1klz.iz9dxpbbNsbmKehlGmtBIHumddmhI5Ajhir", "dB7arA6Fj2jssni.FimkktrBx76zwdgB5txNzjmvuy1zmsh8nb", "CdNBkwzgvDyeeyzF.qlzovqF7yNzwrpoLfj8uwivrgDwvqoxiF", "nspklAfw5f8bcs9iq.4qgd9Gi9oBgacxnjrzyncfdggz8rac8o", "potmjzis9jc67sdml4.rfe9FeetAhbcusgouxoafcbkyapaf4q", "7pn9efeqwjytr2xkzqr.bFAgslpeIfdinjiDf2iGDBjeyaggna", "dhqc6jckmhpgfcpkogfb.upoggqkx73hp9cuh86wsphipa5bbg", "BCAyyOtG9r9ijGbtvdeFu.4UpmyP2orJyuDEMCp13esN6EoqjB", "yxyutIpB8p9ceCbrq99Ap4.PkjxK7kmEwpxzGxk52aqI5zkney", "orDqm8vqLAOEDdNBFGFgoUP.BCF5WvsgDslFaiuVSNA8OfuxAq", "vcEtetrgouq76ssx7iesgpkB.qEvrjhmD8ggqpaqmdvsolgpax", "gxfcnz7Ab5ckkob7y9elgmjCq.ezp8cydntGyjgomq6yfqb5ff", "hI2fxFdLo9ozzsm6NotpqyxFEe.EBknH1ADUEotAzF8Eryofue", "mlCog2tkHyKzxbKzzBAekPK5vzE.RroaCmfz4fpQMHx2Kaqtvp", "FEDBBQwIcvcklJewwghIx27WrpBR.ruMBxFFOFr04fwP9HrtmE", "dokaer7rfaiffhhdrabf7okvj8krr.3pjfkypc8qnnbqii359e", "dknbananielfeflgpccd3rmshcnou3.lmbgwla6spnemle189f", "qaFra7t9DyGrqgGBoxuihJEgmyHaMpl.Fe5o5ikKGzz7F8mtpt", "fH1dwDbKo8oyyqm5LnsnpywDDd1CBjmF.yBSCmsAzE7Crwmdsc", "n8zm5kmcpqscbjttfjgj9ups8nAmxfbey.8kih6vrkqjrcbkaq", "o6Co5cq7xuAlkgBxjroicDxlgtDfFkg5B8.lageEAtvcz7hpjr", "IeUGowGeEKHnmCIN8zuDuEzFgGUzFywoSkl.uBpEApLwEsvEqK", "ngDoc1sfFxHvtcHzuyxfhMGaqyE4Opl5Ciau.fmNJDx1H7nsrq", "7nn8cgcothvpo4ujwno28CxipjofFcaimhgBf.fDAyhfw9cdka", "kfth8ogjjkm98jmmicai6pkuagtpr86ks6epmf.qmiknlf5e5l", "DDCAzPvHbtbikIdvvffGw15VqoAQ0qsKAvEENDq.3euO8GqskD", "ByBxwLtDasbegFdurdcDs32SmmzM4npGzrAAJAm3.atK8CnqhB", "BqGyqFuuhwk89CmyggbBpeaNdqFHfnnzEktpDyiea.xFgxlrdC", "cz88py4Ci0jqqmh1DgkjhsqAv68xwbez7qvLxhkutx.xlqf5la", "miCoe0shGxIwvbIzwzyeiNI8syE2Pqm7Cjcw1fnOKFx.I8ottp", "vztruJmD2k3ghA5mv8ayp65OofrK9ilFrrzEHwl88glI.zjjfu", "hexi68lfxqAon8AsqrpaaEzflqyaHie8wc7s79fGCxq8z.glkk", "fkocbpaogejdchjhoaag5okugboqr31mmbhvnc5qnlfojg.87g", "btf7ju2wg5ilkih8xcfgbqnxp5ftt58tdkpEsdesqr5tjl8.fa", "njukethnekh54oini84nbjeAafuvm99psajqrk5khdltfk7f.o", "2xc3mq8zratuudrbFoqagByqxfepEeftcqrKqalDBCapukgao."};
    int inverseWalkSpeed = 54;
    int inverseDriveSpeed = 11;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 63774;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> cars = {25, 46};
    vector<int> districts = {16, 28, 4, 26, 32, 15, 41, 7, 37, 3, 22, 27, 19, 17, 49, 41, 19, 47, 40, 4, 10, 7, 9, 44, 40, 45, 47, 8, 29, 8, 37, 12, 15, 41, 0, 3, 0, 47, 20, 24, 9, 30, 44, 6, 30, 33, 5, 18, 8, 7};
    vector<string> roads = {"..........e...............x.Ag............9.......", "............................I.....................", "....g...........j............................d....", ".................................q................", "..g...............................................", "........................................J......3..", "...............................................b..", "..............j...................................", "................................o.................", "...........................z..F...................", "e.................................................", "....................................r.....w.......", ".....................j..........................c.", ".........................b......f.................", ".......j........................u.................", "...........................................y.d....", "..j..............r.........g..........s...d.......", "................r.................................", "..................................g.4.............", "................................................v.", "..............................k...................", "............j.............................6.......", "...................................y..............", ".................................A...............l", "......................................I...........", ".............b.................................O..", "x....................................r............", ".........z......g.................................", "AI.......................................B..M.....", "g.................................................", ".........F..........k.............................", "....................................r.............", "........o....fu...........................u.......", "...q...................A..............C...........", "..................g...............................", "......................y.............l.............", "...........r......4............r...l..............", "..........................r...................i...", "................s.......I........C................", ".........................................k........", ".....J............................................", "............................B..........k..........", "9..........w....d....6..........u.................", "...............y..................................", "............................M.....................", "..d............d..................................", ".....................................i............", ".....3b..................O........................", "............c......v..............................", ".......................l.........................."};
    int inverseWalkSpeed = 84;
    int inverseDriveSpeed = 11;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 557923;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> cars = {25, 46};
    vector<int> districts = {16, 28, 4, 26, 32, 15, 41, 7, 37, 3, 22, 27, 19, 17, 49, 41, 19, 47, 40, 4, 10, 7, 9, 44, 40, 45, 47, 8, 29, 8, 37, 12, 15, 41, 0, 3, 0, 47, 20, 24, 9, 30, 44, 6, 30, 33, 5, 18, 8, 7};
    vector<string> roads = {".....................6............................", ".................Y...............b................", "................m..................e..............", "..............................8......C............", ".............................i................Y...", "..........w....................B..................", "........................U...........3.............", "..........q......................v................", "..............W........n..........................", "............................................i..k..", ".....w.q..........................................", "............................K...............d.....", "...............I....c.............................", ".....................T..........................t.", "........W.......................b.................", "............I.....l...............................", "..m................8..............................", ".Y.......................................o........", "...............l.......n..........................", "................8...............................u.", "............c................z....................", "6............T....................................", ".........................V..............6.........", "........n.........n...............................", "......U...................o.......................", "......................V........................a..", "........................o....................4....", "..............................V..........0........", "...........K..........................V...........", "....i...............z.............................", "...8.......................V......................", ".....B.....................................4......", "..............b.......................i...........", ".b.....v..........................................", ".......................................W.........3", "..e.......................................t.......", "......3..........................................f", "...C......................................W.......", "............................V...i.................", "..................................W........Z......", "......................6......................9....", ".................o.........0......................", "...................................t.W............", "...............................4.......Z..........", ".........i.d......................................", "..........................4.............9.........", "....Y.............................................", ".........k...............a........................", ".............t.....u..............................", "..................................3.f............."};
    int inverseWalkSpeed = 39;
    int inverseDriveSpeed = 27;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 719823;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> cars = {25, 46};
    vector<int> districts = {16, 28, 4, 26, 32, 15, 41, 7, 37, 3, 22, 27, 19, 17, 49, 41, 19, 47, 40, 4, 10, 7, 9, 44, 40, 45, 47, 8, 29, 8, 37, 12, 15, 41, 0, 3, 0, 47, 20, 24, 9, 30, 44, 6, 30, 33, 5, 18, 8, 7};
    vector<string> roads = {"........Z.........................................", ".....Z..............................Z.............", "...Z...............................Z..............", "..Z..........................Z....................", "...................Z...Z..........................", ".Z...........................Z....................", "...........Z...................Z..................", "........................Z.Z.......................", "Z....................................Z............", "...........Z.................................Z....", "...............Z.....................Z............", "......Z..Z........................................", "...............................Z.Z................", ".................Z........................Z.......", "..............................Z.......Z...........", "..........Z..............Z........................", "........................................Z......Z..", ".............Z.......Z............................", "........................Z........................Z", "....Z.......................Z.....................", "..................................Z..........Z....", ".................Z.........................Z......", "..............................Z...............Z...", "....Z...............................Z.............", ".......Z..........Z...............................", "...............Z.......................Z..........", ".......Z........................................Z.", "............................Z.....Z...............", "...................Z.......Z......................", "...Z.Z............................................", "..............Z.......Z...........................", "......Z.....Z.....................................", ".........................................Z.....Z..", "............Z..........................Z..........", "....................Z......Z......................", "..Z.......................................Z.......", ".Z.....................Z..........................", "........Z.Z.......................................", "..............Z.............................Z.....", ".........................Z.......Z................", "................Z...........................Z.....", "................................Z................Z", ".............Z.....................Z..............", ".....................Z..........................Z.", "......................................Z.Z.........", ".........Z..........Z.............................", "......................Z...........................", "................Z...............Z.................", "..........................Z................Z......", "..................Z......................Z........"};
    int inverseWalkSpeed = 76;
    int inverseDriveSpeed = 44;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 5115992;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> cars = {25, 46};
    vector<int> districts = {16, 28, 4, 26, 32, 15, 41, 7, 37, 3, 22, 27, 19, 17, 49, 41, 19, 47, 40, 4, 10, 7, 9, 44, 40, 45, 47, 8, 29, 8, 37, 12, 15, 41, 0, 3, 0, 47, 20, 24, 9, 30, 44, 6, 30, 33, 5, 18, 8, 7};
    vector<string> roads = {".l.Cw..Gsi.Bxxp...pH..ean9hp.q.mo..o....j...k.keo.", "l..iaf..b.kidn.7.i7pg3.ajl3e.5.l.n.b5qbj...j4.2.mf", "...l9...i8.bh.8gmefhm5l..mb7n.lulvok..6ckogh..5..6", "Cil...Ekaug.4AvkGAcr..FrAEku2gGqfv.fkxs...aC..kvDq", "wa9..o...i.a.nih...hrb.l.ve.d4vth....zglk.b.doblrd", ".f..o.c.r6wquk.i.6nve.5.a6ec.j6..r.p.v9e..p3.cd.bi", "...E.c.u..wpAa9tb.vq..co.....obF.EE...b6xH.9sokd..", "G..k..u..p35.....t.7.lBw.D.kj...uIuthLmnxlnxp..tu.", "sbia.r...omo.zr9zu3vl.xh.vc.d..g4k4.g..v9d1u7keoyp", "i.8ui6.po..j..6hd5joh8cd7d...dc.ousn9x29.w.8gf83a.", ".k.g.ww3m..7gp..D.l.BkC.t.omf...rGrqg.n.uhky.y.twg", "Bib.aqp5oj7..gfq.n.6yg.s.ymflcwDsF.rcIghunmrm.hno8", "xdh4.uA...g..x.fC.8.rg..wz.q.bBnb.abguo.g7..cpgq.n", "xn.Anka.z.pgx.8....gxkmt.qq8Bl.J.JEAhMd.A.wit..ia9", "p.8vi.9.r6.f.8...7nipb.k5j..weg.t.w.aE.3rxp..mca8.", ".7gkhit.9h.qf....n6xcb.7p.4m..pd7ec6.i.r.m9m...g.n", "..mG..b.zdD.C....8.A.k1j.6.h.r..yxD..B..uJx4r.laan", ".ieA.6.tu5.n..7n8.qq.e8.3ci8B.8...ytf..7.C.4mif64e", "p7fc.nv.3jl.8.n6.q.t.btd.r8mf9..5..5cnjr8f2q3ga.ul", "Hphrhvq7vo.6.gixAqt.En.y.Ctirjz.zMAy.PljBtt.tBns.c", ".gm.re..lhByrxpc...E..h5od.o.mig..n.lgkr.z.hf2geqs", ".35.b..l.8kggkbbkebn...bfj5.n6..g..f.t7ffodf8d.9.c", "e.lF.5cBxcC..m..18t.h....4..Hp.yw.B.l.e.s.w.pgk9bn", "aa.rl.owhd.s.tk7j.dy5b..le6ktgig.fjd...n.ug.92.b.n", "nj.A.a...7t.w.5p.3..of.l..k.Bkb...Av..74u.t8ol.92.", "9lmEv6.Dvd.yzqj.6crCdj4e..j.G..utrytmugkpHu7ncj.gp", "h3bkee..c.om.q.4.i8t.5.6kj.g..l.bjf.9.dl9.ai395.ni", "pe7u.c.k..mfq8.mh8mio..k..g...g.s.vr9D34qwo.k..a.5", "..n2d..jd.fl.Bw..Bfr.nHtBG...hI.iyfilAu.n1...xmxFr", "q5.g4jo..d.cble.r.9jm6pgk...h.qqgsif.vcihiam.j5fn.", "..lGv6b..c.wB.gp.8.zi..ib.lgIq.zxwC.mAf.tIx3...ab.", "mluqt.F.g..DnJ.d....g.yg.u...qz.b5.br6vE8..xghns.B", "o.lfh..u4orsb.t7y.5z.gw..tbsigxb...0...x..6u..fnzs", ".nvv.rEIkuGF.J.ex..M...f.rj.ysw5..i...vDbxlvifor.C", "..o...Eu4sr.aEwcDy.An.BjAyfvfiC..i.5l.sA..7ybmjsDu", "obkf.p.t.nqrbA.6.t5y.f.dvt.rif.b0.5.h..w4.5t6..m..", ".5.k...hg9gcgha..fc.l.l..m99l.mr..lh.w7ei..hb.3ci8", ".q.xzv.L.x.IuMEiB.nPgt...u.DAvA6....w...ez...i.uHF", ".b6sg9bm.2ngod....jlk7e.7gd3ucfv.vs.7..8.vlag.86a8", ".jc.le6nv9.h..3r.7rjrf.n4kl4.i.ExDAwe.8..Btcoogc.8", "j.k.k.xx9.uugAr.u.8B.fs.up9qnht8.b.4ie....a.7c.kw.", "..o...Hldwhn7.xmJCftzo.u.H.w1iI..x...zvB....jxn..t", "..gabp.n1.km.wp9x.2t.dwgtuao.ax.6l75..lta..t6j.m.n", ".jhC.39xu8yr.i.m44q.hf..87i..m3xuvyth.ac..t..fg68i", "k4..d.sp7g.mct..rm3tf8p9on3k...g.ib6b.go7j6..c.gr.", "....oco.kfy.p.m..igB2dg2lc9.xj.h.fm..i.ocxjfc...op", "k25kbdk.e8.hg.c.lfang.k..j5.m5.nfoj.3.8g.n.g...ajc", "e..vl.dto3tnqiaga6.se99b9..axfasnrsmcu6ck.m6g.a.cf", "om.Drb.uyawo.a8.a4u.q.b.2gn.Fnb.z.D.iHa.w..8rojc.f", ".f6qdi..p.g8n9.nnelcscnn.pi5r..BsCu.8F88.tni.pcff."};
    int inverseWalkSpeed = 86;
    int inverseDriveSpeed = 63;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 94418;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> cars = {25, 46};
    vector<int> districts = {16, 28, 4, 26, 32, 15, 41, 7, 37, 3, 22, 27, 19, 17, 49, 41, 19, 47, 40, 4, 10, 7, 9, 44, 40, 45, 47, 8, 29, 8, 37, 12, 15, 41, 0, 3, 0, 47, 20, 24, 9, 30, 44, 6, 30, 33, 5, 18, 8, 7};
    vector<string> roads = {".4..zYV4Fmn5yJk.gHc.q.UZaf82Vmrx.Bx6.6PCC1Tn8T6qM2", "4.Y2k.NedRtd1vTFa.d5iguUrDgKLRxg..Z.a9eBljrsD0XM..", ".Y.yjRoGIjTrXgco.o.cNK7pyn.O.jLD.oxn.WM.9RQIA.11w.", ".2y.KgOHKh5SD1q77.8W.3xDPbD5OTq.huX3.2OdP1T9XNUoqm", "zkjK.UEZhQp0.J4J.E.RUM7VPhyn.z.kn4RFG..pqRD4.u.Qo6", "Y.RgU.418zzI.trZ1mI46EHUirBqzeMt0UqzncO5m..Ln.UYFq", "VNoOE4...I1kGq7uoCg.ataE.4wdzm.YhRgYX.EWrAKAa0..Xu", "4eGHZ1..KeJ6HugQ16.JJC.b2wEzmipckphxl1YaCdjXKa2YmX", "FdIKh8.K.gohErQA.NMF.0VOVU.JQXRJ.gv9.wMECVNhh9gvQP", "mRjhQzIeg.XTHoF99JQaKXdyPzw..9lBlMjFQSBQzr25v.U7hK", "ntT5pz1JoX.xTz6i.sHww3HJpydUFJo.OGohlzqhNXF..PC6.L", "5drS0Ik6hTx.5JcNhVk9rc.X6aC9.wbXsYEvNaja8ZMBZGbmCW", "y1XD..GHEHT5.8ewfjduVoIF7TWeOzgU.7gIyV.pOI3z8c2t6f", "Jvg1JtqurozJ8.MP.worUU.1jP5Nw9TZ.TnWOR.VR5QxORlEaG", "kTcq4r7gQF6ceM.u90RK.aw.vC3dh.P5ZVooNUdEAP.IS8ClWw", ".Fo7JZuQA9iNwPu.GvUmvy1YfpG8GtygBB0tbjKq3YslK.3..d", "ga.7.1o1.9.hf.9G.iWQQw04zoAQgW5.tezQVMLnjdGGSfZx7n", "H.o.EmC6NJsVjw0vi.vbAbfaPW3AFe.eKXkxQIZ6dAg.v3zpO4", "cd.8.Ig.MQHkdoRUWv..vxW.MBhx2CtjDzS.j4ibP3q8iKrEZx", ".5cWR4.JFaw9urKmQb..WXdK.EIWG3yjg5k.x96hkXNltTf10z", "qiN.U6aJ.KwrVU.vQAvW.6Zy.9iF.Jo.D5ZPxl4vQ10GiCurU.", ".gK3MEtC0X3coUaywbxX6.Q.c6g.NjC5.LOgtHi.xrLoOQ0QU2", "Uu7x7Ha.VdH.I.w10fWdZQ.1Ao1O.1pv..VPas9fsw.R3VAxTx", "ZUpDVUEbOyJXF1.Y4a.Ky.1.3CFD.q8jH4A.ZmMpj7xxUeRVNv", "aryPPi.2VPp67jvfzPM..cA3.mRr3Lgi.VzzxWiG5H9rxhdLTa", "fDnbhr4wUzyaTPCpoWBE96oCm.zfMoXez9WyQii23oUigYy.Pb", "8g.DyBwE.wdCW53GA3hIig1FRz.FF.t3tdxiOGuC.QrrT.PE.N", "2KO5nqdzJ.U9eNd8QAxWF.ODrfF.xucte5.9i0YVS.yzgZsZRX", "VL.O.zzmQ.F.OwhGgF2G.N..3MFx.x.0V..FC.oitgtC.VaU.N", "mRjTzemiX9Jwz9.tWeC3Jj1qLo.ux.HpWpg8n.OMaKt5.lZ4BL", "rxLq.M.pRlobgTPy5.tyoCp8gXtc.H.i.8DDSFrjYMJnSCCggN", "xgD.ktYcJB.XUZ5g.ejj.5vjie3t0pi.nC0OIcpOko.K.gwhYv", "...hn0hk.lOs..ZBtKDgD..H.zteVW.n.tW2yKWMsF63zXNXAf", "B.ou4URpgMGY7TVBeXz55L.4V9d5.p8Ct.jsG8G.Gwfv.p.rin", "xZxXRqghvjoEgno0zkSkZOVAzWx..gD0Wj.pcPZPcXRJZLxiND", "6.n3FzYx9FhvIWotQx..PgP.zyi9F8DO2sp.c0fgzCCwGYLxuN", ".a..GnXl.QlNyONbVQjxxtaZxQOiCnSIyGcc.CL0N08Ge46S6j", "69W2.c.1wSzaVRUjMI49lHsmWiG0..FcK8P0C.I.GGGCDpt.Vc", "PeMO.OEYMBqj..dKLZi64i9MiiuYoOrpWGZfLI.1d7mTJiCog.", "CB.dp5WaEQhapVEqn6bhv.fpG2CViMjOM.Pg0.1.9.NwWJMe.I", "Cl9PqmrCCzN8ORA3jdPkQxsj53.StaYksGczNGd9.6kJZA.y5E", "1jR1R.AdVrXZI5PYdA3X1rw7HoQ.gKMoFwXC0G7.6.LLBsHVwg", "TrQTD.KjN2FM3Q.sGgqN0L.x9UryttJ.6fRC8GmNkL.jQIXCud", "nsI94LAXh5.BzxIlG.8lGoRxrirzC5nK3vJwGCTwJLj..sMSGU", "8DAX.naKhv.Z8OSKSvitiO3UxgTg..S.z.ZGeDJWZBQ..Dw.nx", "T0.Nu.0a9.PGcR8.f3KTCQVehY.ZVlCgXpLY4piJAsIsD.bkjd", "6X1U.U.2gUCb2lC3Zzrfu0ARdyPsaZCwN.xL6tCM.HXMwb.EBv", "qM1oQY.Yv76mtEl.xpE1rQxVL.EZU4ghXrixS.oeyVCS.kE.ow", "M.wqoFXmQh.C6aW.7OZ0UUTNTP.R.BgYAiNu6Vg.5wuGnjBo.J", "2..m6quXPKLWfGwdn4xz.2xvabNXNLNvfnDNjc.IEgdUxdvwJ."};
    int inverseWalkSpeed = 74;
    int inverseDriveSpeed = 19;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 30792;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> cars = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49};
    vector<int> districts = {49, 33, 49, 23, 49, 9, 49, 14, 49, 35, 49, 10, 49, 13, 49, 39, 49, 3, 49, 0, 49, 24, 49, 22, 49, 3, 49, 2, 49, 19, 49, 40, 49, 45, 49, 39, 49, 9, 49, 43, 49, 28, 49, 35, 49, 30, 49, 39, 49, 32};
    vector<string> roads = {".q9s86huAl8caovmxjzoldiertof7llqfha8rhl5zgegreo7fu", "q.zrrlydlfxBhygdl7i8dcegFondyk8Fstks7kakgozdki6jc3", "9z.t9gcAFr11klFsBtEywmoplwqm2pskfgfgyrsgEp7rujyfqD", "srt.ktigfcrttaHebshyAnexi44iu7jjdciAkChsiEmw7exmts", "8r9k.c8qvh7affAirmusrfekimhdafji686hpojcvo7ml9s8ku", "6lgtc.mryjfi3rokvdwhf8g8wtocelhvika7nbi0wbkaqei69p", "hyci8m.uxlacp9JntuxBAnku9mhkehq866epvxplyy3vmfAhtB", "udAgqru.78xBpqu77i5mqhbqycdeAc9ynnkz5v7q4zwo8gkllc", "AlFfvyx7.eCGwqCd3q2uyphyyaelFfhzqqpGdDfx4HAw9lsstj", "lfrchjl8e.osiiu1bfdlnb3lqa77r56refbs9q4idtnk67kdhg", "8x1r7faxCo.3jkEqzrCxukmnkuok3mqjcedgwqqeCp6pshxdoB", "cB1taicBGs3.mlHuCvGAyoprkxro4qujfhhiAtuiGr7twlBhsF", "ahktf3ppwijm.tkiu9udb6f4ytobilfylmbak8g3tan6pee85l", "oylafr9qqiklt.LlmwrCDpjy7fclodo886hxsDnqtEdyggBlwA", "vgFHAoJuCuEHkL.sCez88lsgSECpDznSDFusofppxjIdAv9rfi", "mdseikn7d1quils.beckmb3ltb97s74tghcs7q2jctpj78iege", "xlBbrvt73bzCumCb.p5uxnfxu6ajCcfvmmmEdCev7Fwv6ispsk", "j7tsmduiqfrv9weep.o576d8Dqnark9Doqfkcdbdmhu5mf5d3c", "ziEhuwx52dCGurzc5o.rvngwzcfkFffAqqpFaBdw1FAuakprrg", "o8yyshBmulxAdC8ku5r.4cjaJwtgwqfJvwmngcgiqhA7sm1j8c", "ldwArfAqynuybD8mx7v4.cl6JyvhtshJvwljk8jfucy4um6i6h", "dcmnf8nhpbko6plbn6ncc.89wmi4lf7whj8hde98mhn8i9c65g", "ieoeegkbh3mpfjs3fdgjl8.iqd93o65qde8oan4fgqlh94iaeg", "egpxk8uqylnr4yglx8wa69i.DwsempgDprgcl4i8v8s2sibc4l", "rFliiw9yyqkky7StuDzJJwqD.nksolw0dcnAAHvvBIdEpmIqCH", "tow4mtmcaauxtfEb6qcwymdwn.5hx7goggjBgBesdEqv3fumso", "onq4hohde7orocC9anftvi9sk5.dr2elbadwgxcngzlr49shoo", "fdmidckel7koblp7jakgh43eshd.ma5sef6kbj6bjmlde5f7ag", "7y2uaeeAFr34ioDsCrFwtlomoxrm.psngifdyoseFmapvjxeoC", "lkp7flhcf5mqldz7ckfqsf6pl72ap.blaabteuakgwko57pelm", "l8sjjhq9h6qufon4f9ffh75gwge5sb.wjkcp5l1gepqfc9ddcb", "qFkjiv8yzrjjy8StvDAJJwqD0olsnlw.dcmzBHvuCHcEpmIqBI", "fsfd6i6nqecfl8Dgmoqvvhdpdgbegajd.18oouihrv8qg8ucnu", "htgc8k6nqfehm6Fhmqqwwjercgafiakc1.aqowjjrx9sfawepv", "akfi6aekpbdhbhucmfpml88gnjd6fbcm8a.hilc9omegg3l3en", "8sgAh7pzGsgiaxssEkFnjhocABwkdtpzoqh.vcr8E9mfyloegx", "r7ykpnv5d9wAkso7dcagkdalAggbye5Booiv.q5m9uwjdfejg7", "hkrCobxvDqqt8DfqCdBc8en4HBxjoulHuwlcq.ncA3v6yneh9o", "lashjip7f4qugnp2ebdgj94ivec6sa1vijcr5n.hcrqga9fdec", "5kgsc0lqxiei3qpjvdwif8f8vsnbekguhj98mch.vcjapdi59p", "zgEivwy44dCGttxc7m1qumgvBdgjFgeCrroE9Acv.DAtbloqqe", "gopEobyzHtpraEjtFhFhchq8IEzmmwpHvxm9u3rcD.vaApjidt", "ez7m7k3wAn67ndIpwuAAynlsdqllakqc89emwvqjAv.tpgAgsC", "gdrwmavowkpt6ydjv5u748h2EvrdpofEqsgfj6gatat.ri8d2i", "rku7lqm896swpgA76masui9sp34ev5cpgfgydyapbApr.cqjok", "eije9efgl7hlegv8ifkmm94imf95j79m8a3lfn9dlpgic.l7fl", "o6yxsiAkskxBeB9is5p16cibIusfxpdIuwloeefiojA8ql.j8a", "7jfm86hlsddh8lrepdrji6acqmh7eedqce3ejhd5qigdj7j.bn", "fcqtk9tlthos5wfgs3r865e4CsoaolcBnpegg9e9qds2of8b.g", "u3DsupBcjgBFlAiekcgchgglHoogCmbIuvnx7ocpetCiklang."};
    int inverseWalkSpeed = 21;
    int inverseDriveSpeed = 20;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 27405;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> cars = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49};
    vector<int> districts = {49, 33, 49, 23, 49, 9, 49, 14, 49, 35, 49, 10, 49, 13, 49, 39, 49, 3, 49, 0, 49, 24, 49, 22, 49, 3, 49, 2, 49, 19, 49, 40, 49, 45, 49, 39, 49, 9, 49, 43, 49, 28, 49, 35, 49, 30, 49, 39, 49, 32};
    vector<string> roads = {"................................................1.", ".....y..........g..........................y......", ".......................l..........................", "................................................H.", ".................................................C", ".y...........k.g................................zL", "...............D.............................5....", "...................n.....g...i..............9.....", "....................4.......z.....................", "............................................E.....", "........................6.....d...................", "................................f.................", "..................l.............b.................", ".....k............................................", "....................................3.............", ".....gD...........................9...............", ".g................................................", ".................................................M", "............l.....................2...............", ".......n..........................................", "........4.........................................", ".................................................8", ".........................................d........", "..l..........................r....................", "..........6.......................................", ".......g..........................................", "...........................p..........9.....p.....", "..........................p.......................", "........z.....................M..4................", ".......i...............r............o.............", "..........d.................M..K.....y....z......P", "..............................K...................", "...........fb.....................................", "............................4..........a.......f..", "...............9..2...............................", "........................................k.....I...", "..............3..............o....................", "..............................y...................", "..........................9.......................", ".................................a................", "...................................k.....c........", "......................d.................c...4....B", "..............................z...................", ".y................................................", ".......9.E................p..............4........", "......5...........................................", "...................................I..............", ".................................f................", "1..H.z............................................", "....CL...........M...8........P..........B........"};
    int inverseWalkSpeed = 40;
    int inverseDriveSpeed = 37;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 180712;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> cars = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49};
    vector<int> districts = {49, 33, 49, 23, 49, 9, 49, 14, 49, 35, 49, 10, 49, 13, 49, 39, 49, 3, 49, 0, 49, 24, 49, 22, 49, 3, 49, 2, 49, 19, 49, 40, 49, 45, 49, 39, 49, 9, 49, 43, 49, 28, 49, 35, 49, 30, 49, 39, 49, 32};
    vector<string> roads = {"......K...........................................", "..................D........P......................", ".......a........................w.................", ".........Ps.......................................", "..................................F9..............", "...........g........................W.............", "K...........L.....................................", "..a.......X.......................................", ".....................................4.M..........", "...P......................4.......................", "...s...X..........................................", ".....g..................................U.........", "......L...................d.......................", "......................................C....M......", "............................z...............t.....", ".....................x.........................c..", "..............................J.............i.....", "......................n................R..........", ".D.............................V..................", ".............................R..................S.", ".................................D....s...........", "...............x...........................X......", ".................n...........................W....", "............................z...........G.........", ".........................K...................P....", "........................K................j........", ".........4..d.....................................", ".P............................................8...", "..............z........z..........................", "...................R.............................4", "................J........................8........", "..................V...............................", "..w..............................................N", "....................D..............o..............", "....F.....................................c.......", "....9............................o................", ".....W........................................I...", "........4.................................a.......", ".............C......s.............................", "........M........R................................", "...........U...........G..........................", ".........................j....8...................", "..................................c..a............", ".............M.......X............................", "..............t.i.................................", "......................W.P.........................", "...........................8........I.............", "...............c................................t.", "...................S...........................t..", ".............................4..N................."};
    int inverseWalkSpeed = 79;
    int inverseDriveSpeed = 24;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1462909;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> cars = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49};
    vector<int> districts = {49, 33, 49, 23, 49, 9, 49, 14, 49, 35, 49, 10, 49, 13, 49, 39, 49, 3, 49, 0, 49, 24, 49, 22, 49, 3, 49, 2, 49, 19, 49, 40, 49, 45, 49, 39, 49, 9, 49, 43, 49, 28, 49, 35, 49, 30, 49, 39, 49, 32};
    vector<string> roads = {"........Z.........................................", "........................ZZ........................", ".................Z.Z..............................", "...........Z...................................Z..", ".....................................Z........Z...", ".................Z................Z...............", "..............Z...............Z...................", "........Z.Z.......................................", "Z......Z..........................................", "..........................Z...............Z.......", ".......Z.......Z..................................", "...Z........Z.....................................", "...........Z........Z.............................", "...........................Z.......Z..............", "......Z.....................................Z.....", "..........Z.....................................Z.", "..................Z.....Z.........................", "..Z..Z............................................", "................Z................................Z", "..Z..........................................Z....", "............Z...............Z.....................", ".......................................Z....Z.....", ".......................Z..................Z.......", "......................Z.............Z.............", ".Z..............Z.................................", ".Z...........................................Z....", ".........Z...................Z....................", ".............Z...........................Z........", "....................Z............Z................", "..........................Z......................Z", "......Z..................................Z........", "...........................................Z......", "........................................Z.....Z...", "............................Z........Z............", ".....Z.................................Z..........", ".............Z........................Z...........", ".......................Z................Z.........", "....Z............................Z................", "...................................Z.......Z......", ".....................Z............Z...............", "................................Z...Z.............", "...........................Z..Z...................", ".........Z............Z...........................", "...............................Z......Z...........", "..............Z......Z............................", "...................Z.....Z........................", "....Z...........................Z.................", "...Z............................................Z.", "...............Z...............................Z..", "..................Z..........Z...................."};
    int inverseWalkSpeed = 70;
    int inverseDriveSpeed = 64;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 2781320;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> cars = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49};
    vector<int> districts = {49, 33, 49, 23, 49, 9, 49, 14, 49, 35, 49, 10, 49, 13, 49, 39, 49, 3, 49, 0, 49, 24, 49, 22, 49, 3, 49, 2, 49, 19, 49, 40, 49, 45, 49, 39, 49, 9, 49, 43, 49, 28, 49, 35, 49, 30, 49, 39, 49, 32};
    vector<string> roads = {".iByiElogx...pissfg1mCmjjixd42s8x.9i.zmCdc..rtgdCh", "i.sn0v..7qt.ylmvq.uiwnxf..lqgg.jmai9uk7nfqthtagh.g", "Bs.5r2fkm6xhAcmldnBAudxhoj8xDB9I.hI.kczbHysD.qkorj", "yn5.l..ei9x.Bc.nfmAxv8.f.f1xzy5E0bDwm6t.CxtAlkimlh", "i0rl.td76ps8xkl.piuivmwe2.j.gghkk9jatj8mhqsisa.hjf", "Ev2.t.imp.y.B.olfp.CwfykrmazG.cK8kKFleBdKAuGkt.qtm", "l.f.di.97cl5q6bhbapkm.o.a3.knl6sb7sogfmhrljnfi6ap5", "o.ke7m9.7jt3zgk.liwnve.c48csnma.d.qi.befossop8ehfe", "g7mi6p77.km5re..icofp..743.kgfclh7..mi.lkklh.f8an8", "xq69p.cjk.qg.6.e7hu.oi.dm.arzx8E8gE.dgygEsmzcrfjue", ".txxsyltmq.q4kaf.a3e5E4.rlx2ljrpwsrxfBADu34.fC.bKf", "..h.8.535gq.vcgnhf.lrf.85.bp.l7rc.q.mch..pon.caeja", ".yABxBqzr.4v.oeg.f4j.I2mxqB7qovuAxvDg.FHz87ohHkgPk", "plcck.6ge6kco.9b4aoo..l6iacksq8.bdxv.htj.lgs9p8.u.", "imm.lobk..age9.992egatc8kcmamkgrlist8qu.tb7l8.54A6", "svln.lh..efngb9.7cjqawdfskohwukB.pCD0t.uEi9v.BefGe", "sqdfpfbli7.h.497.cnqgojanfgkvtcAfiAz6lymBleu5ubdza", "f.nmipaichaffa2cc..dc.d6halajhgolhpqcpr.qa.ibr3..4", "guBAu.pwou3.4oejn..e8H6.uoA3.j.ozv..iEBG.38jjEieMj", "1iAxiCknf.eljogqqde.kBjhjhwb64rawockpynBfai4ptfcCg", "mwuvvwmvpo5r..aagc8k.D2iunw8rprvvtxCaBECAa2qbEgeLg", "Cnd8mf.e.iEfI.two.HBD..ljk7DCBcG8dFwv2r1DEBDu.o.e.", "mxx.wyo...4.2lcdjd6j2..kvoy7.ot.x.wCdDEFz84peGi.Ni", "jfhfek.c7d.8m68fa6.hilk.c4fhlj9qeaqoein.rhfldl26s1", "j.o.2ra44mr5xiksnhujujvc.7gp.hemi6ldrgbkjp.jqadgid", "i.jf.m383.l.qackfaohnko47.e.jh9oe.okjgi.n.kji.6.o5", "xl81ja.c.axbBcmoglAww7yfge..yw4C1..un4r5Bxtymi.mjh", "dqxx.zkskr2p7kahka3b8D7hp...i.rmwrovgAxCr07ghAeaIf", "4gDzgGnngzl.qsmwvj.6rC.l.jyi.1t4yo5ev.jC8hp1vrjhAk", "2gByg.lmfxjloqkuthj4pBojhhw.1..6xn7.tykB.fm1t.hfAi", "s.95hc6ac8r7v8gkcg.rrct9e94rt..y47.sj9pb.rouhic.mb", "8jIEkKs.lEpru.rBAooavG.qmoCm46y..s1f.DkG6lt5AuomDp", "xm.0k8bdh8wcAbl.flzwv8xeie1wyx4..aDwm6s7Bw.zkkhllg", ".ahb9k7.7gs.xdipihvotd.a6..ron7sa.skoahdqrqp.bcghc", "9iIDjKsq.ErqvxsCAp.cxFwqlo.o57.1Ds.dBDjG4nu6B.omCp", "i9.waFoi..x.DvtDzq.kCwCodkuve.sfwkd.Ct5.8uzgCgoopo", ".ukmtlg.mdfmg.806cipavderjngvtj.moBC.sC.Di9u0AdeFd", "zkc6jefbigBc.hqtlpEyB2Digg4A.y9D6aDts.p2BByArflpek", "m7zt8Bme.yAhFtu.yrBnErEnbirxjkpkshj5Cp.s.xAlBaop.o", "Cnb.mdhflgD.Hj.um.GBC1F.k.5CCBbG7dG..2s.EDADshosfn", "dfHChKrokEu.z.tEBq.fADzrjnBr8..6Bq48DB.E.qx.Cppo.q", "cqyxqAlsks3p8lbila3aaE8hp.x0hfrlwrnuiBxDq.8.iAeaIf", ".tstsujslm4o7g79e.8i2B4f.kt7pmot.quz9yAAx8..a.daId", ".hDAiGnohz.noslvuij4qDpljjyg11u5zp6guAlD.....tjgCk", "rt.lskfp.cf.h98.5bjpbuedqimhvthAk.BC0rBsCia..z.d.c", "taqkati8frCcHp.BurEtE.Gla.iAr.iukb.gAfahpA.tz.nq8n", "ggki..6e8f.ak85eb3ifgoi2d6.ejhcohcoodloopedj.n.3u0", "dhomhqahajbeg.4fd.ece..6g.mahf.mlgmoeppsoaagdq3.y4", "C.rljtpfnuKjPuAGz.MCLeNsiojIAAmDlhCpFe.f.IIC.8uy.u", "hgjhfm5e8efak.6ea4jgg.i1d5hfkibpgcpodkonqfdkcn04u."};
    int inverseWalkSpeed = 100;
    int inverseDriveSpeed = 90;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 86180;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> cars = {49, 49, 49, 49, 49, 49, 49, 49, 49, 49};
    vector<int> districts = {49, 33, 49, 23, 49, 9, 49, 14, 49, 35, 49, 10, 49, 13, 49, 39, 49, 3, 49, 0, 49, 24, 49, 22, 49, 3, 49, 2, 49, 19, 49, 40, 49, 45, 49, 39, 49, 9, 49, 43, 49, 28, 49, 35, 49, 30, 49, 39, 49, 32};
    vector<string> roads = {".b3egijAgwFZ.M1WpHl...fj..SlrwIftC.R..IU..KsKX.tTz", "b.H7OfNnJhV4M..o.jp.gD...UydBJk.l.xqp3nnd9l1..wcp.", "3H...QuVUS...Bj9Cu.eCYbp8Y.k.n2oL80J.rkRy..aFi86.R", "e7..IpCN4.JKYot3O.c.hwwNYX.v.D3X.O.geOwg.4v2y.PeLR", "gO.I.4.ZQ.q.DiTDG8Rayn..seA.gBEs.tepdREL.Gi.Xa....", "ifQp4.V.2.GkwVyH.xxGU.1byI.93.W.pM7nmopv.CjnQu8AMA", "jNuC.V.1AU.PLbR..e.h.wkQYxY.7WnFdx.wxyJM.oK26.4k84", "AnVNZ.1.O.nRrLadeZpaF...3.R.o6M8A.ZYYZu.O.K.Jo8Kcj", "gJU4Q2AO.dxqc5HJ.p9dHvPvUK..P5.s30F.hqd.LQDn.dz..W", "whS...U.d.9pG3PX.4t.IDMJnp.gYYUy....i.uPkzuvMEoF.5", "FV.JqG.nx9.W..hEid0s.XbQTvCTOk.ptp.7c4w4c.6HT7r0.e", "Z4.K.kPRqpW.fp9A.G.X3.wx.4Q..QOHkSV2b.6.q.t3JaK..r", ".M.YDwLrcG.f.Y5.4.71sNaTy3D.eXCNdhKWWEwq384..92E9.", "M.BoiVbL53.pY.XP0pC8JXYl3FAS9u..2iB.PR.OjNr.U.aaSY", "1.jtTyRaHPh95X.j.tKJ.cZaZCH4TAYT7JFeb.3.e..I.O..fN", "Wo93DH.dJXEA.Pj..4i.mL9Auc.XJ.9A.9zfp2ooMM.CmeW5I.", "p.COG..e..i.40...Wp66a.IYadjJ9O.Q1MAj4jT4.A.6AF3.k", "Hju.8xeZp4dG.pt4W.V1L.EUF7d.v..7RcYd7GK.Y6ixu.e.K.", "lp.cRx.p9t0.7CKipV.L3N.1xYy5UqMoIEQoejmvrB.R.5NaS.", "..e.aGhad.sX18J.61L..U.sk..nDtZN8.F.jEJ.6H2UKc..R.", ".gChyU.FHI.3sJ.m6L3..ed7tY.0lJ8qE.xq4qjg.em.J.WeLY", ".DYwn.w.vDX.NXcLa.NUe.6TM.X7.YB.s1dYgP.a...8PDUE.6", "f.bw.1k.PMbwaYZ9.E..d6.lq7.fbW3Z.EjxJKzQbKHFEQf.BK", "j.pN.bQ.vJQxTlaAIU1s7Tl.ig1uV9.UqNt.S.Wsy.N.I.Hu.h", "..8YsyY3UnT.y3ZuYFxktMqi..M.SfOzhItw.c.836sTiKdq4.", ".UYXeIx.Kpv43FCca7Y.Y.7g...EH.EAcx.JkiOUytRS49..9r", "Sy..A.YR..CQDAH.ddy..X.1M...ouA.j.JRd.Y..5hsHeI8W.", "ldkv.9...gT..S4Xj.5n07fu.E..qhRc.Wc.r..nidFg.CPbZK", "rB..g37oPYO.e9TJJvUDl.bVSHoq.MKI8P1..kN.zf.f..tktl", "wJnDB.W65YkQXuA.9.qtJYW9f.uhM.4CvG.M.lQ.pUFh.b7rT.", "Ik23EWnM.U.OC.Y9O.MZ8B3.OEARK4.6sJ8AD.TR5iNuI.vmMJ", "f.oXs.F8sypHN.TA.7oNq.ZUzA.cIC6.yut8M.5db.7FA.JWMC", "tlL..pdA3.tkd27.QRI8Es.qhcj.8vsy.T.O8lTP.8.5Ntih2b", "C.8OtMx.0.pShiJ91cE..1ENIx.WPGJuT.e.ikOqy4MYdjGLgL", ".x0.e7.ZF..VKBFzMYQFxdjtt.Jc1.8t.e.QIBSDd7fEw3V2r.", "RqJgpnwY..72W.efAdo.qYx.wJR..MA8O.Q.e.MLwfDZk.KP.A", ".p.edmxYhicbWPbpj7ej4gJS.kdr..DM8iIe.5eX.Ak..6MUPn", ".3rORoyZq.4.ER.24GjEqPK.ci..kl..lkB.5.B8..zqt.DA..", "InkwEpJuduw6w.3ojKmJj.zW.OY.NQT5TOSMeB.SUq.IjiSlFs", "UnRgLvM..P4.qO.oT.v.gaQs8U.n..RdPqDLX8S.m.EKApqFfd", ".dy....OLkcq3jeM4Yr6..by3y.izp5b.ydw..Um.8XJBd5y.p", ".9.4GCo.Qz..8N.M.6BHe.K.6t5dfUi.847fA.q.8.43.JASBP", "Kl.vijKKDu6t4r..Ai.2m.HNsRhF.FN7.MfDkz.EX4.G.iXjeU", "s1a2.n2.nvH3..IC.xRU.8F.TSsgfhuF5YEZ.qIKJ3G.w.Evey", "K.FyXQ6J.MTJ.U.m6u.KJPEIi4H...IANdwk.tjAB..w..0Ie.", "X.i.au.odE7a9.OeA.5c.DQ.K9eC.b..tj3.6.ipdJi...b.zy", ".w8P.848zorK2a.WFeN.WUfHd.IPt7vJiGVKMDSq5AXE0b.i..", "tc6e.AkK.F0.Ea.53.a.eE.uq.8bkrmWhL2PUAlFySjvI.i.U5", "Tp.L.M8c....9SfI.KSRL.B.49WZtTMM2gr.P.Ff.Beeez.U..", "z.RR.A4jW5er.YN.k...Y6Kh.r.Kl.JCbL.An.sdpPUy.y.5.."};
    int inverseWalkSpeed = 44;
    int inverseDriveSpeed = 4;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 19656;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> cars = {11, 11, 11, 11, 11, 11, 11, 11, 11, 11};
    vector<int> districts = {16, 41, 7, 8, 7, 13, 39, 23, 28, 34, 13, 41, 42, 38, 10, 28, 4, 20, 14, 12, 10, 11, 29, 39, 40, 41, 12, 5, 11, 45, 39, 14, 15, 2, 7, 37, 43, 7, 31, 41, 48, 45, 31, 13, 26, 22, 48, 32, 48, 5};
    vector<string> roads = {".h8ussziDlzs76oaulivl8gmuscej7JC2ivt1jlmxot7kCz5ev", "h.cijckcl5jmaa97onhfcj86ohke5irmg7obh8mijambckmcdh", "8c.utqx9yirv33g5xqmnc5gfxjjibfEzaaynabqpwgkalwq7hn", "uiu.577vmct9qqpoajfrvAem9yohoql9sq8jtric2qEn9mBpgw", "sjt5.cdwsey3pprn5davwycp4Bkdpmrfpr4nqtc68tGk7rEndz", "scq7c.6of7lgmnhkinijnwdfhqqihqh9rjgarkmg7iwlaesnhn", "zkx7d6.vfephtunrirnouDjlhwvnowd2xqgfyrqj4oCsffxumt", "ic9vwov.rhiybc8aBxsf2ek9A9ro6ozxk4Bhj3wuv8bhopgfnd", "Dlymsffr.jcwwxitxDydpErhwoExmE8fDnwaDnCwkitxq1lywi", "l5ice7ehj.khffccklfhho7ajmldbkngkdjakekfdere8hpfck", "zjrtylpick.CrsaoDGA3fxscDcEyfClpzgCaAgFAsahvta8ux6", "smv93ghywhC.rqvp1a9zzzes1Ejdsmvjpu2rqva5cwJl9vIodD", "7a3qpmtbwfrr.0f2tnind8cetkgeacCw8atl8bmlsgm6hur3dn", "6a3qpnucxfsq0.g3tmioe8cfslfdbbDx7btm7cllshn5hvs3do", "o9gprhn8icavfg.dxxr66mi2w8to4rqpo5w8o5wsp0eklgcjn8", "a75onkratcop23d.rmikcbacrjgd8dzta8sia9mkpel7frp5dl", "uoxa5iiBxkD1ttxr.bbBBBgu0Gkfvowkrw1tsyb7dyLncxKqfF", "lnqjdnrxDlGanmxmb.4CztducF98tdEtiudwjv06myIgcCKj9F", "ihmfainsyfA9iirib4.xtq8obA83nbApfpdqgq33itDc7xFf4A", "vfnrvjofdh3zno6kBCx.cto8A9AubympvcA8wcBxq6frqb8qt4", "lccvwnu2phfzde6cBztc.hl8B6tp6qxwm4Bfm3yvv69kpndipa", "8j5AywDeEoxz88mbBtqth.lmBoklhgLGbgCtagttBmndqCvals", "g8gecdjkr7secciagd8oll.ggrd5fdumdggiehc9gkv84pwa4r", "m6fmpfl9hacsef2cuuo88mg.tbrl3ppnn5u7n5tpm3giiffhka", "uox94hhAwjD1tswr0cbABBgt.Glfuovjrw0ssxb7cyKnbwJqfE", "shjyBqw9omcEkl8jGFA96orbG.AwbxwytaGgt9EBy75rul6pv5", "ckjokqvrElEjgftgk98AtkdrlA.7p3Iy8pmv9r9drvD9fDGb8C", "eeihdinoxdydedodf83upl5lfw7.k8Aqblgocm77kpz77vBa0w", "j5bopho6mbfsab48vtnb6hf3ubpk.mtqj1ubj2soo5ffikhejc", "7ifqmqwoEkCmcbrdodbyqgdpox38m.Iz4mpu5odgtsz6gCE89z", "JrElrhdz8nlvCDqzwEAmxLupvwIAtI.bIvuhIvDxirCCsauDzr", "Cmz9f92xfgpjwxptktppwGmnjyyqqzb.AsigBtsm6qEuifywpu", "2gasprxkDkzp87oarifvmbdnrt8bj4IA.jst0khjupv5iBA4bw", "i7aqrjq4ndguab58wupc4gg5wapl1mvsj.wdj0tqq5efklgekc", "voy84ggBwjC2ttws1ddABCgu0Gmgupuisw.stxd8byLocvJrgE", "tbnjnafhaaarlm8itwq8fti7sgvobuhgtds.tdvpi9mnj8honc", "1hatqryjDkAq87oasjgwmaenst9cj5IB0jtt.kikvpv5jBA4cw", "j8brtkr3negvbc59yvqc3gh5x9rm2ovtk0xdk.urr5chllfflb", "lmqicmqwCkFamlwmb03BytctbE97sdDshtdviu.5lxIfbBJi8E", "mipc6gjuwfA5llsk763xvt9p7Bd7ogxmjq8pkr5.ftFf6vFi7A", "xjw2874vkdscssppdmiqvBgmcyrkoti6uqbivrlf.qDpckArjv", "oagqtio8ieawgh0eyyt66mk3y7vp5srqp5y9p5xtq.dlmgbko6", "tmkEGwCbtrhJmnelLIDf9nvgK5DzfzCEveLmvcIFDd.tzrarya", "7banklshxevl65k7ngcrkd8inr97f6Cu5fon5hffplt.dwx27s", "kcl97afoq8t9hhlfcc7qpq4ibuf7igsiikcjjlb6cmzd.pyf6t", "Ckwmrefp1havuvgrxCxbnCpfwlDvkCafBlv8BlBvkgrwp.jwug", "zmqBEsxglp8IrscpKKF8dvwfJ6GBhEuyAgJhAfJFAbaxyj.vA4", "5c7pnnufyfuo33j5qjfqiaahqpbae8Dw4ero4fiirkr2fwv.ar", "edhgdhmnwcxdddndf94tpl4kfv80j9zpbkgncl87joy76uAa.v", "vhnwzntdik6Dno8lFFA4asraE5CwczruwcEcwbEAv6astg4rv."};
    int inverseWalkSpeed = 79;
    int inverseDriveSpeed = 47;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 79748;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> cars = {11, 11, 11, 11, 11, 11, 11, 11, 11, 11};
    vector<int> districts = {16, 41, 7, 8, 7, 13, 39, 23, 28, 34, 13, 41, 42, 38, 10, 28, 4, 20, 14, 12, 10, 11, 29, 39, 40, 41, 12, 5, 11, 45, 39, 14, 15, 2, 7, 37, 43, 7, 31, 41, 48, 45, 31, 13, 26, 22, 48, 32, 48, 5};
    vector<string> roads = {".....9..............i................e............", "..h...............................................", ".h............e.................................q.", "........y.........................................", "................................k.................", "9.................................................", "...........................k..........t...........", ".................................c................", "...y..............g.............................g.", "..........F....................y..................", ".........F.....................................C..", ".....................x........................k...", "...................F..............................", "........................................o.........", "..e...............................................", "...................A..........k..p.............dv.", ".........................n........................", "........................................o.........", "........g.........................................", "............F..A.....................a............", "i.................................................", "...........x.........................j...r........", ".................................................b", "................................................i.", ".................................i................", "................n..........3......l........C......", "...................................D..............", "......k..................3...g..........y......o..", "..........................................n....s..", "...........................g......................", "...............k..................................", ".........y........................................", "....k............................w................", ".......c.......p........i.......w...........j.....", ".........................l..........8........z....", "..........................D...........p...........", "..................................8...............", "e..................a.j............................", "......t............................p..............", "...............................................f..", ".............o...o.........y......................", ".....................r............................", "............................n.....................", ".........................C.......................g", ".................................j................", "..................................z...............", "...........k......................................", "..........C....d...........os..........f..........", "..q.....g......v.......i..........................", "......................b....................g......"};
    int inverseWalkSpeed = 96;
    int inverseDriveSpeed = 32;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 568832;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> cars = {11, 11, 11, 11, 11, 11, 11, 11, 11, 11};
    vector<int> districts = {16, 41, 7, 8, 7, 13, 39, 23, 28, 34, 13, 41, 42, 38, 10, 28, 4, 20, 14, 12, 10, 11, 29, 39, 40, 41, 12, 5, 11, 45, 39, 14, 15, 2, 7, 37, 43, 7, 31, 41, 48, 45, 31, 13, 26, 22, 48, 32, 48, 5};
    vector<string> roads = {"......................r..........................S", ".......t...........H..............................", "..........v.......................................", "..................m....................N..........", ".........a.................................D......", ".......r.................................Z........", ".............................s........B...........", ".t...r............................................", ".................................K..f.............", "....a..................9..........................", "..v.........................v.....................", "........................E...............7.........", ".............y..........................v.........", "............y.....................t...............", ".............................R.................s..", ".................................n...u............", ".....................8............................", "........................s.......................3.", "...m.............................................R", ".H....................r...........................", ".......................0..................n.......", "................8..................O..............", "r..................r..............................", ".........9..........0.............................", "...........E.....s................................", ".......................................K.......D..", "..........................................e...5...", "..............................y.......2...........", "..........v.........................s.............", "......s.......R...................................", "...........................y....................5.", ".............................................84...", "..................................V.........O.....", "........K......n..................................", ".............t..................V.................", ".....................O......................s.....", "........f...................s.....................", "...............u...........................3......", "......B....................2......................", "...N.....................K........................", "...........7v.....................................", ".....Z.......................................L....", "....................n.....e.......................", "....D................................3............", "................................O..s..............", "...............................8.........L........", "..........................5....4..................", "..............s..........D........................", ".................3............5...................", "S.................R..............................."};
    int inverseWalkSpeed = 48;
    int inverseDriveSpeed = 44;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1130896;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> cars = {11, 11, 11, 11, 11, 11, 11, 11, 11, 11};
    vector<int> districts = {16, 41, 7, 8, 7, 13, 39, 23, 28, 34, 13, 41, 42, 38, 10, 28, 4, 20, 14, 12, 10, 11, 29, 39, 40, 41, 12, 5, 11, 45, 39, 14, 15, 2, 7, 37, 43, 7, 31, 41, 48, 45, 31, 13, 26, 22, 48, 32, 48, 5};
    vector<string> roads = {"...............Z..................Z...............", "................................Z........Z........", "..............................................Z...", ".......................Z...Z......................", "...........Z..............Z.......................", ".............Z......................Z.............", ".............................Z...............Z....", ".............................Z..........Z.........", "..............Z....Z..............................", ".....................................Z....Z.......", "......................Z.......Z...................", "....Z.................Z...........................", ".................Z......................Z.........", ".....Z....................................Z.......", "........Z...................................Z.....", "Z................................Z................", ".......................Z..........................", "............Z......................Z..............", "............................Z..Z..................", "........Z..................................Z......", "...........................Z..Z...................", "......................................ZZ..........", "..........ZZ......................................", "...Z............Z.................................", "................................................ZZ", "..........................Z.......Z...............", "....Z....................Z........................", "...Z................Z.............................", "..................Z................Z..............", "......ZZ..........................................", "..........Z.........Z.............................", "..................Z.........................Z.....", ".Z...............................................Z", "...............Z................................Z.", "Z........................Z........................", ".................Z..........Z.....................", ".....Z.........................................Z..", ".........Z............................Z...........", ".....................Z...............Z............", ".....................Z........................Z...", ".......Z....Z.....................................", ".Z.........................................Z......", ".........Z...Z....................................", "...................Z.....................Z........", "..............Z................Z..................", "......Z........................................Z..", "..Z....................................Z..........", "....................................Z........Z....", "........................Z........Z................", "........................Z.......Z................."};
    int inverseWalkSpeed = 64;
    int inverseDriveSpeed = 14;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 2585276;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> cars = {11, 11, 11, 11, 11, 11, 11, 11, 11, 11};
    vector<int> districts = {16, 41, 7, 8, 7, 13, 39, 23, 28, 34, 13, 41, 42, 38, 10, 28, 4, 20, 14, 12, 10, 11, 29, 39, 40, 41, 12, 5, 11, 45, 39, 14, 15, 2, 7, 37, 43, 7, 31, 41, 48, 45, 31, 13, 26, 22, 48, 32, 48, 5};
    vector<string> roads = {".oA.pygxwjz7N95C95A.BLKm.5..fBktuxfuus.uxvlvxsB.qs", "o.jcyjkg8giv.gswon.whx.xxji4jr38ufrromw.p7tl.rCg3c", "Aj.7v2m..h0H.wBhuvrr3djvku0gmaj.l.tgccujcdq86.q2l7", ".c7...l4.g6Epqzos.wt5l..qq68lhc3p3tlhgw..5.dcnw4e5", "pyv..re.Dhv.yu..fjc.y..2hmwB..uvav9eih3cj.5.obevCr", "yj2.r.j.hf3Fhuzerto.6dhshs3hk8.ai4qd99.g9en53gn4m7", "gkmlej.kp4mmxh..7alcovtckan.0kfiek7decbe.m8.h.mlnf", "xg.4..k.cf1Fktzjstsr3glvlr2.kcg6l0s.dctjdap97jr0i.", "w8..Dhpc.keExoAwvuE.ctzCxre2pq.7wbxsonBup2xlkt.c.c", "jghghf4fk.hquijkcdmfj.rg.ci.4hceefccb9fddicb.bmgka", "zi06v3m1eh.HivBitvs.3ekvkt0fmbi8l2thcdujdcq96jr1k.", "7vHE.FmFEqH.Uf8JfcFuJ.Q.HdIAmIsAAFkABzpADCqCEyGGxz", "N..pyhxkxuiU.LNd..ouk36AgHiyy.ArnlCkikAlgv.i.nmk.o", "9gwquuhtoivfL.fDfbDtwIJsC8wlgz.nwslv.rr.wnptutE.hn", "5sBz.z.zAjB8Nf.B75wlDLIhy.C..Aov.zb.t.gswyivxpyAvt", "Cwho.e.jwkiJdDB.twbhld7n3x...5uo9kp88am86t.aba9jA.", "9ousfr7svctf.f7t.3qfwDBcr6us..jpk.5kmkbkosb.pi.t.m", "5nv.jtatudvc.b5w3.ujxGEgu3wr9v.pot9.omfors..slvupn", "A.rwcolsEmsFoDwbqu.av.h.7vsDmgyw7t.a.ff8eB.ik..tFr", ".wrt..cr.f.uutlhfja.u.p5dlsy.jss7r..ed58fx3hk7.rzn", "Bh35y6o3cj3JkwDlwxvu.gmzov2eofi8p3wk.gxngatcanu2j8", "Lxdl.dvgt.e.3ILdDG..g.8AhFeuwa.onhBjgizlfrvfdmngAl", "K.j..htlzrkQ6JI7BEhpm8....kzu9z.hmxf.hu.cwr..ifmEo", "mxv.2scvCgv.Ashncg.5zA..jjwAd..vcv6fji0ekz4mpchwBr", ".xkqhhklx.kHgCy3ru7doh.j.vl.l8uq.m.68aj67vgcd86mBl", "5juqmsarrctdH8.x63vlvF.jv.uo9ufnprcoomioqph.r.w.m.", ".i06w3n2ei0IiwC.uwss2ekwlu..nci9m.uid.vkd.ra.kr1l8", ".4g8Bh..2.fAyl..srDyeuzA.o..mq86vcvromz.p2..ksCd5b", "fjml.k0kp4mmyg...9m.owudl9nm.lf.f.8efccfh.9fic.lmf", "Brah.8kcqhbI.zA5.vgjfa9.8ucql.picdp8.7.a3nk5.b..u.", "k3jcu.fg.cisA.ouj.ysi.z.ufi8fp.9rf.oljr...o.jozg7b", "t8.3vai67e8Arnvoppws8o.vqn96.i9.o5rkgftm.4q.cmv7b4", "uulpaielwelAnw.9ko77pnhc.pmvfcro.mf388c.8t9.e27myk", "xf.3v4k0bf2Flszk.ttr3hmvmr.c.df5m.sidduke9qa8ks0h4", "frtt9q7sxctkClbp59..wBx6.cuv8p.rfs.hjh5glv.loemtvn", "urgledd.schAkv.8k.a.kjff6oire8ok3ih.34f14.b7a2a..f", "uochi9edobcBi.t8mo.e.g.j8odof.lg8dj3.1i61.e356edrc", "smcgh9ccn9dzkr.akmfdgihiam.mc7jf8dh41.h63.d.6.fdqa", ".wuw3.btBfupArgmbff5xzu0jivzc.rtcu5fih..ky3lo.huzp", "u.j.cgejudjAl.s8ko88nl.e6ok.fa.m.kg166..6r.9c..kwh", "xpc.j9.dpddDgww6orefgfck7qdph3..8el413k6.ng3..d.td", "v7d5.ema2icCvnytssBxarwzvp.2.n.4t9v...yrn.uihrAa89", "ltq.5n8pxcqq.pi.b..3tvr4ghr.9koq9q.bed3.gu..k8fqwl", "vl8d.5.9lb9Citva..ihcf.mc.a.f5...al73.l93i...9hao8", "x.6co3h7k.6E.uxbpskkad.pdr.ki.jce8oa56oc.hk..ck.o8", "sr.nbg.jtbjyntpail.7nmic8.kscbom2ke26....r89c..kv.", "BCqwenmr.mrGmEy9.v..unfh6wrC..zv7smaefh.dAfhk..sG.", ".g24v4l0cg1Gk.Ajtutr2gmwm.1dl.g7m0t.dduk.aqa.ks..6", "q3leCmni.kkx.hvA.pFzjAEBBml5mu7byhv.rqzwt8woovG..f", "sc75r7f.ca.zont.mnrn8lorl.8bf.b4k4nfcaphd9l88..6f."};
    int inverseWalkSpeed = 93;
    int inverseDriveSpeed = 30;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 96480;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> cars = {11, 11, 11, 11, 11, 11, 11, 11, 11, 11};
    vector<int> districts = {16, 41, 7, 8, 7, 13, 39, 23, 28, 34, 13, 41, 42, 38, 10, 28, 4, 20, 14, 12, 10, 11, 29, 39, 40, 41, 12, 5, 11, 45, 39, 14, 15, 2, 7, 37, 43, 7, 31, 41, 48, 45, 31, 13, 26, 22, 48, 32, 48, 5};
    vector<string> roads = {".V..j3i.....Zy.J.djK.T..YJ...Kqwg9S7Cd.Y.91J..i.AD", "V.Kr6t..KwAlgT.gs.B.H...cp6d.E.s...BH..B.hP....gT.", ".K.bD..5.y.o.Q4Hx9jL.cM.S.X.Gv.Jrjn86.A.AwP...wT.i", ".rb.I.M2.0A...F..U.qQXJ..7f.QK.4x...iY..lqn5kA...h", "j6DI.5.fTyJ.w...w.aS.NjJlFU..lg.dP.DDhx..2..P.1.nG", "3t..5.Ls.gZ4m.m.G8E.r.q....Eock.z..V.E..n09.193..f", "i..M.L.C.XbL..P.z.....UD8EN....Y.W.9Dy.OM..0.z56.B", "..52fsC.c9F..Vxg5r.f.A.Wg...ip.D2Q...TX.iO...BS.Np", ".K..T..c...e.aAv7w.w..l..e..M.GD.Box..a..V.0D..3y.", ".wy0ygX9..fQ.r.Z.Q.....Oj1...y.....gr.c...h.Z.zR.v", ".A.AJZbF.f.k.Llp.c.cTi..1...vA0R.m.gGai.a..MMoxTYY", ".lo..4L.eQk.W.p.Q.1e.vts.X...awK7XB.tRsf..A.B.b...", "Zg..wm.....W.8Gy.kt.m....WA.N.k......W0D.x.gGn.IA.", "yTQ....VarL.8.N..PC0.dRVVG5.lH5t8.D.6l..Bxr.3.ld..", "..4F.mPxA.lpGN.nsEcW...rk.lsP..2xv..Y2.8Dn.....e1.", "JgH....gvZp.y.n.k...n.s.f8T5.H.CO..CQw...ZmHh.Ltn.", ".sx.wGz57..Q..sk..W9oz7.aU...S.2.O..Io.JzOxe5t..W.", "d.9U.8.rwQc.kPE...ib.4.Bm.1m...z....Z.8WX.6B...AO5", "jBj.aE.....1tCc.Wi.7R.I.i...TxI.9wR.Y..g....9IAN..", "K.LqS..fw.ce.0W.9b7.no.AWEbV..boB.L.u..r.x.8.p..ZO", ".H.Q.r....T.m..no.Rn...5.Bu.M...X.K..EI..XIF...da.", "T.cXN..A..iv.d..z4.o...Cj.2wSR.Z..s..t.15...nAW..N", "..MJjqU.l..t.R.s7.I......O0.PVqVN8.f.71..w.......L", "....J.DW.O.s.Vr..B.A5C....C..l..W5.a.eD1d...4V.n.a", "YcS.l.8g.j1..VkfamiW.j...Ay.q.3.I4.w.TH1WMc2.TM..s", "Jp.7F.E.e1.XWG.8U..EB.O.A...vk.mM4.TfXh.m..GkDY.cb", ".6XfU.N.....A5lT.1.bu20Cy...lzcQpu.h.z9c.1Q.hZ..z.", ".d...E........s5.m.V.w......Q4uF.pD.Xyp4.gG3h....v", "..GQ.o.iM.v.NlP...T.MSP.qvlQ.Fg..NN..u.D.a.R.Eo.G.", "KEvKlc.p.yAa.H.HS.x..RVl.kz4F.cE.4.F..4AT.Bh.y.7.R", "q...gk..G.0wk5....Ib..q.3.cugc.U..e.6..Bj.TFs....E", "wsJ4..YDD.RK.t2C2z.o.ZV..mQF.EU.N..4.dN....k.rYg.t", "g.rxdz.2...7.8xO..9BX.NWIMp....N..G..gzIg.1.8ux..E", "9.j.P.WQB.mX..v.O.w...8544upN4....K.p..J....6D....", "S.n.....o..B.D....RLKs.....DN.e.GK.0DXk.P..O..W9..", "7B8.DV9.xgg....C......fawTh..F.4..0.AEnerY.....SA.", "CH6iD.D..rGt.6YQIZYu.....f.X..6..pDA.Ir..ym.7.K.c.", "d..YhEyT..aRWl2wo...Et7eTXzyu..dg.XEI.V.n..z.am.U.", "..A.x..Xacis0....8..I.1DHh9p.4.Nz.knrV...W.32PE.X.", "YB....O....fD.8.JWgr.1.11.c4DAB.IJ.e....s.ikw17z.w", "..Al.nMi..a..BD.zX...5.dWm...Tj.g.Pr.n.s.1GO......", "9hwq20.OV...xxnZO..xX.w.M.1ga......Yy.W.1.JLqB...5", "1PPn.9...h.A.r.mx6..I...c.QG.BT.1...m..iGJ.x..R.L.", "J..5..0.0.M.g..HeB.8F...2G.3RhFk..O..z3kOLx...Ss.S", "...kP1..DZMBG3.h5.9..n.4.khh..s.86..7.2w.q.....1kA", "...A.9zB..o.n...t.Ip.A.VTDZ.Ey.ruD...aP1.B....h..f", "i.w.135S.zxb.l.L..A..W..MY..o..Yx.W.KmE7..RS.h....", ".gT...6.3RT.Idet.AN.d..n.....7.g..9S...z...s1...O.", "AT..n..Ny.Y.A.1nWO.Za....cz.G......AcUX...L.k..O.7", "D.ihGfBp.vY......5.O.NLasb.v.REtE......w.5.SAf..7."};
    int inverseWalkSpeed = 75;
    int inverseDriveSpeed = 25;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 40825;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> cars = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> districts = {7, 28, 19, 29, 25, 6, 15, 32, 37, 46, 21, 8, 36, 46, 36, 35, 32, 44, 10, 37, 45, 48, 19, 15, 49, 31, 32, 21, 22, 26, 29, 47, 28, 3, 11, 33, 22, 21, 34, 21, 14, 26, 4, 22, 9, 7, 44, 11, 10, 44};
    vector<string> roads = {".i9jBkBnqB8GrAiAAlwGtPyBytEfJbHJdKBzrctLsymcwDyKAn", "i.85ofygiAapai5nnidDbzwjioq5t7wrgzlgbkvx9v66gBpypp", "98.9vhAjmC5yjr8uujmGkIyrrry5B1DBeFupjgvFiyc5oDuFvo", "j59.tlEmoGdtfk0ttodKfCChnvw3x7CvlFqggpBDaB2alHwEvv", "Bovt.ikebos8eft01inoeglt7f3uau8fpb5octp9njsp7n9a3o", "kfhli.i36kcpfolhg2pohygxi9lkshnu6pksdbfrmfmbfldpg9", "ByAEki.hg4vttzEjigE4vz3Lq8mDuBgzngqGrpanC2Fvp3ahfe", "ngjme3h.3kfldlldc4onfvgvf8ilojkqamhqbegolfmdckamdb", "qimob6g3.jiidkoa97olfsfvd7enlmgodjeqaigkmdogaj7i9d", "BACGok4kj.wxxDGnmhI5yE3PvbrFzClEnluKuo7sF5Hwt2emkd", "8a5dscvfiw.wircrreoAkGsupmvaA6zA8CsriapCksg3myqBsj", "Gpyt8ptlixw.eau9aqjxd9uo6o6v3xf5vh3jeAybksrt9wifdw", "rajfeftddxie.8feeiaz1oth8lggihnhkqbc2pun8rde6xjphq", "AirkfozlkDra8.lghq8D6hzd7sgndpo9tr98ayBmaxin9Copky", "i580tlEloGcufl.ttoeJgDCinuw2x6CvkFrhgoADaB3amHwEvu", "Anut0hjdanr9egt.0hnnfhku8e3ubu8fob6pcsoaniso7m8a3n", "Anut1gic9mraeht0.gomfiju8d4tct8gnb7pcsnanhso8l7a2m", "lijoi2g47heqiqohg.slkzezk7mmtkmv7pmvfacrpdpehjcpg7", "wdmdnpEooIoja8enos.J8qD6fwohmkwitzh2cxEu3CakfIuxqA", "GDGKoo4nl5AxzDJnmlJ.AC7QvepIxGiDsiuLwtdpH7KAt2fjji", "tbkfehvffykd16gffk8A.nuf7nghhjofmqaa3rwn7tdg6ykphr", "PzICgyzvsEG9ohDhizqCn.BtgwdF6Gj7FkdpoKGctzADjCqikF", "ywyClg3gf3sutzCkjeD7uB.Lr7nBvyiAkjrGql6pB1Dsp4akga", "BjrhtxLvvPuohdiuuz6QftL.lDtlqpClzFn4kEMz9JeqmPBDxH", "yirn7iqfdvp687n88kfv7grl.k8oaqgapj2g7uuffplm2ugibr", "torvf9887bmolsued7wenw7Dk.itqrgufikyih9mt6vlhc6ib8", "Eqyw3lmierv6ggw34mopgdnt8i.x7x8csa5pfxs6olus9pc96r", "f553ukDlnFavgn2utmhIhFBlotx.z3CxiFskhlzEdA68mGvEvs", "JtBxasuolzA3idxbctmxh6vqaq7z.Ae5yg7mhDA9otvwcxkfez", "b717uhBjmC6xhp6utkkGjGypqrx3A.CzfFtnihwEgya5nEuEvp", "HwDC8ngkglzfnoC88mwiojiCgg8CeC.ku2exlyp6wgBxgja16q", "JrBvfuzqoEA5h9vfgviDf7Alaucx5zk.Am9hhFEfkysweDpljC", "dgelp6nadn8vktkon7tsmFkzpfsiyfuA.wrwi4gypknalpkwna", "KzFFbpgmjlChqrFbbpziqkjFjiaFgF2mw.gAoAq7zhEzjjc09r", "Bluq5kqheus3b9r67mhuadrn2k5s7te9rg.iawucipoo5tffas", "zgpgosGqqKrjc8hppv2LapG4gypkmnxhwAi.fAHv6EdnhKwysC", "rbjgcdrbauie2agccfcw3oqk7ifhhilhioaf.nrmbofe4ugnen", "ckgptbpeioaApyossaxtrKlEuhxlDhyF4AwAn.gDumrdrqnAra", "tvvBpfagg7pyuBAoncEdwG6Mu9szAwpEgquHrg.vC8Cqrafql5", "LxFD9rnoksCbnmDaarupncpzfm6E9E6fy7cvmDv.vnBzgqg5aw", "s9ianmClmFkk8aannp3H7tB9ftodogwkpzi6buCv.A7gfGsyqx", "yvyBjf2fd5ssrxBihdC7tz1Jp6lAtygykhpEom8nA.Csn58ieb", "m6c2smFmoHgrdi3sspaKdADelvu6vaBsnEodfrCB7C.ckIwDuw", "c65apbvdgw3tenaooekAgDsqmls8w5xwazonedqzgsc.jxozpk", "wgol7fpcatm969m78hft6jpm2h9mcngelj5h4rrgfnkj.seiao", "DBDHnl3kj2ywxCHmljI2yC4PucpGxEjDpjtKuqaqG5Ixs.dkjf", "ypuw9daa7eqijow87cufkqaBg6cvkuapkcfwgnfgs8woed.c5f", "KyFEaphmimBfppEaapxjpikDii9EfE1lw0fynAq5yiDzikc.8s", "Apvv3gfd9ksdhkv32gqjhkgxbb6vev6jn9aserlaqeupaj58.l", "npovo9ebddjwqyunm7AirFaHr8rszpqCarsCna5wxbwkoffsl."};
    int inverseWalkSpeed = 55;
    int inverseDriveSpeed = 13;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 58419;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> cars = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> districts = {7, 28, 19, 29, 25, 6, 15, 32, 37, 46, 21, 8, 36, 46, 36, 35, 32, 44, 10, 37, 45, 48, 19, 15, 49, 31, 32, 21, 22, 26, 29, 47, 28, 3, 11, 33, 22, 21, 34, 21, 14, 26, 4, 22, 9, 7, 44, 11, 10, 44};
    vector<string> roads = {"..p..z............................................", ".......................z..........................", "p.....................h...........................", "......d..................................c........", "...............................................b..", "z...........................z.................r...", "...d............j..8...6.......................v..", "....................................d.............", "..................b..........p...e................", "..........................................h.......", "........................g.........................", ".........................v........................", ".......................q9.........................", "............................p.....................", ".....................................6............", "....................k.............................", "......j...........................................", "............................A.....................", "........b.........................s...............", "......8...........................................", "...............k..............................w...", "........................s.......................A.", "..h...............................................", ".z....6.....q.....................................", "..........g.9........s........................u..m", "...........v..................f...................", "............................z.....................", ".............................................k....", ".....z.......p...A........z.......................", "........p....................................l....", ".........................f.........f........i.....", ".............................................c....", "....................................M...m.......H.", "........e.....................................o...", "..................s..................f.o..8.......", "..............................f...................", ".......d........................M.................", "..............6...................f........4k.....", "...............................................D..", "..................................o...............", "................................m.................", "...c..............................................", ".........h........................8...............", ".....................................4............", "..............................i......k............", "...........................k.l.c..................", ".....r..............w...u........o................", "....b.v...............................D...........", ".....................A..........H.................", "........................m........................."};
    int inverseWalkSpeed = 40;
    int inverseDriveSpeed = 33;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 361879;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> cars = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> districts = {7, 28, 19, 29, 25, 6, 15, 32, 37, 46, 21, 8, 36, 46, 36, 35, 32, 44, 10, 37, 45, 48, 19, 15, 49, 31, 32, 21, 22, 26, 29, 47, 28, 3, 11, 33, 22, 21, 34, 21, 14, 26, 4, 22, 9, 7, 44, 11, 10, 44};
    vector<string> roads = {"................U...J.............................", "...................................y..........f...", "...............................................2x.", "....................................m...k.........", ".................4..........K.....................", "...................P.....4........................", "........................u.................W.......", "...............L.......................q..........", ".........Hj.......................................", "........H..................e......................", "........j..C......................................", "..........C..............q........................", "................i.................................", "........................................6.s.......", "..................................a...u...........", ".......L.............................g............", "U...........i.....................................", "....4.............F...............................", ".................F..............O.................", ".....P...........................B................", "J................................................1", "...............................N.................V", ".......................Y......S...................", "......................Y.....................3.....", "......u......................H....................", ".....4.....q......................................", "..................................j............t..", ".........e..........................Z.............", "....K..............................h..............", "........................H.............h...........", "......................S.........P.................", ".....................N...........l................", "..................O...........P...................", "...................B...........l..................", "..............a...........j.......................", ".y..........................h.....................", "...m.......................Z......................", "...............g..................................", "..............u..............h....................", ".......q......................................4...", "...k.........6....................................", "...........................................V.H....", "......W......s....................................", ".........................................V..9.....", ".......................3...................9......", ".........................................H......C.", ".f.....................................4..........", "..2.......................t.......................", "..x..........................................C....", "....................1V............................"};
    int inverseWalkSpeed = 52;
    int inverseDriveSpeed = 13;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1229826;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> cars = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> districts = {7, 28, 19, 29, 25, 6, 15, 32, 37, 46, 21, 8, 36, 46, 36, 35, 32, 44, 10, 37, 45, 48, 19, 15, 49, 31, 32, 21, 22, 26, 29, 47, 28, 3, 11, 33, 22, 21, 34, 21, 14, 26, 4, 22, 9, 7, 44, 11, 10, 44};
    vector<string> roads = {"............Z..................Z..................", "................Z...................Z.............", "....Z................................Z............", "................................Z...........Z.....", "..Z...................................Z...........", ".........Z............................Z...........", "........Z...................Z.....................", "...................Z.....................Z........", "......Z........................Z..................", ".....Z.....................................Z......", "..................Z............................Z..", "..........................Z..................Z....", "Z.................................................", "............................................ZZ....", "...................................ZZ.............", ".......................Z.......................Z..", ".Z...............Z................................", "................Z................................Z", "..........Z..........Z............................", ".......Z..........................Z...............", "........................Z..................Z......", "..................Z.........Z.....................", "........................................ZZ........", "...............Z.................................Z", "....................Z.........................Z...", ".......................................Z......Z...", "...........Z.....................Z................", ".......................................Z........Z.", "......Z..............Z............................", "..............................Z.Z.................", ".............................Z..........Z.........", "Z.......Z.........................................", "...Z.........................Z....................", "..........................Z........Z..............", "...................Z......................Z.......", "..............Z..................Z................", ".Z............Z...................................", "..Z...............................................", "....ZZ............................................", ".........................Z.Z......................", "......................Z.......Z...................", ".......Z..............Z...........................", "..................................Z.............Z.", ".........Z..........Z.............................", "...Z.........Z....................................", "...........Z.Z....................................", "........................ZZ........................", "..........Z....Z..................................", "...........................Z..............Z.......", ".................Z.....Z.........................."};
    int inverseWalkSpeed = 62;
    int inverseDriveSpeed = 43;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 2887030;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> cars = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> districts = {7, 28, 19, 29, 25, 6, 15, 32, 37, 46, 21, 8, 36, 46, 36, 35, 32, 44, 10, 37, 45, 48, 19, 15, 49, 31, 32, 21, 22, 26, 29, 47, 28, 3, 11, 33, 22, 21, 34, 21, 14, 26, 4, 22, 9, 7, 44, 11, 10, 44};
    vector<string> roads = {".pz7.f.ja.v.bn.9ql9.jxzzyiwc36d.e8xybuttjFvmhed.Fw", "p..hhFx.llkv.xdhEvpgp.j.I7jbn.ub..Isplqlnnqs6kfwo.", "z..BHDog.km.rbqDed...qr88wnx.zmsnB9emj..gveczmr8t.", "7hB.6nkn.gsn9qm2wod.ltvDCds65eim.gCxfr.qkBu..ea...", ".hH6.squ3nwugxp3DvktrxyKJ.wa9jppj.JCmwyvqDzuc.g.Ex", "fFDns.emosIpprEpqqjIs.NAzyJti8hFr6yIk.DFuTFuyqrvS.", ".xokqe.7ofvafcsmdb7v.yznm.vlha3ufclu7sor.GrfqehgF.", "j.gnum7.tbp2.4o.83..7tugfoqmni5q.kem7mhlaAk8.cg8zp", "al..3oot.ozugxs4B.jwrABKJizc6go.khIElyzxrG.vflhyHA", ".lkgnsfbo..96cdjja8f4ikoncgdjk.e3nnh7dbc2qe7.26bpg", "vkmswIvpz..mk.6uu..3h34uug0lxAr8gDu8n29.ea8hkhij90", ".v.nupa2u9m.f2mq80ao5q.fennmok7o.mdk8kei8.h.pbg5wn", "b.r9gpf.g6kf..fcof.ibm.ut9k6cgcf3.tn7iih9tkea.1itk", "nxbqxrc4xc.2..n..1do7qscbp.or.apfpa.bkdi9.g5sdi3wn", ".dqmpEsosd6mfn.nvml3g7.xx96frwp1cyxek7d7d.chde.le7", "9hD23pm.4juqc.n.yr.r..wGFdu76.ln.iEzhtu.mBwqa.cuCv", "qEewDqd8Bju8o.vy.8h.eyz98wvvvodxmq7pgrlqhFnd.kpaE.", "lvdovqb3.a.0f1mr8.b..qrednnmpl.o.ncj9jdi8xg4qbg4wm", "9p.dkj7.j8.a.dl.hb.o9rtp.hpe.b4m.eop1mkla..ci69f.p", ".g..tIv.wf3oio3r..o.i34xx.2jvzr.fCxcn5c5fa.ihhgla3", "jp.lrs.7r4h5b7g.e.9i.l.j.hihmla.7oig.ead.sd.k.b6rh", "x.qtx.ytAi3qmq7.yqr3l..yyg2myDu7jF.cq6.7i.blk.kn63", "zjrvyNzuBk4..s.wzrt4...zzi3...w8kHzcs7e8j5cmlml.54", "z.8DKAngKoufucxG9epxjyz.0.vBD..z.z1n.rk..EmgE.vcC.", "yI8CJzmfJnuetbxF8d.x.yz0.AvACxlz.z.n..kq.EmgEpucCu", "i7wd.y.oicgn9p9dwnh.hgi.A.g5.pm89sAnhgkff.lk3b7.nh", "wjnswJvqzg0nk.6uvnp2i23vvg..xBs7..v9o3a4f98ikiik80", "cbx6atlmcdlm6of7vmejhm.BA5..cjjf9mA.el.kgtok4a5ptm", "3n.59ihn6jxocrr6vp.vmy.DC.xc.9h.gb.AfwvumGxp.ge.Gy", "6.zej8aigkAkg.w.olbzlD..xpBj9.cwj2wBdywxmKyooiiqKB", "dumiph35o.r7capld.4rauw.lmsjhc..cekq4pkncCncoaedBs", ".bsmpFuq.e8ofp1nxom..78zz87f.w...zzgl9f9fefjc.dne8", "e.n.jrf.k3g.3fc.m..f7jk..9.9gjc..mqj7fed.r.ac13fqh", "8.Bg.6ckhnDm.pyiqneCoFHzzs.mb2ezm.yEgByApNB.rkl.NE", "xI9CJyleInudtaxE7coxi.z1.AvA.wkzqy.nm.kqk.m.Dot.Cu", "ysexCIumEh8kn.ezpjpcgccnnn9.ABqgjEn.o657eg2erk.ee8", "bpmfmk77l7n87bkhg91n.qs..hoefd4l7gmo.lik8ykaj59d.o", "uljrw.smyd2kik7trjm5e67r.g3lwyp9fB.6l.60cd5ekghgc2", "tq..yDohzb9eidduldkca.ekkka.vwkfeyk5i6.58j28oeh9i.", "tl.qvFrlxc.ihi7.qil5d78.qf4kuxn9dAq7k05..e5dk.ffd3", "jngkqu.ar2e899dmh8af.ij..ffgmmcf.pke8c8..pb4i..8of", "FnvBDTGAGqa.t..BFx.as.5EE.9tGKCerN.gydjep...rsru1a", "vqeuzFrk.e8hkgcwng..dbcmml8oxynf.Bm2k525b..bpgjcf7", "msc.uuf8v7h.e5hqd4ci.lmggkikpocja..eae8d4.b.n..3..", "h6z.cyq.f.kpasda.qihkklEE3k4.ooccrDrjkokirpn.e9rr.", "ekme.qecl2hb.de.kb6h..m.pbiagia.1kok5ge..sg.e.4dri", "dfragrhgh6ig1i.cpg9gbklvu7i5eied3lt.9hhf.rj.94.irj", ".w8..vg8ybj5i3lua4fl6n.cc.kp.qdnf..edg9f8uc3rdi.sj", "Fot.ESFzHp9wtweCEw.ar65CCn8tGKBeqNCe.cido1f.rrrs.8", "w...x..pAg0nkn7v.mp3h34.uh0myBs8hEu8o2.3fa7..ijj8."};
    int inverseWalkSpeed = 72;
    int inverseDriveSpeed = 66;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 76722;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> cars = {20, 20, 20, 20, 20, 20, 20, 20, 20, 20};
    vector<int> districts = {7, 28, 19, 29, 25, 6, 15, 32, 37, 46, 21, 8, 36, 46, 36, 35, 32, 44, 10, 37, 45, 48, 19, 15, 49, 31, 32, 21, 22, 26, 29, 47, 28, 3, 11, 33, 22, 21, 34, 21, 14, 26, 4, 22, 9, 7, 44, 11, 10, 44};
    vector<string> roads = {".Qsp.D.rCK..mBL..yQZeLTT.ffw.rEy.o.3dIIBZxHBYK6gJM", "Q.4arTu.7TZ539G.ebB.qablCu.Y.u.UwUp..mtSbg8e.a..4.", "s4.UofcW3.2QH4ekb.u2oWif0.g.l.fvLGdhk..GpnpWcwhNXV", "paU.1poBXx.eAcbFLkhI9ya.qfoCeRYRbiZ39vX4RWcJSCgUDJ", ".ro1..kBH.poVuvh0vp..h2..OUE7R6Wdu2.kKF.wi4400ZZWK", "DTfp..P5CAShI35L0r7NRh7EcfVBA.kkqt9g4KlnU.hvqr.Ttf", ".ucokP.e.VR.hbHR4HT7yhpyqNj.qsgdv6fE.50wDsI4r3uIx.", "r.WBB5e.q06Hcf3.cIUQ6CsymkKP0H.XOKb9Co4.H.ROrqeDva", "C73XHC.q.5.7C2P.WqvC9J.1utR....tEHtufH79to4ZF.yITc", "KT.x.AV05.AH5..zAMbVC7g8vxdIFAHEdou.407b6fTtQbTILA", ".Z2.pSR6.A.tqQdZniU.dV6930pl.N4uNp..vCwbZrQAkQOV1i", ".5Qeoh.H7Ht.EWPjyiL8HtpDWUumf6vyH6XrRvsMzRHdm2yI3b", "m3HAVIhcC5qE.6qS3.7.I.zoE7I.zxEJRn..s68YbRKiCXorUN", "B94cu3bf2.QW6..uZvTPO.QdPyXFe464wr5X4buMfarSY.dCxj", "LGebv5H3P.dPq..39.60AW8sCv3c3.lhsl.h1mAV6..bIL.3Rs", "..kFhLR..zZjSu3.asGAfD.Q2hY6uWhoHRZ7.qb0...L.CqmGb", ".ebL004cWAny3Z9a.XXjpmsKAw.fEwHg.qT6n0nB..UDVZ3L.J", "yb.kvrHIqMii.v.sX.Q.gNsQ.8bOGmQyo.BIKCBFZOe.QXrsqV", "QBuhp7TUvbUL7T6GXQ.Q3kiHlbGtc0Z6i.Nhq.5VkBekXVweVX", "Z.2I.N7QCV.8.P0Aj.Q..9vyG5PtAIpG.8CK.Ioa0dy.R1yiof", "eqo9.Ry69CdHIOAfpg3..Y.VPK3hiOLCgOhPKBPd0lBZU.1.O.", "LaWyhhhCJ7Vt..WDmNk9Y.ViiDW9ohe7a.cE1k6.KYTsEHCY.9", "Tbia27ps.g6pzQ8.ssiv.V.b.3t8i.FOox..v.iwbPT2gWaDwk", "Tlf..Eyy189DodsQKQHyVib.vWlFHSi1y5.t9OAd.Rsxp.L.v.", ".C0q.cqmuv3WEPC2A.lGPi.v.kFj.nlP.5usWnOCOfDKeS1lGE", "fu.fOfNktx0U7yvhw8b5KD3Wk.nj4..JXI.2SJ.PY.LoiSr9rv", "f.goUVjKRdpuIX3Y.bGP3WtlFn.3BE16udwfU.5ugFJjq1eF3d", "wY.CEB.P.Ilm.Fc6fOtth98Fjj3.OWt5TNZwTJi1q8uRHkT.N8", "..le7Aq0.F.fze3uEGcAioiH.4BO.NcH5EC9s.i5c..f.5pjVG", "ru.RR.sH.AN6x4.Wwm0IOh.Sn.EWN..zZH9oD.h2QDLhy4SMUX", "E.fY6kg..H4vE6lhHQZpLeFil.1tc..6RNq.Xqmk2Fh.suHH.G", "yUvRWkdXtEuyJ4hogy6GC7O1PJ65Hz6.5m5Xo0DD..JJm2rNOv", ".wLbdqvOEdNHRwsH.oi.gaoy.XuT5ZR5.4.YQuZKp.7YQKse2k", "oUGiut6KHop6nrlRq..8O.x55IdNEHNm4.X7G7Zgs4ArDw..GY", ".pdZ29fbtu.X.5.ZTBNChc..u.wZC9q5.X...66GZ.SxfKMnBh", "3.h3.gE9u..r.Xh76IhKPE.ts2fw9o.XY7..L.dsze.ug5M.nG", "d.k9k4.Cf4vRs41.nKq.K1v9WSUTsDXoQG.L.0.JYA.4Y.JF.B", "Im.vKK5oH0Cv6bmq0C.IBk.OnJ.J..q0u76.0.MXF.UoVb.GML", "It.XFl0477ws8uAbnB5oP6iAO.5iihmDZZ6d.M...m60Jugi.J", "BSG4.nw.9bbMYMV0BFVad.wdCPu152kDKgGsJX..gf5.d..gze", "ZbpRwUDHt6Zzbf6..Zk00Kb.OYgqcQ2.psZzYF.g.Xa.N8kvX5", "xgnWi.s.ofrRRa...OBdlYPRf.F8.DF..4.eA.mfX.RR..4Rou", "H8pc4hIR4TQHKr..UeeyBTTsDLJu.LhJ7AS..U65aR..mr8A.t", "BeWJ4v4OZtAdiSbLD.k.Zs2xKojRfh.JYrxu4o0..R..H..kza", "Y.cS0qrrFQkmCYI.VQXRUEgpeiqH.ysmQDfgYVJdN.mH.lUI4g", "KawC0r3q.bQ2X.LCZXV1.HW.SS1k54u2KwK5.bu.8.r.l.OKHT", "6.hgZ.ueyTOyod.q3rwy1CaL1reTpSHrs.MMJ.g.k48.UO.SN.", "g.NUZTIDIIVIrC3mLsei.YD.l9F.jMHNe.n.FGigvRAkIKS.mJ", "J4XDWtxvTL13UxRG.qVoO.wvGr3NVU.O2GBn.M.zXo.z4HNm.r", "M.VJKf.acAibNjsbJVXf.9k.Evd8GXGvkYhGBLJe5utagT.Jr."};
    int inverseWalkSpeed = 74;
    int inverseDriveSpeed = 13;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 23828;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> cars = {24, 24, 24, 24, 24, 24, 24, 24, 24, 24};
    vector<int> districts = {28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44};
    vector<string> roads = {".nBoj2aib2npjjfvauhq8kmptiivia6ahcnBDmaise6pea6xoh", "n.h4jmwurpkg5fj9x98bw7ijmabk6crf5nugjlnvf8q4bxr9ed", "Bh.dBAMBBDlxnkq6L7jbKolAjitenrHwlFx02nFCboCjmMHefl", "o4d.onysqqgmabg6y566xceoh7gfadti8rrdfgrt9ap9aztb9a", "jjBo.lmBumz7dtturtnurbx5Dp7Ddfhag8EAEyaBxfqhmqipvq", "2mAnl.df83lrjhcuatgo9ljrqhjtia9chfkABjdfqe3pcb9xlf", "awMymd.pj9ytruqF7FsB7sxsEupGqk5hrdwMOxbqDoeyp54Gzs", "iuBsBfp.6gfEugbxjwlqixfFkkxotmoqqv6CBet0ppbziloElh", "brBqu8j6.ahzpgawdvipcsgzmirqohhkmpcBBfn6pk4vffhBlf", "2pDqm39ga.osmkgx7wks6nmrtklwld7dkfnDFnchth4sg76Api", "nklgzlyfho.An57juicbtq1C4as8njupjxbml0wg9kkpcwus68", "pgxm7rtEzsA.cuvqyqnsx9x2Dp7CcioegfHwAzhFwfvdnxpkur", "j5nadjrupmnc.hjgtfags2leqd5p08l93hvmqnhvk4n6btmeif", "jfkbthuggk5uh.5gsf68qk3w94mbhdqjdsfll5rh8ehk6tqo42", "fjqgtcqbag7vj5.mml9elm6wd8ngidmifqbqq6ocefcn7omsa5", "v966uuFxwxjqggm.F0d7EhitjdmfgkApexv69kxyahwcgGB9cg", "axLyra7jd7uytsmF.ErA0vtxAssDsl9ksjqLMthjBp9Ao18Iwq", "u975ttFwvwiqffl0E.c6Dhhticlegkzoexu69jxx9gvcgFAabf", "h8j6ngslikcna69drc.8qdapf1gfa8ne6nljkcnma7id3soi73", "qbb6uoBqpsbsg8e7A68.yjavb7m8ghwndwnbccvr3fqgbBxg49", "8wKxr97ic6txsqlE0Dqy.usxyrrCrk9jqipKLsgizo8zm28Gvo", "k7ocblsxsnq92kmhvhdju.obtf3s3ama6hyorqhym7p5eunekh", "milexjxfgm1xl36ithaaso.z67q9khsnhvcml1ug8hjnautq56", "pjAo5rsFzrC2ewwtxtpvxbz.Fr8EejneieIzDBgGyhvgpwonxt", "tmjhDqEkmt4Dq9djAifbyt6F.dw4qnztmCeki6Bk8nprgBAs8c", "iai7phukikapd48dsc17rf7rd.idcaog8pjikaol89if3tpj52", "ibtg7jpxrls75mnmslgmr3q8wi.v5aj78czswsdxp8oafrkinj", "vkefDtGoqw8CpbgfDef8Cs9E4dv.poCumDjfdaCp5ntphECp7d", "i6nadiqtolnc0higsgagr3keqc5p.7l83gvnqmhuj3m7aslfhe", "acrdfakmhdji8ddklk8hkahjnaao7.f56eortidnj3ee6lfmga", "6rHth95oh7uolqmA9znw9msnzojClf.cl8uGIt6oyicsk80Aun", "afwiachqkdpe9jipkoenjanetg7u85c.98uvyo8rp7ggckcomg", "h5l8ghrqmkjg3dfese6dq6him88m36l9.irlojirg2k87smfea", "cnFr8fdvpfxfhsqxjxnwihveCpcDge88i.AEHx1wygknlh9wvp", "nuxrEkw6cnbHvfbvqulnpycIejzjvouurA.yxay7lrhzjsuDig", "Bg0dAAMCBDmwmlq6L6jbKomzkisfnrGvlEy.3nEDcoCimMHdgl", "Dj2fEBOBBFlAqlq9M9kcLrlDikwdqtIyoHx3.mHCcqDmoNJhgm", "mlngyjxefn0zn56ktjccsq1B6asamitojxanm.vfajjqcuts78", "anFradbtncwhhroxhxnvghugBodChd68i1yEHv.uyghokf7wuo", "ivCtBfq06hgFvhcyjxmriygGklxpunorrw7DCfu.qqcAjloFmi", "sfb9xqDppt9wk8eaB9a3zm8y88p5jjypgylccayq.irjdCyj3a", "e8oafeopkhkf4efhpg7fo7hhn98n33i72groqjgqi.ia7pjifb", "6qCpq3eb44kvnhcw9viq8pjvpiotmecgkkhCDjhcri.tfbcAmg", "p4j9hpyzvspd6kncAcdgz5ngrfap7esg8nzimqoAjat.fAt7ji", "ebmamcpifgcnb67gog3bmeapg3fha6kc7ljmockjd7ff.okl93", "axMzqb5lf7wxttoG1FsB2uuwBtrEsl8kshsMNuflCpbAo.7Ixr", "6rHti94oh6upmqmB8Aox8ntoApkClf0cm9uHJt7oyjctk7.Buo", "x9ebpxGEBAskeos9IaigGeqnsjipfmAofwDdhswFjiA7lIB.lm", "oef9vlzllp6ui4acwb74vk5x85n7hgumevigg7um3fmj9xul.6", "hdlaqfshfi8rf25gqf39oh6tc2jdeangapglm8oiabgi3rom6."};
    int inverseWalkSpeed = 51;
    int inverseDriveSpeed = 36;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 28458;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> cars = {24, 24, 24, 24, 24, 24, 24, 24, 24, 24};
    vector<int> districts = {28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44};
    vector<string> roads = {".c.............f..................................", "c....l........9..................................E", "................................d.................", ".....................q................f.........D.", ".................8................................", ".l...................................4............", "..................6...m.......d...................", "...........0.............F..v.....................", "..........k.......................................", "...................................F..............", "........k.............F...........p....m..........", ".......0..............z......h..zk..t.....0......M", "...............................u..................", ".....................t............................", ".9................................................", "f.................................................", ".............................l....................", "....8........................8....................", "......6.............x.............................", "..........................8........i..............", "..................x...............................", "...q.........t.............................l...e.G", "......m...Fz.......................k..........v...", ".................................................s", "......................................2...........", ".......F..........................................", "...................8..............................", ".................................................j", ".......v..........................................", "...........h....l8......................g.........", "......d...........................................", "............u...................................y.", "..d........z......................................", "...........k......................................", "..........p.......................................", ".........F.........i..k.....................ys....", "...........t......................................", ".....4............................................", "...f....................2.........................", "..........m.......................................", ".............................g....................", ".............................................f....", "...........0......................................", ".....................l............................", "...................................y..............", "...................................s.....f........", "......................v...........................", ".....................e............................", "...D...........................y..................", ".E.........M.........G.s...j......................"};
    int inverseWalkSpeed = 71;
    int inverseDriveSpeed = 32;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 444531;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> cars = {24, 24, 24, 24, 24, 24, 24, 24, 24, 24};
    vector<int> districts = {28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44};
    vector<string> roads = {".......c.i........................................", ".......................................r.........e", ".....................n.h..........................", "..............m...............................4...", "....................................P.....S.......", "............n...............................S.....", ".............w..v.................................", "c..................................v..............", ".................z.................I..............", "i.......................E.........................", ".............................1....A...............", "....................P..........E..................", ".....n...........8................................", "......w..........................T................", "...m.................m............................", "..................w............................V..", "......v...........................Z...............", "........z...8.....................................", "...............w.............o....................", ".................................U.......0........", "...........P..........................I...........", "..n...........m...................................", ".....................................O.......v....", "..h..................................5............", ".........E......................p.................", "...............................................GP.", "..............................f............A......", "...........................................N.9....", "................................................x.", "..........1.......o...............................", "..........................f.............y.........", "...........E........................I.............", "........................p........................M", ".............T.....U..............................", "..........A.....Z.................................", ".......vI.........................................", "....P..........................I..................", "......................O5..........................", "....................I.........................b...", ".r........................................6.......", "..............................y..........z........", "...................0....................z.........", "....S..................................6..........", "..........................AN......................", ".....S............................................", "......................v....9......................", "...4..................................b...........", "...............V.........G........................", ".........................P..x.....................", ".e..............................M................."};
    int inverseWalkSpeed = 92;
    int inverseDriveSpeed = 47;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 6710412;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> cars = {24, 24, 24, 24, 24, 24, 24, 24, 24, 24};
    vector<int> districts = {28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44};
    vector<string> roads = {"....Z....................Z........................", "..................Z..........................Z....", "........................................Z.....Z...", "...............................Z....Z.............", "Z...........Z.....................................", "...............................Z.................Z", ".........................................Z.Z......", ".................Z....................Z...........", ".....................ZZ...........................", "..............................Z..Z................", ".........................Z.......Z................", "................................Z.....Z...........", "....Z...........................................Z.", "..............Z........Z..........................", ".............Z....Z...............................", ".............................Z.............Z......", "................................................ZZ", ".......Z.............................Z............", ".Z............Z...................................", "..................................Z....Z..........", ".............................Z..........Z.........", "........Z.................................Z.......", "........Z..................Z......................", ".............Z..............Z.....................", "..............................Z.............Z.....", "Z.........Z.......................................", "...................................Z.Z............", "......................Z............Z..............", ".......................Z..........................", "...............Z....Z.............................", ".........Z..............Z.........................", "...Z.Z............................................", "...........Z...........................Z..........", ".........ZZ.......................................", "...................Z..........................Z...", "..........................ZZ......................", "...Z.....................................Z........", ".................Z........Z.......................", ".......Z...Z......................................", "...................Z............Z.................", "..Z.................Z.............................", "......Z.............................Z.............", ".....................Z.........................Z..", "......Z........Z..................................", "........................Z.........................", ".Z.............................................Z..", "..Z...............................Z...............", "..........................................Z..Z....", "............Z...Z.................................", ".....Z..........Z................................."};
    int inverseWalkSpeed = 63;
    int inverseDriveSpeed = 58;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 9393558;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> cars = {24, 24, 24, 24, 24, 24, 24, 24, 24, 24};
    vector<int> districts = {28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44};
    vector<string> roads = {".vd.vamugu7lkfioop7cy9rrJDqr.Gg6.rzHt.yucol.uE..Hp", "v.mypnxAgFoB..InLm.DgA7tAy46A.EsvNa.2ye4i79tytcgEI", "dm..h3cj.m.f5d..oa9gld.evp.gwr.gh.mtktk.8effiqbnum", ".y....k.tjy.muz..gAAizrc40ws5bwHIx.2w3kty.yH.6o.4s", "vph..kebiio.cou6.5qtbr.5d8m.ebqxyvhcnb.kokox98edep", "an3.k.f.6o3h8e.d.e5gnchizthhzvhcdrox.wnk6fecmtdpxn", "mxckef.8j8i4d9.afb.gofp.pis.qqcrrgtnun.tlprq..kqlb", "uAj.b.8..6qbhhmck..o.ns6i.wtjmjzzktfxgovstw.1hn.df", "gg.ti6j...8m6krcvc9nijaix..axrngixhvduhd588gnq7kxt", "uFmjio86..r8mfhheiululxdoiBy.tfzzdzmCnvBvyAy8.sw.9", "7o.yo3iq8r.jcfl.qh2.qc.lCw..D.i8a..AlAqm5ge8pxfsBp", "lBf..h4bm8j.h6.fagmct.udtmwuuv8rqbxryruxotvqcrpvo6", "k.5mc8dh6mch.ip.s5emej.bqlecqlllmtgog.efbbelgk.gqp", "f.duoe9hkff6i.6iaji5w5.iztv.AA2lkczxyxwxkttki..yv9", "iI.zu..mrhl.p6.p5.n5D8BoFyCBGG3pn8GDFDE.r.z..D.FA8", "on..6dacch.f.ip.q0jndlf5kfjglhlq.rhikieihgjqafaf.m", "oLo...fkveqasa5q.rsbEeEoDxGEEG.vt2IBICFHvD..m.z.x4", "pmag5eb.cihg5j.0r.kocme5keifkgmr.sgik.dihgjrbfaekn", "7.9Aq5..9u2meinjsk.hsejoFzijFA...vr.lC.m4gd6szgtEs", "cDgAtggonl.cm55nboh.B3xoGz.xGF4jheDDBEBBlvuhpDtDBd", "yglibno.iuqtewDdEcsB.yagjhfbj9zzB.5ieh1bnejzlca1n.", "9Adzrcfnjlc.j58leme3y.umExuuFD.ge.ACxCyxi.rfoBpAAf", "r7.r.hpsax.u..BfEejxau..tq40tlx.sF7s4r.3f3..qm.b.B", "rtec5i.6idldbio5o5oogm..haplihl.vomfqfio.mpu4egifj", "JAv4dzpixoCtqzFkDkFGjEth...u0aBMNCp.y1lvCxBLg6rj7y", "Dyp08ti..iwmltyfxezzhxqa..vr7bv.Hwo3v4jsxtxF96ni5r", "q4.wmhsw.B.wevCjGii.fu4p.v.3z.znqIbx2w..d24our8g.D", "r6gs.h.tay.uc.BgEfjxbu0lur3.ulxps.8t3s92e37.rn5c.B", ".Aw5ezqjx.DuqAGlEkFGjFti07zu.9CMNDp2y2lvCxCMh..j.z", "G.rbbvqmrt.vlAGhGgAF9Dlhab.l9.CH..fa.8bmwotHj4k9gB", "gE.wqhcjnfi8l23l.m.4z.xlBvzxCC.nlaCzBAzBn..mkzsBx8", "6sgHxcrzgz8rllpqvr.jzg..M.npMHn.2xyK.Jxs.mi0yGnAKv", ".vhIydrzizaqmkn.t..hBesvNHqsN.l2.wALtLAvdol1zIpCLu", "rN.xvrgkxd.btc8r2sve..FoCwI.D.axw.KAKBGJxFFwmCAHw4", "zam.hotthz.xgzGhIgrD5A7mpob8pfCyAK..9.36mb..ria5uF", "H.t2cxnfvmAroxDiBi.DiCsf.3xt2azKLA..x0ku.v.Je5q.5w", "t2kwn.uxdClygyFkIklBex4qyv23y.B.tK9x.wc2g4.rv.9fBG", ".yt3bwngunAr.xDiC.CEhCrf14ws28AJLB.0w.jtAvzJf4ph7.", "yekk.n.ohvquewEeFd.B1y.ilj.9lbzxAG3kcj.9mdiym.92.B", "u4.tkktvdBmxfx.iHimBbx3ovs.2vmBsvJ6u2t9.h59tto8c.E", "ci8yo6ls5v5obkrhvh4lnif.CxdeCwn.dxm.gAmh..8brwcpCu", "o7e.kfpt8ygtbt.gDggve.3mxt23xo.moFbv4vd5..4nrq5fzA", "l9fyoerw8Aevetzj.jdujr.pBx47Ct.ilF...zi984.jvv9kDB", ".tfHxcq.gy8qlk.q.r6hzf.uLFo.MHm01w.JrJytbnj.y.oBKu", "uyi.9m.1n8pcgi.ambsploq4g9urhjkyzmrevfmtrrvy.flnch", "Etq68t.hq.xrk.Df.fzDcBme66rn.4zGICi5.4.owqv.f.lcbx", ".cboedkn7sfp...azagtap.grn85.ksnpAaq9p98c59oll.ctw", ".gn.dpq.kwsvgyFf.etD1Abijigcj9BACH5.fh2cpfkBncc.oC", "HEu4exldx.BoqvA.xkEBnA.f75...gxKLwu5B7..CzDKcbto.s", "pImspnbft9p6p98m4nsd.fBjyrDBzB8vu4FwG.BEuABuhxwCs."};
    int inverseWalkSpeed = 94;
    int inverseDriveSpeed = 84;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 81026;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> cars = {24, 24, 24, 24, 24, 24, 24, 24, 24, 24};
    vector<int> districts = {28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44, 28, 44};
    vector<string> roads = {"...8M....0XQ..MOj.2e7..3D3S.D..D...qG..I..Zh...T..", ".........G.b...C.ulzDt.W..H.B.EFx.b.1..Y.J.DdYV.u.", "...KtH.z...S...E.Z....ivuH..QpZ3pZ.P..Cf...rRq....", "8.K.0BU....L.q.a..f....Z.....t.b....0F....15ey....", "M.t0...7.C...ibz7.VD..d.igq....L....XIgD.....QY.tB", "..HB...4..Wd...X..UP....aEP..j.U.F.X....k...G.Lrb.", "...U...........kbHK.69.V..z.ao0FmSH..E..KQI.....m.", "..z.74.....F.q.D.JFi49....ik.hU.NA.C..V...x4.ZAPvP", "..........V....Y.2....HtkE.115.y.L.5.8Kc....4.C.F.", "0G..C.....3..1.f.y..Y0..w.dZ.uH..u.7xi.9mh..6.yT.Z", "X....W..V3..V2......Tbe....Ym...J.C..27f.DS.m.Couq", "QbSL.d.F.......9......t.Em..isH..Y....9d.l..XD....", "..........V......V.....N0A...V.Va.vk......UtJ.W..Q", "...qi..q.12...S...Nd.t4....7Xsd..ooyubqw......h..O", "M...b........S..u.......5t...fT.T.U...i.X.F.I...g.", "OCEazXkDYf.9....s.....m...B...4TjN.....q.......h.S", "j...7.b.......us.F5u.Y8....1..i.Idv1..Y....38..1..", ".uZ...HJ2y..V...F.......7.9zIkEu..7..S.Uxg.m..H...", "2l.fVUKF.....N..5..0Zuxb.U.i....zrP..lQTn.n1x.iau.", "ez..DP.i.....d..u.0.2A......2Q......z...KUP.7...z.", "7D....64.YT.......Z2.a.....ko.x..G...7w.J....xK.RQ", ".t....99.0b..t..Y.uAa.Q.p..D...x..v6DX.....GI..6FD", "..i.d...H.et.4.m8.x..Q..9bz.l.Cn.t.4P6.F.b..8jpfD.", "3WvZ..V.t...N.....b..........3Q.....8q.n...d3.7E..", "D.u.ia..kw.E0.5..7...p9..R6J..R..N..AM.QM.1SP.....", "3.H.gE..E..mA.t...U...b.R.MUA...O.5BshG...w...sG4.", "SH..qPzi.d.....B.9....z.6M...Q08.t.Pi....E.ufs.bi.", ".......k1ZY..7..1zi.kD..JU...M7..k..t..A....7G.6.L", "DBQ...a.1.mi.X...I.2o.l..A......X.c...QXA....G.F..", "..pt.joh5u.sVsf..k.Q...3..QM..k.5.Y.wm.iEKpJ.A...j", ".EZ...0U.H.H.dT4iE..x.CQR.07.k.IKSFBW44....D.....w", "DF3bLUF.y...V..T.u...xn...8...I...2.re.kXZ7.O.8...", ".xp...mN..J.a.TjI.z......O..X5K..3...A..I..6.O0W..", "..Z..FSALu.Y.o.Nd.r.G.t.N.tk..S.3.wE...d......R..2", ".b....H...C.voU.v7P..v...5..cYF2.w....Y2.f.Vw.K..X", "q.P..X.C57..ky..1....64..BP...B..E..4jSV..dL....Yi", "G1.0X....x...u.....z.DP8Asit.wWr...4.U..194R...m.Z", "...FI.E.8i2..b...Sl.7X6qMh...m4eA..jU..Vh1y....a..", "..C.g..VK.79.qi.Y.Q.w....G..Q.4...YS.............7", "IYf.D...c9fd.w.q.UT...FnQ..AXi.k.d2V.V........Yl.5", ".....kK..m....X..xnKJ...M...AE.XI...1h.....W...H.2", ".J....Q..hDl.....g.U..b...E..K.Z..f.91....cco...Yn", "Z..1..Ix..S.U.F...nP....1w...p.7...d4y...c.lO....x", "hDr5...4....t...3m1..G.dS.u..JD.6.VLR...Wcl..ViKFK", ".dRe.G..46mXJ.I.8.x7.I83P.f7...O..w......oO...c...", ".YqyQ..Z...D........x.j...sGGA..O..........V..uS..", ".V..YL.ACyC.Wh...Hi.K.p7.s.....80RK....Y...icu.n..", "T....r.P.To....h1.a..6fE.Gb6F...W...ma.lH..K.Sn.y.", ".u..tbmvF.u...g...uzRFD..4i........Y.....Y.F...y.x", "....B..P.Zq.QO.S....QD.....L.jw..2XiZ.752nxK....x."};
    int inverseWalkSpeed = 68;
    int inverseDriveSpeed = 5;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 23800;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> cars = {13, 13, 13, 13, 13, 13, 13, 13, 13, 13};
    vector<int> districts = {46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32};
    vector<string> roads = {"..........................................a.....4.", ".................v............................W...", ".............................7....2...............", "..............................Gs..................", "................V.........t.......................", "................................V........U........", "............v.........................W...........", "...............0.................R................", "..................C.....8.........................", "...........4...............................4......", "......................r..................r........", ".........4..................................8.....", "......v..........................................h", "..................D..................i............", ".......................9m.........................", ".......0..................................e.......", "....V.............................................", ".v..................L.............................", "........C....D....................................", "......................I......................h....", ".................L..............................U.", ".........................5I.......................", "..........r........I..............................", "..............9.........................k.........", "........8.....m...................................", ".....................5.....s......................", "....t................I............................", ".........................s.........g..............", "....................................c..........h..", "..7..........................................o....", "...G..............................J...............", "...s...................................C..........", ".....V..............................K.............", ".......R...............................Z..........", "..2...........................J...................", "...........................g................6.....", "............................c...K.................", ".............i...................................y", "......W....................................B......", "...............................C.Z................", ".......................k.......................S..", ".....U....r.......................................", "a..............e..................................", ".........4............................B...........", "...........8.......................6..............", "...................h.........o....................", ".W................................................", "............................h...........S.........", "4...................U.............................", "............h........................y............"};
    int inverseWalkSpeed = 13;
    int inverseDriveSpeed = 1;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 439720;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> cars = {13, 13, 13, 13, 13, 13, 13, 13, 13, 13};
    vector<int> districts = {46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32, 46, 32};
    vector<string> roads = {"..............................................Z.Z.", "...Z.....Z........................................", "...........................Z......Z...............", ".Z.......................Z........................", "............Z............Z........................", "..............Z...........Z.......................", ".....................Z............Z...............", "...........................................Z....Z.", "..........................Z...............Z.......", ".Z.....................................Z..........", "..................Z.................Z.............", ".................................Z....Z...........", "....Z..................Z..........................", "..............Z.........................Z.........", ".....Z.......Z....................................", "...................Z......................Z.......", ".....................................Z............", "........................Z...........Z.............", "..........Z......................Z................", "...............Z.....................Z............", "........................Z..........Z..............", "......Z........................................Z..", ".............................Z..........Z.........", "............Z......................Z..............", ".................Z..Z.............................", "...ZZ.............................................", ".....Z..Z.........................................", "..Z..........................Z....................", "..............................Z..............Z....", "......................Z....Z......................", "............................Z..Z..................", "..............................Z.Z.................", "...............................Z......Z...........", "...........Z......Z...............................", "..Z...Z...........................................", "....................Z..Z..........................", "..........Z......Z................................", "................Z..Z..............................", "...........Z....................Z.................", ".........Z..................................Z.....", ".............Z........Z...........................", "...........................................Z.....Z", "........Z......Z..................................", ".......Z.................................Z........", ".......................................Z.........Z", "............................Z..................Z..", "Z.................................................", ".....................Z.......................Z....", "Z......Z..........................................", ".........................................Z..Z....."};
    int inverseWalkSpeed = 66;
    int inverseDriveSpeed = 10;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 4974260;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> cars = {8, 41, 36, 25, 19, 26, 24, 7, 18, 34};
    vector<int> districts = {8, 5, 8, 15, 8, 45, 8, 3, 8, 31, 8, 1, 8, 25, 8, 25, 8, 9, 8, 22, 8, 38, 8, 39, 8, 4, 8, 9, 8, 4, 8, 45, 8, 45, 8, 47, 8, 4, 8, 10, 8, 20, 8, 17, 8, 30, 8, 16, 8, 2};
    vector<string> roads = {".l7epinqdfplekjjirx6p6lbwuu2laiduDfhitbic3yopsxtlq", "l.kz39b4i6696pe2gjhnjsbhsdbmka7hahw4omwkphfadpp7pk", "7k.godin5fpnccnhnkr3uao4opu5rbejuAbiamcak6uiskpqrv", "ezg.DuyDltDAsnxxwzHbD7AkBGIcypurJQawmB3pmhLzExDGwE", "p3oD.de3na49btf6hmhsjwblue8rkebj6eA7soAosmedcss5qj", "i9dud.4aabgi6fm6madirok9iblirb1lkmobedqasfg4nfhcus", "nbiye4.adfilbgp9q78mvtndg6mnvf5qljrfgaucxkc0pddbzw", "q4nD3aa.lb8daqj5kidrnwfkracrof9m9cz9qlAluma9goo2tn", "di5lnadl.gpoc7qfqem9wgq1ikubudbnuxdi6gg4qbqetejnwx", "f6ftabfbg.974oa6amnigm8eujegf39afos2npqkibmfcrtfjg", "p6pD4gi8p9.5cwb9dqmtew7nzj4rgeeg5hC7vtBrpljh7wwame", "l9nA9ildo75.cw5b7trq9s1mBn8nabgbanz6vwxrkiok4yzfga", "e6csb6bac4cc.jf4fijglldapghfk44ehnp5ikpflbkahmodnl", "kpcntfgq7owwj.ymydneElx9dnBhClhvABdp0ej4xjthB9gsEF", "jenxfmpjqab5fy.g1xwp5q3oFtdm4ck6gtzaxAwufhup6BDla6", "j2hx6695f69b4mg.hhgllqdepcekl84hdit5lkthpgf8gmn8qm", "ignwhmqkqad7fy1h.yyo6o5oFugl3ck4ivybxBuucgwq8CEn87", "rjkzma7iemqtidxhy.9oDvvf8auqCmcxsoqmd2vaCog8x65iGD", "xhrHhd8dmnmrjnwgy9.vBCtmg3pwBoeynfzlnaDjFt68ugccGB", "6n3bsimr9itqgeploov.v6q8rty3reijyE9ldq7ej7znunturw", "pjuDjrvnwge9lE5l6DBv.v7uLxes4ipbhvFfDFBAinyu6HJpa0", "6sa7wotwgmwsllqqovC6v.sfyAB5rhojCJcpkx5lgaFtwuAzpw", "lboAbknfq871dx3d5vtq7s.oDp9o8ciacpA8wyxtiiqm3ABie7", "bh4kl9dk1enma9oeofm8ufo.kksasbaksweg8hg6o9pdrgkmtv", "wsoBuigriuzBpdFpF8grLyDk.iDuKtkEBwque5xdIungG33rNL", "udpGeb6akjjngntcua3txApki.muylbvjdyincCiCr56rhe8Dy", "ubuI8lmcue48hBdegupyeB9sDm.whjjk2gHcAxFwtqkl7BAcoe", "2m5crinrbgrnfhmklqw3s5oauuw.ocigwEcjgs9gf4znsqvuot", "lkrykrvoufgakC4l3CBr4r8sKyho.gp7kyBfBFxydkzu9GIr55", "aabpebffd3eb4lc8cmoeihcbtljcg.9ajsn6kpmhg7ofgpsijj", "i7eub159b9eg4hk4kceipoiakbjip9.kilp9gfrcqfg5khjbtq", "dhjrjlqmnagbev6h4xyjbjakEvkg7ak.mytctzpr8cxqdADp8c", "uauJ6kl9uf5ahAgdisnyhCcsBj2wkjim.dHczvGvvrhkazyaqh", "DhAQemjcxohnnBtivofEvJpwwdgEyslyd.LlAqNwHz8iows9Ev", "fwbaAorzdsCzpdztyqz9FcAeqyHcBnptHL.ucr7gshEsEntBBG", "h4iw7bf9i2765pa5bmllfp8guicjf69cclu.optlkekebrtckg", "ioamsegq6nvvi0xlxdndDkw8enAgBkgtzAco.ei3whshAagrCE", "tmmBodalgptwkeAkB2aqFxyh5cxsFpfzvqrpe.xbFrhbA53lIG", "bwc3AquAgqBxpjwtuvD7B5xgxCF9xmrpGN7tix.lmeHvCtzDvC", "ikapoacl4krrf4uhuajeAlt6diwgyhcrvwgl3bl.vgocx8enAB", "cpkmssxuqipklxfpcCFjigioICtfdgq8vHskwFmv.dFwmEIy9j", "3h6hmfkmbblibjhggot7nai9urq4k7fcrzhehregd.vknqupko", "yfuLegcaqmjoktufwg6zyFqpn5kzzogxh8EkshHoFv.brnj8Fy", "oaizd409efhkahp8q88nutmdg6lnuf5qkisehbvcwkb.peeayv", "pdsEcnpgtc74hB6g8xuu6w3rGr7s9gkdaoEbAACxmnrp.DEig6", "spkxsfdoerwym9BmC6gnHuAg3hBqGphAzwnra5t8EqneD.6pJI", "xppDshdojtwzogDnE5ctJABk3eAvIsjDysttg3zeIujeE6.nMK", "t7qG5cb2nfafdsl8nicupzimr8curibpa9BcrlDnyp8aipn.wp", "lprwquztwjmgnEaq8GGrapetNDoo5jt8qEBkCIvA9kFygJMw.a", "qkvEjswnxgealF6m7DBw0w7vLyet5jqchvGgEGCBjoyv6IKpa."};
    int inverseWalkSpeed = 53;
    int inverseDriveSpeed = 7;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 41985;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> cars = {8, 41, 36, 25, 19, 26, 24, 7, 18, 34};
    vector<int> districts = {8, 5, 8, 15, 8, 45, 8, 3, 8, 31, 8, 1, 8, 25, 8, 25, 8, 9, 8, 22, 8, 38, 8, 39, 8, 4, 8, 9, 8, 4, 8, 45, 8, 45, 8, 47, 8, 4, 8, 10, 8, 20, 8, 17, 8, 30, 8, 16, 8, 2};
    vector<string> roads = {"..........................................6.......", "..y.................................v......x......", ".y...........5....................................", "........................o.........................", ".....................r..............7.............", "...........................m......................", "............x.....................................", "..........................i.......................", "............................................z.....", ".............................5......3...........af", "............................................ol...m", "............................9.....................", "......x............7..............b...............", "..5...............................................", "................r......2......F.......a.p.........", ".......................................o.y........", "..............r..........a.......................h", "..............................z...................", ".........................................b........", "............7...................r.................", "..........................................A.....C.", "....r..........................................k..", ".............................m....................", "..............2...................................", "...o.........................g................l...", "................a....................l............", ".......i...................r....................i.", ".....m....................r.......................", "...........9.....................................d", ".........5............m.g.......j.................", "..............F..z................................", "......................................G...........", "...................r.........j....................", "................................................7.", "............b.....................................", "....................................7.............", ".v..7....3.........................7..............", ".........................l........................", "..............a................G..................", "...............o..................................", "..............p..........................B........", "...............y..b.....................B.........", "6...................A.............................", ".x................................................", "........z.o.......................................", "..........l.......................................", "........................l.........................", ".....................k............................", ".........a..........C.....i......7................", ".........fm.....h...........d....................."};
    int inverseWalkSpeed = 97;
    int inverseDriveSpeed = 96;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 668285;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> cars = {8, 41, 36, 25, 19, 26, 24, 7, 18, 34};
    vector<int> districts = {8, 5, 8, 15, 8, 45, 8, 3, 8, 31, 8, 1, 8, 25, 8, 25, 8, 9, 8, 22, 8, 38, 8, 39, 8, 4, 8, 9, 8, 4, 8, 45, 8, 45, 8, 47, 8, 4, 8, 10, 8, 20, 8, 17, 8, 30, 8, 16, 8, 2};
    vector<string> roads = {"...................D.....D........................", "...z.........d....................................", "...............F........................x.........", ".z.....................K..........................", "...................I...........................s..", "...........................v.......s..............", ".................6...........4....................", "..........................y.........f.............", "............3G....................................", "..........................................C.......", "......................o.......3...................", "......................z..............I............", "........3................z........................", ".d......G.........................................", "...........................................X.....G", "..F.................................G.............", "....................b.......O.....................", "......6..................................q........", "...............................D.7................", "D...I.............................................", "................b...............A.................", "........................b.........h...............", "..........oz......................................", "...K......................................B.......", ".....................b..........7.................", "D...........z.....................................", ".......y..........................4...............", ".....v................................4...........", "................O............................5....", "......4......................................o....", "..........3....................................4..", "..................D....................m..........", "....................A...7.........................", "..................7......................1........", ".....................h....4.......................", ".....s............................................", ".......f.......G..................................", "...........I...............................6......", "...........................4....................S.", "...............................m............j.....", "..x.............................................f.", ".................q...............1................", ".........C.............B..........................", "..............X......................6............", ".......................................j......B...", "............................5o....................", "............................................B....w", "....s.........................4...................", "......................................S.f.........", "..............G...............................w..."};
    int inverseWalkSpeed = 96;
    int inverseDriveSpeed = 19;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1421107;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> cars = {8, 41, 36, 25, 19, 26, 24, 7, 18, 34};
    vector<int> districts = {8, 5, 8, 15, 8, 45, 8, 3, 8, 31, 8, 1, 8, 25, 8, 25, 8, 9, 8, 22, 8, 38, 8, 39, 8, 4, 8, 9, 8, 4, 8, 45, 8, 45, 8, 47, 8, 4, 8, 10, 8, 20, 8, 17, 8, 30, 8, 16, 8, 2};
    vector<string> roads = {"..............................Z..........Z........", "..........................Z............Z..........", "....................Z..........................Z..", "...............Z........................Z.........", "...................Z..........................Z...", ".............Z...............................Z....", "..........................Z.......Z...............", ".............................Z...Z................", "...........Z................Z.....................", "..........Z.......................................", ".........Z....Z...................................", "........Z............Z............................", "........................Z.......................Z.", ".....Z.............................Z..............", "..........Z.....Z.................................", "...Z........................................Z.....", "..............Z..........................Z........", "...........................Z....................Z.", "...........................................Z.Z....", "....Z...........................Z.................", "..Z.......................................Z.......", "...........Z.............Z........................", ".......................Z......................Z...", "......................Z........Z..................", "............Z.............................Z.......", ".....................Z......................Z.....", ".Z....Z...........................................", ".................Z...................Z............", "........Z....................Z....................", ".......Z....................Z.....................", "Z...................................Z.............", ".......................Z.............Z............", "...................Z.............................Z", ".......Z............................Z.............", "......Z...............................Z...........", ".............Z....................................", "..............................Z..Z................", "...........................Z...Z..................", "..................................Z........Z......", ".Z.............................................Z..", "...Z.............................................Z", "Z...............Z.................................", "....................Z...Z.........................", "..................Z...................Z...........", "...............Z.........Z........................", ".....Z............Z...............................", "....Z.................Z...........................", "..Z....................................Z..........", "............Z....Z................................", "................................Z.......Z........."};
    int inverseWalkSpeed = 79;
    int inverseDriveSpeed = 73;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 4133106;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> cars = {8, 41, 36, 25, 19, 26, 24, 7, 18, 34};
    vector<int> districts = {8, 5, 8, 15, 8, 45, 8, 3, 8, 31, 8, 1, 8, 25, 8, 25, 8, 9, 8, 22, 8, 38, 8, 39, 8, 4, 8, 9, 8, 4, 8, 45, 8, 45, 8, 47, 8, 4, 8, 10, 8, 20, 8, 17, 8, 30, 8, 16, 8, 2};
    vector<string> roads = {".Driokf.pzh2vAotBbbh2llkcyC8ac.G5kC.1g.fan.w.z..Ea", "D.vAmrEFotr..2us9AvCBuiw..6GDLdry.w.FM.vwgx8y7Ap0.", "rv.998fn6.wpat23m.fcoCq5e6p.ioqglpatro.ygo.ngw9nvh", "iA9.d85d..sgix7ct682.xp36.vb8erqeokxiept9oarpz0jA8", "om9d.5im2.on6k78fgcglth.eehmjqghig.kprgrd.bdlmefmi", "kr885.dh5f.ibp58ka7ahti4.fmge.jlehipklip8hai.r.esd", "fEf5id.9ios.oBdiy492dxr96.A6.8.w.qqCe8r.9rgwvC..F.", ".Fndmh9.nwm2tC.pB69b5qog8uC246sD6nyD.apl8poxEBe..5", "po6.25in.aro.m54ggdfnwk.ebi.jqjfkjdmqrktei.gipdioi", "zt...fowa.Bx.sa.jonlwHue.4murxt8tt3rzwuEos7m8wi.tq", "hrwso.smrB..uotwtnis.58rlCsoo.dFf8Fq.x93i.ynKlt8so", "2.pgni.2ox..uBmrB8ae3nmi9wC57.rE5mAC1dn.9oqwFAgf.7", "v.ai6bot..uu.ka6cmjls.mdkbf.pwk.pmbjwxm.k.befoimm.", "A2txkpBCmsoBk.sq9.sAxrftvw6.AIarvf...K.s.dv5y5ym3A", "ou2775d.5atmas.4mdcalzo3c9ojgmoijnds.movdm4liv.ku.", "ts3c88ip4.wr6q4.j.gfqCp8g6molr.dno8qtrpyhn3keu.nsk", "B9mtfkyBgjtBc9mj.vq.yykoto2ByGghvkm7CHjxrho6oeto9x", "bA.6ga46gon8m.d.v.55.s.92mx529pw8lryb.no4nhs.y7f.1", "bvf8c799dniajscgq5.9.oh92msa7fku6gqtch.k0hhnv.9aw7", "hCc2ga2bflselAaf.59.fy.76iy96bttdpnAgbrt9qdusB2kD5", "2Bo.lhd5nw.3sxlqy..f..ji9vz88cn.2izz3gkf8.qtFwhbB9", "luCxttxqwH5n.rzCysoy..dxrIxttxhLkdLtnBe4ogEr.nyevt", "liqphiroku8mmfopk.h.jd.nkwjqov4xh0yhny.ch2sd.dq7.o", "kw53.49g.eridt38o997ixn.8cr.ci..f.hulin.a..nmw4iwb", "c.e6e.68e.l9kvcgt2269rk8.lu85.nu7jqwcekm2kgpvv.dy4", "y.6.ef.ub4Cwbw96ommivIwcl.rspuvctv4vytwFnu4q9Afuyo", "C6pvhmACimsCf6om2xsyzxjrur.CAHfkwj.4DJiwtgq5r.wo6z", "8G.bmg62.uo5..joB5a98tq.8sC.24u.8p.E77qo.rn.CD.iG3", "aDi8je.4jro7pAgly2768toc5pA2.6sz8o.B.8po7p.vzB9hE0", "cLoeq.86qx..wImrG9fbcxvi.uH46.zFduzIa3vsewp.EIenL.", ".dqrgj.sjtdrkao.gpktnh4.nvfusz.ul4w..B3hk2s.A8sber", "GrgqhlwDf8FE.ridhwut.Lx.uck.zFu.Aw7pHFwIvugm7wqx..", "5yleie.6ktf5pvjnv86d2khf7tw88dlA.gx..hh.5in.Cu.9z8", "k.poghqnjt8mmfnoklgpid0.jvjpou4wg.xhmx0.g.rdBdp6kn", "Cwak.iqyd3FAb.d8mrqnzLyhq4...zw7xx.uCy.Irv9p4Akwwt", "..txkpCDmrqCj.sq7ytAzthuwv4EBI.p.hu.D.guue.5x7yn2B", "1Fripke.qz.1w..tCbcg3nnlcyD7.a.H.mCD..oi.ptyIBifGa", "gMoerl8arwxdxKmrH.hbgByietJ783BFhxy...ywgzoEDKeqN9", "...pgirpku9nm.opjn.rke.nkwiqpv3wh0.goy..h.scCcq.io", "fvytrp.ltE3..svyxoktf4c.mFwooshI..Iuiw...fA.Nouawo", "awg9d898eoi9k.dhr4098oha2nt.7ekv5gru.gh...inwtaa.6", "ngoo.hrpis.o.dmnhnhq.g2.kugrpw2ui.vepz.f..raAbp8hp", ".x.abago.7yqbv43ohhdqEs.g4qn.psgnr9.tosAir.oeyapx.", "w8nrdiwxgmnwe5lk6snutrdnpq5.v..m.dp5yEc.nao.t9si8u", ".ygpl.vEi8KFfyieo.vsF..mv9rCzEA7CB4xIDCNwAet.DpByy", "z7wzmrCBpwlAo5vuey.BwndwvA.DBI8wudA7BKcotby9D.Ak8A", ".A90e..editgiy..t792hyq4.fw.9esq.pkyiequapaspA.kB8", ".pnjfe..i.8fmmknofakbe7iduoihnbx96wnfq.aa8piBkk.qh", "E0vAmsF.ots.m3us9.wDBv.wyy6GELe.zkw2GNiw.hx8y8Bq.D", "a.h8id.5iqo7.A.kx1759tob4oz30.r.8ntBa9oo6p.uyA8hD."};
    int inverseWalkSpeed = 69;
    int inverseDriveSpeed = 27;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 50529;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> cars = {8, 41, 36, 25, 19, 26, 24, 7, 18, 34};
    vector<int> districts = {8, 5, 8, 15, 8, 45, 8, 3, 8, 31, 8, 1, 8, 25, 8, 25, 8, 9, 8, 22, 8, 38, 8, 39, 8, 4, 8, 9, 8, 4, 8, 45, 8, 45, 8, 47, 8, 4, 8, 10, 8, 20, 8, 17, 8, 30, 8, 16, 8, 2};
    vector<string> roads = {"...5......1.k...g....K......Rb.UM....S.U..........", "....g.2.l.RO....l....H.u..Z.........QM....A.......", "...S...3.O..icW....l.......3...YG.s.w.3..g........", "5.S...a.B.......w.G.....E.l...w..T...vTN7msZ..C..R", ".g...k.I.....QL...8..7..O.........cQ..D...E..B....", "....k..X......6..I.w..e..I......5.....T.OQ3....axp", ".2.a...OqN.o.........3.u.1c........H..9...Sx.L.Zs.", "..3.IXO..kYO...1.T..R.F.1....e.6..Q.N.aH.....G..Z.", ".l.B..q......J....I....L......9...x.7w..y1.q7.R...", "..O...Nk....0Zc5.S...kJH.c2eZ..K7..6C..uNK.......I", "1R.....Y.....nkV.v..n.P.X.3R.r...b........tH.x.b..", ".O....oO.........bg....SQ..zu1...R....j....uXuGXP.", "k.i......0......iR..7.....k.u...JG.......HA.5.....", "..c.Q...JZn.....m......3.NmS....y..z..Pz25nw..AMX.", "..W.L6...ck.....5....x...Y.ph.....U.W..0q.....n...", ".......1.5V.....iw....w.2..Z...x...2.a...L.BX.1G..", "gl.w........im5i..4......x.....h.l...1...Z1.1.qRw.", ".....I.T.SvbR..w..k.........Ziit..q.VNl....ur17..w", "...G8...I..g....4k..X..uw...9Q......O.n.........E.", "..l..w................xDb.r...iN..q..M3....q..HK.Q", ".......R..n.7.....X....G....WKV.Z..Vk.y..jG....k..", "KH..7.3..k....x.......8..p......2...uV..M.5...n...", ".....e.F.JP....w...x.8..............OQ....A.8m.hY.", ".u....u.LH.S.3....uDG....x....F...Z.......B.....KV", "...EO..1..XQ...2..wb......X....4...P..J...l..4.V..", ".....I1..c...NY.x....p.x..5MH.....71fgT....K9..3.y", ".Z.l..c..23.km.....r....X5............U...Jn.JF...", "..3......eRz.SpZ.........M...ik..i....Dx.........B", "R........Z.uu.h..Z9.W....H..........Hs..AN.......b", "b......e..r1.....iQ.K......i.....h..H.WKt6.pB...Y.", "...w....9........i.iV..F...k...utZ.1Ro.......k.h.q", "U.Y....6.K.....xht.N....4.....u..X....x2W....q.S..", "M.G..5...7..Jy......Z2........t......C...W.c..B...", "...T......bRG...l..........i.hZX....b......4....S.", "..s.c..Qx.....U..q.q...Z.7.............v.f..w.J.Rz", "....Q.H..6...z.2....V...P1....1.....C.M....1Y....X", ".Qw....N7C....W..VO.kuO..f..HHR..b.C.4.a..b....1..", "SM.v....w......a1N.M.VQ..g..s.o.C...4...4.j.......", "..3TDT9a...j.P...ln3y...JTUD.W.x...M.....I........", "U..N...H.u...z0............x.K.2..v.a.........j...", "...7.O..yN...2q......M......At.W.....4....I.....IZ", "..gm.Q..1K..H5.LZ...j.......N6..W.f...I........d..", ".A.sE3S...t.An..1...G5ABl.J.........bj..I...Ha....", "...Z..x.q.Hu.w.B.u.q.....Kn..p..c4.1........6o....", "........7..X5..X1r....8..9...B....wY......H6.k.E..", "....B.LG..xu.....1....m.4.J...kq..........aok.yy.T", "...C....R..G.An1q7.H.n....F.....B.J....j.....y...f", ".....aZ...bX.M.GR..Kk.h.V3....hS....1....d..Ey...5", ".....xsZ...P.X..w.E...YK.....Y...SR.....I.........", "...R.p...I.......w.Q...V.y.Bb.q...zX....Z....Tf5.."};
    int inverseWalkSpeed = 26;
    int inverseDriveSpeed = 6;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 20704;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> cars = {1, 0, 5, 21, 37, 43, 17, 16, 47, 34};
    vector<int> districts = {1, 25, 46, 15, 43, 2, 10, 21, 4, 21, 46, 38, 23, 41, 30, 48, 21, 8, 37, 27, 7, 40, 12, 18, 11, 0, 46, 6, 27, 11, 34, 39, 27, 32, 16, 49, 0, 46, 18, 22, 3, 21, 6, 32, 36, 6, 27, 8, 27, 8};
    vector<string> roads = {".zd9GtIrizGwHrOcDz8mBCwECk5Cj7fpFGn7wypCyBzDyrokrN", "z.lpgfecg1evd7fmposfkkf6pfwilwjdador7gsaalp989oeie", "dl.3vgud3lsotdA5vs6cpqmqu6asca1crui5joiqmtsqkef6fz", "9p3.xlzh7oxsxgE3vs5dtunuub8tc85gwwh2mplsotstpgiajD", "Ggvx.vtsreuLskotddCjBBakdsG5nGttp3mAc8I589f6pgDqzo", "tfglv.f3dgdfecolCzkl89rfB9owpnf4esvmktdpoyBo7h9b3m", "Ieuztf.hqg2r0j9yECAtccu7EnEwzDsi3oDBmvsnpAEm9opnj7", "rcdhs3h.9efif8oiyvihcdnfx6msllb0epqjgpfmkuxl7da75m", "ig37rdq9.hpop8w7tqaamnjms3fpce18nqiaflimiqrmgae2du", "z1loeggeh.gxf7gmnlsemnd8ngxgkwjfcbnr5eu78jn7a8pekg", "Gesxud2fpg.o1icxEDys99u8ElCxyBqg4qCzmwpoqAFn8nmmga", "wvosLfrioxo.qrBvROoyeeGuQlqLBooirIHrzI6FDNPEmw9ncz", "Hdtxse0fpf1q.iaxDBysbbt7DmDvxBrh2oCzlurmozDl8mnmh8", "r7dgkcj887iri.nfpmk9kledo8ojfob8ghjj7gnebloda4j6fm", "OfAEoo9owgcBan.DBAHvmmt9BuLtBKyp9kEHmuBkoxCjgqyts1", "cm53tlyi7mxvxfD.ro99uvjtqbcp7d6gvtc6ilopkpopodlalB", "DpvvdCEytnERDpBr.2BiJKaw0wE7jFuyAgfyi8Mge33hykItEB", "zossdzCvqlDOBmAo2.yfHI8u1tB7gCrvygcvg6Jfc31gwhFqCA", "8s65CkAiasyoykH9By.itttxAc3zh38hxBn3qvhxtzyxqlfdiF", "mfcdjlthaesys9v9ifi.tu9midmf5mbgpj9g9btfagggk5pamu", "BkptB8ccmm9ebkmuJHtt.0ygJiwCyvoddxDuqAguuFItapek9k", "CkquB9cdnn9eblmvKItu0.zhKjxDzvoedyEvrBgvvGJubqflak", "wfmnarunjduGtetja8t9yz.m9lw5cxlnqbcq71B84699n9xitt", "E6qukf7fm88u7d9twuxmghm.vkBosAog3gwxentfhrwe7gpjj7", "CpuudBExsnEQDoBq01AiJK9v.vD7iEtxAgexh8Lge32hyjHsEB", "kf6bs9n63gllm8ubwtcdijlkv.grgg44kqlcgnfnkstmdcb29s", "5wa8GoEmfxCqDoLcEB3mwxwBDg.Ck1dlCFp5uyjBxCBBupihmJ", "Cist5wwspgxLvjtp77zfCD5o7rC.iDrss8gwb3H87399reCoyt", "jlccnpzlckyBxfB7jgh5yzcsigki.lckvo5efevkfhglpbrdqA", "7wa8GnDlewBoBoKdFC3mvvxAEg1Dl.ckAFq6uzhBxDBBtpghkI", "fj15tfsb1jqorby6ur8boolot4drcc.apsi8hniokrroice4ew", "pdcgt4i08fgih8pgyvhgdengx4lskka.gqqigpemkuwm8da65o", "Farwpe3enc4r2g9vAyxpddq3AkCsvApg.lzyirrjlwAi6kokh7", "Gduw3sopqbqIohktggBjxybggqF8oFsql.ozaaF38di3mfBowk", "noihmvDqinCHCjEcfcn9DEcwelpg5qiqzo.jhdBlgebmuexjwD", "7r52AmBjarzrzjH6yv3guvqxxc5we68iyzj.oskvrwvwrjidkF", "w7jmckmgf5mzl7miigq9qr7ehgubfuhgiaho.9v63eh6f4rdml", "ygop8tvplewIugul86vbAB1n8ny3eznprads9.E85489pbzlwt", "psilIdsfiup6rnBoMJhtggBtLfjHvhierFBkvE.BzIKBls3i9z", "Caqs5pnmm7oFmekpgfxfuv8fgnB8kBomj3lv68B.4ch0jbxksk", "yamo8opki8qDobokectauv4hekx7fxkkl8gr35z4.ae5j7vhro", "Bltt9yAuqjANzlxp33zgFG6r3sC3hDruwdewe4Ica.5dugEpBx", "zpssfBExrnFPDoCo31ygIJ9w2tB9gBrwAibvh8Khe5.ixiGrDC", "D9qt6omlm7nEldjphgxgtu9ehmB9lBomi3mw69B05di.ibxksj", "y8kpp797ga8m8agoywqkabn7ydurpti86murfpljjuxi.fhdbe", "r9egghoda8nwm4qdkhl5pq9gjcpebpcdkfej4bsb7gibf.n9kp", "oofiD9paepm9njylIFfpefxpHbiCrgeaoBxirz3xvEGxhn.e5w", "ke6aqbn72emnm6tatqdaklijs2hodh46kojddlikhprkd9e.cr", "rifjz3j5dkgchfslECim9atjE9myqke5hwwkmw9srBDsbk5c.q", "NezDom7mugaz8m1BBAFukkt7BsJtAIwo7kDFltzkoxCjepwrq."};
    int inverseWalkSpeed = 60;
    int inverseDriveSpeed = 22;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 63534;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> cars = {1, 0, 5, 21, 37, 43, 17, 16, 47, 34};
    vector<int> districts = {1, 25, 46, 15, 43, 2, 10, 21, 4, 21, 46, 38, 23, 41, 30, 48, 21, 8, 37, 27, 7, 40, 12, 18, 11, 0, 46, 6, 27, 11, 34, 39, 27, 32, 16, 49, 0, 46, 18, 22, 3, 21, 6, 32, 36, 6, 27, 8, 27, 8};
    vector<string> roads = {"....................................a.............", "....................................m.............", ".................d................................", "....pe............................................", "...p.......................q......................", "...e.................................9....m..o..i.", "...............................................u..", "....................C...........3....n.........m..", "................x.................................", "...............................................a..", ".............i....................................", ".......................v......n.w.................", "....................b.............................", "..........i............................f.....y....", "........................C.........................", "...................................g..............", "........x............o......u...E.................", "..d...........................f....i..............", "...............................D..................", "...............................5..................", ".......C....b.......................e.........i...", "................o...........................1.....", ".................................F...r............", "...........v............................9.........", "..............C................r..................", "...........................................3..g...", "................................................s.", "....q.............................................", "................u.................................", "........................................0.........", "...........n.....f................................", "..................D5....r.......9.................", ".......3...w....E..............9......m...........", "......................F..........................x", "........................................d.........", "...............g.i................................", "am..................e.............................", ".....9.n..............r..................4........", "................................m.................", ".............f....................................", ".......................9.....0....d...............", ".....................................4............", ".....m............................................", ".........................3........................", ".....................1............................", ".....o.......y....................................", "....................i....g........................", "......um.a........................................", ".....i....................s.......................", ".................................x................"};
    int inverseWalkSpeed = 65;
    int inverseDriveSpeed = 40;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 339935;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> cars = {1, 0, 5, 21, 37, 43, 17, 16, 47, 34};
    vector<int> districts = {1, 25, 46, 15, 43, 2, 10, 21, 4, 21, 46, 38, 23, 41, 30, 48, 21, 8, 37, 27, 7, 40, 12, 18, 11, 0, 46, 6, 27, 11, 34, 39, 27, 32, 16, 49, 0, 46, 18, 22, 3, 21, 6, 32, 36, 6, 27, 8, 27, 8};
    vector<string> roads = {"........0................................m........", "....................................k..m..........", "....................d.........................h...", ".............g.....l..............................", "......8.........................................j.", ".......................d...............m..........", "....8........................................W....", "...............................s.K................", "0............................K....................", "...............................I...........3......", "............S........................M............", "......................V.....1.....................", "..........S..........P............................", "...g...................b..........................", "................e................................O", "..................p.................R.............", "..............e.................O.................", "..........................h.....................s.", "...............p...........s......................", "...l..................................K...........", "..d.....................T.........................", "............P.....................................", "...........V................................S.....", ".....d.......b....................................", "....................T................z............", "........................................q.....p...", ".................h............T...................", "..................s...............f...............", "...........1............................J.........", "........K.....................5...................", "..........................T..5....................", ".......s.I........................................", "................O............................e....", ".......K..................................t.......", "...........................f................X.....", ".........................................Ro.......", ".k.............R..................................", "..........M.............z.........................", "...................K.............................B", ".m...m............................................", ".........................q..J.....................", "m..................................R..............", ".................................t.o..............", ".........3.....................................f..", "......................S...........X...............", "......W.........................e.................", "..h......................p........................", "...........................................f......", "....j............s................................", "..............O.......................B..........."};
    int inverseWalkSpeed = 71;
    int inverseDriveSpeed = 32;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1501030;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> cars = {1, 0, 5, 21, 37, 43, 17, 16, 47, 34};
    vector<int> districts = {1, 25, 46, 15, 43, 2, 10, 21, 4, 21, 46, 38, 23, 41, 30, 48, 21, 8, 37, 27, 7, 40, 12, 18, 11, 0, 46, 6, 27, 11, 34, 39, 27, 32, 16, 49, 0, 46, 18, 22, 3, 21, 6, 32, 36, 6, 27, 8, 27, 8};
    vector<string> roads = {".....Z.....Z......................................", "........................Z.......Z.................", ".........................Z...............Z........", "..................Z.....................Z.........", ".........Z......Z.................................", "Z...................Z.............................", ".......Z.........Z................................", "......Z......................................Z....", "............Z......................Z..............", "....Z.......................................Z.....", "............................Z...............Z.....", "Z............Z....................................", "........Z................................Z........", "...........Z...............Z......................", ".......................Z...............Z..........", "..........................Z.....Z.................", "....Z..........................Z..................", "......Z..............................Z............", "...Z..................................Z...........", "..................................Z..Z............", ".....Z..........................................Z.", "...............................Z..................", "..........................Z...................Z...", "..............Z.........................Z.........", ".Z...............................Z................", "..Z.........................Z.....................", "...............Z......Z...........................", ".............Z................Z...................", "..........Z..............Z........................", ".................................Z.........Z......", "...........................Z.................Z....", "................Z....Z............................", ".Z.............Z..................................", "........................Z....Z....................", "...................Z................Z.............", "........Z.............................Z...........", "..................................Z..............Z", ".................Z.Z..............................", "..................Z................Z..............", "..............Z...............................Z...", "...Z...................Z..........................", "..Z.........Z.....................................", "...........................................Z.....Z", ".............................Z............Z.......", ".........ZZ.......................................", ".......Z......................Z...................", "......................Z................Z..........", "................................................Z.", "....................Z..........................Z..", "....................................Z.....Z......."};
    int inverseWalkSpeed = 93;
    int inverseDriveSpeed = 32;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 3144268;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> cars = {1, 0, 5, 21, 37, 43, 17, 16, 47, 34};
    vector<int> districts = {1, 25, 46, 15, 43, 2, 10, 21, 4, 21, 46, 38, 23, 41, 30, 48, 21, 8, 37, 27, 7, 40, 12, 18, 11, 0, 46, 6, 27, 11, 34, 39, 27, 32, 16, 49, 0, 46, 18, 22, 3, 21, 6, 32, 36, 6, 27, 8, 27, 8};
    vector<string> roads = {"..m..95dh...fla....32..9j.qked....f.f.g.4o.8b..ea.", "..ku..7..d..5ac....ec.b.n.r....o..a....b8e..b..mi.", "mk..1c...xq.....d..mp..dc...x....w.b.a.v.xy.vrs..d", ".u..a....Hz..s........x..F....j.DE..p..F...F.A.nG.", "..1a...w.....k.x.......cav.1....v.v....v...u..q.w.", "9.c....k....f.im....d.b0.....bd..uk..bl...mj.ij...", "57.....8h..h..5.g...5.4.o.mm..n.l.9j..md7if...jk..", "d...wk8...fn.....8....b.....lf.z...rs.r....a1..s.x", "h.....h...g..a.td..i..i7....vb.........m.....h...i", ".dxH........bm....phc....d.vmewz.t.......fic...tby", "..qz...fg....8g.....kvigv4..w.v.7.9...A.g.tnd...o.", "......hn...........ll.jan.B.x8ol..jj.3x.e.wrl..p..", "f5...f...b....c.m....uf..6ont..u..7o....e..ka...k.", "la.sk...am8...n.n........d.i.8.q.di.v8.f....l.zt..", "ac...i5...g.cn.amap....htg.ti.s.nw..p.o..i..2glp..", "....xm..t.....a.....8za.....9..xx.ip.w.....2.q.m1.", "..d...g.d...mnm..w.9ec..7tC........2..gs.vlkn..5..", ".......8......a.w...i..s.k..onC..A..zz.ho..ea...d.", ".........p....p....ool.dp..e.......lt.A...zuod.rvq", "3em.....ih.l....9.o.4.4agp......uBjc..d.6.......b.", "2cp..d5..ckl...8eio4.r1cl...cf...z..g..k..95..d.7.", "..........v.u..zc.l.r.p....6...........A.Cyxywqf..", ".b.x.b4bi.ijf..a...41p.a..pl.d.o.ye......n.7aje.8l", "9.d.c0..7.ga..h..sdac.a.e.yan...n.j..amk4.m......f", "jnc.a.o...vn..t.7.pgl..e..K...2.C..48....C..u...s.", "...Fv....d4.6dg.tk.p.......tyaA.6..vA......o.3....", "qr....m....Bo...C.....pyK....sI...gF......o..q.F..", "k...1.m..v..nit...e..6la.t..vjd...t..9s.fv.t...g..", "e.x....lvmwxt.i9.o..c..n.y.v.sl.EMqm..8....alx6...", "d....b.fbe.8.8...n..f.d..asjs.ppc.......b.p...r..q", "...j.dn..wvo..s..C......2AIdlp....w.......op..f3..", ".o.....z.z.luq.x......o......p....z.ei.....v.w.cw.", "...Dv.l...7...nx...u...nC6..Ec....f......5...6....", "..wE.u...t...dw..A.Bz.y.....M......C.mPi..JDt.M..H", "fa..vk9...9j7i.i...j..ej..gtq.wzf...v.w.gamg59.ugy", "..b...jr...jo..p2.lc....4vF.m....C..8.h.......g...", "f..p...s.....vp..zt.g...8A.....e..v8...zfC.k.x9...", "..a..b.....3.8.w.z.....a...9...i.m........xto...ul", "g....lmr..Ax..o.g.Ad...m...s8....Pwh......d..A2..i", ".bvFv.d.m....f..sh..kA.k.........i..z...j4.ma5x.m.", "48....7...gee....o.6...4...f.b....g.f..j...e.h..f.", "oex...i..f....i.v....Cn.C..v....5.a.C..4...rf...rD", "..y..mf..itw....l.z.9y.m..o..po..Jm..xd......uak..", "8..Fuj.a.cnrk..2keu.5x7..o.ta.pv.Dg.kt.mer....e..r", "bbv....1..dlal2.nao..ya.u...l....t5..o.a.f....oqav", "..rA.i..h.....gq..d..wj..3q.x..w6.9.x.A5h.u....vox", "..s.qjj......zl.....dqe.....6rf..M.g9.2x..aeo..af.", "em.n..ks.t.p.tpm5.r..f....Fg..3c..u.......k.qva..7", "ai.Gw....bo.k..1.dvb7.8.s......w..g..u.mfr..aof...", "..d....xiy........q...lf.....q...Hy..li..D.rvx.7.."};
    int inverseWalkSpeed = 80;
    int inverseDriveSpeed = 17;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 75905;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> cars = {1, 0, 5, 21, 37, 43, 17, 16, 47, 34};
    vector<int> districts = {1, 25, 46, 15, 43, 2, 10, 21, 4, 21, 46, 38, 23, 41, 30, 48, 21, 8, 37, 27, 7, 40, 12, 18, 11, 0, 46, 6, 27, 11, 34, 39, 27, 32, 16, 49, 0, 46, 18, 22, 3, 21, 6, 32, 36, 6, 27, 8, 27, 8};
    vector<string> roads = {".o.2.rw.tyr.h..3shONO..1Pharz.L......Zw.y..CYF....", "o......V..Rvw...e.kHXJjG..Wy.AG5F..S4N....rR...aW.", "...M...dH..W..a..X9....e..3K....D.pn...WTAL.X1...f", "2.M.xX...q1..n.4.bg.XJ..L.Ms.K...h...e.3.60...K...", "...x...kw.3..VZ2lLAU4...6Y.9.LI.l....H9W6l.Zl...b.", "r..X....p.....8D.xA....M....vZzz.g.r.N...g0K.FU.oF", "w......s..nmy..m...0d..saiX..Ek..F.t...d.n...cZ..L", ".Vd.k.s..u...Qc4ScKj.w.O8....hK.2O.E..f8....OQ.P.j", "t.H.wp....h..f8Hd.....k...W..I...I.xL...7W.zNEn.JD", "y..q...u....N..sDX.d.Jo..Tj.R..Ih.NR...4q....7....", "rR.13.n.h..y.E...A.Jc.f27....pp.P.BU.....u...c.c..", ".vW...m...y......U.d...PN.rTJT..er...O..n..gR.i..w", "hw....y..N...r.4d.6i2Z.d.ixKT.O.K.0a..E...wp.kt...", "...nV..Qf.E.r.1...RPYzi...c.54......z...Eq...Kb...", "..a.Z8.c8....1..y.5Q...G3..Cwu...znNeJ.6G..an..G.s", "3..42Dm4Hs..4.........v..yEH.9wf..Q9h..lt.s.Ka....", "se..l..SdD..d.y..e.......ly.t.n.M..T..JYXol......G", "h.XbLx.c.XAU....e.Y.....vcs....iy.92a...s.6.......", "Ok9gAA.K....6R5..Y.i....kv3.eIhX.........hl....BAO", "NH..U.0j.dJdiPQ...i.LFb.........V.G........v..P.BC", "OX.X4.d...c.2Y.....L..UlfO.1...X9zZk.n..4.....eEmo", ".J.J...w.J..Zz.....F..K2sKB.r...7.wxQ......R......", ".j......kof..i.v...bUK.I..lW..Y..0m.f.RL..R...y.Y8", "1Ge..MsO..2Pd.G.....l2I.ZPn......jN7.UzD....zHQ1.G", "P..L6.a8..7N..3..vk.fs.Z.D...2yF..J..5.......b.uM.", "h...Y.i..T..i..ylcv.OK.PD..XU....NX.S..c..MJ....Y.", "aW3M..X.Wj.rxc.Eys3..Bln....R.b.5.p..T.k...8..sM..", "ryKs9......TK.CH....1.W..X......kFqU.n............", "z....v...R.JT5w.t.e..r...UR..K.O......1...RU3..DHu", ".A.KLZEhI.pT.4u9..I.....2...K...a.cW.......A.W..p.", "LG..IzkK..p.O..wn.h...Y.y.b.....v..D.At.lDA.TCF.JO", ".5...z...I.....f.iX.X...F...O.....Oa...Zq.V1.Y....", ".FD.l..2.hPeK...My.V97....5k.av..z.P.Ap...gIY.o..s", "...h.gFOI..r..z.....z.0j.N.F....z.o.c..t..J..pF1..", "..p......NB.0.nQ.9.GZwmNJXpq.c.O.o.0.S...J...m.b.D", ".Sn..rtExRU.a.N9T2..kx.7...U.WDaP.0..c..P.p..L6.E.", ".4......L....zeh.a...Qf..S.......c.........s5DUy.8", "ZN.eHN.....O..J.....n..U5.Tn..A.A.Sc..M....F.....w", "w...9..f....E...J.....Rz....1.t.p....M...A.E..u...", "..W3W.d8.4....6lY.....LD.ck....Z.t.........X.qxrbi", "y.T.6...7q.n.EGtXs..4.........lq...P.....m..X59..A", "..A6lgn.W.u..q..o.h...........D...J...A.m.SltP....", ".rL0.0......w..sl6l...R..M..R.AVgJ.p.....S..a.3...", "CR..ZK..z..gp.a....v.R...J8.UA.1I...sFEX.l..i.....", "Y.X.l..ON..R..nK.......z....3.T.Y...5...Xtai..U.hh", "F.1..FcQE7c.kK.a.......Hb....WCY.pmLD..q5P........", "...K.UZ.n..itb.....Pe.yQ..s...F.oF.6U.ux9.3.U..r..", ".a.....P..c...G...B.E..1u.M.D....1b.y..r......r...", ".W..bo..J.........ABm.Y.MY..HpJ....E...b....h....G", "..f..FLjD..w..s.G.OCo.8G....u.O.s.D.8w.iA...h...G."};
    int inverseWalkSpeed = 15;
    int inverseDriveSpeed = 13;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 13220;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> cars = {43, 9, 6, 27, 31, 33, 29, 27, 39, 6};
    vector<int> districts = {35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42};
    vector<string> roads = {".6kp47ztzDlon5As2EIcHqBlBtkfcsgilpwifsJsDEqmtw4D9w", "6.dj46wptxhhgcto8xBeAmvhypi85l9cjjsedlClxxkfnp6wdo", "kd.6hhwilrc4cphillpqpmmdApn58882p8rcf8rcpoc9gbjjqb", "pj6.ooCcpw98ivjdploxqtqaHwv9f3g6x1ybf9rgtrhfm8pgxb", "44ho.2uuvymli7wt7AF9Clxmwofd8qcggorjhpFoyzmiot1A8s", "76ho2.rwtvnlg9uvazD8Biuotlce8qahdpolkoDmwxkgmt2A8s", "zwwCur.PhcIujAqPCuyrr9jJ56fysCoyfE3HIuumhllmgzuAvv", "tpicuwP.DK7lvzw0sxzEDFD7TIFhofrgHaKadnDuGEuszkwrCo", "ztlpvthD.6yhcD8DCcgy9f1znfnqoojoosezBfd8349d6kwjAf", "DxrwyvcK6.EogFfKGimzee7FicnwsvnuoybEHmhf48fiarypCm", "lhc9mnI7yE.gprt7kvywAyz0MBxagdk9z8E26jBpCApmtjorul", "oh48llulhog.auclqgjtjlhhzooac7a7qaphk3l8lj88d7neu6", "ngciigjvcgpa.qdvpjnnkadpndefbi6egkfoqbm6fg325hjloe", "5cpv79AzDFruq.Ey6JN9LrFrAuklhykokvxolxNwGHuqwC6J5B", "Athjwuqw8ftcdE.xC49B6l7uwmsnnhjkulmux987a79dacxaD8", "soidtvP0DK7lvyx.ryAEDFD6TIFhofrgHbL9cnEuHFuszlvsCo", "28lp7aCsCGkqp6Cr.GKfJtDkEwnfetijopzhetLuGGtovx8Fbx", "ExllAzuxcivgjJ4yG.3G5qawArxrriooznrxAc5cd9eifcC7I9", "IBpoFDyzgmyjnN9AK3.L7vezEvCuwksrDpvADg5ggcjnkeG7Mc", "ceqx98rEyzwtn9BEfGL.HkAwrmcnhziqbyptswKtBDrnrC8I3A", "HApqCBrD9eAjkL6DJ57H.p7BxpxuunqsysoBFg2d95fkfhEdJe", "qmmtli9FfeylarlFtqvkp.hzc28oiteo9v5xymsfhkddaslvno", "BvmqxujD17zhdF7DDaeA7h.AphprpokpqsgzCfa932af8jxhCf", "lhdamoJ7zF0hpru6kwzwBzA.NCyahekaA8F26kCqDBqnukorum", "ByAHwt5TniMznAwTEAErxcpN.agBvHrCfJ8LLzArnrqqlFvGvB", "tppwol6IfcBodumIwrvmp2hCa.arlwhrby2ABoshgjffbuowqq", "kinvfcfFnnxoeksFnxCcx8pyga.ngweo1wdwwqAlpsighwfAft", "f859deyhqwaaflnhfrunuoraBrn.6c93pau8aewhutgckhfomh", "c58f88soosgcbhnoerwhuiphvlg6.h48igofffwgrre9hkarhj", "sl83qqCfovd7iyhftikzntoeHwwch.h9y4xfj8ofrpggl5sdz8", "g98gcaorjnka6kjriosiqekkrhe94h.aghkikdsbnn95cidojg", "ic26ghygou97eokgjorqsopaCro389a.q7u9cbtfsrfcjdilpe", "ljpxgdfHoozqgkuHozDby9qAfb1piygq.ydxxsBnrtkijyfCfv", "pj81opEasy8akvlbpnpysvs8Jywag4h7y.Aaectjvtjhoaqixd", "wsryro3KebEpfxmLzrvpo5gF82duoxkudA.DEprifighcvrxtr", "iecbjlHazE2hoou9hxAtBxz2LAw8ffi9xaD.3kDpCBpltlltrn", "fdffhkIdBH6kqlxceADsFyC6LBwafjkcxeE3.oGsFErowojxpq", "sl89pounfmj3bx9ntcgwgmfkzoqef8dbscpko.i7jg89d5qbx3", "JCrrFDuDdhBlmN8EL55K2saCAsAwwostBtrDGi.gc8imiiGcMf", "slcgommu8fp86w7uucgtdf9qrhlhgfbfnjips7g.cb155cpfv8", "DxptywhG34ClfGaHGdgB9h3DngpurrnsrvfCFjcc.3dh9nzlDi", "ExorzxlE48AjgH7FG9cD5k2BrjstrpnrttiBEg8b3.dhakAhFg", "qkchmklu9fp83u9utejrfdaqqfigeg9fkjgpr8i1dd.34enhta", "mf9figmsdim82qdsoinnkdfnqfgc9g5cihhlo9m5hh3.7fjkpc", "tngmomgz6atd5wazvfkrfa8ulbhkhlcjjoctwdi59a47.ipkue", "wpb8ttzkkrj7hCclxceChsjkFuwhk5idyavlo5icnkefi.v7C3", "46jp12uwwyonj6xv8CG8ElxovoffasdifqrljqGpzAnjpv.C6u", "DwjgAAArjprelJasF77IdvhrGwAordolCixtxbcflhhkk7C.J7", "9dqx88vCACuuo5DCbIM3JnCuvqfmhzjpfxtrpxMvDFtpuC6J.B", "wobbssvofml6eB8ox9cAeofmBqthj8gevdrnq3f8igace3u7B."};
    int inverseWalkSpeed = 82;
    int inverseDriveSpeed = 1;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 94728;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> cars = {43, 9, 6, 27, 31, 33, 29, 27, 39, 6};
    vector<int> districts = {35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42};
    vector<string> roads = {".....................................i......E.....", "............L...........B...k.....................", "...n........p........................3...s...j....", "..n..................c............................", "....................................i.............", "...................................q..............", "..............................................o...", ".......................e..........................", "..............................5...................", "..................u...s...............p...........", "................wv........C...................B...", "..........................................al......", ".Lp...............................................", ".........................j........................", "................................v.A.............9.", ".................................................v", "..........w.......................................", "..........v.......................................", ".........u...................m...............k..cy", "...............................................s..", "................................d...y.............", "...c..............................................", ".........s........................................", ".......e...........................f..............", ".B................................................", ".............j.....................r..............", "..........C......................................D", "...............................A.............D....", ".k................................................", "..................m...............................", "........5..................................h.d....", "...........................A......................", "..............v.....d.............................", ".................................................b", "..............A...................................", ".....q.................f.r...................H....", "....i...............y.............................", "i.3...............................................", ".........p........................................", ".................................................j", ".................................................l", "..s............................................z..", "...........a......................................", "...........l..................h...................", "E.................................................", "..j...............k........D..d....H..............", "......o...B.......................................", "...................s.....................z........", "..............9...c...............................", "...............v..y.......D......b.....jl........."};
    int inverseWalkSpeed = 87;
    int inverseDriveSpeed = 6;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 461388;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> cars = {43, 9, 6, 27, 31, 33, 29, 27, 39, 6};
    vector<int> districts = {35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42};
    vector<string> roads = {"...................H............................W.", "...5...r..........................................", "......................................f..a........", ".5............W...................................", "...................8.................k............", ".........................................gA.......", "............................c..............I......", ".r........W.......................................", "..........................l.......C...............", ".............................N...I................", ".......W...4......................................", "..........4.................................D.....", "......................7..............E............", "..............................................f.v.", "...W............5.................................", "................h......................e..........", "..............5h..................................", "..................2...........................L...", ".................2..........A.....................", "H...8.............................................", "............................................J..w..", "...........................n.................b....", "............7...........................G.........", "........................P.....U...................", ".......................P.......w..................", "................................R5................", "........l..........................p..............", ".....................n................J...........", "......c...........A...............................", ".........N..............................o.........", ".......................U...................s......", "........................w.........m...............", ".........................R.....................f..", ".........I...............5........................", "........C......................m..................", "..........................p.......................", ".............................................H...w", "....k.......E.....................................", "..f........................J......................", "...............e.................................L", "......................G......o....................", "..a..g............................................", ".....A............................................", "......I.......................s...................", "...........D........J.............................", ".....................b..............H.............", ".............f...L................................", "....................w...........f.................", "W............v....................................", "....................................w..L.........."};
    int inverseWalkSpeed = 89;
    int inverseDriveSpeed = 84;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 6528280;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> cars = {43, 9, 6, 27, 31, 33, 29, 27, 39, 6};
    vector<int> districts = {35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42};
    vector<string> roads = {".........................Z................Z.......", "...Z.......................Z......................", "........Z........................Z................", ".Z..................Z.............................", "..........Z........Z..............................", "..................Z..Z............................", ".........Z.....Z..................................", "..................................Z........Z......", "..Z...............Z...............................", "......Z..................................Z........", "....Z...........Z.................................", "...................................Z.Z............", "....................Z.....Z.......................", "................Z..........................Z......", "...................Z.........Z....................", "......Z...................Z.......................", "..........Z..Z....................................", "......................................Z..........Z", ".....Z..Z.........................................", "....Z.........Z...................................", "...Z........Z.....................................", ".....Z........................................Z...", "..............................Z.....Z.............", "........................................Z......Z..", "................................Z...............Z.", "Z..............................Z..................", "............Z..Z..................................", ".Z............................Z...................", "............................................Z..Z..", "..............Z..................................Z", "......................Z....Z......................", ".........................Z..............Z.........", "........................Z........Z................", "..Z.............................Z.................", ".......Z......................................Z...", "...........Z......................................", "......................Z................Z..........", "...........Z.................................Z....", ".................Z.......................Z........", "....................................Z.......Z.....", ".......................Z.......Z..................", ".........Z............................Z...........", "Z.................................................", ".......Z.....Z....................................", "............................Z..........Z..........", ".....................................Z..........Z.", ".....................Z............Z...............", ".......................Z....Z.....................", "........................Z....................Z....", ".................Z...........Z...................."};
    int inverseWalkSpeed = 89;
    int inverseDriveSpeed = 24;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 12123232;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> cars = {43, 9, 6, 27, 31, 33, 29, 27, 39, 6};
    vector<int> districts = {35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42};
    vector<string> roads = {".......n.v.HmgsK.chx6.tc....c.ga.ur..q.7D.B.i.....", "...k.av..hhb......j.ya9pbez4s....E..e.l.d.3...8.lg", ".....jh...b.flgo....ka.b.k.g...f4s.l4..e.dg..m.n7h", ".k........f................ohp....fr.b.8.6.j..b.0.", ".....o..4.c.i.....fi.e..fo.mkp.96.........m..q.s..", ".aj.o.z...g....8at......93C..j.yh..7mjdy5.7.y5.qr8", ".vh..z..aBkBs....8nj.....y...B33.........b.....D..", "n.......4B.t.c4....9h...h....y6.bdo....km......C..", "....4.a4..9q....e.l......o.o.t..7....5...d.f..ex..", "vh....BB..ws.F.B.re..q...w.l....qPd.i.C.......h...", ".hbfcgk.9w.iqm...h.......e..wr.k6....3....in..ew..", "Hb....Btqsi..Fr9c..tGb.....6D....Gi8.l.z7.7.A.i...", "m.f.i.s...q...w.qi.Bq.8l.v...d......a.yf.glAu..c..", "g.l....c.FmF..g..drj.s..t.....7...vB.jv.y..3.D....", "s.g....4...rwg.oeh.4......f....h....l7fp.m......f.", "K.o..8...B.9..o..x..Hd.xc4..J.....p.sk8D.....2....", ".....a..e..cq.e..l.hv3..18..yn.p8..8h87r5.dto.....", "c....t8..rh.idhxl.em..m2ku.r.s7..oiu9dr........u..", "hj..f.n.le...r...e..l.chowso.....Ccy8m...cn...ch.u", "x...i.j9...tBj4.hm...kAkjoiuD...hc.m..f.mr.h....ki", "6yk....h...Gq..Hv.l..tv8u.a.i..5..s.j...B.B..G.C.z", ".aa.e....q.b.s.d3..kt...1....jk.7v..e..o......9pg.", "t9..........8....mcAv..pk.....t..I...nul..dD.q.7.p", "cpb.........l..x.2hk8.p.....ju4.c...cc..r6se8.g.3.", ".b..f9.h.....t.c1koju1k....bwl....e.g9.q5...oa....", ".ek.o3y.owe.v..48uwo......B...uyh.......2ybDx1ju..", ".z...C........f...sia....B.C.F78..w.ni....C..Dr.e.", ".4gom...ol.6.....rou....b.C.xcux.Fb.....a..Ey.c..d", "cs.hk.....wD...Jy..Di..jw..x.q.jpEl..s.8C...r.lo..", "...ppjByt.r.d...ns...j.ul.Fcq..y..9q.ru.nsbICp..q.", "g.....36.....7...7...kt4.u7u...5.g.tgbp..b..3.j...", "a.f.9y3...k...h.p...5....y8xjy5..ko.fguav7wc.A....", "..4.6h.b7q6.....8..h.7.c.h..p......h9.fieggn..8r.d", "uEs....d.P.G.....oCc.vI....FE.gk.....l.v.sG......v", "r..f...o.d.i.v.p.ic.s...e.wbl9.o...m8hojija..m4d.k", "..lr.7.....8.B..8uym.........qt.h.m.p...3..B..lx..", ".e4..m...i..a.lsh98.je.cg.n...gf9.8p..pb..i...5.8.", "q..b.j..5.3l.j7k8dm...nc9.i.srbg.lh...d..........d", ".l...d...C..yvf87r.f..u......upuf.o.pd...wj.r.....", "7.e8.y.k...zf.pDr....ol.q...8..aivj.b...w2t.i.g.9w", "Dd...5.m...7.y..5..mB..r52.aCn.ve.i3...w........o3", "..d6..b.d...g.m...cr...6.y...sb7gsj...w2...k.A.t..", "B3g.m7....i7l...d.n.B.ds.bC..b.wgGa.i.jt...Ey.ci..", "...j....f.n.A3..t..h..De.D.E.I.cn..B.....kE...u.h.", "i....y.....Au...o......8ox.yrC3.......ri..y.....bs", "..m.q5.......D.2....G.q.a1D..p.A..m......A....lwt6", ".8.b....ehei......c..9.g.jrcl.j.8.4l5..g..cu.l.i.h", "..n.sqDCx.w.c....uh.Cp7..u..o...r.dx.....ti..wi...", ".l70.r........f....k.g.3..e..q......8..9o..hbt...n", ".gh..8............uiz.p....d....dvk..d.w3...s6h.n."};
    int inverseWalkSpeed = 75;
    int inverseDriveSpeed = 34;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 60628;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> cars = {43, 9, 6, 27, 31, 33, 29, 27, 39, 6};
    vector<int> districts = {35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42, 35, 42};
    vector<string> roads = {".i......5d.dS3...Q......YL........jQ25u.U.2EWO.4..", "i..d.l.0v.n.......O.md..z.l...Z3.3......9.......ST", ".......2......3Jqu............S.V........t..t..3..", ".d...y.J...0.m.g...8.d..om0du.U4..s..Uo....l..e.T.", "......o4.......O..ZS.M.C..7...5....k.......Cl.....", ".l.y..4.ZQW..s.w..a.qR.RHeK....E...........a...e4.", "....o4.D.....g.1pWl.d...xN..fe..ea...z....f.7.S...", ".02J4.D.h..j....4......2..e.b...........UK.1....GY", "5v...Z.h.XX4....F....Q.T...2.....Yj..R.....SA....X", "d....Q..X.......R8.N...l..U....F..F....wT........6", ".n...W..X......T..x...G..k...vJ.....Q...Vb...p.b..", "d..0...j4....ef..9z....p...L.w4.Ugf.p......YM.....", "S.............M.1.u.Jd.aEpPa.......QVuGBp3....F.s.", "3..m.sg....e...........4..........6.g.G...x.x.....", "..3........fM..H.M......QQ.....N...9.6.....4..I...", "..JgOw1...T...H.2..........d....r..v....x...7h....", "..q...p4FR..1..2.n.7.L8y.cO..I.8..t..........O....", "Q.u...W..8.9..M.n.N5cx...z.....N..XX...b.A.Zt.7.G.", ".O..Zal...xzu....N.b.....Ju.....v.....yA..N.Wv....", "...8S....N......75b..7Y.iS.I...6.........h9.1l..l.", ".m...qd.....J....c.....N...q......O...E.b.z.Z.....", ".d.dMR..Q...d...Lx.7.........m.N..O.D.....t..N....", "..........G.....8..Y.....2....8.....kH..h......v..", "....CR.2Tl.pa4..y...N...Y.V.....u..D.CUPj...j....c", "Yz.o.Hx.....E.Q....i...Y....u.b..zT....M.....v...Y", "L..m.eN...k.p.Q.czJS..2....N.z.a2..Ah.e.........t.", ".l.07K.e.U..P...O.u....V...r.....QW........Q...0kN", "...d....2..La..d...Iq....Nr....G.3H......P.V...N..", "...u..fb................u....FkYP1f...0..kGM..sA..", "......e...vw....I....m...z..F...K.dR...M.UQ..K....", ".ZSU5.....J4..........8.b...k.....D.E.N......X..BG", ".3.4.E...F....N.8N.6.N...a.GY.....TPy.H.9.gt.N1.V.", "..V...e....U...r..v....u.2..PK....L...I.a.........", ".3....a.Y..g............z.Q31........su...........", "j..s....jF.f.6..tX..OO..T.WHfdDTL..jn...N.0r.o....", "Q...k.......Q.9v.X.....D.A...R.P..j.q........s..6.", "2.........QpVg.......Dk..h....Ey..nq.W.........e8.", "5..U..z.R...u.6.......HC.........s..W...EpC......N", "u..o........GG....y.E..U.e..0.NHIu......x.......L.", ".........w..B....bA....PM....M.............Mo.....", "U9.....U.TV.p..x....b.hj.......9a.N..Ex...xi..H..X", "..t....K..b.3....A.h.......PkU.......p.....tu.....", "2.....f......x....N9zt......GQ.g..0..C..x....9...h", "E..lCa.1S..Y..4..Z........QVM..t..r....Mit..9V..a.", "W.t.l.7.A..M.x.7.tW1Z..j...............o.u.9......", "O.........p....hO.vl.N..v....KXN..os......9V...s..", "...e..S.....F.I..7..........s..1........H........y", "4.3..e....b...........v...0NA.......e........s..q.", ".S.T.4.G....s....G.l.....tk...BV...68.L....a...q..", ".T.....YX6.............cY.N...G......N..X.h...y..."};
    int inverseWalkSpeed = 49;
    int inverseDriveSpeed = 23;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 51352;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> cars = {32, 18, 32, 26, 20, 30, 48, 26, 10, 16};
    vector<int> districts = {20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46};
    vector<string> roads = {"..................l....................s..........", "...................jX.............................", ".....4...........................................h", ".......f................................C.........", "..............................4......0............", "..4.............P.................................", "............................................D.....", "...f....V.........................................", ".......V........2.................................", "..................................5........n......", ".....................Z...................F........", "..............6.............................4.....", "...............B............U.....................", "......................o..........................e", "...........6...................................B..", "............B......................6..............", ".....P..2.........................................", ".............................o..................W.", "l.........................W.......................", ".j..................................h.............", ".X..........................X.....................", "..........Z..................................4....", ".............o.............................b......", "...............................x..s...............", ".........................l....b...................", "........................l.................F.......", "..................W..............Q................", ".................................V............B...", "............U.......X.............................", ".................o..................N.............", "....4...................b.........................", ".......................x.......................f..", "...................................r......N.......", "..........................QV......................", ".........5.............s..........................", "...............6................r.................", "...................h.........N....................", "....0.................................k...........", ".....................................k..9.........", "s........................................Y........", "...C..................................9...........", "..........F............................Y..........", ".........................F......N.................", ".........n............b...........................", "......D....4......................................", ".....................4............................", "...........................B....................2.", "..............B................f..................", ".................W............................2...", "..h..........e...................................."};
    int inverseWalkSpeed = 20;
    int inverseDriveSpeed = 5;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 225950;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> cars = {32, 18, 32, 26, 20, 30, 48, 26, 10, 16};
    vector<int> districts = {20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46, 20, 46};
    vector<string> roads = {"...Z..............Z...............................", ".......................Z............Z.............", "..........................................Z.....Z.", "Z....................................Z............", ".................Z.....................Z..........", "...........Z.........................Z............", ".......Z..........................................", "......Z.....................................Z.....", "..............................Z.......Z...........", "........................................Z.Z.......", ".....................Z...Z........................", ".....Z.........................Z..................", "...........................................Z.....Z", "...............Z...................Z..............", "........................ZZ........................", ".............Z..............................Z.....", ".......................Z.......................Z..", "....Z........................Z....................", "Z.....................Z...........................", "................................Z.Z...............", ".................................Z...........Z....", "..........Z...................................Z...", "..................Z.......Z.......................", ".Z..............Z.................................", "..............Z.............Z.....................", "..........Z...Z...................................", "......................Z......Z....................", "...............................................ZZ.", "........................Z................Z........", ".................Z........Z.......................", "........Z........................................Z", "...........Z..................................Z...", "...................Z...............Z..............", "....................Z....................Z........", "...................Z....................Z.........", ".............Z..................Z.................", ".Z.........................................Z......", "...Z.Z............................................", "........Z..............................Z..........", "....Z.................................Z...........", ".........Z........................Z...............", "............................Z....Z................", "..Z......Z........................................", "............Z.......................Z.............", ".......Z.......Z..................................", "....................Z.............................", ".....................Z.........Z..................", "................Z..........Z......................", "..Z........................Z......................", "............Z.................Z..................."};
    int inverseWalkSpeed = 46;
    int inverseDriveSpeed = 6;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1226856;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> cars = {25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25};
    vector<int> districts = {25, 1, 25, 14, 25, 28, 25, 42, 25, 19, 25, 23, 25, 8, 25, 15, 25, 41, 25, 26, 25, 49, 25, 24, 25, 11, 25, 6, 25, 48, 25, 21, 25, 28, 25, 18, 25, 24, 25, 27, 25, 40, 25, 33, 25, 0, 25, 49, 25, 18};
    vector<string> roads = {".vn6bh9ijnkeh9ddain0ebmcgpb5eprfhl7m4hcf0gaqtm2qgk", "v.mpjMDcirijepntAefwrG8jpkoAKn4LfoqfyfIAvKCv1qtyks", "nm.mjCxk5Btabp9ckasovtfc72bpzAhym2f6savBmDy8kzoHr6", "6pm.5ndchhdbd3dggef79ih9hobclimmal8j9dke7ldrng4m9l", "bjj5.tj6dhb886bgj9cccnb5fkahqhgr5i9ef8pjcqipigan8k", "hMCnt.aAAzAvzptqhADgq8EuuErc2DJ4yznDdy6lh7eBLyizwx", "9Dxdja.qtnporenngss8fbvmqzl99rAcovhw4rbaa63zCn9olt", "ickc6Aq.eh8a8cflq88jfu69jkfoxfaz2kfdm8wojxpsbgho8n", "ji5hdAte.vn55k6bk5nkqra7758mxudwg5c3o5uxjAudgukCl9", "nrBhhznhv.8qpdtyyqbn8xooyBssx4rAfBqvmqyeotkIr0k69C", "kitdbAp8n8.ihansuh3kawfgrtmqy6iA6tlnlhxilvmAi7hf3v", "ejab8voa5qi.3e4ag4jfkna18b4ispesca77j3pqdvohhoewgc", "hebd8zr85ph3.f8el0gilr54bb9mwoawacb5m0tshyrjcohwff", "9pp36peckdaef.gkkgd95kickqffmfmo9oclafmcalcuoc6i6p", "dn9dbtnf6tn48g.5c8nenkf53b1fpujpg75ai7msctodlsezk7", "dtcggqnlbysaek5.8fteqhlb4e5dnyplm97fidjucspbrwgDo6", "aAkgjhgqkyuglkc8.lwbp8rgdnb6eAwdpi9ndkaq9lkjyxdBqf", "ieae9As85qh40g8fl.hjms55ba9mxo9xabc4n0utizsjcpixge", "nfsfcDs8nb3jgdntwh.ndydhrsntB8gD6tmmohAmozpAfaki6v", "0wo7cg8jknkfi9eebjn.eandhqc5dpsfhm8n3icf1f9rul2qgl", "erv9cqffq8akl5nqpmde.omirwljobqrcuirdlp8flcBr7bc7v", "bGtin8burxwnrkkh8syao.xmlwi55AC4trfvar1macfsEwdzso", "m8fhbEv6aofa5iflr5dnmx.ahefrBm4C9gh8q6zumCuo6nlvfk", "cjc95um97og14c5bg5hdima.9e5hrnfrac69h3ooctmjhmcued", "gp7hfuqj7yr8bk34dbrhrlh9.95hrylqk48alaowfws9owiDo3", "pk2okEzk5Btbbqbenasqwwee9.drBAfBm5h5ubyDoGAaiAqIr9", "bobbarlf8sm49f15b9nclif55d.dotknf93bg8lqarmfmrcyj9", "5Apchc9omsqimffd6mt5j5rhhrd.9vwanmap6l7j4ecpyr8vmk", "eKzlq29xxxyswmpnexBdo5BrrBo9.BG3vwkAbv3ke7dyIwgytt", "pnAihDrfu46pofuyAo8pbAmnyAtvB.oDdArupoBiqxoHo4ma9C", "r4hmgJAadrieamjpw9gsqC4flfkwGo.HdjmavbEzrHzq2qqzjn", "fLymr4czwAAswopldxDfr4CrqBna3DH.xvkAdw2ofbgwJzhBws", "hfma5yo2gf6ca9gmpa6hct9akmfnvddx.mfgkaulhvmtedfl5o", "lo2lizvk5Btaco79ibtmurgc459mwAjvm.d8qbtAkBw7mznHr3", "7qf89nhfcql7bc579cm8ifh68h3akrmkfd.fcahm6oiiop8vhc", "mf6jeDwd3vn75lafn4mnrv89a5bpAuaAg8f.r5xylDwfdumClc", "4ys9fd4momljmaiidno3daqhlug6bpvdkqcr.lbc5b6uxl4ohp", "hfad8yr85qh30f7dk0hilr63ab8lvobwaba5l.tsgyqidohwge", "cIvkp6bwuyxptmmjauAcp1zooyl73BE2uthxbt.mcbfuGxfAtq", "fABejlaoxeiqscsuqtmf8muowDqjkizolAmycsm.he6FAdddgA", "0vm7chajjoldhacc9io1famcfoa4eqrfhk6l5gch.gcotn3shj", "gKDlq76xAtvvyltslzzflcCtwGre7xHbvBoDbybeg.8EJsgsrz", "aCydie3pukmorcopksp9cfumsAmcdozgmwiw6qf6c8.BBj9kiv", "qv8rpBzsdIAhjudbjjArBsoj9afpyHqwt7ifuiuFoEB.tGsNy5", "t1kniLCbgrihcolrycfurE6hoimyIo2JemodxdGAtJBt.qsyjq", "mqzggyngu07oocswxpal7wnmwArrw4qzdzpuloxdnsjGq.i78B", "2to4ai9hkkheh6egdik2bdlciqc8gmqhfn8m4hfd3g9ssi.ndm", "qyHmnzooC6fwwizDBxiqczvuDIyvyazBlHvCowAdsskNy7n.gI", "gkr98wl8l93gf6koqg6g7sfeorjmt9jw5rhlhgtghriyj8dg.s", "ks6lkxtn9Cvcfp76fevlvokd399ktCnso3ccpeqAjzv5qBmIs."};
    int inverseWalkSpeed = 78;
    int inverseDriveSpeed = 66;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 79686;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> cars = {25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25};
    vector<int> districts = {25, 1, 25, 14, 25, 28, 25, 42, 25, 19, 25, 23, 25, 8, 25, 15, 25, 41, 25, 26, 25, 49, 25, 24, 25, 11, 25, 6, 25, 48, 25, 21, 25, 28, 25, 18, 25, 24, 25, 27, 25, 40, 25, 33, 25, 0, 25, 49, 25, 18};
    vector<string> roads = {"..................................7...............", "...................H..............................", ".......k..........................................", "............8.....................................", ".............................4..........sg........", "...........b.E.....................g..............", "............................i.....................", "..k.....x...................................t.D...", ".......x..........................................", "..................p.....................n.........", ".......................o.........C................", ".....b............................................", "...8............E.....o...........................", ".....E............................................", "........................6............c............", "....................................s.......ey....", "............E.....................................", ".......................h..........................", ".........p........................................", ".H................................r...............", "........................g......4c.1...............", "......................................t...........", "............o......................r...7.......c..", "..........o......h.............................e..", "..............6.....g.....3.......................", "......................................r...........", "........................3.........................", ".............................h....................", "......i................................3..........", "....4......................h......................", ".........................................na.......", "....................4.............................", "....................c.............................", "..........C.......................................", "7..................r1..............u..............", ".....g................r...........u......r..F...t.", "...............s..................................", "..............c...................................", ".....................t...r...............t........", "......................7.....3.....................", "....s....n........................................", "....g.........................n....r..t..........o", "..............................a...................", "............................................p.....", ".......t.......e...................F.......p......", "...............y..................................", ".......D..........................................", "......................ce..........................", "...................................t..............", ".........................................o........"};
    int inverseWalkSpeed = 30;
    int inverseDriveSpeed = 25;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 175680;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> cars = {25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25};
    vector<int> districts = {25, 1, 25, 14, 25, 28, 25, 42, 25, 19, 25, 23, 25, 8, 25, 15, 25, 41, 25, 26, 25, 49, 25, 24, 25, 11, 25, 6, 25, 48, 25, 21, 25, 28, 25, 18, 25, 24, 25, 27, 25, 40, 25, 33, 25, 0, 25, 49, 25, 18};
    vector<string> roads = {"....a.....................................9.......", ".......................T..........................", ".........N...............................M........", ".......................................s....v.....", "a......o..........................................", ".....................p.......b....................", "......................8.....0.....................", "....o.....................g.......................", ".................v......V.........................", "..N...................................2...........", ".................................G............v...", "......................S.............b.............", ".......................m..5.......................", "..............OR..................................", ".............O.........................d..........", ".............R............................0.......", ".....................w.............B..............", "........v..........................Z..............", "................................x...............Z.", "...........................6..........v...........", ".............................H...............E....", ".....p..........w.................................", "......8....S......................................", ".T..........m.....................................", "........V................g........................", "........................g........................L", ".......g....5.....................................", "...................6.............i................", "......0..............................h............", ".....b..............H.............................", "...............................50.................", "..............................5.........s.........", "..................x...........0...................", "..........G................i......................", ".........................................x.......S", "................BZ................................", "...........b......................................", "............................h..................6..", ".........2.........v..............................", "...s..........d...................................", "...............................s...........m......", "..M...............................x...............", "9..............0..................................", "........................................m...o.....", "...v.......................................o......", "....................E..........................D..", "..........v.....................................x.", ".....................................6.......D....", "..................Z...........................x...", ".........................L........S..............."};
    int inverseWalkSpeed = 42;
    int inverseDriveSpeed = 36;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 844536;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> cars = {25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25};
    vector<int> districts = {25, 1, 25, 14, 25, 28, 25, 42, 25, 19, 25, 23, 25, 8, 25, 15, 25, 41, 25, 26, 25, 49, 25, 24, 25, 11, 25, 6, 25, 48, 25, 21, 25, 28, 25, 18, 25, 24, 25, 27, 25, 40, 25, 33, 25, 0, 25, 49, 25, 18};
    vector<string> roads = {".......................Z............Z.............", "...............................Z..................", "..............Z.........................Z.........", ".........Z.........................Z..............", "........Z.....................................Z...", ".....................................Z........Z...", "...................Z..................Z...........", "............Z...........Z.........................", "....Z..........................Z..................", "...Z...........Z..................................", ".............................Z...............Z....", "......................Z......................Z....", ".......Z.................................Z........", ".......................ZZ.........................", "..Z................Z..............................", ".........Z........Z...............................", "..................Z......................Z........", ".............................Z............Z.......", "...............ZZ.................................", "......Z.......Z...................................", ".........................Z....Z...................", ".................................Z..............Z.", "...........Z...........................Z..........", "Z............Z....................................", ".......Z.....Z....................................", "....................Z.................Z...........", "...............................................Z.Z", "..........................................ZZ......", "..................................Z.........Z.....", "..........Z......Z................................", "....................Z..................Z..........", ".Z......Z.........................................", ".....................................Z.....Z......", ".....................Z.........................Z..", "............................Z......Z..............", "...Z..............................Z...............", "Z.................................................", ".....Z..........................Z.................", "......Z..................Z........................", "......................Z.......Z...................", "..Z..............................................Z", "............Z...Z.................................", ".................Z.........Z......................", "...........................Z....Z.................", "............................Z...................Z.", "..........ZZ......................................", "....ZZ............................................", "..........................Z......Z................", ".....................Z......................Z.....", "..........................Z.............Z........."};
    int inverseWalkSpeed = 95;
    int inverseDriveSpeed = 11;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 2334176;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> cars = {25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25};
    vector<int> districts = {25, 1, 25, 14, 25, 28, 25, 42, 25, 19, 25, 23, 25, 8, 25, 15, 25, 41, 25, 26, 25, 49, 25, 24, 25, 11, 25, 6, 25, 48, 25, 21, 25, 28, 25, 18, 25, 24, 25, 27, 25, 40, 25, 33, 25, 0, 25, 49, 25, 18};
    vector<string> roads = {".8ruiglffbudfkBtC5uaiaxh9kiA.moqwjfoet5z.t8namkAcf", "8.jmghd7lim79ixmydm198pbdkaxtnghnbbg5oaukqfl9fds4j", "rj.fvyfbFCcklxEmGvchcqilrAfGEE6bfff3d.qAiCyyj37eeC", "umf..t8gDD3hgp.7sA2kco2fztbs.w941archixm3rzpthk8iA", "igv..4gkgjqa91iijnpgh8p9s5fhc8pmqfsrjcohkaf4qsswic", "ghyt4.knbfvdd5mnnkuil8udr3jke5trvjtulhmlpcc7qvuBk7", "ldf8gk.9uta87hp8rr9b4eb.rm2qop85a.kb9gol6mpjleggar", "f7bgkn9.sqf.amxizlf54ejcip7yvs.bh7a80.gugtmob87l2q", "flFDgbus.6ElmhyyyfEntfFnodrvpdA.FsvBrtkxzo6j.BzLq3", "biCDjftq6.ElmlCAD9DkrfFoiirAui.zFsqzoweBAs3nlyvKn8", "umc3qvafEE.ihrubwA0kcp5hywcwwz632bp9gmwq7uAsreh5hB", "d7khad8.lli.1cpfrji675k3lf5plifej.ig8hhmejgehhhp7i", "f9lg9d7ammh1.bndplh877i1nf5nkifdi5kh.fkkd.idjiio9j", "kixp15hmhlrcb.gihpqjjaqau4g.a7qor.vtl.qfk7h2suuxkd", "BxE.impxyCupng.i1GtwtqplLjq38kxsspIAx8G3m9yeHDFyxu", "tmm7in8iyAbfdii...akdk7bAnbklqfa9auijaxe3jwiumogjv", "CyGsjnrzyDwrph1..HvyvrrnMks28kzu.rKCza.5o.z.IFHAzu", "5dvAnkrlf9AjlpG.H.AfofDn8ooFzpuwCpitjz5Eyx9sdroGig", "umc2pu9fED0ihqtavA.jbo5gyvcvvy731bpaglwp6tzrrei6hB", "a1hkgib5nkk68jwkyfj.79nafl8wtoefl9be.octiqhladbq2l", "i9cchl44trc77jtdvob7.df8mn2urq77d3f84kkpbpnlgabi5q", "a8qo88eeffp57aqkrfo9d.q8kbcpkelkpdkmdjfoki.dh.lvbc", "xpi2pubjFF5kiqp7rD5nfq.hCves.yc83dufkiAl5rBqwkn8lC", "hblf9d.cnoh31albnnga88h.pf5liifdh5mhbcmib.kcljknbk", "9drzsrrioiylnuLAM8yfmkCp.uoKFxruAp.phC3IyDhx6miDg.", "kkAt53mpdiwff4jnkovlnbvfu.lhb2u.wlxxofqjp9f.tyxCn9", "iafbfj27rrc55gqbsoc82ce5ol.roo9.d0ib7hlm9mniidei7o", "AxGshkqyvAwpn.3k2FvwupslKhr.5hyuuqICx9F6o7xcHEGBxr", ".tE.ceovpuwlka8l8zvtrk.iFbo5.bxtvoFAu9B9o1r7CCDBul", "mnEw85psdizii7kqkpyoqeyix2ohb.yvzozArhsksag7w.AFq9", "og69pt8.A.6ffqxfzu7e7lcfru9yxy.498h3aoqtbvvsk.abby", "qhb4mr5b.z3edosauw3f7k8du..utv4.57l8ckso6rvpncfadx", "wnf1qvahFF2jirs9.C1ldp3hAwduvz95.crcilyo6tBrt.k6jC", "jbfafj.7ssb.5.parpb93dd5pl0qoo87c.jb8gmm8moijdfi8p", "fbfrstkavqpikvIuKipbfkum.xiIFzhlrj.fazcFrCox4b7tau", "og3crub8Bz9ghtAiCtae8mfhpxbCAA38cbf.aspxeywui37dbz", "e5dhjl90rog8.lxjzjg.4dkbho7xuraci8aa.ofugslnb98m0p", "to.ichg.twmhf.8aazlokjicCfh99hoklgzso.z5e8s9yvwrop", "5aqxomogkewhkqGx.5wckfAm3qlFBsqsymcpfz.Evydt7miCek", "zuAmhlluxBqmkf3e5EptpoliIjm69ktoomFxu5E.i9xdEABuut", ".ki3kp6gzA7edkm3oy6ibk5byp9oosb668regevi.mwlsilchw", "tqCracmtosuj.79j.xtqpir.D9m71avrtmCys8y9m.p5AABArk", "8fyzfcpm63Agihywz9zhn.BkhfnxrgvvBoowlsdxwp.kjusGk7", "nlyp47jojnsed2ei.srlldqcx.ic77sprixun9tdl5k.vwwynf", "a9jtqqlb.lrhjsHuIdraghwl6tiHCwkntj4iby7EsAjv.fbwaq", "mf3hsve8ByehiuDmFreda.kjmydEC..c.db39vmAiAuwf.3haz", "kd7ksug7zvhhiuFoHoibblnkixeGDAafkf778wiBlBswb3.l9x", "Ase8wBglLK5poxygAG6qiv8nDCiBBFba6itdmrCucAGywhl.nI", "c4eiika2qnh79kxjzih25blbgn7xuqbdj8ab0oeuhrknaa9n.o", "fjCAc7rq38BijduvugBlqcCk.9orl9yxCpuzppktwk7fqzxIo."};
    int inverseWalkSpeed = 100;
    int inverseDriveSpeed = 40;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 68480;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> cars = {25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25, 25};
    vector<int> districts = {25, 1, 25, 14, 25, 28, 25, 42, 25, 19, 25, 23, 25, 8, 25, 15, 25, 41, 25, 26, 25, 49, 25, 24, 25, 11, 25, 6, 25, 48, 25, 21, 25, 28, 25, 18, 25, 24, 25, 27, 25, 40, 25, 33, 25, 0, 25, 49, 25, 18};
    vector<string> roads = {"..6..............p.....C.......p..................", "..............f...............................H..L", "6......C...............V..................F..Y.l..", "...................v...R...............A...u.h....", ".........5...................y.........q..........", "..................s..............................7", "...............L...p..H...........................", "..C.......I..........4.n..L.......................", ".............s.....................R.........6....", "....5................x.u......R..z.......e........", ".......I.............c.........n..........s...S...", "......................................eS......ns..", "...............Q....R......I.......2..f.....S.....", "........s...........l.9.k.K..........6...4........", ".f..............g........j..b..Y...8.v.........Z..", "......L.....Q.....................................", "..............g..F..................k.l...........", "p...............F.....O.........0...R.....M.......", ".....s.................b.......U..............8...", "...v..p..................e......h........I..d.....", "............Rl.......zM............k.......5......", ".......4.xc.........z............v...............5", "......H......9...O..M.............S.......a.r.....", "C.VR...n.u........b..................4..........D.", ".............k................X...7............X..", "..............j....e..............8......R.X......", ".......L.....K..............k..8.....c............", "............I...................N..D3.............", "..............b...........k..z........Q.....4E....", "....y.......................z......Ba.Z...7..q.C.Y", ".........R..............X..................D......", "p.........n...Y...U.......8.................X...V.", ".................0.h.......N.....3............b...", ".........z...........v..........3.................", "......................S.78...........o..S..8......", "........R...2.8.....k......D.B..........X.........", "................kR.........3.a..............J.yI..", ".............6v........4..c.......o............1..", "...........ef...l...........QZ.........A..........", "...Aq......S..........................A....5......", "..................................SX......3....R.m", ".........e...4.....I.....R................R.......", "..F.......s......M....a......7..........3R........", "...u................5....X....D...8....5..........", "............S......d..r.....4..X....J.............", "..Yh....6...................Eq....................", ".H........Sn......8.............b...y.............", "..l........s..Z.........X....C......I1..R.......F.", ".......................D.......V...............F..", ".L...7...............5.......Y..........m........."};
    int inverseWalkSpeed = 51;
    int inverseDriveSpeed = 24;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 90984;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> cars = {29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29};
    vector<int> districts = {31, 0, 13, 27, 18, 37, 43, 48, 24, 23, 29, 17, 31, 16, 19, 28, 17, 4, 17, 44, 19, 2, 40, 25, 30, 44, 18, 32, 17, 21, 2, 25, 4, 46, 0, 36, 15, 7, 24, 21, 7, 3, 18, 6, 22, 33, 35, 31, 19, 33};
    vector<string> roads = {".xjtqlgqA9hb7l6zjCA8prAfiyop7vAFnAxDyBzpugBdEptouC", "x.uqcfE78rfusmqzDCbCkd2hrDBsz338jv8kppc7an3EEfjwBA", "ju.bveamrak6n8if8jqfzhxl2f76dvvzxhpohlpol7ydlwf4bi", "tqb.wdmkkjnhv8q8jcirCctpabd4ptpsA6id59gnfcupey68aa", "qcvw.iBcknarjpjFBInx7keasHCwu8gl6Cjvxyn8jmfAL2qyEG", "lfedi.o7ec9ek6fmnqeoo4icbpldlgglmkbhghda87jpsk8gmo", "gEamBo.vCdq9nijo3qB8DsHqdlah8EFKBrzAswAwwgI3sBqdhr", "q7mkc7v.9j9lmejtuwbuk7acjwtlr89fip7iklb36ecwyfdotu", "A8rkkeC9.rjtxjtsAv2Ds9amowxnAc57rn2big3d5laDxndsvs", "9rajncdjr.c3cb7qetraqiuc8phf8qtynqotorqjm6vcvnjfls", "hfkna9q9jc.gcfawqzlmfdi2hxrmkeiocuhqprk7fckpBbioux", "bu6hre9lt3g.gbbn9qt9ujxg6mcd7uvAsoqtnrrmn7y9ssjcip", "7snvjknmxccg.n4CpGyfhpvalCtseqvBfCuCzCxksiwlIhtszF", "lm88p6iejbfbn.hggkilu8ph5ie6inmrsfghcfghd4qkmq79fi", "6qiqjfjjt7ab4h.xlBudjlt8gxonbotyhxqyuxthocuhDiontz", "zzf8FmotsqwnCgx.k3qvLlCyg3d9tCyAJ5rjadoxokDr5Hfa62", "jD8jBn3uAeq9pglk.mzcEqGrbh6ebDEICoyxptxwufH7oCnadn", "CCjcIqqwvtzqGkB3m.tyPpFBk4fdwFBDN7ulcfrAroFu1Kid82", "AbqineBb2rltyiuqzt.Dv9coouwmAf89tl38fd1f5ldDuqbqtq", "8Cfrxo8uDam9fldvcyD.xtFmgtin2BEJvyADxBBuxhG5Awtkpy", "pkzC7oDksqfuhujLEPvx.rldwNGBvgot1JrDEFvfrrmBR4xDJN", "rdhck4s79idjp8llqp9tr.ggeoneqgdhph7ccd8b3bhtqm5imm", "A2xteiHaauixvptCGFcFlg.kuFEvC437lxamsqeadq0HGgmzDC", "fhlpacqcmc2gah8yrBomdgk.iztojflqbwktsun9idmpEalpwA", "ir2asbdjo8h6l5ggbkogweui.g96esswuhmngkmlj4vfmtc6cj", "yDfbHplwwpxmCix3h4utNoFzg.aasFCELauoeiszslGp6Ji936", "oB7dClatxhrcteod6fwiGnEt9a.9hCBFEhvsjnuwrfFehDj46g", "ps64wdhlnfmds6n9edmnBevo6a9.kusvzaliaekoiawkfx938c", "7zdpul8rA8k7eibtbwA2vqCjeshk.yBHtvxBuyyrueE5yuqiow", "v3vt8gE8cqeuqnoCDFfBgg4fsFCuy.7cfycossg6dn6EHbmyDC", "A3vpggF95tivvmtyEB8Eod3lsCBsB7.5nt6homab9o3FDjiwAy", "F8zsllKf7yoABryAID9Jth7qwEFvHc5.sv9hpnbgdt6LEolADA", "njxA6mBirncsfshJCNtv1plbuLEztfns.HpBCDueppmzP3vBHL", "Avh6CkrpnquoCfx5o7lyJhxwhahavytvH.md47jtkkyv8Ebdb4", "x8pijbz72ohqugqryu3Ar7akmuvlxc69pm.bgf3b2ibAvmbptr", "DkodvhAibtqtChyjxl8DDcmtnosiBohhBdb.857mbmmCmy9noi", "yph5xgskiopnzcuapcfxEcssgejausopC4g8.3doehsvez6ee9", "Bpl9yhwlgrrrCfxdtfdBFdqukineysmnD7f53.cpekrzgA8iic", "zcpgndAb3qkrxgtoxr1Bv8enmsukygabuj37dc.f4keBsq9oro", "p7on8aw3dj7mkhhxwAfufba9lzwor6bgetbmopf.bgcwCahrxy", "ualfj8w65mfnsdoour5xr3dijsriud9dpk2bee4b.fdxtm8mqo", "gn7cm7gel6c7i4ckfolhrbqd4lfaenotpkimhkkgf.rhqocbhm", "B3yufjIcavkywquDHFdGmh0mvGFwE636mybmsrecdr.IHinAED", "dEdpAp3wDcp9lkhr7uD5BtHpfpek5EFLzvACvzBwxhI.wAshlu", "EEleLssyxvBsImD5o1uARqGEm6hfyHDEP8vmegsCtqHw.Nkfa3", "pfwy2kBfnnbshqiHCKqw4mgatJDxubjo3EmyzAqamoiAN.sAGI", "tjf6q8qddjijt7ofnibtx5mlcij9qmilvbb9689h8cnsks.ehg", "ow48ygdosfocs9naadqkDizp6943iywABdpneiormbAhfAe.5d", "uBbaEmhtvluizft6d8tpJmDwc368oDADHbtoeirxqhElaGh5.9", "CAiaGorussxpFiz2n2qyNmCAj6gcwCyAL4ri9coyomDu3Igd9."};
    int inverseWalkSpeed = 84;
    int inverseDriveSpeed = 41;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 102826;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> cars = {29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29};
    vector<int> districts = {31, 0, 13, 27, 18, 37, 43, 48, 24, 23, 29, 17, 31, 16, 19, 28, 17, 4, 17, 44, 19, 2, 40, 25, 30, 44, 18, 32, 17, 21, 2, 25, 4, 46, 0, 36, 15, 7, 24, 21, 7, 3, 18, 6, 22, 33, 35, 31, 19, 33};
    vector<string> roads = {"....9...........................................8.", "....n..............j........c.....................", "...............................................p..", "................................................b.", "9n...................n...................u........", ".................................a................", "........A.........................................", "................................f....d............", "......A...............................r...........", ".........................i.......r.........x5.....", "......................................2.j.........", "......................................l...........", "...........................8......................", "...............................x..................", ".......................................D.8........", "................................c.................", ".................g..o.............................", "................g.................................", "....................................z..........y..", ".j................................................", "................o....w.h.....................l....", "....n...............w.............................", "............................r.....g...............", "....................h.............................", ".........................................M........", ".........i........................................", "...........................q......................", "............8.............q........9....q.........", ".c....................r........w..................", "..........................................m..f.i.n", "..............................................x...", ".............x..............w.....................", ".......f.......c......................q...........", ".....a...r............................g...........", "......................g...........................", "...........................9......................", "..................z...............................", ".......d..........................................", "........r.2l....................qg...........8....", "..............D...................................", "..........j................q......................", "....u.........8.........M.....................h...", ".............................m....................", ".........x........................................", ".........5........................................", "....................l........f........8...........", "..............................x..........h........", "..p...............y..........i....................", "8..b..............................................", ".............................n...................."};
    int inverseWalkSpeed = 30;
    int inverseDriveSpeed = 16;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 175452;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> cars = {29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29};
    vector<int> districts = {31, 0, 13, 27, 18, 37, 43, 48, 24, 23, 29, 17, 31, 16, 19, 28, 17, 4, 17, 44, 19, 2, 40, 25, 30, 44, 18, 32, 17, 21, 2, 25, 4, 46, 0, 36, 15, 7, 24, 21, 7, 3, 18, 6, 22, 33, 35, 31, 19, 33};
    vector<string> roads = {".......k.....................i....................", "..E..............1................................", ".E............................................5...", ".............R........P...........................", "............................I..................j..", ".........t..........................r.............", ".............................M.........Z..........", "k...............................N.................", "..............l...............................y...", ".....t...................d........................", ".............G......V.............................", "................................x...........7.....", "......................N..........................m", "...R......G.......................................", "........l.................................W.......", ".......................L..L.......................", "...............................T........K.........", ".1...........................................p....", "..........................................o.......", "...........................U.....................Y", "..........V..............................a........", "...........................................F....G.", "...P........N.....................................", "...............L............A.....................", "..............................2...d...............", ".........d.............................C..........", "...............L..............s...................", "...................U..............................", "....I..................A..........................", "i.....M...........................................", "........................2.s.......................", "................T.................3...............", ".......N...x......................................", "....................................i...I.........", "........................d......3..................", "......................................o.........S.", ".....r...........................i................", "......................................s.....e.....", "...................................o.s............", "......Z..................C........................", "................K................I................", "....................a..........................5..", "..............W...o...............................", ".....................F.......................O....", "...........7.........................e............", ".................p.........................O......", "..5.....y.........................................", "....j....................................5........", ".....................G.............S..............", "............m......Y.............................."};
    int inverseWalkSpeed = 94;
    int inverseDriveSpeed = 82;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 2605484;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> cars = {29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29};
    vector<int> districts = {31, 0, 13, 27, 18, 37, 43, 48, 24, 23, 29, 17, 31, 16, 19, 28, 17, 4, 17, 44, 19, 2, 40, 25, 30, 44, 18, 32, 17, 21, 2, 25, 4, 46, 0, 36, 15, 7, 24, 21, 7, 3, 18, 6, 22, 33, 35, 31, 19, 33};
    vector<string> roads = {"...................Z.....................Z........", ".......Z...................Z......................", "............................Z..............Z......", ".....Z........................Z...................", ".........................................ZZ.......", "...Z..................................Z...........", "........Z...............................Z.........", ".Z....................Z...........................", "......Z....Z......................................", "...........Z................................Z.....", ".........................Z..........Z.............", "........ZZ........................................", "............................Z................Z....", ".................Z.............Z..................", "..................Z....Z..........................", "....................Z.............Z...............", "....................Z.........................Z...", ".............Z..................................Z.", "..............Z...................................", "Z...............................................Z.", "...............ZZ.................................", ".....................................Z.......Z....", ".......Z..................Z.......................", "..............Z........................Z..........", ".................................Z...............Z", "..........Z..........................Z............", "......................Z...........Z...............", ".Z................................................", "..Z.........Z.....................................", "..............................Z............Z......", "...Z.........................Z....................", ".............Z..................Z.................", "...............................Z...............Z..", "........................Z...............Z.........", "...............Z..........Z.......................", ".......................................Z..Z.......", "..........Z...................................Z...", ".....................Z...Z........................", ".....Z...........................................Z", ".......................Z...........Z..............", "......Z..........................Z................", "Z...Z.............................................", "....Z..............................Z..............", "..Z..........................Z....................", ".........Z.....................................Z..", "............Z........Z............................", "................Z...................Z.............", "................................Z...........Z.....", ".................Z.Z..............................", "........................Z.............Z..........."};
    int inverseWalkSpeed = 76;
    int inverseDriveSpeed = 13;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 2723660;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> cars = {29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29};
    vector<int> districts = {31, 0, 13, 27, 18, 37, 43, 48, 24, 23, 29, 17, 31, 16, 19, 28, 17, 4, 17, 44, 19, 2, 40, 25, 30, 44, 18, 32, 17, 21, 2, 25, 4, 46, 0, 36, 15, 7, 24, 21, 7, 3, 18, 6, 22, 33, 35, 31, 19, 33};
    vector<string> roads = {".CGpzbhjq.Fu..Kvd.vq2AuJosC.DmAlxLqz.AE..yrrlznie.", "C...D.xz.C.bAj.GpFadFj.h..u0s.w.5ocm61.lywco.3x.o8", "G...otstt.3.yi.typshI5.5vjcj9sfl..s7ej.ol.sfwm.nrd", "p...tekmapl5m.nudwc2sfdlb3ncn....p9g.bm7nnaecbl6a7", "zDot.p.fEdlsnn.5A.H..l.uFwb.ec8sEqEi.Chq67EfEEbqr.", "b.tep.8bkftj7ay.a.pfeoixjiqr.eo.pzknuqs6jnlfh.e73.", "hxsk.8.2s.rm6dxe.k....gxsolw.4ihvxsl.vocbhtcqw5.bp", "jztmfb2.v3ro7.x.niz...hyuqkym2ikyx.lzypfag..t.4g.r", "q.taEksv.yv.shvFcH4dt.ot29ydxxzb7y0rjcxfyy..5.vegf", ".C.pdf.3y...aiy8qfConpiz.t.Bm.hnB.ymBApi9.zewB4jht", "F.3lltrrv..g.j6q..viI..8x.9m6qcnr5u5hm.o..ueypnorf", "ub.5sjmo..g..8hu.uf3xa.f.4k9jol7bjdca9icmld.hambf2", ".Aymn767sa...h.jiqx.c..Cr..zta..xDsrByveiotipyc..t", ".ji.nad.hij8h.mnfpk5.d8mhai.igi5iogdjhi4gh.8.ie48b", "K..n.yxxvy6h.m.xBsukN9g3ym.jdwjpp3ubekaspkukzn.rvf", "vGtu5.e.F8qujnx.y8I.wpk..ygFj8d.G.EmE..p7.Fg.G9qpx", "dpydAa.ncq..ifBy.Dhggs.z.g.oypxbkDcttn.at..n7loa8m", ".Fpw..kiHf.uqps8D.J.DmjvHy.E.f.v.q.jB.ht88HhHGet.w", "vascHp.z4CvfxkuIhJ.fyq.r7.AayA.e4x4sg9xjAA3ra6yilf", "qdh2.f..doi3.5k.g.f.t.aie..c.ml4.mcdebj8ll.cfck7c6", "2FIs.e..tnIxc.NwgDyt.Dx.r.EE.nCpANtCIDHk.AuuoCpl.A", "Aj5flo...p.a.d9psmq.D.69rfah8nc.lao.ei7ihdoaskkila", "u..d.ighoi...8gk.j.ax6.gpf9k9ga..gn4.k9dcao3pmd.g.", "Jh5luxxytz8fCm3.zvri.9g..jigfxlnm6sc.hdrrmrkxkuqud", "o.vbFjsu2.x.rhy..H7errp..bAgzwAcaA3.mfyfyz3q2cvegh", "s.j3wioq9t.4.amygy...ffjb.p8.rq67o.hc7.bqp8hd7...5", "Cucnbqlky.9k.i.g..A.Ea9iAp.t2i2.wey7qt.na3ya.vfnpl", ".0jc.rwydBm9z.jFoEacEhkgg8t.rzuf.ndk50pkxucnj3wjo7", "Ds9ne..mxm6jtidjy.y..89fz.2r.k5nubx6nr2nc6xbzthnqj", "m.s.ce42x.qoagw8pfAmnngxwrizk...zwwkzy.h8e..vz.igr", "Awf.8oiizhcl.ijdx..lCcalAq2u5...xhy9su8m70.9Awdmom", "l.l.s.hkbnn7.5p.bve4p..nc6.fn...d.ahien.mnbdbe.3.a", "x5..Epvy7BrbxipGk.4.Al.ma7w.uzxd.s.o.4.iyx6pd1.hla", "Lo.pqzxxy.5jDo3.DqxmNag6Aoenbwh.s..bho.to.x.Cqttw.", "qcs9Eks.0yudsguEc.4ctons3.ydxwya...qibwexx0o59udg.", "zm7ginllrm5crdbmtjsdC.4c.h7k6k9hobq.hk5ieaq8tn.ild", ".6e..u.zjBhaBjeEtBgeIe..mcq5nzsi.hih.6.nvsimo9.m.7", "A1jbCqvycAm9yhk.n.9bDikhf7t0ryue4obk6..j....h2wim.", "E..mhsopxp.ivia..hxjH79dy..p2.8n..w5...of9wczskor.", ".lo7q6cffioce4spatj8kidrfbnknhm.iteinjo.jl.c.jf03f", ".yln6jbay9.migp7t8Al.hcryqaxc87myoxev.fj.5.8xy5kk.", "yw.n7nhgy..lohk..8AlAdamzp3u6e0nx.xas.9l5..8zwbmnm", "rcsaElt..zudt.uF.H3.uoor38ycx..b6x0qi.w....p68vehe", "rofeffc..ee.i8kgnhrcua3kqhanb.9dp.o8m.cc88p.q...ef", "l.wcEhqt5wyhp.z.7Hafospx2d.jzvAbdC5tohz.xz6q.f.dej", "z3mbE.w..BpayinGlG6cCkmkc7v3tzwe1q9n92sjyw8.f.xim.", "nx.lbe54v4nmce.9oeykpkduv.fwh.d..tu..wkf5bv..x.gfo", "i.n6q7.gejob.4rqati7li.qe.njnim3htdimio0kme.dig.3e", "eorar3b.ghrf.8vp8.lc.lgug.poqgo.lwgl.mr3knheemf3.i", ".8d7..prftf2tbfxmwf6Aa.dh5l7jrmaa..d7..f.mefj.oei."};
    int inverseWalkSpeed = 66;
    int inverseDriveSpeed = 39;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 68619;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> cars = {29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29, 29};
    vector<int> districts = {31, 0, 13, 27, 18, 37, 43, 48, 24, 23, 29, 17, 31, 16, 19, 28, 17, 4, 17, 44, 19, 2, 40, 25, 30, 44, 18, 32, 17, 21, 2, 25, 4, 46, 0, 36, 15, 7, 24, 21, 7, 3, 18, 6, 22, 33, 35, 31, 19, 33};
    vector<string> roads = {"..c.hF5.QHMJ.QyQ..K.n11.F8.4.....d..V.m.Rc3..vp93h", "..wE7pNBV.sA..K....EF..x.IjO.M....R.......A.h.2.N.", "cw.4..mQ...Gwn...lpI....1.4..L.hou.S.v.P...c5c.l.P", ".E4.F.Hw....lN.J.m7...v.J...QG..k.DUT.mLt..r.J..D.", "h7.F.M...J.3..sef.3.p.nO.g.4A..sTNm.N.CXb..6.fi...", "Fp..M....z.5........3.L....vW.....fr6...E..pKhn...", "5NmH.....f....8.TaB.6GKo..s.C.21.aOG...G.p.v4.knv.", ".BQw....eo.y.f.F......8zgr.....i.T..a...v..5.w5t.u", "QV.....e.....K..n6y.....Y.Uf..F.CW.k.R....HR.f.2u.", "H...Jzfo..TX.tO..ccPX.Q.lgbR........LwO1..lq.vC...", "Ms.......T.Jt...qwC.2zhY.I28...d.....HsDUi....X.q.", "JAG.35.y.XJ.yUE..T5k.k8.v...4Z.8y.s......k..1...N.", "..wl......ty.6t...8.0.6...Cz..J....8h...V.....G.be", "Q.nN...fKt.U6.y...k.y....Z..f.9..UzdG0T.C.k.yi....", "yK..s.8..O.Ety...H.tlS.U.N.5.....B.m..W.Z.K.jkt.B.", "Q..Je..F.............t.M.3..c.DbbRp4y...k...3h68..", "....f.T.n.q......Gl4uR.....FD.xV.I..rPy...p..g....", "..lm..a.6cwT..H.G.EUh.Bk.8..aa..g..V.........p.U.5", "K.p73.B.ycC58k..lE.tzkl.wMw.fAU....CT2b.A8GTTh..wL", ".EI......P.k..t.4Ut.zq..yQ.9..Rf.v.Et5..2.AaML4J..", "nF..p36..X2.0yl.uhzz.gs.r......S.tL.K..J.9..U.MWH.", "1.....G...zk..StR.kqg..k..7ot.2m.2x.K.4......W...j", "1..vnLK8.Qh86....Bl.s..q..kQD.k...oz....l.n.Q.pd..", ".x..O.oz..Y...UM.k...kq...1.n.....yXU...3..5.30a.L", "F.1J...gYl.v......wyr.....ddw9mPs..Ga..A.Bs...zn..", "8I..g..r.gI..ZN3.8MQ......P.4.irt.b.....zW....8...", ".j4...s.Ub2.C.....w..7k1dP.l.....cF..3.go0..QW..5.", "4O..4v..fR8.z.5.F..9.oQ.d.l..dO.o0.mbLyW...P.9O...", "...QAWC....4.f.cDaf..tDnw4...l...1..P.....ri...U.e", ".MLG.......Z.....aA.....9..dl..tw...v..J.fL.a..I..", "......2.F...J9.Dx.UR.2k.mi.O....do.....T..IR3bnM..", "..h.s.1i..d8...bV..fSm..Pr...t..Q..ku.G.v.y.e..TM.", "..okT...C..y...b.g......st.o.wdQ..F3...j.Q.giA.d..", "d.u.N.aTW....UBRI..vt2....c01.o...d.u..sF....R.A4D", ".R.DmfO....s.z.p....Lxoy.bF.....Fd.b.H.kZ.......Rr", "..SU.rG.k...8dm4.VCE..zXG..m...k3.b..Nj..c...NG.A3", "V..TN6.a.L..hG.yr.TtKK.Ua..bPv.u.u.....HUM....XwTo", "..v.....RwH..0..P.25......3L......HN........e.c..L", "m..mC....Os..TW.y.b..4.....y...G...j....k.UKo..d.a", "..PLX.G..1D.........J...A.gW.JT.jsk.H....kA.d6j...", "R..tbE.v..U.VCZk..A2..l3.zo....v.FZ.U.k...vX...ro.", "c.....p...ik......8.9...BW0..f..Q..cM..k........eq", "3A......Hl...kK.p.GA..n.s...rLIy......UAv...b.M..B", "..cr6pv5Rq........Ta...5...Pi.R.g.....K.X......o.B", ".h5..K4....1.yj3..TMU.Q...Q..a3ei....eod..b...r5..", "v.cJfh.wfv...ikhgphL.W.3..W9..b.AR.N...6......N..n", "p2..ink5.CX.G.t6...4M.p0z8.O..n....GXc.j..M.rN.d..", "9.l...nt2......8.U.JW.dan...UIMTdA..w.d.r..o5.d.kk", "3N.D..v.u.qNb.B...w.H.....5....M.4RAT...oe.....k.p", "h.P....u....e....5L..j.L....e....Dr3oLa..qBB.n.kp."};
    int inverseWalkSpeed = 54;
    int inverseDriveSpeed = 7;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 33710;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> cars = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<int> districts = {32, 46, 9, 14, 48, 19, 20, 42, 11, 1, 41, 47, 43, 24, 12, 24, 39, 47, 28, 46, 47, 23, 7, 31, 35, 17, 29, 35, 46, 43, 45, 29, 19, 13, 22, 11, 36, 16, 42, 16, 4, 48, 11, 2, 29, 26, 32, 29, 21, 17};
    vector<string> roads = {".kwf8ma5lwzxi2vm8pvjgglv7ui98mglk11muojh99pswgw7qe", "k.GwfzrfeOyLBlA6efBn860EeoEahi8sDllkGhD4jdFJx6Hsrx", "wG.jE9EAtjh9It7Mtu6iIGH0Cpxyqowdmuyn5rqBGtchfz2xgF", "fwj.n8lkphsipckAgslfutximtflenod7dgmfq9rphacppidkm", "8fEn.ub3nFEGkaBfbpCo89gC1xp8dpfrs97pCqre3cyABfEevh", "mz98u.uroglbyjcElrcdAzA8tpnqilq8dkok7ohuxl6cis9mfv", "arElbu.cwAJD8cErjzFuklsDcFgijxpumb7xBykq8kvwGpE7A5", "5fAk3rc.kCACl7xg8mykaagz1to59ldnp65mympd78uxxcAcri", "letpnowk.FjAEkmlc2nblifrk9Ced37gxkn5v2zarbvBi8vtdB", "wOjhFgACF.AazuqSzIquMMPkEGlDwCGpcvxBeFfJGA94yHgswy", "zyhsElJAjA.rQw9FrjafECzgBbIwqfqfzxBemgCuHrrx2skD8M", "xL9iGbDCAar.FuhQxCgoMKNaEysCuwCjhvzv4zlGHx79pE6voD", "iBIpky8lEzQF.kKArHKBtuBImNdrrFyAnjgFEHkzhsxwNyHcH3", "2ltcajc7kuwuk.so7nsghhms9si96kfii04krmihc8nptgt8ng", "vA7kBcExmq9hKs.Hpn0cECB6zhAunir9qtxgcktvEphn7tax8G", "m6MAfErglSFQAoH.jmIt665KfvFempfyGnmqMoGaiiKNEdNuyx", "8etgblj8czrxr7pj.fqcedgr9lq42d7fo8adsfpaf0qup8ugio", "pfusprzm2IjCHnnmf.odmkgtn8Fhg59iAoq6x2CcteyDiaxweE", "vB6lCcFynqagKs0Iqo.eFDD5AjAvojsaqtyibmtxFqhn8u9yaH", "jnifodukbufoBgctcde.qppgmduha7e4nhl6jaqisckpcgko6x", "g8Iu8AkalMEMthE6emFq.18H8vy9hoduAhgpHoAabeEICbJnwq", "g6Gt9zlaiMCKuhC6dkDp1.7F8tz8gmbtAggnGmA8ccDHA9Inur", "l0HxgAsgfPzNBmB5ggDp87.GfpFcikatEmmlIiF5kfGKy8Jtty", "vE0iC8DzrkgaIs6Krt5gHFG.Bowxpnvcmtxm5qpzFschex3weF", "7eCm1tc1kEBEm9zf9nAm88fB.uq5bndpr87nAnrc59xzzdDeti", "uoptxpFt9GbyNshvl8jdvtpou.Iol7hgBtw7t6EkBkwCajsA9J", "iExfpngoClIsdiAFqFAuyzFwqI.soBysaiiAsE6AorliFzvbAc", "9ayl8qi5eDwCr9ue4hvh98cx5os.7g7ls9ahxhs7c4vyt7zhnn", "8hqedij9dwqur6nm2goahgipblo7.d9dl7adpfmcg3nrnbrfhn", "mionplxl3CfwFkipd5j7omknn7Bgd.acvlo0r2xetdsydcrt8B", "g8wofqpd7GqCyfrf79sedbavdhy79a.ivfhbxax3k6wBo1yoiv", "lsddr8ungpfjAi9yfia4uttcpgsldci.kjnbefnnufflclfo7x", "kDm7sdmpxczhniqGoAqnAAEmrBaslvvk.ikuhy3yspa8wxkfsl", "1lud9kb6kvxvj0tn8othhgmt8ti97lfji.3lsnihb8oqugu7of", "1lyg7o75nxBzg4xmaqylggmx7wiaaohnk3.owqki8brtyiy6sc", "mknmpkxm5BevFkgqd6i6pnlmn7Ahd0bbulo.p3xftdrxcdps7B", "uG5fC7Byvem4ErcMsxbjHGI5Atsxprxehswp.ukBEt6bkz3tjB", "ohrqqoym2FgzHmkof2maomiqn6Ehf2afynq3u.AduevBfbuvbD", "jDq9rhkpzfClkitGpCtqAAFprE6smxxn3ikxkA.zrqdbzyodvi", "h4BreuqdaJuGzhvaacxia85zckA7ce3nyhifBdz.i9AEs1Cpnv", "9jGp3x87rGHHhcEiftFsbckF5Bocgtkusb8tEuri.gzBFjHdye", "9dthclk8bArxs8pi0eqcecfs9kr43d6fp8bdteq9g.rvo7uhip", "pFcay6vuv9r7xnhKqyhkEDGcxwlvnswfaorr6vdAzr.5pyanmv", "sJhcAcwxB4x9wpnNuDnpIHKhzCiyryBl8qtxbBbEBv5.vCfosu", "wxfpBiGxiy2pNt7Epi8cCAyezaFtndocwuyckfzsFopv.qiA5K", "g6zpfspc8HsEygtd8augb98xdjz7bc1lxgidzby1j7yCq.Aolv", "wH2iE9EAvgk6HtaNux9kJIJ3Dsvzrryfkuyp3uoCHuafiA.wiF", "7sxdem7ctsDvc8xugwyonntweAbhftoof76stvdpdhnoAow.u8", "qrgkvfArdw8oHn8yiea6wutet9Anh8i7sos7jbvnyims5liu.E", "exFmhv5iByMD3gGxoEHxqryFiJcnnBvxlfcBBDivepvuKvF8E."};
    int inverseWalkSpeed = 57;
    int inverseDriveSpeed = 18;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 51987;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> cars = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<int> districts = {32, 46, 9, 14, 48, 19, 20, 42, 11, 1, 41, 47, 43, 24, 12, 24, 39, 47, 28, 46, 47, 23, 7, 31, 35, 17, 29, 35, 46, 43, 45, 29, 19, 13, 22, 11, 36, 16, 42, 16, 4, 48, 11, 2, 29, 26, 32, 29, 21, 17};
    vector<string> roads = {"......o...........................................", "...............................................p..", "............z.....................................", "..................u....................p....E.....", ".................................C.........h......", ".............p.........................y..........", "o............................g..............f.....", "..................7...............................", "....................x....t.............3..........", "..........................d.......................", ".....................s............................", ".....................p............................", "..z...............r...............................", ".....p............................................", "..........................o.......................", "..................k........g......................", ".....................q..............9.............", ".................................y.......n....n...", "...u...7....r..k..........c........5.........2.r..", "..................................e...............", "........x.....................e...................", "..........sp....q......d......................j...", "....................................9.............", ".....................d............................", "............................3.....................", "........t.........................................", ".........d....o...c.........4...........g.........", "...............g..................................", "........................3.4.......i...........j...", "......g...........................................", "....................e.............................", "....................................o.............", "........................................z.........", "....C............y........................f.......", "...................e........i........c............", "..................5..............................z", "................9.....9........o..................", "..................................c...............", "..........................................F.......", "...p.y..3.........................................", "..........................g.....z.................", ".................n................................", ".................................f....F...........", "....h.............................................", "...E..f...........................................", "..................2...............................", ".................n...j......j...................1.", ".p................r...............................", "..............................................1...", "...................................z.............."};
    int inverseWalkSpeed = 24;
    int inverseDriveSpeed = 3;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 118350;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> cars = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<int> districts = {32, 46, 9, 14, 48, 19, 20, 42, 11, 1, 41, 47, 43, 24, 12, 24, 39, 47, 28, 46, 47, 23, 7, 31, 35, 17, 29, 35, 46, 43, 45, 29, 19, 13, 22, 11, 36, 16, 42, 16, 4, 48, 11, 2, 29, 26, 32, 29, 21, 17};
    vector<string> roads = {"..............4......f............................", "....Z..................................B..........", "........................J............b............", "............................G...................j.", ".Z.........................................q......", "............................2...........w.........", "..........................P..................m....", ".................q..........................S.....", "...........o......................................", "...........................7..........2...........", "...................s.............................s", "........o.........................R...............", "................9.....L...........................", ".......................R.........n................", "4...............................J.................", ".............................J...............H....", "............9.....................d...............", ".......q.................9........................", ".........................s........................", "..........s...................................1...", "...............................H..........G.......", "f.............................U...................", "............L.................................j...", ".............R.................8..................", "..J........................s......................", ".................9s...............................", "......P..................................9........", ".........7..............s.........................", "...G.2............................................", "...............J...........................7......", ".....................U..............U.............", "....................H..8..........................", "..............J....................y..............", ".............n.....................y..............", "...........R....d.................................", "................................yy................", "..............................U................8..", "..b.....................................I.........", ".........2.......................................2", ".B..........................................Q.....", ".....w...............................I............", "..........................9...............O.......", "....................G....................O........", "....q........................7....................", ".......S...............................Q..........", "......m........H..................................", "...................1..j...........................", "....................................8...........k.", "...j...........................................k..", "..........s...........................2..........."};
    int inverseWalkSpeed = 82;
    int inverseDriveSpeed = 32;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1551216;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> cars = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<int> districts = {32, 46, 9, 14, 48, 19, 20, 42, 11, 1, 41, 47, 43, 24, 12, 24, 39, 47, 28, 46, 47, 23, 7, 31, 35, 17, 29, 35, 46, 43, 45, 29, 19, 13, 22, 11, 36, 16, 42, 16, 4, 48, 11, 2, 29, 26, 32, 29, 21, 17};
    vector<string> roads = {"..................Z............Z..................", "..Z....................................Z..........", ".Z...Z............................................", "...........Z................................Z.....", ".................................Z.Z..............", "..Z...........................................Z...", "...........................Z.....Z................", ".....................Z..............Z.............", "...............................................Z..", ".....................................Z.........Z..", ".......................Z.....Z....................", "...Z..........Z...................................", "........................Z.Z.......................", "........................................Z..Z......", "...........Z....Z.................................", ".......................Z.....................Z....", "..............Z.................Z.................", "................................Z....Z............", "Z.................................................", ".........................Z.......................Z", "...............................Z........Z.........", ".......Z....................................Z.....", "..................................Z...........Z...", "..........Z....Z..................................", "............Z....................................Z", "...................Z..........Z...................", "............Z...................................Z.", "......Z...............................Z...........", "...........................................Z.Z....", "..........Z.......................Z...............", ".........................Z...............Z........", "Z...................Z.............................", "................ZZ................................", "....Z.Z...........................................", "......................Z......Z....................", "....Z....................................Z........", ".......Z..................................Z.......", ".........Z.......Z................................", "...........................Z..............Z.......", ".Z..............................................Z.", ".............Z......Z.............................", "..............................Z....Z..............", "....................................Z.Z...........", ".............Z..............Z.....................", "...Z.................Z............................", "...............Z............Z.....................", ".....Z................Z...........................", "........ZZ........................................", "..........................Z............Z..........", "...................Z....Z........................."};
    int inverseWalkSpeed = 74;
    int inverseDriveSpeed = 71;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 4137260;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> cars = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<int> districts = {32, 46, 9, 14, 48, 19, 20, 42, 11, 1, 41, 47, 43, 24, 12, 24, 39, 47, 28, 46, 47, 23, 7, 31, 35, 17, 29, 35, 46, 43, 45, 29, 19, 13, 22, 11, 36, 16, 42, 16, 4, 48, 11, 2, 29, 26, 32, 29, 21, 17};
    vector<string> roads = {".ypx6cfpeqfAischbrdjvdj.u7jqknp76.hfgjnk8imtA8gt..", "y.i.rKM8sy.8r.loqo.iFpepgsgzkr8qrsgtzg..Gn..AvE.wG", "pi.J.BFgcEnquFcrdxhmKbhls.kE38fi.BfczjHb.qFwKhCwI.", "x.J.tAy.I.m.f4.iDctm.E.rlqp.HOwwv.tJgpfNzicg3Ekf8l", "6r.t.hk.e.9ud.8b9.6csbd2.2c.hmj21paf.cmj.clnw..nwi", "cKBAh.4ApupLpwp.nyotwpvkEhutx.BjiBtqju...rn..jfBGf", "fMFyk4.D.s.Nputqryr.ttxmFkwrBDEnmAvviwjz.slCCodBFc", "p8g..AD...dbire.iib9yi.gci7rg.0him7nq6xoxeufvnvgsx", "escIep...BlyrD8p4yfnH3.gxh.B.8mbcCg0tlB4mpAyK5vyJw", "qyE..us.B.gu9.tcw9nh.ym..kj0BIrpp8o..kaGsc7e9xedcg", "f.nm9p.dlg.m6hc.gc63mi76e.4glreaa.7nc5k.m.hdn.h..j", "A8q.uLNbyum.p.qnv.n.Aug.athv.ybt.mjzxgDA.lAfuzDgpF", "irufdppir96p.aj2m8d.godbf..9.yjgfbet8b.wn3bchodbhf", "s.F4.wurD.h.a.udy9oi6znm.lk2CJsrq7.EclcIud9.7zgcai", "clc.8pte8tcqju.g.p5dz4a8na.t8ee56t7a.b.d.gtpB8ppzr", "horib.q.pc.n2dg.k.a5jla8.97covgd.dbq....m0ebkmfbjh", "bqdD9nri4wgvmy.k.ta.C1fbscgw8cj67.c5.gx9kkvtF..uEs", "roxc.yyiy9c.89p.t.iaguf.8.cbwD.nn3h.gdkCw8g3cwl3an", "d.ht6orbfn6ndo5aai.7tb64i76nekc56m3gh6pjlanjudljtn", "jimmct.9nh3..id5.a7.oj49a.1ikraddf6og2nr.4kanl.b.n", "vFK.swtyH.mAg6zjCgto.Etqppq5IOzvueu.dr9Mvj8kaDfjf.", "dpbEbpti3yiuoz4l1ubjE.fd.ehy7ai.9yc4.hy7mlxuG5su.u", "jeh.dvx..m7gdnaaff64tf.acc2n.n6cck2l.1snr9pesj.f.r", ".plr2kmgg.6.bm88b.49qda.l19kinh.3m8hd.llg9.ktcgkti", "ugsl.EFcx.eaf.n.s8iap.cl.mbksAc.obfyn..ABcp4kwt.gv", "7s.q2hkihk.t.la9c.7.pec1m.bkjo..4nbicc.meailtdeltg", "jgkpcuw7.j4h.k.7gc61qh29bb..ip8cch4mh0p.q6mcpkmcnp", "qzE..trrB0gv92tcwbni5ynkkk..C.spoaoD.l9G.d6faxd.df", "kk3HhxBg.Bl..C8o8wekI7.isjiC.7fefAd8.hE8...v.dzvGA", "nr8Om.D.8IryyJevcDkrOannAop.7.njkHk7B.J3vvHCPe.DOF", "p8fwjBE0mrebjsegj.cazi6hc.8sfn.iin7nr7yoyf..wnwhsy", "7qiw2jnhbpatgr5d6n5dv.c...cpeji.0r9chcpggeooy8k.yl", "6r.v1imicpa.fq6.7n6du9c3o4cofki0.r.dg.ohfenox8.oxk", ".sB.pBAmC8.mb7td.3mfeykmbnhaAHnrr.mDhhkGycg68zm56o", "hgftatv7go7je.7bch36uc28fb4odk79.m.ik.skpaphu..hs.", "ftcJfqvn0.nztEaq5.go.4lhyimD87ncdDi.v.C.n.Bz.6wAKy", "gzzg.jiqt.cx8c...ghgd..dnch..Brhghkv.i7z.b5kko5jm7", "jgjpcuw6lk5gblb.gd62rh1..c0lh.7c.h..i.qor7n..kndoq", "n.Hfm.jxBakD.c..xkpn9ysl..p9EJypoksC7q.Gl.3ojw6..6", "k.bNj.zo4G.AwId.9CjrM7nlAm.G83oghGk.zoG.ruFC.aAC.C", "8G.z...xmsm.nu.mkwl.vmrgBeq..vygfypn.rlr.omzCgeyEe", "inqicrsepc.l3dg0k8a4jl99ca6d.vfeeca.b7.uo.fakmgajj", "m.FclnluA7hAb9tevgnk8xp.pim6.H.ongpB5n3Fmf.lgv.kk8", "t.wgn.Cfyedfc.pbt3jakuek4lcfvC.oo6hzk.oCzal.fxp0br", "AAK3w.CvK9nuh7BkFcunaGstktpa.Pwyx8u.k.j.Ckgf.Goe4p", "8vhE.jon5x.zoz8m.wdlD5jcwdkxden88z.6okwagmvxG.px.r", "gECk.fdvvehDdgpf.ll.fs.gtemdz.wk.m.w5n6Aeg.pop.pr1", "t.wfnBBgyd.gbcpbu3jbjufk.lc.vDh.o5hAjd.Cyak0exp.ar", ".wI8wGFsJc.phazjEat.f..tgtndGOsyx6sKmo..Ejkb4.ra.s", ".G.lifcxwgjFfirhsnnn.urivgpfAFylko.y7q6Cej8rpr1rs."};
    int inverseWalkSpeed = 80;
    int inverseDriveSpeed = 75;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 89920;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> cars = {5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5, 5};
    vector<int> districts = {32, 46, 9, 14, 48, 19, 20, 42, 11, 1, 41, 47, 43, 24, 12, 24, 39, 47, 28, 46, 47, 23, 7, 31, 35, 17, 29, 35, 46, 43, 45, 29, 19, 13, 22, 11, 36, 16, 42, 16, 4, 48, 11, 2, 29, 26, 32, 29, 21, 17};
    vector<string> roads = {".q5E....xI...y.....G.gdHQsLMwj.rvNe2...Fm..ppm8Zdw", "q.eX5H.VN1...0.5...OD..mIUD.Itgd.XWnVy..9u..sI.rdb", "5e.r.z.XrA.ySQwRLKW.c.68C.H.Y.JC.8.NNUH..7.KhhKe2j", "EXr.nco.E..Jnx9.fdF7BvlL35B.hWf4h...Xlzl..TF.rpi.1", ".5.n.L.YH..d2.l9....kRW.sml.y..tU.N1qb.Z.2.E.rNw.H", ".HzcL...7bk.tEc6Q7QxqBU.BOSXG4T.u.B..dV0BSv1W.x9y.", "...o...BUt.aSO..zlVa.udl.ubbx.dI.eylwAxS.hZW.B6r.T", ".VX.Y.B.B.JFL.F.hz152.bAWgPYGh..Id.B..sBMDng2..1..", "xNrEH7UB.TLQ6fw..W.P..huXGjOK.....Nj..i47R.X95BJ.Q", "I1A..bt.T.Jhd.si.G.ol.yfmC.IhA.1ou..pb..V.4RI..7aa", ".....k.JLJ.kh.o.wSP..Z.5v.U0.sU5.9GVKR..p.23....W.", "..yJd.aFQhk..S.Bj.4p2H.xym.OQIUb.Rg..NrdP2mKjmA95.", "..Sn2tSL6dh.....t.r59E5GmW.PC4p.fELVbF.n9W3.ELNbo.", "y0Qx.EO.f..S..J5j.LcC..8f..fI1qe..84hFOFFUd..g3Rcg", "..w9lc.Fwso..J..B.q.YAGD15lUxmOFHP.p.l.Nh6yv.nA.S.", ".5R.96...i.B.5..CX.2ZKdp6..n.xy5aM.R.gO8clBZuG...J", "..Lf.Qzh..wjtjBC.O6.eCCi.Jzv..TeF...er..H.G8Yr..s.", "..Kd.7lzWGS....XO.JenC..t.gDH.fF..j..IiB..e....UhE", "..WF.QV1..P4rLq.6J.qlkYvS.qp..H.l4STcv.BnEw..0....", "GO.7.xa5Po.p5c.2.eq.3LyFJr.7..Ji.5.aMc...ME.N.qYyB", ".DcBkq.2.l.29CYZenl3..pef8UDVztluv.IE1XuAqio0..G.f", "g..vRBu...ZHE.AKCCkL..b.v.TKhHC.C.C5fL6C.QMrksjHhw", "d.6lWUdbhy..5.GdC.Yypb..SHY...XwX.Lj.o.r.ZUf1...J4", "Hm8L..lAuf5xG8Dpi.vFe...DhHF7bFflE...2mV.NcFE..4.8", "QIC3sB.WXmvymf16.tSJfvSD.TLUt9E.vR2jpX0uXhDLcDPiLO", "sU.5mOugGC.mW.5.J..r8.HhT.3zh.90D5b1W8.ThOg..P1a.k", "LDHBlSbPj.U...l.zgq.UTYHL3.v.Z.ofaT....6A.g.d65NkB", "M....XbYOI0OPfUnvDp7DK.FUzv.s.gX.P.cK.N..FiU5O.E.g", "wIYhyGxGKh.QCIx..H..Vh.7th.s...G.D...PQ...ry.T.w9.", "jt.W.4.h.AsI41mx....zH.b9.Z...CbpQhtc9f10ZM..4OOYk", ".gJf.Td...UUpqOyTfHJtCXFE9.g.C..gheg...D0..22..lKY", "rdC4t.I..15b.eF5eF.il.wf.0oXGb..5SQ.LW.8jvd.aS.I..", "v..hUu.I.o..f.HaF.l.uCXlvDf..pg5.yFt.LqR..s..G.R.x", "NX8...ed.u9RE.PM..45v..ER5aPDQhSy.IB7uRPM.HF69.Q.C", "eW..NBy.N.GgL8...jS..CL.2bT..heQFI.Xs.R..zH.ScomS.", "2nN.1.lBj.V.V4pR..TaI5j.j1.c.tg.tBX.j.kDgz16...a.s", ".VNXq.w..pK.bh..e.cMEf..pW.K.c.L.7sj.P.rL..M.Sd.GF", ".yUlbdA..bRNFFlgrIvc1Lo2X8..P9.WLu..P.BYzAz9..9.yv", "..Hz.Vxsi..r.O.O.i..X6.m0..NQf..qRRk.B.GN0.tF.OUAt", "F..lZ0SB4..dnFN8.BB.uCrVuT6..1D8RP.DrYG...UkbhLUyO", "m9...B.M7VpP9FhcH.n.A...XhA..00j.M.gLzN..Z.6.E..Gr", ".u7.2ShDR..2WU6l..EMqQZNhO.F.Z.v..zz.A0.Z..1v.7.Uu", "...T.vZn.42m3dyBGewEiMUcDggirM.dsHH1.z.U....8CBNlB", "p.KFE1WgXR3K..vZ8...orfFL..Uy.2..F.6M9tk61..dL.UCK", "psh..W.29I.jE..uY..N0k1Ec.d5..2a.6S...Fb.v8d..Q.a.", "mIhrr.B.5..mLgnGr.0..s..DP6OT4.SG9c.S..hE.CL..v..G", "8.KpNx6.B..AN3A....q.j..P15..O....o.d9OL.7B.Qv..7U", "Zreiw9r1J7.9bR...U.YGH.4iaNEwOlIRQma..UU..NU....Ug", "dd2..y...aW5ocS.sh.y.hJ.L.k.9YK...S.GyAyGUlCa.7U.n", "wbj1H.T.Qa...g.J.E.Bfw48OkBg.kY.xC.sFvtOruBK.GUgn."};
    int inverseWalkSpeed = 72;
    int inverseDriveSpeed = 63;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 37170;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> cars = {37, 16, 32, 28, 17, 10, 32, 24, 0, 37, 20, 27, 29, 17, 36, 8, 49, 27, 12, 20, 16, 10, 23, 49, 16};
    vector<int> districts = {19, 20, 19, 27, 19, 6, 19, 2, 19, 13, 19, 18, 19, 21, 19, 32, 19, 44, 19, 13, 19, 17, 19, 32, 19, 35, 19, 16, 19, 13, 19, 44, 19, 9, 19, 30, 19, 8, 19, 7, 19, 40, 19, 36, 19, 46, 19, 39, 19, 4};
    vector<string> roads = {".IkvliA9Eq82gdKkQwz5Cou3w1qHvbEE2f8qzxDrQKtGCBdypa", "I.xFmpmCFtGLsu4ubtgEatrEjGn2jwwCKAFlok7haff86eGciA", "kx.chfBak5cmjgxrBahlnu9jvi8xedjjk4cbBevmBsnrtkakh9", "vFc.utOl9clvwtEEGboxuIdvItiHlqfbtglmOkGzHwzyDrhstl", "lmhu.2jhAilp68pbvnhhidkidkdlfavyohkajhg5vr7lgine3f", "ipft2.lezhil45rbxmifkekffgdog7vxkfhalik8xtaojkkg5c", "AmBOjl.zSBDDkorfyFvuscCw5zvjvrLPDBCr1xeexAfsguGpky", "9Calhez.ug3bfaDlImqbupk8u7hCm7uu952hznynJBozxt6qj1", "EFk9AzSu.hvFDBDLDcoGuOfENCmHny93DovqTlIDEtDxFrruyu", "qt5cihBgh.irljttw5dqiw3ovo5u9hefqai9B9tmwnmnqgggge", "8GclliD3vi.9ieHpMotcytnay7kGqbwv770lDrCrMFtCBw3un5", "2LmvplDbFr9.jgNnTxB8Frw6z4sKyeGF1g9sCzGuTMwJFEdAsc", "gsjw64kfDlij.3v7Crnbpaocffhrl6zBjhhfjnmaBxcsmplkad", "dugt85oaBjeg3.xaDpn9pem9jbgtk2yzfddeompdDyftophlb9", "K4xEprrDDtHNvx.y6sfH9xqHoIn7iytzMBHltjck5ai5acHclB", "kurEbbflLtpn7ay.Fytet3wgcjpsrdHJnpomeundECfwnuspfk", "QbBGvxyIDwMTCD6F.uiNdEsNvOremEtzRFLqAmjr09p9hfMhrG", "wtabnmFmc5oxrpsyu.cwiB2uzt9van8avgncF8vqvkpmsflhkk", "zghohivqodtBnnftic.x5vawpw8i3nglzmt8w3ihjag9g2s5do", "5ElxhfubGqc8b9HeNwx.ziu2q5pDu8FF8hcotvynNIpDyzhvlb", "CanuiksuuiyFpp9tdi5z.ugznAdc8qlqDrxct9egd8e3b2x3es", "otuIdecpOwtraex3EBviu.ykanrrthJMrssoawldEDfwmvwqho", "ur9dkkCkf3nwomqws2augy.sws6t7ladufmaD6sntjmkqdkfhj", "3Ejvifw8Eoa6c9HgNuw2zks.s2nDt8DD6e9nvuznNHpDyyeul9", "wjvIdf5uNvyzfjocvzpqnaws.uphpmGKzvxm5sb8uw9odpAkes", "1Gitkgz7Co74fbIjOtw5Ans2u.oFt9CC3d7nyuBpOIrEAzcwn8", "qn8iddvhm5kshgnpr98pdr6npo.o5fhkqdk3w6ngskgikbjaaf", "H2xHlojCHuGKrt7seviDcrtDhFo.kvyEJAFllm4fdida4gGdiz", "vjelfgvmn9qylkirma3u8t7tpt5k.kfkwip5w1kgmefdh6p6ck", "bwdqa7r7yhbe62ydEnn8qhl8m9fvk.wxdaaermrgEyhuqpemd6", "EwjfvvLu9ewGzytHt8gFlJaDGChyfw.5EowkMdzxujwoxitmst", "ECjbyxPu3fvFBzzJzalFqMdDKCkEkx5.DovnQiEBApAtCnrqvt", "2KktokD9Dq71jfMnRvz8Dru6z3qJwdED.f7rCxFtRLvIECbzqb", "fA4ghfB5oa7ghdBpFgmhrsfevddAiaoof.7eBjxnFxovvp6ni4", "8FclkhC2vi09hdHoLntcxsm9x7kFpawv77.kCqBqMEsCAw4tm4", "qlbmaarhq9lsfelmqc8ocoanmn3l5eknrek.s7jcqjcghal87f", "zoBOjl1zTBDCjoteAFwttaDv5ywlwrMQCBCs.ygfzBfuivFqkx", "xkekhixnl9rznmjum83v9w6usu6m1mdixjq7y.mjmdidj6p8el", "D7vGgkeyItCGmpcnjviyelszbBn4krzEFxBjgm.bil9d2hDdew", "rhmz58enDmruadkdrqhngdnn8pgfggxBtnqcfjb.rp1iahtc5l", "QaBHvxxJEwMTBD5E0vjNdEtNuOsdmEuARFMqzmir.ao9ggMhrG", "KfswrtABtnFMxyaC9kaI8DjHwIkieyjpLxEjBdlpa.n7i8Dcnz", "tfnz7afoDmtwcfifppgpefmp9rgdfhwAvoscfi91on.g8fua5m", "G8ryloszxnCJst5w9m9D3wkDoEiaduotIvCguddi97g.b6C7hw", "C6tDgjgxFqBFmoanhsgybmqydAk4hqxCEvAhij2agi8b.eCadv", "BekrikutrgwEppcuff2z2vdypzbg6pinCpwav6hhg8f6e.v4er", "dGahnkG6rg3dlhHsMlshxwkeAcjGpetrb64lFpDtMDuCCv.uo7", "ycksegpquguAklcphh5v3qfukwad6mmqznt8q8dchca7a4u.9o", "piht35kjygnsablfrkdlehhlenaicdsvqim7kee5rn5hdeo9.h", "aA9lfcy1ue5cd9BkGkobsoj9s8fzk6ttb44fxlwlGzmwvr7oh."};
    int inverseWalkSpeed = 42;
    int inverseDriveSpeed = 17;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 38450;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> cars = {37, 16, 32, 28, 17, 10, 32, 24, 0, 37, 20, 27, 29, 17, 36, 8, 49, 27, 12, 20, 16, 10, 23, 49, 16};
    vector<int> districts = {19, 20, 19, 27, 19, 6, 19, 2, 19, 13, 19, 18, 19, 21, 19, 32, 19, 44, 19, 13, 19, 17, 19, 32, 19, 35, 19, 16, 19, 13, 19, 44, 19, 9, 19, 30, 19, 8, 19, 7, 19, 40, 19, 36, 19, 46, 19, 39, 19, 4};
    vector<string> roads = {"......................f...........................", ".........2..........o......q....................4.", "...G..............................................", "..G........C.......t..............................", "...............8.......................j..C.......", "...............s..................................", "..........B......................q..d.............", "........................6.........................", ".............................l....................", ".2................................................", "......B...........................................", "...C..............................................", "...................9....................d.........", ".............................m....................", "................i.................................", "....8s........................................4...", "..............i.......................s...........", "...............................l..............8...", "......................c...........................", "...t........9..........................f..........", ".o................................................", "............................r..d..................", "f.................c.........................h.....", "............................................o.....", ".......6.................8....n........j...r......", "........................8...................k.....", "................................y..........a......", ".q.................................r..............", ".....................r............................", "........l....m........................i....D.g....", "........................n.........................", ".................l...d............................", "..........................y.......................", "......q..............................r..........k.", "...........................................I......", "...........................r......................", "......d...........................................", ".................................r.............s..", "................s............i....................", "....j..............f....j................n........", "............d.....................................", ".......................................n..........", "....C.............................................", "........................r.a..D....I.............Ix", "......................ho.k........................", ".............................g....................", "...............4.8................................", ".....................................s............", ".4...............................k.........I......", "...........................................x......"};
    int inverseWalkSpeed = 99;
    int inverseDriveSpeed = 55;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 416482;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> cars = {37, 16, 32, 28, 17, 10, 32, 24, 0, 37, 20, 27, 29, 17, 36, 8, 49, 27, 12, 20, 16, 10, 23, 49, 16};
    vector<int> districts = {19, 20, 19, 27, 19, 6, 19, 2, 19, 13, 19, 18, 19, 21, 19, 32, 19, 44, 19, 13, 19, 17, 19, 32, 19, 35, 19, 16, 19, 13, 19, 44, 19, 9, 19, 30, 19, 8, 19, 7, 19, 40, 19, 36, 19, 46, 19, 39, 19, 4};
    vector<string> roads = {".s...................j............................", "s...........e.....................................", ".......................C..........1...............", "............R............................c........", "...........................5.................V....", "......B........K..................................", ".....B..............................D.............", "..........j...................................D...", "...........................................z......", "......................h.......................5...", ".......j.............p............................", "................I............Y....................", ".e.R..............................................", "................................6.......F.........", "............................F.......J.............", ".....K.................................Y..........", "...........I.............n........................", ".......................................0........a.", "...................................9.3............", ".........................e.........d..............", ".............................D.................H..", "j.........p.......................................", ".........h................................o.......", "..C........................................I......", "................................................C4", "................n..e..............................", "...............................j............d.....", "....5.................................y...........", "..............F..................9................", "...........Y........D.............................", ".....................................m............", "..........................j......................A", ".............6...................u................", "............................9...u.................", "..1.....................................R.........", "..................9d..............................", "......D.......J...................................", "..................3...........m...................", "...........................y................R.....", "...............Y.0................................", ".............F....................R...............", "...c...........................................V..", "......................o......................A....", "........z..............I..........................", "..........................d...........R...........", "....V.....................................A.......", ".......D.5........................................", "....................H....................V........", ".................a......C.........................", "........................4......A.................."};
    int inverseWalkSpeed = 100;
    int inverseDriveSpeed = 89;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 3464146;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> cars = {37, 16, 32, 28, 17, 10, 32, 24, 0, 37, 20, 27, 29, 17, 36, 8, 49, 27, 12, 20, 16, 10, 23, 49, 16};
    vector<int> districts = {19, 20, 19, 27, 19, 6, 19, 2, 19, 13, 19, 18, 19, 21, 19, 32, 19, 44, 19, 13, 19, 17, 19, 32, 19, 35, 19, 16, 19, 13, 19, 44, 19, 9, 19, 30, 19, 8, 19, 7, 19, 40, 19, 36, 19, 46, 19, 39, 19, 4};
    vector<string> roads = {"...Z.......Z......................................", ".......Z..............................Z...........", "...................Z..............Z...............", "Z.............................Z...................", "..................................Z......Z........", "........................Z........Z................", "................Z............................Z....", ".Z.........................Z......................", "....................Z.............................", ".................Z.......................Z........", "..................Z..............................Z", "Z.................Z...............................", "....................................ZZ............", ".................Z.................Z..............", "...............Z.......................Z..........", "..............Z.....Z.............................", "......Z.................Z.........................", ".........Z...Z....................................", "..........ZZ......................................", "..Z..............................Z................", "........Z......Z..................................", ".....................................Z.........Z..", ".............................Z.............Z......", ".........................Z..............Z.........", ".....Z..........Z.................................", ".......................Z......................Z...", "............................Z.............Z.......", ".......Z...........................Z..............", "..........................Z.............Z.........", "......................Z.........................Z.", "...Z..............................................", "................................Z...........Z.....", "...............................Z................Z.", ".....Z.............Z..............................", "..Z.Z.............................................", ".............Z.............Z......................", "............Z..............................Z......", "............Z........Z............................", ".Z.............................................Z..", "..............Z..............................Z....", ".......................Z....Z.....................", "....Z....Z........................................", "..........................Z.................Z.....", "......................Z.............Z.............", "...............................Z..........Z.......", "......Z................................Z..........", ".........................Z.......................Z", ".....................Z................Z...........", ".............................Z..Z.................", "..........Z...................................Z..."};
    int inverseWalkSpeed = 90;
    int inverseDriveSpeed = 33;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 2527926;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> cars = {37, 16, 32, 28, 17, 10, 32, 24, 0, 37, 20, 27, 29, 17, 36, 8, 49, 27, 12, 20, 16, 10, 23, 49, 16};
    vector<int> districts = {19, 20, 19, 27, 19, 6, 19, 2, 19, 13, 19, 18, 19, 21, 19, 32, 19, 44, 19, 13, 19, 17, 19, 32, 19, 35, 19, 16, 19, 13, 19, 44, 19, 9, 19, 30, 19, 8, 19, 7, 19, 40, 19, 36, 19, 46, 19, 39, 19, 4};
    vector<string> roads = {".57c..h.8hDk..mlAv.k..q.on.fa.h.lt9t.v.Fjyr.bBg7.t", "5..9f.....Ajtkm...ug.rmortj.7wb.ipdq.sh.gx.l.z.9Cw", "7..iqfn.2.Iokgpn.tq..x.fmft.hlp..z8zxBnDo.q8jFeaz.", "c9i.734d.hq9qgcd.sn78hd.lxa7..8y.gcgq.7A6o.n8of8u.", ".fq7...d.hkbx.egBwr07.7t.F468C6B.9k.s.8..mq..kmgxu", "..f3..7geks9..bbuoka9hfii.c...cvbj8i.l8.8nkkb.b4sm", "h.n4.7.em.l.ti.d.s..4d8pnC5.6y8y3.gcpd.z3...bki..q", "...ddge....nD..r..Bekskz..i6c.5MhmooEokO..B...t...", "8.2..em...Gmh.mktq.p..ucifrng.pxqy6xu.mAm.n6kD.9vo", "h..hhk.....r..uvOJFjoxpBCEn...aP.rptIt.Sm.Ey7C.lM.", "DAIqksl.G..kGxkn.yvkicdExVg.sMrAhaA9.8kzk.uKx.y.vx", "kjo9b9.nmrk...35.kg9389lgA8.bth.7d.b..2.4d....edlj", ".tkqx.tDh.G..alid..wr.y48.wy..A.vBfzjDp.rscdyB.kia", ".kgg..i...x.a.b8h..lg.n..o.n.fp.kr.ogse..l9eos1a.b", "mmpceb..muk3lb...hc.77..dAb.e.k...gdd...8bb.mgceif", "l.ndgbdrkvn5i8....a...fg.xekfo.k...g.k.mad9nnj.dgd", "A...Bu..tO..dh...4.Aurzh..yE.gG3y.qyb..8u.aqGxj.76", "v.tswos.qJyk..h.4..uomt.7xtztgB.swlt.xn9pi4oB..o51", ".uqnrk.B.Fvg..ca...qk..d4wpv.hw.osip7tic..0m..bk.2", "kg.70a.epjk9wl..Auq..d6spF3.8B8.29karb7B4lpvc.lf.t", "...8794k.oi3rg7.uok..8.o.D4.ax.t39h8kb.v1..sg.hepn", ".rxh.hds.xc8..7.rm.d8.8rlI.l.zmpaao.fa.qa7.yp8..ll", "qm.d7f8kupd9yn.fzt.6.8.vq.2ef...33.3.58.7gozjcokts", ".of.tipzcBEl4..gh.dsorv.8it..8.ksya..Am.or.9.z6.kc", "orml.in.iCxg8.d..74p.lq8.r.tm.vd.t.r.v...k.h.s7hc.", "ntfxF.C.fEVA.oAx.xwFDI.ir.HC.h.CFNk......Kw.zRn..v", ".jta4c5irng8w.beytp34.2t.H..cCb.05..p.6..ioxg.mhts", "f..76..6n...yn.kEzv..le.tC..6C1.a....id.btut4rneBx", "a7h.8.6cg.sb..ef.t.8a.f.m.c6..8z.i.i.k9B8po.7..7wr", ".wl.C.y...Mt.f.ogghBxz.8.hCC...lAHj.p.v...icBHfo..", "hbp86c85parhApk.GBw8.m..v.b18..HbgliyieI.tv.5r.gDz", "...yBvyMxPA....k3...tp.kdC..zlH.xAs.9Bs3ukauHul..8", "li...b3hq.h7vk..yso23a3s.F0a.Abx..k.o95z3..vf.lgtr", "tpzg9j.myradBr...ws99a3ytN5.iHgA..s.q.cAahr..brov.", "9d8ck8go6pA.f.g.qlikho.a.k...jlsks..o.fvg.iai.64q.", "tqzg.icoxt9bzodgytpa8.3.r...i.i......3.xad.Bn8.nss", "..xqs.pEuI..jgd.b.7rkf....p..py9oqo..rk9ma..A.ip.8", "vsB..ldo.t8.Ds.k.xtbba5Av..ik.iB9..3r.d.chs..atq..", ".hn788.km.k2pe...ni7..8m..6d9ves5cf.kd.u1.hq.hfcol", "F.DA..zOASz....m89cBvq......B.I3zAvx9.u.....Jtpx5b", "jgo6.83.mmk4r.8aup.41a7o...b8..u3agamc1..h.rfhgcqn", "yx.omn.....dslbd.i.l.7grkKitp.tk.h.dah..h.f..9nq.i", "r.q.qk.BnEu.c9b9a40p..o..wouoiva.ri..sh..f.nwo..83", ".l8n.k..6yK.de.nqomvsyz9h.xt.c.uv.aB..q.r.n.r.cfum", "b.j8.bb.k7x.yomnGB.cgpj..zg47B5Hf.inA..Jf.wr.w....", "BzFok.k.DC..Bsgjx....8czsR.r.Hru.b.8.ahth9o.w.t..s", "g.efmbit..ye.1c.j.blh.o67nmn.f.llr6.itfpgn.c.t.9k.", "79a8g4..9l.dkaed.okfe.k.h.he7og.go4npqcxcq.f..9.s.", ".Czuxs..vMvli.ig75..pltkc.tBw.D.tvqs..o5q.8u..ks..", "tw..umq.o.xjabfd612tnlsc.vsxr.z8r..s8.lbni3m.s...."};
    int inverseWalkSpeed = 91;
    int inverseDriveSpeed = 74;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 74037;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> cars = {37, 16, 32, 28, 17, 10, 32, 24, 0, 37, 20, 27, 29, 17, 36, 8, 49, 27, 12, 20, 16, 10, 23, 49, 16};
    vector<int> districts = {19, 20, 19, 27, 19, 6, 19, 2, 19, 13, 19, 18, 19, 21, 19, 32, 19, 44, 19, 13, 19, 17, 19, 32, 19, 35, 19, 16, 19, 13, 19, 44, 19, 9, 19, 30, 19, 8, 19, 7, 19, 40, 19, 36, 19, 46, 19, 39, 19, 4};
    vector<string> roads = {"...j9...4.x...j.x....O.4.R.....N.....o.u.C...W...m", ".....g...M.NO4Dy.TY..sb.......3.K.P...Bw.C..wc..F.", "...8...N.y.......e2.uN1Q6..F3.........Oy.....a..O.", "j.8...V.D....h....m.....x6.0.....G..s...tzd.......", "9....f.......Qz.....7...l5...b..E.0...Hg9....s....", ".g..f....p..4.si.QhX...V....E..l..N..Z....p.......", "...V............H.Tq...ll.wK...H.......De....9....", "..N.........GXY.....h.....q...R...9...1.....x....V", "4..D.....u.T...TF..9...........m...lD.....6.F...dS", ".My..p..u...........Q....o0U....LT........t1.....1", "x..........sP..m.s.....y........c.......6.qH..k...", ".N......T.s..........r..b.b...FoN..C.....t...y..Ah", ".O...4.G..P...................R..n..............3.", ".4.hQ..X........X..p.....2..D...N.G..V.........u..", "jD..zs.Y...............Ko.w.j..............h......", ".y...i..T.m......r...T.Ba......qOD.......k..Fln...", "x.....H.F....X...D....N.w.C..R......x....0.....y..", ".Te..Q....s....rD.qu.Ir....Fw...9.e......Y.p...z.u", ".Y2m.hT..........q..n..d...QT..W...am......H..1..e", ".....Xq.9....p...u....F.p....5.q............E.2.f.", "..u.7..h.Q........n..D....l..Z...K......d3....i...", "OsN........r...T.I..D..Q..Oy...t.j......Mo...H....", ".b1.............Nr.F...........J.K..k..pD.0ij..dnr", "4.Q..Vl...y...KB..d..Q..5.......2.r..X...A........", "..6xl.l....b..oaw..p...5..I....H...Cr......xM.q.q.", "R..65....o...2................c..QF...Zj.....2....", "......wq.0.b..w.C...lO..I..j..Ivm...s.6.8u6zTV..y.", "..F0..K..U.......FQ..y....j......p.......qgl.H...I", "..3..E.......Dj..wT............c....i.Z7bCd.......", "....b...........R..5Z.............MoS....j.gYR..tM", ".3.....R...FR............cI....5....P.......1..5..", "N....lH.m..o...q..Wq.tJ.H.v.c.5.p.g.....izbz.4....", ".K..E....LcN.N.O.9.....2..m....p...P.M.x......B...", "...G.....T..n..D....KjK..Q.p..........YE...F..AH..", ".P..0N.9.....G...e.....r.F...M.g....DB....jw.a....", "........l..C......a.....C....o..P.....sF.........m", "...s....D.......x.m...k.r.s.iSP...D..u..DU.su.E...", "o....Z.......V.........X........M.B.u.K..KR.0UR..J", ".BO.H..1.................Z6.Z....Y.s.K....bh.6.jDU", "uwy.g.D...............p..j..7...xE.F....S.S......m", "...t9.e...6.........dMD...8.b..i....D..S.9m.kJ.c..", "CC.z.......t...k0Y..3o.A..uqCj.z....UK..9..U......", "...d.p..6tq...........0...6gd..b..j..RbSm..ZU.....", ".........1H...h..pH...i.x.zl.g.z.Fw.s.h..UZ.x...WH", ".w.....xF......F...E..j.M.T..Y1.....u0..k.Ux......", "Wca.s.9....y...l.....H...2VH.R.4..a..U6.J.........", "..........k....n..12i...q.......BA..ER...........R", ".............u..yz....d.......5..H....j.c.......O.", ".FO.....d..A3......f..n.q.y..t........D....W...O..", "m......VS1.h.....ue...r....I.M.....m.JUm...H..R..."};
    int inverseWalkSpeed = 100;
    int inverseDriveSpeed = 88;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 105176;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> cars = {36, 9, 43, 47, 35, 27, 12, 23, 41, 48, 41, 13, 17, 22, 7, 2, 36, 42, 38, 34, 7, 1, 25, 7, 45};
    vector<int> districts = {35, 15, 41, 11, 44, 5, 0, 46, 47, 1, 31, 29, 25, 23, 47, 5, 14, 5, 14, 8, 13, 1, 49, 0, 28, 44, 11, 6, 8, 17, 26, 7, 28, 34, 31, 8, 41, 33, 1, 24, 40, 46, 38, 28, 8, 37, 22, 14, 45, 25};
    vector<string> roads = {".AqcvF1Cn8s8uqB57cmGEfGsdmkgkmsxHcrrfxehwpgduvtexD", "A.JAArBoGu8xFnqyAqEvkEBsmPCjExatwBnyIlGiwbKppzmw35", "qJ.Ddvou2vFi8mrvyy4uzapiua6w5byltDmccsbtixcznfpeFI", "cAD.GNeJA8rkGyJ749yPKsQBgzxixyvHQ0zCsErlGstaDGBpyE", "vAdG.gtgcxym5cdzCybfmib7toctd7q8fHc3nflp4qozb0dgxx", "FrvNg.E3tDuwme3GKDr37xadwFrvtlk84NdhC7ArcnDD9fbrpm", "1BoetE.Bl9t7spA79dkGDdFrekihiltxGeqqdxcivqefuutdyD", "CouJg3B.sAqumb2DHzq65vcbtEqrsjh87KagA4yobjBz7f8plj", "nG2Actls.sBf8jpsvv1sx8ogrb3t28vksAkabpaqgubwkdmbCF", "8uv8xD9As.lcypA363rGBlHs7upappnyG9punvlcxko5uxshrx", "s8FryutqBl.qClrprhzynyCqeJxbzt8tyslvCmAbv7Dgoxlq7d", "8xikmw7ufcq.lhscgfeyw8xjcicfcdnoykiibp9enldgmml5uy", "uF8G5msm8yCl.gjyCz8lrfgcuj9va8udlGh6jlisaukAg6igBC", "qnmycepbjplhg.arvohgeki4itghiad8hz0ap7ne9dqp4b3dkl", "BqrJd3A2pArsja.CGzo58ta9tBnrphi56K9ey4wo8kzz5c7nnl", "5yv7zG7Ds3pcyrC.37rIEkJubspepqrAJ7svlykgzom8wyvivB", "7Ay4CK9Hv6rgCvG3.9uMInNyeushsuuEN4wynCmjDroaACylyE", "cqy9yDdzv3hfzoz79.tFzoHs5xr8srlyGapvqupbyir0tyrjou", "mE4ybrkq1rze8horut.rv7oepc1q16tirzi9bo9ofsbujck9AD", "GvuPf3G6sGyylg5IMFr.bx6ezErytlo80QfhCbAubqDFbedstq", "EkzKm7D5xBnwre8EIzvb.zigtIurwofdcKdlE6CohhFzbkashe", "fEasixdv8ly8fktkno7xz.vjla6o5buoxslf4s2mls5pnjo7BE", "GBpQbaFcoHCxgiaJNHo6iv.eBAoAqjt85Rhezfxx9uAHdbgryw", "ssiB7drbgsqjc49uyseegje.mremg7h5eC45o8mi4ipt365eop", "dmugtwetr7ecuitbe5pztlBm.wn2olfsAgjppon4scq5nslfjp", "mPazoFkEbuJijtBsuxcEIaArw.dybjEwEzum6B8xsD5zwpxhLO", "kC6xcriq3pxc9gnpsr1ru6oend.o15rirxg9an8mfqbsicj7zB", "gjwitvhrtabfvhreh8qyroAm2yo.qmcryjiprmp3r9s7mskhgm", "kE5xdtis2pzcaippss1tw5qgob1q.8tktxjb8p7ohs9tkel8BD", "mxby7llj8ptd8ahqur6lobj7lj5m8.mclya4ggej9mhrc8d7uw", "sayvqkthvn8nudirultofuthfErctm.kpwcnydwam2Akfocm6a", "xtlH88x8kytod85AEyi8do85swirkck.8I88t8rn3luy467jqq", "HwtQf4G7sGyylh6JNGr0cx5eAErytlp8.QghCcAvbrDGceetur", "cBD0HNeKA9skGzK74azQKsRCgzxjxywIQ.zDsFrmHttbEGCqzF", "rnmzcdqakplih09swpifdlh4jugijac8gz.aq6oe9drp3b2ejk", "rycC3hqgauvi6aevyv9hlfe5pm9pb4n8hDa.kfim5olva3ccuv", "fIcsnCdAbnCbjpylnqbCE4zop6ar8gytCsqk.x1qqw0rsotcFJ", "xlsEf7x4pvmpl74yCuob6sf8oBnmpgd8cF6fx.vjbfyu4e3lih", "eGbrlAcyalA9inwkmp9AC2xmn88p7ewrAroi1v.oou3qqmr9DH", "hitlprioqcbeseogjbouomxi4xm3ojanvmemqjo.o7raipgffk", "wwiG4cvbgxvna98zDyfbhl94ssfrh9m3bH95qboo.nry639htt", "pbxsqnqjuk7ludkorisqhsuicDq9sm2lrtdowfu7n.yhgpdk8c", "gKctoDeBboDdkqzmorbDF5Apq5bs9hAuDtrl0y3rry.ttoudGK", "dpzazDfzw5ggApz8a0uFzpHt5zs7trkyGbpvruqayht.tyrknt", "upnDb9u7kuomg45wAtjbbnd3nwimkcf4cE3as4qi6gtt.92hll", "vzfG0fufdxxm6bcyCycekjb6spcse8o6eGb3oemp3poy9.cgvw", "tmpBdbt8mslli37vyrkdaog5lxjkldc7eC2ct3rg9dur2c.hij", "ewepgrdpbhq5gdnilj9ss7refh7h87mjtqeccl9fhkdkhgh.tw", "x3FyxpylCr7uBknvyoAthByojLzgBu6quzjuFiDft8Gnlvit.5", "D5IExmDjFxdyCllBEuDqeEwppOBmDwaqrFkvJhHktcKtlwjw5."};
    int inverseWalkSpeed = 83;
    int inverseDriveSpeed = 22;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 53250;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> cars = {36, 9, 43, 47, 35, 27, 12, 23, 41, 48, 41, 13, 17, 22, 7, 2, 36, 42, 38, 34, 7, 1, 25, 7, 45};
    vector<int> districts = {35, 15, 41, 11, 44, 5, 0, 46, 47, 1, 31, 29, 25, 23, 47, 5, 14, 5, 14, 8, 13, 1, 49, 0, 28, 44, 11, 6, 8, 17, 26, 7, 28, 34, 31, 8, 41, 33, 1, 24, 40, 46, 38, 28, 8, 37, 22, 14, 45, 25};
    vector<string> roads = {"........................J...........v..q..........", "..................h...............................", "............F.....................................", "................................................m.", "...............l..................w...............", "...........................................s......", "...................b..............o...............", "........q........................m............p...", ".......q......................r...................", "......................g...m..............d........", ".....................................u............", "............................................j.....", "..F...............................k........v..C...", ".................8................................", ".....................................B............", "....l..........................p..................", ".........................................q........", ".............8..................................p.", ".h..............................................0.", "......b...........................................", "................................z.l...............", ".........................................2........", ".........g........................................", "..................................5............g..", "J.........................................z.......", "..................................8.............8.", ".........m.................u..........4...........", "..........................u.......................", "....................................q.............", "................................s.................", "........r.........................................", "...............p...................c..............", "....................z........s..........s.........", ".......m..........................................", "....w.o.....k.......l..5.8..........cv............", "...............................c..................", "v...........................q.....c...............", "..........u...B...................v.........h.....", "..........................4.......................", "q.................................................", "................................s.................", ".........d......q....2.....................5......", "........................z....................a....", ".....s......v............................5........", "...........j.........................h............", "..........................................a.......", ".......p....C....................................t", ".......................g..........................", "...m.............p0......8........................", "..............................................t..."};
    int inverseWalkSpeed = 38;
    int inverseDriveSpeed = 33;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 212344;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> cars = {36, 9, 43, 47, 35, 27, 12, 23, 41, 48, 41, 13, 17, 22, 7, 2, 36, 42, 38, 34, 7, 1, 25, 7, 45};
    vector<int> districts = {35, 15, 41, 11, 44, 5, 0, 46, 47, 1, 31, 29, 25, 23, 47, 5, 14, 5, 14, 8, 13, 1, 49, 0, 28, 44, 11, 6, 8, 17, 26, 7, 28, 34, 31, 8, 41, 33, 1, 24, 40, 46, 38, 28, 8, 37, 22, 14, 45, 25};
    vector<string> roads = {"..............s.................b.................", "..................N............................p..", "............................k.................4...", "......................i........................i..", "........T...................g.....................", "..............y............P......................", ".................................C.........j......", ".....................d.............d..............", "....T........................................J....", "...................................P.........W....", "..........................A...........7...........", "..............................2.............r.....", "........................H.0.......................", ".....................7................T...........", "s....y............................................", "....................L..........n..................", "...........................l.........2............", ".........................7................X.......", ".N...............................g................", "......................f.........P.................", "...............L..................................", ".......d.....7....................................", "...i...............f..............................", "............................................z.m...", "............H....................................h", ".................7.....................g..........", "..........A.0.....................................", ".....P..........l.................................", "..k.g.............................................", "....................................Y.............", "...........2............................4.........", "...............n..................x...............", "b..................P..............................", "......C...........g...............................", "...............................x........0.........", ".......d.P........................................", ".............................Y.............x......", "................2.........................n.......", "..........7..T....................................", ".........................g...............w........", "..............................4...0...............", ".......................................w........D.", ".................X...................n............", "......j.............................x.............", "...........r...........z..........................", "........JW........................................", "..4....................m..........................", ".p.i..............................................", ".........................................D.......s", "........................h.......................s."};
    int inverseWalkSpeed = 26;
    int inverseDriveSpeed = 4;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 221564;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> cars = {36, 9, 43, 47, 35, 27, 12, 23, 41, 48, 41, 13, 17, 22, 7, 2, 36, 42, 38, 34, 7, 1, 25, 7, 45};
    vector<int> districts = {35, 15, 41, 11, 44, 5, 0, 46, 47, 1, 31, 29, 25, 23, 47, 5, 14, 5, 14, 8, 13, 1, 49, 0, 28, 44, 11, 6, 8, 17, 26, 7, 28, 34, 31, 8, 41, 33, 1, 24, 40, 46, 38, 28, 8, 37, 22, 14, 45, 25};
    vector<string> roads = {"........Z..................Z......................", ".......................Z...............Z..........", "...........Z.Z....................................", "...................................Z...........Z..", "............Z...............Z.....................", "......................................Z.....Z.....", ".................Z............Z...................", ".......................Z..Z.......................", "Z.....................Z...........................", "......................................Z....Z......", "..................................Z..............Z", "..Z..................................Z............", "....Z...............................Z.............", "..Z.............................................Z.", "................................Z.......Z.........", "..................Z..Z............................", "..............................Z.........Z.........", "......Z..............Z............................", "...............Z.............................Z....", "..........................................Z...Z...", ".................................Z................", "...............Z.Z................................", "........Z......................................Z..", ".Z.....Z..........................................", "...........................................Z..Z...", "...............................Z.........Z........", ".......Z...................Z......................", "Z.........................Z.......................", "....Z....................................Z........", ".....................................Z............", "......Z.........Z.................................", ".........................Z........Z...............", "..............Z....................Z..............", "....................Z.....................Z.......", "..........Z....................Z..................", "...Z............................Z.................", "............Z..........................Z..........", "...........Z.................Z....................", ".....Z...Z........................................", ".Z..................................Z.............", "..............Z.Z.................................", ".........................Z..Z.....................", "...................Z.............Z................", ".........Z..............Z.........................", ".....Z...........................................Z", "..................Z.............................Z.", "...................Z....Z.........................", "...Z..................Z...........................", ".............Z...............................Z....", "..........Z.................................Z....."};
    int inverseWalkSpeed = 34;
    int inverseDriveSpeed = 6;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 763592;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> cars = {36, 9, 43, 47, 35, 27, 12, 23, 41, 48, 41, 13, 17, 22, 7, 2, 36, 42, 38, 34, 7, 1, 25, 7, 45};
    vector<int> districts = {35, 15, 41, 11, 44, 5, 0, 46, 47, 1, 31, 29, 25, 23, 47, 5, 14, 5, 14, 8, 13, 1, 49, 0, 28, 44, 11, 6, 8, 17, 26, 7, 28, 34, 31, 8, 41, 33, 1, 24, 40, 46, 38, 28, 8, 37, 22, 14, 45, 25};
    vector<string> roads = {".A.euzIyx.AxNQ9zToFs.uhcJhcttF.yvwBzmjAk.Aon..ajGN", "A..l.Fuloj.2wxqkxjA..7Fnwsuuva.D5sagC.IwFzcgHsv.v.", "...dquCt.w...L8uOjA.CrdbEc.noC.srrxvhfvek.kj.D4d.J", "eld.j.BrqsAj.I4r.gCgEh.1.gfq.th.hsppqaDluybeGBehB.", "u.qj.tk9c9r9npm9r8.2.3vkmilija4r6g66rawl.n.6vjn.lj", "zFu.t.jkgn2Dorz.w.a.dx.zjjna9Ao1zcwpdr3fb6.q7lpjgw", "IuCBkj.aa.g..8.ack8m7oz.1.vfg.jiqbjdsq..sc..g1xo2.", "yltr9ka.32ijeht0kaebfetqc.nbcf8.g.a4n.ojpeg.m9pgaf", "xo.qcga3.6emfis..9cddgqqcfk78j9fj3e8jfk.lahciamd.i", ".jws9n.26..i.gu1.cgbgdwsckp.fc.lfa82qhrm.g..o9rib.", "A..Ar2gie..Bl..jtk8r.vm..jn98xn.xatn.q6fd3uo6.pidt", "x2.j9D.jmiB.vxnjx.y9z5.kvprrtbdA.qafzfGtCx9dFssouo", "Nw..no.ef.lv.2Ie6pdpbrFG4wBlll.othkgxvsvyivr.4.t8a", "QxLIpr8hig.x2.K.4sfsdtII7yD.onqqv..i.xuyBkxtm7.w..", "9q84mz.tsu.nIK..NiCkFlm2Ffcqrxkxlt.socBksyf.GDbgCG", "zkur9.a0.1jje...jafbgeurc.ncde8kg8a3og.kqfgcm9pgae", "TxO.rwck..tx64Nj.ukt.uMLbCHs.msvwomkFA.CF.z.rbJAf8", "ojjg8.ka9ck.psiau.l7nbmgm9db.j3kdbebi5pc.i83rkf.jp", "FAAC.a8ecg8ydfCfkl.q2ttB8nscbtmav9pjmre..5uo7aum.m", "s..g2.mbdbr9pskbt7q.r3thog.h.d3r5g88.8w.to44wlkemm", "..CE.d7fdg.zbdFg.n2r.uwD6qveetndwbqko.goo7vq89xo5l", "u7rh3xoegdv5rtleubt3u.xi.knmna8v1k7aubBoxs68A.ojp.", "hFd.v.ztqwm.FImuMmttwx.nAca.iGq.znBx7.k98osotAaexJ", "cnb1kz.qqs.kGI2rLgBhDin.Df.pquhxirqqpaBksxceFBcfAE", "JwE.mj1ccc.v47Fcbm8o6.AD.sxh.nlj.cl.tsnrtdto.3zq3d", "hscgij..fkjpwyf.C9ngqkcfs.4bbtdhmeoka9l4d.gbqr61ox", "cu.flnvnkpnrBDcnHds.vna.x4.ggxhlojsobbo.f.heuw16t.", "tunqiafb7.9rl.qcsbchem.phbg..qd8o.lfcge9d7kef.i9dq", "tvo.j9gc8f8tlord..b.eniq.bg..rf7p4nh.hc9c6lgehiad.", "FaCtaA.fjcxblnxemjtdtaGuntxqr.fy.n4aBlEwEuhiBjyrnd", "...h4oj89.nd.qk8s3m3n8qhldhdff..ac.7m7sgpk73sjibjm", "yDs.r1i.fl.Aoqxkvkardv.xjhl87y..xauoco5da.tn.kngfv", "v5rh6zqgjfx.tvlgwdv5w1zi.moop.ax.n8c.cD.z.6..p.krn", "wsrsgcb.3aaqh.t8ob9gbknrcej.4ncan.j.ghg.h.kffcl.9l", "Baxp6wjae8tak..amep8q7Bqlosln4.u8j.5whArzpddxhtmke", "zgvp6pd482nfgis3kbj8kaxq.kofha7oc.5.rftm.jebr.qied", "mChqrdsnjq.zx.ooFim.ou7ptabc.Bmc.gwr.kd53gqlltdbpC", "j.faarq.fhqfvxcgA5r8.b.as9bghl7ochhfk.ueno53wqc8pt", "AIvDw3.okr6GsuB..pewgBkBnloecEs5DgAtdu.gaazt9p.lk.", "kwellf.j.mftvykkCc..oo9kr4.99wgd..rm5eg.8g.fmq9.ny", ".Fku.bspl.dCyBsqF..tox8stdfdcEpazhz.3na8..to.ugepE", "Az.yn6ceag3xikyf.i5o7soxd..76uk...pjgoag..rl8e.h9p", "ockb...gh.u9vxfgz8u4v6sctghklh7t6kdeq5z.tr.5Aqierr", "ngje6q..c.odrt.c.3o4q8oeobeegi3n.fdbl3tfol5..mf9.p", ".H.Gv7gmio6F.mGmrr7w8AtF.qufeBs..fxrlw9m.8A..iwpdu", ".sDBjl19a9.s47D9bkal9.AB3rw.hjjkpch.tqpqueqmi..o4a", "av4enpxpmrps..bpJfukxoacz61iiyin.ltqdc.9g.ifw..8v.", "j.dh.jogdiiotwggA.meojefq169arbgk.mib8l.ehe9po8.m.", "Gv.Blg2a.bdu8.Cafj.m5pxA3otddnjfr9keppknp9r.d4vm.f", "N.J.jw.fi.toa.Ge8pmml.JEdx.q.dmvnledCt.yEprpua..f."};
    int inverseWalkSpeed = 58;
    int inverseDriveSpeed = 11;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 40357;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> cars = {36, 9, 43, 47, 35, 27, 12, 23, 41, 48, 41, 13, 17, 22, 7, 2, 36, 42, 38, 34, 7, 1, 25, 7, 45};
    vector<int> districts = {35, 15, 41, 11, 44, 5, 0, 46, 47, 1, 31, 29, 25, 23, 47, 5, 14, 5, 14, 8, 13, 1, 49, 0, 28, 44, 11, 6, 8, 17, 26, 7, 28, 34, 31, 8, 41, 33, 1, 24, 40, 46, 38, 28, 8, 37, 22, 14, 45, 25};
    vector<string> roads = {".om..9..U91.vK.Er.j...vXU.....uR.y...hy.ckjCDU9o.j", "o..kP8.M.S.Gf.5.fZF.4l.kH.s.nL.X.Y.....4..8y.aIi.s", "m...K.IB.d.olg.WgE..i6.Z.......F.X.m.I.LWp.o9.5...", ".k..P.d5W....s.N.1...1t.xF.m.e....L.x.M..Imp.X.9.b", ".PKP.b.j...e...f.3m.jEyt...z9.3..Z.K7VWL..w.24K.fz", "98..b.V8bUcWZ..vI...YWoI.CzY.....d.XQ.SOI..Y.aJ.Bm", "..Id.V...f.u.K.t.ZSm...T..w.......w.X..AH.D5..P..r", ".MB5j8...s.0Onn.M5PbE..q.js...5.c....v..U..yNl.J..", "U..W.b.....rcY.Rk..J.M..DHhKT.F...Qr.O...TVOZ..mZ.", "9Sd..Ufs...dOeqG..z.o.IC....pd.t...Wv..Y.GAm.4C4..", "1....c..........ic...43OhpAq.....96LRJBB..m.......", ".Go.eWu0rd...8X.Yaz.w..m.ZNvD.0.0....I..E.o.0N.aDU", "vfl..Z.OcO...BE6..D.T1J..O.nGt.l.0MSh..B..n..BO8S.", "K.gs..KnYe.8B..W....L.h.a.f.C..DM..Y.fG3ckI.4Pt..R", ".5.....n.q.XE..F....T.KX.ni0.X..JQq...gE.cud.t...w", "E.WNfvt.RG..6WF...V7..M.q.A.....y..er2MB5.lx..Dv..", "rfg..I.Mk.iY.......nt.vCE..Z.c.a.a7Lb.....8nT.j...", ".ZE13.Z5..ca......V...4.p0.BrPQ...........UibTA...", "jF..m.SP.z.zD..V.V..D7...KjK8.jN.ot..T.F..d.V..w..", "......mbJ......7n...Ul.7.HNm...m.ns..u.KP..d..L2.W", ".4i.jY.E.o.wTLT.t.DU.0H.KNyd.hFkr.z...Szf.MD94....", ".l61EW..M.4.1.....7l0..8i.t.e..vYi4...iZ...I5...7.", "v..tyo...I3.JhKMv4..H..G......pa..e.4V.NYg..Ik.U.M", "XkZ.tITq.COm..X.C..7.8G.muDRj......UAQ.P.4......Su", "UH.x....D.h..a.qEp..Ki.m.V3...l.J.8zq.j.HRXKkl3ksD", "...F.C.jH.pZO.n..0KHN..uV..RuPa.nxN.qh......o.IE..", ".s...zwsh.AN.fiA..jNyt.D3......A..w....bwY.5...M..", "...mzY..K.qvn.0.ZBKmd..R.R....TuJAXU.Ni1Q.8.......", ".n..9...Tp.DGC...r8..e.j.u....ZyU..c.Kq1oYrC.RRpkp", ".L.e.....d..t.X.cP..h....P.....LKF..subK....G..4..", "u...3..5F..0.....Qj.F.p.la.TZ..s9f.TWr.o3...qBl.Xk", "RXF......t..lD..a.Nmkva...AuyLs.pp5r.gh.1.G..xsH4.", ".......c...0.MJy....rY..Jn.JUK9p..YL.M....uHL.m..N", "yYX.Zd....9.0.Q.a.on.i...x.A.Ffp....b1.p....n5Y..H", "...L..w.Q.6.M.q.7.tsz4e.8NwX...5Y..1..Xnk.H.MxE.Xf", "..m.KX..rWL.SY.eL......Uz..Uc.TrL.1...qA2.kcqd...E", "...x7QX..vR.h..rb.....4Aqq...sW..b...S..TY..oS..p.", "h.I.V..vO.JI.f.2..Tu..VQ.h.NKurgM1..S.8Qfd1.w..lz.", "y..MWS....B..GgM....Si..j..iqb.h..Xq.8...CX1vlD..5", ".4L.LOA..YB.B3EB..FKzZNP..b11Ko..pnA.Q..dW.eVf3.z.", "c.W..IHU...E.c.5...Pf.Y.H.wQo.31..k2Tf.d..A.....b.", "k.pI....TG...kc.......g4R.Y.Y.......YdCW......e.x.", "j8.mw.D.VAmonIul8Ud.M...X..8r..Gu.Hk.1X.A..qJ..QG.", "Cyop.Y5yOm....dxni.dDI..K.5.C...H..c..1e..q.xJ.k.z", "D.9.2..NZ..0.4..TbV.95I.ko...Gq.LnMqowvV..Jx.c..i9", "Ua.X4a.l.4.NBPt..T..4.k.l...R.Bx.5xdS.lf...Jc.iH3a", "9I5.KJP..C..Ot.DjA.L....3I..R.lsmYE...D3.e...i..e.", "oi.9...Jm4.a8..v..w2..U.kEM.p4.H.....l....Qk.H..yB", "....fB..Z..DS........7.Ss...k.X4..X.pz.zbxG.i3ey.V", "js.bzmr....U.Rw....W..MuD...p.k.NHfE..5....z9a.BV."};
    int inverseWalkSpeed = 43;
    int inverseDriveSpeed = 20;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 26389;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> cars = {37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37};
    vector<int> districts = {37, 5, 37, 49, 37, 49, 37, 39, 37, 21, 37, 47, 37, 14, 37, 39, 37, 49, 37, 19, 37, 0, 37, 30, 37, 36, 37, 31, 37, 19, 37, 6, 37, 48, 37, 45, 37, 47, 37, 36, 37, 16, 37, 25, 37, 45, 37, 5, 37, 12};
    vector<string> roads = {".bcr0umfna5CpjglD0bovCghrgioudynloiglojdwAsxn6eyhq", "b.4kavx3y5bug8ortc8epDabg4odn9xobfahpeujzwlwv94rlw", "c4.fbqw5xaeqccmoqdcblyf6e7lciesk7b5dlaugvrgrsd1nis", "rkf.qkEiFqua5otrers85pu9dkpg2uih859fm7Cnqd0iwtf6ms", "0abq.uoeo95BohglC1anuCfgqfintcxnjngglmldwzrxo6dxhr", "uvqku.swtAzrpDjdytCrg8GkxyezkE56ppnd9qsh5ej4iAskda", "mxwEos.B0yrPFGafTlyGFzDwKDfJGAzpCFzpjF2gqGEyatyJii", "f35iewB.C8fse6suqgaboEbbc1r8lbxq9d9jrbymBvkxyd3poy", "nyxFot0C.zsPGHbfUmzGFzExLDfKHBzpDGzpkG3hqGFyauzJii", "a5aq9Ay8z.7Am8quzb1kwI5hl8rht3DthlgmtkvmECrCx5axpz", "5beu5zrfs7.FrglrF67pzIbkrfoox8DsmqklrpoiCEvCt1fBmw", "CuqaBrPsPAF.dwDB7DCfatEkitzm8EmqiekpwfNyxdanGEp5wB", "pgc5opFeGmrd.jutdqo2bvq87fra7qol407gp1Dovi6ozqbbow", "j8cohDG6H8gwj.xAtk9guL7ie3xar9EwfifpygDsIBpDEeavuF", "gomtgjasbqlDux.6IfrvtrwlAt4zvuperuod9u95jvto6nox7b", "lrorldfufurBtA6.GkwuqkBlAw2Asyjartoc4te8cqri5squ55", "DtqeCyTqUzF7dtIG.EBfgABmerEidCuvieltBfRCEleuLEpcAH", "0cdr1tlgmb6DqkfkE.covChhshhpuexmlpigkoicwAsxm7fygq", "b8csaCyaz17Co9rwBc.myK4km9tjw1FvjniovmvnGEuEz4dArB", "oeb8nrGbGkpf2gvufom.exn85ds7anqm316hq0Dpxl9qAo9eox", "vpl5ugFoFwzabutqgvye.kAejqpm3AdffcfgldDpn64dwyk3mq", "CDypC8zEzIItvLrkACKxk.OsDGmFoN6fwvumhwzq8fo6oIznlg", "gafufGDbE5bEq7wBBh4nAO.mm9xix2IzlplsznAsKHwIE9fBvG", "hb69gkwbxhkk8illmhk8esm.edjeclle5728h8ufpkalqk7gfo", "rgedqxKcLlri7eAAesm5jDme.cy3fnws87bnw6IuDqewFqciuD", "g47kfyD1D8ftf3twrh9dqG9dc.t8naAsbebltdAoDxlzAd6rqA", "iolpiefrfrozrx42Ehtspmxjyt.xrvk9prla4re4eqpj7pnt38", "odcgnzJ8KhomaazAipj7mFie38x.ijyt89bnw8HtEthyFmamuD", "uni2tkGlHtx87rvsduwa3oxcfnri.xhic8cgnaEpqa1hywi3nt", "d9eucEAbB38Eq9uyCe1nAN2lnavjx.HxlpkqxoxqIGvGB6eBtD", "yxsix5zxzDDmoEpjuxFqd6IlwAkyhH.apoogfpyna8h0oDtgig", "nokhn6pqptsqlweavmvmffzess9tixa.kkh65lobagg9ftlk7a", "lb78jpC9Dhmi4frrilj3fwl58bp8clpk.33fo2Alvmapxl6glu", "ofb5npFdGlqe0iutepn1cvp77er98pok3.6gp0Dovj7oypacnv", "ia59gnz9zgkk7foolii6ful2bblbckoh36.bk5wislantj5gir", "ghdfgdpjpmlpgpdctgohgms8nlangqg6fgb.8gn8hjfghmek6f", "lplml9jrktrwpy94Bkvqlhzhwt4wnxf5opk8.pi8almeasnp36", "oea7mqFbGkpf1gutfom0dwn86dr8aopl205gp.Dowk8pzo9dow", "juuCls2y3voNDD9eRivDDzAuIAeHExyoADwniD.eqFDxaqwHgi", "djgndhgmhmiyos58Ccnppqsfuo4tpqnbloi88oe.jrombkjt3d", "wzvqw5qBqECxvIjcEwGxn8KpDDeEqIaavvshawqj.kqafDxrf7", "AwrdzeGvGCEdiBvqlAEl6fHkqxqtaG8gmjljlkFrk.b9wEr8op", "slg0rjEkFrva6ptresu94owaelph1vhga7afm8Doqb.hwug5ms", "xwrix4yxyCCnoDoiuxEqd6IlwzjyhG09pongepxma9h.nCshhg", "nvswoiayaxtGzE65LmzAwoEqFA7FyBofxythazabfwwn.uvAa7", "69dt6Atdu51EqensE74oyI9kqdpmw6DtlpjmsoqkDEuCu.eAnx", "e41fdsy3zafpbaoqpfd9kzf7c6naietl6a5en9wjxrgsve.mku", "yrn6xkJpJxB5bvxucyAe3nBgirtm3BgkgcgkpdHtr85hAAm.qu", "hlimhdioipmwou75Agromlvfuq3unti7lni63og3fomhankq.9", "qwssraiyizwBwFb5HqBxqgGoDA8DtDgauvrf6wid7psg7xuu9."};
    int inverseWalkSpeed = 92;
    int inverseDriveSpeed = 46;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 80546;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> cars = {37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37};
    vector<int> districts = {37, 5, 37, 49, 37, 49, 37, 39, 37, 21, 37, 47, 37, 14, 37, 39, 37, 49, 37, 19, 37, 0, 37, 30, 37, 36, 37, 31, 37, 19, 37, 6, 37, 48, 37, 45, 37, 47, 37, 36, 37, 16, 37, 25, 37, 45, 37, 5, 37, 12};
    vector<string> roads = {"................................................v.", "........x.........................................", "....t...y..c.........p.k.......o..........i.......", "...................................u....y.........", "..t...............................................", "......c...........................................", ".....c...........................................6", "...........................x......................", ".xy.........B.....................................", "...............C...R...........B.......I..........", ".................................4................", "..c...............................................", "........B.........................................", "....................8.............................", ".............................x.....b..............", ".........C.......r..........x...g...............By", "................................u.................", "...............r........6............p............", "...............................n..................", ".........R........................................", ".............8.............l.......l..............", "..p..............................z................", ".............................................l...q", "..k...........................g...................", ".................6........z.........B.............", ".................................................a", "........................z.........................", ".......x............l..........h......t.......f...", "...............x..................................", "..............x...................................", ".......................g..........................", "..o......B........n........h...................w..", "...............gu.................................", "..........4..........z............................", "............................................y....c", "...u..........b.....l.............................", "........................B.........................", ".................p................................", "...........................t......................", ".........I.................................y......", "...y..............................................", "...........................................A......", "..i...............................................", ".......................................y.A........", "..................................y...............", "......................l...........................", "...........................f......................", "...............................w..................", "v..............B..................................", "......6........y......q..a........c..............."};
    int inverseWalkSpeed = 79;
    int inverseDriveSpeed = 58;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 437777;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> cars = {37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37};
    vector<int> districts = {37, 5, 37, 49, 37, 49, 37, 39, 37, 21, 37, 47, 37, 14, 37, 39, 37, 49, 37, 19, 37, 0, 37, 30, 37, 36, 37, 31, 37, 19, 37, 6, 37, 48, 37, 45, 37, 47, 37, 36, 37, 16, 37, 25, 37, 45, 37, 5, 37, 12};
    vector<string> roads = {"........a....c....................................", "......................Q...............V...........", ".....................................d....z.......", "...............d.......b..........................", "................................W.................", "...............................v...............l..", ".........M........................N...............", "...............M...........v......................", "a..................................M..............", "......M....................5......................", "....................b....O........................", ".....................V...................Y........", ".................................2..H.............", "c.............................................H...", "............................W....................Q", "...d...M..........................................", ".....................N.......................4....", "........................................M...q.....", ".......................b..........................", ".......................................D.........L", "..........b...................................n...", "...........V....N.................................", ".Q..........................5.....................", "...b..............b...............................", ".............................P......U.............", "..........O....................U..................", ".................................7..........0.....", ".......v.5........................................", "..............W.......5...........................", "........................P.......L.................", "..........................................0.....O.", ".....v...................U........................", "....W........................L....................", "............2.............7.......................", "......N................................z..........", "........M................................K........", "............H...........U.........................", "..d..........................................A....", ".V..............................................m.", "...................D..............z...............", ".................M.........................b......", "...........Y.......................K..............", "..z...........................0...................", "........................................b......p..", ".................q........0.......................", "................4....................A............", ".............H......n.............................", ".....l.....................................p......", "..............................O.......m...........", "..............Q....L.............................."};
    int inverseWalkSpeed = 55;
    int inverseDriveSpeed = 15;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 656085;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> cars = {37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37};
    vector<int> districts = {37, 5, 37, 49, 37, 49, 37, 39, 37, 21, 37, 47, 37, 14, 37, 39, 37, 49, 37, 19, 37, 0, 37, 30, 37, 36, 37, 31, 37, 19, 37, 6, 37, 48, 37, 45, 37, 47, 37, 36, 37, 16, 37, 25, 37, 45, 37, 5, 37, 12};
    vector<string> roads = {"...Z..........................................Z...", "......................Z.....Z.....................", "....................Z...Z.........................", "Z................................Z................", "...........Z......................................", ".......Z....................................Z.....", ".............................Z......Z.............", ".....Z.........................................Z..", "...........ZZ.....................................", "...............Z............................Z.....", "............Z.........................Z...........", "....Z...Z.........................................", "........Z.Z.......................................", "..................Z.............Z.................", ".........................Z........Z...............", ".........Z..............................Z.........", ".......................................Z........Z.", "...................Z.........................Z....", ".............Z....................................", ".................Z............Z...................", "..Z................................Z..............", "......................Z..................Z........", ".Z...................Z............................", ".............................Z..Z.................", "..Z..............................Z................", "..............Z..................................Z", ".............................................ZZ...", "........................................Z.Z.......", ".Z.............................Z..................", "......Z................Z..........................", "...................Z.............................Z", "............................Z..................Z..", ".............Z.........Z..........................", "...Z....................Z.........................", "..............Z........................Z..........", "....................Z...............Z.............", "......Z............................Z..............", "...........................................Z....Z.", "..........Z...............................Z.......", "................Z.................Z...............", "...............Z...........Z......................", ".....................Z.....................Z......", "...........................Z..........Z...........", ".....................................Z...Z........", ".....Z...Z........................................", ".................Z........Z.......................", "Z.........................Z.......................", ".......Z.......................Z..................", "................Z....................Z............", ".........................Z....Z..................."};
    int inverseWalkSpeed = 81;
    int inverseDriveSpeed = 77;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 2247562;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> cars = {37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37};
    vector<int> districts = {37, 5, 37, 49, 37, 49, 37, 39, 37, 21, 37, 47, 37, 14, 37, 39, 37, 49, 37, 19, 37, 0, 37, 30, 37, 36, 37, 31, 37, 19, 37, 6, 37, 48, 37, 45, 37, 47, 37, 36, 37, 16, 37, 25, 37, 45, 37, 5, 37, 12};
    vector<string> roads = {".gtg2..fn.7.7.th7toexcia2y2q.p..a..v.fi..1.k.q9hrd", "g.D.e..3.9k..jlulldvqrt.i.f.nacv5.ay7u.q8h.aCDq4rl", "tD.GsjAy7ty..pwc.vz.vgajq.w7.OA..ns.vBJjLq.L.8oGkh", "g.G.fqp9.eixaprxn..vwtwmjx.....B8ldDbr3v7i.4GGq.xp", "2esf.a.cl.9.5.rh7q.gudh..v4pko8x..6t8..n.2bktqb.pb", "..jqa.wlehfcgm.62t.8w2877xdijyh..ge.h..m..iulf6.o8", "..Ap.w.g.gAIna3.t.6F.xvo...s..udlf.ni..gntfux.Bo.o", "f3y9clg.r5.v7fi.iiat.opggo..jfdr4c6t3udl.f5ey..8.h", "n.7.le.r.ltpph.afor..d6ck..3bG.pqfkcny..DklE7clz.9", ".9te.hg5l.k..bg.e..pk...dl....eo..3o.ti.hc0.s.l.ic", "7kyi9fA.tk.fd.BldAuf.hoh8F5xuq7If.gDh9ixq8.kAu..zk", "...x.cIvp.f..zHeeG.3J.i...h.wFmL.t.Brbx.E.tAuj..Al", "7..a5gn7p.d..jomc.hm.im.9t.s.i.w2.4u4m.n.8...vh.pe", ".jpp.mafhb.zj.7ok6.w9.k..aph5uq.i5eeeDt6q.aumus.7d", "tlwrr.3i.gBHo7.w..8E..s.t5vodu.....jjKvcqtfw.CAq.l", "hucxh6..a.lemow..vvbx33aeykejFp.p.kmn.zl.fnBf.bxna", "7l.n72tifedeck...rp.u5a54waji...fe.pe...t.frm.7nn.", "tlv.qt.io.AG.6.vr.8..urmt.uocu..mcji....qsew.Bzqbl", "odz...6ar.u.h.8vp8.Ad.s.o.ps.l.ifbeocE.h.o9nxD..hk", "ev.vg8Ft.pf3mwEb..A..8.g.Hgp.E.I.qmypd..D.rz.g.wxi", "xqvwuw...k.J.9.xu.d..xt..0zndzz.rfngnNAb..j..CC...", "crgtd2xod.h.i..35u.8x.68.yfhj.kzli..k.v.zakxj.7t.9", "itawh8vp6.oimks3ars.t6.9f.la.Epu.gii..zhCglBc..w.8", "a.jm.7ogc.h....a5m.g.89.....cu.re9.kcop.s8brk...h2", "2iqj.7.gkd8.9.te4to...f....olra.cgauc..oq0..sn7j.b", "y..xvx.o.lF.ta5yw..H0y....Aoe.B3..p.o.Bc.xkCsDDwb.", "2fw.4d....5h.pvkaupgzfl..A...n..ajayceg....ix.b..g", "q.7.pis.3.x.shoejospnha.oo..b....hn.qCFbGonH4.pBc.", ".n..kj.jb.uw.5djic..dj.cle.b.yrfk6.9gB.2vldygops4a", "paO.oy.fG.qFiuuF.ulEz.Eur.n.y.i.f.lJi.7B..l5NOz7Cw", ".cA.8hud.e7m.q.p....zkp.aB..ri....bB.h.ui9..Bygb.k", ".v.Bx.drpoILw.....iI.zur.3..f....jrerQ.c.znG..F.a.", "a5.8..l4q.f.2i.pfmf.rl.ec.a.kf...d5v3p.n.b7..yk7pg", "..nl.gfcf..t.5..ecbqfig9g.jh6..jd..h.wp9o.6rmqm..8", ".asd6e.6k3g.4e.k.jemn.i.apan.lbr5..p.p.ii94...hdk.", "vy.Dt.ntcoDBuejmpioyg.iku.y.9JBevhp.rJH7.tn.bow.6h", ".7vb8hi3n.hr4ejne.cpnk.ccocqgi.r3..r..fjfb....kbld", "fuBr...uyt9bmDK...EdN..o..eCB.hQpwpJ...EzgutE.c.G.", "i.J3...d.iix.tvz....Avzp.BgF.7...p.Hf..z8ki.KIs4.s", ".qjvnmgl..x.n6cl..h.b.h.oc.b2Bucn9i7jEz.xofAgps...", ".8L7..n.DhqE.qq.tq.D.zCsq..Gv.i..oi.fz8x.p.7KMy6.u", "1hqi2.tfkc8.8.tf.so..ag80x.ol.9zb.9tbgkop..mso8iqb", "....bif5l0.t.afnfe9rjklb.k.ndl.n764n.uif...ksvm.hc", "kaL4kuueE.kA.uwBrwnz.xBr.CiHy5.G.r...t.A7mk...u.C.", ".C.Gtlxy7sAu.m.fm.x..jckssx4gNB..m.b.EKgKss..drGg.", "qD8Gqf..c.ujvuC..BDgC...nD..oOy.yq.o..IpMov.d..G.i", "9qoqb6B.ll..hsAb7z..C7..7DbppzgFkmhwkcssy8mur..ruf", "h4G...o8z.....qxnq.w.tw.jw.Bs7b.7.d.b.4.6i..GGr...", "rrkxpo...izAp7.nnbhx...h.b.c4C.ap.k6lG...qhCg.u..f", "dlhpb8oh9ckledla.lki.982b.g.awk.g8.hd.s.ubc..if.f."};
    int inverseWalkSpeed = 44;
    int inverseDriveSpeed = 41;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 63442;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> cars = {37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37, 37};
    vector<int> districts = {37, 5, 37, 49, 37, 49, 37, 39, 37, 21, 37, 47, 37, 14, 37, 39, 37, 49, 37, 19, 37, 0, 37, 30, 37, 36, 37, 31, 37, 19, 37, 6, 37, 48, 37, 45, 37, 47, 37, 36, 37, 16, 37, 25, 37, 45, 37, 5, 37, 12};
    vector<string> roads = {".5qedcaTGGqk6kSBmXHuvqKO4fN6nsPrJV96o1Sdm1Pzxc2CEI", "5.8E.ngKlFJbhKd6qfsrH6skhgiqQKYxwbZwOZyDGWLzU4HjXE", "q8.MzeCVruaI9SpKPB2s0T5W.N1FPw9UCZkBRhpVlBaC3p8LW5", "eEM.TDes.0fyxggvPgVhGs.RhV3he.U0FJtbSUkytcm3fZFZYy", "d.zT.Gp81himpu3Ik8eJeTrAhXUJpez1E57hl.jMROnNOceH5R", "cneDG.dXDd.JxjWH6xxT5xbr5Go187f.7d6RzO26uWxrNA.oeo", "agCepd.l9OTzSUP9mBrT17vutpoL8G.X78B.TSsATBDniyJ5SN", "TKVs8Xl.pUF6hRAGJH5uUqCbCguEPU5aMcHxiGYVV5q.eSG9vU", "Glr.1D9p.kIe.d8CdVKU3djGQD8Wi9Xji.wVoIWVOdiL.1yOpj", "GFu0hdOUk.mdrY7cU6q.sTZdMDRoMiKeKyZt4nUzutZfaiWBs1", "qJafi.TFIm.h6hQhGynMUXDdwXKt0rkkeVoCwvoMZDTfjODabd", "kbIymJz6edh.zQqs0r3QzYJm8Vj6JhdeFrzc5eEPCYsGTOY0MT", "6h9xpxSh.r6z.UcptDDxpQhTYoCWGUMf1dkKmXJxdxSQl.qm8l", "kKSgujURdYhQU.XaL5eo6XGvHDCOzpscaVPKFiKJCJoxOXttGV", "Sdpg3WPA87QqcX.QI9WXV2NXov4.I.h.Kb8uvRi7ycXKye.ArE", "B6KvIH9GCchspaQ.OSfrN5YnBifrQXkktGtBVKAzm1uykJVp1m", "mqPPk6mJdUG0tLIO.KOGkjmvR6u7.nJniLF6ynyTS0z178tIzG", "XfBg8xBHV6yrD59SK.2UhddPsaTK.lev3ZyWWsSbJkEI2Mxh95", "Hs2Vexr5Kqn3DeWfO2.OX0cjYppO.wNA31VaPeyqLUD5MDzCKR", "urshJTTuU.MQxoXrGUO.4RtMnwOny3Q4o9dBHhTdP1laroNrAo", "vH0Ge51U3sUzp6VNkhX4.aWQG1jHzZmMnhtA.zO9VO08srWVKB", "q6TsTx7qdTXYQX25jd0Ra.qtJ.Mk66cJOpXIQRQduvwqnnrJaZ", "Ks5.rbvCjZDJhGNYmdctWq.q1Q8dARa0v.zJI8SqnGhFYe2b3d", "OkWRArubGddmTvXnvPjMQtq.nSFL.WCsGGXbkcYxJ1N.VZhmqA", "4h.hh5tCQMw8YHoBRsYnGJ1n.Qv.u5amMvkkgRcXAvxJ7sl6q.", "fgNVXGpgDDXVoDvi6apw1.QSQ..XTznk48t.PE2o1CCl3Gu1F6", "Ni13Uoou8RKjCC4fuTpOjM8Fv..j0qDHd.HNVI5fXD7VzDf0dP", "6qFhJ1LEWot6WO.r7KOnHkdL.Xj.8r2xHNI.JTpzuZLuDWN4II", "nQPep88PiM0JGzIQ...yz6A.uT08.nS.x6mY3ZzqpZvXcmOtSm", "sKw.e7GU9irhUp.Xnlw3Z6RW5zqrn.4U1zWys7eq9TgiuMtCt9", "PY9Uzf.5XKkdMshkJeNQmcaCanD2S4.HjmEm7RBDfhjPhgxpjE", "rxU01.Xajekefc.knvA4MJ0smkHx.UH.osMfHGjZTlJCfvdXHj", "JwCFE77MiKeF1aKti33onOvGM4dHx1jo.frNR1xA1fmU07UuSu", "VbZJ5d8c.yVrdVbGLZ19hp.Gv8.N6zmsf.3QhkGadUl.LyW.XK", "9Zkt76BHwZozkP8tFyVdtXzXktHImWEMr3.N0Sco5bnR1DbAUh", "6wBbhR.xVtCcKKuB6WaBAIJbk.N.YymfNQN..vwc8.S2zhmamw", "oORSlzTio4w5mFvVyWPH.QIkgPVJ3s7HRh0..vxQ3plvhPnfjt", "1ZhU.OSGInveXiRKnsehzR8cREITZ7RG1kSvv.lNX76iHADjX.", "Sypkj2sYWUoEJKiAySyTOQSYc25pzeBjxGcwxl.FAtEMjOspHu", "dDVyM6AVVzMPxJ7zTbqd9dqxXofzqqDZAaocQNF.39rQxIaVjN", "mGltRuTVOuZCdCymSJLPVunJA1Xup9fT1d583XA3.oG1Cr9H.q", "1WBcOWB5dtDYxJc10kU1OvG1vCDZZThlfUb.p7t9o.inFxAhYR", "PLamnxDqiZTsSoXuzEDl0whNxC7LvgjJmlnSl6ErGi.YBviKu.", "zzC3Nrn.LffGQxKy1I5a8qF.JlVuXiPCU.R2viMQ1nY.LFcxUV", "xU3fONie.ajTlOyk72MrsnYV73zDcuhf0L1zhHjxCFBL.ULzcA", "c4pZcAyS1iOO.XeJ8MDorneZsGDWmMgv7yDhPAOIrxvFU.wKAj", "2H8Fe.JGyWDYqt.VtxzNWr2hlufNOtxdUWbmnDsa9AicLw.vK4", "CjLZHo59OBa0mtApIhCrVJbm6104tCpXu.AafjpVHhKxzKv.is", "EXWY5eSvpsbM8Gr1z9KAKa3qqFdIStjHSXUmjXHj.YuUcAKi.D", "IE5yRoNUj1dTlVEmG5RoBZdA.6PIm9EjuKhwt.uNqR.VAj4sD."};
    int inverseWalkSpeed = 49;
    int inverseDriveSpeed = 35;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 16198;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> cars = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    vector<int> districts = {40, 25, 3, 30, 3, 11, 14, 30, 21, 44, 18, 43, 25, 42, 49, 13, 9, 34, 16, 21, 9, 25, 1, 16, 35, 3, 41, 39, 38, 25, 49, 5, 44, 34, 39, 44, 20, 38, 10, 37, 33, 13, 4, 28, 29, 7, 8, 49, 31, 7};
    vector<string> roads = {".Bvfhe7Crt94t7sAqtyqrs5v2Envyyaxx3goyd3pgqzH9mcArj", "B.BylryiJLDE8t81h93ciJCIz4lA8itwrzlkgoysrgbfsjtehl", "vB.gxjomabnBtsxzkAxqiaq7wzF0Gjm5aruhmpv9DkJtuCBLkl", "fyg.l67rdg7kpdrwhtulhe9gfytfzn7ikaieocfbpiByfrmDid", "hlxl.egszBmjfabjgbiciAkBeo7wgpdvtg2ho8dn7hhu758iic", "erj6e.7okmbji8kpcmneclbmdsmisj3jjab9k6cbjdutakhwd6", "7yo7g7.wln5cp6pwkrulkm3o7zonxr4pq2ehs97iilyB9mfAle", "Cimrsow.wyzHevkhcnffawAuBexlq3rgbyqd3pAgAbt6vuAwai", "rJadzklw.1hwzrDGqGEwp0l4sHHbLtlglnwnvqtgDrODtFAQro", "tLbgBmny1.jyBtFIsIGyr0n3vJJcNuohmpypxtviGtQFwHDStr", "9Dn7mb5zhj.eucvBoxzqoi3lbEumCu9pr6klwfcjooEFfskFpi", "4EBkjjcHwye.xbvDuvBtwxaA5HnAADfCD9jtDh6ufvBLcncBwo", "t8tpfipezBux.l568843aAtzr9ircckokqdbafqjm7gfkgni8b", "7tsda86vrtcbl.krilqhks9u5vhrqr5ss58hr54kcjsz2f8tkc", "s8xrbkpkDFvv5k.7d266fDtDpcdw7iltqqbfgfonicakiakddd", "A1zwjpwhGIBD6r7.f81agHAGx4ky9grupxjiemwqqeceqisffi", "qhkhgckcqsou8idf.gd61roqognil8fgcme28cnao0ogikor05", "t9AtbmrnGIxv8l28g.89iGvGqdbz5lmxtrcijhpqhg7mj9jagg", "y3xuinufEGzB4q61d8.8eFyEv5kwafpsnvhgckunpcdeohqgdg", "qcqlcelfwyqt3h6a698.8xpwndhpfcgmjna8bcmgk5ihgekk67", "riihickaprowakfg1ie8.qopphphn6geang27eo8q1qgkmpt07", "sJaeAlmw00ixAsDHrGFxq.m3tIIbMtmgloxovrugEsPEuFBRrp", "5Cq9kb3Aln3at9tAovypom.p7DqpAv8st3ilwd8lkpCFcphDpi", "vI7gBmou43lAzuDGqGEwp3p.wGJ8MrodirynttwfGrPBwGDRqp", "2zwfed7Bsvb5r5pxoqvnpt7w.Bkvvw9wx4dmwb0odpwF6j9xph", "E4zyoszeHJEH9vc4gd5dhIDGB.pyefuuoBnkcqAqvfgaunwjgl", "nlFt7moxHJunihdknbkhpIqJkp.EdulDAnaotgjv7ndye2adok", "vA0fwinlbcmArrwyizwphbp8vyE.Eil49qtgkov8CjHstBAKij", "y8GzgsxqLNCAcq79l5afnMAMvedE.psCxxhonmuwll2oocn5lm", "yijnpjr3tuuDcrig8lfc6tvrwfuip.nd8um92lwcx7sarrwv6e", "atm7d34rlo9fk5lrfmpggm8o9ullsn.mm6adn59ehguw7jewg8", "xw5ivjpgghpCostugxsmegsdwuD4Cdm.4ssegow7CgFntAAHfi", "xraktjqblmrDksqpctnjaltixoA9x8m4.tqbbnw7AcBitxzDbg", "3zraga2ynp69q5qxmrvnno3r4Bnqxu6st.ekua4lhnyD8ldzng", "glui2beqwykjd8bjechagxiydnathmasqe.el5ck9ejt689kf9", "okheh9hdnpltbhfi2ig82olnmkogo9debke.acm7o3rjhlnt34", "ygmooks3vxwDarge8jcb7vwtwctkn2ngbula.lwew7q8rqvt6e", "dopc869pqtfhf5fmchkcerdtbqgoml5ona5cl.agddot5dbqe6", "3yvfdc7Atvc6q4ownpumou8w0Ajvuw9ww4cmwa.ocovE5i8woh", "ps9bnbiggijujknqaqng8glfoqv8wce77lk7ego.uaznlssBaa", "grDp7jiADGofmciqohpkqEkGdv7ClxhCAh9owdcu.plC983lqj", "qgkihdlbrtov7jce0gc51sprpfnjl7ggcne37doap.ogjkoq06", "zbJBhuytOQEBgsaco7diqPCPwgdH2suFByjrqovzlo.rqdo2po", "HftyutB6DFFLfzkegmehgEFBFaysoawniDtj8tEnCgr.zvDufn", "9suf7a9vtwfck2iqijogkucw6uetor7tt86hr55l9jqz.c6rkc", "mjCr5kmuFHsngfaik9hemFpGjn2BcrjAxl8lqdis8kdvc.adlh", "ctBm8hfAADkcn8ksojqkpBhD9waAnweAzd9nvb8s3ooD6a.opi", "AeLDiwAwQSFBitdfragktRDRxjdK5vwHDzkttqwBlq2urdo.rr", "rhkiidlartpw8kdf0gd60rpqpgoil6gfbnf36eoaq0pfklpr.7", "jlldc6eioriobcdi5gg77piphlkjme8igg94e6haj6onchir7."};
    int inverseWalkSpeed = 96;
    int inverseDriveSpeed = 80;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 91296;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> cars = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    vector<int> districts = {40, 25, 3, 30, 3, 11, 14, 30, 21, 44, 18, 43, 25, 42, 49, 13, 9, 34, 16, 21, 9, 25, 1, 16, 35, 3, 41, 39, 38, 25, 49, 5, 44, 34, 39, 44, 20, 38, 10, 37, 33, 13, 4, 28, 29, 7, 8, 49, 31, 7};
    vector<string> roads = {"......................A...........................", "........................x.........................", "...............................................v..", "............A....................u................", "..............................................b...", "...........................i........g...........v.", "...............................................B..", "..................................l...............", ".........I........................................", "........I..........................y.z...f.t......", "............p......p....x.........c...........k9..", "............3.....................................", "...A......p3..f..8..........................r.....", "........................................k.........", "............f.....................................", ".............................y............l.......", ".......................m..9.......................", "............8.....................................", "....................................q.............", "..........p......................................d", "........................y.............q....z......", "........................m.......e.................", "A..............................G...............r..", "................m.................................", ".x........x.........ym........f.....e.............", "..............................................4...", "................9...........9.....v.....h.........", ".....i............................................", "..........................9.......................", "...............y..................................", "........................f.........................", "......................G...........................", ".....................e............................", "...u..............................................", ".......l..c...............v.......................", ".........y........................................", ".....g............q.....e.........................", ".........z........................................", "....................q.............................", "...............................................q..", ".............k............h.......................", ".........f........................................", "...............l...............................7..", ".........t..........z.............................", "............r.....................................", "...............................................p..", "....b.....k..............4........................", "..v...B...9...........r................q..7..p....", ".....v............................................", "...................d.............................."};
    int inverseWalkSpeed = 92;
    int inverseDriveSpeed = 59;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 467562;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> cars = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    vector<int> districts = {40, 25, 3, 30, 3, 11, 14, 30, 21, 44, 18, 43, 25, 42, 49, 13, 9, 34, 16, 21, 9, 25, 1, 16, 35, 3, 41, 39, 38, 25, 49, 5, 44, 34, 39, 44, 20, 38, 10, 37, 33, 13, 4, 28, 29, 7, 8, 49, 31, 7};
    vector<string> roads = {"........................................t...9.....", "........................vj........................", "...........1..........................h...........", "....................j.............8...............", "...........J..........o...........................", ".......f..................e.......................", "..........................q....a..................", ".....f..........c.................................", ".................................................R", "............V.......................m.............", "..........................................5...F...", "..1.J.............................................", ".........V.........................Q..............", "............................H..........d..........", "...........................................q......", ".......................z...................d......", ".......c.................................K........", "..............................p....W..............", "...............................................hH.", "..........................................b......q", "...j.........................................3....", ".....................................4........N...", "....o.........................7...................", "...............z........................S.........", ".v.........................M......................", ".j.............................................p..", ".....eq...........................................", "........................M....................7....", ".............H...............c....................", "............................c....j................", ".................p....7...........................", "......a.........................C.................", "...............................C.s................", ".............................j..s.................", "...8..................................Y...........", "............Q....W................................", ".........m.............................5..........", ".....................4..........................I.", "..h...............................Y...............", ".............d......................5.............", "t......................S..........................", "................K...........................4.....", "..........5........b..............................", "..............qd..................................", "9........................................4........", "....................3......7......................", "..........F..........N............................", "..................h......p........................", "..................H..................I............", "........R..........q.............................."};
    int inverseWalkSpeed = 74;
    int inverseDriveSpeed = 61;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1590893;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> cars = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    vector<int> districts = {40, 25, 3, 30, 3, 11, 14, 30, 21, 44, 18, 43, 25, 42, 49, 13, 9, 34, 16, 21, 9, 25, 1, 16, 35, 3, 41, 39, 38, 25, 49, 5, 44, 34, 39, 44, 20, 38, 10, 37, 33, 13, 4, 28, 29, 7, 8, 49, 31, 7};
    vector<string> roads = {"..Z.Z.............................................", "..........................Z....Z..................", "Z.........Z.......................................", ".....................Z..Z.........................", "Z..............................................Z..", "......Z................Z..........................", ".....Z..............................Z.............", "..........................Z.........Z.............", ".................................Z................", "...........................Z..........Z...........", "..Z...............................Z...............", "..................Z......Z........................", "..................Z..........Z....................", "................Z.........................Z.......", ".....................................Z............", ".........................Z...................Z....", ".............Z...Z................................", "................Z.............................Z...", "...........ZZ.....................................", ".............................ZZ...................", ".....................................Z..Z.........", "...Z..........................................Z...", "...............................Z............Z.....", ".....Z..........................Z.................", "...Z..........................Z...................", "...........Z...Z..................................", ".Z.....Z..........................................", ".........Z...................................Z....", "..........................................Z.....Z.", "............Z......Z..............................", "...................Z....Z.........................", ".Z....................Z...........................", ".......................Z.........................Z", "........Z.........................Z...............", "..........Z......................Z................", "......................................Z..........Z", "......ZZ..........................................", "..............Z.....Z.............................", ".........Z.........................Z..............", "............................................Z..Z..", "....................Z......................Z......", "...........................................Z....Z.", ".............Z..............Z.....................", "........................................ZZ........", "......................Z................Z..........", "...............Z...........Z......................", ".................Z...Z............................", "....Z..................................Z..........", "............................Z............Z........", "................................Z..Z.............."};
    int inverseWalkSpeed = 74;
    int inverseDriveSpeed = 56;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 3813992;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> cars = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    vector<int> districts = {40, 25, 3, 30, 3, 11, 14, 30, 21, 44, 18, 43, 25, 42, 49, 13, 9, 34, 16, 21, 9, 25, 1, 16, 35, 3, 41, 39, 38, 25, 49, 5, 44, 34, 39, 44, 20, 38, 10, 37, 33, 13, 4, 28, 29, 7, 8, 49, 31, 7};
    vector<string> roads = {"..ct4o3.A88u3oigmnclycC8izArf5vo9.rqxn5rmAru9qieyz", "..hl9nbrw6bp.9jsbt3.t1p7eqtcukzccbefou8jemrl7swoBn", "ch.jccauobjjen6bhbd.ngxaapqpiejj46nl.ccifwem9dh7l.", "tlj..a.aalv4sgdu9miu7mgl95..Dxnajlc83op16.d2jfBqnc", "49c..m1yy36r2jhj.o8nv.y3fvxmkawj75mmt.0.ivqq.pmgyv", "oncam.mlbkt7pm5lfcjkamrj8fd.urdgfhkgddn9bq.d.5shen", "3ba.1m.yx57r3kghim9lv.z4fwxni8uk64nnum2njw.r6okexw", ".ruayly.gtDeBioFfxqFds8uk6ahOHxe.udb7zxcfao7sqN.x5", "Awoaybxg.uE6Arhwklsu3wou.9.rGDilqsnjany.hpbcsdEtgl", "86bl3k5tu.9o.ffldn3or4t0brthoeuf6.ihpo3jernm.nphwq", "8bjv6t7DE9.y4lo..vctC9B9mBDo.cDoecqqz.6toyxwbwqmFz", "upj4r7re6oy.ulcs.jlr3pl.b76lCyifkmhd6.r5al97lcApih", "3.es2p3BA.4u.lkkk.aoy9A6iyAoj8yma8ppwq2q.ytt8sm.A.", "o9ngjmkirflll.ly7waAobffekn.DtA5ii.8ixifacrfesEuBd", "ij6dh5gohfockl.geafggite6jjn.lfg9bkhhbhcbs..c7.chp", "gsbujlhFwl.skyg.tbo.wqJklAzBa.jvf.zxyaktrIlxk.73mF", "mbh9.fifkd..k7et.p9uhc.d.eh8zrt1e.53cqh83..9cl.oud", "ntbmocmxlnvj.wabp.p8msD.hr.ymn8r.ivrq0plmCapl7i9az", "c3di8j9qs3claafo9p.rp3p4ao.ds.vb87d.mp7gbnnj3ntkxm", "l..unklFuotroAg.u8r.utKnmzyDejfxi.Byy7o.sJixnga6iG", "ytn7vavd3rC3yogwhmpu.tlrf63oGBk.oqkf.nv8emb8peDsjh", "c1gm.m.sw49p9biqcs3tt.r5druesiyda9fgps6keo.m5rumAo", "Cpxgyrz8otBlAftJ.DpKlr.une.cQIEevwbce.xhh2udsxQFE3", "87al3j4uu09.6fekd.4nr5u.b.tin.tf53iipn3j.rnm1mogwr", "iea9f8fk.bmbie6l.hamfdnb.ghgtml.8a.a.if85ld.9dshnj", "zqp5vfw69rB7ykjAeroz6re.g.3j.Dqeprfb1sv7cfh4pkH.pb", "Atq.xdxa.tD6Anjzh..y3u.th3.nJEnhqsjf5rx9fkf8rh.v.f", "rcp.m.nhrholo.nB8ydDoecigjn.Gw.6ll38hzlfb9s.huGxDb", "fuiDkuiOGo.CjD.azmseGsQnt.JG..uBkkFDHl.ByOvFot4dxM", "5kexar8HDecy8tl.rn.jBiI.mDEw..wtdcwvBnbvrGtzfr.dyF", "vzjnwduxiuDiyAfjt8vfkyEtlqn.uw.voqy.q.wnpE9qs7qi.A", "ocjajgkelfofm5gv1rbx.def.eh6Btv.gh32csj8.cl9dmBrvb", "9c4j7f6.q6ekai9fe.8ioav58pqlkdog..kinh8hdtil4hkbqr", ".b6l5h4us.cm8ib..i7.q9w3arslkcqh..kjpj5jftk.3jlc.s", "rencmkndniqhp.kz5vdBkfbi.fj3Fwy3kk.3dwlb8.oa.q.vz8", "qfl8mgnbjhqdp8hx3r.yfgciabf8Dv.2ij3.9tl74ak6gmDsv8", "xo.3tdu7apz6wihycqmy.pep.15hHBqcnpd9.rt5afg2njGu..", "nuco.dmzno..qxbaq0p7ns.nisrzln.shjwtr.pnnEbrm8h9bA", "58cp0n2xy36r2ihkhp7ov6x3fvxl.bwj85lltp.ni.qq.qnhyu", "rji1.9nc.jt5qfct8lg.8khj879fBvn8hjb75nn.4gd3hfAond", "mef6ibjfheoa.abr3mbseeh.5cfbyrp.df84ani4.gg7c.ynqd", "Amw.vqwaprylycsI.CnJmo2rlfk9OGEctt.afE.gg.udqwODE3", "rredq..obnx9tr.l.anib.undhfsvt9likokgbqdgu.g..sh9q", "ulm2qdr7cmw7tf.x9pjx8mdm.48.Fzq9l.a62rq37dg.kjE.q9", "979j..6ss.bl8eckcl3np5s19prhofsd43.gnm.hcq.k.lpg.p", "qsdfp5oqdnwcss7.l7ngerxmdkhutr7mhjqmj8qf.w.jl.qf8.", "iwhBmskNEpqAmE.7.itaDuQosH.G4.qBkl.DGhnAyOsEpq.atM", "eo7qghe.thmp.uc3o9k6smFgh.vxddirbcvsu9honDh.gfa.lB", "yBlnyexxgwFiABhmuaxijAEwnp.Dxy.vq.zv.bynqE9q.8tl.A", "zn.cvnw5lqzh.dpFdzmGho3rjbfbMFAbrs88.Audd3q9p.MBA."};
    int inverseWalkSpeed = 25;
    int inverseDriveSpeed = 7;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 20195;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> cars = {10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10, 10};
    vector<int> districts = {40, 25, 3, 30, 3, 11, 14, 30, 21, 44, 18, 43, 25, 42, 49, 13, 9, 34, 16, 21, 9, 25, 1, 16, 35, 3, 41, 39, 38, 25, 49, 5, 44, 34, 39, 44, 20, 38, 10, 37, 33, 13, 4, 28, 29, 7, 8, 49, 31, 7};
    vector<string> roads = {"..R.3.....om.....Rg...D...................5...9...", "....U.v......48.xs............e....7.........1....", "R...................L.........R.....X.6.5.......i.", "....r...................L.J......c.....qrj....B...", "3U.r..o....V............A.....3...............gfl.", ".........G......i......Q.........9.....6......N.4.", ".v..o.........2......................l......Q.W...", "......................n...........3....V..........", "...............E....T.....v...PC....YS......b.ci..", ".....G...................y........3...............", "o.............N.p....2.x.......n.R...y............", "m...V...........b........M............Y6......BC..", ".............y.X..........x....f.Kn...............", ".4..........y............8......................y.", ".8....2...N...................B...............T...", "........E...X................D..................6.", ".x...i....pb................C.7..7....u7..........", "Rs........................6.............y.c.......", "g.......................nh....................j...", "....................G.K.............B.Z...7.....Q.", "..L.....T..........G...W.H..0..............O......", "..........2............4k..........s.n..Z......I..", "D......n...........K.............v...v.X.......7..", ".....Q....x.........W4...w......a..N.z.Go.........", "...LA.............n..k........I.....9.J...h.......", ".........y.M.8....h.H..w.............K...sJV.h....", "...J....v...x....6...............9.......iF.......", "....................................4M.........e..", "................C...0...............4...O.........", "...............D....................2..ye.........", ".eR.3...P.....B.7.......I............K.......Rx...", "........C.n.f......................b.....T.....Z..", ".......................a...............a......i...", "...c.9....R.K...7.....v...9................u..h...", ".......3.3..n..........................S..........", ".7...................s.N.......b..................", "..X.....Y..........B....9..442....................", "......l.S.y..........nvz.K.M..K........C.....W....", "..6........Y....u..Z....J.................j.......", "...q.6.V...6....7.....XG.....y..a.S..C....I...D.c.", "..5r.............y...Z.o....Oe....................", "...j.....................si....T..............d..A", "5................c.7....hJF...........jI...k.....a", "....................O....V.......u........k..c....", "......Q.b......................................W..", ".1.......................h....R......W.....c....n.", "9..BgNW.c..B..T...j...........x.ih.....D.d.....l..", "....f...i..C.........I7....e...Z............W.l...", "..i.l4.......y.6...Q...................c.....n....", ".........................................Aa......."};
    int inverseWalkSpeed = 91;
    int inverseDriveSpeed = 51;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 179335;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> cars = {26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26};
    vector<int> districts = {34, 31, 44, 32, 11, 9, 15, 27, 22, 34, 23, 9, 4, 2, 6, 42, 41, 20, 33, 2, 48, 10, 40, 43, 32, 38, 1, 22, 10, 12, 19, 39, 35, 37, 40, 45, 22, 49, 9, 36, 5, 45, 36, 7, 1, 46, 45, 6, 46, 41};
    vector<string> roads = {".agpor96ckxbpqmgibzwcdgjhsdgnodrgxccikeupfu7umfjuq", "a.athtdb6uCbnwdrtgrw82alsq97neojgqkgtunojglcrvqnui", "ga.EqDnl3BMmxGixxqyH49kwyB33xjrprxtqxCvxsrrlBDuxEq", "ptE.p6fizj7hg5xosdxcAvm8ofCBbxtwevecuhfppdyhicu6ds", "ohqp.khjnBvdau9BEkakqg7gCdrmd9B6c8qjFAt61d8icxDjh2", "rtD6k.gkzpahactuyfr5Buj7u8CA6uyrcpifzokjkctjbiz76n", "9dnfhg.2jjo3filjm2tmkga8kimldmkn6r82nibmj5q1khl9kk", "6blijk2.gjr5iklik4uphebciljjgmho9s85libok8r0nijcnm", "c63znzjg.xIhtChtulwD26hrux33uioonvpmtyrupmqhyzqtBo", "kuBjBpjjx.onwfE6agMwxxum6xyBrFeHoJagc17ECnKjz7djwE", "xCM7vaorIo.ql8EuymCdJDtgujKKhEAClAllAmmuvlEqlgBefy", "bbmhdh35hnq.dlgnq6oljd69ogljchnj4mc6rmgif4l4ilpbjg", "pnxgaafitwld.ljyBghawnc9z3xu3kAg8flgDup899ih4qCc7c", "qwG5ucikCf8ll.BlpfDhCyqdllEEhCrBiBdfrddvvhDko7sajx", "mdix9tllhEEgjB.DFofukaanEnlem0B6ietnFExfaj8kmCDqr8", "grxoBujit6unylD.3hMAsuuo0AtxuE7HpKci588GDoJiCe6mAE", "itxsEymkuayqBpF3.kPEswws3DtyyG5JtNfl1ccJGrMlGh3qEH", "bgqdkf24lgm6gfohk.vlmjd8hjoodpjq8t50lf8ol6t3lek8kn", "zryxartuwMCohDfMPv.pzpiqNiAuleM8n1BuQKE79o6tgHOtm8", "wwHck5mpDwdlahuAElp.FxmcA7GE8uErgnokGurhkgso8pFd2n", "c84AqBkh2xJjwCkssmzF.9kttz06wlmrpypnrxrxsotiBzouDr", "d29vguge6xDdnyauwjpx9.bnvra5ocrhhonjwxqniijesxtpvh", "gakm7jabhut6cqauwdimkb.duflhcbtc7gjdxtmd98fagrvfja", "jlw8g78crmg99dnos8qctnd.paut5orn4oc7ukfih4pbdgt2bj", "hsyoCukiu6uozlE03hNAtvup.AuyvF8HqLci589GDpKjDd7nAF", "sqBfd8ilxxjg3lnADji7zrfaA.Bx4nCjbgniFvqacclk2rEd3f", "d93CrCmj3yKlxElttoAG0aluuB.6xmnrqzqosysytqukCBpwEs", "g73BmAlj3BKjuEexyouE65htyx6.ufslotsoxButoonkyCvvBm", "nnxbd6dgurhc3hmuydl8woc5v4xu.mxk6jiczqldd7mf7my76g", "oejx9ummiFEhkC0EGpeulcboFnmfm.C5jduoHFyfak7lmDErr8", "dortBykhoeAnArB75jMEmrtr8CnsxC.FrKfk4fdGDqIiFk1qDE", "rjpw6rnooHCjgB6HJq8rrhcnHjrlk5F.j7wpKGza6k2niEIqo3", "ggrecc69nol48iipt8ngph74qbqo6jrj.kd7unhfd0l8dkt7ef", "xqxv8prsvJAmfBeKNt1nyogoLgztjdK7k.ysOIC57m6reFMrk6", "ckteqi88palcldtcf5Bopnjccnqsiufwdy.5h93trcy8q9gaot", "cgqcjf25mgl6gfnil0uknjd7iioocokp7s5.mg9nk5s4kel7jm", "itxuFznltcArDrF51lQGrwxu5FsxzH4KuOhm.eeKGtNmHk2sFI", "kuChAoiiy1mmudE8cfKuxxtk8vyBqFfGnI9ge.6DBlJiy5fhuD", "envftkbbr7mgpdx8c8Errqmf9qsulydzhC39e6.xufCbt8edrw", "uoxp6jmouEui8vfGJo7hxndiGaytdfGaf5tnKDx.4han8zIle6", "pjsp1kjkpCvf9vaDGl9ksi9hDctodaD6d7rkGBu4.e8kbyFkg2", "fgrddc58mnl49hjor6ogoi84pcqo7kqk0mc5tlfhe.m7ejr6eg", "ulry8tqrqKEliD8JMt6stjfpKlunm7I2l6ysNJCa8m.qjGKtp5", "7clhij10hjq4hkkil3toieabjkkkflin8r84mibnk7q.mikbml", "urBicbknyzli4omCGlg8BsgdD2Cy7mFideqkHyt8bejm.tGf5e", "mvDcxihiz7glq7CeheHpzxrgdrBCmDkEkF9ek58zyjGit.ldpA", "fquuDzljqdBpCsD63kOFotvt7EpvyE1ItMgl2feIFrKkGl.rFG", "jnx6j79ctjebcaqmq8tdupf2ndwv7rqq7ra7shdlk6tbfdr.dn", "uuEdh6knBwfj7jrAEkm2DvjbA3EB6rDoekojFuregepm5pFd.k", "qiqs2nkmoEygcx8EHn8nrhajFfsmg8E3f6tmIDw62g5leAGnk."};
    int inverseWalkSpeed = 75;
    int inverseDriveSpeed = 8;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 75694;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> cars = {26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26};
    vector<int> districts = {34, 31, 44, 32, 11, 9, 15, 27, 22, 34, 23, 9, 4, 2, 6, 42, 41, 20, 33, 2, 48, 10, 40, 43, 32, 38, 1, 22, 10, 12, 19, 39, 35, 37, 40, 45, 22, 49, 9, 36, 5, 45, 36, 7, 1, 46, 45, 6, 46, 41};
    vector<string> roads = {"........................h.........................", ".....................................i............", "....o.............2............f..................", "..............................7............c......", "..o...............................................", "........................J.......A.................", ".......k..........................................", "......k..........a................................", ".................x................................", "...............................................I..", "...........................c.........n...........h", "..............................................9...", "............................................9..e..", "...................9......s............t.e........", "..................c.....................f.........", ".................m........................s.......", "...............................e..................", ".......ax......m..............j...k...............", "..2...........c............l..a...................", ".............9................i...................", "..............................c...................", "......................n.........................m.", ".....................n............................", "............................o.......B.............", "h....J........................................n...", "........................................3.........", ".............s.....................b..............", "..........c.......l...........................a...", ".......................o.....................ml...", "............................................v.....", "...7.............jaic.............................", "..f.............e.................................", ".....A............................................", ".........................................i........", ".................k................................", "..........................b.......................", ".......................B..........................", ".i........n...........................8...........", ".....................................8............", ".............t....................................", "..............f..........3........................", ".............e...................i................", "...............s..................................", "...c..............................................", "............9................v................f.y.", "............................m.....................", "...........9............n..al...............f.....", ".........I..e.....................................", ".....................m......................y.....", "..........h......................................."};
    int inverseWalkSpeed = 70;
    int inverseDriveSpeed = 34;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 361340;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> cars = {26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26};
    vector<int> districts = {34, 31, 44, 32, 11, 9, 15, 27, 22, 34, 23, 9, 4, 2, 6, 42, 41, 20, 33, 2, 48, 10, 40, 43, 32, 38, 1, 22, 10, 12, 19, 39, 35, 37, 40, 45, 22, 49, 9, 36, 5, 45, 36, 7, 1, 46, 45, 6, 46, 41};
    vector<string> roads = {"........W..............................8..........", ".................c........y.......................", "..........................................N..c....", "......i...............p...........................", "...........1.............C........................", ".........Z.....................d..................", "...i.....................................a........", "..............O................M..................", "W.......................................T.........", ".....Z...................5........................", "........................Z........................1", "....1........................1....................", "...........................t.........U............", ".............................x.............z......", ".......O........................................h.", "............................L..................l..", "...................0.O............................", ".c...................S............................", "...................g............................D.", "................0.g...............................", "......................................y..........w", "................OS................................", "...p................................4.............", "..........................Z.......e...............", "..........Z...................................Q...", "....C....5........................................", ".y.....................Z..........................", "............t.................O...................", "...............L..............6...................", "...........1.x....................................", "...........................O6.....................", ".....d.M..........................................", ".....................................L......5.....", ".......................................0......8...", ".......................e..........................", "......................................T...R.......", "......................4...........................", "............U...................L.................", "....................y..............T..............", "8................................0................", "........T......................................5..", "......a......................................G....", "..N................................R..............", ".............z..............................B.....", "................................5..........B......", "..c......................................G........", "........................Q........8................", "...............l........................5.........", "..............h...D...............................", "..........1.........w............................."};
    int inverseWalkSpeed = 78;
    int inverseDriveSpeed = 17;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1572347;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> cars = {26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26};
    vector<int> districts = {34, 31, 44, 32, 11, 9, 15, 27, 22, 34, 23, 9, 4, 2, 6, 42, 41, 20, 33, 2, 48, 10, 40, 43, 32, 38, 1, 22, 10, 12, 19, 39, 35, 37, 40, 45, 22, 49, 9, 36, 5, 45, 36, 7, 1, 46, 45, 6, 46, 41};
    vector<string> roads = {"..Z...........................Z...................", "....Z............................Z................", "Z.............................................Z...", ".............................Z...........Z........", ".Z.......Z........................................", "............Z....Z................................", "...............Z.........Z........................", "...............Z..............Z...................", "..........Z.............................Z.........", "....Z.............Z...............................", "........Z........................................Z", ".............Z..........Z.........................", ".....Z....................................Z.......", "...........Z...............................Z......", "..................Z......................Z........", "......ZZ..........................................", ".....................Z.............Z..............", ".....Z................................Z...........", ".........Z....Z...................................", ".......................Z...................Z......", ".........................Z............Z...........", "................Z.......................Z.........", "...............................Z..Z...............", "...................Z...........................Z..", "...........Z..............Z.......................", "......Z.............Z.............................", "........................Z........Z................", "...................................Z.........Z....", "....................................Z.........Z...", "...Z...........................Z..................", "Z......Z..........................................", "......................Z......Z....................", ".....................................Z...........Z", ".Z........................Z.......................", "......................Z...........................", "................Z..........Z......................", "............................Z.....................", "................................Z...........Z.....", ".................Z..Z.............................", "..........................................Z.....Z.", "........Z............Z............................", "...Z..........Z...................................", "............Z..........................Z..........", ".............Z.....Z..............................", ".....................................Z.........Z..", "...........................Z....................Z.", "..Z.........................Z.....................", ".......................Z....................Z.....", ".......................................Z.....Z....", "..........Z.....................Z................."};
    int inverseWalkSpeed = 87;
    int inverseDriveSpeed = 26;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 3343846;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> cars = {26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26};
    vector<int> districts = {34, 31, 44, 32, 11, 9, 15, 27, 22, 34, 23, 9, 4, 2, 6, 42, 41, 20, 33, 2, 48, 10, 40, 43, 32, 38, 1, 22, 10, 12, 19, 39, 35, 37, 40, 45, 22, 49, 9, 36, 5, 45, 36, 7, 1, 46, 45, 6, 46, 41};
    vector<string> roads = {".8uAes7wDvtbjluyzcemqch3kh2rDxeEAkr08i2kz3rvbBgqBi", "8.mwnsgvAzn3horrvghmvl89ca9uAxbzvbp78kbbw4vy5E8iEq", "um.gIoBomC7mjwg6ftsnCGiwnctxmuifbfiunpwjhqAAqDd5HG", "Awg.MfFb5s9xhr5a0trhwJwEBmyp5hl55uaBsmBy1ysqBqnlwF", "enIM.B6FOyGpupGLLjkvr2vdxwewOErRNzCfkqcyLiuyoFuFCd", "ssofB.v4ddhv9c9lehf5gxwwBmp9e5gljw5tk9rzdrcbydmrir", "7gBF6v.zHuzjnkzEEdfpo4p8ro7rIzkKGsv8dk4sEbquiBnyzc", "wvobF4z.8ggydh7kbmk9kCyAEoud95jhgy6xoewB9vgeBfprkw", "DAm5OdH8.pfCkr8g6usiuLBHHrBn0epabAbEvnDE4BqnGmsrsF", "vzCsydugp.vCjanzsjhf6vFzKxs4qboyxGjxqftJqw31F6wD5l", "tn79Ghzgfv.oeq848oogwEmwrdrqfmfb7kbtljuoaqttsvebAC", "b3mxpvjyCCo.kstswklpyo5b8adxCAeAw8racne8x7yB3H9hIu", "jhjhu9ndkjek.cbjha94irmnrcgekf5mjm8ja5jpghgiomcjpn", "lowrpckhraqsc.lvr8696mw.Boh6rfgxvxgmf6jzpl69ugowfd", "urg5G9z78n8tbl.c5mlbqDtyyisj8dgb9r3vmfvv4smlxmjkry", "yr6aLlEkgz4sjvc.9utlBJpBtgwvfqk84mfyqpzqbuyxwzicEH", "zvf0LeEb6s8whr59.srgvIvDAlxo6hk54t9ArlAx1xsqAqmkwE", "cgttjhdmujoka8mus.1cegofsi8fvlayvqid77asrdfimphroc", "ehsrkffkshol96ltr1.achphuiadtjaxurhf85ctqedgnnirmd", "mmnhv5p9ifgp49blgca.fsrqwhjaiaankr6ne4muflcdshhokn", "qvCwrgoku6wyi6qBvecf.oCtHvn6vgmCAElrmdoGur37BeuDad", "clGJ2x4CLvEormDJIghso.ucwtcsLBoOKxzdin9xIgrvnCsDzb", "h8iwvwpyBFm5mwtpvoprCu.h49iABCgxt3sggqk3wdCE8J9cLz", "39wEdw8AHzwbn.yBDfhqtch.jk6vHBhHDlv2bm5kD5vyaFisEk", "kcnBxBrEHKr8rBytAsuwHw4j.flGGHlCy6xikvn2BgHJ8PegQD", "hacmwmoorxdacoigliihvt9kf.gsrs8ok9hhbhjcmduvfA08Cv", "29tyep7uBsrdghswx8ajnci6lg.oBucCylp35f2mx4ordyfqxg", "ruxpw9rdn4qxe6jvofda6sAvGso.o9kvtBfslapEns23A9ryaj", "DAm5OeI90qfCkr8f6vtivLBHGrBo.fp9aAcEvnEE4BroGnsrtF", "xxuhE5z5ebmAffdqhljagBCBHsu9f.lnmCaypewFfwc9E8swet", "ebilrgkjpofe5ggkkaaamoghl8ckpl.pmhde59fklblnhs7gun", "Ezf5RlKhaybAmxb85yxnCOxHCoCv9np.3vgEwrFz7BywEwqlCK", "Avb5NjGgbx7wjv944vukAKtDykytamm3.rdAsoBv7xwvAwlhBH", "kbfuzwsyAGk8mxrmtqrrEx3l69lBAChvr.rjirn3vgDF.K99MC", "rpiaC5v6bjbr8g3f9ih6lzsvxhpfcadgdr.sjbrv8pihvkilou", "07uBft8xExtajmvyAdfnrdg2ih3sEyeEAjs.8j3jA3twaDfpCk", "88nskkdovqlcafmqr78emigbkb5lvp5wsij8.b8kr6mpevakvj", "ikpmq9kenfjn56fpl754dnqmvhfane9rorbjb.htkibdqjhpki", "2bwBcr4wDtuejjvzAacmo9k5nj2pEwfFBnr38h.nA6pteAisyf", "kbjyyzsBEJo8pzvqxstuGx3k2cmEEFkzv3vjktn.zgGI9NcdPD", "zwh1LdE94qaxgp4b1rqfuIwDBmxn4fl77v8ArkAz.xqoBonmuD", "34qyirbvBwq7hlsuxdelrgd5gd4sBwbBxgp36i6gx.sv8CcmCl", "rvAsucqgq3tyg6mysfdc3rCvHuo2rclywDitmbpGqs.3BatB8h", "vyAqybuen1tBi9lxqigd7vEyJvr3o9nwvFhwpdtIov3.E6vB6l", "b5qBoyiBGFs3ouxwAmnsBn8a8fdAGEhEA.vaeqe9B8BE.KdkKu", "BEDqFdBfm6vHmgmzqpnheCJFPAy9n8swwKkDvjANoCa6K.AF6s", "g8dnumnpswe9cojimhihus9ie0frss7ql9ifahicnctvdA.9Cu", "qi5lFryrrDbhjwkckrroDDcsg8qyrwglh9lpkpsdmmBBkF9.JE", "BEHwCizks5AIpfrEwomkazLEQCxateuCBMoCvkyPuC86K6CJ.o", "iqGFdrcwFlCundyHEcdndbzkDvgjFtnKHCukjifDDlhlusuEo."};
    int inverseWalkSpeed = 73;
    int inverseDriveSpeed = 19;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 83403;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> cars = {26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26, 26};
    vector<int> districts = {34, 31, 44, 32, 11, 9, 15, 27, 22, 34, 23, 9, 4, 2, 6, 42, 41, 20, 33, 2, 48, 10, 40, 43, 32, 38, 1, 22, 10, 12, 19, 39, 35, 37, 40, 45, 22, 49, 9, 36, 5, 45, 36, 7, 1, 46, 45, 6, 46, 41};
    vector<string> roads = {"....................K...S..8...Q.........6......Pd", "........................n....................W....", "........................g.....Ct.....h............", "................0.....J.l.2.....g.............6...", "..........1..1..N.g...D.......l3..E..l............", ".......v............j....m...........ZQ..w.......a", "..................W.Y......a...e.XK.U..........A..", ".....v...........i............K.......yfU.........", ".............ul...p..8....gw...........6......h..Y", "..............j.....g....B.i...mm.0.v..2..t.......", "....1........p....ZV..k.............j.............", "..................X.k.....l..g...........u.n9.....", "..................Q...N...n......c.....w..3....3..", "....1...u.p......4...e.....J...A...C.....jN...g.q.", "........lj...................u.....S.N.l....n.....", "..................5....E........x.A............Q..", "...0N....................e.r...L.......f....K.O..R", ".......i.....4...............Sw.....t..x...Rx.....", "....g.W.p.ZXQ..5...c..KK....M.............TV....w7", "..........V.......c...........0.w......G....A.TU..", "K....jY..g.k..........................C......a...4", "........8....e...........4.a.......T.J........R..H", "...JD.....k.N.....K....Inw.w.....A.57.y...S.....B.", "...............E..K...I............c......1Pi.....", "Sngl..................n....CF...B..V.W.c..W......f", ".....m...B......e....4w....u.p.7..z.........K.....", "...2....g..ln..............Ky.............v.......", "8.....a.wi...J..r....aw.CuK..a......3.......IT..bA", "..................M.....F.y.....S.....3.........G.", "...........g..u..S.......p.a....................g.", "..C.l..K.........w.0...............3.....2HS.2....", "Q.t.3.e..m...A..L........7......u.....7d..........", "...g.....m.....x...w....B...S..u................x.", "......X.....c.........A.................CNI.......", "....E.K..0.....A.........z.............y.......l..", ".............CS......T5cV.....3................E.9", "......U..vj......t....7....3......................", "..h.lZ........N......J..W.............c...........", ".....Q.y............C.y.....3..7.....c....1.......", ".......f62..w.l.fx.G....c......d..y.........x..h..", ".......U.........................C...........F...g", "6....w.....u.j................2..N...........9....", ".........t..3N....T...S1W.v...H..I....1........2.j", "...........n.....RV....P......S...................", "...........9..n.Kx.A...i.K.I...........x.......G..", ".W..................a......T..2.........F9....XT.b", "...6....h....g..O..T.R.......................X..J.", "......A.....3..Q...U..............lE...h..2.GT....", "P............q....w...B....bGg..x.............J...", "d....a..Y.......R.7.4H..f..A.......9....g.j..b...."};
    int inverseWalkSpeed = 15;
    int inverseDriveSpeed = 7;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 25295;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> cars = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    vector<int> districts = {20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15};
    vector<string> roads = {".odrpjsjqpci4zin5kbjlimwhrkha8udos7rjlj8gwhgqj86n2", "o.b4na6cd8ezlgn6i7A5k6ggmBwvioil1aja4jivmemr4ixh5l", "db.dibg7ib3sapk976o7j4cojxrpccngbi8e6dbkimdgchm7ca", "r4d.lf9ci5gEojs5l7Dap8fkrGBznqmq6el68iiyrhmr0nAlao", "pnil.tubAffIkFDglgvoCi6EBPIGuhFypyhfm46qBC8ckAxnso", "jabft.9h7ifpifcffdv59bndbqlk9nbb88ik7onrccpsf8qc5g", "s6g9u9.j8fkzq9mdneE8hcn9kzvujtcl43og9qpAl7txagAl3p", "jc7cbhj.o75zets6d4scq64sqFywketoemb8a65nqqafaoregg", "qdiiA78o.mnsq9ekmjCb9ht5drnnfu4fb4podvuye5xAi9xk8n", "p8b5fif7m.cElpu2j4zcr78ptICAnmrraji1accutnhm4qykem", "ce3gffk5nc.t8tna78mbn7asmztre9rjfm5ea98hlq9cell8ga", "izsEIpzzsEt.mCeBmyltjwEyea64gqudyxpGuDBmdzzyDiekvj", "4laokiqeql8m.ylj3gehmfhwkvolc4uglr2ngge9jvcbnkc5m3", "zgpjFf9t9ptCy.onvoLhimy3nzwxpC8pf6xqjAzIo3DHkjGtcw", "inksDcmseunelo.ripsi4mxk0d888qf4ljmwkxwq1kwxs4lfih", "n695gfd6k2aBjnr.h2y9p49nqFzxklpo8hg47cctqlhm3nwhbk", "5i7llfndmj7m3vih.egdjchshtmk97rdio3ldgfcgrdekhe2i2", "k767gde4j48ygop2e.v8n29noDxviiom8he75bbqolfk6ltebh", "bAoDvvEsCzmleLsygv.vvtuIswqnmdGoAEgBvrq4qImiBu6ize", "j57ao58cbcbthhi9d8v.f5hggvqpckgf4afe1jiqgelo9drc4g", "lkjpC9hq9rnjmi4pjnvf.kwf3hdd9ra7ienthxvt5fwyo1pgej", "i648ibc6h77wfmm4c2t5k.bllAusfhmj7fc93dcplkgk7irc9f", "mgcf6nn4t8aEhyx9h9uhwb.xwKDBpgytire9f33pvv8eduvjlk", "wgokEd9s5psyw3knsnIgflx.jvstmA4le5vqhzzFk1CFkfDqbt", "hmjrBbkqdtmekn0qhosg3lwj.e997pf3kilviwvq0jvwq3lehg", "rBxGPqzFrIzavzdFtDwvhAKve.68kzqgzwxKxKIwewHHGipqwr", "kwrBIlvynCt6ow8zmxqqduDs96.2etoausqEsDCq8tBAAdjkrk", "hvpzGkuwnAr4lx8xkvnpdsBt982.cqo8tsoCqBzn8tyyzdghqh", "aicnu9jkfnegcp8k9imc9fpm7kec.hj3hjdpepnj6lnom8g6f8", "8ocqhnteum9q4Cql7idkrhgApztqh.zlov4okec8oz87opeap8", "uinmFbct4rruu8fproGgamy4fqoojz.ig8utiAzCg6BEnbAocr", "dlgqyblofrjdgp4odmof7jtl3ga83li.kjhthtsl2lrsp5hahc", "o1b6p84ebafylfl8i8A4i7iekzuthogk.8kc4lkvlcos6gwh3l", "saiey83m4jmxr6jhohEaefr5iwssjv8j8.qlcttBj3wAfeAm5p", "7j8lhiobpi5p2xmg3egfncevlxqod4uhkq.kfdbbku9aklf6k5", "rae6fkg8o1eGnqw4l7Bet99qvKECpottclk.ccdwvoin5sAmgo", "j468m79adaaugjk7d5v1h3fhixsqekih4cfc.hgqigjn8fsc5g", "ljdi4oq6vc9DgAxcgbrjxd3zwKDBpeAtltdch.0nwy5agvtinj", "jibi6np5uc8Bezwcfbqivc3zvICznczsktbdg0.lux4agtrhmh", "8vkyqrAnyuhm9Iqtcq4qtppFqwqnj8ClvBbwqnl.oEhdxr7eva", "gmirBclqetldjo1qgoqg5lvk0e886og2ljkviwuo.luvr4kdif", "wemhCc7q5nqzv3klrlIefkv1jwttlz6lc3uogyxEl.AEifDp9t", "hmdm8ptaxh9zcDwhdfmlwg8CvHByn8Brow9ij54huA.4luogqg", "grgrcsxfAmcybHxmekioykeFwHAyo7EssAannaadvE4.qwlhtf", "q4c0kfaai4eDnks3k6B9o7dkqGAzmonp6fk58ggxrilq.nzkan", "jihnA8go9qlikj4nhlud1iuf3idd8pb5gelsfvtr4fuwn.oedh", "8xmAxqArxylecGlwet6rprvDlpjggeAhwAfAstr7kDolzo.evb", "6h7lnclekk8k5tfh2eicgcjqeqkh6aoahm6mcihedpghkee.g3", "n5cas53g8egvmcibibz4e9lbhwrqfpch35kg5nmvi9qtadvg.k", "2laoogpgnmaj3whk2hegjfktgrkh88rclp5ogjhaftgfnhb3k."};
    int inverseWalkSpeed = 50;
    int inverseDriveSpeed = 48;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 64750;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> cars = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    vector<int> districts = {20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15};
    vector<string> roads = {"......................o...........................", "...................................m.......w......", "..................8.m........................u....", ".........z....................b.........E.........", "....................y..........K9.......s.........", "..................................C...............", "............b...............u..............sB.....", ".................e................................", ".................................................p", "...z..............................................", "..............B...........4..............C........", ".....................v..........................j.", "......b...........................................", "........................................D.........", "..........B....D.c.r..............................", "..............D......Cy.r.................D.......", "....................g.............K...............", ".......e......c..........n.......................r", "..8...............................................", "..............r...................................", "..m.y...........g.................................", "...........v...C..................................", "o..............y..................................", "............................................q.....", "...............r..................................", ".................n......................9.........", "..........4.......................................", "...............................B..................", "......u...........................................", "..............................m...................", "...b.........................m....................", "....K......................B..........l...........", "....9................................o.....I......", "......................................5........g..", ".....C..........K.................................", ".m................................................", "..............................................u...", "................................o.................", "...............................l.5............a...", ".............................................z....", "...Es........D...........9........................", "..........C.......................................", "...............D..................................", ".w....s.........................I.................", "......B................q..........................", "..u....................................z..........", "....................................u.a...........", ".................................g................", "...........j......................................", "........p........r................................"};
    int inverseWalkSpeed = 52;
    int inverseDriveSpeed = 9;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 233395;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> cars = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    vector<int> districts = {20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15};
    vector<string> roads = {"..............................F...........5.......", ".............Z.............i......................", ".............................l.c..................", "....G...........................................a.", "...G...........................................0..", "..............M............................H......", "..................Y.....................v.........", "............4......7..............................", ".......................................Z..b.......", "............................v.....n...............", "................................T.q...............", ".......................F............k.............", ".......4.....................P....................", ".Z...........................................B....", ".....M...................d........................", "..............................................1...", "................................D..............0..", "......................E..............E............", "......Y..............................3............", ".......7.........................................B", "...................................K..............", ".................................u.......R........", ".................E.................H..............", "...........F..........................V...........", "..........................M......................q", "..............d...............................m...", "........................M..................Q......", ".i..........................................z.....", ".........v.....................U..................", "..l.........P.....................................", "F...........................................D.....", "..c.........................U.....................", "..........T.....D.................................", ".....................u..........................6.", ".........nq.......................................", "....................K.H...........................", "...........k............................w.........", ".................E3...............................", ".......................V.....................K....", "........Z................................u........", "......v.............................w.............", ".....................R.................u..........", "5.......b.........................................", ".....H....................Q.......................", "...........................z..D...................", ".............B........................K...........", "...............1.........m........................", "....0...........0.................................", "...a.............................6................", "...................B....q........................."};
    int inverseWalkSpeed = 80;
    int inverseDriveSpeed = 70;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 5935980;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> cars = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    vector<int> districts = {20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15};
    vector<string> roads = {"..........Z.....................Z.................", "....................Z...............Z.............", "..................Z.................Z.............", "........Z..Z......................................", "...........................................ZZ.....", ".........................................Z.....Z..", "......................................Z.Z.........", "..........................Z...Z...................", "...Z...........................Z..................", "................ZZ................................", "Z................................................Z", "...Z........................Z.....................", "...................Z.......................Z......", ".............................ZZ...................", "........................Z.......................Z.", ".......................Z..........................", ".........Z.................Z......................", ".........Z.........................Z..............", "..Z...............................Z...............", "............Z..................................Z..", ".Z................................................", "...............................Z............Z.....", "........................Z.................Z.......", "...............Z.............Z....................", "..............Z.......Z...........................", "...................................Z....Z.........", ".......Z......................................Z...", "................Z................Z................", "...........Z..........................Z...........", ".............Z.........Z..........................", ".......Z.....Z....................................", "........Z............Z............................", "Z....................................Z............", "...........................Z....................Z.", "..................Z......................Z........", ".................Z.......Z........................", ".ZZ...............................................", "................................Z............Z....", "......Z.....................Z.....................", ".............................................ZZ...", "......Z..................Z........................", ".....Z............................Z...............", "......................Z..........................Z", "....Z.......Z.....................................", "....Z................Z............................", ".....................................Z.Z..........", "..........................Z............Z..........", ".....Z.............Z..............................", "..............Z..................Z................", "..........Z...............................Z......."};
    int inverseWalkSpeed = 26;
    int inverseDriveSpeed = 18;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 3322456;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> cars = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    vector<int> districts = {20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15};
    vector<string> roads = {"...........g...i.i............i5.....x....r.7.....", "......b....G..u..................x........4.......", "........l...6...d.k..g.B.....u......s.............", ".....a.x...........h.h.E.....x..s.......ni.aw.n.nb", "..........tz..................h....9..............", "...a....c......i.a..........o.............b...m...", ".b.......v.B.......g...D...........cD.........9.y.", "...x....l..p.................i.d...o...j....g.....", "..l..c.l..6..............7..n.......js.h...h......", "......v...g...s.i.......3.....n...................", "....t...6g......h.i.F...g..gt.dc......B...u.......", "gG..z.Bp....y8E.m.........x.u.....I.o.......8..q..", "..6........y.B...e.....B.......n.....aC......A....", "...........8B.y.....O....f.......fK.....t......w..", ".u.......s.E.y.E.mJ...d..p...2.pc...............M.", "i....i........E.......r...r.u....o......w...c...g.", "..d......ihm.....6.......6..........r.o.e.f.......", "i....a......e.m.6.....b.t.6........4...u..9.......", "..k.......i...J..............Kbn...i8.J....9..z52.", "...h..g..............m......g.......p.............", "..........F..O.......j..................u........8", "..gh...............mj.....fF...rm....g.......gc..b", "..............dr.b...........f........c..g..j....p", "..BE..D.....B...............uG......t......y.G....", ".........3g......t........z.....j..u............z.", "........7....fp.6...............c..d....g.........", "...........x...r.6...f..z.....c............bs.....", "..........g..........F......o..f......v.....7.....", ".....o..n.tu...u...g...u...o....3.................", "..ux...i......2...K...fG......y..l......ag.....F..", "i...h....nd.......b.......c..y...n......n..8..n..q", "5......d..c.n.p...n..r.....f.........t....n....k..", "...s..........c......m..jc..3......k......p.h...B.", ".x...........f.o.............ln.........e.........", "...........I.K.......................2..s.....r...", "....9.co.........4i.....ud......k...q.............", "..s...D.j..o....r.8p...t...........q...........e.F", "x.......s...a........g.........t..2...........oj.7", "..........B.C...o.J...c....v.................5...w", ".......jh........u.......................GDz......", "...n.........t.we...u....g...an..es...............", "...i..................g......g.........G....z.....", "r4...b....u.....f9.............np......D....w.....", "...a....h.........9....y..b...8........z..........", "7..w...g...8...c......j...s7....h........zw..xp...", "............A........g.G..............5.....x.a..s", "...n.m9...........z..c........n...r..o......pa....", "...........q.w....5..........F.k....ej............", "...n..y.......Mg..2.....z.......B................z", "...b................8bp.......q.....F7w......s..z."};
    int inverseWalkSpeed = 61;
    int inverseDriveSpeed = 8;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 110888;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> cars = {40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40, 40};
    vector<int> districts = {20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15, 20, 15};
    vector<string> roads = {"..3Ok....zLi87T....BR3g..vqT.4kTr...N...f.L....ABQ", "..ft.t..P.QQb.8Lr.bA..B..Stx..a...MCU.Za..qc....c.", "3f.a.....V.O.....U.R.d.fh7Xw...m...tcAQu.t...2uCq7", "Ota.vJU.aq.rKY.P..K.O.j...ih.Xve.FfDJP.1p.sjAJ.zD.", "k..v.AdE.p9x.CW.x.J.GPME..VjG.t.jq..QWc.q..ZUhbV..", ".t.JA..X..n.X4Ux..8V.VwChvsN...6q.KX....J..S.t..aw", "...Ud...4...wBBM....Lg4.3dh.A....W46..5...b...T.tz", "....EX....mh..9.Z0F.yQ1.EnA...y.c.rt.9..VA9vvQPNkT", ".P.a..4..Gtur.ypAiu...FllqF.W.xOA.LhhG..mH..R.3...", "z.Vqp...G..q.j.SV0.KF0dH....Ec.4.b..ibc.iNUde.t.k.", "LQ..9n.mt..GhVcKgA..1P.Bp.YbZxXK......vVg..2A.u.Y.", "iQOrx..huqG..4L.D..2oo.c.d.Fi...rFR.wDy.I.U8YgG.6.", "8b.K.Xw.r.h..te6QSoS7.R.Q..G2f.....6...HL3j.Izi...", "7..YC4B..jV4t.7.J.Q1.M.p....x0E9.6gdY..KB6P..jDG..", "T8..WUB9y.cLe7.co..V.2.0H.Ir..jWk.O.h...I5.sRc..Z.", ".L.P.xM.pSK.6.c.RWd......W.58OW..b9.C......yjHSV8.", ".r..x..ZAVgDQJoR...E...n.b45ivvd.....i..y.dnl.o5.K", "..U....0i0A.S..W....Ffw......L.NuPePe0jS...4.g...b", ".b.KJ8.Fu...oQ.d......Xc.A2.V.lyI.Acl...P8.Zvi..E.", "BAR..V...K.2S1V.E...8azPd5Zqsv.ukYd...Kw...k..L.8.", "R..OG.Ly.F1o7....F.8.l.je8..w5Vd.Kvk...TffYaki3..W", "3.d.PVgQ.0Po.M2..f.al.P..U5..S.g.LI..YO..b5.......", "gB.jMw41Fd..R....wXz.P.dK..940.n.A.gf..1.OK.nH.3F0", "..f.EC..lHBc.p0.n.cPj.d..Qz.0L...i.......vN.XxRA.N", "..h..h3El.p.Q.H....de.K...D.m.z.E.X.O.sJwtM3TQ.65p", "vS7..vdnq..d...Wb.A58U.Q...L5d..2IJunr.9fN27pj.guT", "qtXiVshAF.Y...I.4.2Z.5.zD..U.P..hvy..W.Y69RO.vlaQm", "TxwhjN....bFG.r55..q..9..LU.F.ZLE..H.f.QA.ET.oV.x.", "....G.A.WEZi2x.8i.Vsw.40m5.F....U..Q.A2.c4toY.S.LR", "4..X.....cx.f0.OvL.v5S0L.dP...o..lJ.p9.Dr.x..4HJIT", "ka.vt..yx.X..EjWv.l.V...z..Z.o.8l.......8h.4oK8...", "T.me.6..O4K..9W.dNyudgn....L..8.1UuE..l0H..Kk9x.V.", "r...jq.cA..r..k..uIk....E2hEU.l1..Qv.C.I.Q...on..U", "...Fq.W..b.F.6.b.P.YKLAi.Iv..l.U..a.yG5oD.....Xnf.", ".M.f.K4rL..R.gO9.eAdvI..XJy..J.uQa.vgL..Ec7..a.tr.", ".CtD.X6th...6d...Pc.k.g..u.HQ..Ev.v.73Z...9.h.fK..", "NUcJQ...hi.w.YhC.el...f.On...p...yg7..9Z..2s..a.NK", "..APW..9Gb.D....i0...Y...rWfA9..CGL3..m.a...Qk...O", ".ZQ.c.5..cvy.....j.K.O..s...2..l.5.Z9m.W...1f1P...", ".au1......V.HK...S.wT.1.J9YQ.D.0Io..Z.W...yJ...z9.", "f..pqJ.VmigILBI.y.P.f...wf6Acr8H.DE..a....0F.YT.Dp", "..t....AHN..365...8.fbOvtN9.4.h.Q.c..........x.KL.", "Lq.s..b9.U.UjP..d...Y5KNM2REtx....792..y0...b..JeO", ".c.jZS.v.d28..syn4Zka...37OTo.4K....s.1JF......K.x", "...AU..vReAYI.Rjl.v.k.nXTp..Y.ok...h.Qf...b......y", "..2Jht.Q...gzjcH.gi.i.HxQjvo.4K9o.a..k1.Yx....to..", "..u.b.TP3tuGiD.So..L3..R..lVSH8xnX.fa.P.T....t.MqW", "A.CzV..N.....G.V5.....3A6ga..J...ntK...z.KJK.oM.ZM", "BcqD.atk.kY6..Z8..E8..F.5uQxLI.V.fr.N..9DLe...qZ..", "Q.7..wzT........Kb..W.0NpTm.RT..U...KO..p.Oxy.WM.."};
    int inverseWalkSpeed = 54;
    int inverseDriveSpeed = 48;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 40284;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> cars = {36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36};
    vector<int> districts = {35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17};
    vector<string> roads = {"...........................a............s.........", ".....r.........................P..................", "....4..............................h..............", "..............F........................w..........", "..4....l..........................................", ".r.............................................h..", "..................J...............................", "....l...............................x.............", ".........................................n.....o..", "....................l.....p.......................", "............f................A....................", ".................a............................b...", "..........f......B................................", "........................6............c............", "...F...........2..................................", "..............2.............................N.....", "............................................f....j", "...........aB.....................................", "......J.............................I.............", "..............................Q...M...............", ".........l...................................f....", ".................................X........w.......", "............................b...g.................", ".....................................n.l..........", ".............6.............................j......", ".............................f...................H", ".........p......................................g.", "a................................T................", "......................b...................x.......", "..........A..............f........................", "...................Q..................h...........", ".P..............................................V.", "......................g............U..............", ".....................X.....T......................", "...................M.....................l........", "..h.............................U.................", ".......x..........I...............................", ".............c.........n..........................", "..............................h...................", "...w...................l..........................", "s..........................................j......", "........n.........................l...............", ".....................w......x.....................", "........................j...............j.........", "...............Nf.................................", "....................f.........................3...", "...........b.................................3....", ".....h..o.........................................", "..........................g....V..................", "................j........H........................"};
    int inverseWalkSpeed = 95;
    int inverseDriveSpeed = 92;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 3424750;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> cars = {36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36, 36};
    vector<int> districts = {35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17, 35, 17};
    vector<string> roads = {"...........Z.....Z................................", ".......Z..........Z...............................", "..............................................Z.Z.", "..........Z..............................Z........", "............Z....................Z................", "...............Z..................Z...............", "...................Z..............................", ".Z....................Z...........................", "...........................Z................Z.....", "............Z.....................Z...............", "...Z............................................Z.", "Z............................................Z....", "....Z....Z........................................", ".....................................Z...Z........", ".................................Z.Z..............", ".....Z.........................Z..................", ".............................ZZ...................", "Z...................Z.............................", ".Z.........................................Z......", "......Z.......................................Z...", ".................Z..............Z.................", "........................................Z.Z.......", ".......Z..................Z.......................", ".......................................Z.........Z", "......................................Z.Z.........", "...................................Z......Z.......", "......................Z.......Z...................", "........Z.......................Z.................", ".......................................Z....Z.....", "................Z...................Z.............", "................Z.........Z.......................", "...............Z...............................Z..", "....................Z......Z......................", "....Z.........Z...................................", ".....Z...Z........................................", "..............Z..........Z........................", ".............................Z.......Z............", ".............Z......................Z.............", "........................Z.........................", ".......................Z....Z.....................", ".....................Z..Z.........................", "...Z.........Z....................................", ".....................Z...Z........................", "..................Z..........................Z....", "........Z...................Z.....................", "...........Z...............................Z......", "..Z................Z..............................", "...............................Z.................Z", "..Z.......Z.......................................", ".......................Z.......................Z.."};
    int inverseWalkSpeed = 26;
    int inverseDriveSpeed = 3;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1481738;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> cars = {12, 14, 19, 3, 15, 47, 45, 35, 46, 10, 8, 21, 17, 49, 18, 44, 42, 1, 39, 4, 26, 36, 0, 27, 25, 41, 29, 24, 32, 9, 6, 16, 5, 40, 31, 13, 28, 7, 37, 2, 22, 30, 43, 20, 23, 34, 33, 48, 11, 38};
    vector<int> districts = {6, 0, 6, 19, 6, 49, 6, 15, 6, 23, 6, 40, 6, 34, 6, 11, 6, 7, 6, 49, 6, 11, 6, 24, 6, 27, 6, 3, 6, 23, 6, 39, 6, 35, 6, 48, 6, 27, 6, 25, 6, 29, 6, 28, 6, 11, 6, 0, 6, 46};
    vector<string> roads = {".6vvouwi267sf7rktbgpjc3qtxmdrd8nshnmyiigtkki4b6he8", "6.yxrAqc5a3sbfnkwh9lqa8xsxo6l93rnjmjBbpgoqppbg6n7c", "vy.66oEAuoCgsvsi3CCvpIsuge9DBsC7Bfgq2CsjBheqxDCgAn", "vx6.8uywtoB9oxme2EyptHrza79AwpBavdbl8ywgvliuyFBjxn", "or68.mzumhvemopd5vvqkAkqff2wxmv1w8cl9wndxc9lqxvatf", "uAoum.TKuqBBDnKyrsJKaEr7CCoHPCDkQryFpKcwQbebruzfGo", "wqEyzT.dtutngEalzIh8LzvTnsxm4isA3smdGfMn2HELBHxDiv", "icAwuKd.gifo7rehwu3bAljIotr887eualkbD2BgbywAotju4k", "25utmutg.48pcaohreenkd2rqukcoa8lpfkjxgkdqkjk7e7hc6", "6aoohqui4.dmdanemghmhi3onqfgpbegqagirjharfeh9hdcf1", "73CBvBtf8d.wgesoAfcpr6axxBs7oe0uqnrnFeqkrsrqad3paf", "ssg9eBnopmw.hwc7cDqfxDpE05ctmiwglc4ciqzblqnywExnpl", "fbsomDg7cdgh.nbaor99umeChnjcc1fmddc6v9v8droulrin8e", "7fvxonEraaewn.ypu6oxcg8ixAnlzlgnAkrtyralBghb37bfma", "rnsmpKaeonscby.boDi3DypLchmm9drq8ic4vhFd8yvDwDuuio", "kkiedylhheo7apb.evkcsvhz8camjboei628lku3jmjsowpiie", "tw325rzwrmAcouoe.CyqqGqwca7AxpA7xccm6ztgxifrwDAgxl", "bhCEvsIuegfDr6DvC.rChddlEHunDpguEryyFterFnog61bmph", "g9CyvJh3ehcq9oikyr.fzhhGrws4c8avemmfF1zhfxwzlqfu1j", "plvpqK8bnmpf9x3cqCf.DwoLfkoj6bor5je4ydEe5ywDvBsvfn", "jqptkaLAkhrxucDsqhzD.th7yzkxHtsiIltyrB3pI7a0gjo9xf", "caIHAEzldi6DmgyvGdhwt.fzDIycul6zwtxuLjrrxwwscc5ugk", "38srkrvj23ape8phqdhohf.oquifqcbjsdkkvjhdthgg6d9ef4", "qxuzq7TIroxECiLzwlGL7zo.FGrEPAyoPsAGvI7wQdg7mnugEn", "tsgafCnoqnx0hxc8cErfyDqF.4dumjxgld5cjrAclrozxEyoqm", "xxe7fCstuqB5nAhcaHwkzIuG4.ezroBgqgahfwCgqroABIDpvq", "mo992oxrkfscjnma7usokyirde.tujt3t5ajctnaud9lovsaqd", "d6DAwHm8cg7tclmmAn4jxcfEuzt.ha6wjnpiG6wjkwvwhlbt3i", "rlBwxP48opomcz9jxDc6HuqPmruh.dnx1okaEaIj2DBHwCsAdr", "d9spmCi7abei1ldbpp8btlcAjojad.dmedd8w9t8fqotjpgm7c", "83CBvDse8e0wfgroAgaos6byxBt6nd.upnrmFdrkqtsrcf4q9f", "nr7a1kAulgugmnqe7uvrizjogg3wxmu.x8dmawldxa7jovu8te", "snBvwQ3apqqldA8ixEe5IwsPlqtj1epx.pkaEcJj0EBIyEtAfr", "hjfd8rslfancdki6crmjltdsdg5nodn8p.7einn4pfclkrnbk9", "nmgbcymkkgr4crc2cymetxkA5aapkdrdk7.9jmv6kmjtrysjlg", "mjqllFdbjinc6t48myf4yukGchjia8mmae9.teA9atrzrypqej", "yB289pGDxrFivyvl6FFyrLvvjfcGEwFaEijt.FumEjgsAGFiDq", "ibCywKf2gjeq9rhkzt1dBjjIrwt6a9dwcnmeF.BidzxAnshw3l", "ipswncMBkhqzvaFutezE3rh7ACnwItrlJnvAuB.qJbd1fgncxg", "ggjgdwngdakb8ld3grheprdwcgajj8kdj469miq.kkhpkslgga", "toBvxQ2bqrrldB8jxFf5IxtQlquk2fqx0pkaEdJk.ECIyEuBgs", "kqhlcbHykfsqrgyminxy7whdrrdwDqtaEfmtjzbkE.28joq3vd", "kpei9eEwjernohvjfowwawggoo9vBos7BcjrgxdhC2.bkpq1uc", "ipqulbLAkhqyubDsrgzD0sg7zAlwHtrjIltzsA1pI8b.finawf", "4bxyqrBo79awl3wow6lvgc6mxBohwjcoykrrAnfkyjkf.67hja", "bgDFxuHtehdEr7DwD1qBjcdnEIvlCpfvEryyGsgsEopi6.anoh", "66CBvzxj7d3xibupAbfso59uyDsbsg4utnspFhnluqqn7a.oee", "hngjafDuhcpnnfuigmuv9uegopatAmq8AbjqiwcgB31ahno.sa", "e7AxtGi4cfap8miixp1fxgfEqvq3d79tfkleD3xggvuwjoes.h", "8cnnfovk61fleaoelhjnfk4nmqdircfer9gjqlgasdcfaheah."};
    int inverseWalkSpeed = 87;
    int inverseDriveSpeed = 20;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 56208;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> cars = {12, 14, 19, 3, 15, 47, 45, 35, 46, 10, 8, 21, 17, 49, 18, 44, 42, 1, 39, 4, 26, 36, 0, 27, 25, 41, 29, 24, 32, 9, 6, 16, 5, 40, 31, 13, 28, 7, 37, 2, 22, 30, 43, 20, 23, 34, 33, 48, 11, 38};
    vector<int> districts = {6, 0, 6, 19, 6, 49, 6, 15, 6, 23, 6, 40, 6, 34, 6, 11, 6, 7, 6, 49, 6, 11, 6, 24, 6, 27, 6, 3, 6, 23, 6, 39, 6, 35, 6, 48, 6, 27, 6, 25, 6, 29, 6, 28, 6, 11, 6, 0, 6, 46};
    vector<string> roads = {"........................................p.........", "..m.o....8........q....6..........................", ".m................................................", "...................w..............................", ".o................................................", "..........................4........h...e..........", "...........d......................................", "..............tf..................................", "..........E.......................................", ".8................................................", "........E...a.........x....................w.H..x.", "......d..................................q....z...", "..........a..................9....................", "..............8......h.....D.........m.......C....", ".......t.....8......j...p.........................", ".......f..........................................", ".....................................u............", "............................................e.....", ".q................................................", "...w...................v..........................", "..............j...................................", ".............h...........6........................", "..........x.......................................", ".6.................v......................2.......", "..............p................................c..", ".....................6......................e....r", ".....4............................................", ".............D................E..vj.......h.......", "....................................z.....c.......", "............9.....................................", "...........................E..................f...", ".................................c................", "..............................................E...", "...........................v...c........s.........", "...........................j......................", ".....h............................................", "............................z.....................", ".............m..u.................................", ".......................................e..........", ".....e................................e......A....", "p................................s................", "...........q......................................", ".......................2...hc.....................", "..........w.......................................", ".................e.......e........................", "..........H..C.........................A..........", "...........z..................f.E.................", "........................c.........................", "..........x.......................................", ".........................r........................"};
    int inverseWalkSpeed = 80;
    int inverseDriveSpeed = 71;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 590027;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> cars = {12, 14, 19, 3, 15, 47, 45, 35, 46, 10, 8, 21, 17, 49, 18, 44, 42, 1, 39, 4, 26, 36, 0, 27, 25, 41, 29, 24, 32, 9, 6, 16, 5, 40, 31, 13, 28, 7, 37, 2, 22, 30, 43, 20, 23, 34, 33, 48, 11, 38};
    vector<int> districts = {6, 0, 6, 19, 6, 49, 6, 15, 6, 23, 6, 40, 6, 34, 6, 11, 6, 7, 6, 49, 6, 11, 6, 24, 6, 27, 6, 3, 6, 23, 6, 39, 6, 35, 6, 48, 6, 27, 6, 25, 6, 29, 6, 28, 6, 11, 6, 0, 6, 46};
    vector<string> roads = {"........................y.y.......................", "...........R...............................9......", ".............................k.M..................", ".....................................D...k........", "...........K......L...............................", ".................................8.v..............", "........................................2.I.......", "...............3...............E..................", ".....................D.........................B..", "...................J.....Y........................", "....................d..................7..........", ".R..K.............................................", ".......................................c......b...", "...............................................l.T", ".......................H.................e........", ".......3..................................8.......", ".................8.....Z..........................", "................8.....H...........................", "....L................2............................", ".........J................x.......................", "..........d...........................E...........", "........D.........2...............................", ".................H......................x.........", "..............H.Z.................................", "y.............................................f...", ".........Y.......................................K", "y..................x..............................", "......................................b...........", ".............................b...E................", "..k.........................b.....................", "................................J...............z.", "..M....E..........................................", "..............................J......N............", ".....8......................E.....................", ".............................................M....", ".....v.....................................A......", "............................................i...v.", "...D............................N.................", "....................E......b......................", "..........7.c.....................................", "......2...............x...........................", "...k..........e...................................", "......I........8..................................", ".9.................................A..............", "....................................i........v....", "..................................M.........v.....", "............b...........f.........................", "........B....l....................................", "..............................z.....v.............", ".............T...........K........................"};
    int inverseWalkSpeed = 57;
    int inverseDriveSpeed = 20;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 648403;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> cars = {12, 14, 19, 3, 15, 47, 45, 35, 46, 10, 8, 21, 17, 49, 18, 44, 42, 1, 39, 4, 26, 36, 0, 27, 25, 41, 29, 24, 32, 9, 6, 16, 5, 40, 31, 13, 28, 7, 37, 2, 22, 30, 43, 20, 23, 34, 33, 48, 11, 38};
    vector<int> districts = {6, 0, 6, 19, 6, 49, 6, 15, 6, 23, 6, 40, 6, 34, 6, 11, 6, 7, 6, 49, 6, 11, 6, 24, 6, 27, 6, 3, 6, 23, 6, 39, 6, 35, 6, 48, 6, 27, 6, 25, 6, 29, 6, 28, 6, 11, 6, 0, 6, 46};
    vector<string> roads = {"...........................................Z.....Z", "........Z......................................Z..", "................Z................Z................", "..............ZZ..................................", ".......Z.................................Z........", ".................Z...........Z....................", ".................Z..............................Z.", "....Z......................................Z......", ".Z.....................................Z..........", "..................Z.....................Z.........", "...........Z..Z...................................", "..........Z..........................Z............", ".............Z......Z.............................", "............Z...................Z.................", "...Z......Z.......................................", "...Z.........................................Z....", "..Z.................................Z.............", ".....ZZ...........................................", ".........Z..............Z.........................", "..................................Z..Z............", "............Z................Z....................", "............................................Z.Z...", "...........................ZZ.....................", "...............................Z..........Z.......", "..................Z......Z........................", "........................Z.....Z...................", "..............................Z................Z..", "......................Z...........................", "......................Z..........Z................", ".....Z..............Z.............................", ".........................ZZ.......................", ".......................Z....................Z.....", ".............Z............................Z.......", "..Z.........................Z.....................", "...................Z..............................", ".............................................ZZ...", "................Z.....................Z...........", "...........Z.......Z..............................", "....................................Z............Z", "........Z................................Z........", ".........Z......................................Z.", "....Z..................................Z..........", ".......................Z........Z.................", "Z......Z..........................................", ".....................Z.........Z..................", "...............Z...................Z..............", ".....................Z.............Z..............", ".Z........................Z.......................", "......Z.................................Z.........", "Z.....................................Z..........."};
    int inverseWalkSpeed = 87;
    int inverseDriveSpeed = 24;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1671768;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> cars = {12, 14, 19, 3, 15, 47, 45, 35, 46, 10, 8, 21, 17, 49, 18, 44, 42, 1, 39, 4, 26, 36, 0, 27, 25, 41, 29, 24, 32, 9, 6, 16, 5, 40, 31, 13, 28, 7, 37, 2, 22, 30, 43, 20, 23, 34, 33, 48, 11, 38};
    vector<int> districts = {6, 0, 6, 19, 6, 49, 6, 15, 6, 23, 6, 40, 6, 34, 6, 11, 6, 7, 6, 49, 6, 11, 6, 24, 6, 27, 6, 3, 6, 23, 6, 39, 6, 35, 6, 48, 6, 27, 6, 25, 6, 29, 6, 28, 6, 11, 6, 0, 6, 46};
    vector<string> roads = {"..l...e...amf.....f......65..49d6era....r...q...g.", "....tjo..trFc.....6......n.....yt...r0..57Ik3.....", "l..a.78.n..ns..br..7.e.7o...i..nq....or.or..r.bns.", "..a.5.1...m.m...j4...a.6...hda...3.fjohr...b....n.", ".t.5..6j.3mbqrz.l.mj...7g69n..l..9.a....w.f...f..g", ".j7...e.v.zvr..h.......fxk.1qp..v....j.li..4.....e", "eo816e....p..lt..5.e...4k7.g.ck.h2g.l.jrq.j9.f...c", "....j...6mG.JD.....f..8.....csEn...s..B..K8......w", "..n..v.6.kD...P.Dq...b6g3.rx.qD..n.....N.K2r..vu..", ".t..3..mk..c.s.6........i5.q..j........x......g...", "ar.mmzpGD......l..lD5..t.h...d....B.3......vu..9hl", "mFn.bv...c..B.Lgw..o.8.f.h.x4hw9.kae.....E6.J...Dt", "fcsmqr.J...B....6.9.a....jg..k5.km.qgdefi..p.q..1.", "....r.lD.s.....mn.a..vzo....z.l.vi...........xb..b", "....z.t.P..L...t...A..Iy.tpm.....r.D...1.a........", "..b..h...6lg.mt...h......3.j.8h.e.....grq.kcsc.cnb", "..rjl...D..w6n......3sx..f.su....k.j9.7l..B....a..", "...4..5.q............f.a.65..b...3..j...lj..n.....", "f6..m.....l.9a.h....fr....chv..r.....7...7.g..8.85", "..7.j.ef..Do..A.....z.....mej.....g..v..u...y..u..", "..........5.a...3.fz.q..z.b.s..j.k.f....rf.q.g.7..", "..ea....b..8.v..sfr.q.4.adg...sb..7gpy...y....k...", ".......86....zI.x....4.a6.ks2jx..h.....GFD4....nC.", "..767f4.g.tf.oy..a....a.hbdh..pgl6...t.w.u...h..u.", "..o.gxk.3i..........za6h..qz......6.x.xN.J..N...I.", "6n..6k7..5hhj.t3f6...d.b...m.....8l...b.rmm.....k.", "5...9...r...g.p..5cmbgkdq....6.e.8od.lb..ipf..8..8", "...hn1g.xq.x..mjs.he..shzm...r.w.dtxyivkgox6..ctqe", "..id.q.c...4.z..u.vjs.2.......u....fq.....6.Gd.k..", "4..a.pcsq.dhk..8.b....j...6r..e..dn6..8u..n.....lf", "9...l.kEDj.w5l.h.....sxp....ue.nf.A..g.j..Bn.....c", "dyn....n...9......r.jb.g..ew..n...i4g..D.....2.b..", "6tq..vh.....kv.e.......l......f..j.5......qqx..3..", "e..39.2.n..kmir.k3..k.h6.88d.d..j.j..m.on.m.p..g.9", "r.....g...Ba.......g.7..6lot.nAi.j..x..IG..m......", "a..fa..s...eq.D.j...fg....dxf6.45...b.c.B.l.B...r.", ".r.j..l...3.g...9j...p..x..yq..g..xb...vx...vdl5.k", ".0oo.j......d.....7v.y.t..li..g..m....p2.8I...e..c", "..rh..jB....e..g7.......xbbv.8.....c.p..t...s.i4g.", "...r.lr.Nx..f.1rl.....GwN..k.ujD.oI.v2..3...0.htdf", "r5o.wiq.....i..q.l.ur.F..r.g.....nGBx.t3.d.....u..", ".7r....KK..E..a..j7.fyDuJmio.........8..d...a..l.d", ".I..f.j82..6...kB.....4..mpx6nB.qm.l.I........tr..", ".k.b.49.r.v.p..c..g.q.....f6..n.q.m.........n...pb", "q3r.......uJ...s.n.y....N...G...xp.Bv.s0.a.n.Bh...", "......f.....qx.c....g..h....d..2....d.......B.....", "..b.f...vg...b....8..k....8c........leih..t.h...g.", "..n.....u.9....ca..u7.n....tk..b3g..5.4tulr.....jf", "g.sn......hD1..n..8...CuIk.q.l.....r..gd...p..gj.d", "....gecw..lt.b.b..5.......8e.fc..9..kc.f.d.b...fd."};
    int inverseWalkSpeed = 58;
    int inverseDriveSpeed = 17;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 26688;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> cars = {12, 14, 19, 3, 15, 47, 45, 35, 46, 10, 8, 21, 17, 49, 18, 44, 42, 1, 39, 4, 26, 36, 0, 27, 25, 41, 29, 24, 32, 9, 6, 16, 5, 40, 31, 13, 28, 7, 37, 2, 22, 30, 43, 20, 23, 34, 33, 48, 11, 38};
    vector<int> districts = {6, 0, 6, 19, 6, 49, 6, 15, 6, 23, 6, 40, 6, 34, 6, 11, 6, 7, 6, 49, 6, 11, 6, 24, 6, 27, 6, 3, 6, 23, 6, 39, 6, 35, 6, 48, 6, 27, 6, 25, 6, 29, 6, 28, 6, 11, 6, 0, 6, 46};
    vector<string> roads = {"..cA5W.S.n..5T...f..TFeo.tl7khqrZ.W....W....m.03j2", "....o.wGE.P5Zi4q..F.oPp.o....oSH.1NWT.V.qm....7Z..", "c..KsCyI5..dpTws..5c5w.Tgo.fJy.kGsG..M.lNZ...rnX19", "A.K.VZD...Et..K.nR....6.cACc..5wW.L.iw.w.X..2c.rGE", "5osV..tDCfA4..mVUxT..U6.8...6Q.K.Kum6L9.LQw.....zd", "W.CZ..q.ppFo2.6..p.m.h.g.k..r.e.6K3..x.eCc.fd.hL.Q", ".wyDtq.....tp.0m.vR.By..UtC7..Y.g..tv.uz1.kF.s...Y", "SGI.D....5MqC.Yj..96mCIe....H5.EaPbIr6.I..D01j4Wa.", ".E5.Cp...R..Uou..CaL..p7Ihuek...9H8..7s.P..Ky.z.U3", "n...fp.5R.j6AWO...5.BGJK...p.yN.nNVJ.lN.....J.N.I.", ".P.EAF.M.j.E..3..2.M....T.Z.kd.5.f.W4........LoV..", ".5dt4otq.6E.ISo.ue.j9b.g..8.Ix...lz.5....Uy.5.WT.M", "5Zp..2pCUA.I..2....5xd..k.Q..jr.I0UUtu6.6.cQ..KHF9", "TiT.....oW.S..S.3.0.NJM5..g.Q4nEC...fg..5.4..8CCz.", ".4wKm60YuO3o2S..6P.53ggl.jT....F.9Q..B.eC.2n8.l.L.", ".qs.V.mj........e.zs9yyPz1.4...uLI.0.o.UU..3qKh...", "...nU......u.36e..A6h...jQ..hpQR.32.Z.VR1Az..LXBcU", "f..Rxpv.C.2e..P...C...w4gC..Y..aYh......0.6Y7.....", ".F5.T.R9a5...0.zAC..fYW..8.7.zCU...MVQu.sdHGN0Q.Ue", "..c..m.6L.Mj5.5s6...8XQ..5o...5El.K7.t1aBa.7...rak", "To5...Bm.B.9xN39h.f8...4.O.P.J...S.D.vX.I...qD.BTQ", "FPw.UhyC.G.bdJgy..YX..Cc.R.T.xa5.qK..L.S.oQt.dPn.p", "ep.66..IpJ...Mgy.wWQ.C.P2A..nqu1uTU..yKN..FTCIyJ.P", "o.T..g.e7K.g.5lP.4..4cP.o...3w.y...E.Q....3..5.d..", ".ogc8.U.I.T.k..zjg....2o..b01pj.kJ.B..I...7..7..D.", "t.oA.kt.h.....j1QC85ORA...3..cb.Eo.x4.VtiAW.tpOX.X", "l..C..C.u.Z8QgT....o....b3.H2r..W..E.....5.7.nl24.", "7.fc..7.ep.....4..7.PT..0.H.k.La.w..l..vr.J.Cd..ED", "k.J.6r.Hk.kI.Q..hY....n31.2k.OS.KbTv.C.u.EfMWkd.O7", "hoy.Q..5.ydxj4..p.z.Jxqwpcr.O....8..dT..1R.4kK..RU", "qS.5.eY..N..rn..Q.C5.au.jb.LS..sy87.JyXO.o.l8X.Yn9", "rHkwK..E..5..EFuRaUE.51y...a..s.EHx.n...sJaR..wLM.", "Z.GW.6ga9n..IC.L.Y.l..u.kEW.K.yE.U...VWw..Bm0..0.w", ".1s.KK.PHNfl0.9I3h..SqT.Jo.wb88HU.Ld...TF...V.G...", "WNGLu3.b8V.zU.Q.2..K.KU.....T.7x.L..p.73.o...PSLGp", ".W..m.tI.JW.U..0..M7D..EBxE.v....d...Kx.cEzZo.q..m", ".T.i6.vr..45tf..Z.V......4.l.dJn..p..Y.Q.I..Nm.BZq", "..MwLx.67l..ugBo..QtvLyQ....CTy.V..KY..N.8.uV.f.Z.", ".V..9.u.sN..6...V.u1X.K.IV....X.W.7x...Zl..5Do.mw.", "W.lw.ezI......eUR..a.SN..t.vu.O.wT3.QNZ..6X.kU..5e", ".qN.LC1.P...65CU10sBI....i.r.1.s.F.c..l..KIW9b3kU.", ".mZXQc.....U....A.da.o...A5.ERoJ..oEI8.6K.E...GQ.u", "....w.kD...yc42.z6H..QF37W.Jf..aB..z...XIE....4q.x", ".....fF0K...Q.n3.YG7.tT...7.M4lRm..Z.u5.W....v...G", "m..2.d.1yJ.5..8q.7N.q.C..t.CWk8.0V.oNVDk9....1...h", "..rc..sj..L..8.KL.0.DdI57pndkKX...P.m.oUb..v1.adiF", "07n..h.4zNoWKClhX.Q..Py..Ol.d..w.GSq.f..3G4..a.Uyd", "3ZXr.L.W..VTHC..B..rBnJd.X2...YL0.L.B.m.kQq..dU.Z.", "j.1Gz..aUI..FzL.c.UaT...D.4EORnM..G.ZZw5U....iyZ..", "2.9EdQY.3..M9...U.ekQpP..X.D7U9.w.pmq..e.uxGhFd..."};
    int inverseWalkSpeed = 89;
    int inverseDriveSpeed = 45;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 29961;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> cars = {17, 32, 10, 27, 15, 4, 6, 31, 7, 11, 25, 34, 16, 26, 41, 13, 21, 40, 47, 36, 39, 43, 35, 33, 38, 42, 22, 46, 45, 3, 49, 12, 29, 48, 1, 20, 5, 19, 30, 28, 23, 37, 9, 2, 0, 44, 8, 24, 14, 18};
    vector<int> districts = {37, 39, 27, 40, 7, 46, 3, 27, 44, 24, 30, 39, 1, 18, 4, 9, 18, 20, 40, 22, 8, 29, 34, 37, 25, 17, 14, 30, 12, 48, 20, 25, 21, 31, 47, 41, 30, 2, 28, 34, 5, 27, 33, 4, 8, 45, 31, 33, 29, 41};
    vector<string> roads = {".ukrpim84Au7owkzAaojnjlhvmgzahlesp6nxxikC4Aiy075ml", "u.AbghBvsscpc4t68khj6hrj0fqtlhCfhgwur2kw8q6o5utzsb", "kA.rEi1bposqoF7HJrkAtiFyCBAmqi0onEd8lDgFKhHcGlsp9y", "rbr.o9rprg2p2gjhjl6o88xocmuhl9se5pqjfcbBkmhehsuxhh", "pgEo.oGvlFrioezgges5gpc7g2dGfnFfu0uBEiqhiohuepkrz6", "ihi9o.jfkibi6mboqg5mb0uljmqif0j99pgcgk1wrdp5njnoah", "mB1rGj.drotspG8IKtlCvkHADDClsk1qoGf8lEhHLkJdHouraz", "8vbpvfd.durelycBDgkpogtnwrosfecgou1frydtE6CcA9gdep", "4sprlkrd.Cu3ounxy7qfmlgdtibC7ipdukbrAvkfA7ylv336pi", "AsogFiouC.eBgxixzzcEohNDsDJ2ykpsaGwf2siPzvxhxBGGfy", "ucs2rbtrue.s5hkikp7raaArdpxgocth4rtkeddEkpigivxAik", "7pqpiise3Bs.mqntu3ocjje9qf9B3gqashdqzsifw7uks649pe", "oco2o6plog5m.hgjlj4n75wmelshj6pc5ongfe8zljjbiprufg", "w4FgemGyuxhqh.y23mmialqj3eqymlGhmfzyw4ov5t3s0xvBxb", "kt7jzb8cnikngy.ABncwmbCuuwxgmb8jgze3fv8DCfA4zlrp2s", "z6HhgoIBxxitj2A.1poldotm4htzpoIknhCAx4qy2w0u1AyEyf", "A8JjgqKDyzkul3B1.qqleptn6htBqpKmphDCz6sy1x1w2ByFAf", "akrlegtg7zp3jmnpq.m8fhd6mb9z0fs7pdgqxohfs9qkna8eoa", "ohk6s5lkqc7o4mcoqm.rc4zqiqwdl7mf3tmcbj6Cqjo8nqtval", "jjAo5mCpfErcniwll8r.gn81j37F9lBct5pyDlocnimrjjelw7", "n6t8gbvomoaj7amdefcg.apg7enqfav8dgpon9dtfjdhcootm9", "jhi8p0kglhaj5lboph4na.ulimrhg1ka8phcfj2xqeo6nkopah", "lrFxcuHtgNAewqCttdz8pu.8sb4NesGkCbsFLuv4vmuyrkdkDg", "hjyo7lAndDr9mjumn6q1gl8.k56E7kzbt7nxCmmcognqkgcjv7", "v0CcgjDwtsdqe3u46mij7isk.grumiDgihxvs1lx7r5p4wvAtc", "mfBm2mDriDpflewhhbq3emb5g.bEclCcs2ryBiogjlirfmiow4", "gqAudqCobJx9sqxtt9w7nr46rb.JaoBgzcnAHtr5vhuurf8gye", "ztmhGilsC2gBhygzBzdFqhNEuEJ.yknsbGvd1uhPBuzgzBFFdz", "alqlffsf7yo3jmmpq0l9fge7mcay.er6pefpwoggs8qjoa8doa", "hhi9n0keikcg6lbopf7la1skiloke.k8aogdhk2vqco6nilnbg", "lC0sFj1cpptqpG8IKsmBvkGzDCBnrk.qpFdanEhGLiJdHmtpbz", "efoef9qgdshachjkm7fc8akbgcgs68q.ifhlqibmnalejffjj8", "shn5u9ooua4s5mgnpp3td8Ctiszbpapi.uqf9iaFpnncnuxzdn", "pgEp0pGukGrhofzhhdt5gpb7h2cGeoFfu.uBEjqgjniufokrz7", "6wdqugf1bwtdnzeCDgmpphsnxrnvfgdhqu.htzfsF6DeA8fbgp", "nu8jBc8frfkqgy3ACqcyocFxvyAdpdalfBh.cwaGDjB6Aout1u", "xrlfEglrA2ezfwfxzxbDnfLCsBH1whnq9Etc.sfNztxexzDEcx", "x2DcikEyvsdse4v46ojl9jum1ituokEiijzws.mz6t4q4yxCue", "ikgbq1hdkidi8o8qsh6od2vmlorhg2hbaqfafm.xtdr3pjno8j", "kwFBhwHtfPEfzvDyyfCctx4cxg5PgvGmFgsGNzx.AnzAwjciEk", "C8KkirLEAzkwl5C21sqnfqvo7jvBsqLnpjFDz6tA.z1x3CAGBh", "4qhmodk67vp7jtfwx9jijemgrlhu8ciann6jttdnz.xdu5aahi", "A6HhhpJCyxiuj3A01qomdoun5iuzqoJlniDBx4rz1x.v2BzFzf", "ioceu5dclhgkbs4uwk8rh6yqprugj6decue6eq3Axdv.tkoo4n", "y5GhenHAvxisi0z12nnjcnrk4frzonHjnfAAx4pw3u2t.ywCyd", "0ulspjo93Bv6pxlABaqjokkgwmfBaimfuo8ozyjjC5Bky.64nl", "7tsuknug3Gx4rvryy8teoodcvi8F8ltfxkfuDxncAazow6.6ti", "5zpxrord6GA9uBpEFevltpkjAogFdnpjzrbtECoiGaFoC46.sp", "ms9hzaaepfipfx2yAoawmaDvtwydobbjdzg1cu8EBhz4ynts.s", "lbyh6hzpiykegbsffal79hg7c4ezagz8n7puxejkhifndlips."};
    int inverseWalkSpeed = 96;
    int inverseDriveSpeed = 83;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 94484;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> cars = {17, 32, 10, 27, 15, 4, 6, 31, 7, 11, 25, 34, 16, 26, 41, 13, 21, 40, 47, 36, 39, 43, 35, 33, 38, 42, 22, 46, 45, 3, 49, 12, 29, 48, 1, 20, 5, 19, 30, 28, 23, 37, 9, 2, 0, 44, 8, 24, 14, 18};
    vector<int> districts = {37, 39, 27, 40, 7, 46, 3, 27, 44, 24, 30, 39, 1, 18, 4, 9, 18, 20, 40, 22, 8, 29, 34, 37, 25, 17, 14, 30, 12, 48, 20, 25, 21, 31, 47, 41, 30, 2, 28, 34, 5, 27, 33, 4, 8, 45, 31, 33, 29, 41};
    vector<string> roads = {".....9............................................", ".........................i........................", "....B....w.................................F....x.", "......9....................3......................", "..B.......y.......................................", "9......k....................h.....j.........n.....", "...9........................q........7............", ".....k......1...........g.v.......................", ".......................................m.s........", "..w...............................................", "....y.............................................", "................................6.........D.......", ".......1..........................................", "............................m8....................", ".....................8.........k..................", "....................j...6........j................", ".......................8..........................", "........................................p.........", "................................j.................", ".......................................a..........", "...............j..................................", "..............8...................................", "..............................n.........s.........", "................8............................r....", ".......g.......6..................................", ".i..........................a.r...................", ".......v..........................................", "...3..............................................", ".....hq......m...........a......o...............q.", ".............8........................l...........", "......................n..r........................", "..............k...............................a...", "...........6......j.........o......G..............", "...............j..................................", ".....j..............................u.............", "................................G.............o...", "..................................u...............", "......7...........................................", ".............................l....................", "........m..........a..............................", ".................p....s...........................", "........s......................................dg.", "...........D......................................", "..F...............................................", ".....n............................................", ".......................r.......................C..", "...............................a...o..............", ".........................................d...C...n", "..x.........................q............g........", "...............................................n.."};
    int inverseWalkSpeed = 25;
    int inverseDriveSpeed = 24;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 125963;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> cars = {17, 32, 10, 27, 15, 4, 6, 31, 7, 11, 25, 34, 16, 26, 41, 13, 21, 40, 47, 36, 39, 43, 35, 33, 38, 42, 22, 46, 45, 3, 49, 12, 29, 48, 1, 20, 5, 19, 30, 28, 23, 37, 9, 2, 0, 44, 8, 24, 14, 18};
    vector<int> districts = {37, 39, 27, 40, 7, 46, 3, 27, 44, 24, 30, 39, 1, 18, 4, 9, 18, 20, 40, 22, 8, 29, 34, 37, 25, 17, 14, 30, 12, 48, 20, 25, 21, 31, 47, 41, 30, 2, 28, 34, 5, 27, 33, 4, 8, 45, 31, 33, 29, 41};
    vector<string> roads = {"....................P...............B.............", "...T.................j............................", "......................D...........................", ".T.......................................8........", ".................0.............................b..", ".............................j..E.................", ".............................j....x...............", "..........d................................n......", "..............................F.v.................", "..................y....................c..........", ".......d....P.....................................", ".....................LC...........................", "..........P....g..................................", "........................n...I.....................", "................................................nN", "............g...................................E.", "...................2..........z...................", "....0..................f..........................", ".........y..........1.............................", "................2.......B.........................", "P.................1...............................", ".j.........L......................................", "..D........C......................................", ".................f.................2..............", ".............n.....B..............................", "..........................................f...3...", ".......................................sb.........", ".................................Rn...............", ".............I.................................r..", ".....jj...........................................", "........F.......z.................................", "........................................H....d....", ".....E..v.........................................", "...........................R.............P........", "......x....................n......................", ".......................2............N.............", "B..................................N..............", "...........................................D9.....", "..........................................w.......", ".........c................s.......................", "..........................b....H..................", "...8.............................P................", ".........................f............w...........", ".......n.............................D............", ".....................................9........2...", "...............................d.................z", ".........................3..................2.....", "....b.......................r.....................", "..............nE..................................", "..............N..............................z...."};
    int inverseWalkSpeed = 83;
    int inverseDriveSpeed = 50;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1067933;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> cars = {17, 32, 10, 27, 15, 4, 6, 31, 7, 11, 25, 34, 16, 26, 41, 13, 21, 40, 47, 36, 39, 43, 35, 33, 38, 42, 22, 46, 45, 3, 49, 12, 29, 48, 1, 20, 5, 19, 30, 28, 23, 37, 9, 2, 0, 44, 8, 24, 14, 18};
    vector<int> districts = {37, 39, 27, 40, 7, 46, 3, 27, 44, 24, 30, 39, 1, 18, 4, 9, 18, 20, 40, 22, 8, 29, 34, 37, 25, 17, 14, 30, 12, 48, 20, 25, 21, 31, 47, 41, 30, 2, 28, 34, 5, 27, 33, 4, 8, 45, 31, 33, 29, 41};
    vector<string> roads = {"...........Z.........................Z............", "..ZZ..............................................", ".Z................................................", ".Z.......................................Z........", "........Z...Z.....................................", "......Z......Z....................................", ".....Z.......................Z....................", "...............Z...................Z..............", "....Z...............................Z.............", ".......................Z...Z......................", "...............Z....Z.............................", "Z.....................................Z...........", "....Z.............Z...............................", ".....Z..................Z.........................", ".....................Z....................Z.......", ".......Z..Z.......................................", "..........................Z............Z..........", "............................Z..Z..................", "............Z...............................Z.....", "...................................Z............Z.", "..........Z......................Z................", "..............Z...........Z.......................", "..................................Z..............Z", ".........Z....................................Z...", ".............Z..........................Z.........", ".......................................Z...Z......", "................Z....Z............................", ".........Z.....................................Z..", ".................Z..............Z.................", "......Z........................................Z..", "................................ZZ................", ".................Z...................Z............", "............................Z.Z...................", "....................Z.........Z...................", "......................Z......................Z....", ".......Z...........Z..............................", "........Z.....................................Z...", "Z..............................Z..................", "...........Z......................................", "................Z........Z........................", "........................Z..................Z......", "...Z.........................................Z....", "..............Z.................................Z.", ".........................Z..............Z.........", "..................Z..............................Z", "..................................Z......Z........", ".......................Z............Z.............", "...........................Z.Z....................", "...................Z......................Z.......", "......................Z.....................Z....."};
    int inverseWalkSpeed = 57;
    int inverseDriveSpeed = 36;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1965834;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> cars = {17, 32, 10, 27, 15, 4, 6, 31, 7, 11, 25, 34, 16, 26, 41, 13, 21, 40, 47, 36, 39, 43, 35, 33, 38, 42, 22, 46, 45, 3, 49, 12, 29, 48, 1, 20, 5, 19, 30, 28, 23, 37, 9, 2, 0, 44, 8, 24, 14, 18};
    vector<int> districts = {37, 39, 27, 40, 7, 46, 3, 27, 44, 24, 30, 39, 1, 18, 4, 9, 18, 20, 40, 22, 8, 29, 34, 37, 25, 17, 14, 30, 12, 48, 20, 25, 21, 31, 47, 41, 30, 2, 28, 34, 5, 27, 33, 4, 8, 45, 31, 33, 29, 41};
    vector<string> roads = {"..q...a...kx...g8smlk..f8tuu...9a.h.....e....nkvc.", "...v4s.9...D.....uk...l...y.....5k..a.7...Eh..t.5.", "q..v..B.JB...F.c....5DzF.t.tDCutf.D..pb..6.hI.AMdE", ".vv.qw.m........A1ae..w.t16...nE.....z.9....lwhn.C", ".4.q....w.....t5.of..s...ospp....ipt...go7A..w..0p", ".s.w..7s.ypr.5........79.x...6.mp.5k..t.2..u..f.r.", "a.B..7...Cq..d.q2.....2.......bel..pe.qs.u.t....n.", ".9.m.s..v...fr.0......n.l.p..rhm4.qrbh.cp8.7v..z3s", "..J.w..v.n...9.....aE6lp.phqgmgzv.97.wxn.E....7..o", "..B..yC.n.f..t8r..g.z..Hx.5....Jvw.fvE..wA..kxi...", "k....pq..f....d.q....f...9ca....f..f..e..l....do..", "xD...r.......l4...m.E8..sg7h.......7....p.bq.o.ay.", ".......f.......e...B.....u.u.FwvhzG.prd.F..iK.COf.", "..F..5dr9t.l...sfpq...bg.s.t.c.q.a..j......rb.....", "....t....8d4...q..g7..szp...qv.Dspk6..senz.kboa.t.", "g.c.5.q0.r..esq.p..m....mkp.s.i...rrc.....A7vyo.4.", "8..A..2...q..f.p.ytotq35..y..3.b..frcaosas.srimu..", "su.1o........p..y......Cr253t..Cor..p...r..dj..m.A", "mk.af....g.m.qg.t....k...8f..uiv.......2q.t.o....x", "l..e....a...B.7mo....3kr.f9.h....h.4.r.df.d.....o.", "k.5.....Ez.E....t......zs...x..n9qyz.j.kw.Ie.F.H..", "..D.s...6.f8....q.k3...s...j.......0n...g.8.4.3..q", ".lzw.72nl....bs.3..k......tx538e.2a..c.p6.q....q.5", "f.F..9..pH...gz.5C.rzs..a.BF93g..a.ti...by....o.s.", "8..t...l.x.s..pm.r..s..a..r.555.i.8....n4s..kd..k.", "t.t1ox..p.9gus.k.28f......8.wA..o.rh.ym8..q...i...", "uy.6s..ph5c7...py5f9..tBr8.9.x..r.m..z.cp.hie.c...", "u.t.p...q.ahut...3...jxF..9.......sirzm.....n...o.", "..D.p...g.....qs.t.hx.595w......n6..gj..1.l.i....7", "..C..6.rm...Fcv.3.u...335Ax...c.......r.7..u....p.", "..un..bhg...w..i..i...8g5....c.j.58g8f.g8..i..al.e", "9.tE.memzJ..vqD.bCv.n.e.......j..fp.c4l.l...A..Eif", "a5f..pl4vvf.h.s..o..9...ior.n....gor7c4.m..cvvn...", ".k..i....w..zap..r.hq.2a....6.5fg...9c.m.qon.f.o.8", "h.D.p5.q9...G.krf...y.a.8rms..8po..d..rm.y.qc.9..d", "....tkpr7ff7..6rr..4z0.t.h.i..g.r.d.ow...A8n4.4..r", ".a....eb.v..pj.ccp...n.i...rg.8c79.o.8b..g.gqoj..g", "..pz...hwE..r...a..rj.c..yzzj.f4cc.w8.gq.i.......f", ".7b..tq.x.e.d.s.o........m.m.r.l4.r.bg.e.6.9x....t", "...9g.scn.....e.s.2dk.p.n8c...g..mm..qe.o....tfpgv", "e...o2.p.w.pF.n.arqfwg6b4.p.178lm......o.wj.g8d...", "..6.7.u8EAl...z.s......ys........qyAgi6.w..fEFwI7x", ".E..A......b...A..tdI8q..qh.l....o.8....j..w3eb0B.", ".hh..ut7...qirk7sd..e.....i..ui.cnqng.9..fw.rxkvbw", "..Il...v.k..Kbbvrjo..4..k.eni..Av.c4q.x.gE3r.....q", "n..ww....x.o..oyi...F...d.......vf..o..t8Fex..e...", "ktAh.f..7id.C.aom....3.o.ic...a.n.94j..fdwbk.e..p.", "v.Mn...z..oaO...um..H.q.......lE.o.....p.I0v......", "c5d.0rn3...yf.t4...o...sk..o.p.i.......g.7Bb..p..q", "..ECp..so........Ax..q5.....7.ef.8drgftv.x.wq...q."};
    int inverseWalkSpeed = 59;
    int inverseDriveSpeed = 19;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 28565;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> cars = {17, 32, 10, 27, 15, 4, 6, 31, 7, 11, 25, 34, 16, 26, 41, 13, 21, 40, 47, 36, 39, 43, 35, 33, 38, 42, 22, 46, 45, 3, 49, 12, 29, 48, 1, 20, 5, 19, 30, 28, 23, 37, 9, 2, 0, 44, 8, 24, 14, 18};
    vector<int> districts = {37, 39, 27, 40, 7, 46, 3, 27, 44, 24, 30, 39, 1, 18, 4, 9, 18, 20, 40, 22, 8, 29, 34, 37, 25, 17, 14, 30, 12, 48, 20, 25, 21, 31, 47, 41, 30, 2, 28, 34, 5, 27, 33, 4, 8, 45, 31, 33, 29, 41};
    vector<string> roads = {"...H....................0......B......u.k........f", "..............I...........6.....zE........5pb.E...", "......I.....i........6..............2....f....I...", "H..........N...3Z.....y...ny.......X....t.w..K..9.", "...................2...2..J......3...gKQ..........", "...............1.........w........................", "..I......a4......h.....k............A..........CT.", "...........................0......v.............dU", "..........t.................P............K..j...D.", "......a.......g........vxb....G.......i..........m", "......4.t..k........Y.....B.t....Ho.vgp.K...j....e", "...N......k......mj....i.......K....m...L.........", "..i.....................bC..R..U.....w.1......fj..", "........................O...q......Z....g.....o...", ".I.......g.....yQM.......A.....q.....p............", "...3.1........y......ZP...h..Q.A....b...8V.....l.1", "...Z..........Q..J..HJ.......4....................", "......h....m..M.J........J...k..V..W......S..H.K..", "...........j........b.Q.......................Mj..", "....2.................D..P........1...1.i.......n.", "..........Y.....H.b......j..o.I.iC................", "..6............ZJ........z.......e.w.....uN.......", "...y...........P..QD.......E...Z........9....0....", "....2.k..v.i.........................F..........AP", "0........x..bO.............K......p..1.....G......", ".....w...b..C.A..J.Pjz.......b.P.s.........p......", ".6.nJ.....B....h............Eu.SP.................", "...y...0..............E.K...............f.....7S..", "........P.t.Rq......o.....E....N...C......g.X.....", "...............Q4k.......bu.......k.N.l4..........", ".........G..........I...........rh....e.......Fm..", "B..........KU.qA......Z..PS.N...fY.......A5.......", ".z...............V..i.....P...rf.s...........yWL..", ".E..3.....H.........Ce...s....hYs.....r.j.........", ".......v..o........1....p....k................Q..q", "...X.........Z...W...w......C.................xqh.", "..2...A...vm...b.............N..................1.", "....g.....g.w.p........F1.................z......q", "u...K....ip........1.........le..r.....wP.........", "....Q.......1................4........w..P..M....b", "k..t......KL.g.8...i..9....f.....j....P....3b.....", "..f.....K......V.....u.........A.......P....Z..o..", ".5.w.............S...N......g..5.....z.......R....", ".p......................Gp..............3....B.r..", ".b......j.j.................X..........MbZ........", "...K.............H....0.........y.........RB......", ".EI.........fo....M........7..F.W.Qx..............", "......C.....j..l.Kj........S..m.L..q.....o.r......", "...9..TdD..........n...A...........h1.............", "f......U.me....1.......P..........q..q.b.........."};
    int inverseWalkSpeed = 100;
    int inverseDriveSpeed = 91;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 162851;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> cars = {28, 17, 11, 35, 3, 41, 31, 42, 10, 16, 2, 14, 33, 25, 19, 24, 18, 44, 46, 4, 21, 49, 23, 43, 20, 8, 7, 0, 1, 30, 22, 6, 34, 29, 38, 5, 37, 40, 39, 27, 47, 32, 12, 36, 26, 15, 13, 45, 48, 9};
    vector<int> districts = {3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18};
    vector<string> roads = {".twpcvsxr5wl5sceldozrynBq7vnqavCro6wmk7b5kDpgrp2ob", "t.8kG6zk9n4hyogjdttfjcremshB5i2ddczykBmookbmo5stam", "w8.sJ1vdir3fAikklzp7s4z5hxbzdla5l9CtsAqori5ineox8n", "pks.zqLDampuvDir7fFz1x7zBjAJejjy7swM2HitpwwBxeFnqr", "cGJz.IzJDhIx8DopxjxLBKuNBfGsCnHODA7EwojmivPAqDycAn", "v61qI.vegp1ezjijjxp8q6x7hwcybk87j8Btqzpnph7imcov8l", "szvLzv.kFqxhqcrjDF5qMsNudzk7BrCwInr5IbuioeAcdC6voj", "xkdDJek.usgbz7ojvFf6D8Ia7B2pppncxaBgCsumrcg9ipezcl", "r9iaDgFu.mfoxwgn5mzp9niouorG4h8o2kyFbFjqoqlus3zqio", "5nrmhpqsm.qgao69hemtotmvm8qnl5pwnjbtjk382gxldlm5i7", "w43pI1xgfq.gAljkixrao8w8jweAak68iaBvpBpoqj7koaqw9n", "lhfuxehbogg.n8d6mtbeveyh6p9jjdkiq5phskiaf2l57kam69", "5yAv8zqzxaAn.thgrioCxBtErcxlvgAGxr0vsgdc9mHqhwp7rd", "soiDDjc7wol8t.levC7dDfHh1x7hrmrjybu9Bkrgm7n2bs6udg", "cgkioirog6jdhl.7cgmokmlpjdlqe0iqhditgo5a7eqjdfmcc8", "ejkrpjjjn9k6ge7.kndlsktncigij8mopailohc376qb5kdfa2", "ldl7xjDv5himrvck.gxs7pdrthsC7cdr5ksE6Bdmjoptp8xkil", "dtzfjxFFmextiCgng.BEhDaFA5CBofuFlujIcyanguFzsoBatm", "otpFxp5fzmrbo7mdxB.lGnHp7vf9vmwrCgp7Dcpdj8u68w0rhe", "zf7zL8q6ptaeCdolsEl.z2F3dB5vlpi5taDnzxuptg9emlkAan", "rjs1BqMD9oovxDks7hGz.x9yBlAKekiy6syN4IjuqxvBydGpqt", "yc4xK6s8nt8eBfmkpDn2x.D2eA7xiof3q9Dpwytosg7fmilz9n", "nrz7uxNIimwytHltdaHF9D.FFgFKlkqFfxtP6HhupzDEylHlvt", "Be5zN7uaov8hEhpnrFp3y2F.hD9zjqg1rcGryBvrvj5ipkoBcq", "qmhBBhd7umj6r1jctA7dBeFh.v7hpkpjw9tbzkoek5m0aq6sbe", "7sxjfwzBo8wpcxdih5vBlAgDv.yvobtDnrdDgr6hbpDumow4qg", "vhbAGck2rqe9x7lgsCf5A7F97y.pmmkbu7yhyrrkoaf8gmew8j", "nBzJsy7pGnAjlhqiCB9vKxKzhvp.CpEBIplcH4rfkgEgcDbqqh", "q5deCbBp4lajvrej7ovleiljpomC.f5j7fxBeBinmmhpo0updl", "ailjnkrph5kdgm08cfmpkokqkbmpf.kriehtgn496esjdgmae8", "v2ajH8Cn8p6kArimduwiifqgptkE5k.fbfBBjEnqqncqr4vueo", "Cd5yO7wcow8iGjqorFr5y3F1jDbBjrf.rdHtyDwtwl3kqjqCdr", "rdl7DjIx2niqxyhp5lCt6qfrwnuI7ibr.mzI8Gjsptowu7Bqlq", "oc9sA8nakja5rbdakugas9xc9r7pfefdm.tlqqjfi8fadffp0d", "6zCw7BrBybBp0uiisjpDyDtGtdylxhBHzt.wtgeeanIriyq8tf", "wytMEt5gFtvhv9tlEI7nNpPrbDhcBtBtIlw.KhxlrfxbgC6ynl", "mks2wqICbjpssBgo6cDz4w6yzgyHegjy8qtK.EfqmuwzueDkpp", "kBAHozbsFkBkgkohBycxIyHBkrr4BnEDGqghE.pdhhGicCemrf", "7mqijpuuj3pidr5cdapujthvo6rri4nwjjexfp.c6jwogjq6jb", "bootmnimq8oacga3mndpuourehkfn9qtsfelqdc.58vd4oedf1", "5orpiporo2qf9m77jgjtqspvkbokm6qwpiarmh65.exjank7i5", "kkiwvhecqgj2m7e6ou8gxgzj5pagmenlt8nfuhj8e.o45n8m98", "Db5wP7Aglx7lHnqqpFu9v7D5mDfEhsc3ofIxwGwvxo.nthtDft", "pmiBAic9ulk5q2jbtz6eBfEi0u8gpjqkwarbziodj4n.8q5rbd", "gonxqmdisdo7hbd5ps8mymypamgcodrqudigucg4a5t8.p8ie5", "r5eeDcCp3lakwsfk8owldilkqomD0g4j7fyCeCjonnhqp.vqem", "psoFyo6ezmqap6mdxB0kGlHo6webumvqBfq6Deqek8t58v.she", "2txncvvzq5wm7ucfkarApzlBs4wqpauCqp8ykm6d7mDriqs.od", "oa8qA8ocii96rdcaithaq9vcbq8qdeedl0tnprjfi9fbeeho.d", "bmnrnljlo7n9dg82lmentntqegjhl8orqdflpfb158td5medd."};
    int inverseWalkSpeed = 14;
    int inverseDriveSpeed = 1;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 12679;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<int> cars = {28, 17, 11, 35, 3, 41, 31, 42, 10, 16, 2, 14, 33, 25, 19, 24, 18, 44, 46, 4, 21, 49, 23, 43, 20, 8, 7, 0, 1, 30, 22, 6, 34, 29, 38, 5, 37, 40, 39, 27, 47, 32, 12, 36, 26, 15, 13, 45, 48, 9};
    vector<int> districts = {3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18};
    vector<string> roads = {"............nh.............a......................", "...................................k..............", "....................................5.............", "...............................................B..", "............k............................D.....d..", "..........z.......................................", "..............................s..................u", "...................j..............................", ".................................0................", "................m.....j...........................", ".....z........z.....s.............................", "..................i..x............................", "n...k............p...x..............t...x.........", "h.................................................", "..........z...................l............y......", "...........................d......................", ".........m..............................r.........", "............p......................f..............", "...........i......................................", ".......j......................................3...", "..........s.......................................", "...........xx................f....t........B......", ".........j...................................r....", "..................................g...............", "......................................r...........", "..........................l.....f..........v......", ".........................l........................", "a..............d..................................", ".................................f......s.......v.", ".....................f............................", "......s.......l...................................", "...............................................r..", ".........................f........................", "........0...................f.............7...f...", ".....................t.g..........................", ".k...............f................................", "..5.........t........................d............", "....................................d.............", "........................r..................l......", ".........................................H........", "............x...r...........s.....................", "....D..................................H..........", ".................................7................", "..............y......B...v............l...........", "................................................F.", "......................r...........................", "...................3.............f................", "...Bd..........................r..................", "............................v...............F.....", "......u..........................................."};
    int inverseWalkSpeed = 65;
    int inverseDriveSpeed = 14;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 434038;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<int> cars = {28, 17, 11, 35, 3, 41, 31, 42, 10, 16, 2, 14, 33, 25, 19, 24, 18, 44, 46, 4, 21, 49, 23, 43, 20, 8, 7, 0, 1, 30, 22, 6, 34, 29, 38, 5, 37, 40, 39, 27, 47, 32, 12, 36, 26, 15, 13, 45, 48, 9};
    vector<int> districts = {3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18};
    vector<string> roads = {"...........................T....................g.", ".......................y...c......................", ".............8................J...................", ".....................D............................", ".................s..........S.....................", "...................................k............F.", "...............F...........................O......", "...............................5......G...........", "..............s.........................S.........", "...................................1........X.....", "..............X...........z.......................", "............................h.....Y...............", ".................................g...........c....", "..8......................................B........", "........s.X.......................................", "......F..........................w................", ".................T............E...................", "....s...........T.................................", "..............................................v...", "....................................Y..........M..", "......................H..G........................", "...D......................................D.......", "....................H...............9.............", ".y...................................1............", "..............................................c..2", "....................G........K....................", "..........z..............................W........", "Tc................................................", "....S......h......................................", ".........................K.............B..........", "..J.............E.................................", ".......5..........................j...............", "........................................y....5....", "............g..w..................................", "...........Y...................j..................", ".....k...1........................................", "...................Y..9...........................", ".......................1...............h..........", ".......G....................................u.....", ".............................B.......h............", "........S.......................y.................", ".............B............W.......................", ".....................D.........................w..", "......O..........................................Y", ".........X............................u...........", "............c...................5.................", "..................v.....c.........................", "...................M......................w.......", "g....F............................................", "........................2..................Y......"};
    int inverseWalkSpeed = 45;
    int inverseDriveSpeed = 12;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1640922;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<int> cars = {28, 17, 11, 35, 3, 41, 31, 42, 10, 16, 2, 14, 33, 25, 19, 24, 18, 44, 46, 4, 21, 49, 23, 43, 20, 8, 7, 0, 1, 30, 22, 6, 34, 29, 38, 5, 37, 40, 39, 27, 47, 32, 12, 36, 26, 15, 13, 45, 48, 9};
    vector<int> districts = {3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18};
    vector<string> roads = {".Z..........Z.....................................", "Z.........................Z.......................", ".........................Z.......................Z", "....................................Z.............", "....................Z........Z....................", ".......Z.......................................Z..", ".....................Z...Z........................", ".....Z...............Z............................", ".................Z...............Z................", "..............Z............Z......................", "............................Z..............Z......", "..................................Z...........Z...", "Z.............................Z...................", "..........................................Z...Z...", ".........Z..............................Z.........", "......................ZZ..........................", "............................................ZZ....", "........Z..........................Z..............", ".......................................Z..........", ".........................................Z...Z....", "....Z....................................Z........", "......ZZ..........................................", "...............Z............................Z.....", "...............Z................................Z.", ".....................................Z..........Z.", "..Z...Z...........................................", ".Z.....................................Z..........", ".........Z.................................Z......", "..........Z.....................Z.................", "....Z...............................Z.............", "............Z.............................Z.......", "................................Z.Z...............", "............................Z..Z..................", "........Z.............................Z...........", "...........Z...................Z..................", ".................Z.............................Z..", "...Z.........................Z....................", "........................Z........................Z", ".................................Z......Z.........", "..................Z.......Z.......................", "..............Z.......................Z...........", "...................ZZ.............................", ".............Z................Z...................", "..........Z................Z......................", "................Z.....Z...........................", "................Z..Z..............................", "...........Z.Z....................................", ".....Z.............................Z..............", ".......................ZZ.........................", "..Z..................................Z............"};
    int inverseWalkSpeed = 92;
    int inverseDriveSpeed = 82;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 12804984;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<int> cars = {28, 17, 11, 35, 3, 41, 31, 42, 10, 16, 2, 14, 33, 25, 19, 24, 18, 44, 46, 4, 21, 49, 23, 43, 20, 8, 7, 0, 1, 30, 22, 6, 34, 29, 38, 5, 37, 40, 39, 27, 47, 32, 12, 36, 26, 15, 13, 45, 48, 9};
    vector<int> districts = {3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18};
    vector<string> roads = {".trj.gcyH..ssdy..IyJf.t26tgA.xw5k.vMjn.H.moc..AJos", "t.iu5elqi.9.6h.h9.Iod...x..6..btnk3tukC.5w...egt.m", "ri.fhmf.i..bbd.adgqig.lprrmo48t.9..kg4.g.g.k.ea.33", "juf.vpbgyCn..d.q.uf.k..jfz7Beo..5..x0advs2.lghq..c", ".5hv.ko.c78t6lzcdlHiiDDv..B7g..yp...w.B....mjibogl", "gempk.d...juf.Bs8BFA5DA..brkh.fe..f..lCyitn488.D.p", "clfbod.lv.ihh.o.awrx8qmacods.l..8gnzcbovl..9..owb.", "yq.g..l.....klbd..lhpgi.wz.vd..C.Aug.a.f.g8tn.dcc5", "Hiiyc.v..hdt...7n.G6.CDF.sFi.atJ.Ckdz.z6dz.wsr7ek.", "...C7...h.f.dqHki.P.mLKz.cH1n.cBw.6...Jn.Eu.o.jvnt", ".9.n8ji.df.k.fr.ah.g.vurvjtf83.vg.dl.c.e....e.7j7c", "s.b.tuh.t.k..i6l..dqo....BfAdk...yxp..8oq76q.l.l.7", "s6b.6fhk.d......7.Bkcyx..fuc9...im.ope.i3qgg.cbn9f", "dhddl..l.qfi....7utv5robflgp8ipg9.kye..t..c..3...f", "y...zBob.Hr6...pto9.v4.xtIj.kqL....q.g..wb.xssp..d", ".haqcs.d7k.l..p.i8y7nuv.B....4.Dkykc..s.br..m.0bcd", ".9d.d8a.nia.77ti.rz...uh.e...d.lffcvld..bnf.5.it9g", "I.gulBw...h..uo8r.y.w.w.IAC.leCLpHt.vlr3k.k.uu93kh", "yIqfHFrlGP.dBt9yzy..A.4ysOhO.zSE...A.m..Ec...xzwrl", "Joi.iAxh6.gqkv.7....wy.HK.Epmdz..Gq5yn.1ix..vu.7l.", "fdgki58p.m.oc5vn.wAw.yuc..nkb..gfaf.k.wugnh33.m.cj", "....DDqgCLv.yr4u...yy.5y.MiKo.P.h..vej.wB.hz...roh", "t.l.DAmiDKu.xo.vuw4.u5.t.Jc..vNz....9.5yA...rrvun.", "2.pjv.a.Fzr..bx.h.yHcyt.8q.xkut5.csKj.xFtmn9...Hm.", "6xrf..cw..v..ftB.IsK...8.y....CchlzLfmsH...h..BIo.", "t.rz.bozscjBflI.eAO..MJqy.Canm3qu.....KxfCugih.D.u", "g.m7Brd.FHtfugj..ChEnic..C.GkvG...BF6hi..7gm.kxBlk", "A6oB7ksvi1fAcp....OpkK.x.aG..g..up.v..I.9Dt.m..w..", "..4egh.d.n8d98k..l.mbo.k.nk........of.mkdg...8.m0.", "x.8o..l.a.3k.iq4dezd..vu.mvg..o.itf.pds.6q.m.h.g.c", "wbt..f..tc...pL..CSz.PNtC3G..o.t..8FDvN.hFx.mlsF..", "5t..ye.CJBv..g.DlLE.g.z5cq....t.oauP.rD.w.tc...Mrw", "kn95p.8..wg.i9.kfp..fh..hu.u.i.o..rt6.g.l8..cc.p8.", ".k....gAC..ym..yfH.Ga..cl..p.t.a...KtqG.ow..ddxJou", "v3...fnuk6dx.k.kct.qf..sz.B..f8ur....oGp8.qiihjw.q", "Mtkx..zgd.lpoyqcv.A5.v.KL.Fvo.FPtK..yot6nxo.yxd3.k", "jug0w.c.z...pe..lv.yke9jf.6.fpD.6t.y.b..t2a.h..uf.", "nk4a.lba..c.e.g.dlmn.j..m.h..dvr.qoob.hl.c1..c..43", ".C.dBCo.zJ.8...s.r..w.5xsKiImsNDgGGt.h.u..fy..spmf", "H.gv.yvf6neoit...3.1uwyFHx..k.....p6.lu.g..yt.67ih", ".5.s.il.d..q3.wbbkEigBAt.f.9d6hwlo8nt..g..jkgfanci", "mwg2.t.gzE.7q.brn.cxn..m.C7DgqF.8w.x2c....a.jk.tg.", "o....n.8.u.6gc..fk..hh.n.ugt..xt..qoa1f.ja..e..k63", "c.klm49tw..qg.x.....3z.9hgm..m.c..i...yyk....5.Bg.", "...gj8.nsoe...sm5u.v3.r..i.m..m.cdiyh..tgje..0m..g", ".eehi8..r..lc3s..uxu..r..hk.8hl.cdhx.c..fk.50.lva.", "Agaqb.od7j7.b.p0i9z.m.v.B.x...s..xjd..s6a...ml.ccd", "Jt..oDwcevjln..bt3w7.ruHIDBwmgFMpJw3u.p7ntkB.vc..h", "o.3.g.bckn7.9..c9krlconmo.l.0..r8o..f4micg6g.ac..6", "sm3clp.5.tc7ffddghl.jh...uk..c.w.uqk.3fhi.3.g.dh6."};
    int inverseWalkSpeed = 55;
    int inverseDriveSpeed = 30;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 41945;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<int> cars = {28, 17, 11, 35, 3, 41, 31, 42, 10, 16, 2, 14, 33, 25, 19, 24, 18, 44, 46, 4, 21, 49, 23, 43, 20, 8, 7, 0, 1, 30, 22, 6, 34, 29, 38, 5, 37, 40, 39, 27, 47, 32, 12, 36, 26, 15, 13, 45, 48, 9};
    vector<int> districts = {3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18, 3, 18};
    vector<string> roads = {"...bSK.f4twMcTj.Rv.w.O..M.c..xma6..e3G.pwk4EVgG..2", "....Aohj1.h..a.nbTqO.cM..pIdR..TiPCQp26.st.jZE.uFj", "....s.GY..y.oEBCW21maf5..Om.FCxiI..j7TXRn..JDFnbvN", "b....hmcdrgg.y1kG.fAS...nED.Zgbg.wvCs8..BRIS..h.jd", "SAs..p...5...LP7d....A.0.Z.ps0..x.YfcD.fgGmWkRwC.y", "Ko.hp.hKu..20apin3XQ.GZlS..r4.2.Rh1.Qwek..f..yrL.u", ".hGm.h.tzl1WPz....8.MD.sWS6.1kls7..sJ.wV.B.7.b16Pw", "fjYc.Kt.8..c.Yur5...ag16o....We....R9BZ...1..3q.a.", "41.d.uz8.lm.6.....o.qRR3W49..yaDk4..p.YsY.zv7.Ucm4", "t..r5.l.l.G.U..W0MV..j2G.Kc.7lJkNwDZk.VL..o.....Pu", "whyg..1.mG.9JOv7RRz...Tk6..091mv.z.sf8..Af..TQW.Ji", "M..g.2Wc..9..V.O..5...P.dM.HAIAf.I3m7NM.4.P5q.a.v.", "c.o..0P.6UJ...ZZ..2gB..s.4m.jb..9..e.H..ns4..sy.A8", "TaEyLazY..OV...GvDmn.S3KyZ..yR.OAPXYA..H...U.hIYcD", "j.B1Pp.u..v.Z...vU.H.7..z65F.FGm.Y..y.8bY.YX.X...U", ".nCk7i.r.W7OZG...fl.XW..N2T..P..bKpo4gw.GF..q.ESN5", "RbWGdn.5.0R..vv..z.S.RkSrTRavh9X.Tt0EsYZHmOJR.w..N", "vT2..3...MR..DUfz...uAW.UF..TdMB9OxPe..f7L6.fcC.wF", ".q1f.X8.oVz52m.l....7W.nHzVBR.n.Y.k0.OK.Dt5..9.Dn.", "wOmA.Q......gnH.S....D...4.2.MADSPhy..H..E2.wx..J.", "..aS..Maq...B..X.u7..Il.EiAfh.vt...S.157kY...tN.X.", "Ocf.AGDgRj...S7WRAWDI..g.DWtVpf.4..lw...5.CLdU3j.W", ".M5..Z.1R2TP.3..kW..l..D.c5k.rKzs.C6O.WrrIp.CBp.v.", "....0ls63Gk.sK..S.n..gD.a.zRF..gQzt..1uVo.ojM.nH.m", "M..n.SWoW.6d.yzNrUH.E..a...6.OxAml.hYGI.V.K..2Gkx.", ".pOEZ.S.4K.M4Z62TFz4iDc....9.Q.FwpXB..Tdhs..qeWmB.", "cImD..6.9c..m.5TR.V.AW5z......xsJA.CXnq6.L7.W.5kI.", ".d..pr....0H..F.a.B2ftkR69..hmO..u.UFtOQ1.g....pa4", ".RFZs41..79Ajy..vTR.hV.F...h...EQ9.Ir0w.y.j.Y..3.D", "x.Cg0.kWyl1IbRFPhd.M.pr.OQ.m..3Z.U..5fc.qFa.Fh86Z6", "m.xb.2leaJmA..G.9MnAvfK.x.xO.3.k.nM.eg.x...6...B.2", "aTig..s.Dkvf.Om.XB.Dt.zgAFs.EZk..P.VNuyB6..0Q.qW..", "6iI.xR7.kN..9A.b.9YS.4sQmwJ.Q....D.Z0f..1..x...e..", ".P.w.h..4wzI.PYKTO.P...zlpAu9UnPD..Gl.0CNv.5..5..g", ".C.vY1...D.3.X.ptxkh..Ct.X....M....Yu.gW7.VwukcIjG", "eQjCf.sR.ZsmeY.o0P0ySl6.hBCUI..VZGY.VBYaXG.z.T8.o1", "3p7scQJ9pkf7.Ay4Ee...wO.Y.XFr5eN0luV.BFvT.w.zZ9vES", "G2T8Dw.B..8NH..gs.O.1..1G.nt0fguf..BB..9.r.N.g.xBM", ".6X..ewZYV.M..8wY.KH5.WuITqOwc.y.0gYF..U.8eU.yic6.", "p.R.fkV.sL...Hb.Zf..7.rV.d6Q..xB.CWav9U.w.Fv1WS.71", "wsnBg...Y.A4n.YGH7D.k5roVh.1yq.61N7XT..w..v....F..", "kt.RG.B...f.s..FmLtEY.I..sL..F...v.G.r8....PNpEVyI", "4..Imf.1zo.P4.Y.O652.CpoK.7gja....V.w.eFv..K..h8..", "EjJSW.7.v..5.UX.J....L.j......60x5wz.NUv.PK..pw9Tn", "VZD.k...7.Tq...qRf.w.dCM.qW.YF.Q..u.z..1.N...rfVig", "gEF.Ryb3..Q.shX..c9xtUB.2e...h....kTZgyW.p.pr.R.Q9", "G.nhwr1qU.WayI.EwC..N3pnGW5..8.q.5c89.iS.EhwfR.j.e", ".ub.CL6.c....Y.S..D..j.Hkmkp36BWe.I.vxc.FV89V.j.g4", ".Fvj..PamPJvAc.N.wnJX.v.xBIa.Z....joEB67.y.TiQ.g.7", "2jNdyuw.4ui.8DU5NF...W.m...4D62..gG1SM.1.I.ng9e47."};
    int inverseWalkSpeed = 56;
    int inverseDriveSpeed = 6;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 27526;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<int> cars = {12, 3, 41, 10, 43, 46, 28, 27, 47, 25, 14, 4, 6, 32, 17, 48, 22, 49, 9, 40, 34, 24, 5, 0, 31, 36, 11, 19, 26, 42, 45, 44, 7, 18, 13, 39, 8, 35, 2, 23, 33, 29, 30, 38, 16, 21, 37, 15, 20, 1};
    vector<int> districts = {10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38};
    vector<string> roads = {".......................Z........n.................", "....................................A............S", "..........A.i.....................................", "......C....................n......................", "....................F.C...........................", "........................B.......3.................", "...C.................L............................", ".........B...v....................................", ".......................................5..b.......", ".......B................D.........................", "..A..........................H....................", "...............d..N...............................", "..i..................a............................", ".......v.........1................................", "...................q....................l.........", "...........d..........................1...........", ".......................O..Y.......................", ".............1....................H...............", "...........N.................Q....................", "..............q..................U................", "....F.......................................t.....", "......L.....a.....................................", "....C........................................p....", "Z...............O.................................", ".....B...D........................................", "..............................r....s..............", "................Y..............................N..", "...n......................................8.......", ".......................................Q7.........", "..........H.......Q...............................", ".........................r........................", "....................................H.........y...", "n....3............................................", "...................U.................K............", ".................H....................X...........", ".........................s...................F....", ".A.............................H..................", ".................................K..............g.", "...............1..................X...............", "........5...................Q.....................", "..............l.............7.....................", "...........................................9.....D", "........b..................8......................", ".........................................9......s.", "....................t..........................P..", "......................p............F..............", "...............................y..................", "..........................N.................P.....", ".....................................g.....s......", ".S.......................................D........"};
    int inverseWalkSpeed = 77;
    int inverseDriveSpeed = 60;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 627249;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<int> cars = {12, 3, 41, 10, 43, 46, 28, 27, 47, 25, 14, 4, 6, 32, 17, 48, 22, 49, 9, 40, 34, 24, 5, 0, 31, 36, 11, 19, 26, 42, 45, 44, 7, 18, 13, 39, 8, 35, 2, 23, 33, 29, 30, 38, 16, 21, 37, 15, 20, 1};
    vector<int> districts = {10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38, 10, 38};
    vector<string> roads = {"............................Z..................Z..", "...............Z......Z...........................", "..................Z.....Z.........................", ".....................Z.............Z..............", ".................................Z..............Z.", "......................................Z........Z..", ".........Z...............Z........................", "...............................Z............Z.....", "..................Z...........................Z...", "......Z..........................................Z", "..........................Z...............Z.......", "................Z..............Z..................", "....................................Z...Z.........", "................Z...............Z.................", ".......................Z.........................Z", ".Z..................Z.............................", "...........Z.Z....................................", "..............................Z............Z......", "..Z.....Z.........................................", "..................................Z.........Z.....", "...............Z........................Z.........", "...Z...................Z..........................", ".Z....................................Z...........", "..............Z......Z............................", "..Z................................Z..............", "......Z.........................Z.................", "..........Z..................................Z....", ".........................................Z......Z.", "Z............................Z....................", "............................Z........Z............", ".................Z................................", ".......Z...Z......................................", ".............Z...........Z........................", "....Z.............................Z...............", "...................Z.............Z................", "...Z....................Z.........................", "............Z..........................Z..........", ".............................Z............Z.......", ".....Z................Z...........................", "....................................Z....Z........", "............Z.......Z.............................", "...........................Z...........Z..........", "..........Z..........................Z............", ".................Z...........................Z....", ".......Z...........Z..............................", "..........................Z................Z......", "........Z.........................................", "Z....Z............................................", "....Z......................Z......................", ".........Z....Z..................................."};
    int inverseWalkSpeed = 91;
    int inverseDriveSpeed = 28;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1918714;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<int> cars = {41, 33, 26, 12, 6, 38, 46, 5, 30, 19, 35, 27, 22, 36, 21, 36, 21, 36, 5, 27, 21, 6, 8, 46, 8, 25, 19, 48, 3, 30, 48, 37, 20, 44, 36, 28, 12, 38, 45, 9, 38, 41, 21, 37, 14, 43, 16, 28, 20, 40};
    vector<int> districts = {37, 31, 37, 9, 37, 48, 37, 30, 37, 21, 37, 49, 37, 47, 37, 49, 37, 30, 37, 5, 37, 14, 37, 11, 37, 38, 37, 44, 37, 46, 37, 48, 37, 42, 37, 38, 37, 0, 37, 28, 37, 46, 37, 21, 37, 16, 37, 12, 37, 39};
    vector<string> roads = {".GorLelNqddiwDBbeFl7rgkrnfugm7DLutkp0vhKnmI8njHlM3", "G.hRDrrzhCIpxzuyvckIeHlkIvqrlA2wdPChFaHEQvlxGngFwD", "oh.DC8eB7ms8qvqhek3r3r4bueja5iex8Co5n7sCBjqet6nrzl", "rRD.xxqDAhdEosumDKEjIczw9EtsGxPCE3fArIbw3mHvaDJcEv", "LDCx.Dr6uxAKd7bzMrFGExzqrNixILC8vtqwKzv0AoiGqHnr9M", "er8xD.bDcfk7pvs98r7ick5eo9k589oAfwjadglCufv5n6tlCc", "lreqrb.s9bhidjg9klfjhf96gl95ikopdoa9khfqp4nffgmdrl", "NzBD6Ds.tBEJgabBNmEJCBzpvNiyHNy2tzuuMxz7FqdIvGiv2O", "qh7Auc9t.kqfjnjhkear9p64qkc9dmeq3yk0p7puydjhpcgnro", "dCmhxfbBk.5mkqp4lym8r4hjamjbogzyph7kcs5xeayd9ly8Af", "dIsdAkhEq5.rnttapDr6w3noaqohtjFCve9qdy4z9fDhaqD8Eh", "ip8EK7iJfmr.xCyh5t5oas9jx5rd3bmGhEreigsJBnzav2wtHf", "wxqodpdgjknx.55lzmsstknefA6jwxvemldkwqicpaiseukegy", "Dzvs7vjanqtC5.4rFnxyxqsikGapBDx9pojoCto6uggzjzkkbE", "Buqubsgbjpty54.pBitxspoelC6mwAs9krikAooavecwkvfkbB", "byhmz99Bh4ahlrp.gvh9madgfhj7jcvzlmagaoaykax8egwcBc", "eveDM8kNklp5zFBg.yakgqdnw0uf96sKmDridmrMzpE7v7BtLa", "FckKrrlmeyDtmnivy.nFjBleAzgoqBbjbHvfEcArKo8xyq3xjE", "lk3EF7fEamr5sxthan.p5r5evbmb2fhBbDp8lasEBktcu2qsCi", "7IrjGijJr86osyx9kFp.v9mqglshreFHvlfq7yaFfjGdgoGfJb", "re3IEchC9rwatxsmgj5v.w8eygmf6lbz8Gt8r5wEGmqix8mvAo", "gHrcxkfBp43skqpaqBr9w.mm6rlgtlEztc6pgw0w9cAi6rB5Bj", "kl4zz59z6hn9nsoddl5m8m.9peg58fiw9xk4janzweqbo7nmxi", "rkbwqe6p4jojeiegneeqem9.mo79hohm7uh5qbmpvagjlgfknq", "nIu9rogvqaaxfklfwAvgy6pm.xjjxrFuu75qny5q9cxo0vz2wq", "fveEN9lNkmq5AGCh0zblgreox.vg97sLnEsjemsNAqE8w8CuMa", "uqjtik9icjor6a6jugmsmlg7jv.fptofeqedtikht8eohofhhv", "grasx55y9bhdjpm7fobhfg59jgf.deovere8fggwq9r9ibpgwg", "ml5GI8iHdot3wBwj9q2r6t8hx9pd.fiEeFsclcuIDnwdw2tuFi", "7AixL9kNmgjbxDAc6Bfellfor7tef.xKpynl6qmLtnF4rcDpL3", "D2ePCooyezFmvxsvsbhFbEihFsooix.vaNzeC7ECNsktDkfCvA", "LwxC8Ap2qyCGe99zKjBHzzwmuLfvEKv.qysrKty8EoaFtDft1L", "ud8Evfdt3pvhmpklmbbv8t97uneeepaq.Co4t3tvDhhlteerrs", "tPC3twozyheElormDHDlGcxu7EqrFyNyC.dysGbs7kDv8DGaAw", "kCofqjauk79rdjiarvpft6kh5seesnzsod.kks5pe6tj3pu2un", "ph5Awa9u0kqekokgif8q8p45qjd8cler4yk.o7ovyekgpbinsn", "0FnrKdkMpcdiwCAadEl7rgjqnetfl6CKtsko.uhJnlH8miGkL3", "va7Izghx7sygqtoomcay5wabymigcq7t3Gs7u.wzGlkmwegvut", "hHsbvlfzp54siooarAsaw0nm5skgumEytb5ohw.u9czj5rA3Al", "KECw0Cq7uxzJc6ayMrEFEwzpqNhwILC8vspvJzu.znjGpGnqaL", "nQB3AupFye9BpuvkzKBfG9wv9AtqDtNED7eynG9z.lHraBJbGr", "mvjmof4qdafnageapokjmceacq89nnsohk6ellcnl.nialo9pn", "IlqHivndjyDzigcxE8tGqAqgxEerwFkahDtkHkzjHn.Bww4waH", "8xevG5fIhdhaszw87xcdiibjo8o9d4tFlvjg8mjGriB.nazlG6", "nGtaqnfvp9avejkevyugx6ol0whiwrDtt83pmw5paawn.uy1vq", "jn6DH6gGclq2uzvg7q2o8r7gv8ob2ckDeDpbierGBlwau.tsEg", "HgnJntmigyDwkkfwB3qGmBnfzCfptDffeGuiGgAnJo4zyt.xfG", "lFrcrldvn88tekkctxsfv5mk2uhgupCtra2nkv3qb9wl1sx.vo", "MwzE9Cr2rAEHgbbBLjCJABxnwMhwFLv1rAusLuAaGpaGvEfv.N", "3DlvMclOofhfyEBcaEibojiqqavgi3ALswnn3tlLrnH6qgGoN."};
    int inverseWalkSpeed = 85;
    int inverseDriveSpeed = 71;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 96699;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<int> cars = {41, 33, 26, 12, 6, 38, 46, 5, 30, 19, 35, 27, 22, 36, 21, 36, 21, 36, 5, 27, 21, 6, 8, 46, 8, 25, 19, 48, 3, 30, 48, 37, 20, 44, 36, 28, 12, 38, 45, 9, 38, 41, 21, 37, 14, 43, 16, 28, 20, 40};
    vector<int> districts = {37, 31, 37, 9, 37, 48, 37, 30, 37, 21, 37, 49, 37, 47, 37, 49, 37, 30, 37, 5, 37, 14, 37, 11, 37, 38, 37, 44, 37, 46, 37, 48, 37, 42, 37, 38, 37, 0, 37, 28, 37, 46, 37, 21, 37, 16, 37, 12, 37, 39};
    vector<string> roads = {".................................................E", "..f......k....................h....t.5............", ".f................................................", ".................3...............B..D........c....", "..............i...................................", "...........................................k......", "...........................x......................", "...............................x..................", "................................J.................", ".k................................................", "..............................D...................", "...................................f..............", "........................t.............p.......u...", "....................5......................a......", "....i....................D......................t.", "...............................v..................", "............................................w.....", "...3..............................................", "..............................K...................", "............................................j.....", ".............5...................................k", "........................c.........................", "....................................g.............", "........................k.........................", "............t........c.k.J..............t.........", "..............D.........J...................7.....", "............................................9.....", "......x..............................j............", "........................................4.o.......", ".............................................J....", ".h........D.......K...............................", ".......x.......v...................j..............", "........J....................................K...g", "...B..............................................", ".........................................d........", ".t.........f...................j..................", "...D..................g...........................", ".5.........................j...........zf........A", "............p.....................................", ".....................................z............", "........................t...4........f............", "..................................d..........m....", "............................o.....................", ".....k.......a....................................", "................w..j.....79.......................", "...c.........................J..K........m.....x..", "............u.....................................", ".............................................x....", "..............t...................................", "E...................k...........g....A............"};
    int inverseWalkSpeed = 66;
    int inverseDriveSpeed = 61;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 251772;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<int> cars = {41, 33, 26, 12, 6, 38, 46, 5, 30, 19, 35, 27, 22, 36, 21, 36, 21, 36, 5, 27, 21, 6, 8, 46, 8, 25, 19, 48, 3, 30, 48, 37, 20, 44, 36, 28, 12, 38, 45, 9, 38, 41, 21, 37, 14, 43, 16, 28, 20, 40};
    vector<int> districts = {37, 31, 37, 9, 37, 48, 37, 30, 37, 21, 37, 49, 37, 47, 37, 49, 37, 30, 37, 5, 37, 14, 37, 11, 37, 38, 37, 44, 37, 46, 37, 48, 37, 42, 37, 38, 37, 0, 37, 28, 37, 46, 37, 21, 37, 16, 37, 12, 37, 39};
    vector<string> roads = {"............K................I....................", "............x.............................e.......", "........1....P....................................", ".........D......t.................................", "..................3.............................J.", "...............E............8.....................", "........................8........B................", "..............................X..............m....", "..1..............p................................", "...D.............................................X", "...............................................X..", "...............................V..................", "Kx................................................", "..P..............................5................", "..................................C.e.............", ".....E...........I................................", "...t....................................t.........", "........p......I..................................", "....3...................................f.........", "......................d.......................2...", ".......................R....................Z.....", ".............................E.......L............", "...................d........L.....................", "....................R.................V...........", "......8...................................d.......", "................................V..........W......", "..............................u.................4.", "................................J.............I...", ".....8................L...........................", "I....................E............................", ".......X..................u.......................", "...........V................................q.....", ".........................V.J......................", "......B......5....................................", "..............C............................4......", "......................................U..E........", "..............e..........................M........", ".....................L.......................x....", ".......................V...........U..............", "...............................................m.9", "................t.f...............................", "...................................EM.............", ".e......................d.........................", ".........................W........4...............", "....................Z..........q..................", ".......m.............................x............", "...................2.......I......................", "..........X............................m..........", "....J.....................4.......................", ".........X.............................9.........."};
    int inverseWalkSpeed = 68;
    int inverseDriveSpeed = 29;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 853660;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<int> cars = {41, 33, 26, 12, 6, 38, 46, 5, 30, 19, 35, 27, 22, 36, 21, 36, 21, 36, 5, 27, 21, 6, 8, 46, 8, 25, 19, 48, 3, 30, 48, 37, 20, 44, 36, 28, 12, 38, 45, 9, 38, 41, 21, 37, 14, 43, 16, 28, 20, 40};
    vector<int> districts = {37, 31, 37, 9, 37, 48, 37, 30, 37, 21, 37, 49, 37, 47, 37, 49, 37, 30, 37, 5, 37, 14, 37, 11, 37, 38, 37, 44, 37, 46, 37, 48, 37, 42, 37, 38, 37, 0, 37, 28, 37, 46, 37, 21, 37, 16, 37, 12, 37, 39};
    vector<string> roads = {".Z.....................................Z..........", "Z.............Z...................................", ".........................................Z.....Z..", "................Z.Z...............................", ".....................Z................Z...........", "..............................Z..............Z....", ".........Z......................................Z.", ".........Z......Z.................................", "..........................................Z...Z...", "......ZZ..........................................", ".............................Z....................", "........................Z.........................", "...............................Z.........Z........", ".........................Z..........Z.............", ".Z....................................Z...........", "..........................Z.................Z.....", "...Z...Z..........................................", "..............................Z.........Z.........", "...Z.............................Z................", "..........................................Z......Z", "...........................Z................Z.....", "....Z................................Z............", "............................Z..............Z......", "..........................Z......................Z", "...........Z...................................Z..", ".............Z.....................Z..............", "...............Z.......Z..........................", "....................Z...................Z.........", "......................Z.......................Z...", "..........Z.....................Z.................", ".....Z...........Z................................", "............Z.....................Z...............", ".............................Z.........Z..........", "..................Z........................Z......", "...............................Z................Z.", ".........................Z...........Z............", ".............Z...............................Z....", ".....................Z.............Z..............", "....Z.........Z...................................", "Z...............................Z.................", ".................Z.........Z......................", "..Z.........Z.....................................", "........Z..........Z..............................", "......................Z..........Z................", "...............Z....Z.............................", ".....Z..............................Z.............", "........Z...................Z.....................", "..Z.....................Z.........................", "......Z...........................Z...............", "...................Z...Z.........................."};
    int inverseWalkSpeed = 32;
    int inverseDriveSpeed = 21;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1204536;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<int> cars = {41, 33, 26, 12, 6, 38, 46, 5, 30, 19, 35, 27, 22, 36, 21, 36, 21, 36, 5, 27, 21, 6, 8, 46, 8, 25, 19, 48, 3, 30, 48, 37, 20, 44, 36, 28, 12, 38, 45, 9, 38, 41, 21, 37, 14, 43, 16, 28, 20, 40};
    vector<int> districts = {37, 31, 37, 9, 37, 48, 37, 30, 37, 21, 37, 49, 37, 47, 37, 49, 37, 30, 37, 5, 37, 14, 37, 11, 37, 38, 37, 44, 37, 46, 37, 48, 37, 42, 37, 38, 37, 0, 37, 28, 37, 46, 37, 21, 37, 16, 37, 12, 37, 39};
    vector<string> roads = {".lCu.1.hviu6ckctngw.j.8m3q8..qqL..oiw5Gl.ot.vgBcqa", "l.m8j.m6cajjiagbf5.qn5c3kpmh9.5q.lfhihlfc.7boplhfl", "Cm.iA.5tux.DE.Cafok9p.vp.lxB.l.ftGCl5Bbhcikyeu.DbG", "u8i.h...bh...e..hdvpscl.ttuif33icn.mhqdj5o1hpvjpgt", ".jAh.y.i5h9.qtoqyoNHHf.gxJ.5.fkue8dB.urymEffHI1px.", "1...y.y.t.s5ajas..wzj.6...9tio.Kjvmiv3.k.oriugzbp.", ".m5..y.swwF.C.A..me4ks.pAfsCw.iltHC..ygdfcly.pEB7E", "h6t.i.s..3.dbe9ik6.wp.95f.l.3acx3i..pcs.j.c5tpka.e", "vcub5tw..daqn.lk..G..an9tCy6b9.q.bc.tqnshy9cA.7.r.", "iaxhh.w3d.cc..7mo.CAt4b8fxnc.cfA.f.ot..nmtf1ysi8pc", "uj..9sF.ac.ni.htym.JFdo..I..ai..c2.A.oyyr.j9IF.hyl", "6jD..5.dqcn.5l5tpeACog.i2vfpfnoKgq.mx1Enwsqeymv5s3", "ciE.qaCbn.i5.n.usf...eah8.k.bm.J.lcq.6Eq.w..B.q0u2", "ka.etj.e...ln.l947jhdf..lfgridasgwp7cjm.fafk.gvm6o", "cgC.oaA9l7h5.l.rqdDD.c9f.xkj9kmHckbox6.otum8zqp0s4", "tba.qs.ikmttu9r.aenfmhleulqqlb6.ivrg8rcc..a.gqss7w", "nffhy..k.oyps4qa.dec.khipahw..e.lBu6.nm2g6ip9fAr.t", "g5odo.m6..mef7ded.rpi877fmgla..v9ohdjd.chidcm.p.eh", "w.kvNwe.GC.A.jDner.acztxz5nLCws.AQ.e.zv.t8xE5..EfF", ".q9pHz4w.AJC.hDfcpa.j.utCdtGzr..xLGg7.lekb.B5oJ.aG", "jnpsHjkp.tFo.d.m.icj..iqn6aEtr.E..A.jmy9.7..d4Jtft", ".5.cf.s.a4dgefchk8z...c2iuo.37au0g..o.pkhq.5..hc.h", "8cvl.6.9nbo.a.9lh7tuic.d.nbodh.Ddrifp5...kkdqhuak.", "m3p.g.p598.ih.fei7xtq2d.ktod.47r3i..mhm.eo7.srhfik", "3k.tx.Aftf.28l.upfzCni.k.tcs.pqL..kly2Fnxr.hx.y.s.", "qpltJ.f.CxIv.fxlam5d6untt.h..tpAw.E8.tva.3.z6bLy.z", "8mxu.9slyn.fkgkqhgntaoboch.A.rq.p.ub.dDfvgtpn6F.lj", ".hBi5tC.6c.p.rjqwlLGE.ods.A..fjxb.8zzpu..DgaGF5jwo", ".9.f.iw3b.afbi9l.aCzt3d......be.2.6..et.l.d1xu.aoe", "q.l3fo.a9cinmdkb..wrr7h4ptrfb..m8k.lj.hi9o.drthkho", "q5.3k.ic.f.o.am6e.s..a.7qpqje....okifn..6k3gmrm.cq", "LqfiuKlxqA.KJsH..v..EuDrLA.x.m..vCCykI5udxkAuIwIo.", "..tcejt3..cg.gcil9Ax.0d3.wpb28.v.f8nq..l.ra4vtg..h", ".lGn8vHibf2qlwkvBoQL.gri.....koCf.8D.rzBtHlcKI.kBo", "ofC.dmC.c...cpbruh.GA.i.kEu86.kC88..zhyuqAi4Ezebvf", "ihlmBi...oAmq7og6deg..f.l8bz.liynD..fks.m5nqb8D.9.", "wi5h.v.ptt.x.cx8.j.7jopmy..z.jfkq.zf.wfbdciu9oBy5.", "5hBqu3ycq.o16j6rndz.m.5h2tdpe.nI.rhkw.Dluq.ewk.6.5", "Glbdr.gsn.yEEm.cm.vlyp.mFvDuth.5.zysfD.o.rfvpCu.iG", "lfhjykd.snynq.oc2c.e9k..naf..i.ulBu.blo.i5jpadAp5r", ".cc5m.fjhmrw.ft.ghtk.h.ex.v.l96d.tqmdu.i.m7nmvoud.", "o.ioEoc.yt.swau.6i8b7qkor3gD.okxrHA5cqr5m...5c...w", "t7k1frlc9fjq.fmaidx...k7..tgd.3kalini.fj7...r.inhr", ".byhfiy5c19e.k8.pcEB.5d.hzpa1dgA4c4quevpn...zvg9.d", "voepHu.tAyIyB.zg9m55d.qsx6nGxrmuvKEb9wpam5rz..J..C", "gpuvIgpp.sFm.gqqf..o4.hr.b6FutrItIz8okCdvc.v..Krjq", "Bl.j1zEk7i.vqvpsAp.JJhuhyLF5.hmwg.eDB.uAo.igJK.pzu", "chDppbBa.8h50m0sr.E.tcaf.y.jak.I.kb.y6.pu.n9.rp.t.", "qfbgxp7.rpysu6s7.efaf.kis.lwohco.Bv95.i5d.h..jzt..", "alGt..Ee.cl32o4wthFGth.k.zjoeoq.hof..5Gr.wrdCqu..."};
    int inverseWalkSpeed = 99;
    int inverseDriveSpeed = 14;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 38757;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    vector<int> cars = {41, 33, 26, 12, 6, 38, 46, 5, 30, 19, 35, 27, 22, 36, 21, 36, 21, 36, 5, 27, 21, 6, 8, 46, 8, 25, 19, 48, 3, 30, 48, 37, 20, 44, 36, 28, 12, 38, 45, 9, 38, 41, 21, 37, 14, 43, 16, 28, 20, 40};
    vector<int> districts = {37, 31, 37, 9, 37, 48, 37, 30, 37, 21, 37, 49, 37, 47, 37, 49, 37, 30, 37, 5, 37, 14, 37, 11, 37, 38, 37, 44, 37, 46, 37, 48, 37, 42, 37, 38, 37, 0, 37, 28, 37, 46, 37, 21, 37, 16, 37, 12, 37, 39};
    vector<string> roads = {".bcYX..iT.q5.G.i..I3.......PZr.s.PJ3.k..cs..p.Q.J.", "b...W...j.G.v..7...o..3.r.R5DZ.2e...........q.Mc..", "c....g..IB..xulB.G.3G.Y..1..C.gI3iu...Phu5R..1....", "Y....L.g7Z....Mn....O..zE8t.hk..e.jj.hp..d1.KzXf.a", "XW....NRgI....s....M..TL..qsJJ..W.Fy..T.2x.xjXO.EA", "..gL....S..w.Un......F.d..7.E.2AMV.E..c.J.E..sb.O.", "....N..6..N.BLZxrp.mL......N..X.L..V8.Ov7..xdavt..", "i..gR.6.....0F.....v5x7..oPOgBE.....z.3m..4.t.l.M.", "TjI7gS...4.....P.L...PjRTc...e....WB..j........z..", "..BZI...4...ry.D....6Fxxuy.R.h..D.cL...C.8.1...ZC.", "qG....N......6.T.4PSCe.0....f.......c.i500.3G.Ug..", "5....w.......RhO.....ez..riozA.s.f.n..JQW..b...hR.", ".vx...B0.r.....Ym...s..pfgE.Mk.AJ.n..JC.N.5...nkg.", "G.u..ULF.y6R...a.xuPl0....sH.....O.A5...........f.", "..lMsnZ....h...Hk..8iX......a..YP..x1.3....n.t5Kh.", "i7Bn..x.PDTOYaH....LW..y4d..96..n.YYo..9..P.xTJ...", "......r.....m.k....k8..N..1.C1..fe....Ju..5.g.io.M", "..G...p.L.4..x....b.FV.fL.....p...i....ZxXM...JG..", "I.........P..u...b.H..kf...r.Zzd7....B...y.k.0s..E", "3o3.M.mv..S..P8Lk.H.n.............F.2z.....2h.xR..", "..GO..L5.6C.sliW8F.n.A.T......L.d..R..9.......f6BM", ".....F.xPFee.0X..V..A.d..m.....hl.M.upc...c..P...h", ".3Y.T..7jx.z......k..d...5dzM.2u...U1.W..E.pL....b", "...zLd..Rx0.p..yNff.T...5e.R...H..6F.A.....YDf..x.", ".r.E....Tu..f..4.L.....5..O.W.zUn.......E.A..O5q.e", "..18...ocy.rg..d.....m5e..q.....WB5..R.E...76.Ei..", ".R.tq7.P...iEs..1.....d.Oq...y..n...Rfc.vm.ZSUq...", "P5..s.NO.R.o.H....r...zR....c.H.r..i.B..qS...Xm.f.", "ZDChJE.g..fzM.a9C.....M.W..c.KV.....i..sR...rL...8", "rZ.kJ..Beh.Ak..61.Z.......y.K........xmxF.DR.S.p7s", "..g..2XE.........pz.L.2.z..HV......P.e......tf....", "s2I..A.....sA.Y...d..huHU.......EpD8..vT.....n..o.", ".e3eWML..D..J.Pnf.7.dl..nWnr...E.KQ.sVK..bk..7....", "P.i..V.....f.O..e........B.....pK..RRn.es..0.E.JCJ", "J.ujF...Wc..n..Y.i.F.M.6.5.....DQ...X....f...A.9.y", "3..jyEV.BL.n.AxY....R.UF...i..P8.R..6.YS...W..h..7", "......8z..c..51o...2.u1...R.i...sRX6......8.lOMB.O", "k..h........J.....Bz.p.A.RfB.xe.Vn....M..YPAZMw..b", "..PpTcO3j.iJC.3.J...9cW...c..m.vK..Y.M.3iZ.Yw0..Bq", "..h...vm.C5Q...9uZ.......E..sx.T.e.S..3...Y...5P..", "c.u.2J7...0WN....x......E.vqRF...s....i...W5qCC..b", "s.5dx....80......Xy...E...mS....b.f..YZ...R.vW..8V", "..R1.E.4....5..P5M...c..A....D..k...8P.YWR.idKz.b.", "....x.x..13b..n...k2..pY.7Z..R...0.W.AY.5.i.r.2.BL", "pq.Kj.dt..G....xg..h..LD.6S.r.t.....lZw.qvdr.....V", "..1zXsa.......tT..0..P.fO.UXLSfn7EA.OM0.CWK.......", "QM.XObvl..U.n.5JiJsxf...5Eqm.......hMw.5C.z2...5..", ".c.f..t.zZghk.K.oG.R6...qi...p...J9.B..P......5.p.", "J...EO.M.C.Rgfh.....B..x...f.7.o.C....B..8bB...p.2", "...aA...........M.E.Mhb.e...8s...Jy7Obq.bV.LV...2."};
    int inverseWalkSpeed = 71;
    int inverseDriveSpeed = 28;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 53306;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    vector<int> cars = {47, 39, 10, 3, 15, 42, 22, 13, 25, 35, 34, 14, 0, 23, 46, 11, 5, 20, 27, 32, 2, 5, 38, 10, 35, 10, 41, 13, 44, 45, 4, 41, 32, 42, 36, 11, 44, 37, 11, 31, 8, 38, 15, 35, 42, 36, 16, 48, 40, 17};
    vector<int> districts = {28, 13, 49, 20, 16, 30, 7, 20, 17, 3, 1, 32, 37, 16, 29, 47, 15, 6, 43, 20, 34, 6, 3, 0, 15, 45, 1, 35, 48, 11, 27, 9, 37, 49, 13, 25, 19, 35, 44, 37, 7, 28, 17, 9, 44, 11, 19, 18, 39, 33};
    vector<string> roads = {".uqseixljcsv7rAtekk9g24di9phodecabln6v7pltions7oBt", "u.avGkswMmesr352JdslkxukLEcKggHrykcnn5tpr8ee7oqf61", "qa.kzohmFf3hl8f7D5whbuplEAjEnfAsqfhdjfnehhh3adpmga", "svk.qB77vhh5ktAswiIofunxvyBvErsBkkx7oAk56Bwgs7wDBv", "eGzq.xxi5kzvfDME6tzlndcs4cD4Dr1r8lzqjIcqlHxvzvmDNF", "ikoBx.DxCksCkhnlxk8dmkl4Bq8A69x8rh7ufhnwve6oeya6pi", "xsh7xD.eCkd1prxpDiKrhzszCEBCEtzEqnx8ryp7bAxer4ADxt", "lwm7ixe.nckcetCtoiDjcngtnqznBokwcfv9iAc84AthrcqACv", "jMFv5CCn.pFAkIRK5zCrthhx0dI1Iw4vdrEwoNhwrMCBFArITK", "cmfhkkkcp.fi5iskn8q63f9gplmooalkb2ib6o7daogbggfntl", "se3hzsdkFf.dldjbD7AjbvppEBnErjAvqglalknbfml3e9sqjf", "vsh5vC1cAid.nqxpBhJpfxryACAADrxDolx7qxn59zwer3yCxs", "7rlkfkpek5ln.nwphep6993fkfojpcfh75kg4s2hdrihklcoyp", "r38tDhrtIidqn.82FaqhgurhIBaHfdDouh9lk6qno8bc3mnda1", "A5fAMnxCRsjxw8.8OjvqpDAoRJeQilMvDqftt5zvx9ikctvh16", "t27sElptKkbpp28.HbtjhwskJDdIifFrwidkm8rmoaeb6lpg83", "eJDw6xDo5nDBhFOH.xxnrcds47E3Ds3pcoAvkKfwrIxzBAlDQH", "kd5itkiiz87heajbx.sb5nihyuiylbunk8fadhgcdie39dkkkd", "kswIz8KDCqAJpqvtxs.jtloaBpgAchy7vnfBkprDBlexmFcdxq", "9lholdrjr6jp6hqjnbj.9c98qjhpi4mce3dh2m9khkafdm8hsj", "gkbfnmhct3bf9gphr5t9.jdispmspcome5i7anba8nh8ecioqj", "2xuudkznhfvx9uDwcnlcj.6gg6rfrgcdaeoq9y9rnwlrqv9qEw", "4upnclsgh9pr3rAsdio9d6.ggbrfrecg59nj6w3lgukmnobrBt", "dklxs4ztxgpyfhoksha8igg.wmbva5s6mc8qajisqg5ldu6aqi", "iLEv4BCn0pEAkIRJ4yBqsggw.cH0Hv3udqDvnNhwrLBBEAqHSK", "9EAycqEqdlBCfBJD7upjp6bmc.ybxnaidluvgEexsCrxxAfwLC", "pcjBD8BzImnAoaedEighmrrbHy.H3cDhwj3tk8rvv46l8wi2ga", "hKEv4ACn1oEAjHQI3yApsffv0bH.Gu3tcpDvmMgwqKAADApGRJ", "ognED6EBIorDpfiiDlciprraHx3G.dDfxl6wkcsyy87pczh0kf", "dgfrr9towajrcdlfsbh4cge5vncud.rcj78k7hfmlf5f9o9cnf", "eHAs1xzk4lAxfDMF3uymoccs3aD3Dr.q9mzsjIdsnHxxAwmDOF", "crsBr8EwvkvDhovrpn7cmdg6uihtfcq.nhfvdpjxumcskz4fxp", "ayqk8rqcdbqo7uDwckveea5mddwcxj9n.dsibA3jezpnrnhwFw", "bkfklhnfr2gl5hqio8n35e9cqljpl7mhd.fd4m8fdldcdickrj", "lchxz7xvEilxk9fdAffdion8Du3D68zfsf.qgansr72i6tf4ha", "nnd7qu89wba7gltkvaBh7qjqvvtvwksvidq.isg14to8k4qvtn", "6njojfrio6lq4ktmkdk2a96angkmk7jdb4gi.o7khndhgn7kum", "v5fAIhyANokxs658KhpmnywjNE8MchIpAmaso.vuv3cj8tpb74", "7tnkcnpch7nn2qzrfgr9b93ihergsfdj38ng7v.hduljnlesAs", "ppe5qw78wdb5hnvmwcDkarlswxvwymsxjfs1kuh.4vram3sxvp", "lrh6lvb4raf9doxordBh8ngqrsvqylnuedr4hvd4.wqcn8pxyr", "t8hBHeAAMomzr89aIilknwugLC4K8fHmzl7tn3uvw.al8vn7b7", "iehwx6xtCglwibiexeeahlk5Br6A75xcpd2odclrqa.i7sc6kc", "oe3gvoehBb3ehckbz3xf8rmlBxlApfxsnci8hjjacli.c9ooke", "n7aszerrFgerk3c6B9mdeqndEx8Dc9Akrd6kg8nmn87c.mjbd5", "sod7vy4cAg93lmtlAdFmcvouAAwAzowznit4ntl38vs9m.vyto", "7qpwmaAqrfsycnvplkc8i9b6qfiph9m4hcfq7pespncojv.hxo", "ofmDD6DAInqCodhgDkdhoqraHw2G0cDfwk4vkbsxx76obyh.jd", "B6gBNpxCTtjxya18QkxsqEBqSLgRknOxFrhtu7Avybkkdtxj.8", "t1avFitvKlfsp163HdqjjwtiKCaJffFpwjanm4spr7ce5ood8."};
    int inverseWalkSpeed = 53;
    int inverseDriveSpeed = 16;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 24984;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    vector<int> cars = {47, 39, 10, 3, 15, 42, 22, 13, 25, 35, 34, 14, 0, 23, 46, 11, 5, 20, 27, 32, 2, 5, 38, 10, 35, 10, 41, 13, 44, 45, 4, 41, 32, 42, 36, 11, 44, 37, 11, 31, 8, 38, 15, 35, 42, 36, 16, 48, 40, 17};
    vector<int> districts = {28, 13, 49, 20, 16, 30, 7, 20, 17, 3, 1, 32, 37, 16, 29, 47, 15, 6, 43, 20, 34, 6, 3, 0, 15, 45, 1, 35, 48, 11, 27, 9, 37, 49, 13, 25, 19, 35, 44, 37, 7, 28, 17, 9, 44, 11, 19, 18, 39, 33};
    vector<string> roads = {"............u......v...8..........................", "........................8..n......A..r.1..l2m.....", ".......................................i..........", "........................q.........................", "........................u.........................", "....................................6.....9.......", "..........D.......................................", ".........6v.......................................", ".................................8................", ".......6..........................................", "......Dv..................v............L..........", ".....................................o............", "u.............................m................x..", "...............................i..................", "............................................m....h", "...................U...............c..M...v..N..x.", ".......................f..........................", ".........................C...........a............", "......................p...................l.......", "v..............U.........................I........", ".........................................m........", "................................................r.", "..................p...............................", "8...............f.................................", ".8.qu.............................................", ".................C................................", "..........v.......................................", ".n................................................", "................................c.................", "...............................c..................", "............m.....................................", ".............i...............c..............c.....", "............................c.......d.............", "........8..........................f..............", ".A................................................", "...............c.................f......i.........", ".....6..........................d.................", ".r.........o.....a................................", "...............M..................................", ".1i.......L.......................................", "...................................i..............", "...................Im.............................", ".l...9.........v..l...........................w...", ".2................................................", ".m............m................c..................", "...............N..................................", "..........................................w.......", "............x.....................................", "...............x.....r............................", "..............h..................................."};
    int inverseWalkSpeed = 76;
    int inverseDriveSpeed = 22;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 209982;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    vector<int> cars = {47, 39, 10, 3, 15, 42, 22, 13, 25, 35, 34, 14, 0, 23, 46, 11, 5, 20, 27, 32, 2, 5, 38, 10, 35, 10, 41, 13, 44, 45, 4, 41, 32, 42, 36, 11, 44, 37, 11, 31, 8, 38, 15, 35, 42, 36, 16, 48, 40, 17};
    vector<int> districts = {28, 13, 49, 20, 16, 30, 7, 20, 17, 3, 1, 32, 37, 16, 29, 47, 15, 6, 43, 20, 34, 6, 3, 0, 15, 45, 1, 35, 48, 11, 27, 9, 37, 49, 13, 25, 19, 35, 44, 37, 7, 28, 17, 9, 44, 11, 19, 18, 39, 33};
    vector<string> roads = {".......................D..............I...........", ".........3.......................................X", "...................H........X.....................", "...........4........N.............................", ".................8....................X...........", "........u.....................................X...", "..............w...........X.......................", "..........................................1.4.....", ".....u...............4............................", ".3.........................................H......", "...........................w......................", "...4.........C....................................", ".................d............d...................", "...........C......n...............................", "......w..........................Z................", "................n...u.............................", "...............n.............r....................", "....8.......d.....................................", ".............n................R...................", "..H...............................2...............", "...N...........u..................................", "........4...........................E.............", "..........................................V..j....", "D.......................................p.........", "..............................................TD..", "...............................M.......i..........", "......X..................................a........", "..........w.......................O...............", "..X................................b..............", "................r........................I........", "............d.....R...............................", ".........................M...........l............", "...................................G....R.........", "..............Z........................u..........", "...................2.......O......................", "............................b...G.................", ".....................E.....................1......", "...............................l...............R..", "I...X.............................................", ".........................i.......u................", ".......................p........R.................", "..........................a..I....................", ".......1..............V...........................", ".........H..........................1.............", ".......4........................................u.", "......................j...........................", ".....X..................T.........................", "........................D............R............", "............................................u....n", ".X..............................................n."};
    int inverseWalkSpeed = 88;
    int inverseDriveSpeed = 54;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1674678;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    vector<int> cars = {47, 39, 10, 3, 15, 42, 22, 13, 25, 35, 34, 14, 0, 23, 46, 11, 5, 20, 27, 32, 2, 5, 38, 10, 35, 10, 41, 13, 44, 45, 4, 41, 32, 42, 36, 11, 44, 37, 11, 31, 8, 38, 15, 35, 42, 36, 16, 48, 40, 17};
    vector<int> districts = {28, 13, 49, 20, 16, 30, 7, 20, 17, 3, 1, 32, 37, 16, 29, 47, 15, 6, 43, 20, 34, 6, 3, 0, 15, 45, 1, 35, 48, 11, 27, 9, 37, 49, 13, 25, 19, 35, 44, 37, 7, 28, 17, 9, 44, 11, 19, 18, 39, 33};
    vector<string> roads = {"..........................Z........Z..............", ".......Z.........................................Z", "...................Z....................Z.........", ".......Z............Z.............................", "........Z.............Z...........................", "..........................................Z...Z...", "...............Z...........................Z......", ".Z.Z..............................................", "....Z...........................Z.................", ".......................Z..........Z...............", "..................Z...............................", "....................................ZZ............", "......................Z.......Z...................", "............................................Z..Z..", ".....................Z...Z........................", "......Z......................Z....................", "...............................Z................Z.", "......................................Z..........Z", "..........Z.......................Z...............", "..Z....................................Z..........", "...Z.....................................Z........", "..............Z.....................Z.............", "....Z.......Z.....................................", ".........Z.................................Z......", ".....................................Z.......Z....", "..............Z.........................Z.........", "Z........................................Z........", ".............................Z.....Z..............", ".................................Z.....Z..........", "...............Z...........Z......................", "............Z.................................Z...", "................Z................Z................", "........Z...................................Z.....", "............................Z..Z..................", ".........Z........Z...............................", "Z..........................Z......................", "...........Z.........Z............................", "...........Z............Z.........................", ".................Z.............................Z..", "...................Z........Z.....................", "..Z......................Z........................", "....................Z.....Z.......................", ".....Z..........................................Z.", "......Z................Z..........................", ".............Z..................Z.................", "........................Z.........................", ".....Z........................Z...................", ".............Z........................Z...........", "................Z.........................Z.......", ".Z...............Z................................"};
    int inverseWalkSpeed = 88;
    int inverseDriveSpeed = 25;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1493022;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    vector<int> cars = {47, 39, 10, 3, 15, 42, 22, 13, 25, 35, 34, 14, 0, 23, 46, 11, 5, 20, 27, 32, 2, 5, 38, 10, 35, 10, 41, 13, 44, 45, 4, 41, 32, 42, 36, 11, 44, 37, 11, 31, 8, 38, 15, 35, 42, 36, 16, 48, 40, 17};
    vector<int> districts = {28, 13, 49, 20, 16, 30, 7, 20, 17, 3, 1, 32, 37, 16, 29, 47, 15, 6, 43, 20, 34, 6, 3, 0, 15, 45, 1, 35, 48, 11, 27, 9, 37, 49, 13, 25, 19, 35, 44, 37, 7, 28, 17, 9, 44, 11, 19, 18, 39, 33};
    vector<string> roads = {".dlg5gn97..t.egghoc8ts.ps7.wzs.spal77dqy5.fme.t.p.", "d.ukjmb58dfo.6q.np.j.fed.92jneef.m.kko.mf.j.4dkkd.", "lu.9kB..lFI.L.zd6..dABzIttwO.Iy.5rvpf.i.gLbGxHuewm", "gk9.i..lcxxgBq.328eaqr.yj.mEu.oz9plne.buaA0w.y.dld", "5jki.gt.cozxxkekir87zyguxcmBFy..p.r...tE8Ah.jvy5u.", "gmB.g..hmgy.si..y...FD.p...wKx.uFa..ltHJmywojrHmB.", "nb..t..hgncgk...pmwq5.qial9.bd2gv.1vttk.mg.hfga.2.", "95.l.hh.8b.sh4kkosmhn.8ep3.ltikh.hffhmsr..kc3fp..r", "78lccmg8.kompdobf.g.m.gmk..sr...mhefc.kq.qbkbllchk", ".dFxognbk.iC.6.vz..ssp88x..e.gpdHnl.sy.wo.w7.ax.qB", ".fIxzyc.oi.t...uBzFzdapa.oc.h1c.H.czADxfv.waf.m.eu", "to.gx.gsmCt.BvKdj..rgiC..v....g.kDh.u.6.pxgytx7.e.", "..LBxskhp..B..yy.FF..kj....3..l..x..AEE.v.A4.3vAnB", "e6.qki.4d6.v..m..wrmn..9r..gs.kdAkfj.rw.igp71.r..u", "gqz.e..ko..Kym..xF.m.GevJ.sBO.F.E7A9jr.N.DwtnwJkEI", "g.d3k..kbvudy...67hcmns....B.uk.c.hog.9.b.2.mvgfha", "hn62iypofzBj..x6..datuvBmopHxBrC.pone7dx..3.rBndog", "op.8r.ms..z.FwF7..m.oqAC..qHrAnC9ymwnh.rj.8B.B.ml7", "c..e8.wmg.F.Fr.hdm..C.pBxksIGEyEifud45qG9G.zq.y3.s", "8jda7.qh.szr.mmca...wvl.s.m.Bysy.eoc35.A.Baulwt.r.", "t.AqzF5nmsdg.n.mtoCw.2wm9rf...3jyD.C...3..p.lk..4i", "sfBryD...paik.Gnuq.v2.t.bp.k7c2g.C.A.yn5r..jjhby4.", ".ez.g.q8g8pCj.esvAplwt.g....Bnsl.eodkrBAjosf...ls.", "pdIyupiem8a..9v.BCB.m.g.thb6r...I.ht....s8.1a.t..z", "s.tjx.apkx...rJ.m.xs9b.t...w.o.rpDb.v.c.pqjs.r...8", "79t.c.l3..ov....o.k.rp.h..co...lvc.bfluw.olf7i.f.u", ".2wmm.9...c...s.pqsmf..b.c.hlbccw..nnqq.i..95aj..o", "wjOEBw.lse..3gBBHHI..k.6woh...m4OBlADIGpz5...6.EoD", "zn.uFKbtr.h..sO.xrGB.7Br..l...8nBJdH.Cn..ltrr.9D..", "seI.yxdi.g1....uBAEy.cn.o.b...e..zdyzD.hu..8e...gv", ".eyo..2k.pcglkFkrnys32s...cm8e.hwA.....7p.m..i..1h", "sf.z.ugh.d...d..CCEyjgl.rlc4n.h.Jygxz.Bl.3.5d2rAjy", "p.59pFv.mHHk.AEc.9i.y..IpvwOB.wJ.wuukcd.jKaGyIqjth", "amrp.a.hhn.Dxk7.pyfeDCe.Dc.BJzAyw.v1b.AIeB.s.v.czB", "l.vlr.1felch.fAhomuo..ohb..ldd.guv.tqrkc.gjgdgbq3h", "7kpn..vff.z..j9onwdcCAdt.bnAHy.xu1t.9.yGcAmrjuBaxz", "7kfe.lthcsAuA.jgen43..k.vfnD.z.zkbq9.7q.5.d....0tr", "do...ttm.yD.Err.7h55.yr..lqICD..c.r.7.kC.F9z.B.6.n", "q.ibtHksk.x6Ew.9d.q..nB.cuqGn..BdAkyqk.olBb.uAdpi3", "ym.uEJ.rqwf...N.xrGA35A..w.p.h7l.IcG.Co.xjt..naD8.", "5fga8mm..ovpvi.b.j9..rjsp.iz.up.je.c5.lx.x9qhsq.nm", "..LAAyg.q..x.gD...GB..o8qo.5l..3KBgA.FBjx.z9.6qCiy", "fjb0hw.kbwwgApw238.ap.s.jl..t.m.a.jmd9bt9z.v.wkdk.", "m.Gw.ohck7ay47t..Bzu.jf1sf9.r8.5Gsgr.z..q9v..2.v..", "e4x.jjf3b.ft.1nmr.qllj.a.75.re.dy.dj..u.h......mis", ".dHyvrgfla.x3.wvBB.wkh..ria6..i2Ivgu.BAns6w2..rxjy", "tku.yHaplxm7vrJgn.yt.b.t..j.9..rq.bB..daqqk..r...9", ".ked5m..c...A.kfdm3..yl..f.ED..Ajcqa06pD.Cdvmx..t.", "pdwluB2.hqeen.Ehol.r44s....o.g1jtz3xt.i8nik.ij.t.f", "..md...rkBu.BuIag7s.i..z8uoD.vhyhBhzrn3.my..sy9.f."};
    int inverseWalkSpeed = 91;
    int inverseDriveSpeed = 45;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 65953;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    vector<int> cars = {47, 39, 10, 3, 15, 42, 22, 13, 25, 35, 34, 14, 0, 23, 46, 11, 5, 20, 27, 32, 2, 5, 38, 10, 35, 10, 41, 13, 44, 45, 4, 41, 32, 42, 36, 11, 44, 37, 11, 31, 8, 38, 15, 35, 42, 36, 16, 48, 40, 17};
    vector<int> districts = {28, 13, 49, 20, 16, 30, 7, 20, 17, 3, 1, 32, 37, 16, 29, 47, 15, 6, 43, 20, 34, 6, 3, 0, 15, 45, 1, 35, 48, 11, 27, 9, 37, 49, 13, 25, 19, 35, 44, 37, 7, 28, 17, 9, 44, 11, 19, 18, 39, 33};
    vector<string> roads = {"......c...Q..n........2.Mf.....lV.....6j.c...G..rK", "....C...RK..9....E.vP..F.....z.s..wz.3.gCHz..h.42.", "...V.V.....RKe...F.Bh...inDG3Xy.....H.r....Z...g..", "..V...S..Z....X.D...R.Q....4s....gfte.K..1.bvZA.N.", ".C.......gWO.d.H.W.Y...PS....Y..R.u.7..K....C...5.", "..V....Maa.V.3.......p....Xc....V..1...5Tz.V......", "c..S...y.X.....Fk...bs.8........Ju..J...3....kwtp.", ".....My..Pm..w6.Xl..T0...qI......a.Rz.7L5..M.R.Tm.", ".R...a...Vlq3l.YiDh.I.A....KS.S.l.s.Ay.G......2...", ".K.ZgaXPV..v.q....fesw..4..IH..7....j.e.Yh.C...AEL", "Q...W..ml..l...r...5...o.E..r.W..m..0U.n........H.", "..R.OV..qvl.en.M....p.h...n......1.jh..Yb.W.0Sg.L.", ".9K.....3..e..N........n...8r..m..n.O..EG..QvFqm..", "n.e.d3.wlq.n....q.z...m.....5.i.....u7.s...nb..N..", "...X...6....N..c5.a......Os0....z.HK...y..m.J.s...", "....H.F.Y.rM..c..n......l....E.mg...1..ao...s.d.2.", "...D..kXi....q5..d.K...OW..K.k.4...Y..A6..c.....7.", ".EF.W..lD......nd..1...x.s.g...P.C....ig...Y..4.I.", "........hf...za.....i...z.5.R..t.Wy.1....A.3.....e", ".vB.Y....e5.....K1....Z.o..pI.N......U.2.Q.2zncQ..", ".PhR..bTIs.p......i..i.oU.hX.3..kx...D.3.y..C.ybK.", ".....ps0.w..........i.TG..Sw0.V.6..Q..Rp.nBy.YO..R", "2..Q....A..h.m.....Z.T...u.J.Gj.go.uVu...........w", ".F..P.8...o.n...Ox..oG....6t....j..n....H..Fa..KJ.", "M.i.S....4.....lW.zoU....W....J...f..m.....Rw..J.e", "f.n....q..E...O..s....u.W........1g...ou.m....f.y.", "..D..X.I...n..s...5.hS.6..........a...i..hZ.......", "..G4.c..KI..8.0.Kg.pXwJt....Zh.R.T2S.h....Au..e.I.", "..3s....SHr.r5....RI.0.....Z.n.G.K...k..R...EQ8...", ".zX.Y..........Ek...3.G....hn..w..is...U..5.U.u.Mi", "..y.....S.W..i.....N.Vj.J........t.SlR.f0....H...Z", "ls.......7..m..m4Pt........RGw...5..1.f.u.J.S.58U.", "V...RVJ.l.....zg....k6gj............cIC..J....z.C.", "...g..ua..m1.....CW.x.o..1.TK.t5..vSE..hn.7.m...u4", ".w.fu...s...n.H...y.....fga2.i...v....8vC0..H..y..", ".z.t.1.R...j..K.Y....Qun...S.sS..S..y...Pe..i....c", "..He7.JzAj0hOu.1..1...V.......l1cE.y...b.zq.Sc..k.", ".3......y.U..7.....UD.u.m..hk.R.I.....gP..1..r....", "6.rK...7.e......Ai...R...oi....fC.8..g.X.Z..C.gHYy", "jg..K5.LG.nYEsya6g.23p...u...Uf..hv.bPX..T.sB9...g", ".C...T35.Y.bG..o.......H....R.0u.nCP......Ns.kq.fX", "cH.1.z...h........AQyn...mh.....J.0ez.ZT...Q..z...", ".z.........W..m.c....B....ZA.5.J.7..q1..N...W.JZr.", "..Zb.V.M.C..Qn...Y32.y.FR..u...........ssQ.....bH.", "...vC......0vbJs...zC..aw...EU.S.mHiS.CB..W...eD2E", "Gh.Z..kR...SF......n.Y......Q.H.....cr.9k.........", "...A..w.2..gq.sd.4.cyO...f.e8u.5z.....g.qzJ.e...m.", ".4g...tT.A..mN.....Qb..KJ......8..y...H...ZbD....W", "r2.N5.pm.EHL...27I..K..J.y.I.M.UCu..k.Y.f.rH2.m..i", "K........L........e..Rw.e....iZ..4.c..ygX...E..Wi."};
    int inverseWalkSpeed = 40;
    int inverseDriveSpeed = 13;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 15262;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    vector<int> cars = {13, 26, 48, 49, 42, 13, 8, 21, 47, 28, 5, 23, 14, 47, 7, 1, 38, 23, 36, 25, 35, 28, 45, 49, 9, 13, 22, 1, 43, 33, 35, 21, 20, 30, 10, 15, 5, 7, 23, 31, 48, 32, 8, 34, 28, 43, 15, 21, 45, 13};
    vector<int> districts = {27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32};
    vector<string> roads = {".kDAfwjnw78sBm9mdmvC1Eilmj8rgeeAanct86tnkkurcmbttD", "k.zuuwk8frr8obq36ojAhms518pnkw5zbocacde9tjjruaa8kz", "Dz.5v7jJpEBDjLyDBgj2BtptzIycmAz3EfIvFCnqnjhbBKuAg0", "Au5.v9gDjCAxdGxyxed7ynpouDw8kzu8AdDpByhknfbaAFqua4", "fuvv.nfAza7CCA5xpgwtfI5svx5mc4prohrAnkws7huj5AiBsw", "ww79n.cFpwuBmHrAx9j5vvhrwEq8gsv3z8Duzwnofdh5tGozf8", "jkjgfc.tkljrlvgok3giisaglsf73kigm3pmmjhfa1e7kubpcj", "n8JDAFt.nvw9w3w5axrJlsAf93vxsBbIcxbgegniBssAA1ictJ", "wfpjzpkn.BAf8ryill5qt8vaepxgmDjqqls6rq27vi7mCpjb9o", "7rECawlvB.2zGt5tlnAC8Kfstr5th8lAhokzgeythmyr5uhAxF", "8rBA7ujwA2.AEv2ullyA9Jcrts3rf5lyjmlzhfxsfkxp3vhAvC", "s8DxCBr9fzA.ndz6eukEqiAa6cxsrEdDiuj7klfcBplwDbj3mC", "BojdCmlw8GEn.zCqtm5lz9ximxBfpGqmxlAfyx8ewk7kGxpk8i", "mbLGAHv3rtvdz.v8ayvMkwAhc2uztAcKbz9kcfqlCtvCz1jgwL", "9qyx5rgwy52zCv.tliwxaH9qss0oc4lvjjmyifvrcium3wfztz", "m3DyxAo5itu6q8t.8smEknw936sroz8Dcscbdfhcxnmvx6e8nD", "d6Bxpxkallletal8.nnBbspa87koir1A4o6g56jdqinrpa8fnB", "mogeg93xlnlumyisn.hfltajovh66lldp0topmjh94f3lyfscg", "vjjdwjgr5Ayk5vwmnh.ktcrcisvbjAlksgucsr49re1gAtjg3i", "CA27t5iJqCAElMxEBfk.BvnuAJwclyz1EeIwECprliiazKtBh3", "1hByfvilt89qzkakbltB.Chjki9pefcz8mbr74rljispdl9rrC", "EmtnIvss8KJi9wHnstcvC.DikuFovLqvxtzbzyagDqetLusfgs", "ispp5haAvfcAxA9wparnhD.qux9h8aolpbsxolsp1cpdbAhznq", "l5tosrgfasraihq9ajcujiq.5fohhv8tfjh7gf83qedmuga8dt", "m1zuvwl9ett6mcs38oiAkku5.arnlx7zdoe8efd8ujirwac6jz", "j8IDxEs3prscx2s67vsJiuxfa.rwqy9H8w7iacoizqszw2gftI", "8pyw5qfvx53xBu0skhvw9F9orr.nb6kuiilwheupbgtl5uexry", "rnc8m87xgtrsfzoro6bcpohhnwn.brmbs5vlspefg694syhp7c", "gkmkcg3smhfrptcoi6jlev8hlqbb.ggkj7nojgkg84hagt9qgn", "ewAz4skBD85EGA4zrlAyfLavxy6rg.qwomrDnkAwclyo1BlExB", "e5zupvibjlldqcl81llzcqo879kmgq.y6m8f77hbpglppb6ekz", "Az38r3gIqAyDmKvDAdk1zvltzHubkwy.DcGwDAoqjhi8xJsAg5", "abEAozmcqhjixbjc4psE8xpfd8isjo6D.q3m03oirlrtncakrF", "nofdh83xlomulzjso0gemtbjowi57mmcq.toqniha4e3myfscf", "ccIDrDpbskljA9mc6tuIbzshe7lvnr8G3t.n36qluouxpadluI", "tavpAumg6zz7fkybgocwrbx78iwloDfwmon.nn77xkdqCih4fu", "8cFBnzmerghkycid5psE7zogeahsjn7D0q3n.2pjqlstldalrF", "6dCykwjgqeflxfff6mrC4ylffcepgk7A3n6n2.oiniqrjf8mqC", "tenhwnhn2yxf8qvhjj4pras8douekAhooiq7po.5sf5jAohc7n", "n9qksofi7tscelrcdh9rlgp38ipfgwbqihl7ji5.pc9jvkbaaq", "ktnn7faBvhfBwCcxq9rljD1quzbg8cpjrauxqnsp.cocdBizmo", "kjjfhd1simkpktini4eiiqcejqg64lghl4oklifcc.c8ltanaj", "ujhbuhes7yxl7vumnf1isepdist9hylireudsq59oc.eytii1g", "rrbaj57AmrpwkCmvr3gaptdmrzl4aop8t3xqtrjjc8e.pBjucc", "cuBA5tkAC53DGz3xplAzdLbuww5sg1pxnmpCljAvdlyp.zkDxC", "maKFAGu1puvbx1w6aytKluAga2uytBbJcyaidfokBttBz.ieuK", "bauqiobijhhjpjfe8fjt9shacgeh9l6safdha8hbiaijki.ihu", "t8AuBzpcbAA3kgz8fsgBrfz86fxpqEeAksl4lmcazniuDei.jz", "tkgasfct9xvm8wtnnc3hrgndjtr7gxkgrcufrq7ama1cxuhj.f", "Dz04w8jJoFCCiLzDBgi3CsqtzIycnBz5FfIuFCnqojgcCKuzf."};
    int inverseWalkSpeed = 91;
    int inverseDriveSpeed = 17;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 83750;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    vector<int> cars = {13, 26, 48, 49, 42, 13, 8, 21, 47, 28, 5, 23, 14, 47, 7, 1, 38, 23, 36, 25, 35, 28, 45, 49, 9, 13, 22, 1, 43, 33, 35, 21, 20, 30, 10, 15, 5, 7, 23, 31, 48, 32, 8, 34, 28, 43, 15, 21, 45, 13};
    vector<int> districts = {27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32};
    vector<string> roads = {".............m.........f.....q......p....f......5.", "..........t......................s....h.....n.....", "...........d.n...........s........................", "........................................h..C......", ".......................7..........................", "................................................d.", ".....................................e............", "..................................w...............", ".........k........................x.......m.....p.", "........k......7..................................", ".t..................s..................k..........", "..d...............................................", "..............................................t...", "m.n...............o...............................", ".................................................0", ".........7.................m......................", "..............................k...................", ".........................A........................", ".............o....................................", "..........................................o.......", "..........s.......................................", ".........................................t........", ".............................................v....", "f...7............................9................", "............................e...........d.........", "..s..............A................................", "................................................p.", "...............m..................................", "........................e.........................", "q.................................................", "................k.......................h......g..", "......................................b...........", "........................................o.........", ".s.....................9..........................", ".......wx.........................................", "........................................h.........", "p....................................n............", "......e.............................n.............", ".h.............................b..................", "..........k.......................................", "...h....................d.....h.o..h............iv", "f....................t............................", "........m..........o..............................", "...C..............................................", ".n................................................", "......................v..........................b", "............t....................................t", "..............................g...................", "5....d..p.................p.............i.........", "..............0.........................v....bt..."};
    int inverseWalkSpeed = 64;
    int inverseDriveSpeed = 48;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 376656;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    vector<int> cars = {13, 26, 48, 49, 42, 13, 8, 21, 47, 28, 5, 23, 14, 47, 7, 1, 38, 23, 36, 25, 35, 28, 45, 49, 9, 13, 22, 1, 43, 33, 35, 21, 20, 30, 10, 15, 5, 7, 23, 31, 48, 32, 8, 34, 28, 43, 15, 21, 45, 13};
    vector<int> districts = {27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32};
    vector<string> roads = {"..................o............................w..", "............................V........2............", ".....................P........................f...", "...............2.................................I", "........g..............................4..........", "...................t...............X..............", "..........6.................................p.....", "...................6.......................R......", "....g..................k..........................", "..........CD......................................", "......6..C........................................", ".........D................f.......................", "....................F.............J...............", "................9......a..........................", "...............W.......................8..........", "...2..........W...................................", ".............9......k.............................", "..............................1.................Y.", "o.........................................A.......", ".....t.6..........................................", "............F...k.................................", "..P................................7..............", ".........................6....S...................", "........k....a....................................", "............................5....C................", "......................6......E....................", "...........f........................0.............", ".............................................p....", ".V......................5.........................", ".........................E..........q.............", ".................1....S...........................", ".....................................O....i.......", "........................................7.........", "........................C.............B...........", "............J...............................k.....", ".....X...............7............................", "..........................0..q....................", ".2.............................O..................", ".................................B...............z", "....4.........8...................................", "................................7.............R...", ".............................................m.M..", "..................A............i..................", ".......R........................................E.", "......p...........................k...............", "...........................p.............m........", "..f.....................................R.........", "w........................................M........", ".................Y.........................E......", "...I..................................z..........."};
    int inverseWalkSpeed = 93;
    int inverseDriveSpeed = 59;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 4688860;
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    vector<int> cars = {13, 26, 48, 49, 42, 13, 8, 21, 47, 28, 5, 23, 14, 47, 7, 1, 38, 23, 36, 25, 35, 28, 45, 49, 9, 13, 22, 1, 43, 33, 35, 21, 20, 30, 10, 15, 5, 7, 23, 31, 48, 32, 8, 34, 28, 43, 15, 21, 45, 13};
    vector<int> districts = {27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32};
    vector<string> roads = {"................Z................................Z", "...........Z..Z...................................", "...Z.........................................Z....", "..Z............................................Z..", ".......................ZZ.........................", ".............Z..............Z.....................", "..................Z.................Z.............", "........Z................Z........................", ".......Z...........Z..............................", "......................Z..............Z............", ".................Z.......Z........................", ".Z...........................Z....................", "................................Z...............Z.", ".....Z............................Z...............", ".Z............................Z...................", "..........................Z...Z...................", "Z...........................................Z.....", "..........Z..................Z....................", "......Z...................................Z.......", "........Z........................Z................", "...........................Z................Z.....", "......................Z...Z.......................", ".........Z...........Z............................", "....Z....................................Z........", "....Z.........................................Z...", ".......Z..Z.......................................", "...............Z.....Z............................", "....................Z.............................", ".....Z.....................................Z......", "...........Z.....Z................................", "..............ZZ..................................", ".................................Z........Z.......", "............Z.....................................", "...................Z...........Z..................", ".............Z..........................Z.........", "....................................Z.Z...........", "......Z............................Z..............", ".........Z.......................................Z", "...................................Z....Z.........", ".........................................Z.Z......", "..................................Z...Z...........", ".......................Z...............Z..........", "..................Z............Z..................", "............................Z..........Z..........", "................Z...Z.............................", "..Z.............................................Z.", "........................Z......................Z..", "...Z..........................................Z...", "............Z................................Z....", "Z....................................Z............"};
    int inverseWalkSpeed = 65;
    int inverseDriveSpeed = 32;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 6062546;
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    vector<int> cars = {13, 26, 48, 49, 42, 13, 8, 21, 47, 28, 5, 23, 14, 47, 7, 1, 38, 23, 36, 25, 35, 28, 45, 49, 9, 13, 22, 1, 43, 33, 35, 21, 20, 30, 10, 15, 5, 7, 23, 31, 48, 32, 8, 34, 28, 43, 15, 21, 45, 13};
    vector<int> districts = {27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32};
    vector<string> roads = {".el3ln5.saloo.he5kacooaj9aao28.9eg28..epdgham.....", "e.gbhffm.c8.mqw..g.l.jioa.4tgdo...b8e.3.h..ph5sfa2", "lg.i2..k.bnuD.C9p2mhiAfe.leh.rfn7yknp..yw.6sykE5bj", "3bi.hj8ct7j.plk..gab.o..5b7m6agaa.1869cpfgedmhl.jc", "lh2h.5qhF9pwEDAap0k.fBdbbjfeo.d..w.norlzw.3qzmE8dk", "nf.j5.rmDc.tCE.9q5oklzihdnekqrip8..nqsjxwp8uxiF.8.", "5f.8qr.iogkmi.g.0p.iukgqe.d.33o.jh6711el7m.dikdt.e", ".mkchmi.FavAAtjihh22cB49c1.dd.74..d.gk.Bq3d9zsspr.", "s..tFDoF.zhb6mDunFD.P3.Lw.qP.kKCz.rkplj6.J.B5kpCw.", "acb79cgaz..rwtq7f8.8.u5b.b8gdhbc3n9f..ftne6hsitfff", "l8njp.kvh..6.sC..ouuCerx.vd.mhxukBidkj6aizpwc3.le6", "o.u.wtmAbr6.erD.l..z.9w..z...i.yrEmf.kb4hEw.89..kb", "omDpECiA6w.e.f.ti.yBM.yHtzoM.f.xxyn.kgiaa.Cw6l.Cwj", ".q.lDE.tmtsrf.hudC..GksCrr.GfcAowlj.ebno9wA..t2FB.", "hwCkA.gjDqCD.h.wiz.lv.m..hswfkreu4ko..vC.kw9yBfFEv", "e.9.a9.iu7..tuw.g9..nqd.5i4mh.ij5ubdg.ao.manobva8.", "5.p.pq0hnf.lidig...itjg.dgcu33oeii5501cl.mmehierod", "kg2g05phF8o..Cz9...efBcbaie..qck5wimnq.zv.3pylD8dk", "a.mako.2D.u.y......4fz5c.0hgbja1fccjehoA.5f6x.pqrn", "clhb.ki2.8uzB.l.ie4..B27a3gbel56bh.kgkn.q.acyrtmon", "o.i.flucP.C.MGvntff..Ld4je.0qx5.hqovswwK.admJzF..w", "ojAoBzkB3ue9.k.qjBzBL..GsAmLogFyvBmf.hf4..Ay1hnzs.", "aif.dig4.5rwysmdgc52d...75.d..779iahei.xo.9cwos.m.", "joe.bhq9Lbx.HC...bc74G...bk4ms.e.pkqorrFx9...uB.or", "9a.5bdecw...tr.5da.ajs7..c5j.fdd4.7cc.d.kg8hpgsfe.", "a.lbjn.1.bvzzrhigi03eA5bc.hfck92fdckfioAo5f..sqqro", "a4e7fed.q8d.o.s4cehg.m.k5h...cjh.q78bd7lh.dkk.qfc6", "othmek.dPg..MGwmu.gb0Ld4jf..rx5igsp...wKCb.nJ.Gnsw", "2g.6oq3d.dm..ffh3.beqo.m.c.r.7ka.e5.25.pchk9mlfrpg", "8dra.r3.khhifck.3qjlxg.sfkcx7...kl8441..4pohehds.c", ".ofgdio7Kbx..Arioca55F7.d9j5k..ccmipm..F...hDuzl..", "9.na.p.4Ccuyxoejek16.y7ed2hia.c.gabid..zm7h4ws..sn", "e.7a.8j.z3krxwu5i5fbhv9.4f.g.kcg.r.ghkfu.h4lthxacf", "g.y.w.h..nBEyl4uiwchqBip.dqselmar..ohjvDofs5AA.D.v", "2bk1..6dr9imnjkb5ic.omak7c7p58ib...647bn.igdkgkmkb", "88n8nn7.kfdf..od5mjkvfhqck8..4pigo6.6.6g8pljdcioj7", ".ep6oq1gp.k.ke.g0negs.eocfb.24mdhh46.3d.9.lcj.fro.", "...9rs1kl.jkgb..1qhkwhir.id.51..kj7.3.dj5.ofgi.tpd", "e3.clje.jf6binvac.onwf.rdo7w....fvb6dd.detkpd5...0", "p.ypzxlB6ta4aoColzA.K4xF.AlKp.FzuDng.jd..G.z3er...", "dhwfww7q.niha9...v.q..oxkohCc4.m.o.895e..uulbjbxsf", "g..g.pm3JezE.wkmm.5.a..9g5.bhp.7hfip..tGu.gbDxv.us", "h.6e38.d.6pwCAwam3fadA9.8fd.ko.h4sgllok.ug.mym.bfk", "apsdqud9Bhw.w.9nep6cmyc.h.kn9hh4l5djcfpzlbm.wujw.p", "mhymzxiz5sc86.yohyxyJ1w.p.kJmeDwtAkdjgd3bDyw..m.qe", ".5khmikski39ltBbil.rzhougs..lhushAgc.i5ejxmu..vha4", ".sElEFdspt...2fveDptFnsBsqqGfdz.x.kif..rbv.jmv.GCq", ".f5.8.tpCfl.CFFar8qm.z..fqfnrsl.aDmort..x.bw.hG.6i", ".abjd8.rwfekwBE8odro.smoercsp..sc.kjop..suf.qaC6.c", ".2jck.e..f6bj.v.dknnw..r.o6wgc.nfvb7.d0.fskpe4qic."};
    int inverseWalkSpeed = 68;
    int inverseDriveSpeed = 59;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 58039;
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    vector<int> cars = {13, 26, 48, 49, 42, 13, 8, 21, 47, 28, 5, 23, 14, 47, 7, 1, 38, 23, 36, 25, 35, 28, 45, 49, 9, 13, 22, 1, 43, 33, 35, 21, 20, 30, 10, 15, 5, 7, 23, 31, 48, 32, 8, 34, 28, 43, 15, 21, 45, 13};
    vector<int> districts = {27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32, 27, 32};
    vector<string> roads = {"............s...........................I1..n.....", "...............................4........hal....K..", ".........t...........Q...t........................", ".......2...F....u....f....x......................b", "......U..................g.......0..T....J.4.....v", "...............v............J........Q6...........", "....U...2.....Ep......j.....Z..........1..........", "...2.........M.....S...q..D..CR.....9p...T.2.M....", "......2...........y..8..j....E.j..................", "..t.................8.....x.H..Mt.........U.......", ".................d7....R.......................r..", "...F............x.v..........U.jq.8......E........", "s..............n9..Vs..a..H..JV..N.....t.........R", ".......M.......................A.......H..........", "......E....................Q......H4..............", ".....vp.....n..........T...4...K...W.bP........6..", "...u.......x9.........F.......mn...............7..", "..........d........Nm..s..........................", "........y.7v............................6.....i3..", ".......S....V....N..odJ....1w......6............5.", ".........8..s....m.o...5.N.........t....8..H..A.g.", "..Qf....8..........d....u...U.......P.............", "......j.........F..J.............T....c.....G.....", ".......q..R.a..T.s..5...1.N.........S...Q....ou...", "........j............u.1.......z..R..HS...........", "..t.g...............N......oJX..F.....T.........w.", "...x...D.x..H..........N..........O......M......jg", "..............Q4...1.....o...N...........m..t.....", ".....JZ..H.........w.U...J..........tR.........W..", ".......CE..UJ............X.N......................", ".......R....V...m...............G....V...........y", ".4......jM.j.A.Kn.......z.........................", ".........t.q.............F....G.......j...N.......", "....0.......N.........T...................0.......", "...........8..H.........R.O...........c....L.l....", "..............4W...6t.............................", "....T..9.............P.S....t.....................", ".....Q.p.......b........H...R.V...........w.......", ".....6.........P......c.ST......j.c........W......", "......1.....tH...........................d........", "Ih................6.8..Q..........................", "1a..J..T...E..............Mm...........d......B...", ".l.......U......................N0...w.......g.p..", "....4..2............H.............L...W...........", "n.....................G....t.................n....", ".......M...............o..........l.......g.n.C.X.", "..................i.A..u.................B...C....", ".K........r....67.3.........W.............p.....i.", "...................5g....wj..................X.i..", "...bv.......R.............g...y..................."};
    int inverseWalkSpeed = 43;
    int inverseDriveSpeed = 24;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 118927;
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    vector<int> cars = {20, 43, 13, 13, 43, 40, 4, 10, 14, 44, 37, 39, 40, 43, 47, 49, 1, 13, 20, 23, 21, 1, 10, 38, 41, 26, 20, 28, 48, 21, 49, 21, 33, 28, 23, 16, 29, 38, 9, 46, 43, 48, 29, 4, 34, 33, 46, 20, 26, 45};
    vector<int> districts = {45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2};
    vector<string> roads = {"............u...7.................................", "................l..........a......................", "........................................D.......p.", "............................x..................J..", "............................................2K....", "...........2...A..................................", "...................V.........................B....", "..........z.......d...............................", "............................I.7...................", "................................t........O........", ".......z..................................d.......", ".....2.......................w....................", "u...................................d.............", "...............A..........................T.......", "................................................P.", ".....A.......A....................................", "7l................................................", "..............................N........t..........", ".......d................f.........................", "......V....................r......................", ".........................N.........W..............", "..........................A....E..................", "........................Q.....................B...", ".................................9.Y..............", "..................f...Q...........................", "....................N.............................", ".....................A........................Y...", ".a.................r..............................", "...x....I.........................................", "...........w............................g.........", "........7........N................................", ".....................E................b...........", ".........t..........................9.............", ".......................9..........6...............", ".................................6.......G........", "....................W..Y..........................", "............d...................9.................", "............................................1....q", "...............................b...........D......", ".................t...............................f", "..D..........................g....................", ".........O........................G...............", "..........d..T....................................", "......................................D........V..", "....2................................1............", "....K.B...........................................", "......................B...Y.......................", "...J.......................................V......", "..p...........P...................................", ".....................................q.f.........."};
    int inverseWalkSpeed = 99;
    int inverseDriveSpeed = 52;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 3327064;
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    vector<int> cars = {20, 43, 13, 13, 43, 40, 4, 10, 14, 44, 37, 39, 40, 43, 47, 49, 1, 13, 20, 23, 21, 1, 10, 38, 41, 26, 20, 28, 48, 21, 49, 21, 33, 28, 23, 16, 29, 38, 9, 46, 43, 48, 29, 4, 34, 33, 46, 20, 26, 45};
    vector<int> districts = {45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2, 45, 2};
    vector<string> roads = {"....Z....................................Z........", ".......Z.Z........................................", "..................Z.................Z.............", "........................................Z.....Z...", "Z.................................Z...............", ".........................................Z.....Z..", "........................Z.....................Z...", ".Z..................Z.............................", "................Z..........................Z......", ".Z...............................................Z", "...............Z..........................Z.......", "................................Z...............Z.", "...............Z.........Z........................", "...................Z..................Z...........", "...........................Z......................", "..........Z.Z.....................................", "........Z.....................Z...................", ".....................Z...............Z............", "..Z.........................................Z.....", ".............Z............Z.......................", ".......Z................Z.........................", ".................Z.................Z..............", "..........................................Z..Z....", "..................................Z.........Z.....", "......Z.............Z.............................", "............Z.....................................", "...................Z................Z.............", "..............Z........................Z..........", "...............................Z......Z...........", "................................ZZ................", "................Z..............Z..................", "............................Z.Z...................", "...........Z.................Z....................", ".............................Z.....Z..............", "....Z..................Z..........................", ".....................Z...........Z................", "..Z.......................Z.......................", ".................Z.........................Z......", ".............Z..............Z.....................", "...........................Z.....................Z", "...Z............................................Z.", "Z....Z............................................", "..........Z...........Z...........................", "........Z............................Z............", "..................Z....Z..........................", "......................Z........................Z..", "...Z..Z...........................................", ".....Z.......................................Z....", "...........Z............................Z.........", ".........Z.............................Z.........."};
    int inverseWalkSpeed = 60;
    int inverseDriveSpeed = 37;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1741952;
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    vector<int> cars = {25};
    vector<int> districts = {49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0, 49, 0};
    vector<string> roads = {".Z................................................", "Z.Z...............................................", ".Z.Z..............................................", "..Z.Z.............................................", "...Z.Z............................................", "....Z.Z...........................................", ".....Z.Z..........................................", "......Z.Z.........................................", ".......Z.Z........................................", "........Z.Z.......................................", ".........Z.Z......................................", "..........Z.Z.....................................", "...........Z.Z....................................", "............Z.Z...................................", ".............Z.Z..................................", "..............Z.Z.................................", "...............Z.Z................................", "................Z.Z...............................", ".................Z.Z..............................", "..................Z.Z.............................", "...................Z.Z............................", "....................Z.Z...........................", ".....................Z.Z..........................", "......................Z.Z.........................", ".......................Z.Z........................", "........................Z.Z.......................", ".........................Z.Z......................", "..........................Z.Z.....................", "...........................Z.Z....................", "............................Z.Z...................", ".............................Z.Z..................", "..............................Z.Z.................", "...............................Z.Z................", "................................Z.Z...............", ".................................Z.Z..............", "..................................Z.Z.............", "...................................Z.Z............", "....................................Z.Z...........", ".....................................Z.Z..........", "......................................Z.Z.........", ".......................................Z.Z........", "........................................Z.Z.......", ".........................................Z.Z......", "..........................................Z.Z.....", "...........................................Z.Z....", "............................................Z.Z...", ".............................................Z.Z..", "..............................................Z.Z.", "...............................................Z.Z", "................................................Z."};
    int inverseWalkSpeed = 100;
    int inverseDriveSpeed = 99;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 15188450;
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    vector<int> cars = {41, 17, 34, 0, 19, 24, 28, 8, 12, 14, 5, 45, 31, 27, 11, 41, 45, 42, 27, 36, 41, 4, 2, 3, 42, 32, 21, 16, 18, 45, 47, 26, 21, 38, 19, 12, 17, 49, 35, 44, 3, 11, 22, 33, 23, 14, 41, 11, 3, 18};
    vector<int> districts = {19, 9, 29, 26, 46, 22, 2, 40, 41, 44, 18, 47, 43, 30, 44, 21, 25, 8, 11, 7, 41, 15, 17, 18, 14, 13, 36, 41, 21, 30, 31, 26, 12, 39, 32, 18, 27, 16, 45, 40, 2, 29, 5, 1, 28, 47, 25, 47, 29, 32};
    vector<string> roads = {".tlsgypsfadpooefxzbcoejuvpvaboygpoeylfpbnpljvrvipy", "t.amyehwqnqrqpmxujjloovaowuxwhmsncbxcoksfzkvatxdkn", "la.lyjyhfixjswnkkufnuxxzrzbmnmgqooketlyhnkoaugzqrc", "sml.ddiuteiojwayyzpvscmpsajlfvgubfaaovlzylntrkdcpw", "gyyd.srtesjwhdizcobzcnfwlqijtvdwvxhrcbldvgylwgbusb", "yejds.mborxtlhcsmpxohgmgnkeufdxotogbgxpeyanfetcuke", "phyirm.pzshkljugggekjdqzjenpevqgxiepjsrdzjazujllch", "swhutbp.hbfqmkimwzobiwybxduunfsksrsrtekmqdcyzjeeuh", "fqfteozh.msrqcozijipfioneeddpszrnavymmtatbdzqsoemu", "aniesrsbm.vnpppsuacbazuxmhecthlegrpunkdmbppweqtgjo", "dqxijxhfsv.parmowzdqyoxytjbbhawdydcprjbxphoohpkwqy", "prjowtkqrnp.uhrqzhnbnfuvqnqqlrzjpxiogvliexdzuzosrk", "oqsjhllmqpau.rusvojbrzmwzpowkjilefraamdigpnpuuhgxp", "opwwdhjkcprhr.qnjwjmwaxxmnsnhhlqqrzudltfzotcjtnzxu", "emnaicuiopmruq.glsdsmzcnockvfajfrmxothowkbjzwucwlj", "fxkyzsgmzsoqsng.frimpmyhchzriwkbarxbgfcbceyhjugixw", "xukycmgwiuwzvjlf.tbvtrehbbcpxifbxvfbcgkcfqckcotzgk", "zjuzopgzjazhowsrt.ubmjrmbsztsshfroefwsjrxjhguzyupz", "bjfpbxeoicdnjjdibu.wweiqurpixiqflduuveoowqcudhnefn", "clnvzokbpbqbbmsmvbw.jhaimuczfskuiduburiswtbrecuyka", "oouschjifaynrwmptmwj.bfcvkdzeztoidukuhjzefczzzbfkq", "eoxcngdwizofzazmrjehb.dpqzikfobucdhthxdjgkjelrlpax", "jvxmfmqyouxumxcyeriafd.amceroswitdptpcclifkeljytih", "uazpwgzbnxyvwxnhhmqicpa.rcqaybnefxnxvgzedyyhngycdr", "vorslnjxemtqzmocbbumvqmr.udmphmeckotrwospofghfozqv", "pwzaqkedehjnpnchbsrukzccu.lqfxwwkmfxdyygmdcaszsgov", "vubjienudebqoskzczpcdieqdl.sodkjghcwmbmxrmhuyfyqga", "axmljupudcbqwnvrptizzkramqs.jqkcklznayxqkqoyzwmyub", "bwnftfenpthlkhfixsxfefoypfoj.zazcpkhktkydzivcuypur", "ohmvvdvfsharjhawisiszosbhxdqz.fmbisgekyrgzvxdhpoam", "ymggdxqszlwziljkfhqktbwnmwkkaf.vafyrarxsvkhtqdiher", "gsquwogkredjlqfbbffuouieewjczmv.sigbhzjzujxmmyspna", "pnobvtxsngypeqraxrliictfckgkcbas.raewkegjccvhhrjvb", "ocofxoirardxfrmrvodddddxkmhlpifir.jtsqdjootgpknfpf", "ebkahgesvpcirzxxfeuuuhpnofczksygaj.ycgfieowqrwwwpz", "yxearbpryupoauobbfubkttxtxwnhgrbety.sqmetogepspxnv", "lctocgjtmnrgadtgcwvuuhpvrdmakeahwscs.jiupalyynmkmn", "folvbxsemkjvmlhfgserhxcgwybytkrzkqgqj.uvklhsecdwra", "pkyllprktdbldtockjoijdczoymxkyxjedfmiu.cgfmzkgipdf", "bshzdedmamxiifwbcroszjlesgxqyrszgjieuvc.odkjmjqwiq", "nfnyvyzqtbpegzkcfxwwegidpmrkdgvujoetpkgo.puoqhimvf", "pzklgajdbphxpobeqjqtfkfyodmqzzkjcoooalfdp.vuzwyvij", "lkonynacdpodntjychcbcjkyfchoivhxctwglhmkuv.gfullkj", "jvatlfzyzwozpczhkgurzeehgauyvxtmvgqeyszjoug.duhsja", "vaurweuzqehuujwjcudezllnhsyzcdqmhprpyekmqzfd.fbtlk", "rtgkgtjjsqpzutuuozhczrjgfzfwuhdyhkwsncgjhwuuf.mfqr", "vxzdbcleotkohncgtynublyyosymypisrnwpmdiqiylhbm.myj", "idqcuuleegwsgzwizueyfptczgqypohpjfwxkwpwmvlstfm.fj", "pkrpskcumjqrxxlxgpfkkaidqoguuaenvppnmrdivikjlqyf.n", "yncwbehhuoykpujwkznaqxhrvvabrmrabfzvnafqfjjakrjjn."};
    int inverseWalkSpeed = 53;
    int inverseDriveSpeed = 37;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 44320;
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    vector<int> cars = {3};
    vector<int> districts = {2, 0};
    vector<string> roads = {".Z..", "Z.Z1", ".Z..", ".1.."};
    int inverseWalkSpeed = 69;
    int inverseDriveSpeed = 1;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 13036;
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    vector<int> cars = {28, 2, 41, 38, 17, 39, 33, 48, 1, 18, 31, 37, 7, 43, 44, 18, 34, 23, 44, 1, 39, 15, 22, 24, 18, 14, 45, 39, 6, 17, 34, 36, 21, 28, 25, 38, 19, 10, 38, 20, 28, 21, 9, 37, 14, 3, 6, 48, 26, 2};
    vector<int> districts = {1, 16, 17, 24, 42, 38, 37, 27, 46, 4, 13, 32, 25, 43, 9, 14, 12, 19, 2, 32, 49, 26, 41, 37, 40, 47, 45, 39, 23, 49, 42, 41, 18, 33, 6, 8, 22, 33, 4, 26, 49, 39, 4, 42, 48, 20, 7, 18, 24, 39};
    vector<string> roads = {"..O.6..RwT2oNnH.tP7.Wxe..6.7d.wTBy..p.NV.3yqqtb8.i", "..n.3B.H..294.gFl6B.sC85.G.....3.3.kExfz.i..U.gt.5", "On.s..A4.uEd1z.UQMOoEAEr6a..iEOMb7s93..I.5VL.23.O6", "..s..GGd.M.J.....N.laKBs....u.1.q3I.J.....ckBOU..M", "63...4.K..B...X5.J.J.zHr0a.H.Cwp.f..jCFcsuFUj1ZZKJ", ".B.G4.6..N.xX...oZb..D.Lu7XaCR.9Ss.Qp..6.YD....ltC", "..AG.6.IVua4Y.f.Y.B.mhD.G..1J....c.O.R.O.VSHr...C2", "RH4dK.I.8d.LEef7.cDX...ei.jdg2n..O...v....KA2d...y", "w.....V8..t2R..ieC.gZ9dc1.2..Q...gz.cVF.CmRHhqdv.0", "T.uM.Nud...qZc.eDI...v.LMQacZ3.Ppf..F8.WY.A.E...m.", "22E.B.a.t......hi...LzI.dcJ755...ZP.St.y3gO...HUkn", "o9dJ.x4L2q..C.XyioK.vQ.....j.AM4.Qk..67l.r.QLU...x", "N41..XYERZ.C...B0w5..oc2ogosB.6.Tsa....xNK.z..o..t", "n.z....e.c....fu5rw.IUax4.sXNC.qR.b2.s.Q8...L.TRq.", "Hg..X.ff...X.f..m..TR.z...W...4xcwn..F......od..au", ".FU.5..7iehyBu..RfME.g..9J.e...S4..49.S.t..9sWDx..", "tlQ..oY.eDii05mR..5UE...nvg...j.hn.1ti.X.....kOn.T", "P6MNJZ.cCI.owr.f....2.npsEE..Yz.z.x.Efo76c.F......", "7BO..bBD...K5w.M5..g..E..wey.ql...7..m3...r.Qe..Y.", "..olJ..Xg.....TEU.g.PUu..S.NE.....6T..uoy..ZB.rsu.", "WsEa..m.Z.Lv.IR.E2.P.....o.4..Ik7W...oh76FF..S6w..", "xCAKzDh.9vzQoU.g...U...lS.h3jM7.r4.y.b.rz0.F.ratx.", "e8EBH.D.d.I.caz..nEu...Z.T..Z.W.F6ob.s2k.dT.07U.0z", ".5rsrL.ecL..2x...p...lZ.T.kn..vnt...9zKyKwe04V.Yrh", "..6.0uGi1Md.o4.9ns...S.T..zakm.2.FN....giPqR.cPtq4", "6Ga.a7...Qc.g..JvEwSo.T...y.lKbDd.N...D.Y.3.Z.0vj.", ".....X.j2aJ.osW.gEe..h.kzy.....OhIA1...4Lf6x.p.9.d", "7...Ha1d.c7jsX.e..yN43.na...d.r..WPM.kC.m7rW8IEpN.", "d.iu.CJg.Z5.BN.....E.jZ.kl.d.E7k.wJ.hW4...7I.T.8K.", "..E.CR.2Q35A.C...Yq..M..mK..E.u5REe....j.5E.BBUS.c", "w.O1w..n...M6.4.jzl.I7Wv.b.r7u..xM0tA7k.5Kqb...M..", "T3M.p9...P.4.qxS....k..n2DO.k5...iP4a..Lo0...rBJ8.", "B.bq.S...p..TRc4hz..7rFt.dh..Rx..Qs.WqM...Kqh.pz..", "y373fscOgfZQs.w.n...W46.F.IWwEMiQ.JCrIesD3.i.ir..7", "..sI....z.Pkabn..x76..o.NNAPJe0PsJ...yA1bT.....Y.0", ".k9..QO......2.41..T.yb...1M..t4.C..5pr2DTF.sb.K.4", "pE3Jjp..cFS....9tE.....9....h.AaWr.5....1..3LySBXk", ".x..C.RvV8t6.sF.ifm.obsz...kW.7.qIyp..Tj7T.....C..", "Nf..F...F..7...S.o3uh.2K.D.C4.k.MeAr.T.j.Uh.YCn4E7", "VzI.c6O..WylxQ..X7.o7rkyg.4..j.L.s12.jj...T.NI.lP0", "....s...CY3.N8.t.6.y6z.KiYLm..5o.DbD17....7s.G7Ew.", "3i5.uYV.m.grK....c..F0dwP.f7.5K0.3TT.TU...aPdil.vX", "y.VcFDSKRAO.......r.F.Teq36r7Eq.K..F..hT7a.azP..K.", "q.LkU.HAH..Qz..9.F.Z.F.0R.xWI.b.qi..3...sPa.E..l.o", "qU.Bj.r2hE.L.Los..QB..04.Z.8.B..h..sL.YN.dzE..Ov2e", "t.2O1..dq..U..dWk.e.Sr7Vc.pITB.r.i.by.CIGiP...pZ6W", "bg3UZ...d.H.oT.DO..r6aU.P0.E.U.Bpr..S.n.7l..Op...9", "8t..Zl..v.U..R.xn..swt.Ytv9p8SMJz.YKBC4lE..lvZ..5.", "..O.KtC..mk..qa...Yu.x0rqj.NK..8....X.EPwvK.26.5..", "i56MJC2y0.nxt.u.T.....zh4.d..c...704k.70.X.oeW9..."};
    int inverseWalkSpeed = 100;
    int inverseDriveSpeed = 51;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 34589;
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    vector<int> cars = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48};
    vector<int> districts = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49};
    vector<string> roads = {".iwnxjdvnuztgiqyuyhmejidlwemfumyckczndmcnwbxrpqcbz", "i.xqyerkmdhsmhcleurgeilfguwiosggbasgieaqdqmdhjscav", "wx.dsvqudvhdexfbrfkcplbphkyzlhtibmymblhpwukgvnhmja", "nqd.szfpeaorkucadotamucwevseorfwhjemmoppxkpqsckwtz", "xyss.jyumwweymqsecmlfmluntxyhfjbtpcedlspihkyiwmsed", "jevzj.fywyguduedritlvevwumnjhfxazaktsffpihdtjkhgic", "drqfyf.kqsvhcvjumzkpisypktmayehqjzmvktsiajztughxfx", "vkupuyk.rplkvuhltpjhirsyuzkxyrzrtspgxtqzfjscyomsbj", "nmdemwqr.ppatenskravalzpnljujiekgabcvzdgkleayrudxk", "udvawyspp.yeipykrdmuucaewnwhjztwczniyglsxxxdozssqq", "zhhowgvlpy.vbinlcdxdoevrazqpgoyalfiwbdvolvbyjihveq", "tsdreuhkaev.dkhruonsglaixbwunaimistbxsflhuauvpjjwx", "gmekydcvtibd.smnbbrnrzunrvdshijtlvcslkqlyhokinuvoq", "ihxumuvuepiks.wgykdovarjwzvcrctlonwwwtmyuukhdelfud", "qcfcqejhnynhmw.swnnvgeqdcefzbcsnjezifiifnecvhzsnyl", "ylbasdulsklrngs.akuupcrzbyzfgxgoztxdrewdapvowuktol", "uerdermtkrcubywa.dxltqbtboohvqoqrxcepzkglcnwiasamd", "yufocizprddobknkd.ysthobsdvwqspndushybenurxcplzlvs", "hrktmtkjamxnrdnuxy.vseyiiynangryuejughpgqpbxpmslrv", "mgcallphvudsnovulsv.acnobwyygmcpxidwqkkhwpjdosvrkp", "eepmfviiauogrvgpttsa.zuwevjquwyigqfjxltretvfsdaqrr", "jilumesrlcelzaecqhecz.yrvruiigpsnhifllwngoovefxskc", "ilbclvyszavaurqrboynuy.hxwtxifkcrsptqxshmsasrhcaci", "dfpwuwpyperinjdztbiowrh.onrfcdgxzeqexuxyzokpbhwbeh", "lghenukunwaxrwcbbsibevxo.gfzkmwkjvpdfeaparddafwxwl", "wukvtmtzlnzbvzeyodywvrwng.swpnwgzqrnishcerigwaxygb", "ewysxnmkjwqwdvfzovnyjutrfs.squlfwhfeophqvfvhlunocj", "mizeyjaxuhpusczfhwayqixfzws.vgnbdmylxlqttaezyhhvbf", "folohhyyjjgnhrbgvqnguiickpqv.eevuaqiljjwdxrfevpnzi", "ushrfferizoaiccxqsgmwgfdmnuge.pbpnnxurbekzwvqcnyyy", "mgtfjxhzetyijtsgoprcypkgwwlnep.ppugkbvlunnpigmejkc", "ygiwbaqrkwamtlnoqnypiscxkgfbvbp.geldtwvygwvyjxafxz", "cbbhtzjtgclilojzrduxgnrzjzwduppg.qsehzveykrzldbidv", "kamjpazsazfsvnetxueiqhsevqhmanueq.idpvlvmvibgyrwud", "csyeckmpbnitcwzxcsjdfipqprfyqnglsi.nzohqeavdzdsxln", "zgmmetvgciwbswidehuwjftednelixkdedn.gsjtyjotpyyeet", "nibmdskxvybxlwfrpygqxlqxfioxlubthpzg.ftmnxtatgrgkp", "delolfttzgdsktiezbhkllxuespljrvwzvosf.rzyodvtooiom", "mahpsfsqdlvfqmiwkepktwsxahhqjblvvlhjtr.xemhkytvbva", "cqppppizgsollyfdgnghrnhypcqtweuyevqtmzx.tqxcxholhi", "ndwxiiafkxlhyunaluqwegmzaevtdkngymeynyet.typzhenvy", "wqukhhjjlxvuhuepcrpptosorrfaxznwkvajxomqt.pagarift", "bmkpkdzsexbaokcvnxbjvoakdiverwpvrivotdhxyp.wovouqe", "xdgqyttcadyukhvowcxdfvspdghzfviyzbdtavkcpaw.znyujm", "rhvsijuyyojvidhwipposerbawlyeqgjlgzpttyxzgoz.qbrvt", "pjncwkgorzipnezualmsdfhhfauhvcmxdydygothhavnq.unhj", "qshkmhhmushjulskszsvaxcwwxnhpneabrsyrovoeroybu.mpq", "ccmwsgxsdsvjvfntallrqsabxyovnyjfiwxegiblniuurnm.yv", "bajteifbxqewouyomvrkrkcewgcbzykxdulekovhvfqjvhpy.m", "zvazdcxjkqqxqdlldsvprcihlbjfiyczvdntpmaiytemtjqvm."};
    int inverseWalkSpeed = 98;
    int inverseDriveSpeed = 66;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 98790;
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    vector<int> cars = {33, 36, 27, 15, 43, 35, 36, 42, 49, 21, 12, 27, 40, 9, 13, 26, 40, 26, 22, 36, 11, 18, 17, 29, 32, 30, 12, 23, 17, 35, 29, 2, 22, 8, 19, 17, 43, 6, 11, 42, 29, 23, 21, 19, 34, 37, 48, 24, 15, 20};
    vector<int> districts = {13, 26, 41, 30, 6, 23, 12, 20, 46, 31, 5, 25, 34, 27, 36, 5, 46, 29, 13, 7, 24, 45, 32, 45, 14, 17, 34, 14, 43, 0, 37, 8, 26, 28, 38, 34, 3, 1, 4, 49, 32, 10, 26, 18, 39, 12, 26, 36, 44, 39};
    vector<string> roads = {".xuoUyvhnsvcOJNkzfNiweuSRURuAThQkMKfNKsCEwhDpxjGrp", "x.upgSdgrfWGQlGPxTVmmFCeYniEIlepOJWpDwmkwHTcusAMIj", "uu.yHnWcEjVUnfZetLOqIbWJdrYDahKuHtYWzMCJmMNCJmSQsJ", "opy.iPvAXEJiDzKStsvvEUdxQERfOCHVCRqjQcaZdZUiHVTpHq", "UgHi.KBhnxfhMxwSZkmJFDhNQPfFaOVtQprSrQVccLypsdIuTB", "ySnPK.rSUxzEzAuoCjIBUARvOtIyqZXLeXUXaDZPdLkzthndFB", "vdWvBr.EfNXxbAswTZqoLCioyskSQGbZQiEGGqeSwnHqCVVUhR", "hgcAhSE.PfCjNeehOsnicneHhorIkbDRvwVAwPpptySjfNPvhV", "nrEXnUfP.lDRMpOdflLZTqIRxQkllejjWOwwazvVYyOKyOtjYn", "sfjExxNfl.NopkEgEEaxMTwqhztaQpcOOSCJExKLjbzziBzmIf", "vWVJfzXCDN.UhCPfgXFJpPqnZoUGDPtBoEgpvnTizvqPJMNIoM", "cGUihExjRoU.dzmhKhubGYPjYruamcOGRUOehihPCHeFACDQXA", "OQnDMzbNMphd.DbsBCorREeuuBqAWYiMwLPxEzVnpPoomXmDVa", "JlfzxAAepkCzD.osvYnNtIwybToJGNcuYNsEJGcfTnrigRkHxY", "NGZKwuseOEPmbo.MzvNiswXvFPFtpMsgHdGypAtUCVsybjSNIR", "kPeSSowhdgfhssM.GGAXuoJlmBksOMQtSUeOpTyfTvMJPcXEvv", "zxttZCTOfEgKBvzG.xsyAPNpDTaLOHVqDDtsJLWyHHOXePNKbd", "fTLskjZslEXhCYvGx.PHetkLXtRenoqTqIkXlWbDTIYWRxYuAP", "NVOvmIqnLaFuonNAsP.vTrGsQpefGLvudoPhoVuAKKTZKEOVGl", "imqvJBoiZxJbrNiXyHv.cYCryyinhiPivQiplhXJwFoVLrMLSr", "wmIEFULcTMpGRtsuAeTc.eMUrqKyoKLNMSoOYVUgjBJzXCjGAJ", "eFbUDACnqTPYEIwoPtrYe.ALiUvtHIVQZVfpZpsSQayuuMxCSG", "uCWdhRieIwqPewXJNkGCMA.GEUsrFboizoffaPSpJutRGGBvwe", "SeJxNvoHRqnjuyvlpLsrULG.NoklVTnNflUXAAXOFeLisWbZZE", "RYdQQOyhxhZYubFmDXQyriEN.cyiamaKTvIkctMfbWnScgrheO", "UnrEPtsoQzorBTPBTtpyqUUoc.aKWtGDFRrcaNRRafqtivvRlj", "RiYRfIkrktUuqoFkaReiKvskya.pTKSAoKFgUeFKcHYPLLhgxl", "uEDfFySIlaGaAJtsLefnytrliKp.sIoWgkMUmRwlnSDzzEIHrS", "AIaOaqQklQDmWGpOOnGhoHFVaWTs.soMvlaCdCIHXRBRovNjQA", "TlhCOZGbepPcYNMMHoLiKIbTmtKIs.axdieMpZZvhgFtwYdtkz", "heKHVXbDjctOicsQVqvPLVonaGSooa.ardmcMMFWsqAFzaazEZ", "QpuVtLZRjOBGMugtqTuiNQiNKDAWMxa.VhdgyspznHUsIpjTBa", "kOHCQeQvWOoRwYHSDqdvMZzfTFogvdrV.hNiBLKtTIaSXZESIb", "MJtRpXiwOSEULNdUDIoQSVolvRKklidhh.ZmHbbFxstgtsyODQ", "KWYqrUEVwCgOPsGetkPioffUIrFMaemdNZ.QPoTICZPXDIbYmX", "fpWjSXGAwJpexEyOsXhpOpfXkcgUCMcgimQ.uvaBTSOkmkrgRC", "NDzQraGwaEvhEJppJlolYZaAcaUmdpMyBHPu.wZsUqhCnlOtxe", "KwMcQDqPzxnizGATLWVhVpPAtNeRCZMsLbovw.oMVtSmZlsFWl", "smCaVZepvKThVctyWbuXUsSXMRFwIZFpKbTaZo.FSsIMLXfiIN", "CkJZcPSpVLiPnfUfyDAJgSpOfRKlHvWztFIBsMF.rFNVArOxrE", "EwmdcdwtYjzCpTCTHTKwjQJFbacnXhsnTxCTUVSr.jRfVIxrgB", "wHMZLLnyybvHPnVvHIKFBaueWfHSRgqHIsZSqtsFj.BqayeikF", "hTNUykHSOzqeorsMOYToJytLnqYDBFAUatPOhSINRB.sSNlyLy", "DcCipzqjKzPFoiyJXWZVzuRiStPzRtFsSgXkCmMVfqs.hEaOAc", "puJHstCfyiJAmgbPeRKLXuGsciLzowzIXtDmnZLAVaSh.egHTQ", "xsmVdhVNOBMCXRjcPxErCMGWgvLEvYapZsIkllXrIyNEe.GHcS", "jASTInVPtzNDmkSXNYOMjxBbrvhINdajEybrOsfOxelagG.iPX", "GMQpudUvjmIQDHNEKuVLGCvZhRgHjtzTSOYgtFixriyOHHi.Ht", "rIsHTFhhYIoXVxIvbAGSASwZelxrQkEBIDmRxWIrgkLATcPH.K", "pjJqBBRVnfMAaYRvdPlrJGeEOjlSAzZabQXCelNEBFycQSXtK."};
    int inverseWalkSpeed = 60;
    int inverseDriveSpeed = 10;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 35420;
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    vector<int> cars = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    vector<int> districts = {1, 5, 1, 2, 4, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    vector<string> roads = {".12.4.", "1....7", "2..3..", "..3..5", "4.....", ".7.5.."};
    int inverseWalkSpeed = 53;
    int inverseDriveSpeed = 37;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 14166;
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    vector<int> cars = {32, 11, 23, 5, 37, 37, 38, 2, 28, 28, 32, 8, 24, 33, 10, 11, 45, 39, 2, 34, 15, 3, 27, 7, 43, 32, 34, 10, 42, 32, 7, 6, 42, 42, 18, 36, 31, 49, 15, 4, 24, 29, 28, 3, 42, 43};
    vector<int> districts = {29, 6, 33, 0, 25, 27, 10, 24, 35, 24, 15, 4, 43, 0, 8, 40, 20, 47, 14, 37, 14, 36, 25, 11, 7, 40, 41, 40, 41, 49, 11, 33, 47, 18, 15, 46, 25, 34, 22, 28, 12, 23, 31, 6, 35, 17, 31, 11, 20, 37};
    vector<string> roads = {".xdsdvtsofbfofeprqykamxhmtpmvxfuhjqmwfnflylkgvrptx", "x.obmutwqjetawiqasyuutippccjfcoivoshtzegubcaoegnbq", "do.uqxfydatqjdbaspgbzpjlslvopxlpcuekvtijoyggmaxlqt", "sbu.uivwhcwyjzdqlsfpmyssyhuwfoasffuulhbrmiqfmtxclh", "dmqu.trbgyppwbjzplkaqxwvleguwcsklisjctckwsvoinrsdl", "vuxit.ghtsxrsvndlozppmpcnqhqjtchidkmmfmsfltfaauiuc", "ttfvrg.fctfhywggzlfpjezkgvlcqmpvcwxzmgqdeenyyytfax", "swywbhf.nwkrboakyjqcjzuqtkpctiemfyenejwmsskhyhyvwg", "oqdhgtcn.plzutuntlnueklcrmegprfqqtkgzypxjetghclycg", "fjacystwp.yxsrjxsdrllipdhzwcopaaduaajqqralltjzwbbp", "betwpxfkly.jdnnqjegttgjpgxaatkrnlmjwklrzcsnfdqskdo", "ftqyprhrzxj.ahzzrzvsvsaymqekqtmolkwaiwjbovktwzdlko", "oajjwsybusda.qvsjsudieiltiuqlfpbtdkcgsmuqwqwvmsxru", "fwdzbvwotrnhq.ttfatawrsqdthlsdypiyfwyhxqypylemdmhv", "eibdjngaujnzvt.jeshbaahjssrrqmgspxvgxoqmmozympbxad", "pqaqzdgknxqzstj.smpvadyrtijvzwczvujlbqomeymzothpka", "raslplzytsjrjfes.xghductklyxlrzynlqltmywmrpoqcesox", "qspsloljldezsasmx.ulxkztykknzsevkkkwgtwoabmgcwvxxy", "yygfkzfqnrgvuthpgu.mshfhterfxfauwzxudbziqgqcitcues", "kubpappcultsdabvhlm.losyrymheapwuqmaizaomvumkuswth", "auzmqpjjeltviwaadxsl.txswxydpoxoeliblqdolketcghyuc", "mtpyxmezkigseradukhot.zgpcemsxgsnvnjmbsjhjbmiwcvkh", "xijswpzulpjaishyczfsxz.tnmgltbdearejmsaoyqtycettsy", "hplsvckqcdpylqjrtthysgt.dwxpuhqfonokuqwgaintytknvr", "mpsylngtrhgmtdstkytrwpnd.auxwvjjqozotqbeubmlyxxhpj", "tclheqvkmzxqitsilkeyxcmwa.jkosyxdzwbylwkpleuedfqze", "pcvughlpewaeuhrjykrmyegxuj.jfnmtuhsbvgqrncowxwcajh", "mjowuqccgcakqlrvxnfhdmlpxkj.obekvtijrxfpanyggjdjfk", "vfpfwjqtpotqlsqzlzxepstuwofo.fhxiamuahwxtaeafytcds", "xcxoctmirpktfdmwrsfaoxbhvsnbf.rjgxhnmbizbzdpkyakil", "folascpefarmpygczeapxgdqjymehr.lkihlzvyzcxruqfjdjf", "uipskhvmqanobpszyvuwosefjxtkxjl.ldhzajgtibtgpexrjs", "hvcflicfqdlltipvnkwuenaoqduvigkl.myawjnviblxlijkso", "joufidwytumkdyxulkzqlvrnozhtaxidm.pqsbjdyzvzvtwazk", "qseuskxekajwkfvjqkxmineozwsimhhhyp.wkzfnvwrsaohcda", "mhkujmzngawacwgllwuabjjkobbjunlzaqw.jztzcriiwnmahu", "wtvlcmmezjkigyxbtgdilmmutyvramzawskj.peickdzhzmjzc", "fzthtfgjyqlwshoqmtbzqbsqqlgxhbvjjbzzp.ilvsrenzbzms", "neibcmqwpqrjmxqoywzadsawbwqfwiygnjftei.yyssvibphkk", "fgjrksdmxrzbuqmmwoioojogekrpxzztvdnzily.ninsoatbwn", "luomwfesjacoqymemaqmlhyaupnatbciiyvccvyn.rscpmmavq", "ybyisleselsvwpoyrbgvkjqiblcnazxbbzwrkssir.zmakdaqa", "lcgqvtnktlnkqyzmpmquebtnmeoyedrtlvridrsnsz.woayjvn", "kagfofyhgtftwlyzogcmtmytluwgapugxzsizevscmw.eikses", "gommiayyhjdwvemoqcikcicyyexgfkqplvawhniopaoe.bfibg", "veatnayhczqzmmptcwtugwetxdwjyyfeitonzzbamkaib.tnwb", "rgxxrutylwsdsdbhevcshctkxfcdtajxjwhmmbptmdykft.ytx", "pnlcsifvybklxmxpsxuwyvtnhqajckdrkacajzhbaajsiny.jf", "tbqlduawcbdkrhakoxetuksvpzjfdijjszdhzmkwvqvebwtj.s", "xqthlcxggpoouvdaxyshchyrjehkslfsokaucsknqansgbxfs."};
    int inverseWalkSpeed = 60;
    int inverseDriveSpeed = 20;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 41240;
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test250() {
    vector<int> cars = {2, 5, 1, 2};
    vector<int> districts = {1, 5, 1, 2, 4};
    vector<string> roads = {".12.4.", "1....7", "2..3..", "..3..5", "4.....", ".7.5.."};
    int inverseWalkSpeed = 53;
    int inverseDriveSpeed = 37;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1259;
    if(result == expected) {
        cout << "Test Case 250: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 250: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test251() {
    vector<int> cars = {0, 2, 4, 6, 8, 10, 12, 14, 16, 18, 20, 22, 24, 26, 28, 30, 32, 34, 36, 38};
    vector<int> districts = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 4, 0, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<string> roads = {".PHGMLXSKFKPSFRYOLEAKKTJAIDGKIIMTGBURWCZXXJDAEXAVW", "P.QHENFCFNJNYMEPEFHOVKLWOZVMEEWSBRBVZANRVJHUXDDYXK", "HQ.UALIXNFPRYZNSJPWWAUYAVCGGPPYRDPHQMXOIFHAKAYYXDE", "GHU.YFRGQORVCNZFUBQUTFHYLOYNZJBQZUANWXCWBGIUMYYQHG", "MEAY.DCGDZEYQIKAVNNXXNNYZBLKSSXCQNWQZMKKCUMHCHGKPJ", "LNLFD.VBUVPSPMYDPPQWDUKZYZWEHRDOSKDQPNVBGZUJENMQOC", "XFIRCV.WXSGTEKCPVLRHKXOPLCGUKDUZODYLOSFAKYCZRGDOAC", "SCXGGBW.WRGMVKXOAJQMNXAVNNBFLZUIEMDRWNARCUZEOYCYMV", "KFNQDUXW.TXWIAFOBVPSLZUSTFUDJJNJMBCZKHJXFPFFSCAZVH", "FNFOZVSRT.RCKSXEORMNYRGCRWSXUAFIUPPJJHFBQZSCWDSWAH", "KJPREPGGXR.YEVTFYVXCJZZMKLBOGZSPVPRPILRGCWKZIRZMFR", "PNRVYSTMWCY.FWLXGIUBYBQPDQMTGUKFNWJXLQMFKWUZTUSYYJ", "SYYCQPEVIKEF.SSZPPJXHMRSCIBOGJSIPEBIEQXCCEIZDDGURV", "FMZNIMKKASVWS.GBOYJCFNCAPJOGELROPQXOFROBOIDBPMOBAB", "RENZKYCXFXTLSG.CEALOIMDJWTRBKLSNPTPGRZTCTQUFTPVZRJ", "YPSFADPOOEFXZBC.YMOKXGDLSVXGJCRESGHVAUHEZUBKPHSAXT", "OEJUVPVABOYGPOEY.YOSJQIFRDTXDHTEUJOLADOYGRUQCMOZSS", "LFPBNPLJVRVIPYAMY.VFSOUVTWLPQHEDAOOIMLWHKPRDCEDCVQ", "EHWQNQRQPMXUJJLOOV.ZWOTGEVHEZBKDCPHEDTKJUIIPLCKPKD", "AOWUXWHMSNCBXCOKSFZ.NKEUSXCYJFMPBAPXIFBUBXSQIKJKHJ", "KVATXDKNLYJYHFIXJSWN.EIBJHSAEQQSARKDGZJGMIWZFOGHTO", "KKUFNUXXZRZBMNMGQOOKE.OFWRMNNMDZZMWZPOZIJQTIKTHKQO", "TLYHNKOAUGZQRCDDIUTEIO.AHCPFPKCRUOQUNTWXRFBKERCTDT", "JWAYYZPVSCMPSAJLFVGUBFA.DBXEEIYNXWYZPCUWMLRFLWWKIG", "AOVLZYLNTRKDCPWSRTESJWHD.LOTVMZAMZUOUJCTBDEOJOMYHP", "IZCOBZCNFWLQIJTVDWVXHRCBL.HCQWJVHDHSUTWBSUCBYSBDEK", "DVGYLWGBUSBMBORXTLHCSMPXOH.UGZEYEQRRHNLVZUUUTPMZRN", "GMGNKEUFDXOTOGBGXPEYANFETCU.XOEMCYQKGZJTTVYCIOXISF", "KEPZSHKLJUGGGEKJDQZJENPEVQGX.BUMTOZRXXFRSEKDHFRVIP", "IEPJSRDZJAZUJLLCHHBFQMKIMWZOB.HTHXHUPURESOAHRGMCGF", "IWYBXDUUNFSKSRSRTEKMQDCYZJEEUH.ALYNSQGIHHOBTCHHUBY", "MSRQCOZIJIPFIONEEDDPSZRNAVYMMTA.ETBVNLMBFWFHQFUYHC", "TBDZQSOEMUVNPPPSUACBAZUXMHECTHLE.JNOJSPBRQCXAOYPZG", "GRPUNKDMBPPWEQTGJOPARMOWZDQYOXYTJ.FJWDMCOCVDYZFUJF", "BBHAWDYDCPRJBXPHOOHPKWQYUHRQZHNBNF.BJSYPEUKJBQYRZI", "UVQNQQLRZJPXIOGVLIEXDZUZOSRKRUSVOJB.MMHXFDDGNVQFUE", "RZMWZPOWKJILEFRAAMDIGPNPUUHGXPQNJWJM.ZCIWHZKELGMJO", "WAXXMNSNHHLQQRZUDLTFZOTCJTNZXUGLSDSMZ.HFSNEJFQABXW", "CNOCKVFAJFRMXOTHOWKBJZWUCWLJFRIMPMYHCH.BJEZEXFJIMQ", "ZRIWKBARXBGFCBCEYHJUGIXWTBVTREHBBCPXIFB.RFTLNXQSMR", "XVFBCGKCFQCKCOTZGKUBMJRMBSZTSSHFROEFWSJR.NORXWKGYW", "XJHGUZYUPZWWEIQURPIXIQFLDUUVEOOWQCUDHNEFN.ILVWCESW", "JHAIMUCZFSKUIDUBURISWTBRECUYKABFCVKDZEZTOI.PGKKKPW", "DUKUHJZEFCZZZBFKQDPQZIKFOBUCDHTHXDJGKJELRLP.ZMLYNP", "AXAMCEROSWITDPTPCCLIFKELJYTIHRCQAYBNEFXNXVGZ.FZRAZ", "EDYYHNGYCDRUDMPHMECKOTRWOSPOFGHFOZQVLQFXWWKMF.NGRS", "XDYYGMDCASZSGOVSODKJGHCWMBMXRMHUYFYQGAJQKCKLZN.ZAQ", "AYXQKQOYZWMYUBZAZCPKHKTKYDZIVCUYPURFMBISGEKYRGZ.EM", "VXDHPOAMVAFYRARXSVKHTQDIHERSIGBHZJZUJXMMYSPNARAE.E", "WKEGJCCVHHRJVBJTSQDJOOTGPKNFPFYCGFIEOWQRWWWPZSQME."};
    int inverseWalkSpeed = 100;
    int inverseDriveSpeed = 20;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 168820;
    if(result == expected) {
        cout << "Test Case 251: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 251: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test252() {
    vector<int> cars = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> districts = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<string> roads = {".AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "A.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AAA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.AA", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA.A", "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA."};
    int inverseWalkSpeed = 100;
    int inverseDriveSpeed = 99;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 179487;
    if(result == expected) {
        cout << "Test Case 252: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 252: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test253() {
    vector<int> cars = {33, 27, 43, 36, 49, 12, 40, 13, 40, 22, 11, 17, 32, 12, 17, 29, 22, 19, 43, 11, 29, 21, 34, 48, 15, 13, 41, 6, 12, 46, 5, 34, 36, 46, 13, 24, 32, 14, 34, 43, 37, 26, 38, 3, 4, 32, 26, 39, 26, 44};
    vector<int> districts = {25, 15, 35, 42, 21, 27, 9, 26, 22, 11, 17, 32, 12, 17, 29, 22, 19, 43, 11, 29, 21, 34, 48, 15, 13, 41, 6, 12, 46, 5, 34, 36, 46, 13, 24, 32, 14, 34, 43, 37, 26, 38, 3, 4, 32, 26, 39, 26, 44, 45};
    vector<string> roads = {".S...2...................eI..M....7........H..ED..", "S.S..J...y...........e........J0.....2............", ".S.S...........................H....s.....0....6..", "..S.S...2...................o....G.pN...Q..w......", "...S.S............m..k9u............u.........m...", "2J..S.Sn....jix....8........P...F...e8.x.4..x.....", ".....S.S..H......l..........Km...HP..Et.........F.", ".....nS.S.....5......N...i.....c.C..y.H....ls.....", "...2...S.S..z..yq...se..l...............D.......k.", ".y......S.S...........C..Ps....e....6...O.....2...", "......H..S.S......bA.H..............L.....R.L.....", "..........S.SM....6...t....4............b.4Le...K.", ".....j..z..S.S......A...tL...t..j...Cm............", ".....i.....MS.S...e...i....J.g......D......r...B..", ".....x.5.....S.S..I....Hi.................P.......", "........y.....S.S....g.....H...y.........R........", "........q......S.S.............z......I.....K.....", "......l.........S.o.fn.u....O...o......n....f.w...", "....m.....b6.eI..o.k..........u.......D...Bc.fI...", ".....8....A.......k.B.....g..w......g.lC....e.E...", "........s...A....f.B.3..6.........L.i......h.i....", ".e..k..Ne.H....g.n..3.SO..............s........p..", "....9....C.t.i.......S.S..yn...........h.......M.t", "....u.........H..u...OS.1........c...i.........a..", "........l...t.i.....6..1.SP.f.........c..b.R......", "e......i.P..L...........S.S.J...............N.v...", "I........s.........g..y.PS.S.s....b..........5....", "...........4.J.H......n...S.oy....jo.....y........", "...o.PK..........O......fJ.o.ue.........dD.......w", "M.....m.....tg.....w......syu.SKG..r.ti.....y....d", ".J................u.........eS.Q..1.............7.", ".0H....c.e.....yz............KQ.S..............c.n", ".....F......j....o...........G.S.S.v....O.....H...", "...G..HC...............c........S.Ss.L..gQ........", "7.....P.............L.....bj..1..S.S...Fj..N....u.", "...p.......................o.r..vsS.SE............", "..sNue.y.6L.CD.....gi..............S.S....eG......", ".2...8E.....m..........i.....t...L.ES.S.C.........", "......tH........I.Dl.s..c....i.......S.S.......3..", ".....x...........n.C..h...........F...S.S..l.n....", "...Q....DO.b................d...Ogj..C.S.S.....os1", ".....4.........R........b..yD....Q......S.q.......", "..0.......R4..P...B.................e....q.S.2..B.", "H..w...l...L.r....c.h...R.........N.G..l..S.S...k.", ".....x.s..Le....Kf.e.....N...y.............S.S.x..", "..................f.i.....5............n..2.S.S...", "E...m....2.......wIE.....v......H............S.S.L", "D.6..........B.......pMa.......c......3.o...x.S.S.", "......F.k..K..................7...u.....s.Bk...S.S", "......................t.....wd.n........1.....L.S."};
    int inverseWalkSpeed = 55;
    int inverseDriveSpeed = 25;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 51945;
    if(result == expected) {
        cout << "Test Case 253: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 253: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test254() {
    vector<int> cars = {23, 11, 24, 40, 40, 7, 10, 13, 27, 38, 12, 43, 48, 4, 15, 30, 26, 6, 37, 13, 36, 5, 48, 33, 20, 25, 36, 7, 40, 7, 33, 44, 48, 24, 32, 6, 29, 47, 38, 23, 11, 31, 47, 7, 26, 11, 48, 11, 44, 14};
    vector<int> districts = {38, 43, 36, 6, 32, 24, 13, 42, 22, 0, 15, 27, 34, 45, 10, 7, 36, 12, 46, 10, 30, 40, 33, 14, 5, 17, 16, 27, 45, 18, 42, 9, 4, 43, 17, 12, 40, 47, 26, 14, 11, 45, 30, 14, 49, 5, 44, 27, 5, 7};
    vector<string> roads = {".UZjhZsx3B.D.uKE.40.NA.9Q.BReIJtL.PZ1qciZOgBZz69Fq", "U.MDPLKi3vkPJzTn.WzvwphLPTC.p.a.93nPGOU1SyQg.O9vq.", "ZM.T4t.l..EbEoM9Hv7PFAvV.PrymqE..gLg0fgkaYQSCwN.Cy", "jDT.BEx.Bbu5guIR07f3TMDskrq.C9HfcFUlaBcFdfo.9.PIeU", "hP4B...ZNGFzfX1ZL.l90XuVI1c4.s6Z.OBwrs.B..ZV5H7QO.", "ZLtE..G.DNWPXkb0H.x.RSwsUt1IJE4KzY.dde24ErfGOdIt5z", "sK.x.G.rLNjI.UjgVI1.NM3o3.y.n4UHfKUZjhZsx3B.D.uKE.", "xil.Z.r.40.NA.9Q.BReIJtL.PZ1qciZOgBZz69FqMDPLKi3vk", "33.BNDL4.PJzTn.WzvwphLPTC.p.a.93nPGOU1SyQg.O9vq.T4", "Bv.bGNN0P.t.l..EbEoM9Hv7PFAvV.PrymqE..gLg0fgkaYQSC", ".kEuFWj.Jt.wN.CyBEx.Bbu5guIR07f3TMDskrq.C9HfcFUlaB", "DPb5zPINz.w.cFdfo.9.PIeU..ZNGFzfX1ZL.l90XuVI1c4.s6", ".JEgfX.ATlNc.Z.OBwrs.B..ZV5H7QO.G.DNWPXkb0H.x.RSws", "uzouXkU.n..FZ.Ut1IJE4KzY.dde24ErfGOdIt5zrLNjI.UjgV", "KTMI1bj9..Cd.U.I1.NM3o3.y.n4UHfKUZjhZsx3B.D.uKE.40", "En9RZ0gQWEyfOtI..NA.9Q.BReIJtL.PZ1qciZOgBZz69FqMDP", "..H0LHV.zbBoB11..LKi3vkPJzTn.WzvwphLPTC.p.a.93nPGO", "4Wv7..IBvEE.wI.NL.U1SyQg.O9vq.T4t.l..EbEoM9Hv7PFAv", "0z7flx1Rwox9rJNAKU.V.PrymqE..gLg0fgkaYQSCwN.CyBEx.", ".vP39..epM..sEM.i1V.Bbu5guIR07f3TMDskrq.C9HfcFUlaB", "NwFT0RNIh9BP.4393S.B.cFdfo.9.PIeU..ZNGFzfX1ZL.l90X", "ApAMXSMJLHbIBKoQvyPbc.uVI1c4.s6Z.OBwrs.B..ZV5H7QO.", ".hvDuw3tPvue.z3.kQruFu.G.DNWPXkb0H.x.RSwsUt1IJE4Kz", "9LVsVsoLT75U.Y.BPgy5dVG.Y.dde24ErfGOdIt5zrLNjI.Ujg", "QP.kIU3.CPg.Z.yRJ.mgfI.Y.VI1.NM3o3.y.n4UHfKUZjhZsx", ".TPr1t.P.Fu.Vd.ezOquo1D.V.3B.D.uKE.40.NA.9Q.BReIJt", "BCrqc1yZpAIZ5dnIT9EI.cNdI3.L.PZ1qciZOgBZz69FqMDPLK", "R.y.4I.1.vRNHe4Jnv.R94Wd1BL.i3vkPJzTn.WzvwphLPTC.p", "epmC.JnqaV0G72Ut.q.0..Pe...i..a.93nPGOU1SyQg.O9vq.", "I.q9sE4c..7FQ4HLW.g7PsX2NDP3..T4t.l..EbEoM9Hv7PFAv", "JaEH64Ui9PfzOEf.zTLfI6k4M.ZvaT.V.PrymqE..gLg0fgkaY", "t..fZKHZ3r3f.rKPv4g3eZbE3u1k.4V.QSCwN.CyBEx.Bbu5gu", "L9.c.zfOnyTXGfUZwt0TU.0roKqP9t.Q.IR07f3TMDskrq.C9H", ".3gFOYKgPmM1.GZ1p.fM.OHf3EcJ3.PSI.fcFUlaBcFdfo.9.P", "PnLUB.UBGqDZDOjqhlgD.B.G..iznlrCRf.IeU..ZNGFzfX1ZL", "ZPglwdZZOEsLNdhcL.ksZwxOy4ZTP.yw0cI..l90XuVI1c4.s6", "1G0ardjzU.k.WIZiP.akNr.d.0OnG.mN7Fe..Z.OBwrs.B..ZV", "qOfBseh61.rlPtsZTEYrGsRIn.g.OEq.fUUlZ.5H7QO.G.DNWP", "cUgc.2Z9Sgq9X5xOCbQqF.St4NBWUbEC3l.9.5.Xkb0H.x.RSw", "i1kFB4sFyL.0kz3g.ES.zBw5UAZz1E.yTa.0OHX.sUt1IJE4Kz", "ZSad.ExqQgCXbrBBpoCCf.szH.zvSo.BMBZXB7ks.Y.dde24Er", "OyYf.r3Mg09u0L.Z.Mw9X.Urf96wyMgEDcNuwQbUY.fGOdIt5z", "gQQoZfBD.fHVHNDza9NH1ZtLKQ9pQ9LxsFGVrO0t.f.rLNjI.U", "BgS.VG.POgfI.j.6.H.fZV1NU.FhgHg.kdFIs.H1dGr.jgVI1.", "Z.C95ODL9kc1xIu99vCcL5IjZBqL.v0Brfz1.G.IdOLj.NM3o3", "zOw.Hd.KvaFc..KF37yF.HJIjRMPO7fbqofcB.xJedNgN..y.n", "69NP7IuiqYU4RUEqnPBUl7E.heDT9Pgu..X4.D.E2IjVM..4UH", "9v.IQtK3.Ql.Sj.MPFEl9Q4UZIPCvFk5C91..NR44tII3y4.fK", "FqCeO5EvTSaswg4DGAxa0OKjsJL.qAag9.ZsZWSKE5.1o.Uf.U", "q.yU.z.k4CB6sV0POv.BX.zgxtKp.vYuHPL6VPwzrzU.3nHKU."};
    int inverseWalkSpeed = 100;
    int inverseDriveSpeed = 79;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 35137;
    if(result == expected) {
        cout << "Test Case 254: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 254: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test255() {
    vector<int> cars = {9, 44, 27, 20, 41, 39, 8, 3, 15, 43, 36, 2, 24, 28, 45, 31, 22, 38, 48, 37, 5, 16, 25, 21, 10, 47, 30, 11, 42, 26, 40, 34, 12, 7, 14, 49, 23, 17, 18, 46, 18, 13, 19, 6, 33, 32, 1, 29, 4, 35};
    vector<int> districts = {2, 36, 9, 33, 28, 47, 25, 11, 5, 39, 15, 7, 21, 46, 13, 37, 40, 49, 8, 26, 44, 6, 19, 1, 32, 45, 30, 42, 12, 10, 29, 43, 24, 48, 3, 20, 17, 38, 22, 31, 34, 35, 18, 0, 16, 14, 41, 23, 4, 27};
    vector<string> roads = {".....J..............e......E.......Y....x...X.E...", ".........BR................N..s.....j..........6..", "........u.5...wU6......2Q...uQ.........J..........", ".................1................................", "......Q..............................w.m........kM", "J.......R..............8....9............x....F...", "....Q........K.N.b...M........q..G......U.........", "................W......v................X2........", "..u..R....3.....A.........YCY....D..k...D.....t...", ".B..............U..xv3M...........................", ".R5.....3...8S....h.......................r.......", ".....................1......y......i..............", "..........8...........R..V..........h.f........E..", "......K...S...............n...C.....su......N.....", "..w.............rz.......................Q.5....3i", "..U...N............s.............1................", "..6....WAU....r....i.............bh..........q....", "...1..b.......z............8..1..F.......j........", "..........h.........o...Q............3...z........", ".........x.....si..........V........N2..k.........", "e........v........o................F.3......g.....", "......M..3.1..........o......a..3....v....w.......", ".........M..R........o......i..K..m......d.....I..", "..2..8.v..........................................", "..Q...............Q........P..............m.......", "............V.............j.....................K.", "........Y....n...........j......................o.", "EN......C........8.V....P.........................", "..u..9..Y..y..........i...................d.......", "..Q..................a.....................i..d.x.", ".s....q......C...1.............cGT...........k....", "......................K.......c.K.................", ".....................3........GK...........S....r.", "......G.D......1bF............T....V....P.........", "................h.....m................l...s......", "Y..........i........F............V....s..........7", ".j......k...hs.....N..............................", "....w........u....323v................eQ..2......F", "............f......................s.e............", "..J.m.............................l..Q............", "x.....UXD..........k.............P................", ".....x.2......Q..jz...d...........................", "..........r..........w..m...d........2.....m......", "..............5..............i..S.s.......m.......", "X............N......g...........................y.", "................q.............k...................", "E....F..t....................d....................", ".6..........E.........I...........................", "....k.........3..........Ko..x..r...........y.....", "....M.........i....................7.F............"};
    int inverseWalkSpeed = 99;
    int inverseDriveSpeed = 39;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 106137;
    if(result == expected) {
        cout << "Test Case 255: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 255: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test256() {
    vector<int> cars = {12, 32, 1, 35, 40, 41, 30, 48, 4, 4, 22, 18, 25, 31, 27, 45, 28, 15, 32, 13, 0, 19, 47, 21, 15, 6, 36, 27, 19, 15, 4, 5, 8, 41, 16, 49, 47, 37, 26, 33, 43, 28, 4, 34, 41, 4, 16, 1, 12, 4};
    vector<int> districts = {3, 38, 23, 21, 16, 5, 31, 46, 5, 27, 43, 48, 5, 38, 30, 1, 4, 28, 33, 12, 32, 1, 34, 24, 43, 17, 3, 45, 47, 39, 0, 41, 16, 19, 22, 45, 41, 1, 4, 41, 43, 19, 5, 1, 3, 25, 26, 30, 17, 42};
    vector<string> roads = {".SlTGn1Wo93jro6T78UjYcQdKaB93ZzVp.OMXszFCMvLFAuxpO", "S.zl.NbZAXkhVndj.l2BHbOL926LAsjBqKDKOjvDR6IRGjTKNL", "lz.PPFFQGugiFfvVAUivjPRVRBOinJdTnZmvKiiAO8sXuuD70p", "TlP.ue500GLXwGN2EttOtPkaB7j3U1niKpRXgyk6qmXWOfkY3p", "G.Pu.emyZbl6gHqoMJ2inBVlNw4Mu2SRdZT73fz2b20qTnbYn9", "nNFee.yazlQ3aJM5.XvSw7JTe1WBGAzs67PQMp0aYuXCJ2r0FW", "1bF5my.DnXvHHXMGfQJNYRBEP5w5w5uewI90Id3ne7H7pEdhF2", "WZQ0yaD.kcmrmueVH3D7FjFoEkSsVzKyVUCBi.sb2nufrfuWbR", "oAG0Zznk.aVSDAsggyayuJkWFY07F62XBLZmGcEMTp6GFX3.pp", "9XuGblXca.xBOqYeDp3MUdpFjGkOhd48KfvDRNE3iQWLY9WyKK", "3kgLlQvmVx.XsapucfsCihj8qE49O3vJteFfK5Q.ZVfoKM9vfO", "jhiX63HrSBX.qDjpQGLC8OjDLdDIFpVstyhIWvHO9OYn70YG3P", "rVFwgaHmDOsq.Va6AZF8738xi0IDuxiKKP5w2D4traUmHzyzZ.", "onfGHJXuAqaDV.AdFyiO7EDXO2zYntaF9BMlZUFFjlLWqXUG2E", "6dvNqMMesYpjaA.Pv2frBsj.iZwstiL.7tQKynNm4chRMe0r5P", "TjV2o5GVgeup6dP.Fow4ZbubRusPIeCRwkMLxwDIRB4Clorswd", "7.AEM.fHgDcQAFvF.4Iyp9Sq9FA9heKBpXLWc2XQBezcGn6Qt8", "8lUtJXQ3ypfGZy2o4.Jt6VRr64O4aNIfIt8mnQvOCR8zPUaQHU", "U2it2vJDa3sLFifwIJ.iNhrmDuAW.kjQLxwUPAkhBortw6aoGz", "jBvOiSN7yMCC8Or4yti.J4JrRpPJgwqUVUlU1F7quhmoYhMF7M", "YHjtnwYFuUi877BZp6NJ.uGdSXSQ94JTHN19erZOvTfFljRW3N", "cbPPB7RjJdhO3Esb9Vh4u.dNeH1C8ix6c5OV1EbwdFJsUGFU3r", "QORkVJBFkpjj8DjuSRrJGd.E8DT.OwEBCTjmU2PplCWbxvSLDl", "dLValTEoWF8DxX.bqrmrdNE.B5I.3oTnNYkDRP4fyjOTi6NNp7", "K9RBNePEFjqLiOiR96DRSe8B.emWqapL8vI0ABQmguVhL2IHkG", "a2B7w15kYGEd02ZuF4upXHD5e.voSbtClkDislVpR7lFgx8OmA", "B6Oj4WwS0k4DIzwsAOAPS1TImv.NMJio3IA0WeDrPg0XlDzBW9", "9Li3MB5s7O9IDYsP94WJQC..WoN.bwi97FnvjV8OLUQizmCq6G", "3AnUuGwVFhOFuntIha.g98O3qSMb.BC3OzXLE0vlekCq9jjbx.", "ZsJ12A5z6d3pxtieeNkw4iwoabJwB.NjZaOi6jQp09WCD6k23x", "zjdnSzuK24vViaLCKIjqJxETptiiCN.xSOQznwES6aq0ssGYgq", "VBTiRseyX8JsKF.RBfQUT6BnLCo93jx.IU2TEgXThxie4O0Uml", "pqnKd6wVBKttK97wpILVHcCN8l37OZSI.tM3RJVfA9zpjDHQG3", ".KZpZ7IULfeyPBtkXtxUN5TYvkIFzaOUt.lhlkgcW2DRrIIKJ9", "ODmRTP9CZvFh5MQML8wl1OjkIDAnXOQ2Ml.gMv5tAGNgTAaQYF", "MKvX7Q0BmDfIwlKLWmUU9VmD0i0vLizT3hg.kOnwQqCqHKFJoi", "XOKg3MIiGRKW2ZyxcnP1e1URAsWjE6nERlMk.WCQ0aKtSmzQ2b", "sjiyfpd.cN5vDUnw2QAFrE2PBleV0jwgJkvOW.1I8GH.x75fT4", "zvikz03sEEQH4FNDXvk7ZbP4QVD8vQEXVg5nC1.JRV9Q0snzvH", "FDA62anbM3.OtFmIQOhqOwpfmprOlpSTfctwQIJ.T5Hf3QbXx6", "CROqbYe2TiZ9rj4RBCBuvdlygRPLe06hAWAQ08RT.ybijaC.RC", "M68m2u7npQVOalcBeRohTFCju7gUk9ax92GqaGV5y.MQRXIvyX", "vIsX0XHu6WfYULh4z8rmfJWOVl0QCWqizDNCKH9HbM.8duUJdd", "LRXWqC7fGLonmWRCcztoFsbThFXiqC0epRgqt.QfiQ8.RiGoqv", "FGuOTJprFYK7HqMlGPwYlUxiLglz9Ds4jrTHSx03jRdR.ayx.d", "Ajufn2EfX9M0zXeonU6hjGv62xDmj6sODIAKm7sQaXuia.KbvB", "uTDkbrdu3W9YyU0r6aaMRFSNI8zCjkG0HIaFz5nbCIUGyK.Yi3", "xK7YY0hW.yvGzGrsQQoFWULNHOBqb2YUQKQJQfzX.vJoxbY.vO", "pN03nFFbpKf3Z25wtHG733DpkmW6x3gmGJYo2TvxRydq.viv.O", "OLpp9W2RpKOP.EPd8UzMNrl7GA9G.xql39Fib4H6CXdvdB3OO."};
    int inverseWalkSpeed = 100;
    int inverseDriveSpeed = 40;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 21680;
    if(result == expected) {
        cout << "Test Case 256: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 256: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test257() {
    vector<int> cars = {41, 17, 34, 0, 19, 24, 28, 8, 12, 14, 5, 45, 31, 27, 11, 41, 45, 42, 27, 36, 41, 4, 2, 3, 42, 32, 21, 16, 18, 45, 47, 26, 21, 38, 19, 12, 17, 49, 35, 44, 3, 11, 22, 33, 23, 14, 41, 11, 3, 18};
    vector<int> districts = {17, 0, 24, 8, 14, 45, 27, 41, 42, 36, 4, 3, 32, 16, 45, 26, 38, 12, 49, 44, 11, 33, 14, 11, 18, 44, 7, 9, 41, 28, 35, 42, 6, 42, 48, 5, 29, 0, 1, 48, 23, 4, 40, 26, 8, 39, 23, 38, 32, 41};
    vector<string> roads = {"...h...kf...m.oy...f...i.y.wss.....hg.....arc....e", "...ml.v..j..k.................q...d.c...t.....j.g.", "......c...........v.o......bcm.......e........f.w.", "hm..........v..ea.t..m........jq..zw.q...v........", ".l....g..pt.s.......g.........p...n...s.........t.", ".........g.......o.....vs.g...rh....c.t.q.l..y.jo.", ".vc.g........yo..u....s.p.....o.r.............j...", "k.........y.................p..zr....x.db....k....", "f.........y.....qh......hep......w....c....a..hr.y", ".j..pg....cz..v..s....s....u.u..v....fy..k....j..u", "....t..yyc..................ncy.j.jfu.......qv....", ".........z........hguu.............b.......f.l...d", "mk.vs........................z...n.eju.........ea.", "......y...........x.....e..s...v.n........o.o...h.", "o.....o..v......x..k.azy..............v..y.r.c....", "y..e............j.w.j.o...zr.h........djz........k", "...a....q.....xj.s..a..g..j........g.w.ld.m...f...", ".....ou.hs......s.k........k.....q.x.c......n.....", "..vt.......h.x.w.k.......g......w.w......ab.....q.", "f..........g..k......l....h...w.j...s.........y...", "..o.g......u...ja........j..v...ld....i......f...u", "...m.......u..a....l..lbb...mgd.f........g..cz....", "......s..s....zo.....l..x.....p........mc.p..g..k.", "i....v........y.g....b....m.....a.u...u....h.....q", ".....sp.h....e.......bx.....tn....whf....o..e...ml", "y.......e.........g.j......e.d...t......d.t.......", ".....g..p......zj..h...m...h.b..g.......pjyi......", "w.b......u...s.r.k.......eh........p...w...b..q...", "s.c....p..n.........vm..t..............t.......h.q", "s.m......uc.z..h.....g..ndb...o....f..z.c....j....", ".q.jpro...y........w.dp......o..u...........wj..fz", "...q.h.z.....v...........................bu.....za", "......rr.vj.......wjlf.a..g...u..gy.u....xpj....a.", "........w...nn...q..d....t......g...........qq..lj", ".d.zn.....j.......w....uw.......y...ukq.o..me....m", "h..w......fbe...gx......h..p.f.......i.....s..d...", "gc...c....u.j......s....f.......u.u....f..b.gq..h.", "..eq...x.f..u...wc................ki...e....p..s..", "....st..cy....vd....i..u.....z....q........r.m.kc.", ".......d.......jl.....m....wt.......fe..h..e...f..", ".t...q.b.......zd.....c..dp..c....o....h...k...g..", "...v.....k....y...a..g..o.j....bx..........g......", "a....l.......o..m.b...p..ty....up...b.............", "r.......a..f..r........h..ib....j.ms..rekg........", "c.........q..o...n...c..e.....w..qe.gp.......y....", ".....y.k..vl..c.....fzg......jj..q..q.m.....y..c..", ".jf...j.hj......f..y.......q.......d...........yvk", ".....j..r...e...............h........skfg....cy...", ".gw.to......ah....q...k.m.....fzal..h.c.......v...", "e.......yu.d...k....u..ql...q.za.jm...........k..."};
    int inverseWalkSpeed = 3;
    int inverseDriveSpeed = 2;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 3676;
    if(result == expected) {
        cout << "Test Case 257: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 257: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test258() {
    vector<int> cars = {0};
    vector<int> districts = {1, 2};
    vector<string> roads = {".2.", "2.9", ".9."};
    int inverseWalkSpeed = 2;
    int inverseDriveSpeed = 1;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 258: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 258: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test259() {
    vector<int> cars = {5, 4};
    vector<int> districts = {1, 2, 3, 1};
    vector<string> roads = {".A..34", "A.zAAA", ".z.z..", ".Az.46", "3A.4..", "4A.6.."};
    int inverseWalkSpeed = 5;
    int inverseDriveSpeed = 1;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 484;
    if(result == expected) {
        cout << "Test Case 259: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 259: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test260() {
    vector<int> cars = {3, 4};
    vector<int> districts = {1, 2};
    vector<string> roads = {".9.77", "9.978", ".9.87", "778..", "787.."};
    int inverseWalkSpeed = 100;
    int inverseDriveSpeed = 1;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1618;
    if(result == expected) {
        cout << "Test Case 260: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 260: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test261() {
    vector<int> cars = {1, 7, 5, 3, 1, 1, 1, 1, 1, 3, 9};
    vector<int> districts = {2, 3, 0, 9, 3, 6, 9, 1, 0, 4, 7};
    vector<string> roads = {".d.......x", "d.e.......", ".e.X......", "..X.4.....", "...4.g....", "....g.i...", ".....i.C..", "......C.R.", ".......R.T", "x.......T."};
    int inverseWalkSpeed = 13;
    int inverseDriveSpeed = 7;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 6588;
    if(result == expected) {
        cout << "Test Case 261: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 261: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test262() {
    vector<int> cars = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<int> districts = {1, 0, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49};
    vector<string> roads = {".0000000000000000000000000000000000000000000000000", "0.000000000000000000000000000000000000000000000000", "00.00000000000000000000000000000000000000000000000", "000.0000000000000000000000000000000000000000000000", "0000.000000000000000000000000000000000000000000000", "00000.00000000000000000000000000000000000000000000", "000000.0000000000000000000000000000000000000000000", "0000000.000000000000000000000000000000000000000000", "00000000.00000000000000000000000000000000000000000", "000000000.0000000000000000000000000000000000000000", "0000000000.000000000000000000000000000000000000000", "00000000000.00000000000000000000000000000000000000", "000000000000.0000000000000000000000000000000000000", "0000000000000.000000000000000000000000000000000000", "00000000000000.00000000000000000000000000000000000", "000000000000000.0000000000000000000000000000000000", "0000000000000000.000000000000000000000000000000000", "00000000000000000.00000000000000000000000000000000", "000000000000000000.0000000000000000000000000000000", "0000000000000000000.000000000000000000000000000000", "00000000000000000000.00000000000000000000000000000", "000000000000000000000.0000000000000000000000000000", "0000000000000000000000.000000000000000000000000000", "00000000000000000000000.00000000000000000000000000", "000000000000000000000000.0000000000000000000000000", "0000000000000000000000000.000000000000000000000000", "00000000000000000000000000.00000000000000000000000", "000000000000000000000000000.0000000000000000000000", "0000000000000000000000000000.000000000000000000000", "00000000000000000000000000000.00000000000000000000", "000000000000000000000000000000.0000000000000000000", "0000000000000000000000000000000.000000000000000000", "00000000000000000000000000000000.00000000000000000", "000000000000000000000000000000000.0000000000000000", "0000000000000000000000000000000000.000000000000000", "00000000000000000000000000000000000.00000000000000", "000000000000000000000000000000000000.0000000000000", "0000000000000000000000000000000000000.000000000000", "00000000000000000000000000000000000000.00000000000", "000000000000000000000000000000000000000.0000000000", "0000000000000000000000000000000000000000.000000000", "00000000000000000000000000000000000000000.00000000", "000000000000000000000000000000000000000000.0000000", "0000000000000000000000000000000000000000000.000000", "00000000000000000000000000000000000000000000.00000", "000000000000000000000000000000000000000000000.0000", "0000000000000000000000000000000000000000000000.000", "00000000000000000000000000000000000000000000000.00", "000000000000000000000000000000000000000000000000.0", "0000000000000000000000000000000000000000000000000."};
    int inverseWalkSpeed = 37;
    int inverseDriveSpeed = 22;
    SlimeXGrandSlimeAuto* pObj = new SlimeXGrandSlimeAuto();
    clock_t start = clock();
    int result = pObj->travel(cars, districts, roads, inverseWalkSpeed, inverseDriveSpeed);
    clock_t end = clock();
    delete pObj;
    int expected = 1115;
    if(result == expected) {
        cout << "Test Case 262: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 262: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test243() == 0 ? ++passed : ++failed;
    test244() == 0 ? ++passed : ++failed;
    test245() == 0 ? ++passed : ++failed;
    test246() == 0 ? ++passed : ++failed;
    test247() == 0 ? ++passed : ++failed;
    test248() == 0 ? ++passed : ++failed;
    test249() == 0 ? ++passed : ++failed;
    test250() == 0 ? ++passed : ++failed;
    test251() == 0 ? ++passed : ++failed;
    test252() == 0 ? ++passed : ++failed;
    test253() == 0 ? ++passed : ++failed;
    test254() == 0 ? ++passed : ++failed;
    test255() == 0 ? ++passed : ++failed;
    test256() == 0 ? ++passed : ++failed;
    test257() == 0 ? ++passed : ++failed;
    test258() == 0 ? ++passed : ++failed;
    test259() == 0 ? ++passed : ++failed;
    test260() == 0 ? ++passed : ++failed;
    test261() == 0 ? ++passed : ++failed;
    test262() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22714443&rd=14435&pm=11334
********************************************************************************
//  SRM 506 (B)
 
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <cassert>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
#include <utility>
#include <numeric>
#include <algorithm>
#include <bitset>
#include <complex>
 
using namespace std;
 
typedef unsigned uint;
typedef long long Int;
typedef vector<int> vint;
typedef vector<string> vstr;
typedef pair<int,int> pint;
#define mp make_pair
 
template<class T> void pv(T a, T b) { for (T i = a; i != b; ++i) cout << *i << " "; cout << endl; }
 
namespace MCF {
  #define MAXN 210
  #define MAXM 100010
  #define wint int
  #define cint int
  const wint EPS = 0;
  const wint INF = 1001001001;
  const cint cEPS = 0;
  const cint cINF = 1001001001;
  int n, m, ptr[MAXN], next[MAXM], zu[MAXM];
  wint capa[MAXM], tof;
  cint cost[MAXM], toc, d[MAXN], pot[MAXN];
  int pree[MAXN];
  void init(int _n) {
    n = _n; m = 0; memset(ptr, ~0, n << 2);
  }
  void ae(int u, int v, wint w, cint c) {
    next[m] = ptr[u]; ptr[u] = m; zu[m] = v; capa[m] = w; cost[m] =  c; ++m;
    next[m] = ptr[v]; ptr[v] = m; zu[m] = u; capa[m] = 0; cost[m] = -c; ++m;
  }
  bool primaldual(int src, int ink, wint flo = INF, bool normal = 1) {
    wint f;
    cint c, t;
    int i, u, v;
    if (normal) memset(pot, 0, n * sizeof(cint));
  /*
    for (bool cont = 1; cont; ) {
      cont = 0;
      for (u = 0; u < n; ++u) for (i = ptr[u]; ~i; i = next[i]) if (~i & 1) {
        if (pot[zu[i]] > pot[u] + cost[i]) {
          pot[zu[i]] = pot[u] + cost[i]; cont = 1;
        }
      }
    }
  //*/
    for (toc = 0, tof = 0; tof + EPS < flo; ) {
      priority_queue< pair<cint,int> > q;
      for (u = 0; u < n; ++u) d[u] = cINF;
      for (d[src] = 0, q.push(mp(-0, src)); !q.empty(); ) {
        c = -q.top().first; u = q.top().second; q.pop();
        if (d[u] == c) {
          for (i = ptr[u]; ~i; i = next[i]) if (capa[i] > EPS) {
            t = c + cost[i] + pot[u] - pot[v = zu[i]];
            if (d[v] > t && (normal || t <= c + cEPS)) {
              d[v] = t; pree[v] = i; q.push(mp(-t, v));
            }
          }
        }
      }
      if (d[ink] == cINF || (!normal && d[ink] - pot[src] + pot[ink] > cEPS)) return 0;
      f = flo - tof;
      for (v = ink; v != src; v = zu[i ^ 1]) {
        i = pree[v];
        if (f > capa[i]) f = capa[i];
      }
      for (v = ink; v != src; v = zu[i ^ 1]) {
        i = pree[v];
        capa[i] -= f; capa[i ^ 1] += f;
      }
      tof += f;
      toc += f * (d[ink] - pot[src] + pot[ink]);
      for (u = 0; u < n; ++u) pot[u] += d[u];
    }
    return 1;
  }
}
 
#define CAR(u) (u)
#define DIS(v) (C + 1 + (v))
#define SRC (C + 1 + D)
#define INK (C + 1 + D + 1)
 
int N;
int C, D;
int dist[110][110];
int as[110], bs[110];
 
struct SlimeXGrandSlimeAuto {
  
  int tr(char c) {
    if ('0' <= c && c <= '9') return 1 + (c - '0');
    if ('a' <= c && c <= 'z') return 11 + (c - 'a');
    if ('A' <= c && c <= 'Z') return 37 + (c - 'A');
    return 0;
  }
  
  int travel(vector <int> cars, vector <int> districts, vector <string> roads, int inverseWalkSpeed, int inverseDriveSpeed) {
    int i, j, k;
    int u, v;
    
    N = roads.size();
    C = cars.size();
    D = districts.size();
    
    for (i = 0; i < N; ++i) for (j = 0; j < N; ++j) {
      dist[i][j] = (i != j) ? MCF::cINF : 0;
    }
    for (i = 0; i < N; ++i) for (j = 0; j < N; ++j) if (roads[i][j] != '.') {
      dist[i][j] = tr(roads[i][j]);
    }
    for (k = 0; k < N; ++k) for (i = 0; i < N; ++i) for (j = 0; j < N; ++j) {
      if (dist[i][j] > dist[i][k] + dist[k][j]) {
        dist[i][j] = dist[i][k] + dist[k][j];
      }
    }
    
    for (v = 0; v < D; ++v) {
      bs[v] = districts[v];
    }
    as[0] = 0;
    for (v = 1; v < D; ++v){
      as[v] = bs[v - 1];
    }
    
    MCF::init(C + D + 3);
    for (u = 0; u < C; ++u) {
      MCF::ae(SRC, CAR(u), 1, 0);
    }
    MCF::ae(SRC, CAR(C), MCF::INF, 0);
    for (v = 0; v < D; ++v) {
      MCF::ae(DIS(v), INK, 1, 0);
    }
    for (u = 0; u < C; ++u) for (v = 0; v < D; ++v) {
      MCF::ae(CAR(u), DIS(v), 1, dist[as[v]][cars[u]] * inverseWalkSpeed + dist[cars[u]][bs[v]] * inverseDriveSpeed);
    }
    for (v = 0; v < D; ++v) {
      MCF::ae(CAR(C), DIS(v), 1, dist[as[v]][bs[v]] * inverseWalkSpeed);
    }
    
    bool res = MCF::primaldual(SRC, INK, D);
cout<<"res = "<<res<<endl;
    return MCF::toc;
    
  }
  
};

********************************************************************************
*******************************************************************************/