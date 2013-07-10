/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2403
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

class BoxLoader {
public:
    int mostItems(int boxX, int boxY, int boxZ, int itemX, int itemY, int itemZ);
};

int BoxLoader::mostItems(int boxX, int boxY, int boxZ, int itemX, int itemY, int itemZ) {
    int ret;
    return ret;
}


int test0() {
    int boxX = 100;
    int boxY = 98;
    int boxZ = 81;
    int itemX = 3;
    int itemY = 5;
    int itemZ = 7;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 7560;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int boxX = 10;
    int boxY = 10;
    int boxZ = 10;
    int itemX = 9;
    int itemY = 9;
    int itemZ = 11;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int boxX = 201;
    int boxY = 101;
    int boxZ = 301;
    int itemX = 100;
    int itemY = 30;
    int itemZ = 20;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int boxX = 913;
    int boxY = 687;
    int boxZ = 783;
    int itemX = 109;
    int itemY = 93;
    int itemZ = 53;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 833;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int boxX = 6;
    int boxY = 5;
    int boxZ = 4;
    int itemX = 3;
    int itemY = 2;
    int itemZ = 1;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int boxX = 115;
    int boxY = 113;
    int boxZ = 114;
    int itemX = 3;
    int itemY = 5;
    int itemZ = 7;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 13984;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int boxX = 115;
    int boxY = 113;
    int boxZ = 114;
    int itemX = 3;
    int itemY = 7;
    int itemZ = 5;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 13984;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int boxX = 115;
    int boxY = 113;
    int boxZ = 114;
    int itemX = 5;
    int itemY = 3;
    int itemZ = 7;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 13984;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int boxX = 115;
    int boxY = 113;
    int boxZ = 114;
    int itemX = 5;
    int itemY = 7;
    int itemZ = 3;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 13984;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int boxX = 115;
    int boxY = 113;
    int boxZ = 114;
    int itemX = 7;
    int itemY = 3;
    int itemZ = 5;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 13984;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int boxX = 115;
    int boxY = 113;
    int boxZ = 114;
    int itemX = 7;
    int itemY = 5;
    int itemZ = 3;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 13984;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int boxX = 4;
    int boxY = 3;
    int boxZ = 2;
    int itemX = 2;
    int itemY = 2;
    int itemZ = 2;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int boxX = 1000;
    int boxY = 1000;
    int boxZ = 1000;
    int itemX = 1000;
    int itemY = 1000;
    int itemZ = 1000;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
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
    int boxX = 1;
    int boxY = 1;
    int boxZ = 1;
    int itemX = 1;
    int itemY = 1;
    int itemZ = 1;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int boxX = 2;
    int boxY = 3;
    int boxZ = 4;
    int itemX = 1;
    int itemY = 1;
    int itemZ = 1;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int boxX = 42;
    int boxY = 47;
    int boxZ = 49;
    int itemX = 2;
    int itemY = 3;
    int itemZ = 4;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 3864;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int boxX = 19;
    int boxY = 15;
    int boxZ = 17;
    int itemX = 9;
    int itemY = 8;
    int itemZ = 10;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int boxX = 901;
    int boxY = 900;
    int boxZ = 902;
    int itemX = 451;
    int itemY = 452;
    int itemZ = 453;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int boxX = 101;
    int boxY = 77;
    int boxZ = 43;
    int itemX = 11;
    int itemY = 10;
    int itemZ = 7;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 420;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int boxX = 999;
    int boxY = 888;
    int boxZ = 777;
    int itemX = 888;
    int itemY = 888;
    int itemZ = 888;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int boxX = 999;
    int boxY = 989;
    int boxZ = 987;
    int itemX = 11;
    int itemY = 13;
    int itemZ = 19;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 351728;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int boxX = 100;
    int boxY = 1000;
    int boxZ = 10;
    int itemX = 25;
    int itemY = 7;
    int itemZ = 19;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 208;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int boxX = 51;
    int boxY = 37;
    int boxZ = 29;
    int itemX = 27;
    int itemY = 33;
    int itemZ = 39;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int boxX = 1;
    int boxY = 1;
    int boxZ = 1;
    int itemX = 1000;
    int itemY = 999;
    int itemZ = 2;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int boxX = 788;
    int boxY = 887;
    int boxZ = 878;
    int itemX = 777;
    int itemY = 778;
    int itemZ = 877;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int boxX = 18;
    int boxY = 121;
    int boxZ = 10;
    int itemX = 11;
    int itemY = 9;
    int itemZ = 2;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 110;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int boxX = 913;
    int boxY = 687;
    int boxZ = 783;
    int itemX = 109;
    int itemY = 93;
    int itemZ = 53;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 833;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int boxX = 105;
    int boxY = 121;
    int boxZ = 169;
    int itemX = 5;
    int itemY = 13;
    int itemZ = 11;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 3003;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int boxX = 100;
    int boxY = 200;
    int boxZ = 300;
    int itemX = 200;
    int itemY = 100;
    int itemZ = 300;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int boxX = 1;
    int boxY = 100;
    int boxZ = 1;
    int itemX = 2;
    int itemY = 2;
    int itemZ = 2;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
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
    int boxX = 1;
    int boxY = 2;
    int boxZ = 3;
    int itemX = 3;
    int itemY = 2;
    int itemZ = 1;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int boxX = 4;
    int boxY = 100;
    int boxZ = 100;
    int itemX = 5;
    int itemY = 1;
    int itemZ = 1;
    BoxLoader* pObj = new BoxLoader();
    clock_t start = clock();
    int result = pObj->mostItems(boxX, boxY, boxZ, itemX, itemY, itemZ);
    clock_t end = clock();
    delete pObj;
    int expected = 8000;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=9929959&rd=4780&pm=2403
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue>
#include <cstring>
#include <map>
#include <ctype.h>
 
using namespace std;
 
vector<string> tokenize(string s, string ch) { 
  vector<string> ret; 
  for( int p = 0, p2; p < s.size(); p = p2+1 ) { 
    p2 = s.find_first_of(ch, p); 
    if( p2 == -1 ) p2 = s.size(); 
    if( p2-p > 0 ) ret.push_back( s.substr(p, p2-p) ); 
  } 
  return ret; 
} 
 
class BoxLoader {
  public:
  int fit ( int boxX, int boxY, int boxZ, int itemX, int itemY, int itemZ) {
    return ( boxX / itemX ) * ( boxY / itemY ) * ( boxZ / itemZ );
  }
  int mostItems(int boxX, int boxY, int boxZ, int itemX, int itemY, int itemZ) {
    int m = 0;
    m >?= fit( boxX, boxY, boxZ, itemX, itemY, itemZ );
    m >?= fit( boxX, boxY, boxZ, itemX, itemZ, itemY );
    m >?= fit( boxX, boxY, boxZ, itemY, itemX, itemZ );
    m >?= fit( boxX, boxY, boxZ, itemY, itemZ, itemX );
    m >?= fit( boxX, boxY, boxZ, itemZ, itemX, itemY );
    m >?= fit( boxX, boxY, boxZ, itemZ, itemY, itemX );
    return m;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/