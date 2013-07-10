/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4828
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

class AirlinerSeats {
public:
    vector<string> mostAisleSeats(int width, int seats);
};

vector<string> AirlinerSeats::mostAisleSeats(int width, int seats) {
    vector<string> ret;
    return ret;
}


int test0() {
    int width = 6;
    int seats = 3;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..SS.S"};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int width = 6;
    int seats = 4;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.S"};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int width = 12;
    int seats = 10;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SSSSSSS"};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int width = 2;
    int seats = 1;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".S"};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int width = 11;
    int seats = 7;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int width = 11;
    int seats = 8;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SSS"};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int width = 5;
    int seats = 3;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".SS.S"};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int width = 5;
    int seats = 4;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SSS"};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int width = 6;
    int seats = 5;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SSSS"};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int width = 6;
    int seats = 6;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SSSSSS"};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int width = 7;
    int seats = 3;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...SS.S"};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int width = 7;
    int seats = 4;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".S.SS.S"};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int width = 7;
    int seats = 5;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS"};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int width = 7;
    int seats = 6;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SSSSS"};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int width = 8;
    int seats = 5;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int width = 8;
    int seats = 6;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SSS"};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int width = 8;
    int seats = 7;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SSSSSS"};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int width = 8;
    int seats = 0;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"........"};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int width = 52;
    int seats = 52;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SS"};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int width = 111;
    int seats = 77;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int width = 100000;
    int seats = 66666;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int width = 100000;
    int seats = 0;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", ".................................................."};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int width = 1;
    int seats = 0;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"."};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int width = 1;
    int seats = 1;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S"};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int width = 40;
    int seats = 10;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".........................S.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int width = 40;
    int seats = 11;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"........................SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int width = 41;
    int seats = 26;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int width = 41;
    int seats = 27;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int width = 41;
    int seats = 28;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SSS"};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int width = 41;
    int seats = 29;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SSSSSS"};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int width = 42;
    int seats = 25;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".....SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int width = 42;
    int seats = 26;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int width = 42;
    int seats = 27;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int width = 42;
    int seats = 28;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int width = 42;
    int seats = 29;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SSSS"};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int width = 43;
    int seats = 26;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"....S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int width = 43;
    int seats = 27;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int width = 43;
    int seats = 28;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int width = 43;
    int seats = 29;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS"};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int width = 47;
    int seats = 47;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int width = 50;
    int seats = 33;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int width = 50;
    int seats = 34;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SSS"};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int width = 50;
    int seats = 49;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int width = 50;
    int seats = 50;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int width = 64;
    int seats = 41;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS", ".SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int width = 64;
    int seats = 42;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS", ".SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int width = 64;
    int seats = 43;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SS.SS.SS.SS.SS"};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int width = 64;
    int seats = 44;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SS.SS.SS.SSSSS"};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int width = 64;
    int seats = 45;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SS.SS.SSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int width = 64;
    int seats = 46;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SS.SSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int width = 65;
    int seats = 41;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"....SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S", "S.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int width = 65;
    int seats = 42;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S", "S.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int width = 65;
    int seats = 43;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S", "S.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int width = 65;
    int seats = 44;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SS.SS.SS.SS.SSS"};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int width = 65;
    int seats = 45;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SS.SS.SS.SSSSSS"};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int width = 65;
    int seats = 46;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SS.SS.SSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int width = 66;
    int seats = 41;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".....SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int width = 66;
    int seats = 42;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int width = 66;
    int seats = 43;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int width = 66;
    int seats = 44;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int width = 66;
    int seats = 45;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SS.SS.SS.SS.SSSS"};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int width = 66;
    int seats = 46;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SS.SS.SS.SSSSSSS"};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int width = 100;
    int seats = 66;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int width = 100;
    int seats = 67;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS"};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int width = 100;
    int seats = 68;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SSSSS"};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int width = 101;
    int seats = 66;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int width = 101;
    int seats = 67;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int width = 101;
    int seats = 68;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SSS"};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int width = 14;
    int seats = 12;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int width = 21;
    int seats = 15;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SSSS"};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int width = 37;
    int seats = 25;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS"};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int width = 28;
    int seats = 23;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SSSSSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int width = 3;
    int seats = 1;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..S"};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int width = 4;
    int seats = 0;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...."};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int width = 13;
    int seats = 10;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SSSSS"};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int width = 28;
    int seats = 1;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...........................S"};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int width = 11;
    int seats = 7;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int width = 9;
    int seats = 8;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SSSSSSS"};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int width = 89;
    int seats = 69;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SS.SS.SS.SSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int width = 92;
    int seats = 6;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", ".................................S.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int width = 72;
    int seats = 13;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", "...SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int width = 71;
    int seats = 29;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"............................SS.SS.SS.SS.SS.SS.SS.S", "S.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int width = 53;
    int seats = 15;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...............................SS.SS.SS.SS.SS.SS.S", "S.S"};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int width = 60;
    int seats = 16;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"....................................S.SS.SS.SS.SS.", "SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int width = 51;
    int seats = 0;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", "."};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int width = 54;
    int seats = 4;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"................................................S.", "SS.S"};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int width = 95;
    int seats = 12;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", "...........................S.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int width = 85;
    int seats = 53;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"......SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int width = 93727;
    int seats = 62488;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int width = 69295;
    int seats = 69281;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int width = 24307;
    int seats = 18343;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int width = 37298;
    int seats = 1324;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int width = 31330;
    int seats = 1;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", ".................................................S"};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int width = 85737;
    int seats = 0;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", ".................................................."};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int width = 5201;
    int seats = 2;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", "...............................................S.S"};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int width = 81560;
    int seats = 3;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", "..............................................SS.S"};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int width = 62170;
    int seats = 62169;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int width = 62170;
    int seats = 62168;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int width = 88159;
    int seats = 26509;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int width = 98586;
    int seats = 4892;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int width = 88855;
    int seats = 17330;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int width = 83079;
    int seats = 64803;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int width = 22944;
    int seats = 18585;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int width = 95494;
    int seats = 63662;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int width = 95494;
    int seats = 63678;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SS.SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int width = 2;
    int seats = 2;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SS"};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int width = 200;
    int seats = 2;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", "...............................................S.S"};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int width = 99999;
    int seats = 49999;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int width = 100000;
    int seats = 75000;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int width = 100000;
    int seats = 50;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int width = 10000;
    int seats = 202;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int width = 100000;
    int seats = 66667;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS"};
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int width = 14;
    int seats = 12;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int width = 50;
    int seats = 50;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int width = 100000;
    int seats = 66666;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int width = 99998;
    int seats = 99996;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int width = 10;
    int seats = 7;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS"};
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int width = 100000;
    int seats = 50000;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int width = 100000;
    int seats = 99999;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int width = 100000;
    int seats = 0;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", ".................................................."};
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int width = 12345;
    int seats = 234;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int width = 99999;
    int seats = 66667;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SSSS"};
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int width = 100000;
    int seats = 99997;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int width = 100000;
    int seats = 95000;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int width = 100000;
    int seats = 100000;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS", "SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int width = 100000;
    int seats = 20000;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int width = 99999;
    int seats = 10;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", "...................................S.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int width = 10001;
    int seats = 6669;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SSSSSS"};
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int width = 2;
    int seats = 0;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".."};
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int width = 100000;
    int seats = 33329;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int width = 60;
    int seats = 1;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", ".........S"};
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int width = 147;
    int seats = 2;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", "...............................................S.S"};
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int width = 86105;
    int seats = 17443;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int width = 98345;
    int seats = 1345;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int width = 7;
    int seats = 5;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS"};
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int width = 6;
    int seats = 3;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..SS.S"};
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int width = 50;
    int seats = 0;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".................................................."};
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int width = 4;
    int seats = 3;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS"};
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int width = 111;
    int seats = 81;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SSSSSSSSSSSSSSSSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int width = 50;
    int seats = 25;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".............SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int width = 1;
    int seats = 0;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"."};
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int width = 100000;
    int seats = 4;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", "............................................S.SS.S"};
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int width = 10000;
    int seats = 6669;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SSSSSSSS"};
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int width = 990;
    int seats = 1;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", ".................................................S"};
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int width = 9;
    int seats = 7;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SSSS"};
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int width = 2;
    int seats = 2;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"SS"};
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int width = 11;
    int seats = 8;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SSS"};
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int width = 10;
    int seats = 1;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".........S"};
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int width = 13;
    int seats = 7;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"...SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int width = 10000;
    int seats = 6667;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.", "SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS"};
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int width = 6;
    int seats = 5;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"S.SSSS"};
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int width = 91729;
    int seats = 33748;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {"..................................................", ".SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.SS.S"};
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int width = 4;
    int seats = 2;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".S.S"};
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int width = 5;
    int seats = 3;
    AirlinerSeats* pObj = new AirlinerSeats();
    clock_t start = clock();
    vector<string> result = pObj->mostAisleSeats(width, seats);
    clock_t end = clock();
    delete pObj;
    vector<string> expected = {".SS.S"};
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8347440&rd=8074&pm=4828
********************************************************************************
#include <string>
#include <vector>
#include <algorithm>
 
using namespace std;
 
vector<string> f(const string & s)
{
  int n = s.size();
  vector<string> result;
  
  if (n <= 50) 
  {
    result.push_back(s);
    return result;
  }
 
  result.push_back(s.substr(0, 50));
 
  if (n <= 100) 
  {
    result.push_back(s.substr(50));
    return result;
  }
 
  result.push_back(s.substr(n - 50));
  
  return result;
}
 
 
class AirlinerSeats 
{
public:
  vector <string> mostAisleSeats(int width, int seats) 
  {
    int num = width - seats;
    string s;
    for (int i = 0; i < width; i++)
    {
      s.push_back('S');
    }
 
    if (2 * num <= seats)
    {
      for (int j = 0; j < num; j++)
      {
        s[3 * j + 1] = '.';
        
      }
      return f(s);
    }
 
    for (int j = s.size() - 2; j >= 0; j-=3)
    {
      s[j] = '.';
    }
 
    int count = 0;
    for (int j = s.size() - 1; j >= 0; j--)
    {
      if (count == seats) 
      {
        s[j] = '.';
      }
      else
      {
        if(s[j] == 'S')
          count++;
      }
    }
 
    return f(s);
 
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/