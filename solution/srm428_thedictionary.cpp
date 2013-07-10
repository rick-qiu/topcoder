/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10183
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

class TheDictionary {
public:
    string find(int n, int m, int k);
};

string TheDictionary::find(int n, int m, int k) {
    string ret;
    return ret;
}


int test0() {
    int n = 2;
    int m = 2;
    int k = 2;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "azaz";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int n = 2;
    int m = 2;
    int k = 6;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "zzaa";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int n = 10;
    int m = 10;
    int k = 1000000000;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int n = 7;
    int m = 4;
    int k = 47;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaazazaazaz";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int n = 100;
    int m = 100;
    int k = 1000000000;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzzzzzzzzzzzzzazzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzazzzzzazzzzzzzzzzzzazzzz";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int n = 1;
    int m = 100;
    int k = 100;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzaz";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int n = 1;
    int m = 100;
    int k = 101;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "zzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzza";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int n = 100;
    int m = 1;
    int k = 102;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int n = 100;
    int m = 1;
    int k = 1000000000;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int n = 10;
    int m = 10;
    int k = 184756;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "zzzzzzzzzzaaaaaaaaaa";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int n = 48;
    int m = 1;
    int k = 301413357;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
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
    int n = 25;
    int m = 69;
    int k = 160567226;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaazzzzzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzazazzzzzazzzzzzzzazzazzzzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int n = 88;
    int m = 52;
    int k = 35766291;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzzzzzzzzzzzzzzzazzzzzzzzazzzzzzzazzzzzzzaazzazzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int n = 73;
    int m = 65;
    int k = 597007;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzzzzzzzzzzzzzzzzazzazzzzzzzzzzzzzzzzzzzzzzzazazzzzzzzzzzzzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int n = 45;
    int m = 37;
    int k = 392289611;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazazzzzzzzzzzzzzzzzzzzzazzzzzzzzaazaazaazzzzzza";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int n = 23;
    int m = 99;
    int k = 37215529;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaazzzzzzzzzzazazzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int n = 34;
    int m = 91;
    int k = 683447134;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaazzzzzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzazzzzzzzzazzazzzzzzzzzzzzazzzzzzz";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int n = 27;
    int m = 73;
    int k = 116752252;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaazzzzzzazzzzzzzzzzzzzazazzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazazzzz";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int n = 5;
    int m = 69;
    int k = 69909135;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int n = 84;
    int m = 44;
    int k = 21417563;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazazzzazzzzzzzzzzazzazzzzzzazzzzzzazzzzazzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int n = 96;
    int m = 99;
    int k = 901413353;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzzzzzzzzzzzzazzazazzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazzzazz";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int n = 96;
    int m = 90;
    int k = 960567224;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazaazzzzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzzzazzzzzzzzzazzzzzzzzzzazzzzzzzzzzzzzzzzazzzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int n = 97;
    int m = 99;
    int k = 935766290;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzaazzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzaazzzzzzzzzzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int n = 97;
    int m = 95;
    int k = 900597006;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzzzzzzzzzzzzzzzzzazzzzzzzazzzzzzzzzzzzzzazzzzzzzzzzzazazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazzzzzzz";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int n = 99;
    int m = 97;
    int k = 992289607;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzzzzzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazaazzzzzzaazzzzzzzzzzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int n = 7;
    int m = 91;
    int k = 413056;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaazzzazzzzzzazzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int n = 7;
    int m = 99;
    int k = 567066;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaazzzazzzzzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int n = 8;
    int m = 92;
    int k = 766256;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaazzzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazzzazzzzzzazzzz";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int n = 17;
    int m = 25;
    int k = 999999999;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaazazzzzzzzazaazazazazzzzzaazzazzzazzza";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int n = 14;
    int m = 1;
    int k = 1000000000;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
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
    int n = 17;
    int m = 4;
    int k = 999999999;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int n = 100;
    int m = 100;
    int k = 1;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int n = 85;
    int m = 77;
    int k = 1000000000;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzazzzzzzzzzzzzzzzzzzzzazzzzzzzzzzazazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazzazzzaz";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int n = 99;
    int m = 99;
    int k = 999998758;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzzzzzzzzzzzzzzazzzzzzazzzzzzzzzzzazzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazzazzzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int n = 99;
    int m = 99;
    int k = 9765877;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzazzzzzzzazzzzzzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzazzzzzzzz";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int n = 100;
    int m = 100;
    int k = 999996565;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzzzzzzzzzzzzzazzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazzzzzzzzzzzzzazzzazzzzzzzzzzzzzzzzzzzazzzzzzzz";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int n = 100;
    int m = 100;
    int k = 10000;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazzzzzzzzazzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int n = 100;
    int m = 50;
    int k = 1000000000;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzzzazzzzzzzzzzazzazzzzzzaazzzzzzzzzzzzzaazzzzzzazzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int n = 100;
    int m = 100;
    int k = 999999999;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzzzzzzzzzzzzzazzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzazzzzzazzzzzzzzzzzazzzzz";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int n = 79;
    int m = 98;
    int k = 12345678;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzzaazzzzzzzzzzzzzzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzazzzzzzz";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int n = 100;
    int m = 100;
    int k = 9987678;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzazzzzzzazzzzzzzzzzazzzzzzzzzzzzzazzzzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int n = 100;
    int m = 100;
    int k = 100100100;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazaazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazzzazzz";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int n = 97;
    int m = 98;
    int k = 575111539;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzzzzzzazzzzzzzzzzzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzazzzzzzzzzzzzazzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzazz";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int n = 100;
    int m = 100;
    int k = 10000000;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzazzzzzzazzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazzzzzzzzazzzzzz";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int n = 100;
    int m = 100;
    int k = 1000000;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzzzzzazzzazzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int n = 99;
    int m = 99;
    int k = 100000001;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazazazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzazzzzzaazzzzzzzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int n = 100;
    int m = 100;
    int k = 100000000;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazaazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzza";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int n = 50;
    int m = 50;
    int k = 100000000;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzzazzzzzzazzzazzzzzzzzzzzzazzzzzzzazazazzzzzzzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int n = 100;
    int m = 100;
    int k = 10000001;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzazzzzzzazzzzzzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzazzzzzzzzzazzzzz";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int n = 99;
    int m = 99;
    int k = 999999999;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzzzzzzzzzzzzzzazzzzzzazzzzzzzzzzzazzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzazzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int n = 99;
    int m = 99;
    int k = 1000000000;
    TheDictionary* pObj = new TheDictionary();
    clock_t start = clock();
    string result = pObj->find(n, m, k);
    clock_t end = clock();
    delete pObj;
    string expected = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaazzzzzzzzzzzzzzzazzzzzzazzzzzzzzzzzazzzzzzzzzazzzzzzzzzzzzzzzzzzzzzzzazzzzazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22697421&rd=13519&pm=10183
********************************************************************************
#include<stdio.h> 
#include<vector> 
#include<cmath> 
#include<map> 
#include<cstdlib> 
#include<iostream> 
#include<sstream> 
#include<string> 
#include<algorithm> 
#include<cstring> 
#include<cstdio> 
#include<list> 
#include<set> 
#include<stack> 
#include<bitset> 
#include<functional> 
#include<cstdlib> 
#include<ctime> 
using namespace std; 
 
int kei(int a, int b, long long lim){ 
  long long ret=1;int i; 
  if(b*2>a) b=a-b; 
  for(i=0;i<b;i++){ 
    ret*=(a-i);ret/=(i+1);if(ret>=lim) return -1; 
  } 
  if(ret>=lim) return -1; 
  return (int)ret; 
} 
 
class TheDictionary{ 
  public: 
  string TheDictionary::find(int a, int z, int k){ 
    string out="";int n=a+z, i, s; 
     
    s=kei(a+z,a,(long long)k);if(s!=-1) return out; 
    for(i=0;i<n;i++){ 
      if(a==0 || z==0) break; 
      s=kei(a-1+z, a-1, (long long)k); 
      if(s==-1){ 
        out+='a';a--; 
      } 
      else{ 
        k-=s;out+='z';z--; 
      } 
    } 
    for(i=0;i<a;i++) out+='a';for(i=0;i<z;i++) out+='z'; 
    return out; 
  } 
};

********************************************************************************
*******************************************************************************/