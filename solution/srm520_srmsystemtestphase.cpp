/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11511
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

class SRMSystemTestPhase {
public:
    int countWays(vector<string> description);
};

int SRMSystemTestPhase::countWays(vector<string> description) {
    int ret;
    return ret;
}


int test0() {
    vector<string> description = {"YYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> description = {"YNN", "NYN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> description = {"YNN", "NNN", "NNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> description = {"NNN", "NNN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> description = {"YYY", "YNY", "NYY", "YYN", "YYY", "YNN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 15176;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> description = {"YYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> description = {"NNN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> description = {"YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 467894583;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> description = {"NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN", "NNN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> description = {"NNN", "NYN", "NNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> description = {"NNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> description = {"YYY", "YYN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 148;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> description = {"YYY", "NNY", "YNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 229;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> description = {"NYY", "YYY", "NYY", "YYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 4464;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> description = {"NNY", "YNN", "YNN", "YNY", "NYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 114;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> description = {"NYN", "NNY", "YYN", "YNY", "YNY", "NYN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 224;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> description = {"NYN", "YYN", "YNY", "YNY", "YNY", "YNY", "YYN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 4713;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> description = {"NYN", "YNY", "YNY", "NNY", "YNN", "YYY", "YYN", "NNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 1052;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> description = {"YYN", "YNY", "NNY", "NNY", "YYY", "NYN", "NNY", "YYN", "YYN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 6448;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> description = {"NYN", "YNN", "NYN", "YYN", "YYY", "NYN", "YYY", "YNY", "YNY", "NNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 4672;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> description = {"YYN", "YNY", "YYY", "NYY", "NYN", "NYY", "NNY", "NYN", "YYY", "NYN", "YYN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 75482;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> description = {"YNY", "YYN", "NYN", "NNY", "NYY", "YNN", "YYY", "NYN", "YYY", "YYY", "YNN", "NYN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 32802;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> description = {"NYY", "YNY", "NNY", "YYN", "NYY", "NYY", "YYY", "YYY", "YYY", "YNN", "YYY", "YNY", "YYN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 10748994;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> description = {"YNN", "YYN", "YYN", "NYY", "NYN", "YYY", "YYY", "YYN", "NNY", "YYN", "YYY", "NYN", "NYN", "YYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 730174;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> description = {"YYY", "YYY", "NYN", "YNN", "YYY", "YYN", "YYN", "NNY", "YYN", "NNY", "YNY", "YNN", "YNY", "YNY", "YNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 3986209;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> description = {"YYY", "YNY", "NYY", "YNY", "NNY", "NNY", "YNN", "YNY", "NNY", "NYY", "NYY", "YNY", "YYN", "NYY", "NNY", "YYN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 2238832;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> description = {"NNY", "NYN", "NYN", "YYN", "YNN", "YNY", "YNN", "YYY", "YYN", "YYY", "YNN", "YNN", "YYN", "YYN", "YNN", "YNN", "NYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 115840;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> description = {"YYY", "YNY", "NYY", "YYN", "NNY", "YYY", "NYN", "NYN", "YNN", "NYN", "NYY", "YNY", "YNY", "YYY", "YYN", "NYN", "NNY", "YNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 7707040;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> description = {"YNN", "NYN", "NYN", "NYN", "YYY", "YNY", "NNY", "NNY", "YYY", "YNY", "YYY", "YNN", "NYN", "YYY", "NYY", "YNN", "NYY", "YNN", "NYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 605039;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> description = {"NYN", "YYY", "YYY", "YNN", "NYN", "NNY", "NYN", "YYN", "YNY", "NNY", "NYN", "NYY", "YNN", "YNY", "YYY", "YNN", "NYN", "YYY", "NYY", "NYN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 502040;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> description = {"YNN", "YNY", "YYY", "YNY", "YYN", "YYN", "YYY", "YYN", "YNY", "YNY", "YYN", "YNN", "NYY", "NNY", "YNY", "YYN", "YNN", "YYY", "NNY", "YNN", "YYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 145368672;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> description = {"YNN", "YYY", "YYY", "NYN", "YNY", "YNY", "NYY", "YNN", "YNN", "NNY", "YNN", "NNY", "YNN", "NNY", "YYY", "NNY", "NYY", "YYY", "NNY", "YYY", "YNY", "YYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 17117800;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> description = {"YYN", "NNY", "YNN", "NYY", "YYN", "YYN", "YYY", "NYY", "YNN", "YYN", "YNN", "YYN", "YNN", "NYN", "YNY", "NYY", "YYY", "YNY", "NYY", "NYY", "YNN", "YNY", "YNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 91100400;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> description = {"YNN", "NYY", "NYN", "YYN", "NNY", "NNY", "YNN", "NYN", "NYN", "NNY", "NYY", "YNN", "NYN", "NYN", "NYY", "NYY", "YYN", "NNY", "YNN", "NYY", "YNN", "YNY", "NYN", "YYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 288176;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> description = {"YNY", "NNY", "NYY", "YNN", "NNY", "NYN", "NNY", "YNN", "YNY", "YNY", "NYY", "YNN", "YNN", "NYY", "YYY", "NYN", "YNN", "YYN", "YYY", "YNN", "YYY", "NYN", "YYY", "YNY", "YYN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 21755289;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> description = {"NNY", "YYN", "YYY", "NYY", "YNN", "YNY", "NYN", "NYY", "YYN", "NYN", "YYN", "YYN", "YYN", "YNN", "YYY", "NYN", "NNY", "NNY", "NYN", "NYN", "YNY", "NNY", "NNY", "NNY", "NYN", "YNN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 982872;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> description = {"YNY", "YYN", "NYN", "YYN", "YYN", "YNN", "NYN", "YYN", "YNN", "NYY", "YNY", "NYN", "NNY", "YNY", "YYY", "NYY", "NYN", "YNN", "YNN", "NYN", "YYN", "YNY", "NYY", "YYN", "YNY", "YYN", "NYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 140330948;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> description = {"NYY", "NYY", "NNY", "NNY", "YYN", "NYN", "NYN", "NNY", "NNY", "NYN", "NNY", "YYN", "YYN", "YYN", "NYY", "YNN", "YNN", "NNY", "NYY", "YNN", "NNY", "YNN", "YYY", "YYN", "NNY", "NYN", "NYY", "YNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 3981027;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> description = {"YNY", "YNY", "YNN", "NNY", "YYY", "YYN", "YNN", "YYN", "YYN", "NYN", "YNN", "YNY", "NYY", "YYN", "YYY", "NYY", "YYY", "YNN", "YNN", "YNY", "NYY", "NNY", "NNY", "NYY", "YNY", "NNY", "YYY", "YYN", "YYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 562988566;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> description = {"YNN", "YYN", "NYN", "YNY", "NNY", "YYN", "YNY", "NYY", "NYN", "YYN", "NNY", "YNN", "YNY", "YNY", "NYN", "YYN", "NYY", "NYN", "YYN", "YNY", "NNY", "NYN", "YNY", "YNN", "YYY", "NYY", "NYY", "YNN", "NYN", "YNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 54646896;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> description = {"NNY", "NNY", "YYY", "YNN", "YYY", "NNY", "NNY", "YNN", "YNY", "NNY", "YNY", "YNY", "YNN", "NYN", "YYY", "NNY", "NNY", "NYY", "YNN", "NYY", "YYN", "NYY", "YNN", "YYY", "NYY", "YYY", "YYN", "NYY", "YYY", "NYN", "NYN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 255319452;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> description = {"YNN", "YYY", "YNN", "YNY", "YNN", "YNN", "YYN", "NYN", "YNY", "YYY", "YNY", "YNY", "YYN", "NYY", "NYY", "YYN", "NYY", "NYY", "YNY", "NNY", "YNN", "NNY", "NYY", "NNY", "NYN", "NNY", "YYY", "NYN", "YNY", "NYY", "YYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 652443293;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> description = {"NYN", "NNY", "NNY", "YNN", "YYN", "NYN", "YNY", "NYY", "YNN", "NYN", "YNY", "YYN", "NYN", "YNY", "YYN", "YYN", "YNN", "YNN", "YYY", "YYN", "YYY", "YYN", "NNY", "YYY", "YYN", "NYY", "YNY", "YNN", "NYY", "NYY", "NNY", "NYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 654583583;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> description = {"NNY", "NYY", "YNN", "YNY", "YYN", "YNN", "NYY", "YYN", "YNY", "YYN", "NYY", "NYN", "YYY", "NYN", "NNY", "YYY", "NYY", "YNY", "NYY", "YYY", "YNN", "NYN", "NNY", "NYY", "YNN", "YNY", "YNN", "YNY", "YNY", "NYY", "NYN", "NNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 563701168;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> description = {"YNN", "YYY", "YYN", "NYN", "YNY", "NYN", "YNN", "NYY", "YYY", "NYY", "YYY", "YNN", "YYY", "NNY", "YYN", "NYY", "NYN", "NYY", "NYN", "YYN", "NYY", "NYN", "NYN", "YNN", "YNN", "NNY", "NYN", "YNN", "NNY", "NYY", "NYN", "YNN", "NYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 75253040;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> description = {"NYN", "NNY", "YYN", "YNN", "YYN", "YNY", "YNN", "YYY", "YYN", "YNN", "YYN", "YNY", "NYY", "YYN", "NYY", "NYN", "YYN", "YNN", "YYN", "YNN", "NNY", "NYN", "YYY", "YNY", "YYN", "NNY", "YYY", "YNY", "YYY", "NNY", "YNY", "NYN", "YYN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 21883803;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> description = {"NNY", "NYY", "YYY", "YNN", "NYN", "YNY", "NNY", "YYN", "YYY", "YYN", "NNY", "YNN", "YNN", "YYN", "YNN", "YNN", "NNY", "NNY", "NYY", "YYY", "YYY", "YYN", "YYY", "NYY", "NNY", "NNY", "YYN", "NYY", "YYN", "YYN", "YYY", "NYN", "YNN", "YNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 989720572;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> description = {"NNY", "YNN", "YNY", "YNY", "YNY", "YYY", "YNN", "YYY", "NYN", "YNN", "NNY", "NYY", "YYN", "YYN", "YNY", "NNY", "NYY", "YYY", "NYY", "NYN", "YYN", "YNN", "YNN", "YNN", "NNY", "NYY", "YNY", "NYN", "NYN", "YNY", "YYY", "NYN", "YYN", "NYN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 394260264;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> description = {"YYY", "YNY", "YYN", "YYY", "NNY", "YYN", "YNY", "YNY", "NYY", "NNY", "YYN", "YNN", "YNN", "NNY", "YNY", "YYN", "NYN", "NYY", "NNY", "YNY", "NNY", "YYN", "YYN", "YYN", "NNY", "NNY", "NNY", "NNY", "YNY", "NNY", "NNY", "YNN", "YNY", "NYN", "YNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 291252230;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> description = {"NYN", "NNY", "NYN", "YNN", "YNY", "NYN", "YYY", "YNY", "NYN", "YYY", "YNY", "NYN", "NYY", "NNY", "NYN", "YNN", "YNN", "NNY", "YNY", "NYN", "NNY", "YNN", "YYY", "YNN", "YNN", "YNN", "YYN", "NYN", "YYN", "YNY", "YNY", "NYN", "YYN", "NYY", "NYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 51689893;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> description = {"NYY", "YYN", "YYY", "YNN", "NYY", "NYN", "YYY", "NNY", "YNN", "YNN", "YNY", "YNN", "YNY", "YNY", "NYY", "YNY", "NYN", "NYN", "YYY", "NYN", "NYN", "YYN", "NNY", "NYY", "YNY", "NNY", "YNN", "YNY", "YNY", "YYY", "YNN", "NNY", "NYY", "YNY", "YNY", "YNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 535025296;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> description = {"NYN", "YNY", "YNY", "NNY", "YYY", "NYN", "YYY", "YNN", "NYN", "NYY", "YYY", "YNN", "YNY", "YYY", "NYY", "YNY", "NYY", "YNY", "YYN", "NYY", "YYY", "YYY", "NYN", "YNN", "NNY", "NYN", "YYN", "YNN", "YYY", "NNY", "NYN", "NYN", "YYN", "YYY", "YYN", "NYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 642212796;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> description = {"YNN", "YNN", "NNY", "NYY", "YNY", "NYY", "NYY", "YNN", "NYN", "NYY", "YYN", "YNN", "YYN", "NYY", "NYY", "YYY", "YNY", "YYY", "YNY", "YYN", "YNN", "YNN", "NYN", "NNY", "YNY", "NNY", "YNN", "YYY", "YNY", "YYY", "YYY", "NYY", "NYN", "NYN", "YNY", "NYN", "NNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 367693696;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> description = {"NYY", "YYN", "NYY", "YNN", "YNN", "YNN", "YNN", "YNY", "YNN", "NYY", "NNY", "NNY", "NYY", "NYN", "NYN", "NYY", "NYN", "NNY", "YNY", "NYN", "YNN", "NNY", "YNN", "NYN", "YYY", "YYN", "NYN", "YYY", "NNY", "YNY", "YNY", "YYN", "NYN", "YYY", "NYY", "NYY", "NYN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 218693424;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> description = {"YYY", "YNY", "YYY", "YNY", "YNY", "NNY", "NNY", "YYN", "YYY", "YYY", "YYY", "NNY", "YNY", "NNY", "YYN", "YNN", "YYY", "NNY", "YNY", "NYN", "YNY", "YNN", "NYY", "YNY", "NYY", "YNN", "YNN", "NYY", "NYN", "YYY", "YYY", "YYY", "YYN", "YNN", "YNY", "NYN", "NNY", "NNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 72824262;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> description = {"YNY", "NYY", "NYN", "NNY", "YNN", "YYY", "YNN", "NYY", "YYN", "YNN", "NYY", "YNY", "YNY", "NNY", "NYN", "YYY", "NNY", "NYY", "NNY", "NYY", "YNY", "YYY", "YNY", "YYY", "YNN", "YNN", "YYY", "YYN", "YYY", "YNN", "NYY", "NYN", "NYY", "NYY", "NYY", "NYN", "YNN", "YYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 998000984;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> description = {"YNY", "YYN", "NYY", "NNY", "NYN", "YNN", "NYN", "NYN", "NYY", "YYN", "NYY", "NYY", "YYY", "NYY", "YNY", "YYN", "YNN", "YNN", "NNY", "YNY", "YNY", "YYY", "YNY", "YNN", "NNY", "YNN", "YYY", "YNN", "YNN", "YYY", "YNN", "YYN", "YYN", "YNN", "NYN", "YYY", "NYY", "NYY", "NNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 13018360;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> description = {"NYN", "NNY", "YNY", "NNY", "NYN", "YNY", "YNN", "YYN", "YNN", "NNY", "YYN", "YNN", "NYN", "YYY", "NYN", "YYN", "YNN", "YNY", "YYN", "YNY", "NYY", "NYY", "YYN", "NYN", "NNY", "NYN", "NNY", "YNY", "NYY", "YYN", "NYY", "NYY", "NNY", "YNN", "YYN", "YNY", "NYN", "YNN", "YYN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 724406468;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> description = {"NYY", "NNY", "NNY", "YNN", "NYY", "YYN", "YYY", "YNY", "YNY", "NNY", "NYY", "YYY", "YYY", "NNY", "YYY", "NYY", "YNY", "NYN", "YYN", "YYN", "YYN", "YNN", "YNN", "NYN", "YYN", "NYY", "NYN", "NYY", "NYY", "YYY", "NNY", "YNY", "NYY", "YYN", "YNN", "YYY", "YNN", "YNN", "YYN", "YYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 113871105;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> description = {"YYN", "YYN", "NYY", "YYY", "YYN", "NNY", "NYY", "YNY", "YNY", "NYY", "NYY", "YYY", "YYY", "YNY", "NYY", "YNY", "NYN", "NNY", "YNY", "NNY", "YYY", "YYY", "NNY", "NYN", "YYN", "NYY", "YNY", "YNN", "YYY", "NYN", "NYY", "NYY", "NNY", "NNY", "YNN", "NYY", "YYY", "NYN", "YYY", "YYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 601443392;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> description = {"NNY", "NYN", "YNN", "YNY", "YNY", "YNY", "YNY", "NNY", "NYY", "NYN", "YYN", "YYY", "NNY", "NYN", "YYY", "YNY", "YYY", "NNY", "YNN", "NYY", "YYN", "YYN", "YYN", "YYN", "YYY", "YNN", "YYY", "YNN", "NYY", "NYN", "YYY", "NNY", "YNN", "NYY", "YYY", "YNN", "NYY", "NNY", "NYY", "YYY", "YNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 348472998;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> description = {"YNN", "YYY", "YYY", "NNY", "NYN", "NNY", "NYY", "NNY", "YNY", "YNY", "YYN", "NYY", "YNY", "YNN", "YYN", "NYY", "NYN", "YNY", "YYN", "YYY", "YNN", "NYN", "NNY", "YYY", "NYY", "YYY", "YNY", "YYN", "NNY", "NYN", "NNY", "YYY", "YNN", "YNN", "NYY", "NYY", "YYY", "YNN", "YNY", "NNY", "NNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 478503885;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> description = {"YYY", "YYY", "NYY", "NYY", "NYY", "NYY", "YNY", "YNY", "YNN", "YYY", "NNY", "YYN", "NNY", "YNN", "YNN", "YYN", "NYN", "YNY", "NNY", "YYY", "NYY", "NNY", "YYY", "YNY", "YNY", "NYY", "NNY", "YYY", "YYY", "YNY", "YNY", "NYY", "NNY", "YYN", "YNY", "NNY", "YYY", "YNY", "YYY", "YYY", "NYN", "YNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 64903710;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> description = {"YNY", "NNY", "NYN", "YYY", "YYN", "NYN", "NYN", "YYY", "NNY", "NNY", "YYN", "YNY", "YYY", "YNY", "YNN", "YNN", "YNY", "YNN", "NYN", "NYY", "YNY", "YNN", "YNY", "NYN", "NNY", "YYN", "YYN", "YNN", "NNY", "YNY", "NYN", "NYY", "NYN", "YNY", "YNN", "NYN", "NYY", "YYN", "NYY", "NNY", "NYN", "YYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 797822771;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> description = {"NYY", "YYN", "NNY", "YNN", "NYY", "YNY", "NYN", "YYN", "YYY", "NYN", "NYY", "YNN", "NNY", "YNY", "YNY", "NNY", "NYN", "YNY", "NYN", "YNY", "NYN", "YNY", "YYY", "NYY", "NYY", "YNN", "NYN", "YYN", "NYY", "YYN", "YNN", "YNY", "YYY", "YNY", "NYN", "YYN", "YYN", "NYY", "NYN", "NNY", "YYN", "NYN", "YNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 339330038;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> description = {"NNY", "NYN", "NNY", "YYY", "YNY", "NYN", "YNY", "NYN", "NNY", "YYY", "NYY", "YYN", "NYN", "YYY", "YNN", "NYN", "NNY", "YYN", "YNY", "YYN", "NNY", "YYY", "YNY", "YNN", "YNY", "YYN", "YNN", "NNY", "NYY", "NYY", "NYY", "YYY", "NYN", "YYY", "YNY", "YNN", "YNY", "NNY", "NYY", "NYN", "NYN", "NNY", "NYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 420038780;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> description = {"YNN", "YYN", "YNY", "YNY", "NYN", "YYY", "NYY", "YYN", "YYN", "NNY", "NYY", "NYY", "YYN", "NNY", "YNN", "NNY", "YYY", "YNY", "NYY", "YNY", "NYY", "NNY", "YNY", "YYY", "NNY", "YNN", "NNY", "NYY", "YYY", "NNY", "NYY", "YYN", "YNY", "NNY", "NYY", "YNY", "YNY", "YYN", "NYY", "YNN", "YNY", "YYN", "YNY", "YNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 745409414;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> description = {"YNY", "NYN", "YNY", "YYY", "NYN", "NNY", "NYY", "YNN", "NNY", "YNY", "YYY", "YYN", "YYY", "YYY", "YYY", "NNY", "YYY", "NYY", "NNY", "YNN", "YYN", "YNN", "NYN", "YNN", "NNY", "NYN", "NYN", "NYN", "YNY", "YNN", "NYY", "NYN", "YYY", "NYY", "NNY", "YNY", "YNN", "YYY", "NYN", "YNN", "NYY", "NYN", "YYN", "NYN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 766793711;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> description = {"YYN", "YNN", "NYY", "YYN", "YNN", "YNY", "YYN", "YNN", "YNY", "YYN", "NNY", "NYN", "YNY", "NYY", "NYY", "YYN", "NYY", "YYN", "NYN", "NYN", "YYN", "NYN", "YYN", "YYN", "NNY", "NYN", "NNY", "YYN", "NYY", "YYY", "YYN", "NYN", "NNY", "YYY", "YYY", "NNY", "YYY", "YNY", "YNN", "YYY", "YNN", "YYY", "YYN", "YYN", "NYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 74500160;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> description = {"NYY", "YNN", "NYN", "NYY", "YYY", "NYY", "YYN", "NYY", "YYY", "NNY", "YYN", "YYN", "YYN", "YYN", "NYY", "NNY", "YYY", "YYN", "NNY", "YYY", "YNY", "YNN", "YYY", "YYN", "NNY", "YYY", "NYY", "YNN", "NNY", "YYY", "YYN", "YYN", "NNY", "NYN", "YYN", "YYN", "YNY", "YNY", "YYY", "YYY", "NYN", "NYN", "NYY", "YYN", "YYN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 575334562;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> description = {"NYY", "NYN", "YNN", "YNN", "NYY", "YYY", "NNY", "NNY", "NYN", "YYY", "YNN", "NYY", "YNN", "NYY", "YYY", "YNN", "NYY", "NYN", "YYN", "YYY", "NYN", "YYN", "YNY", "YNY", "NNY", "NNY", "NYY", "NYY", "NNY", "YYY", "YNY", "NYY", "YYY", "NYY", "YNN", "NYN", "YNY", "NNY", "YYN", "YNY", "NYN", "YNN", "YYN", "YYY", "YNN", "YYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 501399748;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> description = {"YNY", "YNY", "NYY", "YNY", "NYY", "YYN", "NYY", "NNY", "NNY", "YYN", "YNN", "YYY", "NYN", "YYN", "YYY", "YYY", "YNY", "NYN", "YNN", "YNY", "YNY", "NYN", "YNN", "NNY", "YYY", "NNY", "NNY", "NYY", "NYY", "NNY", "YNY", "YYN", "NYN", "YYY", "YYY", "NNY", "YYN", "NYY", "YYY", "YNY", "YYY", "YYN", "YYY", "NNY", "YYY", "NNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 616450754;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> description = {"YYY", "NYY", "YNN", "NYY", "YNY", "YYN", "YNN", "YNY", "NYY", "YYN", "NYN", "NNY", "YNY", "YNY", "NYN", "NNY", "YYY", "YNN", "NNY", "NYN", "NYN", "NNY", "NNY", "YYY", "YYY", "YYN", "YNN", "YYN", "NNY", "NYY", "NNY", "NNY", "YYN", "YNN", "YNY", "YNN", "YNY", "YYN", "NYY", "YYY", "NNY", "YYN", "NYN", "YNN", "NYY", "NYN", "NYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 899599447;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> description = {"NYY", "YNN", "NYY", "YYN", "NYY", "YYN", "YYY", "NYY", "YNN", "YNN", "YNN", "YYN", "YYY", "NYN", "YNY", "NYY", "YNY", "NYY", "YYY", "NYN", "NYY", "YYY", "YYN", "YYY", "NYN", "YNY", "YNY", "YNN", "NYY", "YNN", "YNY", "YNY", "YNN", "NYY", "NYY", "YNY", "YNN", "YYN", "YNN", "YYN", "NYN", "YNN", "YYY", "NYY", "YNY", "NNY", "NYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 442597237;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> description = {"YYN", "NYN", "YNN", "NYN", "YNN", "YYN", "YYY", "NYN", "YYN", "YYY", "YYY", "YNN", "YNN", "NNY", "YYN", "NNY", "YYY", "YYY", "YYN", "YNN", "NYN", "YYN", "NNY", "NNY", "NYY", "NYN", "YNY", "YYN", "NYN", "YYN", "YYY", "NYY", "NYN", "NNY", "YNY", "YNY", "NNY", "NYY", "YNY", "NYN", "NYY", "NYY", "YNY", "NNY", "YNN", "YYN", "NYN", "NNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 318202788;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> description = {"YNN", "NYN", "YNY", "NYN", "YYY", "NYN", "NNY", "YNN", "NYN", "YYY", "YYY", "YNN", "NYY", "YNN", "YNN", "NNY", "YNN", "YNN", "YYY", "YNN", "YYN", "NYN", "NNY", "YYN", "NYN", "YYN", "YYY", "YNY", "NYY", "YNN", "NYN", "NYN", "YYY", "YNY", "NNY", "NYN", "YYN", "YYN", "NYY", "YNY", "YYN", "YNY", "YYY", "NYY", "YYN", "NNY", "YYN", "YNN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 564766660;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> description = {"YYN", "YNN", "YYN", "YYN", "YNY", "YNY", "YNY", "YYN", "YNN", "NYN", "YNN", "YNY", "NNY", "YNN", "YYY", "NYN", "YYN", "YYN", "NYY", "YYN", "NYY", "NNY", "YYN", "NYN", "NYN", "YYY", "YNN", "NYN", "YNN", "YYY", "NYY", "YNN", "YNY", "NYY", "YNY", "YYY", "NNY", "YYN", "YYN", "YYY", "YNY", "NYN", "YYY", "NNY", "YYN", "NYY", "YNY", "YNY", "YYN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 553500915;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> description = {"YYY", "NNY", "NNY", "YYN", "YYY", "YYY", "NYN", "YNN", "NYY", "YNY", "NYY", "NYY", "NYN", "YYN", "NNY", "NYY", "YYN", "YYN", "YYY", "NYY", "YYY", "YNN", "YYN", "YYN", "NNY", "YNN", "NYN", "YNN", "YYY", "NYN", "NYY", "YNN", "NNY", "NYN", "YYY", "YYN", "YNN", "NYY", "YNY", "NYN", "NNY", "YYY", "NYY", "NYN", "NYY", "NYN", "YYY", "YYN", "NNY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 793587666;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> description = {"YNY", "NNY", "YNY", "YNY", "NYY", "YYN", "NYY", "NNY", "YNY", "YYN", "NNY", "YNY", "NYN", "NYY", "YYN", "YYY", "YYN", "YNY", "NNY", "YYY", "YYY", "NYN", "YYN", "NYN", "NYN", "YYN", "NYN", "YNN", "YNY", "YYN", "NYY", "YYY", "YNN", "YNY", "NNY", "NYY", "YNY", "YYY", "NYN", "NYN", "YYN", "YNN", "NNY", "YNN", "NYY", "YNN", "NYN", "YNY", "YNN", "NYN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 811657393;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> description = {"YNN", "NYN", "NYN", "YYN", "YYY", "YYY", "YYN", "NYN", "YYN", "YYY", "YYY", "YNN", "YYN", "NYY", "YYN", "NYN", "NYN", "NYY", "NNY", "YNY", "NYY", "NYN", "NYY", "YYN", "YNY", "NNY", "YYN", "YNY", "NYN", "NYN", "YYY", "YNY", "YNN", "NNY", "YYN", "YNN", "YNY", "YNN", "YNN", "NYY", "NYY", "YNN", "YYY", "YYY", "YNY", "YNY", "YNN", "YYN", "YNY", "YYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 582864695;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> description = {"NYY", "NNN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> description = {"YYY", "YNY", "NYY", "YYN", "YYY", "YNN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 15176;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> description = {"YNN", "NNN", "NYY", "NYN", "YNN", "NYN", "YYY", "YYY", "YNY", "YNN", "YYY", "YYN", "YYY", "YYN", "NYY", "NNN", "NNY", "NYN", "YNY", "YYN", "NNY", "NYN", "YYY", "YYN", "YYN", "NYY", "YNY", "YNY", "NNN", "YNY", "YNY", "NNN", "NYY", "NYN", "YYN", "NYY", "YNY", "YNY", "YYN", "NNN", "NNY", "YNY", "NYY", "NNN", "YNY", "YNN", "YYY", "YYN", "NNN", "NYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> description = {"YYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> description = {"YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY", "YYY"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 467894583;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> description = {"YNY", "NYN", "YNY", "YNY", "NNN", "NNN", "YNY", "YYY", "NYN", "YNY", "YNY", "YNY", "YNY", "NNN", "NNN", "NNN", "NYN", "NYN", "NYN", "NNY", "YNY", "NYN", "YNY", "NYN", "NYN", "YNY", "YYY", "NNN", "NNN", "NNN", "NYN", "NYN", "YNY", "NYY", "YNN", "YNY", "NNY", "NNN", "YYY", "NYN", "NYN", "NYY", "NYN", "NYN", "YNY", "NNY", "YNN", "YNN", "YNN"};
    SRMSystemTestPhase* pObj = new SRMSystemTestPhase();
    clock_t start = clock();
    int result = pObj->countWays(description);
    clock_t end = clock();
    delete pObj;
    int expected = 1995;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22718397&rd=14545&pm=11511
********************************************************************************
// Paste me into the FileEdit configuration dialog 
 
#include <cmath> 
#include <ctime> 
#include <iostream> 
#include <string> 
#include <vector> 
#include<set> 
#include<map> 
#include<list> 
#include<algorithm> 
#include<sstream> 
using namespace std; 
#define min(a,b) ((a)<(b)?(a):(b)) 
#define max(a,b) ((a)>(b)?(a):(b)) 
 
#define pb push_back 
#define all(a) a.begin(),a.end() 
#define inf (1<<29) 
#define MOD 1000000007 
 
int dp[55][10][10]; 
vector<string> des; 
int solve(int pos,int pass,int chal){ 
  if(pos == des.size()) 
    return 1; 
  int &ret = dp[pos][pass][chal]; 
  if(ret!=-1) return ret; 
  int i,j,k,sz[3]; 
  for(i = 0;i<3;i++){ 
    if(des[pos][i] == 'N') sz[i] = 1; 
    else sz[i] = 3; 
  } 
  ret = 0; 
  for(i = 0;i<sz[0];i++){ 
    int ps = 0, ch = 0; 
    if(des[pos][0]!='N'){ 
      if(i == 0) ps ++; 
      else if(i == 1) ch++; 
    } 
    for(j = 0;j<sz[1];j++){ 
      int psj = ps, chj = ch; 
      if(des[pos][1]!='N'){ 
        if(j == 0) psj ++; 
        else if(j == 1) chj++; 
      } 
      for(k = 0;k<sz[2];k++){ 
        int psk = psj, chk = chj; 
        if(des[pos][2]!='N'){ 
          if(k == 0) psk ++; 
          else if(k == 1) chk++; 
        } 
        if(psk>pass) continue; 
        if(psk == pass && chk<chal) continue; 
        ret+=solve(pos+1,psk,chk); 
        ret%=MOD; 
      } 
    } 
  } 
  return ret; 
} 
class SRMSystemTestPhase { 
public: 
   int countWays( vector <string> description ) { 
     des = description; 
     memset(dp,-1,sizeof(dp)); 
     return solve(0,4,0); 
   } 
}; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.15 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/