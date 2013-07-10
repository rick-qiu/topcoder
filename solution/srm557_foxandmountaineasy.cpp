/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12195
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

class FoxAndMountainEasy {
public:
    string possible(int n, int h0, int hn, string history);
};

string FoxAndMountainEasy::possible(int n, int h0, int hn, string history) {
    string ret;
    return ret;
}


int test0() {
    int n = 4;
    int h0 = 0;
    int hn = 4;
    string history = "UU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 4;
    int h0 = 0;
    int hn = 4;
    string history = "D";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 4;
    int h0 = 100000;
    int hn = 100000;
    string history = "DDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 4;
    int h0 = 0;
    int hn = 0;
    string history = "DDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 20;
    int h0 = 20;
    int hn = 20;
    string history = "UDUDUDUDUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 20;
    int h0 = 0;
    int hn = 0;
    string history = "UUUUUUUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 20;
    int h0 = 0;
    int hn = 0;
    string history = "UUUUUUUUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 10;
    int h0 = 10;
    int hn = 22;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 10;
    int h0 = 10;
    int hn = 11;
    string history = "D";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 36;
    int h0 = 52;
    int hn = 70;
    string history = "DDDDDDDDDDUUDDDDDDDDDDDDDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 5;
    int h0 = 5;
    int hn = 4;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int n = 67994;
    int h0 = 2675;
    int hn = 645;
    string history = "DDDDDDDUUDUUDDDUDDDDDDDDDDDDDDDDUDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 89003;
    int h0 = 85932;
    int hn = 10413;
    string history = "UUDDDDDDDDDDDDDDDDDDDDUDUDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 52281;
    int h0 = 2513;
    int hn = 48060;
    string history = "DDDDDDDUDUDUUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 7274;
    int h0 = 72;
    int hn = 492;
    string history = "DDDDDDDDDDDDDDUDDUDDDDDDDDDDDDDDDDDDDDDDDDDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 37;
    int h0 = 36;
    int hn = 31;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 10370;
    int h0 = 4658;
    int hn = 3990;
    string history = "UUDUUDUDDUDUUUUDDUDDUUDUUDDDUUUUUDUDUDDDDDUUDDUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 66264;
    int h0 = 40406;
    int hn = 48634;
    string history = "DDDDDDUDUDDUUUUDUUUDUUUDDDDUUDUUUUDDDDUDDDDDDDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 25;
    int h0 = 190;
    int hn = 165;
    string history = "DUUUDUUUDDUUUUUDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 74154;
    int h0 = 84;
    int hn = 7;
    string history = "UUUDUUUUDUUUUDUUUUDUDDUDUUDUUUDDUUUDDUUUDUDUDUUDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 5650;
    int h0 = 1397;
    int hn = 969;
    string history = "UDUUUDUDDDDUDDUUDUUUUDDUUUUDUDUDUDUDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 2198;
    int h0 = 0;
    int hn = 2;
    string history = "DDUUUUUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 36546;
    int h0 = 14655;
    int hn = 30305;
    string history = "DDDDDDDUDDDUDDDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 49;
    int h0 = 22;
    int hn = 35;
    string history = "UDDDDDUUUDDDDDDUDDDDDUDDUUDUDDDDUDUDDDDDDDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 7;
    int h0 = 33;
    int hn = 32;
    string history = "DDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 69566;
    int h0 = 62705;
    int hn = 52473;
    string history = "UDDDDDDDUDDDDDDDDUDDDDDDDDDDDDDDUDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 49;
    int h0 = 61;
    int hn = 64;
    string history = "DDDDDUDUUUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 76879;
    int h0 = 67;
    int hn = 66;
    string history = "DDDDDDDDDUUDDDDDDDDDDDDUDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 15;
    int h0 = 5;
    int hn = 34;
    string history = "UUDDDUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 39;
    int h0 = 30;
    int hn = 25;
    string history = "UDDDDDUUDUUUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int n = 39273;
    int h0 = 9813;
    int hn = 332;
    string history = "UUDUUUDDUUUDDUUUUDUUDUDDDDDDDDUUUUDUDUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 29;
    int h0 = 16;
    int hn = 29;
    string history = "UUUUUUUUUDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 20;
    int h0 = 15;
    int hn = 17;
    string history = "UDDUDUUUUUDUUUUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 43;
    int h0 = 31;
    int hn = 42;
    string history = "DDDDDUUUDDDUDUUUDDUDDDDDUDUDDDDDUDDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 48;
    int h0 = 6;
    int hn = 20;
    string history = "DUUDUDUUDUDDUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 2;
    int h0 = 2;
    int hn = 2;
    string history = "UU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 38;
    int h0 = 82;
    int hn = 62;
    string history = "DDUDUDUDUUUUDDDUUDUDUUUUUUUDUDUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 2;
    int h0 = 0;
    int hn = 2;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 37;
    int h0 = 33;
    int hn = 0;
    string history = "UUUUDUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 50;
    int h0 = 8;
    int hn = 6;
    string history = "DDDDUDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 97608;
    int h0 = 82137;
    int hn = 8191;
    string history = "UUUUUUDDUUUDUDUDUUUUDUDUUDDUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 97667;
    int h0 = 856;
    int hn = 3;
    string history = "UDUUUUDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 31016;
    int h0 = 2393;
    int hn = 5153;
    string history = "UDUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 43916;
    int h0 = 31531;
    int hn = 93;
    string history = "UUUUUDUDUUDDUUUDUUDUDUUUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 1010;
    int h0 = 137;
    int hn = 9;
    string history = "UUDUUDDDDUDDDUUUUDUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 31634;
    int h0 = 26590;
    int hn = 23936;
    string history = "DUUUUDUUUDUDDDUUUUDUUUDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 49849;
    int h0 = 11786;
    int hn = 19043;
    string history = "DUUDUDDDDDDDUDDUDUUUUUDDUDUUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 2231;
    int h0 = 439;
    int hn = 876;
    string history = "UUUUUUUUUUUUUUUUUUUUUUUUUUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 8;
    int h0 = 1;
    int hn = 7;
    string history = "UU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 45;
    int h0 = 42;
    int hn = 7;
    string history = "DUUUUUUDUDDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 45;
    int h0 = 4479;
    int hn = 20447;
    string history = "UUUUUUUDUUUDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int n = 34;
    int h0 = 16;
    int hn = 18;
    string history = "DDUDDDDDDDDDDDDDDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int n = 26;
    int h0 = 26;
    int hn = 0;
    string history = "UUUUUUUUUUUUUUUUDUUUUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int n = 33669;
    int h0 = 28682;
    int hn = 6015;
    string history = "DUDUDDDDDUUDDUUUUDDDUDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int n = 17622;
    int h0 = 6717;
    int hn = 5053;
    string history = "UDDUDDDDUUDUDDDDUUDUDDUDDUDDDDUDDUUDDUDDUDDDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int n = 78461;
    int h0 = 20417;
    int hn = 44852;
    string history = "UUUDDDUUDDUUUUUUUDUDUUUUDDDUUDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int n = 22653;
    int h0 = 713;
    int hn = 8;
    string history = "DDDDDDDDDDDDDDDDDDUUUDUUDDDDDUDDUDDDDDDDDDDDDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int n = 51992;
    int h0 = 9888;
    int hn = 40740;
    string history = "UUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int n = 2275;
    int h0 = 2155;
    int hn = 1170;
    string history = "DDUUDDUUDUDUDDUDUDUDDUUDUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int n = 65356;
    int h0 = 24588;
    int hn = 48968;
    string history = "DDDUUDUDDDDDDUDUUDDDUDUDUDDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int n = 53691;
    int h0 = 24583;
    int hn = 45056;
    string history = "UDUDDUUUUDUUDUUUDUUDUUUDUDDUDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int n = 51367;
    int h0 = 64;
    int hn = 725;
    string history = "DUUUUUUDUDDDUUUUDUDDDUDDDDDDUUDDDDUDUDDUDDUUDUDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int n = 40491;
    int h0 = 96176;
    int hn = 75;
    string history = "UDUDUDUDUUUDDDDUUUDUDUDDUDUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int n = 15046;
    int h0 = 8;
    int hn = 6060;
    string history = "DDDDDDDDUUUUUUUUUUDDUUDDDDDUDUDDDUDDDUDDUDUDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int n = 35;
    int h0 = 7;
    int hn = 0;
    string history = "UUUUUUUUUUUDUDDDDUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int n = 30565;
    int h0 = 617;
    int hn = 2;
    string history = "DUUUDDDUDUUUUDDDUUUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int n = 5;
    int h0 = 5;
    int hn = 10;
    string history = "DD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int n = 45;
    int h0 = 33;
    int hn = 28;
    string history = "DDDDDDDDDDDUDDDDDDDDDUDDDDUDDDDDDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int n = 5563;
    int h0 = 99089;
    int hn = 1794;
    string history = "DDDDUDDDDDDUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int n = 20165;
    int h0 = 981;
    int hn = 19244;
    string history = "DDDDDDDDDUDDUDDDDDDDDDDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int n = 2;
    int h0 = 790;
    int hn = 788;
    string history = "D";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int n = 72692;
    int h0 = 4;
    int hn = 2094;
    string history = "UUUDUUDUDUDUUDUUUUDUDUUUUUUUUUUUDUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int n = 33;
    int h0 = 3297;
    int hn = 3292;
    string history = "UDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int n = 32747;
    int h0 = 5810;
    int hn = 947;
    string history = "DDUDDDDUDDDDDDDDDDDDDDDDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int n = 16;
    int h0 = 4;
    int hn = 2;
    string history = "UDUUUDUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int n = 52784;
    int h0 = 2841;
    int hn = 21951;
    string history = "DDDDDDDDDDDDDDDDDDDUUUUDDUDDDDDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int n = 15896;
    int h0 = 3;
    int hn = 4487;
    string history = "UUUUUUUUUUUUDUUUUUUUUUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int n = 1807;
    int h0 = 1554;
    int hn = 87;
    string history = "UDDUDDUDDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int n = 27;
    int h0 = 23;
    int hn = 9;
    string history = "UDUUDDUUUUDUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int n = 8;
    int h0 = 10;
    int hn = 4;
    string history = "DUDUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int n = 23378;
    int h0 = 15888;
    int hn = 3688;
    string history = "DDDDUDUDUDUUUDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int n = 27;
    int h0 = 4;
    int hn = 13;
    string history = "UUDDDDDDDDDDUUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int n = 20;
    int h0 = 9;
    int hn = 15;
    string history = "DDDDDUUDUUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int n = 70226;
    int h0 = 11702;
    int hn = 46434;
    string history = "DDDDDDDDDUUUDUUDDUDUUDUUDUDUDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int n = 29;
    int h0 = 3;
    int hn = 8;
    string history = "DDUDUDDDDDUDDDDUDDDDDDUDDDDDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int n = 49163;
    int h0 = 4647;
    int hn = 4596;
    string history = "UDDDUUUDUDUDUUUDUUDDDUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int n = 14;
    int h0 = 47862;
    int hn = 96;
    string history = "DUUDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int n = 19381;
    int h0 = 13084;
    int hn = 12043;
    string history = "DUUUUUUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int n = 85719;
    int h0 = 881;
    int hn = 0;
    string history = "UDUUUUUUUDUDUUDDUUDUUUUDDUDUUDUUDDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int n = 85252;
    int h0 = 20;
    int hn = 51;
    string history = "DDDDDDDDDDDUDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int n = 26;
    int h0 = 3;
    int hn = 11;
    string history = "UUUUUUUUUUUUDUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int n = 4520;
    int h0 = 9;
    int hn = 39;
    string history = "UUDDUDDUDDDUDDDDDDDDDUDUDUDDDDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int n = 11096;
    int h0 = 2054;
    int hn = 227;
    string history = "DDDDDDDDDDDDDDDDDDUDDDUDDDDDDDDDDDDDDDDDDDDUDUDUDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int n = 30;
    int h0 = 3;
    int hn = 9;
    string history = "DUDDDUDUUDDDDUDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int n = 3;
    int h0 = 1;
    int hn = 2;
    string history = "DD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int n = 75551;
    int h0 = 71114;
    int hn = 50437;
    string history = "UUUDUUDDDDUDDUUDDDDUUUDDUDDDUDUUUUDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int n = 11296;
    int h0 = 9271;
    int hn = 10235;
    string history = "UD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int n = 54095;
    int h0 = 7499;
    int hn = 9498;
    string history = "DUDDUUUUUUDUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int n = 15484;
    int h0 = 0;
    int hn = 8;
    string history = "DDDDDDDDDDDUDDDDDDDDUDDDDDDDDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int n = 41;
    int h0 = 9;
    int hn = 34;
    string history = "DUDDDUUUDDDDUUDDDDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int n = 20654;
    int h0 = 9486;
    int hn = 15728;
    string history = "DDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int n = 47;
    int h0 = 23;
    int hn = 12;
    string history = "UUDDUUUUUDUUDUDUUUDUUUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int n = 57752;
    int h0 = 92;
    int hn = 3670;
    string history = "UUUDUUDDUUDUDDUUUUDDDDDDDUDUDUUDUUDUDUDUDUDUDDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int n = 17;
    int h0 = 13;
    int hn = 14;
    string history = "DDDDDUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int n = 40;
    int h0 = 1;
    int hn = 1701;
    string history = "DDDDDDDDUUDDUDDUDDDDUDDUUDDDUDDUDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int n = 40655;
    int h0 = 34737;
    int hn = 40012;
    string history = "UUUUDUDUUUUUDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int n = 10;
    int h0 = 10;
    int hn = 8;
    string history = "DU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int n = 38;
    int h0 = 9818;
    int hn = 19932;
    string history = "DDDDDDDDDDDUDDDDDDDDDDDDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int n = 66040;
    int h0 = 6;
    int hn = 119;
    string history = "UDDUUDDDUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int n = 20;
    int h0 = 2;
    int hn = 18;
    string history = "DUDDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int n = 28;
    int h0 = 806;
    int hn = 66;
    string history = "DDDUUDDDDDDUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int n = 40077;
    int h0 = 1202;
    int hn = 2015;
    string history = "DDDDDDDDDUUDDDUDUDDDDDDDUUDDDUUUUDDDUUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int n = 96533;
    int h0 = 29232;
    int hn = 31164;
    string history = "DDDDDDDDDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int n = 85704;
    int h0 = 74956;
    int hn = 32264;
    string history = "DDUDDDDUDDUUDDDDDDDDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int n = 69755;
    int h0 = 8;
    int hn = 67;
    string history = "DDDDUUDUDDDUUUUDUDDUUUUDUDDUDUUUDUDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int n = 15;
    int h0 = 4;
    int hn = 5;
    string history = "DUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int n = 21;
    int h0 = 2;
    int hn = 11;
    string history = "UDUDDUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int n = 65744;
    int h0 = 982;
    int hn = 6958;
    string history = "DDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int n = 27;
    int h0 = 3;
    int hn = 6;
    string history = "DUUUUUUUUUUDUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int n = 14;
    int h0 = 4;
    int hn = 2;
    string history = "UUUUUUUUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int n = 6;
    int h0 = 1;
    int hn = 3;
    string history = "DD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int n = 65818;
    int h0 = 51172;
    int hn = 10510;
    string history = "DDDDDDUDDDDDDDDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int n = 59614;
    int h0 = 30979;
    int hn = 58789;
    string history = "UDUUDUUUUDDDUUUDDDUUUUUUUUUDUDUDUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int n = 3;
    int h0 = 2;
    int hn = 1;
    string history = "DD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int n = 59325;
    int h0 = 18740;
    int hn = 26375;
    string history = "DDDDDDDUDDDDDDDDDDDDUDDDDDUDUDDDDDDUDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int n = 8171;
    int h0 = 5391;
    int hn = 6296;
    string history = "UDDDDUUDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int n = 25;
    int h0 = 18;
    int hn = 21;
    string history = "UUUUUUUUUUUUUDUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int n = 49649;
    int h0 = 19;
    int hn = 10;
    string history = "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int n = 21;
    int h0 = 1;
    int hn = 2;
    string history = "UUUUUDDDUDUUDDUDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int n = 29;
    int h0 = 22;
    int hn = 27;
    string history = "UUUDDDUDUUUDUDUUDDDDUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int n = 36;
    int h0 = 26;
    int hn = 8;
    string history = "UUUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int n = 37;
    int h0 = 5;
    int hn = 8;
    string history = "DUDDDUDDDDUDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int n = 35794;
    int h0 = 496;
    int hn = 158;
    string history = "UUUUUUUUUUUUDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int n = 66025;
    int h0 = 59664;
    int hn = 2651;
    string history = "DDUUDDDDDDDDDDDUDUUDDDDDDDDUDDDDDDDDDDDDDDUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int n = 95538;
    int h0 = 30372;
    int hn = 31669;
    string history = "DDDDDDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int n = 29;
    int h0 = 61670;
    int hn = 841;
    string history = "UUUUDDDUUUUUDDUDDUUUDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int n = 17;
    int h0 = 1;
    int hn = 8;
    string history = "UUUUUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int n = 15;
    int h0 = 13;
    int hn = 8;
    string history = "DDDDDDDDDUDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int n = 35;
    int h0 = 14;
    int hn = 3;
    string history = "UUUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int n = 81409;
    int h0 = 37491;
    int hn = 3246;
    string history = "UDDDDDDDDDDDDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int n = 33;
    int h0 = 4;
    int hn = 9;
    string history = "DDUDDDDDDDDDDDDDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int n = 48968;
    int h0 = 14;
    int hn = 8;
    string history = "DUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int n = 64770;
    int h0 = 3;
    int hn = 7;
    string history = "UDDUUUDUDDUUUUUUUDUUUDUUUUDUDUDUUUUDUDUUUUUUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int n = 14646;
    int h0 = 387;
    int hn = 9;
    string history = "UUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int n = 79695;
    int h0 = 19586;
    int hn = 64451;
    string history = "UUUUDUUUUUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int n = 59186;
    int h0 = 9802;
    int hn = 796;
    string history = "DDDDUDUUUDDDDDDUUDDDDDDUDDDDDDUDDDUDDUDDDUUDDDDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int n = 747;
    int h0 = 347;
    int hn = 42;
    string history = "DUUDDDDDDUDDDDDDDDUDDDDDDDDUDDDDDDDDDDUDDDUDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int n = 77236;
    int h0 = 50874;
    int hn = 52914;
    string history = "UUUDDDUDUDUUUUDUDDUDUUDUUUDUUDUUUDDDUUUUUDUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int n = 10;
    int h0 = 12;
    int hn = 2;
    string history = "UUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int n = 26026;
    int h0 = 15327;
    int hn = 3443;
    string history = "UDDUUUDDDDUDUUUDUDDUDDDDUUDUDDUUUUDDUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    int n = 44785;
    int h0 = 44634;
    int hn = 7;
    string history = "DDDUDDDDDDDDDDUDDDUDDDDDDUDDDDDUDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    int n = 8639;
    int h0 = 677;
    int hn = 98;
    string history = "UUUUUUUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    int n = 55739;
    int h0 = 55584;
    int hn = 50483;
    string history = "DDDUUUDDDDDDDDDDDDDDDDUDDUDDDUDDDDDUDDDDDDUDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    int n = 29250;
    int h0 = 27367;
    int hn = 1659;
    string history = "UUUUUDDUUUUDUUUUUDUUUUUUUDUUUDUDUDDUUUUUUUUUUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    int n = 36935;
    int h0 = 8184;
    int hn = 1;
    string history = "DDUUDUDDDUDDDDDUUDDDUDDDDUDDDDUDDDDDDDUDDDDDUDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    int n = 67656;
    int h0 = 63536;
    int hn = 58208;
    string history = "DDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    int n = 30;
    int h0 = 2;
    int hn = 18;
    string history = "UDDDDDDDDDDDDDUDDUDDDDDDUDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    int n = 8297;
    int h0 = 644;
    int hn = 441;
    string history = "UUUUUUUUUUUUUUDDUUDUDUUUUUUUUUUUUUDUDUUDUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    int n = 18;
    int h0 = 65058;
    int hn = 646;
    string history = "UU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    int n = 99999;
    int h0 = 0;
    int hn = 0;
    string history = "UD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    int n = 4;
    int h0 = 0;
    int hn = 0;
    string history = "DDUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    int n = 2;
    int h0 = 0;
    int hn = 1;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    int n = 3;
    int h0 = 2;
    int hn = 2;
    string history = "UD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    int n = 8;
    int h0 = 0;
    int hn = 0;
    string history = "DDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    int n = 4;
    int h0 = 0;
    int hn = 0;
    string history = "DD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    int n = 9;
    int h0 = 0;
    int hn = 0;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    int n = 10;
    int h0 = 1;
    int hn = 10;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    int n = 6;
    int h0 = 0;
    int hn = 1;
    string history = "UUDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    int n = 10000;
    int h0 = 0;
    int hn = 0;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    int n = 5;
    int h0 = 0;
    int hn = 4;
    string history = "UU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    int n = 999;
    int h0 = 100;
    int hn = 100;
    string history = "UD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    int n = 199;
    int h0 = 100;
    int hn = 100;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    int n = 3;
    int h0 = 10;
    int hn = 10;
    string history = "UD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    int n = 10;
    int h0 = 0;
    int hn = 5;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    int n = 50;
    int h0 = 0;
    int hn = 0;
    string history = "DDDDDDDDDDDDDDDDDDDDDDDDDUUUUUUUUUUUUUUUUUUUUUUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    int n = 100000;
    int h0 = 0;
    int hn = 50000;
    string history = "UDUDUDUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    int n = 3;
    int h0 = 0;
    int hn = 1;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    int n = 2;
    int h0 = 0;
    int hn = 0;
    string history = "D";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    int n = 4;
    int h0 = 4;
    int hn = 5;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    int n = 10;
    int h0 = 0;
    int hn = 1;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    int n = 8;
    int h0 = 4;
    int hn = 0;
    string history = "DDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    int n = 4;
    int h0 = 0;
    int hn = 2;
    string history = "DU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    int n = 100000;
    int h0 = 1;
    int hn = 1;
    string history = "D";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    int n = 99999;
    int h0 = 50000;
    int hn = 50000;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    int n = 1000;
    int h0 = 100000;
    int hn = 10000;
    string history = "UDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    int n = 5;
    int h0 = 1;
    int hn = 0;
    string history = "DD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    int n = 4;
    int h0 = 0;
    int hn = 0;
    string history = "DU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    int n = 3;
    int h0 = 100;
    int hn = 102;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    int n = 2;
    int h0 = 0;
    int hn = 0;
    string history = "DU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    int n = 3;
    int h0 = 0;
    int hn = 2;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    int n = 4;
    int h0 = 0;
    int hn = 3;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    int n = 4;
    int h0 = 0;
    int hn = 0;
    string history = "UUDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    int n = 15;
    int h0 = 13;
    int hn = 0;
    string history = "DDDDDDDDDDDDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    int n = 1;
    int h0 = 0;
    int hn = 1;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    int n = 13;
    int h0 = 7;
    int hn = 7;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    int n = 1000;
    int h0 = 0;
    int hn = 21;
    string history = "DD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    int n = 8;
    int h0 = 1;
    int hn = 1;
    string history = "DDDUUUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    int n = 3;
    int h0 = 0;
    int hn = 0;
    string history = "UD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    int n = 3;
    int h0 = 1;
    int hn = 0;
    string history = "DD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    int n = 3;
    int h0 = 0;
    int hn = 1;
    string history = "DU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    int n = 2;
    int h0 = 0;
    int hn = 0;
    string history = "DD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    int n = 100000;
    int h0 = 10001;
    int hn = 100000;
    string history = "UUUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    int n = 100;
    int h0 = 0;
    int hn = 0;
    string history = "DDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    int n = 8;
    int h0 = 0;
    int hn = 0;
    string history = "DDDDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    int n = 13;
    int h0 = 19;
    int hn = 10;
    string history = "DDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    int n = 99;
    int h0 = 99;
    int hn = 2;
    string history = "DD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    int n = 100000;
    int h0 = 50000;
    int hn = 50001;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    int n = 5;
    int h0 = 0;
    int hn = 2;
    string history = "UD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    int n = 10;
    int h0 = 0;
    int hn = 2;
    string history = "D";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    int n = 6;
    int h0 = 0;
    int hn = 0;
    string history = "DDUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    int n = 198;
    int h0 = 100;
    int hn = 2;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    int n = 1;
    int h0 = 1;
    int hn = 0;
    string history = "D";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    int n = 8;
    int h0 = 0;
    int hn = 4;
    string history = "UUUUUDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    int n = 10;
    int h0 = 0;
    int hn = 0;
    string history = "DD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    int n = 6;
    int h0 = 8;
    int hn = 7;
    string history = "DDDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    int n = 3;
    int h0 = 0;
    int hn = 1;
    string history = "DUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    int n = 4;
    int h0 = 0;
    int hn = 2;
    string history = "D";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    int n = 100000;
    int h0 = 0;
    int hn = 99999;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    int n = 3;
    int h0 = 1;
    int hn = 0;
    string history = "DDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    int n = 6;
    int h0 = 0;
    int hn = 2;
    string history = "DD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    int n = 100;
    int h0 = 0;
    int hn = 0;
    string history = "DDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    int n = 2;
    int h0 = 3;
    int hn = 1;
    string history = "D";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    int n = 10;
    int h0 = 2;
    int hn = 4;
    string history = "DDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    int n = 31;
    int h0 = 0;
    int hn = 0;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    int n = 8;
    int h0 = 0;
    int hn = 0;
    string history = "DDUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    int n = 100;
    int h0 = 20;
    int hn = 10;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    int n = 3;
    int h0 = 3;
    int hn = 2;
    string history = "UD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    int n = 7;
    int h0 = 1;
    int hn = 0;
    string history = "DDUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    int n = 4;
    int h0 = 8;
    int hn = 9;
    string history = "UD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    int n = 10;
    int h0 = 3;
    int hn = 3;
    string history = "DDDDUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    int n = 2;
    int h0 = 2;
    int hn = 0;
    string history = "DD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    int n = 10;
    int h0 = 1000;
    int hn = 1001;
    string history = "UD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    int n = 1;
    int h0 = 2;
    int hn = 1;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    int n = 6;
    int h0 = 0;
    int hn = 2;
    string history = "DDUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    int n = 101;
    int h0 = 21;
    int hn = 2;
    string history = "UD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    int n = 4;
    int h0 = 0;
    int hn = 0;
    string history = "UDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    int n = 7;
    int h0 = 0;
    int hn = 4;
    string history = "UU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    int n = 2;
    int h0 = 2;
    int hn = 0;
    string history = "D";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    int n = 4;
    int h0 = 1;
    int hn = 1;
    string history = "UDDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    int n = 6;
    int h0 = 0;
    int hn = 0;
    string history = "DDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    int n = 16;
    int h0 = 0;
    int hn = 8;
    string history = "DDDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    int n = 8;
    int h0 = 0;
    int hn = 1;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    int n = 5;
    int h0 = 3;
    int hn = 0;
    string history = "DDDUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    int n = 3;
    int h0 = 1;
    int hn = 0;
    string history = "D";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    int n = 100000;
    int h0 = 100000;
    int hn = 100000;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    int n = 2;
    int h0 = 0;
    int hn = 0;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    int n = 8;
    int h0 = 0;
    int hn = 0;
    string history = "DDUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    int n = 10;
    int h0 = 0;
    int hn = 0;
    string history = "DDDDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    int n = 4;
    int h0 = 3;
    int hn = 1;
    string history = "DUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    int n = 3;
    int h0 = 2;
    int hn = 2;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test250() {
    int n = 100000;
    int h0 = 100000;
    int hn = 100000;
    string history = "UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 250: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 250: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test251() {
    int n = 6;
    int h0 = 1;
    int hn = 3;
    string history = "DDUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 251: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 251: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test252() {
    int n = 31;
    int h0 = 0;
    int hn = 2;
    string history = "U";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 252: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 252: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test253() {
    int n = 12;
    int h0 = 0;
    int hn = 5;
    string history = "DUDUUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 253: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 253: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test254() {
    int n = 4;
    int h0 = 1;
    int hn = 1;
    string history = "DDU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 254: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 254: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test255() {
    int n = 5;
    int h0 = 0;
    int hn = 1;
    string history = "DUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 255: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 255: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test256() {
    int n = 10;
    int h0 = 0;
    int hn = 0;
    string history = "DDDDUUUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 256: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 256: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test257() {
    int n = 2;
    int h0 = 2;
    int hn = 2;
    string history = "UD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 257: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 257: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test258() {
    int n = 6;
    int h0 = 0;
    int hn = 0;
    string history = "UDUDUD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 258: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 258: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test259() {
    int n = 1;
    int h0 = 2;
    int hn = 1;
    string history = "D";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 259: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 259: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test260() {
    int n = 3;
    int h0 = 1;
    int hn = 0;
    string history = "UDD";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "YES";
    if(result == expected) {
        cout << "Test Case 260: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 260: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test261() {
    int n = 8;
    int h0 = 1;
    int hn = 2;
    string history = "DDUU";
    FoxAndMountainEasy* pObj = new FoxAndMountainEasy();
    clock_t start = clock();
    string result = pObj->possible(n, h0, hn, history);
    clock_t end = clock();
    delete pObj;
    string expected = "NO";
    if(result == expected) {
        cout << "Test Case 261: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 261: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=15179&pm=12195
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
 
class FoxAndMountainEasy {
public:
  string possible(int, int, int, string);
};
 
string FoxAndMountainEasy::possible(int n, int h0, int hn, string h) {
  int m = h.length(), i, x = h0;
  for (i=0;i<m;i++)
    if (h[i] == 'U') x++; else
    if (h[i] == 'D') x--;
  int d = x-hn;
  if (d < 0) d = -d;
  if (d > n-m) return "NO";
  if (d % 2 != (n-m) % 2) return "NO";
  int up = (n-m-d)/2;
  if (hn > x) up += hn-x;
  x = h0+up;
  for (i=0;i<m;i++) {
    if (h[i] == 'U') x++; else
    if (h[i] == 'D') x--;
    if (x < 0) return "NO";
  }
  return "YES";
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/