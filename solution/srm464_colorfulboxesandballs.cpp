/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10743
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

class ColorfulBoxesAndBalls {
public:
    int getMaximum(int numRed, int numBlue, int onlyRed, int onlyBlue, int bothColors);
};

int ColorfulBoxesAndBalls::getMaximum(int numRed, int numBlue, int onlyRed, int onlyBlue, int bothColors) {
    int ret;
    return ret;
}


int test0() {
    int numRed = 2;
    int numBlue = 3;
    int onlyRed = 100;
    int onlyBlue = 400;
    int bothColors = 200;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 1400;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int numRed = 2;
    int numBlue = 3;
    int onlyRed = 100;
    int onlyBlue = 400;
    int bothColors = 300;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 1600;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int numRed = 5;
    int numBlue = 5;
    int onlyRed = 464;
    int onlyBlue = 464;
    int bothColors = 464;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 4640;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int numRed = 1;
    int numBlue = 4;
    int onlyRed = 20;
    int onlyBlue = -30;
    int bothColors = -10;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = -100;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int numRed = 9;
    int numBlue = 1;
    int onlyRed = -1;
    int onlyBlue = -10;
    int bothColors = 4;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int numRed = 1;
    int numBlue = 1;
    int onlyRed = 0;
    int onlyBlue = 0;
    int bothColors = 0;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int numRed = 100;
    int numBlue = 100;
    int onlyRed = 1000;
    int onlyBlue = 1000;
    int bothColors = 1000;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 200000;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int numRed = 100;
    int numBlue = 100;
    int onlyRed = -1000;
    int onlyBlue = -1000;
    int bothColors = -1000;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = -200000;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int numRed = 46;
    int numBlue = 18;
    int onlyRed = -99;
    int onlyBlue = 253;
    int bothColors = 76;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int numRed = 46;
    int numBlue = 18;
    int onlyRed = -99;
    int onlyBlue = 252;
    int bothColors = 77;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int numRed = 46;
    int numBlue = 18;
    int onlyRed = -99;
    int onlyBlue = 253;
    int bothColors = 77;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int numRed = 4;
    int numBlue = 61;
    int onlyRed = 379;
    int onlyBlue = 565;
    int bothColors = 277;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 35981;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int numRed = 29;
    int numBlue = 86;
    int onlyRed = -664;
    int onlyBlue = 465;
    int bothColors = -199;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 20734;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int numRed = 98;
    int numBlue = 26;
    int onlyRed = 944;
    int onlyBlue = 565;
    int bothColors = 126;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 107202;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int numRed = 96;
    int numBlue = 96;
    int onlyRed = -221;
    int onlyBlue = 310;
    int bothColors = 782;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 150144;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int numRed = 41;
    int numBlue = 79;
    int onlyRed = 733;
    int onlyBlue = 110;
    int bothColors = 843;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 73306;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int numRed = 87;
    int numBlue = 16;
    int onlyRed = 969;
    int onlyBlue = -997;
    int bothColors = 549;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 86367;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int numRed = 33;
    int numBlue = 33;
    int onlyRed = -976;
    int onlyBlue = -185;
    int bothColors = -313;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = -20658;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int numRed = 29;
    int numBlue = 12;
    int onlyRed = 947;
    int onlyBlue = 731;
    int bothColors = -886;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 36235;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int numRed = 46;
    int numBlue = 28;
    int onlyRed = 166;
    int onlyBlue = 238;
    int bothColors = 655;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 39668;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int numRed = 40;
    int numBlue = 2;
    int onlyRed = -792;
    int onlyBlue = -48;
    int bothColors = -488;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = -31776;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int numRed = 21;
    int numBlue = 50;
    int onlyRed = -611;
    int onlyBlue = 456;
    int bothColors = -155;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 9969;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int numRed = 41;
    int numBlue = 41;
    int onlyRed = -767;
    int onlyBlue = 792;
    int bothColors = -947;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 1025;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int numRed = 18;
    int numBlue = 32;
    int onlyRed = -408;
    int onlyBlue = -533;
    int bothColors = -956;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = -24400;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int numRed = 12;
    int numBlue = 48;
    int onlyRed = -767;
    int onlyBlue = -747;
    int bothColors = -27;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = -27540;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int numRed = 34;
    int numBlue = 34;
    int onlyRed = -120;
    int onlyBlue = -857;
    int bothColors = 918;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 62424;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int numRed = 36;
    int numBlue = 37;
    int onlyRed = -795;
    int onlyBlue = 183;
    int bothColors = -612;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = -21849;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int numRed = 92;
    int numBlue = 92;
    int onlyRed = 978;
    int onlyBlue = 563;
    int bothColors = 624;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 141772;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int numRed = 97;
    int numBlue = 97;
    int onlyRed = 530;
    int onlyBlue = 244;
    int bothColors = -168;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 75078;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int numRed = 77;
    int numBlue = 77;
    int onlyRed = 12;
    int onlyBlue = -239;
    int bothColors = 956;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 147224;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int numRed = 82;
    int numBlue = 99;
    int onlyRed = -494;
    int onlyBlue = 33;
    int bothColors = -544;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = -37241;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int numRed = 100;
    int numBlue = 4;
    int onlyRed = 20;
    int onlyBlue = -300;
    int bothColors = -1;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 1912;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int numRed = 45;
    int numBlue = 23;
    int onlyRed = -74;
    int onlyBlue = 67;
    int bothColors = 24;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = -524;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int numRed = 2;
    int numBlue = 2;
    int onlyRed = 500;
    int onlyBlue = 200;
    int bothColors = 100;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 1400;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int numRed = 8;
    int numBlue = 2;
    int onlyRed = 2;
    int onlyBlue = 4;
    int bothColors = 8;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 44;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int numRed = 100;
    int numBlue = 100;
    int onlyRed = 999;
    int onlyBlue = 998;
    int bothColors = -999;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 199700;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int numRed = 100;
    int numBlue = 100;
    int onlyRed = -1000;
    int onlyBlue = -1000;
    int bothColors = 500;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 100000;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int numRed = 10;
    int numBlue = 10;
    int onlyRed = 1;
    int onlyBlue = 1;
    int bothColors = 100;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 2000;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int numRed = 63;
    int numBlue = 65;
    int onlyRed = -700;
    int onlyBlue = -258;
    int bothColors = -952;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = -60870;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int numRed = 99;
    int numBlue = 56;
    int onlyRed = 3;
    int onlyBlue = 2;
    int bothColors = 45;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 5169;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int numRed = 7;
    int numBlue = 4;
    int onlyRed = -5;
    int onlyBlue = -2;
    int bothColors = 0;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = -15;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int numRed = 3;
    int numBlue = 2;
    int onlyRed = 2;
    int onlyBlue = 3;
    int bothColors = 3;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int numRed = 100;
    int numBlue = 100;
    int onlyRed = 100;
    int onlyBlue = 200;
    int bothColors = 300;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 60000;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int numRed = 2;
    int numBlue = 2;
    int onlyRed = -5;
    int onlyBlue = -5;
    int bothColors = -5;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = -20;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int numRed = 7;
    int numBlue = 8;
    int onlyRed = 1000;
    int onlyBlue = 1000;
    int bothColors = 1;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 15000;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int numRed = 10;
    int numBlue = 10;
    int onlyRed = 300;
    int onlyBlue = 300;
    int bothColors = 1;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 6000;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int numRed = 10;
    int numBlue = 10;
    int onlyRed = -10;
    int onlyBlue = 1;
    int bothColors = 0;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int numRed = 54;
    int numBlue = 69;
    int onlyRed = 522;
    int onlyBlue = -630;
    int bothColors = -17;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = -11286;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int numRed = 5;
    int numBlue = 3;
    int onlyRed = 100;
    int onlyBlue = 200;
    int bothColors = -500;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 1100;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int numRed = 10;
    int numBlue = 1;
    int onlyRed = 10;
    int onlyBlue = 501;
    int bothColors = 500;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 1090;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int numRed = 2;
    int numBlue = 1;
    int onlyRed = 1000;
    int onlyBlue = 900;
    int bothColors = 100;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 2900;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int numRed = 2;
    int numBlue = 2;
    int onlyRed = 100;
    int onlyBlue = 300;
    int bothColors = 250;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int numRed = 100;
    int numBlue = 100;
    int onlyRed = 2;
    int onlyBlue = 1;
    int bothColors = 1;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int numRed = 10;
    int numBlue = 9;
    int onlyRed = 1;
    int onlyBlue = 10;
    int bothColors = 9;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 163;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int numRed = 10;
    int numBlue = 4;
    int onlyRed = 400;
    int onlyBlue = 500;
    int bothColors = 450;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 6000;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int numRed = 1;
    int numBlue = 1;
    int onlyRed = 2;
    int onlyBlue = -6;
    int bothColors = 2;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int numRed = 1;
    int numBlue = 1;
    int onlyRed = 1;
    int onlyBlue = 1;
    int bothColors = 10;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int numRed = 100;
    int numBlue = 90;
    int onlyRed = 20;
    int onlyBlue = 19;
    int bothColors = 21;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 3980;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int numRed = 2;
    int numBlue = 3;
    int onlyRed = 400;
    int onlyBlue = 100;
    int bothColors = 300;
    ColorfulBoxesAndBalls* pObj = new ColorfulBoxesAndBalls();
    clock_t start = clock();
    int result = pObj->getMaximum(numRed, numBlue, onlyRed, onlyBlue, bothColors);
    clock_t end = clock();
    delete pObj;
    int expected = 1300;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22835215&rd=14149&pm=10743
********************************************************************************
#include <iostream> 
#include <vector> 
 
using namespace std; 
 
class ColorfulBoxesAndBalls{ 
public: 
  int getMaximum(int numRed, int numBlue, int onlyRed, int onlyBlue, int bothColors) 
  { 
    int res1=0,res2=0; 
    if(numRed>numBlue) 
    { 
      if(bothColors<onlyRed) res1+=(numRed*onlyRed+numBlue*onlyBlue); 
      else if(bothColors>onlyBlue){ 
        res1+=(2*numBlue*bothColors+(numRed-numBlue)*onlyRed); 
      } 
      else{ 
        res1+=(numRed*onlyRed+numBlue*onlyBlue); 
      } 
       
      if(numBlue>numRed){ 
        res2+=(numRed*bothColors+(numBlue-numRed)*onlyBlue); 
      } 
      else{ 
        res2+=((numRed-numBlue)*onlyRed+numBlue*bothColors+numBlue*bothColors); 
      } 
    } 
    else{ 
      if(bothColors<onlyBlue) res1+=(numRed*onlyRed+numBlue*onlyBlue); 
      else if(bothColors>onlyRed){ 
        res1+=(2*numRed*bothColors+(numBlue-numRed)*onlyBlue); 
      } 
      else{ 
        res1+=(numRed*onlyRed+numBlue*onlyBlue); 
      } 
       
      if(numBlue<numRed){ 
        res2+=(numBlue*bothColors+(numRed-numBlue)*onlyRed); 
      } 
      else{ 
        res2+=((numBlue-numRed)*onlyBlue+numRed*bothColors+numRed*bothColors); 
      } 
    } 
    if(res1>res2) return res1; 
    else return res2; 
  } 
};

********************************************************************************
*******************************************************************************/