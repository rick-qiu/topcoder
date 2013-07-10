/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1225
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

class PeopleCircle {
public:
    string order(int numMales, int numFemales, int K);
};

string PeopleCircle::order(int numMales, int numFemales, int K) {
    string ret;
    return ret;
}


int test0() {
    int numMales = 5;
    int numFemales = 3;
    int K = 2;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "MFMFMFMM";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int numMales = 7;
    int numFemales = 3;
    int K = 1;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "FFFMMMMMMM";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int numMales = 25;
    int numFemales = 25;
    int K = 1000;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "MMMMMFFFFFFMFMFMMMFFMFFFFFFFFFMMMMMMMFFMFMMMFMFMMF";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int numMales = 4;
    int numFemales = 1;
    int K = 7;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "MFMMM";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int numMales = 3;
    int numFemales = 2;
    int K = 7;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "MFMMF";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int numMales = 5;
    int numFemales = 1;
    int K = 6;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "MMMMMF";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int numMales = 20;
    int numFemales = 25;
    int K = 45;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "FFFFMFMMMFMMFFFFFFFFFMMFFMMFFMMMFMFFFMMMMFMMF";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int numMales = 7;
    int numFemales = 3;
    int K = 10;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "FMFMMMMMMF";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int numMales = 0;
    int numFemales = 2;
    int K = 1000;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "FF";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int numMales = 2;
    int numFemales = 0;
    int K = 999;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "MM";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int numMales = 0;
    int numFemales = 0;
    int K = 998;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int numMales = 5;
    int numFemales = 5;
    int K = 3;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "MFFMMFFMFM";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int numMales = 1;
    int numFemales = 0;
    int K = 245;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "M";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int numMales = 0;
    int numFemales = 1;
    int K = 23;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "F";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int numMales = 1;
    int numFemales = 1;
    int K = 1;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "FM";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int numMales = 1;
    int numFemales = 1;
    int K = 5;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "FM";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int numMales = 25;
    int numFemales = 0;
    int K = 1000;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "MMMMMMMMMMMMMMMMMMMMMMMMM";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int numMales = 25;
    int numFemales = 25;
    int K = 999;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "MFMMFMFFFFFMFFFFMFFMFMMMFMFMMMMMMMMFMFFFMFFMMMFFFM";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int numMales = 1;
    int numFemales = 25;
    int K = 10;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "FFFFFFFFFFFFFFFMFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int numMales = 1;
    int numFemales = 25;
    int K = 1000;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "FFFFFFFFFFFFMFFFFFFFFFFFFF";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int numMales = 14;
    int numFemales = 14;
    int K = 32;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "MFMFFFMFFFFMFMFMMFMMMFMMFMFM";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int numMales = 17;
    int numFemales = 19;
    int K = 111;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "FFFMMFFMFFFMFMFMFFFFMMMFFMMFMFFMMMMM";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int numMales = 5;
    int numFemales = 5;
    int K = 3;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "MFFMMFFMFM";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int numMales = 25;
    int numFemales = 25;
    int K = 1000;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "MMMMMFFFFFFMFMFMMMFFMFFFFFFFFFMMMMMMMFFMFMMMFMFMMF";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int numMales = 3;
    int numFemales = 3;
    int K = 100;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "MFFFMM";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int numMales = 5;
    int numFemales = 5;
    int K = 15;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "FMMFFMMMFF";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int numMales = 5;
    int numFemales = 5;
    int K = 37;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "MMFMFFFFMM";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int numMales = 0;
    int numFemales = 1;
    int K = 1;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "F";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int numMales = 5;
    int numFemales = 5;
    int K = 30;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "FFFMMMMMFF";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int numMales = 0;
    int numFemales = 0;
    int K = 1000;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int numMales = 2;
    int numFemales = 0;
    int K = 2;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "MM";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int numMales = 0;
    int numFemales = 1;
    int K = 2;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "F";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int numMales = 5;
    int numFemales = 4;
    int K = 100;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "FMFMFMFMM";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int numMales = 0;
    int numFemales = 0;
    int K = 1;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int numMales = 25;
    int numFemales = 25;
    int K = 997;
    PeopleCircle* pObj = new PeopleCircle();
    clock_t start = clock();
    string result = pObj->order(numMales, numFemales, K);
    clock_t end = clock();
    delete pObj;
    string expected = "MFFFMMMMFFMFMFMMFMFMMMFMFFMFFMFMFFFMMMFMMFFFFMFMMF";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=269554&rd=4540&pm=1225
********************************************************************************
#line 2 "PeopleCircle.cpp" 
 
#include <iostream> 
#include <cstdio> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <map> 
#include <sstream> 
#include <cmath> 
 
using namespace std; 
 
 
class PeopleCircle { 
  public: 
  string order(int numMales, int numFemales, int K) { 
    int n=numMales+numFemales; 
    string ans(n,'M'); 
    vector<bool> gone(numMales+numFemales,false); 
    int pos=0; 
    for(int i=0;i<numFemales;i++) { 
      int j=K; 
      while (j>1 || gone[pos]) {         
        if (!gone[pos]) 
          j--; 
        pos=(pos+1)%n; 
      } 
      ans[pos]='F'; 
      gone[pos]=true; 
      pos=(pos+1)%n; 
    } 
    return ans; 
  } 
}; 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/