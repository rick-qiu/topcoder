/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=9828
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

class MagicalSpheres {
public:
    int divideWork(int spheresCount, int fakeSpheresCount, int gnomesAvailable);
};

int MagicalSpheres::divideWork(int spheresCount, int fakeSpheresCount, int gnomesAvailable) {
    int ret;
    return ret;
}


int test0() {
    int spheresCount = 3;
    int fakeSpheresCount = 1;
    int gnomesAvailable = 3;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int spheresCount = 3;
    int fakeSpheresCount = 3;
    int gnomesAvailable = 50;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int spheresCount = 4;
    int fakeSpheresCount = 3;
    int gnomesAvailable = 4;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int spheresCount = 15634;
    int fakeSpheresCount = 456;
    int gnomesAvailable = 5000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 4990;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int spheresCount = 1;
    int fakeSpheresCount = 1;
    int gnomesAvailable = 1;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int spheresCount = 3;
    int fakeSpheresCount = 4;
    int gnomesAvailable = 7;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int spheresCount = 5;
    int fakeSpheresCount = 10;
    int gnomesAvailable = 15;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int spheresCount = 17;
    int fakeSpheresCount = 15;
    int gnomesAvailable = 9;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int spheresCount = 8;
    int fakeSpheresCount = 5;
    int gnomesAvailable = 7;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int spheresCount = 25;
    int fakeSpheresCount = 200;
    int gnomesAvailable = 53;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 53;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int spheresCount = 1;
    int fakeSpheresCount = 1;
    int gnomesAvailable = 100000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int spheresCount = 1;
    int fakeSpheresCount = 1000000000;
    int gnomesAvailable = 100000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 52579;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int spheresCount = 1000000000;
    int fakeSpheresCount = 1;
    int gnomesAvailable = 100000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 52579;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int spheresCount = 1000000000;
    int fakeSpheresCount = 1000000000;
    int gnomesAvailable = 100000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 99999;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int spheresCount = 99999;
    int fakeSpheresCount = 1;
    int gnomesAvailable = 100000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 100000;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int spheresCount = 99998;
    int fakeSpheresCount = 1;
    int gnomesAvailable = 100000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 99999;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int spheresCount = 1000000000;
    int fakeSpheresCount = 7;
    int gnomesAvailable = 100000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 91793;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int spheresCount = 104728;
    int fakeSpheresCount = 1;
    int gnomesAvailable = 100000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int spheresCount = 254972796;
    int fakeSpheresCount = 976428979;
    int gnomesAvailable = 36598;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 36597;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int spheresCount = 922654481;
    int fakeSpheresCount = 37093235;
    int gnomesAvailable = 92878;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 92877;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int spheresCount = 189456684;
    int fakeSpheresCount = 239786691;
    int gnomesAvailable = 77218;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 77217;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int spheresCount = 443269984;
    int fakeSpheresCount = 808717823;
    int gnomesAvailable = 48700;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 48699;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int spheresCount = 929681485;
    int fakeSpheresCount = 148354056;
    int gnomesAvailable = 59910;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 59909;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int spheresCount = 35476864;
    int fakeSpheresCount = 499212869;
    int gnomesAvailable = 32000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 31999;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int spheresCount = 364294062;
    int fakeSpheresCount = 269626489;
    int gnomesAvailable = 68006;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 68005;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int spheresCount = 284557229;
    int fakeSpheresCount = 441937746;
    int gnomesAvailable = 67394;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 67393;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int spheresCount = 898331181;
    int fakeSpheresCount = 50587384;
    int gnomesAvailable = 18195;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 18194;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int spheresCount = 62203742;
    int fakeSpheresCount = 873907697;
    int gnomesAvailable = 87521;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 87520;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int spheresCount = 156696250;
    int fakeSpheresCount = 364145116;
    int gnomesAvailable = 19676;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 19675;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int spheresCount = 684008726;
    int fakeSpheresCount = 787171029;
    int gnomesAvailable = 80309;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 80307;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int spheresCount = 744730271;
    int fakeSpheresCount = 676698948;
    int gnomesAvailable = 51879;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 51876;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int spheresCount = 729764506;
    int fakeSpheresCount = 132986785;
    int gnomesAvailable = 53318;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 53316;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int spheresCount = 24162769;
    int fakeSpheresCount = 663036338;
    int gnomesAvailable = 57881;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 57880;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int spheresCount = 915479710;
    int fakeSpheresCount = 298082273;
    int gnomesAvailable = 85571;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 85570;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int spheresCount = 134573091;
    int fakeSpheresCount = 343763223;
    int gnomesAvailable = 40534;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 40530;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int spheresCount = 923880115;
    int fakeSpheresCount = 115208846;
    int gnomesAvailable = 31881;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 31880;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int spheresCount = 752117869;
    int fakeSpheresCount = 123598459;
    int gnomesAvailable = 95928;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 95927;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int spheresCount = 146469395;
    int fakeSpheresCount = 584773967;
    int gnomesAvailable = 28967;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 28965;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int spheresCount = 602512778;
    int fakeSpheresCount = 33;
    int gnomesAvailable = 8969;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 8909;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int spheresCount = 239195732;
    int fakeSpheresCount = 438598351;
    int gnomesAvailable = 75315;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 75314;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int spheresCount = 60166845;
    int fakeSpheresCount = 582531294;
    int gnomesAvailable = 59164;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 59163;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int spheresCount = 465861224;
    int fakeSpheresCount = 383282877;
    int gnomesAvailable = 74363;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 74362;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int spheresCount = 389568456;
    int fakeSpheresCount = 150298080;
    int gnomesAvailable = 83026;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 83024;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int spheresCount = 573292766;
    int fakeSpheresCount = 821355779;
    int gnomesAvailable = 31100;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 31099;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int spheresCount = 463289430;
    int fakeSpheresCount = 873453124;
    int gnomesAvailable = 35589;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 35588;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int spheresCount = 400736091;
    int fakeSpheresCount = 303627748;
    int gnomesAvailable = 50889;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 50888;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int spheresCount = 174908467;
    int fakeSpheresCount = 647921742;
    int gnomesAvailable = 36724;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 36723;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int spheresCount = 636023265;
    int fakeSpheresCount = 995817552;
    int gnomesAvailable = 48850;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 48849;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int spheresCount = 871188082;
    int fakeSpheresCount = 507984543;
    int gnomesAvailable = 7263;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 7261;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int spheresCount = 520652328;
    int fakeSpheresCount = 260010826;
    int gnomesAvailable = 41049;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 41046;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int spheresCount = 700063172;
    int fakeSpheresCount = 242555982;
    int gnomesAvailable = 3145;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 3145;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int spheresCount = 931279817;
    int fakeSpheresCount = 2;
    int gnomesAvailable = 46537;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 31377;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int spheresCount = 634129184;
    int fakeSpheresCount = 86013470;
    int gnomesAvailable = 77700;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 77700;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int spheresCount = 845043508;
    int fakeSpheresCount = 153315566;
    int gnomesAvailable = 86955;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 86955;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int spheresCount = 780703191;
    int fakeSpheresCount = 217547373;
    int gnomesAvailable = 78435;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 78435;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int spheresCount = 213205823;
    int fakeSpheresCount = 628125890;
    int gnomesAvailable = 80548;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 80548;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int spheresCount = 867049395;
    int fakeSpheresCount = 827703788;
    int gnomesAvailable = 39160;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 39160;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int spheresCount = 958635490;
    int fakeSpheresCount = 421975925;
    int gnomesAvailable = 2943;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 2943;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int spheresCount = 889523678;
    int fakeSpheresCount = 315652698;
    int gnomesAvailable = 1803;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 1803;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int spheresCount = 269010297;
    int fakeSpheresCount = 121766544;
    int gnomesAvailable = 89018;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 89018;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int spheresCount = 296810828;
    int fakeSpheresCount = 55830206;
    int gnomesAvailable = 60288;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 60288;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int spheresCount = 6998558;
    int fakeSpheresCount = 213579889;
    int gnomesAvailable = 74998;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 74998;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int spheresCount = 968569159;
    int fakeSpheresCount = 613354729;
    int gnomesAvailable = 64689;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 64684;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int spheresCount = 399421581;
    int fakeSpheresCount = 281;
    int gnomesAvailable = 40572;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 40553;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int spheresCount = 709866671;
    int fakeSpheresCount = 75;
    int gnomesAvailable = 73236;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 73159;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int spheresCount = 128053769;
    int fakeSpheresCount = 1;
    int gnomesAvailable = 75791;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 390;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int spheresCount = 500000000;
    int fakeSpheresCount = 500000000;
    int gnomesAvailable = 92153;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 92153;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int spheresCount = 123456789;
    int fakeSpheresCount = 432242;
    int gnomesAvailable = 100000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 99997;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int spheresCount = 1000000000;
    int fakeSpheresCount = 1000000000;
    int gnomesAvailable = 99991;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 99991;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int spheresCount = 998537333;
    int fakeSpheresCount = 999999111;
    int gnomesAvailable = 98337;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 98337;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int spheresCount = 686542271;
    int fakeSpheresCount = 789445031;
    int gnomesAvailable = 97305;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 97301;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int spheresCount = 1000000000;
    int fakeSpheresCount = 500000000;
    int gnomesAvailable = 100000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 99999;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int spheresCount = 2;
    int fakeSpheresCount = 1;
    int gnomesAvailable = 100000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int spheresCount = 979878945;
    int fakeSpheresCount = 645666449;
    int gnomesAvailable = 100000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 100000;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int spheresCount = 112901988;
    int fakeSpheresCount = 1;
    int gnomesAvailable = 100000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int spheresCount = 2;
    int fakeSpheresCount = 2;
    int gnomesAvailable = 4;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int spheresCount = 999999937;
    int fakeSpheresCount = 1;
    int gnomesAvailable = 100000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 98;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int spheresCount = 12;
    int fakeSpheresCount = 1;
    int gnomesAvailable = 100000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int spheresCount = 123456789;
    int fakeSpheresCount = 712345678;
    int gnomesAvailable = 100000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 99997;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int spheresCount = 982451652;
    int fakeSpheresCount = 1;
    int gnomesAvailable = 100000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int spheresCount = 1;
    int fakeSpheresCount = 1000;
    int gnomesAvailable = 100000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 1001;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int spheresCount = 40999998;
    int fakeSpheresCount = 1;
    int gnomesAvailable = 100000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int spheresCount = 1;
    int fakeSpheresCount = 784234;
    int gnomesAvailable = 100000;
    MagicalSpheres* pObj = new MagicalSpheres();
    clock_t start = clock();
    int result = pObj->divideWork(spheresCount, fakeSpheresCount, gnomesAvailable);
    clock_t end = clock();
    delete pObj;
    int expected = 11705;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=12181&pm=9828
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
 
class MagicalSpheres
{
public:
  int limit;
  bool prime[100005];
  bool f[100005];
  int count(int n,int p)
  {
    return (n<p)?0:(n/p)+count(n/p,p);
  }
  int divideWork(int sd, int fd, int _limit)
  {
    int n=sd+fd;
    int m=sd;
    limit=_limit;
    memset(prime,true,sizeof(prime));
    memset(f,false,sizeof(f));
    f[1]=true;
    for (int i=2;i<=limit;i++) if (prime[i])
    {
      for (int k=i+i;k<=limit;k+=i) prime[k]=false;
      int c1=count(n,i);
      int c2=count(m,i);
      int c3=count(n-m,i);
      int c=c1-c2-c3;
      for (;c>0;c--)
        for (int k=limit/i;k>0;k--)
          if (f[k])
            f[k*i]=true;
    }
    int result=limit;
    for (;!f[result];result--);
    return result;
  }
};

********************************************************************************
*******************************************************************************/