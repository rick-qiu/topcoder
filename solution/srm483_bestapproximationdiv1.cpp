/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11023
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

class BestApproximationDiv1 {
public:
    string findFraction(int maxDen, string number);
};

string BestApproximationDiv1::findFraction(int maxDen, string number) {
    string ret;
    return ret;
}


int test0() {
    int maxDen = 42;
    string number = "0.141592";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1/7 has 3 exact digits";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int maxDen = 3;
    string number = "0.133700";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1 has 1 exact digits";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int maxDen = 1000;
    string number = "0.123456";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "10/81 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int maxDen = 1000;
    string number = "0.420000";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "21/50 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int maxDen = 100;
    string number = "0.909999";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "10/11 has 4 exact digits";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int maxDen = 115;
    string number = "0.141592";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "16/113 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int maxDen = 1000;
    string number = "0.272727";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "3/11 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int maxDen = 42;
    string number = "0.409488";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "9/22 has 4 exact digits";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int maxDen = 300;
    string number = "0.431233";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "69/160 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int maxDen = 85;
    string number = "0.606618";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "20/33 has 4 exact digits";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int maxDen = 656;
    string number = "0.120014";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "3/25 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int maxDen = 423;
    string number = "0.603801";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "93/154 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int maxDen = 901;
    string number = "0.778383";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "425/546 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int maxDen = 449;
    string number = "0.880681";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "155/176 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int maxDen = 10;
    string number = "0.228289";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "2/9 has 3 exact digits";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int maxDen = 689;
    string number = "0.953252";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "469/492 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int maxDen = 618;
    string number = "0.229419";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "39/170 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int maxDen = 264;
    string number = "0.553282";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "109/197 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int maxDen = 959;
    string number = "0.257444";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "121/470 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int maxDen = 594;
    string number = "0.122264";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "67/548 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int maxDen = 236;
    string number = "0.106750";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "11/103 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int maxDen = 87;
    string number = "0.774579";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "24/31 has 4 exact digits";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int maxDen = 738;
    string number = "0.554026";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "241/435 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int maxDen = 201;
    string number = "0.930747";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "121/130 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int maxDen = 217;
    string number = "0.767719";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "119/155 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int maxDen = 484;
    string number = "0.578583";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "254/439 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int maxDen = 143;
    string number = "0.174823";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "25/143 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int maxDen = 652;
    string number = "0.485925";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "259/533 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int maxDen = 214;
    string number = "0.412908";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "64/155 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int maxDen = 585;
    string number = "0.143552";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "59/411 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int maxDen = 246;
    string number = "0.801322";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "121/151 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int maxDen = 147;
    string number = "0.930087";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "93/100 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int maxDen = 258;
    string number = "0.458615";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "61/133 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int maxDen = 76;
    string number = "0.268266";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "11/41 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int maxDen = 453;
    string number = "0.234343";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "15/64 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int maxDen = 859;
    string number = "0.514363";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "376/731 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int maxDen = 370;
    string number = "0.989135";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "91/92 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int maxDen = 816;
    string number = "0.159083";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "7/44 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int maxDen = 117;
    string number = "0.789415";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "15/19 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int maxDen = 663;
    string number = "0.495234";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "52/105 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int maxDen = 424;
    string number = "0.688277";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "223/324 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int maxDen = 346;
    string number = "0.812149";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "134/165 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int maxDen = 601;
    string number = "0.928205";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "181/195 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int maxDen = 571;
    string number = "0.472149";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "161/341 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int maxDen = 282;
    string number = "0.232466";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "43/185 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int maxDen = 612;
    string number = "0.995556";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "224/225 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int maxDen = 911;
    string number = "0.215444";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "53/246 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int maxDen = 946;
    string number = "0.607272";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "167/275 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int maxDen = 584;
    string number = "0.328601";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "139/423 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int maxDen = 444;
    string number = "0.108109";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "4/37 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int maxDen = 529;
    string number = "0.830362";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "93/112 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int maxDen = 615;
    string number = "0.813678";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "345/424 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int maxDen = 813;
    string number = "0.314310";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "83/264 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int maxDen = 900;
    string number = "0.382321";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "13/34 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int maxDen = 806;
    string number = "0.209891";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "123/586 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int maxDen = 164;
    string number = "0.622143";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "28/45 has 4 exact digits";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int maxDen = 600;
    string number = "0.082740";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "35/423 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int maxDen = 751;
    string number = "0.428571";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "3/7 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int maxDen = 996;
    string number = "0.919941";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "632/687 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int maxDen = 900;
    string number = "0.129411";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "11/85 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int maxDen = 609;
    string number = "0.469879";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "39/83 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int maxDen = 515;
    string number = "0.166666";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1/6 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int maxDen = 974;
    string number = "0.987261";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "155/157 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int maxDen = 987;
    string number = "0.181286";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "31/171 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int maxDen = 518;
    string number = "0.436507";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "55/126 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int maxDen = 792;
    string number = "0.296208";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "125/422 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int maxDen = 694;
    string number = "0.228571";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "8/35 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int maxDen = 858;
    string number = "0.693877";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "34/49 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int maxDen = 552;
    string number = "0.259615";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "27/104 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int maxDen = 956;
    string number = "0.979166";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "47/48 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int maxDen = 98;
    string number = "0.642857";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "9/14 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int maxDen = 262;
    string number = "0.333333";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1/3 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int maxDen = 141;
    string number = "0.480000";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "12/25 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int maxDen = 171;
    string number = "0.509803";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "26/51 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int maxDen = 150;
    string number = "0.823529";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "14/17 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int maxDen = 283;
    string number = "0.032520";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "4/123 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int maxDen = 368;
    string number = "0.112299";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "21/187 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int maxDen = 642;
    string number = "0.870588";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "74/85 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int maxDen = 480;
    string number = "0.743902";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "61/82 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int maxDen = 448;
    string number = "0.470588";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "8/17 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int maxDen = 760;
    string number = "0.314545";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "173/550 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int maxDen = 487;
    string number = "0.170212";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "8/47 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int maxDen = 861;
    string number = "0.004756";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "4/841 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int maxDen = 504;
    string number = "0.690647";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "96/139 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int maxDen = 456;
    string number = "0.564516";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "35/62 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int maxDen = 822;
    string number = "0.914285";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "32/35 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int maxDen = 456;
    string number = "0.092342";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "41/444 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int maxDen = 136;
    string number = "0.943820";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "84/89 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int maxDen = 999;
    string number = "0.367816";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "32/87 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int maxDen = 636;
    string number = "0.658602";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "245/372 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int maxDen = 233;
    string number = "0.920454";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "81/88 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int maxDen = 679;
    string number = "0.535294";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "91/170 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int maxDen = 200;
    string number = "0.785714";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "11/14 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int maxDen = 574;
    string number = "0.070671";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "20/283 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int maxDen = 275;
    string number = "0.375000";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "3/8 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int maxDen = 288;
    string number = "0.694444";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "25/36 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int maxDen = 466;
    string number = "0.825136";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "151/183 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int maxDen = 113;
    string number = "0.066666";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1/15 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int maxDen = 891;
    string number = "0.889589";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "282/317 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int maxDen = 33;
    string number = "0.700000";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "7/10 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int maxDen = 432;
    string number = "0.864516";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "134/155 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int maxDen = 579;
    string number = "0.968354";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "153/158 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int maxDen = 167;
    string number = "0.947368";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "18/19 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int maxDen = 695;
    string number = "0.620833";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "149/240 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int maxDen = 985;
    string number = "0.193333";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "29/150 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int maxDen = 16;
    string number = "0.333333";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1/3 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int maxDen = 907;
    string number = "0.697936";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "372/533 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int maxDen = 42;
    string number = "0.000000";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int maxDen = 1000;
    string number = "0.128124";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "41/320 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int maxDen = 1000;
    string number = "0.128125";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "41/320 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int maxDen = 1000;
    string number = "0.251199";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "105/418 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int maxDen = 888;
    string number = "0.253740";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "220/867 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int maxDen = 945;
    string number = "0.253749";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "220/867 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int maxDen = 999;
    string number = "0.256240";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "195/761 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int maxDen = 1000;
    string number = "0.256250";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "41/160 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int maxDen = 853;
    string number = "0.258749";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "37/143 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int maxDen = 934;
    string number = "0.258750";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "207/800 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int maxDen = 989;
    string number = "0.502399";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "105/209 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int maxDen = 601;
    string number = "0.502491";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "302/601 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int maxDen = 599;
    string number = "0.502503";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "201/400 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int maxDen = 400;
    string number = "0.507500";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "203/400 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int maxDen = 240;
    string number = "0.512490";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "103/201 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int maxDen = 790;
    string number = "0.512499";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "103/201 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int maxDen = 766;
    string number = "0.522505";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "209/400 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int maxDen = 1000;
    string number = "0.000001";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int maxDen = 1000;
    string number = "0.001001";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1/999 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int maxDen = 5;
    string number = "0.200000";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1/5 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int maxDen = 1000;
    string number = "0.999999";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "999/1000 has 4 exact digits";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int maxDen = 10;
    string number = "0.000000";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int maxDen = 2;
    string number = "0.500000";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1/2 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int maxDen = 1000;
    string number = "0.000000";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int maxDen = 113;
    string number = "0.141592";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "16/113 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int maxDen = 1;
    string number = "0.500000";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1 has 1 exact digits";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int maxDen = 13;
    string number = "0.923076";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "12/13 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int maxDen = 3;
    string number = "0.333333";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1/3 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int maxDen = 1000;
    string number = "0.005922";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "3/506 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int maxDen = 11;
    string number = "0.909999";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "10/11 has 4 exact digits";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int maxDen = 1;
    string number = "0.999999";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1 has 1 exact digits";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int maxDen = 1000;
    string number = "0.812983";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "313/385 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int maxDen = 323;
    string number = "0.334113";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "68/203 has 4 exact digits";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int maxDen = 10;
    string number = "0.700000";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "7/10 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int maxDen = 999;
    string number = "0.990990";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "110/111 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int maxDen = 1000;
    string number = "0.009900";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1/101 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int maxDen = 1000;
    string number = "0.998999";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "990/991 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int maxDen = 1;
    string number = "0.000000";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int maxDen = 100;
    string number = "0.972972";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "36/37 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int maxDen = 1000;
    string number = "0.039800";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "8/201 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int maxDen = 414;
    string number = "0.801250";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "125/156 has 5 exact digits";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int maxDen = 21;
    string number = "0.952380";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "20/21 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int maxDen = 7;
    string number = "0.142857";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1/7 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int maxDen = 10;
    string number = "0.100000";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "1/10 has 7 exact digits";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int maxDen = 500;
    string number = "0.908070";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "326/359 has 6 exact digits";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int maxDen = 1;
    string number = "0.000345";
    BestApproximationDiv1* pObj = new BestApproximationDiv1();
    clock_t start = clock();
    string result = pObj->findFraction(maxDen, number);
    clock_t end = clock();
    delete pObj;
    string expected = "0/1 has 4 exact digits";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15056181&rd=14236&pm=11023
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
 
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(a) (a).begin(),a.end()
#define SORT(a) sort(ALL(a))
#define SZ(a) ((int) a.size())
#define pb push_back
 
class BestApproximationDiv1 {
public:
  string findFraction(int, string);
};
 
string BestApproximationDiv1::findFraction(int x, string number) {  
  int best = -1;
  int q, w;
  FOR (i, 1, x+1) {
    REP (j, i) {
      int t = j;
      int res = 1;
      REP (f, 6) {
        t *= 10;
        int d = t / i;
        t %= i;
        if (d != number[f+2]-'0')
          break;
        ++res;
      }
      if (res > best) {
        best = res;
        q = j;
        w = i;
      }
    }
  }
  ostringstream str;
  str << q << '/' << w << " has " << best << " exact digits";
  return str.str();
}
 
 
//Powered by [KawigiEdit] 2.0!
 
 
//Powered by KawigiEdit 2.1.4 (beta) modified by pivanof!

********************************************************************************
*******************************************************************************/