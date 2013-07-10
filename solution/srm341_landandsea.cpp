/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7512
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

class LandAndSea {
public:
    vector<int> howManyIslands(vector<string> seaMap);
};

vector<int> LandAndSea::howManyIslands(vector<string> seaMap) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<string> seaMap = {"x"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> seaMap = {"xxxxx", "x...x", "x.x.x", "x...x", "xxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> seaMap = {"xxxxx", "x...x", "x.x.x", "x...x", "xxxxx", "xxxxx", "x...x", "x.x.x", "x...x", "xxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> seaMap = {"..", ".."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> seaMap = {"............", ".......xxxx.", "..xxx.x...x.", "..x..x..x.x.", "..x.x.x...x.", "..xx...xxx.."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> seaMap = {"xxxxxxxxxx", ".xxxxxxx.x", ".x.......x", ".x.xxxxx.x", ".x.....x.x", ".x..x..x.x", ".x.....x.x", ".xxxxxxx.x"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> seaMap = {"xxxxxxxxxx", ".xxxxxxx.x", ".x.......x", ".x.xxxxx.x", ".x.....x.x", ".x..x..x.x", ".x.....x.x", ".xxxxxxx.x", ".x.......x", "xxxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> seaMap = {"xxxxxxxxxx", ".xxxxxxx.x", ".x.......x", ".x.xxxxx.x", ".x.....x.x", ".x..x..x.x", ".x.....x.x", ".xxxxxxx.x", ".........x", "xxxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> seaMap = {"xxxxxxxx", "x..x...x", "x.xxx..x", "x..x...x", "x......x", "xxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> seaMap = {"xxxxxxxx", "x......x", "x.xxx..x", "x..x...x", "x......x", "xxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> seaMap = {"xxxxxxxx", "x......x", "x.xxxx.x", "x.x....x", "x.xxx..x", "xxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> seaMap = {"xxxxxxxxxxxxxxxx", "x..............x", "x..xxxxxxxxxxx.x", "x..x.........x.x", "x..x.xxxxxxx.x.x", "x..x.x.....x.x.x", "x..x.x..x..x.x.x", "x..x.x.....x.x.x", "x..x.xxxxxxx.x.x", "x..x.........x.x", "x..xxxxxxxxxxx.x", "x..............x", "xxxxxxxxxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> seaMap = {"xxxxxxxxxxxxxxxx", "x..............x", "x..xxxxxxxxxxx.x", "x..x....x....x.x", "x..x.xxxxxxx.x.x", "x..x.x..x..x.x.x", "x..x.x..x..x.x.x", "x..x.x..x..x.x.x", "x..x.xxxxxxx.x.x", "x..x....x....x.x", "x..xxxxxxxxxxx.x", "x..............x", "xxxxxxxxxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> seaMap = {"xxxxxxxxxxxxxxxx", "x..............x", "x..xxxxxxxxxxx.x", "x..x..x..x...x.x", "x..x.x....x..x.x", "x..xx......x.x.x", "x..x....x...xx.x", "x..xx......x.x.x", "x..x.x....x..x.x", "x..x..x..x...x.x", "x..xxxxxxxxxxx.x", "x..............x", "xxxxxxxxxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> seaMap = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx...........", "x.................................x...............", "x..xxx............................x...............", "x.x...xxxxxxx.....................x...............", "x.x..x.......x....................x...............", "x.x...x......xxxxxxxxxxxxx........x...............", "x.x..........x...........x........x...............", "x.x......x...x...........x........x...............", "x.xxxx...xx..x.....x.....x........x...............", "x....x...x...x.....x.....x........x...............", "x....x.......x.....x.....x........x...............", "x....xxxxxxxxx.....x.....x........x...............", "x............x.....x.....x........x...............", "x............x.....x.....x........x...............", "x............x...........x........x...............", "x.....xxxxxxxxxxxxxxxxxxxx........x...............", "x.........x.........x.............x...............", "x.........x........x..............x...............", "x.........x...x...x...............x...............", "x.........x......x................xxxxxxxxxxx.....", "x.........x.....x.................x.........x.....", "x.........x....x..................x....x....x.....", "x.........xxxxx...................x....x....x.....", "x.................................x....x....x.....", "x.................................x....x....x.....", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx....x....x.....", ".........................x.............x....x.....", ".........................x.............x....x.....", ".........................x.....xxxxxxxxx....x.....", ".........................x..................x.....", ".........................xxxxxxxxxxxxxxxxxxxx.....", ".........................x...............x........", "........................x................x........", ".......................x.................x........", ".......................x.................x........", ".......................x.................x........", ".......................x.................x........", ".......................x.................x........", ".......................x.................x........", ".......................x.................x........", ".......................x.................x........", ".......................x.................x........", ".......................x.................x........", ".......................x.................x........", ".......................x.................x........", ".......................x.................x........", ".......................xxxxxxxxxxxxxxxxxxx........", "..................................................", "..................................................", ".................................................."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1, 1};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> seaMap = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx...........", "x.................................x...............", "x..xxx............................x...............", "x.x...xxxxxxx.....................x...............", "x.x..x.......x....................x...............", "x.x...x......xxxxxxxxxxxxx........x...............", "x.x..........x...........x........x...............", "x.x......x...x...........x........x...............", "x.xxxx...xx..x.....x.....x........x...............", "x....x...x...x.....x.....x........x...............", "x....x.......x.....x.....x........x...............", "x....xxxxxxxxx.....x.....x........x...............", "x............x.....x.....x........x...............", "x............x.....x.....x........x...............", "x............x...........x........x...............", "x.....xxxxxxxxxxxxxxxxxxxx........x...............", "x.........x.........x.............x...............", "x.........x........x..............x...............", "x.........x...x...x...............x...............", "x.........x......x................xxxxxxxxxxx.....", "x.........x.....x.................x.........x.....", "x.........x....x..................x....x....x.....", "x.........xxxxx...................x....x....x.....", "x.................................x....x....x.....", "x.................................x....x....x.....", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx....x....x.....", ".........................x.............x....x.....", ".........................x.............x....x.....", ".........................x.....xxxxxxxxx....x.....", ".........................x..................x.....", ".........................xxxxxxxxxxxxxxxxxxxx.....", ".........................x...............x........", "........................x................x........", ".xxxxxxxxxxxxxx........x.................x........", ".x..xxxxx.....x........x.................x........", ".x..x...x.....x........x....xxxx.........x........", ".x..x.x.x.....x........x.......xx........x........", ".x..x.x.x.....x........x........x.xx.....x........", ".x..x...x.....x........x........xxx......x........", ".x..xxxxx.....x........x........x........x........", ".x............x........x.................x........", ".x...xxxxxxx..x........x.................x........", ".x...x.....x..x........x.................x........", ".x...x..x..x..x........x.................x........", ".x...x..x..x..x........x.................x........", ".x...x.....x..x........x.................x........", ".x...xxxxxxx..x........xxxxxxxxxxxxxxxxxxx........", ".xx...........x...................................", "...xxxxxxxxxxx....................................", ".................................................."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 2, 2};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> seaMap = {"."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> seaMap = {"x"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> seaMap = {"x....x...x.", "..xx..x.x..", "xx.xx.x.x.x", ".x.xx...xx.", "xx.x.xxx..x", "x..x.x..xxx", "..x.xxx.x..", ".x..xx.xxxx", "x....xxx.x.", "xx..xx...xx", ".x.x.x...x.", "x.x....xxxx", "..xx.xx.xxx", "..xx.x..xxx", "...xxx..x.x", ".x......xx.", ".x....x.xx.", "x.x..x..xxx", "x.xxx.....x", "x.x.x..xx..", "..x..x.x.xx", ".xx.x.xx..x", "xxxxx.x.xxx", "xxx.x...x..", ".xx..xx..x.", ".x....x..x.", ".xxx..x...."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> seaMap = {"xxxx....x.x..xx..xx..xxx.x.x..xx..xxx.x......x"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> seaMap = {"xxxxxxx.x.x.xxxxxx.xxxx."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> seaMap = {"xx.xxxxxxxxx.x.xx.x..x.x.xxxxx.xxxxx.xxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> seaMap = {"xxxxxxxxx..x..xx.x.x.x..x....x.xx.x.x...xx....x", "...xx.x..x...x..x.....xxxx.x........xx..xxxxx.x", "....x.xx..xxxx...xxx......xx......x..x.xxxx.x..", ".xx..xxx....x.....xx.x.xxx...x...xxx..x..x..x.x", "......xxx.xxx...xx..x..x.....x.....xx..x.xxxxxx", "x.x.......xxxx.xxx...xxx..x...xxxx.xx..xx..xxx.", "x.x..x.....xx..xxx.x.xx.......xxxx.....x.xxx.x.", ".xx.x..xx..x.x...x.xx....xxxx.xx.xx.xxx..x.x...", ".x..x.xxxx....xxxx.x.x..x.xx....x.xx..xx...xx.x", "x...x..xxxxxxxxxx..x..xx.x..xxx..xxx..xx..xxxxx", "x..xx......xx..x.xx...x..x..xx....xx.x.........", "xxxxxx...xxxx.x....xxx.x....x..x.x.x.xxx...x..x", "..x.xxx.x.x......x.xx..x.xx..x...xxx.xx...x...x", "x......xx.x.xxxx....x.x.xx...xx..x.x.xx..x.xxx.", "...x...xx.xx...x.xx.x.xx.xxx.x..x..xx.x....xxxx", "..x.......xx.xx.x...x..xx.x..xxx.x.xx.x..xx.x.x", "x..x.xx...x..x..x.x.x...x.....xxxx.x..x.xx...x.", ".xxxx.x.x.x..xx.x..xx.x..x.xxx.xx.x.x.xx.......", "xxx..x..x..xx.xx....xx.xx..xxx.xx..xx....xxx.x.", "xxxx..xxxx.x...xx.....xx...xx.xxxx.xx..x.x.xxx.", "xxxx.x..x..x.x..x..x..xx.xxx.xxxx..x.....x...x.", "...x..x.x..xx....xx..xxx.x..x.x...x.x...x..xx..", "x.x.xxx.xx.x.xxxx...xxx..xx.xxx....xx...x.xx..x", "x...x..xxx.x.x....x...x...x.x.xx.xx......xx.xxx", "x.xxxxx.x.xxx....xx.xxxx.xxxx.x..xxxxxxxx....xx", "x...x.x.xx.xxx.xxxxx..x.x..x....xxxx.xxxxxx.x..", "xx..xx.x....xxxxxx..x...xxx.x.....xxxx....xxxxx", "xxx..xx...xx.xxx...x.....xx.x.xxxx.xxx.x.xx...x"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 1};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> seaMap = {".x.xxxxxxxxxxxx.xxxxxxxxxxx.xx.x.xx.xxxxxxxxx", "xxxxxxxxxxxx..xxxx.x.xxxxx..xxxxxx.x..xxx.x.x", "x.x.x.xx.xx.x.xxxxxxxxxxxx..x.xxx.xxx.x.xxxx.", "xxxxxxxxxx..xxxxxxxxxxxxxxx.x.xxxxxx..xxxxxxx", ".xx..x.x.xxxx.xx.xxxxxxxxxx.x.xx.xxxxxxxxxxxx", "xxxxxxxxx..xxxx..xx.xxxx.xxx.xxxxxxxxxxx.xx.x", "xx.xx.xxxx.xxxxxxxxx..x.xxxxx.xxx.xxxx.xx.x..", "xxxxxxxxxxxx.xxxxxx..xxxxxxxxxx.xxxxxxxxxxxxx", "x..xxx..xxx.xxxxxx.xxxx.xxxx.xxxxxx.xxxxxxxx.", "x.x...xxxxx..xxx.x.xxxxxx...xxxx.x.xxx.x.xxxx", ".xxx.xxxx.xx.x.xxxx.xxxxxxxx.xxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxx..xx.x...x.xx.xxxxxxxxxxx.xx.xx", ".xx.x.x.xxxxx..xxxxxxx...x.x...x.x.x.x..xxxxx", "xxxxxx.xxxxxxx....xxx.xxxx.xx...xxxxxxxx.xxxx", "xxx.xx.xxx.xxxxxxx.x.x.xxxx.x.x..xx.xxxxxxxxx", "xxxxxx.xxx.x.xx.xxxxxxx.x.xxx.xxx.xx.x.xxxxx.", "xxxxxxxxxxxxx.xxxxx..x.xx.xx.xxxxxxxxxx.xxx..", "xxx..xxxxxxxxxxxxxxxx.xxxxxxx...xx.xxx.xxx..x", "xxxxxxx.xx..x.x..x.xx...xxxxxxx.xxx.x.xx.xxxx", ".xxx.x...xxxxxxxxx.xxxxxxxxxxxxxxxxxxxxxx..x.", "x...xx.xxxxxxxxxx.xxxxxxxxxxxxx..xxx.xxxxxx.x", "xxxxxxxxxx.xx.xxxxxxxxxxxxxx.xxxxxxxxxxxx.x.x", "x.xx.xxxxxx.xxxxx.xxx..x.xxx.xxx.xxxx.xx.xxxx", "xx.xxxx.x.xxxxx.xx.x..x..x.xxxx.xx..x.xxx...x", "x..x.xxxxxxxxxxxx.xxx..xx.xxx.xx.xxxxxxxxxxxx", "xx..x.x.xxxxx.xxxxx.xx.xxxxxxx.xxx.xxxxxx.xx.", "xx..xxxxx.xxx.x.xxxx.xxxx.xx.xxxxxx.xxxx.x.xx", ".xxx..xxxxxxxxxx.xx..xxxxx.xxxx...xxxxxxxx.xx", "xxx.xxx.xxxxx.xxxxxx.xxxx.x..x.x.xx.xx...x.x.", ".xxxx.xxxxx.xxxxxxxxxxxx.x.xxxx...x..xxx.x.xx", "xx.x.xx.xxx.xxxx.xx.xxxxxxx.x...xxxxxx.xxxxxx", "x..x.xx.xxxxxxxx..xx...xx..xx.x.xx.x.xxx..xxx", ".xx.xxx.x.x..xxx.x..xxxxxxxxxxxx.x.xxxxx..xxx", "xxxxxxx..x.x.x.xxxxxxxxxx.xx..x.xxxxxx.xxxxxx", "xxxx..xxxx.xxxxxxx.xxxxxxxx.x..xxxx.xxxxxx.x.", "xxxxx.xx.xxxxxx.xx..x...xxx.xxxxxxxx.xxxxxxxx", "xxxxxxxxxxx.x.xx.xx..xxxxxxxxx..xx.xx.xx.xxxx", ".xxxxxxx.x.x...x.x.x.xxxx.xx..x.x.xxx.xxxxxx.", "xxx.x.xxxx.x.xx.xxxxxx.xxx.xxx..x.xxx.xxxxxx.", ".xx.x.xxxxxxxxx.xxxxxxxxxx.xxxxx...xxxxxxxxxx", "xxxxx.xxxxxxxxx.xxxxxxxx...xx.....xx.xxxxx.xx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> seaMap = {"x.", "..", "..", "..", ".x", "..", "xx", "xx", "..", "x."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> seaMap = {"x.xxxxxxxxxxxxx.xxxx", ".xxxx.xxx.xxxxxxxxxx", ".xxxxxxxxxxxxxxxxxxx", "..xxxxxxxxxxxxxxxxxx", "..xxxx.xxxx.xxxxx.xx", ".xx..xxxxxxxx.xxxxxx", "xx.xxx.xx.xx.xx.x.xx", "xxxx.xxxxx...xxxxx.x", "xxx.xxxx..x.x.xx....", "xxxxxxxx..xxxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> seaMap = {".xxx.x..x...x.x.xx.......x.x..........xx.xxx.xxx", ".xx..xxxxx..x.x.....x.xx.x.x.x....x.xxx.xx..xxxx", "xxx..xxx..xx...xx.....xxxx..xxx.x.x.x..xxx.x....", "x..x.xx.x..x.x.xx......x..x.....x..........x....", ".xxxx.x.x..........xx.xx.x..xx.x....xx.xxx...x..", "xxxx.xx..xxx.xxx..xxx.x.xxxxxx..xxxx..x.x.xxxx.x", "xx....xxxxxx.xxx.x.x.xxxx..x...xxxx...xx.x...xxx", "xxxx...x...x...xx...xxxxx..xx.x.xxx...x...xx.xx.", "....xx.x..xxxx.x.x.x..xxxxx.x.xxxxxxxxxx.xxx.xxx", ".xx.xxxx.xxxxxx.xxx.xxx..xxxxx.....x..x...x.xx.x", "...xx.x..xxxx......x.....xxxx.x....x...xxxx.xxx.", "..xxx.xx.....xx.......x....xxxxx....x.x.x.xx....", "xx..xx.xxx..xx.x......x.....x.x..x.xx..xx.xxxxx.", ".xxxxxxx......x.xx.xx..xx.x....x.xxx...xxxx.xx.x", "xx....x.x..x.....xx.x..xx.x...xxxx.xxx.x....x.xx", "....xxx..xx.x...xxxx..xxx.x...xx......x.x.x.x..x", "..x.x.x....xxxx........x....xxxxx.....x...x...x.", "xxxx..xxx.x...xxx..x.x...x.....xxxx....xx.xx.x..", "..xx..x.x.xxxx.x..xx.x..x.xx..x.x...x....x..xxx.", "x...xx....xxx..x.xxxxx..xx..xx.xxx..xx.x.x..xx.x", ".x.......xxxx.x...x...x..x...x...xx..xx..xxxxxxx", "x.xx.xxxxxx...xx.x..xx.x...xxx.xxx.x.x..xxxxxxx.", ".x....xxx.....x.x.x...xxx..x..xx.xxx.xx..x....x.", "...x.xx...x..x.x..x..xx.x..xx....xxxx..xxx.xxxxx", "...x.x...xx..xxxx...x.xx.xx..xxx......xx.x..x.x.", ".xx...x.x.x...xx.x...x.x.....xx...xxx.x.x.x..x.x", ".x..xx.xx.x..x.x.x.x.x.xxxx..x..xx...xxx.x..x.xx", "x...xxx..x.x.x.xx.....xxxxxxx.x.xxxxx...x..x..x.", "...xxx..xxx.x...xxxx.x.x..xxxxxxxx..xx..xxxxx.x.", ".xx..x...xx.x.xxxxxx....x.x.x.x...x..xxx.xx....x", "..xxxx.x...xxx..xxx......xxxxxxxx..x..xxxxx...xx", "..xx.xx.xxx...xxxx.xx......x....xxx.xxxx..x.xxxx", "x.x.xx...xxxx.xx..xx.xx.x.xxxx..x.....x..xxx..x.", "xx.....xx....x.x.xxx.x...xxxx.x..x...xx.x.x.....", "x..xx.x.xxxxxxxxx.x.xxx.xx.x..xx.xx........x.xxx", ".xx........x.x.x......x.xx.x..xxx..x.xx.xx.x...x", "..x..xx.x..xxx....xxx.x.x.....x.xxxx...xxx..x.x.", ".x..x..x.xx.x..xx..x...x..xxx..x.xx..x.x....xx.x", ".x.......x....x....x...xx.xx.x..x.x.x.xx..xx.x.x", "x.xx...x...xx.x..xxx..x.xx...x.xxxxx..xxx.x..xx.", "x.xx.x.xxx.xx...xx.......x.x.xxx.xxxxx..xxx..x..", "...xx..x...xxx....xxxx.xxxx.xx....x.xxx..xx..xx."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 1};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> seaMap = {"x..xx.xx.x.xxxxxxxxxxxxxx...x.xxxx..xx", "xx.xxxxxxxxxxx.x.xx..xxxxx..xxxxxxxxxx", "x..xx.xxxxxxxx.xxxxxxxxxxxx.xx.xxx.xxx", "xxxxx.xx..xx..xxxxxxxxxx.x.xx.xxx.xxx.", "xxxxx.xxxxxxxx.xxx....x.xxxxxxxxx.x.xx", ".xxxxxxxx.x...xxx.xxxx.xxxx.xxxxx.xxxx", ".x..xxxx.xxxx..xxxx.xxx.x.xx.xxxxxxxx.", "xx.xxx.xxxxxx.xxxx.xxxxxxx.xxxxxxxxxxx", "xxx.xxxxxxxxxxx...xxxx..xx.xx.xxxxx.xx", "xxx..xxxxxx.x..xx.xxxxxxxx.xx...x.xxxx", "x.xxx.xxxxxxxx..x.xxxxxxxx.x..x.xxxx..", "x.xxxxxxxxxx.xxxx.x.xx.xxxxx.xxxx.xxxx", "xxxx.xxxxxxxxxxxx.xxx...xxxx.xxxxx.x..", "xxx.x.xx.x.xxxxxxxxxxxx.x.xxx.x...x.xx", ".x.xxxxxxxxx.xxxxxxxxxxx..x.....xxxxxx", "x.xxxx..xx.xx.xxxxx.x.xx..xxxx.x.xxxxx", "..x.xx..xxxx.x.xxxxxxx..xxxxxxxx.xxxxx", "xxxxxxxxxxx.xxx.xxxxxxxxx..xxxxxx.xx.x", "x.xx.xxxxxx..xx.xx..xxxxx..xxxx.xx.x.x", ".xx.xx.xxx..x.xxx.xxx.x.x..xxxxx.xxxx.", "xxxxxxxxxxxx.x.xx.xxx.x.xxx.xxxxxxxx..", "xxx.xx..x.xxxxx..xxxx...x.xx..xx.x..xx", "..xxxxxxx.xx.xx.xxxxxx.x.x.xx...x.x.xx", ".xx.xx.xxx..xxx.xx.xxxxx.xxxx.xxxxxxx.", "xxx..xxx.x.xxx.xxxxxxxxxx.xxxxxxxxxx.x", "xx.x.xxx.xxxx.xxx.x.xx..xxxxxxxx.xxxx.", "xxxxx.xxx.xxxxxxxxx..xxxxxxxxxxx.x..x.", ".xx.xxxxxxxxxxxxx.xxx..x.xxxx.xxxxxxxx", "xxxxx.xxx.xxxxxx.xx.xxx....x.xxx...x..", "x..xx.xxxxx.xxx.xxxxxx..x.x.xxx..xx.xx", "xxxxxxx.xxxxxxx.xxx.xxxx...x.x.x.xxxx.", "x.xxxxxxxxx.xxxxxxxxx.xx.xxxxxxx.xxxxx", ".xxx.xxx.xx.xxxxxxxxxxx.xxxxxx.x.x.xxx", "x.xxxxx.x..xx.xxx..xxx..x..xx.xx..xx.x", ".xxxx.xx.xxx.xx.xx.x.x.xxxxx..x.xxxxxx", ".xxx.xx.x..x.x...xxx.xxxxx..xxx...xxxx", "xxxxxxxx.xxxx...x.x.xxxxxxxx...x....x.", "..x.xxxxx.xxx.xx.x.xxxxx.x.xxxxx.xxx.x", "x..xxxx.xx.x.xxxx...xxxxxxxxxxx.xxxx.x", "xx...x.xx..x.x.xx.xxxx.x.x.xxxxx..xxx.", ".xxxxxxxxxxx.xx.xxxxxxxx.xx.xxxxxxxxx.", ".x.xxxx..xxxx.x.xxxxx.xxx.xxxxxxxxxx.x", "xxxx...xxxxxxxxx.xxxxxx..xxxxxxxxxx.xx", ".xxxx.xxxxxx.xxxxxxxxx.xxxxxxx.xxxxx.x", "xxxxxxx..x.xxxx.x.xxx.x.x..xxxx..xxx.x", "xxxxx.xx.xxxxxxxxx.xxxx..x.x..xxxxxxxx", "xxx.xxxxxxxxx.xxx...xxxxxxx...xxxxxxxx", "xxxx.xxxxxxx.xxxxxx..xxxxxx.x..x.xxx.x"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> seaMap = {"...x..xx..", "...x.xxx..", ".x.xx.xxx.", "...xx.xxxx", "...x..x.x.", ".xx.....x.", ".xxx.x....", "x.xx.xx...", "x...xx..xx", ".xx.xx....", ".xx.xxx.xx", "....x..x..", ".....xxx.x", "xxxxx.....", "xxxxxx.x.x", "x.xx.xxxxx", "x..x.x..xx", "...xx....x", ".xx.xxxxx.", "xxx.xx.x..", ".x..x..xx.", ".x...x....", "xxx..xxxx.", "x.xx......", ".........x", "....xxx.xx", "..x...xx.x", "...xx.x.x.", "..x..x...x", "x.....x..x", ".xxx.x.xx."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> seaMap = {"xx.xx.xxxxxxx", ".xxxxxx.xxxx.", "xxxxxxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> seaMap = {".x..x..x..xxx", "x.xxxx.xxx.x.", ".xxx..xxx.xx.", "x..x.x.x.....", ".x.xxxxx....x", "xxx..xx.x.x..", "..xx.x.x.....", "..xxxxx...xxx", "...x..x.x.x.x", "xx.x...x.....", "..xxx.x..x.xx", "..x.xx..xxx..", ".xxxx...x....", "xxx.x..xxxx..", "....xx....xxx", "....x..x...xx", "x....xx.....x", "x...xxx.xx.xx", ".x.xxxx..xxx."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> seaMap = {"x.xxx.xxxx.xx.x..xx.xxx", "xx.xxxxxx.xx...x.xxxxx.", "xxxxx.xx.xxxxxxxx.xxxxx", "xxx.xxxxxxx.xx.xxx.xx.x", ".x.x.xxxxxx.xxxx..xx.xx", ".xx.xxxx.xxxxxx.xxxxxxx", "x.xx..xx...x.xxxx...x..", "xxx...x.x.xxx.x.xxxxxxx", "xx.xxxxx.xx....xxxxxxx.", "x.xxxxxxxx.xxx.x.xxx...", "xxxxx.xx.xx..x..xxxxxxx", "x...x.x.xxx.x.x..xxxxxx", "xxx.xxxxxxx..x.x.xxxxx.", "...xxxxxxx.xxxxxxxx.xxx", "xx.xxxx.xxxxx.xx.xxxxx.", "xxxxxxxx.xxxxxx.xxxxx..", "..x.xxx.xxxx.xx.xxxxx.x", "xxxxxxxxxxxxxxx.xxx.x..", "..xxxxx.xxxx..x..xxxxxx", ".xx.xxxxxxx.xxx...xx.xx", ".xxx.xxxxxxxxxxx.xx.xxx", "xx.x..xx.xxxxxxx.xxxxxx", "xx.xxxxxxxxx.xxx.xx..xx", ".xxxx.x.xx.x.xx.xxxxxxx", "xxxxxx.xxxxxx.x...xxxxx", ".xxxxxxxx.x..xxxx.xxx.."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> seaMap = {"xx..xx.x...x...xx.xx......x.x..x.xx.xxx.x", ".xxx...xxxx...x..xxx.xxxx.x.x...xx.......", "x.x..x.x...x..x..x.xxxxx.....x...xxxx..xx", ".x.xxx...x...x.x.xx....x..xx..x.x.x....x.", ".xxx.xx.xxx.....x....x..x.xxx...xx.xxx.x.", "xx....x.xxxxx.x..xx..x..x.xxxxx...xxxxxxx", "..x...x.x..xxxxxx...xx....xx..x.xxxxx.x.x", "x.x.x.xxxx....x..x...xxxx...x.xx..xx..xxx", "xxx.....xxxxxx.x.xx...x.x.x.x.xxx.x....x.", "x.x.....xxxxxxxx..xx..x.x.x.xx.x....x...x", "x.x...xx.....xx.xx..x............xx...xxx", "x.xx.x.x.xxxx...x.x...x..x...xxxx.xx..x.x", "xxx.x.x.x.xx.x.xx..x..x....xxxxx.xxxx..x.", "xx.x.x.xx.......xx.x.x..xxxxxxxx..xx.x.x.", "x..xx..xxx..x.xxx...x...x.xxxxxxx..xx....", "xxx.x...x.xxx..x..x.....xxx.xxx.x.x..xx.x", "..x...xxx..x.........xx..xxx...xx..x...xx", "...x...x.xxx.xxx..xx..x.xx.x.xx..x.x..xxx", "x.x.xxxx.....x..x.x.x.x.xx....x..xx.xxxx.", "xx.x..x..x.xxx.x.xxxx....xx..xxx.x.xx....", "xxx.xx....xxxx.x.x.x.xxx.x..x.x...x....xx", "....x..xxxx..x....x...xxxx..x.x.xxx...x..", "xxx.xxxx.x..x...xx..x.xx.xxxx.x....x..xx.", "x...xx...xxx.xxxxxx.x.x.xx.xxxx...x..x...", ".xxx..x.x...x.x.xx..xxx.xx.x.xxx.x.xxx.x.", ".x.x....xxxxxx..xxx.x.xxxxxx..x...x.x.xxx", "..x....x..x.x..x..xxxx.....x..xxxxxxxx.xx", "xxxx.....xx..x.xxxxxx.xx....x.....x...x..", "..xx...x..xxxxx...xxx......xx..x.x.x....x", "x.xx..xxxx....x.....xxx.x.x........x...x.", ".x.xxx..x....xx.x..x.xxx.x.x.....x.x...x.", ".x..xxxx.xx.x.xxxxxxxxxxxx.x.......xxx.x.", "..x.xx.x.....x..x.xx.x.x..x...xx..x...x..", ".x.xxxxx.xxx.x.x.x..xx....x...x...x...x.x", "x.x.x.....xx.x.x.xxxxxx.xxx..xxxx....x.xx", "....xxx..x.xx..x...x.x..x.xxx..x..xx..xx.", "xx..xx.........x.xxxxx..x.xx.x.xxx.xxx.xx", "xx.x.xx...x.xx..xxx.xx..x..x..xx...xxxxx.", "xx..xxx..x..xxxx....x..xxxxx....xxx..xx.x", ".x.xx....xxx....x.x...xxx..xx...x..x.x.xx", "xxx....xxxx...x...xxxx.x...xx.xx.x.x..xx.", "xx...x..x.xxx....x....xxxxx...x...xxxxxx."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17, 1};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> seaMap = {"x..x.xxx.xxxxxxx.xx.xxxxxxx", ".xxxx.xx.x.xxxxx.x..x.x.x..", "xxx...x.x..xx..xx.xxxxxxxxx", "xxxxx.xxxxx.xxxxx.x.xxxxx.x", ".xxxx.xxxxxx.xx.xxxxxxxx.xx", ".xxxxxx..x.x.xxxx.xxxxxxxxx", "xxxxx...x.x.x....xx..xxx.x.", "xxx.xxxx..xx.xxxxx.x.xxxxx.", "xxxxxxx..xx.xx...xxxxxx.xx.", "x..xx.xxxxxxxxxxxxx.xxxxxxx", "..xxxxx.x.xxxxx.xxxx.xxxxxx", "xxx...xxxxxxxx.xxxxxxx.xx.x", "x.xxx....xxxx...xx.xx.xx..x", "x.xxx.xxxxxxxxx.xxx...x.xx.", "xx.x.xxxxxx..xx.xxx..xxxx.x", ".xxx.xxxx.xxxxxxx.xxx..xxxx", "...xxxxxxxxx.xxx.xxxxx...xx", "xxx.xxx.xxxx..x...xxxx.x.xx", "x.x...x..xxxxxx.xxxxx.xxx..", "x.xxxxx.xx.x.xxxxxxx.xx.xxx", ".x.xxxxx.xxxxxx.x....x..xxx", "xxxxxxxxxxxx.x.x...xxx..x.x", ".x.xxxxx.x.xxx.x.x.xx.xxx.x", "xxx.xxx.xxxxxxxxxxxx.xxx.xx", "x.x..x.x.xxx.x.xxxxx.xxxxxx", "xxxxxxxx.x..x...xxxxx.xxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> seaMap = {"...xx...x.x.xxx..xx...x.", ".xx.x.x..xxxx.x.xx.xx..x", "..x...x.xxxx...x.x..x.x.", "x..xx..xxxx..xxxx.x....x", ".xxx..x...xxx...xxxx....", "x.x......xxxx.xxx.......", ".xxxx.xxx...xxxx..xx...x", "..xx..xx.xxx.x.xxx.xx.x.", ".x....xxx...x...xxxxxx..", "xxx.xxxx...x...x.....xx.", "...xxx.xx.......xxx.x...", "x.x.x.xxxxx......xxxx...", "xxxx.x.xx.xx.x........x.", ".xxxxx.x.xxxxx...xx...xx", "x..x.x..x..x.xx..xxxx.x.", "..x...x.....xxx.xx.xxxxx", "xxx..x..xxx..xx.x.x.xxx.", "..x.x.xx......x.x.xx.x.x", "x.x.x.x...x.....xx..xxx.", "xx.......x.x..x...x..x..", ".xxxx.x.x...x..x...xxx..", "..x....xx...xx..xxx..xx.", "xx..x.x..x.x.xxx..xxx.xx", "xx.xxxxxxx.xx.xx.x..xxx.", "...x....x.x.....xx..xxx.", "..x...x.xx..xxxx.x.xx.xx", "xxxx.xxxxx.....x..xx.xxx", ".x.xxx..xxxxx.xxxxxxx.xx", ".xxx.xxxx.x.xxxxx...xx.x", ".x...xx.....xx.xxxxxxx.x", "xxxxxxxx.xx..x...xx.xxx.", ".xx.xxx.......x.xxx.....", "xx........x..x.x..xx..x.", "...xxx..xxx..xxx..x...x.", "xxxx..xxxx..x.xxx.x...xx", "...x.x..xx..x.xx.x.xxx.x", ".x.x.xx..x..x.xx....x...", "x..xxx.x...xxx...xx.xx..", "x.x.........xxxx.x.x.xxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> seaMap = {"xxxxxx.xxxx.xx.xxxxxxxx..xxxxxxxxxxxxx", "xxxx..xxxxxxxxxxx...xx.xxxxxx.x.....xx", "xxxx.xx.xx..xx...x..x.xx.xxx.xxxxx..xx", ".xxxxxxxx..x.x..xx.xxxxx..xx.x.xxxxxxx", ".x.xxxxx.xxxxx..xxxxxxxxxxxxxxxxxxx...", "x.x...xxxxxxx...x.xxx.xxxx.xx.x.x.xxxx", "x.xxxx.x.xxx.xx.xxxxxx.xxxx.xxx.xxxxxx", ".xxxxxxxxxxxxxxxxxxxxx.xxxxx....xxx.xx", "xxxxxxxxxx.xxx.x.xxxxx....xx.x..xxx.xx", "xxxx.x.xxxx.xx.x..xxxxxx..xxxxxx..x..x", "xxxxx.xxxx..x.x.xxxxxx.xxxxxxxxxxxx.x.", "xx...xxxx.xxxx..x.x.x.xxxx.xxxxxx.x..x"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> seaMap = {".x.x.xxx", "xx.xx..x", "x..xx.x.", ".x...x.x", "x......x", "..xx...x", ".x.xx...", "x.x.x.x.", "..xxx...", "..xx..x.", ".xxxxx..", "xxx.x.x.", ".xx.xx.x", "......x."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> seaMap = {"xxxxxxxxxx.....xxxxxxxx.x.xx.xxx.xx", "xx.x.xxx.xxxxxx.x.xx.xxxxxxxxxxxxxx", "x.xxxx.xx.xxxxxxxxxxxx.xxx.xxxxx..x", "x.xxxx....xxxxxxxx.xxxx.xxxx.x.xxxx", "xxxxxx.xxxx.x..xxxxxx..xxxxxxx....x", "xxxxxxxxxxxx....x.x...xxxx.xx.xxxx.", "xxxxxx.xx.xxxxxxxxxxx.x.xxxxx.xx.xx", "xx...xx.xx.x.x.xx.xx.......xxxx.xx.", "xxxxx.x..xx.xx.xxxxx.x.xxxxxx.xxxx."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> seaMap = {".", ".", "x", ".", "x", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", "x", ".", ".", ".", ".", ".", ".", ".", "x", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", ".", "."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> seaMap = {"...x.x.x.x.xxxxx..x.xx..xx.xxxxxxxxx.x", ".x...x..x..x.xxxxx.x.x.xxx.xxxxxx..x.x", "x...x....x.x..xxxx..x.x.x.....xxx.xxxx", ".x.xx.x.x..xx.xx.x.xxx.xxxxx.xx..xx...", "x..x...x..xx...x.x.xxx....xx.xxxx.xxxx", "x.xxxx..x..xx..xxxx.x.xx.x.xx.x..xxxxx", "x...xx.x......xx..xx.xxxx..x....xxx..x", "..x..xx.x.x..x...x..xxxxxx.x..xx.x..x.", "x....xx.xx.xxx....xxx.x..xx.xxxxx..xx.", ".xxxx.xxx.xx.xx.....x.x...x..xxx.x.x..", ".x..xxxx.........x..x.x.....x.x..xx.x.", ".....xxxx...xx.x.....xxxxxx.x....xx..x", "x.x..xxxxx....x..x..xx...xxx.xx..xxxxx", "xx.x...xxx.xx.x.x.xx.x..x.xx.xx....xxx", "..x.....xx.xxxxxx.xxx..x.....x..xxx.x.", "..x.xx.xx.x.x...x.x..........x.xxx.xxx", ".x.xx..x.....x...xx.x...xxx.x.....xxxx", ".x....x.x.xx....xx..xx.xxx.xxxxxxxx..x", "x.xx.xxx.xx.....x...x.x.xxx.....xxxxx.", "x......xx..x......x...x.x.xxxxxx.x.x.x", "x.xx..xxx.x.x....xx.xxx.x.xx.xxxxx....", "xxxxxxxxx....x.xxxxxx.xxx..........x.x", "xxxx..xx.xxxxxxxxx..x......x....x...xx", ".xxxx..xx....x.xx.xxx.x..xxxxxxxx.x.xx", "xxx.xxxx.x.x.xx.x...xx.x..x..xx.....x.", ".x.xxxxx.x.....x.x.xx..xxx.xx...xx.xx.", "...xx.x..xxx.x..x.x..xxx..xxxx..xx.xxx", "xxx..xxxx.xx....x.x.xxx.x.x.xxxxx..xx.", ".x...x.x..x..xxxx...x.x.x..x..xx.xx...", "..xxx.....xx..x.x.x.xxx.x.xxxxxx......", "xxx....xx.xx..xxx.x.x..x.xx.xxxxxx.xxx", "x..x.x.xxx.x.x...xx.xx..x.xxxx...xx..x", "....xxx.xx...xxx.....x...x..x..xxxx.x.", ".xx..x.x.x.xx...xxxx.xxx..x.x...xxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 1};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> seaMap = {".xx.xxxx...x.x.", "x..xx....x.....", ".xxx.xx.x.x....", "..x.xx......x..", "...x.....xx....", ".x.x....x....xx", "x........xx....", "xx.xx.x.....x.x", "...xx..x..x..x.", "xx..x...x.....x", "....xx....x.x..", ".x...........xx", "xx.....x.x...xx", "x...x......x...", ".x.......x.x...", ".x.x...........", "xx..........x..", ".x..x.........x", "x.x.xx.........", ".xx....x...x...", ".x..x..x...x.x.", "..xx........x.."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> seaMap = {"x..xxx.x..x.x.xx....x.x.xxx.x..xxx..xxxx.x...x", "x.xx...xx.x.xxxx..xx.x.x.xx.x....x.xxx..xx...x", "..x....x.x.x.xx.x.x.xx.xx.x.x..x.x..xxx.x....x", "xxx.x.x.xx.xxx.x.xxxx.x.xxx..x.xx...xxx..xx..."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> seaMap = {".........x..xxx.x..xxx..x..", "...x.....x.x.x..........x.x", "..xx..xx.xx.x..x.x.x.....x.", "...xx..x...x....x.x...x.xxx", "..xx.....x.xx...xx..xx.....", "........x.xx.........x.xx..", "..xx.x.....................", "x............x....x....x...", "xxx.....xxx...xx.x.......x.", ".x.............x.xx..x...xx", "x..x......x.x.xxxx...x..x..", ".xx..xx...xx.xx.....x....xx", "....x...x.x....xxxxx.......", "........x.....x....x...x...", "x..xx...x.x.x......xx.....x", "....x..xx.....x............", "..xx...................x.xx", "xx.x........xx.x.x...x....x", "x..x...x...xxx.........x.xx", ".xx..x...x.xxx.........x...", "...x......x.......x..x.xx.x", "..x...xxx.xx....x..x..x....", "..x.....xx..x.x..x.........", "x...........x.....x.......x", "..x.............x.....x...x", "..x..x.......x....xx..x....", "x........xx....x....xxx....", ".....x.x..x...xxx.......x.."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {51};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> seaMap = {".x..xxx..xxx....x.x.xxxxx.xxxxxx..x..xx.x....xx.xx", ".xxx..xxx.xx..xx...xxxx.x.x.x.xx...x.x.xxx..x...xx", ".xxxx...x.xx.xxxx...x.xx.xx...x..x....x....x.....x", ".xx.x.xx...x....x..xxx.x..xxx...x.xx.xxx.....xx..x", "....x.xxxxx.x.....xx.x.xx...x.....xxxx......xxx.xx", ".x..xx.xxxxx....x..x.xxx.x.xxxxxxxx.x...xxx..xx...", "..x.xx.x...xxxx.xx.xxx.xx..xxx.xx...x.xxxx...x.x.x", "x...xxxxx...xxxx.x.xx.x.x...x...xxxx..x...x.....xx", "x.....x.xxx..x.xx.xxxxx.x.x.xxxx.xx..x...x....x.x.", "xx..x.x.xx..xx...xxxx.xx..xxx..xx..xx..xxx.x.xxx..", "xxxxx.xxx...x.xx.xxxx...x..xxxx.xxxxxx..xx.x..xx..", "xxx.x.....x.xx..x.x.xxxx....x..x....xxx.xxxxxx..xx", "x..x..x.xx.xxxxxx..xx.x.xx.x.xx...xxx.x..xxxxx...x", "..x..x.x...x.x.x.x.xxx.x..x.xx.x.xx.x.x.xx.xxxx.x.", "xx.....x..xxx.xxxxxxx..x.xx..xxx...x.xxx..x...x.xx", ".xx.x.x.x..x..xxx.xxx.....xx.xxxx..x..xxxxxx.....x", "..xxx...x....xx.x...xxxx....xx...xxxxxx..x..xx....", "..x.xxxx.xxxx.xx.x.x..xxx......x..xx..x...xx.xxx..", ".x.xxxxx.x..x...x.x.x..xxxxxx.x.x.xxxx....xx.xxx.x", "xx......xx...x......xx..xxx.x....x.x..x.xxx.x..x..", "x...xxx.xx...x....x..xx.x.x.x...xxx.xxxx..xx.xxxxx", "xx.xx...xx.xx.xx..xxx.x.x...xx.x..xx.x..x.......xx", "xxxx.x..xx..xx.xxxx...x.xx.x.x...xx....xxxx......x", "..xxx....x..xx.xx.....xx.x.xx..x...x.xxx.x..x.xx..", "xx..xx.x..xxxxxxxxxx.x.xx.x.x.xx..xx...xx.xxx...x.", ".xx...xx.x.xxx.......x.xx.....x.x.xxxxx.xx........", "xxxxxxxx.xxx..x..x.xxxx.x....x..xxx....xxxxx.x.xxx", "..xx.xxx....x..x.....xx.xxx....x...x.xx.xxx....x.x", "...x......xxxxx....xxxx.xx..x.x.x.x..xx.x.x.xx..xx", "xx.x.x...xx.xxxx.x.....xxx.x....x..xx.x..x.xx.x...", ".xxxxx.xxxxx...xxxxx.xx.x...xx..x.x..xxx.x.xx.x..x", "....xxxxxxxx....xx..x.xx...x..x.x..x.x.x.x....xxx.", "xx....x.x.x.x.x.xxxxx.xx.x.xxxxxxx...xxxx.xxxx.x..", "x....xx...x.xxx..xxxx.xxxxxx.x.....x.x.x..x.x..x.x", "......x.x......xx....x.xxxx.xx.x.xxx..x.x.x.x....x", "x...xxxx...xx.x..x.x..xxx..x..xx.xx.x.xx.....xxxx.", ".x..x.xx.x...xxx...xxx....x...x..x..xxx...xxx....x", "x.xxxxx..xxxx.xx.x...xxx.x..xxxx.x.xxx.xx.x.xxx...", "x.x...xxx.xx..xxxxx...x.x.x..xxx.x.xx.....x.x..x..", ".xx.xx.x.xx..x...xxx..x...x.x.....xxxx.xx.x.xx.xx.", "..x....x.x...xxx..xxxx.xxx....x.x.xxx.x.xxx..x....", "..x..x.x.xxxx..x.xxxxx..xxx..x...xx..x.xx.xx.....x", ".x..xxxxxxxxxxx.x.....x.........xx..x..x..xx..x...", "....xx.x..x.x....x..x...xx......xxxx..x.xx.x...x.x", "..xxx..x.x...x.x.x..xxxx.x.xx.x.....xxxx..xx.xx...", "xxxxx..xxxx..xxxx..x..x....xxxx.....xxxxxx.xx....x", ".xx..x....xx..x.x.x..xx.xxxx..x.xxxx...x.xx.....xx", "x...x.x..xx.x.x.x.x.xx.xx..x...xxx.xx..x...x.x.xxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16, 1};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> seaMap = {".x...xx......x...x..x...........x..xx........x..", ".x.....x....x....x...x...x..x.x.xx.x....x....x..", ".x.x....x.x.xxx...x...xx..x...x.......x...x..xx.", "....x....x.......x.....xxx..........x...x...x...", ".x........x.....x...x.x.x.x.x.....x.x...........", "....xx...x.x.x.xxxx....x.................xxx.x.x", ".x..x.x.x........x...x........xxx..x..xx....x..x", "x.xx.xxx..x...x..x.x...xx..xxx....xxx..........x", ".x.x...xxx.....xx.x.x....xx....x..xxx......x....", "..x.x............x.x.x..x......x.xxxx..xx.x..x.x", ".x....x....x..xx..x...x..x.............x..x...x.", ".xx...........xxx.x.x............xx...x.xxx.....", ".........x........x.xx......x...xx.x...xx.x..x.x", ".x......x.........x.x...x........x.x.x.x....x.x.", ".....x......xx......x....x...x.............xx.x.", "xx...x....x.......x...x......x...x.x..x...x.....", "....x....x.xx......xx....x..........x..x..x.x...", ".x...x........xxx...x.x.x..x.....xx.....xxx.....", ".x.xx..x.......xx....xx...xx.x..x.x.....x.x....."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {58};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> seaMap = {"...xx.xx.x..x.......x..xxxxxxxxx.xx", "x.xx...x.....x.x......x..x..x.xx...", "..x....x.x..xxxxxx..x...xxxx..xx..x", "x..x...x..xx.xxx..x..x..x.x.x....x.", "...x...xx.xx.x.x...x..x.xx.x.xxx...", ".x.xx.x.xx...x...x.xx.....xxx.xxx..", "xxxx..xx.xxxx.xxx..xxx.xx.xx..x...x", ".xx...xx.xx....xx.xx....xxx..x.xxx.", "x...xx..xxxx.xxxxxxx.......x.xx....", "xx.x.xx.x.x.xx..xx.x.xx.xx......x.x", "....xx....x...x.x..x.xx....xxxx.xxx", "..xxxxxxxxxx.xxx..x..xx.x.xxxxx.x.x", ".x..xx.xxxx.xxxxx.....xxxx..x....x.", "...xx.xxx.....x.x.x.....xxxx..x..xx", "xx....xxx...xx..x.xx...x.xx...x.xx.", "xxxx..xxxxx...xxxxxxxxx.x.xxxxx....", ".x...x....xxxxx....x....x..xx.xx...", "x.xx..xx.....x.xx....xx...x..xx....", "x....xxxx...xxxxx.xxx.....xx..xx.xx", "xxx..xxx.x.x.x..x.x...x..xx.x.x.xx.", "...xx...xxx.xx..xx.x...x.x.xx...x..", "x...xxxxx...x...x..x..xx.x.xx....x.", "x..xx....x..x.xxxxx.x..xxxx....x.x.", "x..x......xxxx..x...x.xxx..xx....x.", "x.x.xxx.xxxx...xxx..xxxx.x..xx...x.", "..x..xxxxx..x.x...x.x...x.xx....xxx", "x..x...xxxxx..x.xxxx.x.xxx..x.xxx..", ".x.x.x.xxxxx.....x..x.x..x..xxx....", "xx.x.x..x.x....xx...x.x.xxx........", "...xx.xx.xxx..x...x.x.xx..x..x...x.", "x.x.xxxx.x.xx.xx.x...x...x.xx..x.xx", ".xx...x.xxxx.x.x......x.xx.xxxxx.xx", ".x..x......xx.xx.xx.xxxxx.x.xx..x.x", "xxxxx.x.xxx.x......x..x...xxxx.x.x.", ".xx.x....x.xx...xx.....x...x.xx.xxx", "x.xx.xx..xx.x..xx....xx.xx...xxx..x", "xxxx.x..x.....x..x...xxx..x.xxxxx.x", "xxxxxxx.xxxxxxx..xx.x.xxx..xx...xx.", "xx....xxxxx..xx.x.xxx.x.xx.x.xxx.xx", "x.xxx..xx.xx.xx.....x.xx.xxxxxx.x..", "xx.xxx.xxxx.xx...x...x.x.x.xx...x.x", "...x..x.x.x......xxxx..x.xxx.xx.xxx", "xx.xxx...x..xxx..x..xx.x..x...x..x.", "xx......xx....xx.x.xx.xx.x.x.......", "xxx....xx.xxx.xx.xx.x..xxxxx.x.x.x.", "x.xx...xx.......xx..xxxxx.xx.x.x.x."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 1};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> seaMap = {".x....xx..xx", "x.x.........", ".....x.x.x..", "x......x....", ".x.......x..", "x.xxx....x..", "......x.....", "....x.x.x..x", "............", ".x....x...x.", ".x...x.x...x", ".....x...x.x", "x.........xx", ".x.x....xx.x", "...x....xx..", ".x.x.......x", "x.........xx", "........x...", "..........x.", "...xx.xx....", "..x.x.xxx.x.", "x.x...x....x", ".x..x.......", ".x..x...x..x", "........x.x.", ".........xx.", "x.....x.....", "x...xxx.....", "............", "..xxx..x.x.x", ".x..x..x.x..", "....xx......", "..xx.....x..", "x..x..x....x", "xx....x.....", "...x.......x", "x...x...x..x", "..x.x....x..", ".....xxx..x."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {41};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> seaMap = {".x..xxx..x.", ".x.xx.xx.xx", "xxxx.x...xx", ".xx..x..x.x", "x..x.....xx", ".x.xxxx.x..", "x...xx.xx.x", ".xxxxx....x", "x.xxxxxx..x", ".xx.xxx..xx", ".xx........", "xx.x.x.x..x", ".x..xx.xx.x", "x...x.x..x.", "xxxx..x..x.", ".xxx....x.x", "...x.x...x.", "xxxxxx...x.", "....xxx.xxx", "xxx..x....x", "xxx...x..xx", "x.xxx.xxx.x", ".x..x.x....", "x...x..xxxx", "x...x..xx.x", "..xxx.x..xx", "xxx.x...x..", "xx.xxx.x..x", "xxxx.xx..xx", ".xxxx..x..."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> seaMap = {"......", "....x.", "xx..x.", "......", "xx....", "...x.x", "......", "x..x.."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> seaMap = {"xx.xx..xxx..x...x...x.x..xxx..x.....x.x", "....x.xxx.xxxxxxxxx.xxxx.xxx.x..xx.xx..", "x....xx..x......xx.xxx.x.x..xx.x.xxxx..", "x.xxx....x.x..x....x.xx..xxx.xxxxxxx..x", "...x...xx..xx...xx...x......xx..xxxxx.x", "x....x....x....xxx..xxx.x.x.x..xxx.x.x.", ".x.xx.x.xxxxxx....xxx.x.x..xx..xx..xxxx", "x..xxxxxx..x.........xxxxxxxxxx.xx..xxx", "...x.x..x..xx.x........x.x.xxxxx.x.xxx.", "x..x...xx..xx........x.x.x..x.x.xx..x..", "..xxxx..xxx..xxxxx..xx.x.xxx...x..x...x", "x.xx...xxxxxxxx..x..x......xx...xx.x...", "xxxxx.x.xx..x..x..xxxx..xxx.x.xx.xxx.x.", "..xx..x.xx.x..xx.x...xx.x...x...x.x.x..", "x..x.x..x..x.x.xxx.xx.x....x.xx..x.x.xx", ".xxxx...xxx.xx.xx.xx.xxxxxx.x.xx..x.x..", "..xxxxxx.....xx....x..xx......xx.xx.xx.", "x...x.xx.x..x.xx.xx.x.....xx.x..xx....x", "..xx..xx.x....x.x....x.xx..x.....xx.xx.", "....x.xxx.x.xx.xx.xxxx.x.x...x..x.xxx..", ".xxx...xxx..xx..x..x.x.xxxxxxx..xxxxxx.", ".xxx..x..xxxxxxx..xx.xx..xxxxx.xx..x.xx", "x.xxxxxxxxx...xxxx.xxxx...xxx..xx..x.xx", "..xxxx....x..xxxx.xxxxx.x.x.x.....x..xx", ".xx..xxxx.x.xxx...x.xx.x..xxx..x....x..", "x.....x....x......xx.x..x..x..xxx..x...", "xxxxx.xxx..x.xx..x.x.xx..x.x.x.x.x.xxx.", "....xxx.x....x.xxxxxx.x.xx.x.x.xxx.xxx.", "xx.x.xx...xxxx..xxxx.xxx...xx...xxx..xx", ".x.xxxx..x...x.xx..x.x..xxx...xxx..x..x", "xxxxxx.xxxx.x.xxx..xx..xx...x........x.", "..xx.xxx.xx...x.x...xxxx.xxx.xx.xxxx.x.", "xx.....xx.xxx...x.x.x.x..x.x.xxxx.x...x", "x..xx.xx..x..x.x.x.x.xxxx.xxxx.x.xx.x..", ".xxx.x.xxx..x....x...xx.x.xx.x..x.x.x.x", ".xxxxxx..xx.x.xxx......xxx..xxxx..xxx..", "...x...xxx.x..x..xx.x...x..x...xx..x..x", "x.xx..xxx..xxxxx..xx..xx.xxxx.x...x.x..", "xx.xxx..xxx...x..x..xxxxx.....xxx...x.x", "x.xxx..xx.xx.xxxx.xxx..x.xxx..x.....xxx", "..xx.xxxxx.x..x..xxxx.xxxxx.xxxx.xx.x..", "x...x...x..x.xx.x.xx...xxxxx..x.x......", "x.x.x.x.x....xxxx.x..xx.x.x..xxx.xxx.x.", "xx.x.xxx.xx...xxx.xxxx.x..x.xxxxx....x."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 1};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> seaMap = {"..............x...x", ".x.x............xx.", "..x..x....xx.......", "..x...x.....x..xxx."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> seaMap = {".........xx..xx.x.x..xx...x.x.", "x..x.xx.x...xxx.xx.xxxx.xxx.x."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> seaMap = {"....x....xxx.......x..........x.....", "x.x...x.xxx.....xx..x..x............", ".x.............x.xx.x..x..x....xx.x.", "......xx.x.xx..x..x.x.....xxx.....xx", ".xx..x....x..............x...x......", "x...x..xxx....x.xxx...x.....x..x.x.x", "..xx......x.xx.x.....xx.....x....x..", "...xx....xx.........x.........xx....", ".......x...xx..........xx...xx......", "x.xx......x..........x.x..x..x.x...x", "..........x....x...........x....xx..", "x..x...x...x.x............xx........", "............xx..................xx..", ".........x.......x....xx.xx...x.x.x.", "...............x.x..xx........x..x..", ".........x.x.......xxx.......x....x.", "......x........xx...x....x..........", "........x..xx..x....xxxxx..x.....x..", "xx.x...x...xx........x..........xxxx", "...x..x.......x.x.....x......xx...x.", "xx...xx.........xx.....x...xxxx.....", "......x........x.x.....xx.x...xx.x.x", ".......xxx...x........x....x......x.", "xx..........xx...xx..........x....x.", "..............x......x.......x...x..", ".x.xxxx...xxx......x..x.....xx......", "x..xx.x..x.x....x..xx......x..x.....", "..x....x...x.......x.x......xx...xx.", "xx......x...x.x..x......x.x...xx.x..", "...x........x.xx.xx......x......x.x.", "..x............x.....x..x..x.....x..", ".x...x...x.....x...x........x.......", "x.xx.x..x...xx....x.xxx.x....x...xx.", ".x...x...x......x..x..x.x.....x.x...", "x.x.x.x.....x.x.x..x.xxx...x...x..x.", ".xx.x.x..x..x....xxxx.x..x..........", ".x....xx......x...x..............x..", "xx..xxx...x...x.x..............xx.xx", "xx..x.xxx..x.....x....x.xx..x.......", "..x......x..x....x...x.....x.x..x.x.", "......xx....x..x.....xxx.x..x.x....x", ".x.x............x...x.....x.x.x.x...", "....x.x..x...x..x.x...x.......x.x...", "...x.x.x...x.x..x..x.x.x...x...x....", ".......x..xx......x..x.x.x....x....x", "..x....x....x...x............xx..xxx", "x......x.....x.xx..x..............xx", "x..xx..xx................x.x.x.xx...", "..x....x..x.xx.x..............x....."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {113};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> seaMap = {".xxxx...x..xxx.x.xx..x..x..x.x.....xxxxx...xx.xxx", "xx.xxxx.......xx...xx..xxx.xx..x...xx.x....x...xx", "x..x...x.....xx.....x..xxx.xxx.xx.xx..xx.xx.x.xxx", "xxx.xxx.x.x.x..x.xx.x.xxxx.......xx.x.x..xxx.....", "xx.xx.x.xxx..xx.x.x...x..x...x...x.x...x....xx.xx", "xxxx.x.x..xx..xx.x.xx..xx.x.xx..x.xxxxxxxxxxxx.x.", "...xxxxxx.xxxx...x...x.xx.x.x.x.xxxx.xxx.xxx.x.xx", ".x...xxx.x..x.x..xxx...xx..x.....xxx..x.x.xx.x.xx", "..xxxx.xx...x.xx..xxx...xxx.x.x.x.x.xxxx.x...x..x", "...xxxx...xxxxx.xxx....xx...xx..x.xx.x...xxx.x...", "..xx.x.....xx.x.....x..xxx..x.xx.x.x..x.x.xxxxxxx", ".xx...x.....x..xx.xx..xxx..xx.xxxxx.......xxx.xxx", "x.x.x.......x...xxxxxx.x.x.xx..x..xx.xx..x.x...xx", "....xxxxxx.xx....xxx.xx..x.x.x.x...xxx.......xx.x", "x.x.x.xx.x..xx.xxxxxx..x....xx....x.x.xxx.x.x.xxx", ".x.xx.x.xxx....x.x.xxx.x.x...xx..x...x...xxx.xx..", ".xxxxxx.......xx.xxx.x.xxx.x..x.xxx..xxxx.x.x.x..", "x.x.xx.....xxxx.xx...xx....xx....x..x.x.........x", "...xxxxx..x..x..x.x.xx.....xx.x..x.x...x...xx.x.x", "x.x.......x..xx.xxx.....xxx..x.xxxxxxx.xxx.x...xx", "..x.xx.x.x.x...xx.x.xx..x.xx.xx..xxx..xxxxx..x..."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> seaMap = {".....x...x.xx...x........x....x...xx.....x", "......x.xxxx.x.xxxx..x.x.x......x.x....x..", ".xx...x.....xx.x.......x..x............x.."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> seaMap = {".xxx....xxxx......x.x..x.xxxxxx", "x.x..xxxxxx.xx.xxxx..xx..xx.x..", "..xxxx..x.....xxx..x.x.x..xx.x.", ".x..x..x.xx.x.xxxxx..x.x..xxx.x", "x.xx.xx.....x...xx..x.xxxx.xx..", "xxx.xxx.x.x.xx..xxxxxx.xx.x....", "..x.xx.x.xx.........xxxx...xxxx", ".xxx.xx..x.x.xx...x.x.x.x..xx..", "....x.x.x....xxxxxx.xxxxxx.xx..", "x..xxxx.x...xxx..x.x...xxxxxxx.", "....x......x.x.xx.xx..x.x...x.x", ".xx.x.x.x.xxxx.xx..x.........xx", "xx..x.x.xxx..xx.xx.xxxx.xx.x..x", "x..x..x........x....x....x...x.", "....xx...xxx.xx.x.....xxx...x..", "....xxxx.....xx..xx..x......x.x", "..xx.x.xx...x....xx..x...xxx.x.", "xx..x.xxx...xx...xx.x...x...x.x", "xx..x.xx.xx.x.xx.x....x..xx..x.", "x.....x.x.x..x...x..xx.x.x...x.", "x...x.x....xxxxx..xx.xx..x.xx.x", ".x..x......xxxx.xx.x....x..x..x"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7, 1};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> seaMap = {"......x", ".....x.", ".xx....", "x....xx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> seaMap = {".xx..xxx...xx..xx.x", ".xx.x....x...xx.xx.", ".x.xx.xxx.....xxx.x", "x.xxxxx..xxx..xx..x", ".x..xxx.xxxx.xxx...", ".xxx.x.xxxx.x.x.x..", "..x.x.x.xx.xx..x.xx", "...x.x.x.xxx.xx..x.", "...xxxxxx..xx......", "xx......xxx.xxxx..x", ".x...x..x...xxx...x", ".xxx.x.xx....x.....", ".x.x....x.xxx.xxx..", "x..x.xxx.xx.....x..", ".....x.xx.xx...xx.x", "x.xxx.xxxx.xxx.xx..", "..xx.x.x.x.x.....xx", ".....x.x..x..xxxxxx", "x....xx.xx..x.x..xx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> seaMap = {".xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> seaMap = {"x.xx.xx.xx.", "xx.xx.xx.xx", ".xx.xx.xx.x", "x.xx.xx.xx.", "xx.xx.xx.xx", ".xx.xx.xx.x", "x.xx.xx.xx.", "xx.xx.xx.xx", ".xx.xx.xx.x", "x.xx.xx.xx.", "xx.xx.xx.xx", ".xx.xx.xx.x", "x.xx.xx.xx.", "xx.xx.xx.xx", ".xx.xx.xx.x", "x.xx.xx.xx.", "xx.xx.xx.xx", ".xx.xx.xx.x", "x.xx.xx.xx.", "xx.xx.xx.xx", ".xx.xx.xx.x", "x.xx.xx.xx.", "xx.xx.xx.xx", ".xx.xx.xx.x", "x.xx.xx.xx.", "xx.xx.xx.xx", ".xx.xx.xx.x", "x.xx.xx.xx.", "xx.xx.xx.xx", ".xx.xx.xx.x", "x.xx.xx.xx.", "xx.xx.xx.xx", ".xx.xx.xx.x", "x.xx.xx.xx."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> seaMap = {".xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.x"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> seaMap = {"x.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.", "x.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx", "xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.x", ".xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx.xx."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> seaMap = {".xx.xx.xx.xx.xx.", "xx.xx.xx.xx.xx.x", "x.xx.xx.xx.xx.xx", ".xx.xx.xx.xx.xx.", "xx.xx.xx.xx.xx.x", "x.xx.xx.xx.xx.xx", ".xx.xx.xx.xx.xx.", "xx.xx.xx.xx.xx.x", "x.xx.xx.xx.xx.xx", ".xx.xx.xx.xx.xx.", "xx.xx.xx.xx.xx.x", "x.xx.xx.xx.xx.xx", ".xx.xx.xx.xx.xx.", "xx.xx.xx.xx.xx.x", "x.xx.xx.xx.xx.xx", ".xx.xx.xx.xx.xx.", "xx.xx.xx.xx.xx.x", "x.xx.xx.xx.xx.xx", ".xx.xx.xx.xx.xx.", "xx.xx.xx.xx.xx.x", "x.xx.xx.xx.xx.xx", ".xx.xx.xx.xx.xx."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> seaMap = {"x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".................................................."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {625};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> seaMap = {"......x......x...x...x.x...............x.x........", "...x.xx.x.......x.....x......x.....xx..xx...x.....", "x.x.....x......x.......xx...............x..x.x....", "......x................x.....x............x.......", ".................x..x.....................x.......", ".......x.......xx....xx.......x..x................", "..x........x..............................x.......", ".x...................x..........xxx....x..x.......", ".....x...............x..x..xx.....x..x..x.x.......", "..x.......x..x................xx.............x..x.", ".....xx..x.......x................x........xx..x..", ".......x....x..x...x.x...x.......x................", ".x.......x........x.x.........................x.x.", "..........x..........x....x......x...........x....", "xx...............xx...xxx...x.x........x..x.....x.", "x........xx..x.............xx....x..x.........xx..", "x.......x.........x...........x.x.....x........x..", ".....x..x............x.x.x.......x.xx...x.x.x.....", "...................x..x...x.x.x.....x.........xx..", "......x..............x.x.xx.............xx..x....x", ".........x...xx.....x..xx......x........x.x..x....", ".....x....x.......xx..x..x...........x..x.........", "x...x.x............xxx...xx............x..x....x..", ".....x..x........x........x....x..................", "..x........x...................x...x.........x.x.x", "....x...x..............x.x...xx................x..", "...x..............x.........................x.....", "....x........xx........xx.....................x...", ".......xx.x.............xx............x..x........", "...xx.x.x......................x................x.", "..............xx.............x.x..................", "...........xx...........x..x............x.....xx..", "x....x...............x.......x....x...............", ".x........xx.............x.x.....x.....xx...x...x.", ".............x..........x.........................", "..xx.x..x..x....x.x...................x.x.....x...", "..........x.....................x......x........xx", "..........................x.......x....x..........", "......x......x...x....x.x............x...x.x.....x", "......xx.x..x...x..xx......x....x......x.........x", ".xx.x.............x..........x..xxx.........x.....", "..................x..................x.........x..", "..x......x...x....x.......x.x...x..x.............x", "............x...x........x.x...x...xx..x........x.", ".......x...............x.....xxx.x................", "x..x.x...............................x..........x.", "......x.xx.....x..x.xx...x....x......x..x.........", "..........xx.x....x......x...x....x............x..", ".............xx................x...x.......x......", ".........x....x...........x.x...x.......x...xx.x.."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {193};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> seaMap = {"x.....x.......x...x.x...x...x..x...x.....x...x....", ".....x..x......x..............x...................", "...............x........x...xx...............x....", "..x.xx.x.xx...x...x.....x......x....x..x.x........", "..x..x......x......x.xx.x....x.........x.......x..", "..........xx.x........x....x......................", ".....x.....x...............................x.x....", "......x...............x..........x...xx.x.......x.", ".x.xx...x.........x.........xx..x.x...x......x....", "....x......x....................xx...xx......x.x.x", "...............x.x.....xx...x.......x.............", ".........xx.....x..x.x...xx........x.......x.....x", "..x.x.x.....x.........x....x.x......x....x...x....", "..................xx.....................x.x......", "..x..........x.x.x.............xx....x.x..........", "..x.x........x.....................x....x........x", "x......x..x..x.xx...x...................x.........", "..............x......x................x..x....x...", "....xxx......x..xx.................x....x........x", "x.x........x.................xx............x......", "..x..........x............x...x..........x.....x..", ".............x..x.x..x..x...............x......x..", ".............x...x.....xx.x..x......x.x..........x", "......x...x.x.....x..x.xx.....x....x..x...........", "...........x.xx.xx..xx...x...........x...x..x.....", "...........x.x....x......x..........xx...x....x.x.", ".x..x.......xx..........x....x.xxx..x.........x..x", "...........x.....x.......................x.......x", "..........x.......x..........x....x.x...x.x.xxx.x.", ".....x.x...x............xxx..........x..........x.", "xx.....x........................x.xx.......x......", ".....x..........x.............................xx..", "...............x.....x.....x......xx....x.........", "x..........x........x...x....x.x.............x....", "x.xx................x.....xx...x...............x..", ".x....x......xx...............x.......x..x....x...", ".x...x...........xx...............................", "............x...................x...x.....x.......", "...x..........x..x....x...x.............x.......x.", "..........xx.......x..x....x............x.x....x..", "....................x..x..................x....xx.", ".x.....x.....x..x....x........x.........x.xxx.....", ".....x..xx.............x.......xx.................", ".......x........xx......x.............x.x...x.....", ".......x.x........xxx.....xx.....xx..............x", ".....x.......................x...xx.........x.....", "........x......x......x...............x...........", "..............x.x.x.........x...x...x.............", ".................xx.................x.....x.......", "........x.......................x........x.x......"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {184};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> seaMap = {"...x...x......x....x..x..x..........x.............", "..x.x...xx....xx.....x.x.....x.x.....x............", ".x.x........................x..x...x.....x....x...", ".x.....x........................x..........x......", "...........xx......x...........xx......x.....x..x.", "...........x.xx......x...xx..xx.x.................", "xx............xx...............x.......x.......x..", ".x.......x.........x................x..x...x...x..", "x...........x..................x........xx.x..x...", "............x..........x............x......x.....x", "...xx............xxx.x......x.....x.x.x.........x.", "..x..........................x..................xx", "x..........x.x..x......x..............x..........x", "x.......xx......................................x.", "....x...x..x....x...........................x.....", ".....x....xx.....x..x..........x.xx..............x", "..................xx..x......x..x...............x.", ".......x...x..xx..x..........x.............x.x....", "..x.......x.......x..x...x..........x..x.........x", "...............x..x...x.x.x.x...x...........x.....", "..xx.xx..x.....x..x........x......................", ".x....x.............................x....x........", ".......x......x..x........x.x....x........x.......", "...........................x.......xx...........x.", "...x................x..........xx......x..........", ".x....................x..xx........x....x.....x...", "...x...x............x.....x......x..........xx....", "...................x..x.x..x......................", "................xx..x...x.x...........x...........", "......x..x.x...x.x...xx..xx...x..x...x......xxx...", "...........x........x..x..x........xx..xxx..x.....", ".....x...xx......x....x..x.....x......x.....x.....", ".....x.......xx.x..............x..................", "..x.......x......x...x.xxx..xx........xx..x...x...", "..x..x.x........x........x...x.......x.....x......", ".....x.x......x......x..x..x...xx..x...x.x....xx..", "x......................xx.......x...x..........x..", "..x.....x.....xx......xx................x..x......", ".....xx............x..x...xx..x....xx.xx...x....x.", "x..................x.................x....xx......", ".x.xx.x.x.....x.....x..x.........x...x.......x....", "..x.......x...x.x.x..x......x......x.x......x.x..x", "..x...............x....x.x.......x...x..x...x.....", "x.....xx........x......................x.....xx...", "...........x..............x.x............x..x.x..x", "....x......x....x...x...x.x....x........xx..x.....", "..x.......x......x..x............x........x....x..", "...x.....x....x......x....x...x......x.x.......x..", "......x...x.........x.............x...xx..........", "..x.x..x.x....xx.....x.xx...x....................."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {179};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> seaMap = {"..........................................x.......", ".........x.......x....x................x....x.x..x", "x....x..x......x............x.......x......x....x.", "...xx....x.x......x..x..x....x.......x.....xx.....", ".....x...............x.x......x....x...........x.x", "...x..x.x...x.x................xx....x....x.......", "......x.x..x..................x.x..x....x...x..x..", "x.........xx...x.......xx....xx.......x.......x.xx", "....x.......x............x.......x..x...x.x..x....", "............x...x.....x....x......................", ".x..xx..............x.....x...x...xxx.....x.......", "......x.....x....x.....x.......x.x......x.........", "..xx................x..............x..............", "..............x..........................x.....x.x", ".x..x.x.xx...........x.....................x...x..", "............x....x..............x..........x..x..x", "..x.x.x....x......x..x.......x......x........xxx..", "...........x............x........x.xx..x..........", "...xxx.x.xx.x..............x..................x...", "..............x..x..........x..........x.x........", "..x....xx..x..............................x.......", "........x...x..x...............x......xx..........", "...........x.........xx................x.x...xx...", "..x.............x.x..x....x...x................x..", ".xx.x.x..........x.x..x........x..x..x..xx........", "x..xx...................x....x....x...x...x....x..", ".........x...x..x.x...xx.........xx....x...x......", ".x...x.............x.x....x..........x.x..x.......", "..................x...x.x................x.x......", ".......x.....x.............xx..........x..x.x....x", "...x....x.........x..xx.......x...................", "....x.........x....................x.x.xxx.x......", ".xx....x...........x........x.........xx.x........", "x.................................................", "...x..................x...x.....x...x............x", ".x.......x.......x..x..x..x...x...................", "......x.x.............x.....x..........xx...x....x", ".xx........x.x...x.....x.............x.x......x.xx", "...x.x...x........x..x...........xx....x....x.....", "................................x..x.......x......", ".x...x...x.......x...x...........x........x..x....", ".......x.x....x.........x...x......x...x..x...x...", "....x..x....xxx.......x......x.x.x......x.x.......", ".x.................x.........x..x.x...............", "....................x........x..x.....x.x..x.....x", "........x........xx.........xx........x.......xx..", "...xx..........x.....x..............x.............", "..x.......................x........x....x..x......", "x......x..x.xx..x.......................x.x...x...", "...................x....x....x......x...x..x......"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {200};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> seaMap = {"..................................................", ".xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", ".x...............................................x", ".x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x", ".x.x...........................................x.x", ".x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x", ".x.x.x.......................................x.x.x", ".x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x", ".x.x.x.x...................................x.x.x.x", ".x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x.x", ".x.x.x.x.x...............................x.x.x.x.x", ".x.x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x.x.x", ".x.x.x.x.x.x...........................x.x.x.x.x.x", ".x.x.x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x.x.x.x", ".x.x.x.x.x.x.x.......................x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.xxxxxxxxxxxxxxxxxxxxx.x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.x...................x.x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.x.xxxxxxxxxxxxxxxxx.x.x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.x.x...............x.x.x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.x.x.xxxxxxxxxxxxx.x.x.x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.x.x.x...........x.x.x.x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.x.x.x.xxxxxxxxx.x.x.x.x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.x.x.x.x.......x.x.x.x.x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.x.x.x.x.xxxxx.x.x.x.x.x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.x.x.x.x.x...x.x.x.x.x.x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.x.x.x.x.x...x.x.x.x.x.x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.x.x.x.x.xxxxx.x.x.x.x.x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.x.x.x.x.......x.x.x.x.x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.x.x.x.xxxxxxxxx.x.x.x.x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.x.x.x...........x.x.x.x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.x.x.xxxxxxxxxxxxx.x.x.x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.x.x...............x.x.x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.x.xxxxxxxxxxxxxxxxx.x.x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.x...................x.x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.xxxxxxxxxxxxxxxxxxxxx.x.x.x.x.x.x.x", ".x.x.x.x.x.x.x.......................x.x.x.x.x.x.x", ".x.x.x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x.x.x.x", ".x.x.x.x.x.x...........................x.x.x.x.x.x", ".x.x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x.x.x", ".x.x.x.x.x...............................x.x.x.x.x", ".x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x.x", ".x.x.x.x...................................x.x.x.x", ".x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x", ".x.x.x.......................................x.x.x", ".x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x", ".x.x...........................................x.x", ".x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x", ".x...............................................x", ".xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> seaMap = {"..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".............x....................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".............................................xxxxx", ".............................................x...x", ".............................................x.x.x", ".............................................x...x", ".............................................xxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> seaMap = {"...xxx..", "..x...x.", "..x.x.x.", "..x...x.", "x..xxx.."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> seaMap = {"x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.xxx.x.x.x.x.x.x.x.x.x.x.x.", "x.x...................x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x..x.xxxxxxxxxxxxxx.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.............x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x...x...xxxxxxx.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x..x.x.x......x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.xx...x.x......x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x..x..xx..xxxxxxx.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x...............x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.xxxxxxxxxxxxxxxxx.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x...................x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.xxxxxxxxxxxxxxxx", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x..............x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.xxxxxx.x.xxx.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x...x........x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x..xxxxx.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x...x.x...x..x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x..xxx..x.x.x..x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.xx.....x....x..x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x...xxxxx...xxxxx."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {39, 2, 1};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> seaMap = {"x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.................x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.xxxxxxxxxxxxxxx.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.............x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.xxxxxxx..x.x..x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x......x....x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.xx.x..xxx.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x..x....x...x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x...x.......x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.xxxxxxxxx.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.............x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.xxxxxxxxxxxxxxx.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.................x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.xxx.x.x.x.x.x.x.x.x.x.x.x.", "x.x...................x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x..x.xxxxxxxxxxxxxx.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.............x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x...x...xxxxxxx.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x..x.x.x......x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.xx...x.x......x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x..x..xx..xxxxxxx.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x...............x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.xxxxxxxxxxxxxxxxx.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x...................x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.xxxxxxxxxxxxxxxx", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x..............x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.xxxxxx.x.xxx.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x...x........x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x..xxxxx.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x...x.x...x..x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x..xxx..x.x.x..x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.xx.....x....x..x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x...xxxxx...xxxxx."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {50, 3, 2};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> seaMap = {"....................", "..xxxx..............", ".x....x.............", ".x.xx.x.............", ".x....x.............", "..xxxx..............", "....................", "....................", "....................", ".xxxxxxxxxxxxxxxxx..", ".x...............x..", ".x...............x..", ".x...............x..", ".x...............x..", ".x...............x..", ".x...............x..", ".x...............x..", ".x...............x..", ".x...............x..", ".xxxxxxxxxxxxxxxxx.."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> seaMap = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x............................................x", "x...xxxxxxxxxxxxxxxxxx.......................x", "x...x................x.......................x", "x....xxxxxxx...xxx..x........................x", "x..........x...xx..x.........................x", "x..........x......x.....xxxxxxxxxxxxxxxxxx...x", "x..........x.....x......x................x...x", "x..........x....x.......x..xxxxxxxxx.....x...x", "x..........xxxxx........x..x.......x.....x...x", "x.......................x..x.......x.....x...x", "x.x.x.x.x.x.x.x.x.x.x...x..x..x....x.....x...x", "x.......................x..x.......x.....x...x", "x.x.x.x.x.x.x.x.x.x.x.x.x..x.......x.....x...x", "x.......................x..xxxxxxxxx.....x...x", "x.x.x.x.x.x..x.x.x.x.x..x.............x..x...x", "x.......................x................x...x", "x.x.x.x.x.x.x...........xxxxxxxxxxxxxxxxxx...x", "x............................................x", "x............................................x", "x...........x.x.x.x.x.x......................x", "x............................................x", "x............................................x", "x............................................x", "x............................................x", "x............................................x", "x............................................x", "x............................................x", "x............................................x", "x............................................x", "x............................................x", "x............................................x", "x............................................x", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {46, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> seaMap = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x................................................x", "x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x", "x.x............................................x.x", "x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x", "x.x.x........................................x.x.x", "x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x", "x.x.x.x....................................x.x.x.x", "x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x.x", "x.x.x.x.x................................x.x.x.x.x", "x.x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x.x.x", "x.x.x.x.x.x............................x.x.x.x.x.x", "..x...x.x...xxxxxxxxxxxxxxxxxx.xxxxxxx.x...x.x.x.x", "x.x.x.x.x.x............................x.x.x.x.x.x", "x.x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x...x", "x.x.x.x.x................................x.x.x.x.x", "x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x.x", "x.x.x.x....................................x.x.x.x", "x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x", "x.x.x........................................x.x.x", "x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x", "x.x............................................x.x", "x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x", "x................................................x", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "..................................................", "..xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.", "..x.............................................x.", "..x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.", "..x.x.........................................x.x.", "..x.x.xxxxxxxxxxxxxxxxx.......................x.x.", "..x.x.x...............x.......................x.x.", "..x.x..x...xxxxxxxxx..x.......xxxxxxxxx.......x.x.", "..x.x...x....xx.....x.x......x.........x......x.x.", "..x.x....x.....x..x.x.x......xx...x....x......x.x.", "..x.x.....x.....x...x.x.....x..........x......x.x.", "..x.x.....x.....xxxx..x......x........x.......x.x.", "..x.x......x..........x.......x.xx.x.x........x.x.", "..x.x.......xxxxxxxxxxx........x..x.x.........x.x.", "..x.x.........................................x.x.", "..x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.", "..x.............................................x.", "..xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.", "..................................................", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxx...xxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxx..x..xxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxx...xxxxxxxxxxxxxxxxxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {11, 3, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> seaMap = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x................................................x", "x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x", "x.x............................................x.x", "x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x", "x.x.x........................................x.x.x", "x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x", "x.x.x.x....................................x.x.x.x", "x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x.x", "x.x.x.x.x................................x.x.x.x.x", "x.x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x.x.x", "x.x.x.x.x.x............................x.x.x.x.x.x", "x.x.x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x.x.x.x", "x.x.x.x.x.x.x........................x.x.x.x.x.x.x", "x.x.x.x.x.x.x.xxxxxxxxxxxxxxxxxxxxxx.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x....................x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.xxxxxxxxxxxxxxxxxx.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x................x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.xxxxxxxxxxxxxx.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x............x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.xxxxxxxxxx.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x........x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.xxxxxx.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x....x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.xx.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.xx.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x....x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.xxxxxx.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x........x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.xxxxxxxxxx.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x............x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.xxxxxxxxxxxxxx.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x................x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.xxxxxxxxxxxxxxxxxx.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x....................x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.xxxxxxxxxxxxxxxxxxxxxx.x.x.x.x.x.x.x", "x.x.x.x.x.x.x........................x.x.x.x.x.x.x", "x.x.x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x.x.x.x", "x.x.x.x.x.x............................x.x.x.x.x.x", "x.x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x.x.x", "x.x.x.x.x................................x.x.x.x.x", "x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x.x", "x.x.x.x....................................x.x.x.x", "x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x", "x.x.x........................................x.x.x", "x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x", "x.x............................................x.x", "x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x", "x................................................x", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> seaMap = {"xxx.x...xxxxx", "xxxx....x...x", "........x.x.x", "..xxxxx.x...x", "..x...x.xxx.x", "..x.x.x...x..", "..x...x...xxx", "...xxxxxx....", "x............"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 1};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> seaMap = {".xxxxxxxxxxxxx.", ".x...........x.", ".x.xxxxxxxxx.x.", ".x.xxxxxxxxx.x.", ".x.xxxxxxxxx.x.", ".x.xxxxxxxxx.x.", ".x.xxxxxxxxx.x.", ".x.xxxxxxxxx.x.", ".x.xxxxxxxxx.x.", ".x.xxxxxxxxx.x.", ".x.xxxxxxxxx.x.", ".x.xxxxxxxxx.x.", ".x.xxxxxxxxx.x.", ".x.xxxxxxxxx.x.", ".x.xxxxxxxxx.x.", ".x...........x.", ".xxxxxxxxxxxxx."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> seaMap = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.", "x...............................................x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............................................x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............................................x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............................................x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............................................x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............................................x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............................................x.", "x.x.x.x.x.x.x.x.xxxx..x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............x...x...........................x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............x...x...........................x.", "x.x.x.x.x.x.x.x.xxxxx.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............................................x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............................................x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............................................x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............................................x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............................................x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............................................x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............................................x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............................................x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............................................x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............................................x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............................................x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............................................x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............................................x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...............................................x.", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x..............................................x..", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x", ".................................................."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {521, 1, 1};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> seaMap = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.", "x................................................x", "x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx..x", "x.x............................................x.x", "x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx..x.x", "x.x.x........................................x.x.x", "x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x", "x.x.x.x....................................x.x.x.x", "x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx..x.x.x.x", "x.x.x.x.x................................x.x.x.x.x", "x.x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxx..x.x.x.x.x", "x.x.x.x.x.x............................x.x.x.x.x.x", "x.x.x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x.x.x.x", "x.x.x.x.x.x.x........................x.x.x.x.x.x.x", "x.x.x.x.x.x.x.xxxxxxxxxxxxxxxxxxxxxx...x.x.x.x.x.x", "x.x.x.x.x.x.x.x....................x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.xxxxxxxxxxxxxxxxx..x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x................x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.xxxxxxxxxxxxx..x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x............x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x..xxxxxxx...x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x........x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.xxxxxx.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x....x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.xx.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.xx.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x....x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.xxxxxx.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x........x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.xxxxxxxxxx.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x............x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.xxxxxxxxxxxxxx.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x................x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.xxxxxxxxxxxxxxxxxx.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x....................x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.xxxxxxxxxxxxxxxxxxxxxx.x.x.x.x.x.x.x", "x.x.x.x.x.x.x........................x.x.x.x.x.x.x", "x.x.x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x.x.x.x", "x.x.x.x.x.x............................x.x.x.x.x.x", "x.x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x.x.x", "x.x.x.x.x................................x.x.x.x.x", "x.x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x.x", "x.x.x.x....................................x.x.x.x", "x.x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x.x", "x.x.x........................................x.x.x", "x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x", "x.x............................................x.x", "x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x", "x................................................x", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> seaMap = {"."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> seaMap = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x................................................x", "x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x", "x.x............................................x.x", "x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx...x.x..x.x", "x.x..x.................................x.......x.x", "x.x..x.x.xxxxxxxxxxxxxxxxxxxxxxxxxxxx..xxxxxxx.x.x", "x.x..x.x............................x........x.x.x", "x.x..x.x............................x........x.x.x", "x.x..x.x..xxxxxxxxxxxxxxxxxxxxx..x..x........x.x.x", "x.x..x.x..x...................x..x..x........x.x.x", "x.x..x.x..x..xxxxxxxxx.....x..x.....x........x.x.x", "x.x..x.x..x..x...........x....x.....x........x.x.x", "x.x..x.x..x..x..xxx..x...x....x.....x........x.x.x", "x.x..x.x..x..x.......x........x.....x........x.x.x", "x.x..x.x..x..xxxxxxxxx....x...x.....x........x.x.x", "x.x..x.x..x...................x.....x........x.x.x", "x.x..x.x..xxxxxxxxxxxxxxxxxxxxx..x..x........x.x.x", "x.x..x.x............................x........x.x.x", "x.x..x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx........x.x.x", "x.x..x.......................................x.x.x", "x.x..xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x.x", "x.x............................................x.x", "x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x", "x................................................x", "x............................................xxxx.", "x.........x.................................x.....", "x..........x...............................x......", "x...........x.............................x.......", "x........................................x........", "x............x..........................x.........", "x.............x.......................xx..........", "x....................................x............", "x..............xxxxxx...............x.............", "x...........x......................x..............", "x............xxxx..................x..............", "x..................................x..............", "x................xx................x..............", "x..................................x..............", "x..................................x..............", "x...................................xx............", "x.....................................x...........", "x......................................x..........", "x.......................................x.........", "x........................................x........", "x.........................................x.......", "x..........................................x......", "x..........................................x......", "x..........................................x......", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx......."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {15, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> seaMap = {"xxxxx", "x...x", "x.x.x", "x...x", "x...x", "x...x", "x...x", "x.x.x", "x...x", "xxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> seaMap = {"xxx.x...xxxxxxxxxxxxxxxxx.x...xxxxxxxxxxxxxx....x", "xxxx....x............xxxxx....x............x....x", "........x.xxxxxxx....x........x.xxxxxxx....x....x", "..xxxxx.x...x...xx...x..xxxxx.x...x...xx...x....x", "..x...x.xxx.x.x.xxx..x..x...x.xxx.x.x.xxx..x....x", "..x.x.x...x.x...x....x..x.x.x...x.x...x....x....x", "..x...x...x.xxxxx....x..x...x...x.xxxxx....x....x", "...xxxxxx................xxxxxx...........x.....x", "...............................xxxxxxxxxxx.......", ".................................................", "x............xxxxxxxxxx.................xxxxxxxxx", "x............x.......xx.................x.......x", "xxxx.........x.xxxxx.xxxxx..............x.xxxxx.x", ".............x.x...x.x..................x.x...x.x", "............x..x.x.x.x.................x..x.x.x..", "............x..x...x.x.................x..x...x.x", ".............x.xxxxx.x..................x.xxxxx.x", "..............x......x...................x......x", "..............xxxxxxxx...................xxxxxxxx", ".................................................", "xxx.x...xxxxxxxxxxxxxxxxx.x...xxxxxxxxxxxxxx....x", "xxxx....x............xxxxx....x............x....x", "........x.xx.xxx.....x........x.xxxxxxx....x....x", "..xxxxx.x...x...xx...x..xxxxx.x...x...xx...x....x", "..x...x.xxx.x.x.xxx..x..x...x.xxx.x.x.xxx..x....x", "..x.x.x...x.x...x....x..x.x.x...x.x...x....x....x", "..x...x...x..xxx.....x..x...x...x.xxxxx....x....x", "...xxxxxx................xxxxxx...........x.....x", "...............................xxxxxxxxxxx.......", ".................................................", "x............xxxxxxxxxx.................xxxxxxxxx", "x............x.......xx.................x.......x", "xxxx.........x.xxxxx.xxxxx..............x.xxxxx.x", ".............x.x...x.x..................x.x...x.x", "............x..x.x.x.x.................x..x.x.x..", "............x..x...x.x.................x..x...x.x", ".............x.xxxxx.x..................x.xxxxx.x", "..............x......x...................x......x", "..............xxx.xxxx...................xxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20, 12};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> seaMap = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x................................................x", "x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x", "x.x............................................x.x", "x.x.xxxxxxx.x.x.x.x.x.x.x.x.x.xxxxxxxxxxxxxxxxxx.x", "x.x.x.....x...................x................x.x", "x.x.x.x.xxx.x.x.x.x.x.x.x.x.x.x.xxxxxxxxxxxxx.xx.x", "x.x.x.....x...................x.x...........x..x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.xxxxxxxxx.x.xx.x", "x.x.x.....x...................x.x.x.......x.x..x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.xxxxx.x.x.xx.x", "x.x.x.....x...................x.x.x.x...x.x.x..x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x..x.x", "x.x.x.....x...................x.x.x.x...x.x.x..x.x", "x.x.xxxxxxx.x.x.x.x.x.x.x.x.x.x.x.x.xxxxx.x.x.xx.x", "x.x...........................x.x.x.......x.x..x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.xxxxxxxxx.x.xx.x", "x.x...........................x.x...........x..x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.xxxxxxxxxxxxx.xx.x", "x.x...........................x................x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.xxxxxxxxxxxxxxxxxx.x", "x.x............................................x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.xx.x", "x.x............................................x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.xx.x", "x.x............................................x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.xx.x", "x.x............................................x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.xx.x", "x.x............................................x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.xx.x", "x.x............................................x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.xx.x", "x.x............................................x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.xx.x", "x.x............................................x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.xx.x", "x.x............................................x.x", "x.xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.x", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x..x", "x............................................x...x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x..x", "x................................................x", "x.....x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x..x", "xxxxx..x.x....................................xxxx", "x...x......x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x...x", "x.x.x.x.x....................................x.x.x", "x...x........................................x...x", ".xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {351, 2, 1, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> seaMap = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", ".................................................x", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x.................................................", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", ".................................................x", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x.................................................", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", ".................................................x", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x.................................................", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", ".................................................x", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x.................................................", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", ".................................................x", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x.................................................", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", ".................................................x", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x.................................................", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", ".................................................x", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x.................................................", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", ".................................................x", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x.................................................", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", ".................................................x", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x.................................................", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", ".................................................x", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x.................................................", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", ".................................................x", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x.................................................", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "............x....................................x", "xxxxxxxxxxxxxxxxxxxxx.........xxxxxxxxxxxxxxxxxxxx", "x.....................x.x.x..............x........", "xxxxxxxxxxxxxxxxxxxxx.....................x.......", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> seaMap = {"........x", "..xxxxx..", "..x...x..", "..x.x.x..", "..x...x..", "..xxxxx.."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> seaMap = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> seaMap = {"xxxxx.x.x.x.x.x.x.x.x.x.x", "x...x....................", "x.x.x.x.x.x.x.x.x.x.x.x.x", "x...x....................", "xxxxx.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {317, 1};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> seaMap = {"x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x", ".........................", "x.x.x.x.x.x.x.x.x.x.x.x.x"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {325};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> seaMap = {"xxx.x...xxxxx", "xxxx....x...x", "........x.x.x", "..xxxxx.x...x", "..x...x.xxx.x", "..x.x.x...x..", "..x...x...xxx", "...xxxxxx....", "x............", "..xxxxxxxxx..", "..x.......x..", "..x.xxxxx.x..", "..x.x...x.x..", "..x.x.x.x.x..", "..x.x...x.x..", "..x.xxxxx.x..", "..x.......x..", "..x..xxx..x..", "..x.......x..", "..xxxxxxxxx..", "...x.......x.", "....x...x..x.", ".....x.....x.", "......xxxxx..", "............."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8, 2, 1};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> seaMap = {".............................................", ".......xxxx..................................", "..xxx.x...x........xxxxxxxxxxxxxxxxxxxxxx....", "..x..x..x.x.....xxxxx.......x.......x........", "..x.x.x...x...xxxxxxxxxxxxxxxxxxxxxxxxxxxxx..", "..xx...xxx...................................", ".............................................", ".......xxxx..................................", "..xxx.x...x..................................", "..x..x..x.x.........x.x.x.x.x.x.x.x.x.x.x.x..", "..x.x.x...x..........x.x.x.x.x.x.x.x.x.x.x...", "..xx...xxx............x.x.x.x.x.x.x.x.x.x.x..", ".............................................", ".......xxxx..................................", "..xxx.x...x.......xxxxxxxxxxxxxxxxxxxx.......", "..x..x..x.x..................................", "..x.x.x...x..xxxxxxxxxxxxxxxxxxxxxxx.........", "..xx...xxx...xxx...x.x.x..xxx....xx..........", "...............xxx........x.x...xx...........", ".......xxxx......xx.......xx...xx............", "..xxx.x...x.......xx..xxxxxx..xx.............", "..x..x..x.x........xx..x..xx.xx..............", "..x.x.x...x.........xx.x.xx.xx...............", "..xx...xxx...........xx.x..xxxxxxxxxxxxxxxxx.", "......................xx..xx.......x...x...x.", ".......xxxx............xxxx........xxx..x..x.", "..xxx.x...x.............xx...........xx..x.x.", "..x..x..x.x...........................xxxxxx.", "..x.x.x...x..................................", "..xx...xxx...................................", ".............................................", ".......xxxx..................................", "..xxx.x...x..................................", "..x..x..x.x..................................", "..x.x.x...x..................................", "..xx...xxx...................................", ".............................................", ".......xxxx..................................", "..xxx.x...x..................................", "..x..x..x.x..................................", "..x.x.x...x..................................", "..xx...xxx...................................", ".............................................", ".......xxxx..................................", "..xxx.x...x..................................", "..xx...xxx..................................."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 7};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> seaMap = {"xxx.x...xxxxx........x.x.xxxx.x...xxxxx......xx", "..x...x.xxx.x..x...x...xxx..x...x.xxx.x..x...x.", "........x.x.x...x.....xxxxxx.......xxxxxx.....x", "xxx.x...xxxxx........x.x.xxxx.x...xxxxx......xx", "..x...x.xxx.x..x...x...xxx..x...x.xxx.x..x...x.", "........x.x.x...x.....xxxxxx.......xxxxxx.....x", "xxx.x...xxxxx........x.x.xxxx.x...xxxxx......xx", "..x...x.xxx.x..x...x...xxx..x...x.xxx.x..x...x.", "........x.x.x...x.....xxxxxx.......xxxxxx.....x", "xxx.x...xxxxx........x.x.xxxx.x...xxxxx......xx", "..x...x.xxx.x..x...x...xxx..x...x.xxx.x..x...x.", "........x.x.x...x.....xxxxxx.......xxxxxx.....x", "xxx.x...xxxxx........x.x.xxxx.x...xxxxx......xx", "..x...x.xxx.x..x...x...xxx..x...x.xxx.x..x...x.", "........x.x.x...x.....xxxxxx.......xxxxxx.....x", "xxx.x...xxxxx........x.x.xxxx.x...xxxxx......xx", "..x...x.xxx.x..x...x...xxx..x...x.xxx.x..x...x.", "........x.x.x...x.....xxxxxx.......xxxxxx.....x", "xxx.x...xxxxx........x.x.xxxx.x...xxxxx......xx", "..x...x.xxx.x..x...x...xxx..x...x.xxx.x..x...x.", "........x.x.x...x.....xxxxxx.......xxxxxx.....x", "xxx.x...xxxxx........x.x.xxxx.x...xxxxx......xx", "..x...x.xxx.x..x...x...xxx..x...x.xxx.x..x...x.", "........x.x.x...x.....xxxxxx.......xxxxxx.....x", "xxx.x...xxxxx........x.x.xxxx.x...xxxxx......xx", "..x...x.xxx.x..x...x...xxx..x...x.xxx.x..x...x.", "........x.x.x...x.....xxxxxx.......xxxxxx.....x", "xxx.x...xxxxx........x.x.xxxx.x...xxxxx......xx", "..x...x.xxx.x..x...x...xxx..x...x.xxx.x..x...x.", "........x.x.x...x.....xxxxxx.......xxxxxx.....x", "xxx.x...xxxxx........x.x.xxxx.x...xxxxx......xx", "..x...x.xxx.x..x...x...xxx..x...x.xxx.x..x...x.", "........x.x.x...x.....xxxxxx.......xxxxxx.....x", "..x...x.xxx.x..x...x...xxx..x...x.xxx.x..x...x.", "........x.x.x...x.....xxxxxx.......xxxxxx.....x", "xxx.x...xxxxx........x.x.xxxx.x...xxxxx......xx", "..x...x.xxx.x..x...x...xxx..x...x.xxx.x..x...x.", "........x.x.x...x.....xxxxxx.......xxxxxx.....x", "xxx.x...xxxxx........x.x.xxxx.x...xxxxx......xx", "..x...x.xxx.x..x...x...xxx..x...x.xxx.x..x...x.", "........x.x.x...x.....xxxxxx.......xxxxxx.....x", "xxx.x...xxxxx........x.x.xxxx.x...xxxxx......xx", "..x...x.xxx.x..x...x...xxx..x...x.xxx.x..x...x.", "........x.x.x...x.....xxxxxx.......xxxxxx.....x", "..x...x.xxx.x..x...x...xxx..x...x.xxx.x..x...x.", "........x.x.x...x.....xxxxxx.......xxxxxx.....x", "xxx.x...xxxxx........x.x.xxxx.x...xxxxx......xx", "..x...x.xxx.x..x...x...xxx..x...x.xxx.x..x...x.", "........x.x.x...x.....xxxxxx.......xxxxxx.....x", "xxx.x...xxxxx........x.x.xxxx.x...xxxxx......xx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {121};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> seaMap = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.xxxxx.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x....x...x.......................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...x...x........................................x", "x.x.xxxxx.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {519, 1};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> seaMap = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.xxxxx.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...x...x........................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x...x...x........................................x", "x.x.xxxxx.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x................................................x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {521, 1, 1};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> seaMap = {"xxx.x...xxxxxxxxx", "xxxx....x.......x", "........x.xxxxx.x", "..xxxxx.x.x...x.x", "..x...x.x.x.x.x.x", "..x...x.x.x...x.x", "..x...x.x.xxxxx.x", "..x.x.x.x.......x", "..x...x.xxxxxxxx.", "...xxxx......x...", "x.............x.x"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5, 2, 1};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> seaMap = {"................", ".xxxxxxxxxxxxxx.", ".x............x.", ".x.xxxxxxxxxx.x.", ".x.x........x.x.", ".x.x.x.x.x..x.x.", ".x.x........x.x.", ".x.xxxxxxxxxx.x.", "................"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 1};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> seaMap = {"xxxxxxx.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.................................................", "x..xx...x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "x.................................................", "xxxxxxx.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".................................................."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {615};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> seaMap = {".x.x.x.x.x", "x..x.x.x.x", "..x..x.x.x", "xx..x..x.x", "...x..x..x", "xxx..x..x.", "....x..x..", "xxxx..x...", ".....x....", "xxxxx....."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> seaMap = {"x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".................................................."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {625};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> seaMap = {".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "..................................................", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".................................................."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {625};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> seaMap = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x..............................................x", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {506, 1};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> seaMap = {"............", ".......xxxx.", "..xxx.x...x.", "..x..x..x.x.", "..x.x.x...x.", "..xx...xxx.."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> seaMap = {"xxxxx", "x...x", "x.x.x", "x...x", "xxxxx", "xxxxx", "x...x", "x.x.x", "x...x", "x.x.x", "x...x", "xxxxx", "....."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {3, 1};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> seaMap = {"..................................................", "..................................................", ".....xxxxxxxxxxxxxxx..............................", ".....x.............x..............................", ".....x.............x..............................", ".....x.............x..............................", ".....x.............xxxxxxxxxxxxxxxxxxxxxxxxxxx....", ".....x.......................................x....", ".....x.xxxxxxxxxxxxxxxxxxx..xxxxxxxxxxxxxxxx.x....", ".....x.x.................x..x..............x.x....", ".....x.x.................x..x..........x.x.x.x....", ".....x.x..xxxxxxxxxxxxxx.x..x..x..x....xxx.x.x....", ".....x.x..x............x.x..x..............x.x....", ".....x.x..x..xxxxxxxxx.x.x..xxxxxxxxxxxxxxxx.x....", ".....x.x..x....xxx.....x.x...................x....", ".....x.x..x............x.x...................x....", ".....x.x..xxxxxxxxxxxxxx.x...................x....", ".....x.x.................x...................x....", ".....x.xxxxxxxxxxxxxxxxxxx...................x....", ".....x.......................................x....", ".....xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx....", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", "..................................................", ".................................................."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2, 1, 1};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> seaMap = {"x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> seaMap = {"..................................................", ".xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx..xx.xxx..", ".x....................x...........................", ".x.....................xx.......xxxxxxxxxxxxxxxxxx", ".x.......................x.......x................", ".x........................x.......xxx.............", ".x........................x..........x............", ".x....x...................xx..........x...........", ".x.........................x...........x..........", ".x.....x....................x....x.....x..........", ".x....x.xx...................x....x.....x.........", ".x...x....x..................x.....x.....x........", ".x..x......x.................x.x....x.....x.......", ".x..x...x...x.................x......x.....x......", ".x...x...xx..x.................x......x.....xx....", ".x...x.x..x..x.................x.......x......x...", ".x...x.xx..x..x.................x.............xxxx", ".x...x.xxx.....x.................x................", ".x...x.xxxx....x..................x...............", ".x...x..xxx.....x.................x..........x....", ".x...x......xxx..x................x...........x...", ".x....x...........x................x...........x..", ".x.....xxxxxxxxxxxx................x..............", ".x..................................xx.........x..", ".x...................................x.........x..", ".x...xxxxxxxxxxxxxxx..................x...........", ".x.....................................x..........", ".x.......................xxxxx..........x.........", ".x.......................................x........", ".x........................................x.......", ".x.........................................x......", ".x..........................................x.....", ".xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.xxx", "..................................................", "......xxxxxxxxxxxxxxxxxxxxxxxxxxx.................", "......x.........................x.................", "......xx.xxxxxxxxxxxxxxxxxxxxxx.x.................", "......x..x....................x.x.................", "......x..x.xxxxxxxxxxxxxxxx...x.x.................", "......x..x.xxxx..xxxxxxxxxx...x.x.................", "......x..x.xxxxxxxxxxxxxxxx..xx.x.................", ".....xx..x.xxxxxxxxxxxxxxxx...x..x................", "......x..x....................x.x.................", "......x..xxxxxxxxxxxxxxxxxxxxxx.x.................", "......x.........................x.................", "......xxxxxxxxxxxxxxxxxxxxxxxxxxx.................", "..................................................", "..................................................", "..................................................", ".................................................."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {14, 2, 2};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> seaMap = {"x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", ".............................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x", "............................................."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {575};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> seaMap = {"x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", "..................................................", "x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.x.", ".................................................."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {625};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> seaMap = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx...............xxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxx.xxxxxxxxxxx.x.xxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.xxxxxxxxxx...xxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.xxxxxxxxxx.xxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.xx......xx.xxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.xx.......x.xxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.xx...x...x.xxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.xx.......x.xxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.xxxxxxxxxx.xxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxx............xxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.xxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx.xxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> seaMap = {"x.xx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
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
    vector<string> seaMap = {"xxx.x...xxxxxxxx.x...xxxxx", "xxxx....x...xxxxx....x...x", "........x.x.x........x.x.x", "..xxxxx.x...x........x.x.x", "........x.x.x........x.x.x", "........x.x.x........x.x.x", "........x...x........x.x.x", "........xxxxx........x.x.x", "xxx.x...xxxxxxxx.x...xxxxx", "xxxx....x...xxxxx....x...x", "........x.x.x........x.x.x", "..xxxxx.x...x........x.x.x", "........x.x.x........x.x.x", "........x.x.x........x.x.x", "........x...x........x.x.x", "........xxxxx........x.x.x", "xxx.x...xxxxxxxx.x...xxxxx", "xxxx....x...xxxxx....x...x", "........x.x.x........x.x.x", "..xxxxx.x...x........x.x.x", "........x.x.x........x.x.x", "........x.x.x........x.x.x", "........x...x........x.x.x", "........xxxxx........x.x.x", "xxx.x...xxxxxxxx.x...xxxxx", "xxxx....x...xxxxx....x...x", "........x.x.x........x.x.x", "..xxxxx.x...x........x.x.x", "........x.x.x........x.x.x", "........x.x.x........x.x.x", "........x...x........x.x.x", "........xxxxx........x.x.x", "xxx.x...xxxxxxxx.x...xxxxx", "xxxx....x...xxxxx....x...x", "........x.x.x........x.x.x", "..xxxxx.x...x........x.x.x", "........x.x.x........x.x.x", "........x.x.x........x.x.x", "........x...x........x.x.x", ".....................x.x.x", "..xxxxxxxxxxxx.......x...x", "..x..........x.......xxxxx", "..x.xxxxxxxx.x............", "..x.x......x.x.......xxxx.", "..x.x.xx.x.x.x.......x..x.", "..x.x......x.x.......xxxx.", "..x.xxxxxxxx.x........x...", "..x..........x............", "..xxxxxxxxxxxx............", ".........................."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {24, 3, 1};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> seaMap = {"xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx", "xxxxxxxxx.xxxxxxxxxxxxx.xxxxxxxxxxxxxxxx.xxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> seaMap = {"xxxxx", "x...x", "x.x.x", "x...x", "xxx.."};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> seaMap = {"xxxxxxxxx", "x.xxxxx.x", "x.x...x.x", "x.x.x.x.x", "x.x...x..", "x.xxxxx.x", "xxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 1};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> seaMap = {"xxxxxxxxxxxxxxxxxxxx", "x..................x", "x.xxxxxxxxxxxxxxxx.x", "x.x..............x.x", "x.x..xxxxxxxxxx..x.x", "x.x..x........x..x.x", "x.x..x..x..x..x..x.x", "x.x..x........x..x.x", "x.x..xxxxxxxxxx..x.x", "x.x..............x.x", "x.xxxxxxxxxxxxxxxx.x", "x..................x", "xxxxxxxxxxxxxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> seaMap = {"xxxxxxxxxx", "x........x", "x.xxxxx..x", "x.x...x..x", "x.x.x.x..x", "x.x...x..x", "x.xxxxx..x", "x........x", "x..xxx...x", "x........x", "xxxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> seaMap = {"x.x...xxxx..x.xx..x..x..x...x.....x..x..x......x.x", "..x...x..x.x..x....x..x..x..x.x.x..x..x..x..x..x..", "xx..x.x..x..x.x.x..xx..x..x..x....xxx.xx.xx..x..xx", "...x.x.x.x....x.....x...x..x..x..x...x..x..x...x.x", "..x..x.x.x.x..xx..x..xx..x..xx.xx..x..x...x.x..xx.", ".xx....x.xx..x..x.....xx..x..........x.x.x...x..xx", "x....xx...xx..x.xx..x..xx..xxxxxxxxxx......x..x...", "....x......xx.....x.....x..............x.xx.x..x.x", "xxxx..x.x...xx....xxxxxx..............x..x...x..x.", ".........x...x.xxxx.....xxxxxxxxxx..xx...x.x.x.x..", "..xxx..x......x......xx...........x..xxxxx.....x..", ".xxx.x....xxxx..xxx..xx.......xxx..x.....xxx.xxx..", ".x...x.xxxx....xx.xxx.xxxx...x...x.x..............", ".x.x.x.x....x..x..........xxx..x.x..xxxxxxx..x..xx", ".x...x.x.x....xx..xxxxxx.....x...x.........x..xx..", ".xxxx..x.xxxx.x...x....xxxx...xxx..xxxxxxx.x..x...", "..x.x..x.x...xx...x.xx.....xx....xx......x.x...x.x", ".x...x.x.x.x.xx..xx.xxxxxx..x......x..x..x.x.x.x..", ".x.x.x.x.x...xx.xx..x.....x..xxxxx..x....x.x...x.x", ".x...x.x.xxxx.x.x..x..xxx..x.....xx.x..x.x.x...xx.", ".xxxx..x.x...x..x.x..x...x.xxxx...x..x...x..x..x..", "x......x.x.x.x..x.x..x.x.x.x...x..xx.xxxxxx..x.x..", "x.xxxx.x.xx.xx.x..x..x...x.x.x.x...x...x...x.x.xxx", "x....x.x.x..x...x.x...xxx..x...x.x.x.xxx.x.x.x.x..", ".xxx.x.x.x.xx...x..x......x.xxx....x...x...x.x.x..", ".x...x.x.x.x...x..x.xxxxxx...x...xx..x..xxx..x.x.x", ".x.x.x.x.xxx...x.x.......x.x.x..xx..x.x.x...x..x..", ".x...x.x.x.x.x.x.x.x.xxx.x...x.x..x..x..x.xx...x.x", ".xxxxx.x.xxx...x.x...x..x..xx..x...x....x.x....x..", ".......x.x.x...x..xxx....xx...x.....x.x.x.x...x.xx", "...x...x.xx.x..x.............x...x..x...x.x..x..x.", ".x.....x.x..x.x.xxxxxxxxxxxxx...x.x.x...x.x.x..x..", ".xx..x.x....x.x................x.x..x.x.x.x..xx..x", "........x...x..xx..................x....x.x..x..x.", ".......x.x..x....xxxxxxxxxxxxxxxxxx...xxx.x..x.x.x", "xx.xx..x.xx..x.............x...x....xx..x.x..x..x.", "..x.xx.xx..x..xxxxxxx....x.x.x.xxx.x....x.x...x..x", "..x.x....xx.x......xxxxxxx.x...x.xx..x.xx.x....x..", "....x......x.xxx...x....x.x....xx.x....xx.x.xx..x.", ".x...x.x....x.x.x..xxxxxxxxxxxxxxxxxxxxxx.x..xx..x", ".x...x...x...x...x........................xx......", ".xx..xx..x...x.x..xxxxxxxxxxxxxxxxxxxxxxxx..xx...x", ".....x.......x...x...........x.x......x....x..xx..", "....xx...x.x..xxxx.xx.x...xxx..x...x..x.x..x....xx", "xxxx...x.........x.xx...xxx.x...x.....x.x..x..x...", ".....x.....x..x..x......x....x...xxxxx..x..x.x.x..", "......x.x....x.xx.xxxxxxx....x.........xxx....x...", "xx.x.....x..x..x.......x..x...x.......x...xx.x..xx", "..x..x.......x..x.xxx..x....x..x.....x..x..x...x..", "x.x...x.x....xxx.xx....x.x.x....x...x......x...x.x"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {75, 2, 1, 1, 1};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> seaMap = {".xxxxxxxx", "x.......x", "x.xxxx..x", "x.x...x.x", "x.x.x.x.x", "x.x...x.x", "x.xxxxx.x", "x.......x", "x.xxxx..x", "x.......x", "xxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 1, 1};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> seaMap = {"xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x...x........................................xx...", "x.x.x.xxx.x.x.x..xx.x.x.x..xx.x.x.x..xx.x.x.x..xx.", "x...xx......x...................x............xx...", "xxxxxx.x.x..xx.x.x.x..xx.x.x.x..xx.x.x.x..xx.xxx..", "xxxxxxxxxxxxxxxxxxxxx.xxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x...xx.x.x..xx.x.x.x..xx.x.x.x..xx.x.x.x..xx.xxx..", "x.x.xx.x.x..xx.x.x.x..xx.x.x.x..xx.x.x.x..xx.xxx..", "x...xx.x.x..xx.x.x.xxxxx.x.x.x..xx.x.x.x..xx.xxx..", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx...xxxxxxxxxxxxxx", "x...x..........................x.............xx...", "x...x............xxxxx.........xxxxx.........xx...", "x...x............xxxxx.....xxxxx.............xx...", "x...x............xxxxxxxxxx....xxxxx.........xx...", "x...x............xxxxx.......................xx...", "..x...x..........xxxxx.........................xx.", "..x...x..........xxxxx.........................xx.", "..x...x........................................xx.", "..x...x..................xxxxx.................xx.", "..xxxxx........................................xx.", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x...x........................................xx...", "x.x.x..xx.x.x.x..xx.x.x.x..xx.x.x.x..xx.x.x.x..xx.", "x...x........................................xx...", "xxxxxx.x.x..xx.x.x.x..xx.x.x.x..xx.x.x.x..xx.xxx..", "xxxxxxxxxxxxxxxxxxxxx.xxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x...xx.x.x..xx.x.x.x..xx.x.x.x..xx.x.x.x..xx.xxx..", "x.x.xx.x.x..xx.x.x.x..xx.x.x.x..xx.x.x.x..xx.xxx..", "x...xx.x.x..xx.x.x.x..xx.x.x.x..xx.x.x.x..xx.xxx..", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx...xxxxxxxxxxxxxx", "x...x.........................x..............xx...", "x...x.......xxxxx.............x..............xx...", "x...x.........................x..............xx...", "x...x.........................x..............xx...", "x...x..........xxxxx..........xxxx...........xx...", "..x...xxx......x...x...........................xx.", "..x...x.........x..x...........................xx.", "..x...x.........x..x............xxx............xx.", "..x...x.........x..x...........................xx.", "..xxxxx........................................xx.", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x...x........................................xx...", "x.x.x..xx.x.x.x..xx.x.x.x..xx.x.x.x..xx.x.x.x..xx.", "x...x........................................xx...", "xxxxxx.x.x..xx.x.x.x..xx.x.x.x..xx.x.x.x..xx.xxx..", "xxxxxxxxxxxxxxxxxxxxx.xxxxxxxxxxxxxxxxxxxxxxxxxxxx", "x...xx.x.x..xx.x.x.x..xx.x.x.x..xx.x.x.x..xx.xxx..", "x.x.xx.x.x..xx.x.x.x..xx.x.x.x..xx.x.x.x..xx.xxx..", "x...xx.x.x..xx.x.x.x..xx.x.x.x..xx.x.x.x..xx.xxx..", "xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx...xxxxxxxxxxxxxx"};
    LandAndSea* pObj = new LandAndSea();
    clock_t start = clock();
    vector<int> result = pObj->howManyIslands(seaMap);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {52, 1};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=13351270&rd=10665&pm=7512
********************************************************************************
#include <iostream> 
#include <sstream> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <memory> 
#include <cctype> 
#include <string> 
#include <vector> 
#include <list> 
#include <queue> 
#include <deque> 
#include <stack> 
#include <map> 
#include <set> 
#include <algorithm> 
using namespace std; 
 
typedef long long Int; 
typedef pair<int,int> PII; 
typedef vector<int> VInt; 
 
#define FOR(i, a, b) for(i = a; i < b; i++) 
#define RFOR(i, a, b) for(i = a - 1; i >= b; i--) 
#define CLEAR(a, b) memset(a, b, sizeof(a)) 
#define COPY(a, b) memcpy(a, b, sizeof(a)) 
#define SIZE(a) int((a).size())  
#define ALL(a) (a).begin(),(a).end()  
#define FOREACH(i, a) for(i = (a).begin(); i != (a).end(); i++)  
#define PB push_back 
#define MP make_pair 
 
vector<string> A; 
int B[64][64]; 
int N, M; 
 
int DX[] = {1, -1, 0, 0, 1, 1, -1, -1}; 
int DY[] = {0, 0, 1, -1, 1, -1, 1, -1}; 
 
void dfs(int x, int y, queue<PII>& Q) 
{ 
  B[x][y] = 1; 
  int i; 
  int finish = A[x][y] == '.' ? 4 : 8; 
  FOR(i, 0, finish) 
  { 
    int xx = x + DX[i]; 
    int yy = y + DY[i]; 
 
    if(xx < 0 || xx >= N || yy < 0 || yy >= M || B[xx][yy]) 
      continue; 
 
    if(A[x][y] == A[xx][yy]) 
      dfs(xx, yy, Q); 
    else 
      Q.push(PII(xx, yy)); 
  } 
} 
 
class LandAndSea { 
  VInt Res; 
 
  int F(int x, int y) 
  { 
    queue<PII> Q; 
    dfs(x, y, Q); 
 
    int res = -1; 
    while(!Q.empty()) 
    { 
      int xx = Q.front().first; 
      int yy = Q.front().second; 
      Q.pop(); 
      if(B[xx][yy] == 0) 
        res = max(res, F(xx, yy)); 
    } 
 
    if(A[x][y] != '.') 
    { 
      res++; 
      while(SIZE(Res) <= res) 
        Res.PB(0); 
 
      Res[res]++; 
    } 
 
    return res; 
  } 
 
  public: 
  vector <int> howManyIslands(vector <string> seaMap) { 
    N = SIZE(seaMap); 
    M = SIZE(seaMap[0]); 
    int i; 
    FOR(i, 0, N) 
      seaMap[i] = "." + seaMap[i] + "."; 
 
    seaMap.insert(seaMap.begin(), string(M + 2, '.')); 
    seaMap.PB(string(M + 2, '.')); 
 
    N += 2; 
    M += 2; 
 
    Res.clear(); 
    A = seaMap; 
    CLEAR(B, 0); 
    F(0, 0); 
 
    return Res; 
  } 
 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/