/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4431
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

class CircleOrder {
public:
    string firstOrder(string circle);
};

string CircleOrder::firstOrder(string circle) {
    string ret;
    return ret;
}


int test0() {
    string circle = "BACacb";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "abc";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string circle = "ABCacb";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string circle = "XYxPyp";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "xyp";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string circle = "BDAdCacb";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "bdac";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string circle = "abBcCdDeEfghFGHA";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdehgf";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string circle = "BDdacAbC";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "bcad";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string circle = "acAC";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "ac";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string circle = "wXWBbx";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "bwx";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string circle = "cCdDeEFGfgHhIiJjKklLmnMNoOpPQqRr";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "cdefghijklnmopqr";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string circle = "CrcdDeEFGfgHhIiJjKklLmnMNoOpPQqR";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "defghijklnmopqrc";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string circle = "mnMNoOpPQqRCrcdDeEFGfgHhIiJjKklL";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "defghijklnmopqrc";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string circle = "aCbAcB";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string circle = "abCAcB";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "cab";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string circle = "DOGNAPHERZYLBCFIJKMQdognapherzylbcfijkmq";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "dognapherzylbcfijkmq";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string circle = "QOGNAPHERZYLBCFIJKMDqognapherzylbcfijkmd";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "dmkjifcblyzrehpangoq";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string circle = "DadAVvLl";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string circle = "ogGRUXsHDfqbuxAhOrBElwSWvaedLFQV";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string circle = "iGEecqVYCSdQPsgUpmuTMbBXvJjxyWItwD";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string circle = "uaKkEQftFNZRUqzTWwrOeonA";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string circle = "JpxUCruFQaloSjmiwGOtEAzZTPRIqeMfYLNyncHXhgsW";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string circle = "uPRJqBYfMeLQtdDlEhwkcsCVKUSmjrTzpNHyFnvWbZ";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string circle = "xTqKrGRtXEQekg";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string circle = "TmNPUjpqvnlBfVOioItZuWbQLARaJDMkFKrzcwdC";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string circle = "hmVlSsvLkMHK";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string circle = "yNkDWVZrBaKzpmGvbqJdYFQRPgjSiMufnsTUtwXxAI";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string circle = "cCdDeEfFgGiIjJmMoOqQrRtTuUvVwWxXyYzZ";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "cdefgijmoqrtuvwxyz";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string circle = "aAbBcCdDeEgGhHiIjJkKmMqQrRsStTuUwWyY";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdeghijkmqrstuwy";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string circle = "bBhHiIlLmMnNpPqQrRtTuUvVwWzZ";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "bhilmnpqrtuvwz";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string circle = "KGhJjgIkiqHQ";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string circle = "uvVPpU";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "puv";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string circle = "ucCFUf";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "cfu";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string circle = "zoWmAFZMaOgwfG";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string circle = "UuPAsapRtTSgrG";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string circle = "LqQOFolf";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string circle = "iFkpzPZIKf";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string circle = "gQhZHzGq";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string circle = "zVAaZv";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string circle = "QprJZjiYIfPFqzRy";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string circle = "qILRgzZQOGojJril";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string circle = "EoOIeWiAaw";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string circle = "jYyboOJmBM";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string circle = "cNCGng";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string circle = "vAOElopLVIePai";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string circle = "uHULhl";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string circle = "XrSWRUmswzMZxu";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "NONE";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string circle = "kKiI";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "ik";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string circle = "kdSsJKjD";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "jkds";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string circle = "JpjSPs";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "spj";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string circle = "uHULlh";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "luh";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string circle = "XYxPypAabcBCdDeE";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "acbdexyp";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string circle = "BACacb";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "abc";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string circle = "AaBbCcDdEeFfGgHhJjKkLlPpOoIiUuYyTtRrWwQqZzXxVvNnMm";
    CircleOrder* pObj = new CircleOrder();
    clock_t start = clock();
    string result = pObj->firstOrder(circle);
    clock_t end = clock();
    delete pObj;
    string expected = "abcdefghijklmnopqrtuvwxyz";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=21632018&rd=9821&pm=4431
********************************************************************************
#include <string>
#include <vector>
#include <sstream>
#include <cmath>
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cstdio>
 
using namespace std;
 
class CircleOrder
{
public:
  int pos( string a, int i )
  {
    int j;
    
    for (j = (i + 1) % a.length(); i != j && a[j] != a[i] - 'a' + 'A'; j = (j + 1) % a.length())
      if ('a' <= a[j] && a[j] <= 'z' && i != j)
        break;
    if (a[j] == a[i] - 'a' + 'A')
      return 1;
    for (j = (i + a.length() - 1) % a.length(); i != j && a[j] != a[i] - 'a' + 'A'; j = (j + a.length() - 1) % a.length())
      if ('a' <= a[j] && a[j] <= 'z')
        break;
    return a[j] == a[i] - 'a' + 'A';
  };
  int get( string s, char t )
  {
    for (int i = 0; i < s.length(); i++)
      if (s[i] == t - 'a' + 'A')
        return i;
    return -1;
  };
  string firstOrder( string s )
  {
    string ans;
    int i, j, k, l, n;
    
    n = s.length();
    for (i = 0; i < n / 2; i++)
    {
      for (j = 0, k = -1; j < n; j++)
        if ('a' <= s[j] && s[j] <= 'z' && (k == -1 || s[k] > s[j]))
          if (pos(s, j))
            k = j;
      if (k == -1)
        return "NONE";
      ans += s[k];
      l = get(s, s[k]);
      s[l] = s[k], s[k] = '#';
    }
    return ans;
  };
};

********************************************************************************
*******************************************************************************/