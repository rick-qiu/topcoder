/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4717
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

class PatternOptimizer {
public:
    string optimize(string pattern);
};

string PatternOptimizer::optimize(string pattern) {
    string ret;
    return ret;
}


int test0() {
    string pattern = "*??*a";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*??a";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string pattern = "*b**a*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*b*a*";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string pattern = "cla??";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "cla??";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string pattern = "*?*?*?*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*???";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string pattern = "T***nd?*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "T*nd*?";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string pattern = "????*???*caa??aaa*a*babc**?*b*?";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*???????caa??aaa*a*babc*?b*?";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string pattern = "a";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "a";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string pattern = "?*c";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*?c";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string pattern = "aa*a?*aa*a*a?b?*a*?*caaa";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "aa*a*?aa*a*a?b*?a*?caaa";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string pattern = "*ac??a**b***c";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*ac??a*b*c";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string pattern = "a*?c**a*bc?a?a*c?a?ab";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "a*?c*a*bc?a?a*c?a?ab";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string pattern = "?c?*aac*a????aa??*?*a**?b*ca*a*ca***c?**a?cca";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "?c*?aac*a????aa*???a*?b*ca*a*ca*c*?a?cca";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string pattern = "?";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "?";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string pattern = "*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string pattern = "*baa?*a?b????a*a?*?";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*baa*?a?b????a*a*??";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string pattern = "*b?a?*?*???**c*c??*a?a?*??**aa?*?a*c??a??a";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*b?a*?????c*c*??a?a*???aa*??a*c??a??a";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string pattern = "?ba**?b??a?c??aa*a*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "?ba*?b??a?c??aa*a*";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string pattern = "a*?****?a*??a?a????a**?aa*?*a**??aa***??";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "a*??a*??a?a????a*?aa*?a*??aa*??";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string pattern = "a*?*???b?*??a?a*?*?c?aa*???*?a?*?aa";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "a*????b*???a?a*??c?aa*????a*??aa";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string pattern = "a*?aaaa*aa?a*a*c**?*a??*?*a?*???b**a*a*?***?*?*a?";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "a*?aaaa*aa?a*a*c*?a*???a*????b*a*a*???a?";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string pattern = "**a**??*a**???**??*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*a*??a*?????";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string pattern = "*???a***a?a";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*???a*a?a";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string pattern = "c?*?a**?b?*a*?*a??*aaa**??a**a?a";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "c*??a*?b*?a*?a*??aaa*??a*a?a";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string pattern = "ac?c*?*a*??**a?*?*???a";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "ac?c*?a*??a*?????a";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string pattern = "a?**?b***?*?**b****?b?*****a??**??**";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "a*??b*??b*?b*?a*????";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string pattern = "a**a*?*****?*?*??*??**?***?a*?***a***?**?a*????*?";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "a*a*?????????a*?a*??a*?????";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string pattern = "???**??**?";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*??????";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string pattern = "**?a***?**???**?**?*******?a";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*?a*???????a";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string pattern = "??**?*a?*??***??a??*???";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*???a*?????a*?????";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string pattern = "*??*???*???**?*?*?*?**?*****?aaa?***a**?*?*??";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*??????????????aaa*?a*????";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string pattern = "*?*a*a?a?**????a**??*??*???aa??*?**";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*?a*a?a*?????a*???????aa*???";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string pattern = "a?a???*?????**aa?*a?*??**a???";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "a?a*????????aa*?a*???a???";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string pattern = "a*??*a?*?*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "a*??a*??";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string pattern = "*?a?*****?*a??*?*??*?";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*?a*??a*??????";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string pattern = "***a?**a????aa**?????a*?****?a???*a**????****?****";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*a*?a????aa*?????a*??a*???a*?????";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string pattern = "*b*x*k?q*?*dkkbuuj?sjoa*aa*oro*?o*c?d*?waaw?t?y?ie";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*b*x*k?q*?dkkbuuj?sjoa*aa*oro*?o*c?d*?waaw?t?y?ie";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string pattern = "*aekldaun**eyz**???ighg?*oipmna*b?yeue**tas*e?iksd";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*aekldaun*eyz*???ighg*?oipmna*b?yeue*tas*e?iksd";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string pattern = "ycujo**fe*s*apfza?jaa*yca?oy*?yeqp?nwuuqocbssq*ges";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "ycujo*fe*s*apfza?jaa*yca?oy*?yeqp?nwuuqocbssq*ges";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string pattern = "?eyagg*wkade*a?hccbcambeaa?wc*?dyye?*k?icnc**?qhia";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "?eyagg*wkade*a?hccbcambeaa?wc*?dyye*?k?icnc*?qhia";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string pattern = "khv?a*q*squwaqzdq?dgu*ohqa*li?es?kqstyqedatk??akwa";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "khv?a*q*squwaqzdq?dgu*ohqa*li?es?kqstyqedatk??akwa";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string pattern = "efv?tqq**w*oasessac?hhli?yp?dasstioy*c*xr??tacsca?";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "efv?tqq*w*oasessac?hhli?yp?dasstioy*c*xr??tacsca?";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string pattern = "x*kyfo??uuzriw*va*?*gzq?axy**??*ucnwuen?y*lw*ii?cy";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "x*kyfo??uuzriw*va*?gzq?axy*??ucnwuen?y*lw*ii?cy";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string pattern = "a*t??z?mi?*zr*szijfe?u?igbmaynb*ko?a*zue?wnkw?pq*?";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "a*t??z?mi*?zr*szijfe?u?igbmaynb*ko?a*zue?wnkw?pq*?";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string pattern = "fk*iquk??*ofkhp*?uv?csacgfw?ax?b?ayzuqtym*faw*?sti";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "fk*iquk*??ofkhp*?uv?csacgfw?ax?b?ayzuqtym*faw*?sti";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string pattern = "gmn***ufcam*pm?*?a?cs?om*ix?iuizauv??amg?jas*?i*wy";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "gmn*ufcam*pm*??a?cs?om*ix?iuizauv??amg?jas*?i*wy";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string pattern = "icwyj?*??kvci?eqj?i?wzs??ag*q**?*aipj*?a*e*v*m*oga";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "icwyj*???kvci?eqj?i?wzs??ag*q*?aipj*?a*e*v*m*oga";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string pattern = "*??wowch*budeun?x?aa*e*ceu?sq?qztucaiegcq*myrwjrqm";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*??wowch*budeun?x?aa*e*ceu?sq?qztucaiegcq*myrwjrqm";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string pattern = "suysq*kuuhyumei??c*yytqma?w*gck***?*u?*xeys**a?*z*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "suysq*kuuhyumei??c*yytqma?w*gck*?u*?xeys*a*?z*";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string pattern = "??cesxq?*b?*ily*?*xlk**?oenirgsat*??xqcktw*?gqmxec";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "??cesxq*?b*?ily*?xlk*?oenirgsat*??xqcktw*?gqmxec";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string pattern = "*axa?xmmy?zcatwmyzv?tam???akc??eel*cws?lyy?*onar?n";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*axa?xmmy?zcatwmyzv?tam???akc??eel*cws?lyy*?onar?n";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string pattern = "c?uckxe*aqmb*?**geykc*ouwiccwo?smu?uama*?scytjuqtj";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "c?uckxe*aqmb*?geykc*ouwiccwo?smu?uama*?scytjuqtj";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string pattern = "??ofe**yf*?uo*qg?aqagze?oswud*ra*kmic?mmpgwomo*wla";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "??ofe*yf*?uo*qg?aqagze?oswud*ra*kmic?mmpgwomo*wla";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string pattern = "wk*vh?eu?*?mana?yqpauaa*y*rpt?ax?suz?*a?x?twnuwie?";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "wk*vh?eu*??mana?yqpauaa*y*rpt?ax?suz*?a?x?twnuwie?";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string pattern = "ucjayghnq??gyy?uvii?lpa*y?*eua*n??*cnynmdiioqy*bik";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "ucjayghnq??gyy?uvii?lpa*y*?eua*n*??cnynmdiioqy*bik";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string pattern = "gpc*k**?k?aeue*cc*a*psoaojst*s?wi?l?k?cwi?**ms?a*z";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "gpc*k*?k?aeue*cc*a*psoaojst*s?wi?l?k?cwi*?ms?a*z";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string pattern = "???xx?*xx?x?*xxx???**?x??*?*?*?xx***??**??**??x??*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "???xx*?xx?x*?xxx*????x*?????xx*??????x*??";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string pattern = "****?x?***??xx*x?**?*??xx?x?x??z*z*??*x?*x?*?**z?*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*?x*???xx*x*????xx?x?x??z*z*??x*?x*??z*?";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string pattern = "x?????z?xx?x**xx?*xyy*?*????xx*???**x???????*?y**?";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "x?????z?xx?x*xx*?xyy*?????xx*???x*????????y*?";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string pattern = "***xy?x*?yxx**?x****?x*?*?x***x?*??x**?xz??*??*?*x";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*xy?x*?yxx*?x*?x*??x*x*???x*?xz*?????x";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string pattern = "x?*?x*?x?**??xxy*?x?x?x?????x*?xxx??xz?*y*?*?*x*?*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "x*??x*?x*???xxy*?x?x?x?????x*?xxx??xz*?y*??x*?";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string pattern = "???**???***?*?***??*??*?***???**???***????????*??*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*?????????????????????????????";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string pattern = "?*?**??***??***???**???*?*??*?**??*????*?*???*????";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*??????????????????????????????";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string pattern = "????????*?*?*??*?****?***?***???**??***??**?*?????";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*????????????????????????????";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string pattern = "??**???*?****?*????***?*????**??***????????****?**";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*???????????????????????????";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string pattern = "??*?????***???**?????***???***??*??**??***?***????";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*?????????????????????????????";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string pattern = "***??*????*????**??*???*?????*?*??*?****?**?*?????";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*???????????????????????????????";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string pattern = "*?****?**??*??*?*?*???*?**??**?**??*?*?*****???**?";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*???????????????????????";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string pattern = "????*?**???*?*?*??????**???****?????*????****?*?*?";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*???????????????????????????????";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string pattern = "*????*???*?*???**???**?*?***???*?*????*??*??******";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*????????????????????????????";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string pattern = "?*?*?*???***?*??**?***??????????*??*?????*?*?***?*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*??????????????????????????????";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string pattern = "?*?*?*?*?*?*?*?*?*?*?*?*?*?*?*?*?*?*?*?*?*?*?*?*?*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*?????????????????????????";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string pattern = "*?*?*?*?*?*?*?*?*?*?*?*?*?*?*?*?*?*?*?*?*?*?*?*?*?";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*?????????????????????????";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string pattern = "?*?*?*?*?*?*?*?*?*?*?*?*z*?*?*?*?*?*?*?*?*?*?*?*?*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*????????????z*????????????";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string pattern = "*?*?*?*?*?*?*?*?*?*?*?*?z?*?*?*?*?*?*?*?*?*?*?*?*?";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*????????????z*?????????????";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string pattern = "**************************************************";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string pattern = "??????????????????????????????????????????????????";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "??????????????????????????????????????????????????";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string pattern = "?*************************************************";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*?";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string pattern = "?????????????????????????????????????????????????*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*?????????????????????????????????????????????????";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string pattern = "T*??*?";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "T*???";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string pattern = "T***nd?*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "T*nd*?";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string pattern = "cla?*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "cla*?";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string pattern = "??*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*??";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string pattern = "**";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string pattern = "?*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*?";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string pattern = "??****?ab?**?c**??ad*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*???ab*??c*??ad*";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string pattern = "????****";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*????";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string pattern = "A?*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "A*?";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string pattern = "x";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "x";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string pattern = "T***nd?*nd?*";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "T*nd*?nd*?";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string pattern = "*?";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*?";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string pattern = "**asg*??*?*?*?*?g**h????*?*?*p*?";
    PatternOptimizer* pObj = new PatternOptimizer();
    clock_t start = clock();
    string result = pObj->optimize(pattern);
    clock_t end = clock();
    delete pObj;
    string expected = "*asg*??????g*h*??????p*?";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=8002&pm=4717
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
#define FOREACH(it,c) for(typeof((c).begin()) it=(c).begin();it!=(c).end();++it)
template<class T> inline int size(const T&c) { return c.size(); }
 
struct PatternOptimizer {
 
  // MAIN
  string optimize(string pattern) {
    pattern += 'a';
    string res;
    int  q = 0;
    bool star = false;
    FOREACH(it,pattern) {
      char c = *it;
      if(c=='*') {
        star = true;
      } else if(c=='?') {
        ++q;
      } else {
        if(star) res+='*';
        REP(i,q) res+='?';
        res += c;
        star=false; q=0;
      }
    }
    return res.substr(0,size(res)-1);
  }
 
};
 
// Powered by FileEdit
 
// Powered by TomekAI
// Powered by TZTester 1.01 [25-Feb-2003]
 
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/