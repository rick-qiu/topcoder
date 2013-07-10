/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12045
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

class FavouriteDigits {
public:
    long findNext(long N, int digit1, int count1, int digit2, int count2);
};

long FavouriteDigits::findNext(long N, int digit1, int count1, int digit2, int count2) {
    long ret;
    return ret;
}


int test0() {
    long N = 47;
    int digit1 = 1;
    int count1 = 0;
    int digit2 = 2;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 47;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    long N = 47;
    int digit1 = 5;
    int count1 = 0;
    int digit2 = 9;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 49;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    long N = 47;
    int digit1 = 5;
    int count1 = 0;
    int digit2 = 3;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 53;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    long N = 47;
    int digit1 = 2;
    int count1 = 1;
    int digit2 = 0;
    int count2 = 2;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 200;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    long N = 47;
    int digit1 = 5;
    int count1 = 1;
    int digit2 = 0;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    long N = 123456789012345;
    int digit1 = 1;
    int count1 = 2;
    int digit2 = 2;
    int count2 = 4;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 123456789012422;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    long N = 729999999999947;
    int digit1 = 0;
    int count1 = 0;
    int digit2 = 3;
    int count2 = 2;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 730000000000003;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    long N = 47;
    int digit1 = 4;
    int count1 = 8;
    int digit2 = 7;
    int count2 = 7;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 444444447777777;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    long N = 777;
    int digit1 = 4;
    int count1 = 15;
    int digit2 = 0;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 444444444444444;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    long N = 777;
    int digit1 = 7;
    int count1 = 14;
    int digit2 = 0;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 707777777777777;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    long N = 777;
    int digit1 = 7;
    int count1 = 14;
    int digit2 = 8;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 777777777777778;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    long N = 777;
    int digit1 = 7;
    int count1 = 8;
    int digit2 = 4;
    int count2 = 7;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 444444477777777;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    long N = 701234568901234;
    int digit1 = 6;
    int count1 = 14;
    int digit2 = 0;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 766666666666666;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    long N = 701234568901234;
    int digit1 = 6;
    int count1 = 15;
    int digit2 = 0;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1666666666666666;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    long N = 474747470000001;
    int digit1 = 4;
    int count1 = 3;
    int digit2 = 7;
    int count2 = 2;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 474747470000001;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    long N = 434744725433512;
    int digit1 = 4;
    int count1 = 8;
    int digit2 = 7;
    int count2 = 5;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 434744727444477;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    long N = 1;
    int digit1 = 0;
    int count1 = 1;
    int digit2 = 1;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 10;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    long N = 1;
    int digit1 = 0;
    int count1 = 15;
    int digit2 = 1;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000000;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    long N = 497;
    int digit1 = 0;
    int count1 = 2;
    int digit2 = 5;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 500;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    long N = 547;
    int digit1 = 0;
    int count1 = 2;
    int digit2 = 5;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1005;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    long N = 3;
    int digit1 = 3;
    int count1 = 1;
    int digit2 = 0;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    long N = 3;
    int digit1 = 4;
    int count1 = 1;
    int digit2 = 0;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    long N = 3;
    int digit1 = 2;
    int count1 = 1;
    int digit2 = 0;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 12;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    long N = 701234568901234;
    int digit1 = 6;
    int count1 = 14;
    int digit2 = 5;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1566666666666666;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    long N = 701234568901234;
    int digit1 = 6;
    int count1 = 14;
    int digit2 = 1;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1066666666666666;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    long N = 92;
    int digit1 = 1;
    int count1 = 1;
    int digit2 = 0;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    long N = 992;
    int digit1 = 1;
    int count1 = 2;
    int digit2 = 2;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1012;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    long N = 654923;
    int digit1 = 2;
    int count1 = 10;
    int digit2 = 0;
    int count2 = 2;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 200222222222;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    long N = 227739003;
    int digit1 = 6;
    int count1 = 11;
    int digit2 = 9;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 666666666669;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    long N = 996483325718;
    int digit1 = 4;
    int count1 = 0;
    int digit2 = 0;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 996483325720;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    long N = 5065495;
    int digit1 = 6;
    int count1 = 0;
    int digit2 = 0;
    int count2 = 6;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 6000000;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    long N = 699;
    int digit1 = 5;
    int count1 = 6;
    int digit2 = 0;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 555555;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    long N = 731957744920478;
    int digit1 = 9;
    int count1 = 4;
    int digit2 = 3;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 731957744920499;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    long N = 3306;
    int digit1 = 1;
    int count1 = 1;
    int digit2 = 8;
    int count2 = 11;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 188888888888;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    long N = 3718248575;
    int digit1 = 1;
    int count1 = 1;
    int digit2 = 8;
    int count2 = 4;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 3718248588;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    long N = 516838036;
    int digit1 = 3;
    int count1 = 2;
    int digit2 = 7;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 516838036;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    long N = 7;
    int digit1 = 4;
    int count1 = 1;
    int digit2 = 2;
    int count2 = 3;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 2224;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    long N = 848607;
    int digit1 = 3;
    int count1 = 1;
    int digit2 = 0;
    int count2 = 2;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 849003;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    long N = 254546402115955;
    int digit1 = 4;
    int count1 = 10;
    int digit2 = 6;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 254546404444444;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    long N = 61;
    int digit1 = 4;
    int count1 = 0;
    int digit2 = 2;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 62;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    long N = 3591862108116;
    int digit1 = 3;
    int count1 = 0;
    int digit2 = 0;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 3591862108116;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    long N = 2005034;
    int digit1 = 1;
    int count1 = 7;
    int digit2 = 7;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 11111117;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    long N = 91636980094;
    int digit1 = 0;
    int count1 = 3;
    int digit2 = 6;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 91636980100;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    long N = 30778434502;
    int digit1 = 3;
    int count1 = 4;
    int digit2 = 2;
    int count2 = 4;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 30782222333;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    long N = 430634311752445;
    int digit1 = 1;
    int count1 = 8;
    int digit2 = 8;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 430634411111111;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    long N = 2331035333284;
    int digit1 = 7;
    int count1 = 1;
    int digit2 = 5;
    int count2 = 3;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 2331035333557;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    long N = 72874;
    int digit1 = 3;
    int count1 = 7;
    int digit2 = 0;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 30333333;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    long N = 26;
    int digit1 = 0;
    int count1 = 3;
    int digit2 = 2;
    int count2 = 7;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 2000222222;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    long N = 315675;
    int digit1 = 0;
    int count1 = 1;
    int digit2 = 3;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 315680;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    long N = 89826;
    int digit1 = 0;
    int count1 = 11;
    int digit2 = 9;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 900000000000;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    long N = 599683752901925;
    int digit1 = 0;
    int count1 = 0;
    int digit2 = 7;
    int count2 = 6;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 599683752977777;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    long N = 799;
    int digit1 = 8;
    int count1 = 0;
    int digit2 = 7;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 799;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    long N = 6455;
    int digit1 = 1;
    int count1 = 3;
    int digit2 = 5;
    int count2 = 3;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 111555;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    long N = 5;
    int digit1 = 3;
    int count1 = 13;
    int digit2 = 9;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 3333333333333;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    long N = 2515618178;
    int digit1 = 2;
    int count1 = 7;
    int digit2 = 9;
    int count2 = 5;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 222222299999;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    long N = 417144712673;
    int digit1 = 2;
    int count1 = 1;
    int digit2 = 5;
    int count2 = 7;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 417152555555;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    long N = 3115256799;
    int digit1 = 2;
    int count1 = 12;
    int digit2 = 1;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 222222222222;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    long N = 981487;
    int digit1 = 5;
    int count1 = 6;
    int digit2 = 2;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 2555555;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    long N = 4562177184794;
    int digit1 = 9;
    int count1 = 6;
    int digit2 = 6;
    int count2 = 6;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 4666666999999;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    long N = 862;
    int digit1 = 4;
    int count1 = 6;
    int digit2 = 0;
    int count2 = 7;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000044444;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    long N = 47590889088;
    int digit1 = 9;
    int count1 = 5;
    int digit2 = 7;
    int count2 = 5;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 47777799999;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    long N = 4557;
    int digit1 = 0;
    int count1 = 1;
    int digit2 = 1;
    int count2 = 2;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 5011;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    long N = 331056261798635;
    int digit1 = 0;
    int count1 = 5;
    int digit2 = 4;
    int count2 = 3;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 331056264000044;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    long N = 6;
    int digit1 = 7;
    int count1 = 9;
    int digit2 = 3;
    int count2 = 2;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 33777777777;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    long N = 58238;
    int digit1 = 0;
    int count1 = 2;
    int digit2 = 8;
    int count2 = 9;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 80088888888;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    long N = 107585;
    int digit1 = 5;
    int count1 = 0;
    int digit2 = 7;
    int count2 = 10;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 7777777777;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    long N = 464581114983;
    int digit1 = 0;
    int count1 = 5;
    int digit2 = 3;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 464581300000;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    long N = 55387;
    int digit1 = 1;
    int count1 = 6;
    int digit2 = 4;
    int count2 = 6;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 111111444444;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    long N = 384103915492;
    int digit1 = 5;
    int count1 = 5;
    int digit2 = 1;
    int count2 = 4;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 384111155555;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    long N = 30813298248472;
    int digit1 = 6;
    int count1 = 3;
    int digit2 = 5;
    int count2 = 2;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 30813298255666;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    long N = 15;
    int digit1 = 6;
    int count1 = 0;
    int digit2 = 0;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 15;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    long N = 539530074332695;
    int digit1 = 9;
    int count1 = 3;
    int digit2 = 5;
    int count2 = 8;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 539530095555559;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    long N = 2035614449522;
    int digit1 = 0;
    int count1 = 3;
    int digit2 = 7;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 2035614449600;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    long N = 7214;
    int digit1 = 6;
    int count1 = 0;
    int digit2 = 0;
    int count2 = 13;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 10000000000000;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    long N = 61;
    int digit1 = 9;
    int count1 = 12;
    int digit2 = 6;
    int count2 = 3;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 666999999999999;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    long N = 199297;
    int digit1 = 7;
    int count1 = 2;
    int digit2 = 3;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 199377;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    long N = 92;
    int digit1 = 1;
    int count1 = 0;
    int digit2 = 2;
    int count2 = 2;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 122;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    long N = 1788875131;
    int digit1 = 1;
    int count1 = 0;
    int digit2 = 8;
    int count2 = 3;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1788875131;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    long N = 958;
    int digit1 = 7;
    int count1 = 6;
    int digit2 = 9;
    int count2 = 2;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 77777799;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    long N = 28453608033;
    int digit1 = 3;
    int count1 = 1;
    int digit2 = 2;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 28453608033;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    long N = 119243210122753;
    int digit1 = 5;
    int count1 = 0;
    int digit2 = 4;
    int count2 = 3;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 119243210122844;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    long N = 31;
    int digit1 = 1;
    int count1 = 0;
    int digit2 = 5;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 35;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    long N = 79;
    int digit1 = 6;
    int count1 = 5;
    int digit2 = 4;
    int count2 = 3;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 44466666;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    long N = 733;
    int digit1 = 4;
    int count1 = 3;
    int digit2 = 0;
    int count2 = 7;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000044;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    long N = 4;
    int digit1 = 9;
    int count1 = 0;
    int digit2 = 0;
    int count2 = 2;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    long N = 5566267949;
    int digit1 = 1;
    int count1 = 3;
    int digit2 = 4;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 5566268111;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    long N = 864404636234;
    int digit1 = 2;
    int count1 = 13;
    int digit2 = 9;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 2222222222222;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    long N = 6245226;
    int digit1 = 4;
    int count1 = 0;
    int digit2 = 8;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 6245226;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    long N = 3;
    int digit1 = 5;
    int count1 = 0;
    int digit2 = 1;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 3;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    long N = 853763137;
    int digit1 = 9;
    int count1 = 10;
    int digit2 = 6;
    int count2 = 3;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 6669999999999;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    long N = 124565313525384;
    int digit1 = 3;
    int count1 = 2;
    int digit2 = 0;
    int count2 = 9;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 124600000000033;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    long N = 4134954849229;
    int digit1 = 2;
    int count1 = 6;
    int digit2 = 3;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 4134955222222;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    long N = 1962407043;
    int digit1 = 8;
    int count1 = 11;
    int digit2 = 0;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 808888888888;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    long N = 620681;
    int digit1 = 9;
    int count1 = 0;
    int digit2 = 4;
    int count2 = 3;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 621444;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    long N = 282;
    int digit1 = 9;
    int count1 = 3;
    int digit2 = 0;
    int count2 = 3;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 900099;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    long N = 3008402;
    int digit1 = 8;
    int count1 = 2;
    int digit2 = 0;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 3008408;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    long N = 86354037283377;
    int digit1 = 3;
    int count1 = 5;
    int digit2 = 7;
    int count2 = 3;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 86354037303377;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    long N = 929302;
    int digit1 = 0;
    int count1 = 10;
    int digit2 = 1;
    int count2 = 2;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 100000000001;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    long N = 9567586730587;
    int digit1 = 7;
    int count1 = 3;
    int digit2 = 2;
    int count2 = 7;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 9567722222227;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    long N = 39888232658;
    int digit1 = 7;
    int count1 = 0;
    int digit2 = 5;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 39888232658;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    long N = 6809956;
    int digit1 = 0;
    int count1 = 4;
    int digit2 = 2;
    int count2 = 3;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 10000222;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    long N = 8184038;
    int digit1 = 4;
    int count1 = 12;
    int digit2 = 2;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 444444444444;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    long N = 3143275326265;
    int digit1 = 8;
    int count1 = 2;
    int digit2 = 0;
    int count2 = 12;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 80000000000008;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    long N = 50561460;
    int digit1 = 2;
    int count1 = 8;
    int digit2 = 4;
    int count2 = 3;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 22222222444;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    long N = 5616661715;
    int digit1 = 8;
    int count1 = 0;
    int digit2 = 5;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 5616661715;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    long N = 438336226630705;
    int digit1 = 0;
    int count1 = 1;
    int digit2 = 9;
    int count2 = 4;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 438336226690999;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    long N = 6118;
    int digit1 = 0;
    int count1 = 2;
    int digit2 = 6;
    int count2 = 2;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 6600;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    long N = 802998516595;
    int digit1 = 6;
    int count1 = 12;
    int digit2 = 0;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 6066666666666;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    long N = 8324053;
    int digit1 = 4;
    int count1 = 3;
    int digit2 = 3;
    int count2 = 11;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 33333333333444;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    long N = 69619706734;
    int digit1 = 4;
    int count1 = 15;
    int digit2 = 1;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 444444444444444;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    long N = 3253;
    int digit1 = 8;
    int count1 = 6;
    int digit2 = 7;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 888888;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    long N = 23;
    int digit1 = 9;
    int count1 = 5;
    int digit2 = 4;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 99999;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    long N = 657;
    int digit1 = 4;
    int count1 = 6;
    int digit2 = 2;
    int count2 = 2;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 22444444;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    long N = 6333;
    int digit1 = 4;
    int count1 = 0;
    int digit2 = 6;
    int count2 = 11;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 66666666666;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    long N = 45143111;
    int digit1 = 0;
    int count1 = 2;
    int digit2 = 2;
    int count2 = 6;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 100222222;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    long N = 3271;
    int digit1 = 0;
    int count1 = 0;
    int digit2 = 8;
    int count2 = 6;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 888888;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    long N = 96239010815;
    int digit1 = 0;
    int count1 = 6;
    int digit2 = 3;
    int count2 = 8;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 30000003333333;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    long N = 58147471674488;
    int digit1 = 1;
    int count1 = 7;
    int digit2 = 8;
    int count2 = 5;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 58148111111888;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    long N = 19644574824;
    int digit1 = 3;
    int count1 = 1;
    int digit2 = 7;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 19644574830;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    long N = 5;
    int digit1 = 4;
    int count1 = 0;
    int digit2 = 9;
    int count2 = 4;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 9999;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    long N = 603960;
    int digit1 = 2;
    int count1 = 2;
    int digit2 = 0;
    int count2 = 10;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 200000000002;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    long N = 46451113560115;
    int digit1 = 0;
    int count1 = 5;
    int digit2 = 8;
    int count2 = 5;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 46458000008888;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    long N = 991;
    int digit1 = 7;
    int count1 = 13;
    int digit2 = 0;
    int count2 = 2;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 700777777777777;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    long N = 7665;
    int digit1 = 1;
    int count1 = 10;
    int digit2 = 7;
    int count2 = 2;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 111111111177;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    long N = 58221;
    int digit1 = 9;
    int count1 = 10;
    int digit2 = 2;
    int count2 = 2;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 229999999999;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    long N = 555041;
    int digit1 = 5;
    int count1 = 0;
    int digit2 = 4;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 555041;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    long N = 372786714;
    int digit1 = 5;
    int count1 = 2;
    int digit2 = 4;
    int count2 = 7;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 444444455;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    long N = 999999999999999;
    int digit1 = 0;
    int count1 = 14;
    int digit2 = 9;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000009;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    long N = 999999999999999;
    int digit1 = 1;
    int count1 = 1;
    int digit2 = 9;
    int count2 = 14;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1099999999999999;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    long N = 999999999999999;
    int digit1 = 8;
    int count1 = 5;
    int digit2 = 9;
    int count2 = 10;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1888889999999999;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    long N = 999999999999999;
    int digit1 = 9;
    int count1 = 10;
    int digit2 = 5;
    int count2 = 5;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1555559999999999;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    long N = 452129873217234;
    int digit1 = 8;
    int count1 = 9;
    int digit2 = 2;
    int count2 = 6;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 822222288888888;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    long N = 974094882455171;
    int digit1 = 0;
    int count1 = 14;
    int digit2 = 9;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000009;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    long N = 123456789012345;
    int digit1 = 9;
    int count1 = 8;
    int digit2 = 2;
    int count2 = 4;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 123492229999999;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    long N = 1;
    int digit1 = 9;
    int count1 = 14;
    int digit2 = 8;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 899999999999999;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    long N = 23;
    int digit1 = 9;
    int count1 = 8;
    int digit2 = 8;
    int count2 = 7;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 888888899999999;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    long N = 999999999999;
    int digit1 = 4;
    int count1 = 7;
    int digit2 = 7;
    int count2 = 7;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 44444447777777;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    long N = 1;
    int digit1 = 0;
    int count1 = 0;
    int digit2 = 9;
    int count2 = 15;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    long N = 1;
    int digit1 = 7;
    int count1 = 7;
    int digit2 = 0;
    int count2 = 8;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 700000000777777;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    long N = 1;
    int digit1 = 0;
    int count1 = 1;
    int digit2 = 9;
    int count2 = 12;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 9099999999999;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    long N = 1;
    int digit1 = 1;
    int count1 = 15;
    int digit2 = 0;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 111111111111111;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    long N = 1;
    int digit1 = 9;
    int count1 = 9;
    int digit2 = 8;
    int count2 = 6;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 888888999999999;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    long N = 35535327435555;
    int digit1 = 5;
    int count1 = 7;
    int digit2 = 3;
    int count2 = 7;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 35535333335555;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    long N = 1;
    int digit1 = 9;
    int count1 = 14;
    int digit2 = 2;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 299999999999999;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    long N = 1;
    int digit1 = 1;
    int count1 = 7;
    int digit2 = 2;
    int count2 = 8;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 111111122222222;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    long N = 1;
    int digit1 = 0;
    int count1 = 14;
    int digit2 = 1;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 100000000000000;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    long N = 100000000000001;
    int digit1 = 0;
    int count1 = 14;
    int digit2 = 9;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 900000000000000;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    long N = 1;
    int digit1 = 9;
    int count1 = 7;
    int digit2 = 0;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 90999999;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    long N = 1;
    int digit1 = 0;
    int count1 = 15;
    int digit2 = 2;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000000;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    long N = 1;
    int digit1 = 9;
    int count1 = 15;
    int digit2 = 0;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    long N = 1;
    int digit1 = 9;
    int count1 = 7;
    int digit2 = 8;
    int count2 = 8;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 888888889999999;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    long N = 100;
    int digit1 = 2;
    int count1 = 0;
    int digit2 = 0;
    int count2 = 3;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1000;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    long N = 999999999999999;
    int digit1 = 9;
    int count1 = 14;
    int digit2 = 8;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1899999999999999;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    long N = 100000000000000;
    int digit1 = 9;
    int count1 = 7;
    int digit2 = 8;
    int count2 = 6;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 108888889999999;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    long N = 1;
    int digit1 = 8;
    int count1 = 7;
    int digit2 = 9;
    int count2 = 8;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 888888899999999;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    long N = 100000000000000;
    int digit1 = 9;
    int count1 = 14;
    int digit2 = 0;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 909999999999999;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    long N = 3426234634563;
    int digit1 = 3;
    int count1 = 8;
    int digit2 = 9;
    int count2 = 3;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 3429333333399;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    long N = 1;
    int digit1 = 1;
    int count1 = 10;
    int digit2 = 2;
    int count2 = 4;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 11111111112222;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    long N = 1;
    int digit1 = 1;
    int count1 = 6;
    int digit2 = 2;
    int count2 = 6;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 111111222222;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    long N = 123456789;
    int digit1 = 1;
    int count1 = 3;
    int digit2 = 2;
    int count2 = 10;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1112222222222;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    long N = 5;
    int digit1 = 2;
    int count1 = 3;
    int digit2 = 0;
    int count2 = 5;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 20000022;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    long N = 1;
    int digit1 = 1;
    int count1 = 0;
    int digit2 = 9;
    int count2 = 14;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 99999999999999;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    long N = 12345678901234;
    int digit1 = 9;
    int count1 = 7;
    int digit2 = 8;
    int count2 = 6;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 18888889999999;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    long N = 10;
    int digit1 = 9;
    int count1 = 10;
    int digit2 = 8;
    int count2 = 3;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 8889999999999;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    long N = 999;
    int digit1 = 0;
    int count1 = 15;
    int digit2 = 1;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000000;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    long N = 55;
    int digit1 = 7;
    int count1 = 1;
    int digit2 = 6;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 67;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    long N = 999999999999999;
    int digit1 = 8;
    int count1 = 14;
    int digit2 = 9;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1888888888888889;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    long N = 100000000000000;
    int digit1 = 0;
    int count1 = 15;
    int digit2 = 1;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000000;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    long N = 1;
    int digit1 = 0;
    int count1 = 5;
    int digit2 = 2;
    int count2 = 4;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 200000222;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    long N = 2;
    int digit1 = 9;
    int count1 = 15;
    int digit2 = 0;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 999999999999999;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    long N = 1;
    int digit1 = 0;
    int count1 = 2;
    int digit2 = 5;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    long N = 1;
    int digit1 = 0;
    int count1 = 15;
    int digit2 = 3;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000000;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    long N = 999999999999999;
    int digit1 = 2;
    int count1 = 6;
    int digit2 = 1;
    int count2 = 5;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1000001111222222;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    long N = 1;
    int digit1 = 0;
    int count1 = 2;
    int digit2 = 3;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    long N = 999;
    int digit1 = 0;
    int count1 = 2;
    int digit2 = 1;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1000;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    long N = 1118;
    int digit1 = 1;
    int count1 = 3;
    int digit2 = 7;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1171;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    long N = 74;
    int digit1 = 3;
    int count1 = 2;
    int digit2 = 0;
    int count2 = 2;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 3003;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    long N = 1580247635;
    int digit1 = 1;
    int count1 = 4;
    int digit2 = 0;
    int count2 = 6;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 10000000111;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    long N = 7777777777;
    int digit1 = 5;
    int count1 = 5;
    int digit2 = 0;
    int count2 = 5;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 10000055555;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    long N = 2;
    int digit1 = 0;
    int count1 = 10;
    int digit2 = 2;
    int count2 = 5;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 200000000002222;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    long N = 999999999999999;
    int digit1 = 1;
    int count1 = 7;
    int digit2 = 9;
    int count2 = 8;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1011111199999999;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    long N = 50;
    int digit1 = 0;
    int count1 = 15;
    int digit2 = 9;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000000;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    long N = 975;
    int digit1 = 4;
    int count1 = 1;
    int digit2 = 7;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1047;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    long N = 281;
    int digit1 = 3;
    int count1 = 4;
    int digit2 = 0;
    int count2 = 3;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 3000333;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    long N = 888888888888888;
    int digit1 = 0;
    int count1 = 7;
    int digit2 = 9;
    int count2 = 8;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 900000009999999;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    long N = 275;
    int digit1 = 9;
    int count1 = 7;
    int digit2 = 0;
    int count2 = 5;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 900000999999;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    long N = 1;
    int digit1 = 1;
    int count1 = 0;
    int digit2 = 0;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    long N = 999999999999999;
    int digit1 = 1;
    int count1 = 1;
    int digit2 = 0;
    int count2 = 14;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000000;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    long N = 20000000000000;
    int digit1 = 1;
    int count1 = 7;
    int digit2 = 9;
    int count2 = 7;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 91111111999999;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    long N = 50;
    int digit1 = 0;
    int count1 = 5;
    int digit2 = 9;
    int count2 = 5;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 9000009999;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    long N = 1;
    int digit1 = 2;
    int count1 = 0;
    int digit2 = 0;
    int count2 = 2;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    long N = 987987987987987;
    int digit1 = 0;
    int count1 = 0;
    int digit2 = 8;
    int count2 = 15;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1888888888888888;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    long N = 1;
    int digit1 = 8;
    int count1 = 1;
    int digit2 = 9;
    int count2 = 14;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 899999999999999;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    long N = 275;
    int digit1 = 9;
    int count1 = 3;
    int digit2 = 0;
    int count2 = 3;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 900099;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    long N = 123423;
    int digit1 = 3;
    int count1 = 2;
    int digit2 = 2;
    int count2 = 3;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 132223;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    long N = 9;
    int digit1 = 1;
    int count1 = 1;
    int digit2 = 2;
    int count2 = 4;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 12222;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    long N = 999999999999999;
    int digit1 = 4;
    int count1 = 5;
    int digit2 = 7;
    int count2 = 5;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1000004444477777;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    long N = 1;
    int digit1 = 6;
    int count1 = 10;
    int digit2 = 8;
    int count2 = 5;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 666666666688888;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    long N = 555770;
    int digit1 = 5;
    int count1 = 1;
    int digit2 = 7;
    int count2 = 4;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 557777;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    long N = 1;
    int digit1 = 0;
    int count1 = 5;
    int digit2 = 2;
    int count2 = 5;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 2000002222;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    long N = 1;
    int digit1 = 0;
    int count1 = 8;
    int digit2 = 9;
    int count2 = 7;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 900000000999999;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    long N = 99999;
    int digit1 = 5;
    int count1 = 2;
    int digit2 = 6;
    int count2 = 2;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 105566;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    long N = 65;
    int digit1 = 4;
    int count1 = 8;
    int digit2 = 0;
    int count2 = 7;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 400000004444444;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    long N = 12;
    int digit1 = 4;
    int count1 = 5;
    int digit2 = 0;
    int count2 = 8;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 4000000004444;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    long N = 98;
    int digit1 = 1;
    int count1 = 2;
    int digit2 = 3;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 101;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    long N = 27;
    int digit1 = 0;
    int count1 = 2;
    int digit2 = 9;
    int count2 = 0;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 100;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    long N = 1;
    int digit1 = 6;
    int count1 = 5;
    int digit2 = 7;
    int count2 = 4;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 666667777;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    long N = 999999999999999;
    int digit1 = 1;
    int count1 = 1;
    int digit2 = 0;
    int count2 = 1;
    FavouriteDigits* pObj = new FavouriteDigits();
    clock_t start = clock();
    long result = pObj->findNext(N, digit1, count1, digit2, count2);
    clock_t end = clock();
    delete pObj;
    long expected = 1000000000000000;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15868491&rd=14738&pm=12045
********************************************************************************
#include <cassert>
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
 
typedef long long ll;
 
class FavouriteDigits {
public:
  long long findNext(long long, int, int, int, int);
};
 
int good( ll N, ll x, int k, int d1, int c1, int d2, int c2 )
{
  c1 = max(c1, 0);
  c2 = max(c2, 0);
  if (k < c1 + c2)
    return 0;
  int d3 = 9, c3 = k - (c1 + c2);
  while (c3--) x = x * 10 + d3;
  while (c2--) x = x * 10 + d2;
  while (c1--) x = x * 10 + d1;
  return N <= x;
}
 
long long FavouriteDigits::findNext(long long N, int d1, int c1, int d2, int c2)
{
  if (d1 > d2)
    swap(d1, d2), swap(c1, c2);
 
  ll x = 0;
  int k = 18;
  while (k > 0)
  {
    int t = 0;
    //printf("x = %I64d, k = %d\n", x, k);
    while (!good(N, x * 10 + t, k - 1, d1, c1 - (t == d1 && (x || d1)), d2, c2 - (t == d2 && (x || d2))))
      t++;
    c1 -= (t == d1 && (x || d1));
    c2 -= (t == d2 && (x || d2));
    x = x * 10 + t;
    k--;
  }
  return x;
}

********************************************************************************
*******************************************************************************/