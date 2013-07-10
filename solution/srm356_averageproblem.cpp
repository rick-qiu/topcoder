/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7901
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

class AverageProblem {
public:
    int numberOfParticipants(vector<string> marks);
};

int AverageProblem::numberOfParticipants(vector<string> marks) {
    int ret;
    return ret;
}


int test0() {
    vector<string> marks = {"0.000"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> marks = {"0.500 0.250", "0.125"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> marks = {"0.500", "0.300"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> marks = {"0.500", "0.301"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> marks = {"0.001", "0.002"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 667;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> marks = {"10.000", "2.000 5.000"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> marks = {"9.000 2.000 5.000"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
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
    vector<string> marks = {"1.234 5.678", "9.876"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 252;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> marks = {"0.001", "0.002", "0.003", "0.004", "0.005", "0.006", "0.007", "0.008"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 889;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> marks = {"9.998 9.997 9.996 9.995 9.994 9.993 9.992 9.991"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 889;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> marks = {"5.155 8.890 5.310"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 174;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> marks = {"8.748 4.546 1.651"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 227;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> marks = {"1.742 4.557 4.490 9.003"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 314;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> marks = {"3.237 9.126 4.738 1.879 7.945"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 333;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> marks = {"7.751 6.444 3.915 1.483"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 153;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> marks = {"2.661 3.098", "2.047 0.010"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 275;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> marks = {"4.931 7.765 1.656 1.334"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 320;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> marks = {"6.810 2.757 9.955", "1.957"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 379;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> marks = {"3.406 1.198 7.056 6.371"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 423;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> marks = {"0.707 5.740 0.634", "3.947"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 304;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> marks = {"5.371 0.351 1.576 2.843"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 307;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> marks = {"4.639 7.450 3.419", "5.069 4.303 1.389 3.804", "0.149"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 577;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> marks = {"7.707 0.078 1.691 2.890", "2.899 1.834 6.816 7.733 1.196"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 687;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> marks = {"4.419", "9.733 5.635", "1.745 2.002", "1.906 8.927"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 472;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> marks = {"6.346 7.853", "9.300 5.561 2.586 6.201", "1.804 2.170 5.569 4.518", "1.363 0.582 2.002 2.504 1.810", "6.702"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 716;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> marks = {"8.887 3.425", "4.048 7.033 2.653 3.202 5.493", "9.520 1.923 3.265", "1.387 8.802 3.250", "1.257 8.925 0.566"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 780;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> marks = {"1.742 8.784", "3.387 1.405 3.948", "7.018 1.832 0.582 4.762", "8.193 9.614", "1.677 9.983", "4.110 8.978"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 776;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> marks = {"8.554 4.798 5.924 4.046 6.894 4.779", "9.073 0.512 5.776 6.128 0.690", "0.647 0.753 0.967 6.114", "0.902 5.784 7.601 0.931 2.623", "2.080 8.521 9.448 8.144", "6.336"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 859;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> marks = {"2.623 8.492", "1.460 0.146 0.720 1.313", "3.376 7.181", "2.649 7.039", "7.733 6.750", "4.218 1.046", "1.957 9.674 4.282 0.847 2.360 9.012 6.381", "7.552 6.885"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 804;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> marks = {"4.052 8.338 4.596 7.410 8.642", "6.778 4.860", "2.273 0.182 0.121 7.742 6.375", "3.160 3.802 4.840 0.561", "2.663", "0.426 3.139 9.284 8.982 6.669 8.511", "5.861"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 760;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> marks = {"8.692 3.262", "9.868 5.091 1.596 0.963", "0.492 3.370 9.998 0.203", "0.045 5.402 2.649 0.501", "8.734 9.206 2.911", "0.172 2.283 0.062", "7.079 1.194 1.263 1.462", "7.478 7.540 1.298", "9.491 3.953", "2.483 3.500"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 790;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> marks = {"6.466 0.205 1.641 1.317", "0.217 0.133 0.593 0.930", "9.538 0.847 2.435 1.226", "3.532 8.158 3.174 5.279 9.609", "6.244 8.280 4.703 9.854 9.493", "1.189 4.653 4.568 5.013 3.295", "0.582 5.536 1.101", "9.154 0.887 0.716"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 809;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> marks = {"2.674 0.832 2.378 0.425", "5.129 8.815 1.057 7.987", "7.037 1.332 5.490 6.650 1.170", "7.004 0.922", "1.122 2.716 3.158 7.351 7.911 8.621", "9.839 2.389 3.579 5.961", "3.412 3.627 6.942", "3.192 0.765 1.246", "2.038"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 856;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> marks = {"6.082 0.778 0.961", "3.186 3.754 1.536 7.609 4.418", "0.992 2.394 9.012 8.694", "9.664 1.039 9.094 2.122 1.951 6.790 4.438", "8.140 4.465 0.719 7.122", "0.024 5.119 6.919 8.085 1.270", "2.370 2.994 1.172", "9.496 9.297", "1.959 4.230", "6.950 2.458 9.260 0.053", "8.378"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 932;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> marks = {"8.149 9.675 5.794", "0.075 8.752 5.358 8.843 6.411", "8.659 6.443 1.121", "9.990 6.842", "5.217 9.925 2.835 5.202 6.379", "5.148 3.059", "0.697 3.173 7.175 1.768", "2.834 6.255 9.168 2.518", "5.467 2.577 1.473 9.499 8.773", "1.238 6.993 1.812 7.199 1.758", "9.264 6.184"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 939;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> marks = {"1.333 0.776 7.961", "2.546 8.457 1.951", "1.473 6.600", "1.849 7.577 5.229 7.173", "4.844 7.069", "4.299 6.909 2.251", "3.982", "8.976 8.842 1.361", "9.960 7.594 3.436", "7.187 0.062 2.913 0.852", "0.460 2.612 3.421", "5.766 7.752 3.352 1.873 8.985 3.987", "3.830"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 909;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> marks = {"9.663 2.638 4.111 6.332 3.725 6.188", "4.840 0.358 4.164 7.103 1.215", "4.248 6.902 9.060 2.105 0.224", "8.454 3.136 9.211 9.647 3.844 8.798", "1.888 1.236 8.843 6.688", "0.621 2.253 5.515 7.040 6.935", "9.947 0.298", "4.653", "9.782 3.830 8.356 8.332", "0.322 2.954"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 900;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> marks = {"2.479 6.433 3.495", "5.686 4.886 8.013 6.388 3.480", "4.691 3.642", "5.972 3.675 8.979 5.205 2.324", "4.525 0.949 8.161 5.852", "7.964 1.011 3.625", "5.514 7.124 4.233", "3.343 3.360 7.956 5.597", "2.605 2.876 0.989", "1.700 9.752", "5.951 0.044 7.423 5.744 6.851 8.616"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 934;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> marks = {"6.195 0.114 5.765 4.493 7.183", "5.456 7.753 2.001", "0.644 8.554 2.597 1.881 2.065", "0.886 5.461 1.105", "4.959 2.011 3.350 2.448 6.031 7.692", "0.373 4.365 9.326 2.376", "8.494 9.892 2.067 3.112 1.818 0.029", "3.488 6.562 1.641", "0.632 1.260 2.315 8.349 2.200 3.101"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 887;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> marks = {"7.056 8.970 6.288 2.815", "1.823 1.217 6.034 0.139", "8.105 7.131 1.555", "9.451 2.136 9.913", "6.341 8.987 0.749 3.365", "1.592 9.643 7.041 7.743 7.213 8.027 1.167", "1.178", "6.551 3.304 2.543", "0.360 0.136 4.156 0.556", "7.908 4.534 9.778 2.517", "5.145 8.678 6.602"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 906;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> marks = {"6.131 3.204 3.242 1.650", "6.969 0.403", "6.099 5.006 8.325 0.009 6.654 2.190 8.563", "8.365 0.289 7.855 4.380", "2.073 7.813", "4.892 5.590 4.318", "8.390 1.774 7.462", "9.008 8.662 0.968 0.442 1.426 5.961", "6.990 1.101 0.946 5.942", "2.159 3.808 6.325 2.676 0.612 2.896"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 915;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> marks = {"6.131 3.204 3.242 1.650", "6.969 0.403", "6.099 5.006 8.325 0.009 6.654 2.190 8.563", "8.365 0.289 7.855 4.380", "2.073 7.813", "4.892 5.590 4.318", "8.390 1.774 7.462", "9.008 8.662 0.968 0.442 1.426 5.961", "6.990 10.000 0.946 5.942", "2.159 3.808 6.325 2.676 0.612 2.896"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 915;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> marks = {"7.056", "8.970", "6.288", "2.815", "7.666", "1.823", "1.217", "6.034", "0.139", "4.411", "8.105", "7.131", "1.555", "7.508", "9.451", "2.136", "9.913", "5.834", "6.341", "8.987", "0.749", "3.365", "3.508", "1.592", "9.643", "7.041", "7.743", "7.213", "8.027", "1.167", "2.380", "1.178", "9.264", "6.551", "3.304", "2.543", "4.840", "0.360", "0.136", "4.156", "0.556", "7.568", "7.908", "4.534", "9.778", "2.517", "3.282", "5.145", "8.678", "6.602"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 930;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> marks = {"6.131", "3.204", "3.242", "1.650", "2.000", "6.969", "0.403", "1.442", "6.099", "5.006", "8.325", "0.009", "6.654", "2.190", "8.563", "8.742", "8.365", "0.289", "7.855", "4.380", "6.119", "2.073", "7.813", "1.156", "4.892", "5.590", "4.318", "3.371", "8.390", "1.774", "7.462", "0.768", "9.008", "8.662", "0.968", "0.442", "1.426", "5.961", "3.717", "6.990", "1.101", "0.946", "5.942", "9.625", "2.159", "3.808", "6.325", "2.676", "0.612", "2.896"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 928;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> marks = {"2.897 7.122 2.319 1.261", "7.541 8.055", "7.232 6.168 5.903 0.920", "5.740 7.832 6.876", "4.478 2.551 5.623 7.007 1.922", "2.172 7.609 9.338", "2.950 4.964 1.855", "7.027", "0.327 1.372 1.020 5.218", "6.431 7.548", "1.458 0.592 2.176 4.205", "1.489 2.987 2.612", "2.834 1.946 5.292 0.285", "2.017 8.675 2.004 1.647", "5.354 2.282 3.030", "4.242"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 933;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> marks = {"0.936 1.326 0.320", "5.130 8.827 5.663 4.321 2.901", "3.301 5.139 8.336 0.436 5.747", "7.420 1.243 2.682 3.710", "3.623 1.942", "1.946 5.238 7.001 4.490 5.789", "9.406 5.719 6.721 9.782 0.095", "2.361 6.783", "7.280 4.252 8.022 0.013", "8.765 0.065", "7.051 0.286 1.513", "9.438 8.842 4.983", "6.420 2.823 7.101 1.066", "5.569 9.249 9.047"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 934;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> marks = {"8.811 5.503 6.501", "5.212 3.575", "3.812 7.869 4.482 0.912 7.369 2.760", "1.049 1.958", "4.367 6.914 4.617 1.951", "5.384 1.392 5.704 8.151", "4.854 0.891 2.946 0.385", "9.830 6.472", "4.956 7.727 4.846", "4.664 4.756 5.095", "2.367 0.985 8.160 2.930", "0.333", "9.906 9.007 0.907 2.503 7.015", "4.797 7.993 9.614 9.690", "7.501 7.316 0.107"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 905;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> marks = {"8.676 7.377 3.242 7.647", "7.105 2.331 6.280 4.237", "5.957 5.360 3.081 4.560 8.720 2.299", "9.189 2.856 3.300 9.601", "0.325 1.668 5.988 8.530 2.294", "5.732 8.139 8.422 9.153 4.026 5.396", "7.370 6.294 9.349 1.989", "4.724 1.019 4.867 9.293 9.864", "2.645 4.775 2.343 4.290 4.500", "3.127 2.877", "6.993 3.856 5.846 7.689", "2.183"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 923;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> marks = {"2.141 3.072 3.053 1.704 0.305", "9.388 4.551 6.393 7.247 0.840 9.937", "3.282 6.479", "4.848 8.932 1.291", "4.117 4.854 6.518 6.127 2.547", "9.229 4.729 0.275", "8.209 3.426 3.442", "0.247 8.265 0.462 4.570", "9.706 6.051 0.880 5.282 1.498 9.364 7.419", "9.010 7.487", "6.150 6.893 0.313 4.482 9.097 5.868 7.282", "8.876 5.004 9.539"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 940;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> marks = {"3.030 7.832 6.168 1.946 7.007", "5.740 7.232 2.551 6.431", "0.285 2.612 7.027", "9.338 1.372 7.122", "2.834 4.205 1.458", "2.897 2.319"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 754;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> marks = {"2.682 0.436 9.249", "5.747 7.101", "1.066 4.252 8.842 0.013 6.783", "9.047 0.936", "5.789 1.513 4.490 2.901", "3.710", "7.001 1.326 4.983"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 722;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> marks = {"2.760 0.891 6.501", "7.993 4.482 9.830 9.690 0.985 1.951", "7.015 9.614 8.160 7.727 5.704 2.367", "7.869 7.501 1.049", "9.906 0.107"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 781;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> marks = {"4.867 1.989 9.864", "9.601 4.724", "8.720 7.370 5.957", "1.019 5.732 9.189 6.294 3.856", "2.343 6.280 5.360", "2.299 2.645 0.325 1.668"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 755;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> marks = {"9.706 7.247 3.053 8.932 3.442 6.051 6.127", "3.072 8.265 0.247", "4.848 4.570 0.880 0.275", "9.388 5.004 1.704 9.010", "4.729 6.479"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 839;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> marks = {"6.431 1.458", "7.027 2.897 2.551 1.946", "7.007 0.285", "9.338 1.372"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 508;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> marks = {"0.436 3.710 1.513", "4.252 1.326 4.983", "9.249 2.682 7.001 9.047"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 649;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> marks = {"2.760 9.906 7.993 0.891 5.704 10.000 1.049", "9.690 7.727 7.501"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 481;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> marks = {"1.668 4.867 9.864 7.370", "6.294 2.299 5.360 2.645", "2.343 0.325"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 618;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> marks = {"5.004 3.053 6.051", "4.729 0.880", "6.479 3.442 8.932 0.275 0.247"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 603;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> marks = {"1.458 2.551 6.431 7.007"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 399;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> marks = {"1.326 9.249", "7.001 4.983 1.513"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 530;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> marks = {"7.501 5.704 7.727 10.000 7.993", "9.830"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 301;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> marks = {"4.867 6.294 7.370 9.864", "2.299 0.325", "5.360"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 605;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> marks = {"6.051 0.880 5.004", "8.932 6.479 4.729 3.442", "0.275"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 603;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> marks = {"6.431 7.007"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 132;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> marks = {"1.513 9.249"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 253;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> marks = {"2.760 7.501"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 251;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> marks = {"2.299 7.370"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 127;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> marks = {"4.729 8.932"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> marks = {"10.000 10.000 10.000 10.000 10.000 10.000 10.000"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> marks = {"10.000"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> marks = {"0.001", "0.002 0.003"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 751;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> marks = {"9.999"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> marks = {"0.001 0.002 0.003", "10.000", "9.997 9.991", "0.169 5.123 7.867", "0.000 9.999"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> marks = {"0.641", "0.261", "1.211", "6.333", "1.835", "7.967", "3.379", "0.817", "8.593", "6.495", "5.443", "4.613", "5.633", "4.273", "1.183", "1.595", "3.809", "4.921", "7.149", "5.807", "1.327", "7.057", "4.173", "0.459", "6.607", "2.561", "9.219", "7.687", "0.107", "7.559", "0.153", "7.085", "9.195", "2.309", "8.249", "1.863", "2.959", "1.511", "3.723", "8.449", "4.903", "1.401", "1.281", "1.841", "4.827", "6.023", "4.977", "6.153", "6.205", "6.293"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 923;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> marks = {"6.974 1.488 9.475 7.681 5.538 2.085 9.098 8.876", "2.953 3.770 8.892 5.165 8.688 0.788 4.925 0.128", "6.527 6.919 5.687 6.158 4.146 3.844 3.647 4.172", "2.388 2.857 3.383 1.488 1.150 9.834 8.397 1.268", "1.111 2.532 0.158 9.881 9.624 1.165 5.982 1.891", "1.711 4.241 3.209 4.190 5.889 4.046 1.583 6.287"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 905;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> marks = {"0.123 0.915 0.315 0.667 0.666 0.125 0.347 0.859", "0.010 0.032 0.124 0.058 0.998 0.999 0.321 0.024", "0.064 0.058 0.461 0.014 0.015 0.009 0.111 0.112", "0.357 0.358 0.968 0.945 0.657 0.612 0.454 0.017"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> marks = {"0.302 6.729", "9.632 0.003", "1.637 9.265 3.742 3.458 0.017 6.872", "5.555 1.111 3.698 1.234 4.321 1.596 1.357 9.865"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 783;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> marks = {"0.500", "0.301 0.899", "0.898"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 657;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> marks = {"0.001", "0.002", "0.003"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 751;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> marks = {"0.001"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 501;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> marks = {"0.500 0.001"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 501;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> marks = {"0.500", "0.301", "0.609"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 146;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> marks = {"0.001 0.001 0.001 0.001 0.001", "0.001 0.031 0.001 0.001 0.001", "0.001 0.001 0.001 0.001 0.001", "0.021 0.001 0.001 0.001 0.001", "0.001 0.001 0.001 0.001 0.001", "0.001 0.001 0.001 0.001 0.001", "0.001 0.001 0.071 0.001 0.001", "0.001 0.001 0.901 0.001 0.001", "0.001 0.101 0.001 0.001 0.001", "0.001 0.001 0.001 0.401 0.001"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 570;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> marks = {"2.673 3.340 8.871 1.175 6.703 4.782 7.956 1.094", "3.386 9.296 8.883 0.158 6.599 6.619 5.351 5.897", "4.273 9.736 1.229 1.218 2.123 0.353 2.358 1.018", "3.224 7.807 9.564 1.054 5.392 4.614 6.871 8.569", "3.083 9.088 3.732 8.755 2.378 9.964 1.941 7.149", "2.605 0.726 4.892 8.690 4.710 5.272 9.731 0.328"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 941;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> marks = {"0.001 9.999"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> marks = {"0.500 0.250", "0.125"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> marks = {"1.500 1.125 10.000"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> marks = {"3.500 2.333 1.200 4.142 6.090 5.076"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 210;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> marks = {"0.390 0.486", "1.548 8.312"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 374;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> marks = {"10.000", "4.999", "0.007"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> marks = {"5.221 1.711 6.321 8.434", "5.611 8.122 8.332 10.000"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 523;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> marks = {"0.500 1.213 2.423 4.123 4.123 1.532 5.432 1.522", "0.500 1.213 2.423 4.123 4.123 1.532 5.432 1.522", "0.500 1.213 2.423 4.123 4.123 1.532 5.432 1.522", "0.500 1.213 2.423 4.123 4.123 1.532 5.432 1.522", "0.500 1.213 2.423 4.123 4.123 1.532 5.432 1.522", "0.500 1.213 2.423 4.123 4.123 1.532 5.432 1.522", "10.000 9.999"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> marks = {"10.000 7.999 2.123"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> marks = {"0.001", "0.003", "0.004", "0.007", "0.997", "0.991"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 801;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> marks = {"0.005", "0.004", "0.003", "0.007", "0.004", "0.002", "0.006", "0.005", "0.008", "0.002", "0.005", "0.008", "0.010", "0.000", "0.010", "0.002", "0.008", "0.007", "0.002", "0.001", "0.003", "0.000", "0.010", "0.009", "0.005", "0.007", "0.004", "0.003", "0.006", "0.009", "0.007", "0.004", "0.010", "0.009", "0.000", "0.009", "0.007", "0.005", "0.010", "0.006", "0.002", "0.008", "0.003", "0.002", "0.006", "0.007", "0.000", "0.008", "0.008", "0.000"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 910;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> marks = {"0.666 0.333 0.125 0.301"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 159;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> marks = {"0.235 0.733 0.864"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 221;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> marks = {"6.667", "6.666"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 503;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> marks = {"0.500", "0.301", "0.407", "0.517", "0.947"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 398;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> marks = {"10.000 9.106 1.004 2.000"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 206;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> marks = {"0.001", "9.998", "0.500", "5.000"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 501;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> marks = {"6.841", "0.728", "7.130", "2.154", "8.462", "1.672", "1.361", "6.950", "5.911", "3.379", "6.604", "8.669", "5.985", "0.823", "0.799", "8.469", "8.669", "7.197", "6.626", "3.241", "8.341", "6.948", "8.174", "0.917", "3.190", "8.971", "0.425", "6.817", "4.782", "5.227", "2.101", "3.108", "3.887", "9.817", "1.793", "7.604", "5.766", "1.935", "4.522", "6.696", "7.950", "6.357", "0.870", "1.910", "6.206", "8.853", "3.629", "4.131", "9.880", "5.645"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 936;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> marks = {"0.001", "0.500"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 501;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> marks = {"9.703 8.428 8.769 4.210 0.672 5.106 4.840 1.745", "1.126 1.518 2.356 4.739 8.767 6.838 9.023 6.298", "1.111 2.529", "7.525 6.020 4.434 1.876 0.474 7.526 8.885", "9.857 7.186 1.282 0.524 5.710 9.748 0.849 2.920", "2.050 0.997 2.564 2.849 4.491 9.040 7.559 7.792", "2.222"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 959;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> marks = {"7.932", "6.393", "7.143"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 328;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> marks = {"0.000 0.999"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> marks = {"0.204", "0.836", "0.348", "0.264", "0.205", "0.466", "0.215", "0.318", "0.365", "0.708", "0.778", "0.622", "0.596", "0.489", "0.884", "0.201", "0.790", "0.726", "0.137", "0.813", "0.013", "0.328", "0.436", "0.005", "0.155", "0.540", "0.063", "0.913", "0.890", "0.252", "0.514", "0.911", "0.655", "0.093", "0.032", "0.890", "0.844", "0.767", "0.528", "0.434", "0.742", "0.828", "0.122", "0.604", "0.294", "0.757", "0.088", "0.276", "0.476", "0.289"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 892;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> marks = {"10.000"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> marks = {"0.310"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> marks = {"0.001", "0.003", "0.007", "0.002", "10.000", "9.999", "9.998", "9.997", "5.765", "3.546", "2.645", "1.641"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> marks = {"0.123"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 65;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> marks = {"0.007", "0.112"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 133;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> marks = {"0.500 0.250 0.001 0.002", "0.125"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 667;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> marks = {"0.301 0.801 0.392 2.000 3.012 4.001 5.233", "8.204 9.047 5.204 6.777 0.000"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 548;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> marks = {"0.500", "0.301"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 106;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> marks = {"5.500 5.125 5.650 6.777"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 360;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> marks = {"0.351 0.251 0.898 0.286 0.832 0.322", "0.982 0.300 0.855 0.301"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 580;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> marks = {"0.500", "0.301", "9.001", "0.021 9.002 10.000"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 683;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> marks = {"0.123", "10.000", "9.123", "3.456", "4.001", "9.002", "5.002", "6.004", "0.003", "0.000", "0.005", "0.006", "0.007", "0.008 0.009 0.010 0.011 0.012 0.013 0.014", "0.015 0.016 0.017 0.018 0.019 0.020", "0.021 0.022 0.023 0.024 0.025 0.026 0.027 0.028", "0.030 0.031 0.032 0.033 0.034 0.035", "0.140 0.141 0.142", "0.234 0.345 0.234", "9.082 9.234 9.235"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 973;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> marks = {"0.500", "0.333", "0.200", "0.142", "0.090", "0.076", "0.058", "0.052", "0.043", "0.032", "0.032", "0.027", "0.024"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 683;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> marks = {"0.002 0.003 0.005 0.007 0.011 0.013 0.023", "0.019 0.017"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 751;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> marks = {"0.500 0.250 0.303 0.428 0.785", "0.500 0.013 0.987"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 574;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> marks = {"6.667", "6.666", "6.601"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 509;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> marks = {"0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.000", "0.001"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 501;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> marks = {"0.122 0.100 0.201", "0.301", "0.102"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 457;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> marks = {"10.000 10.000 10.000 10.000 10.000 4.345 3.456"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<string> marks = {"0.003", "0.007", "0.002", "10.000", "9.998", "9.997", "5.765", "3.546", "2.645", "1.641", "6.757"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 754;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<string> marks = {"0.500", "0.301", "0.008 0.990 0.887 3.333", "9.000 2.002 3.990 7.889 1.009 5.900", "3.888 4.999 5.002 6.898"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<string> marks = {"1.001", "0.002"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 667;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<string> marks = {"6.205 8.190 8.219 7.389 6.191 5.555 6.793 9.657", "7.672 8.307 0.539 4.807 0.956 2.224 4.937 3.265", "6.797 8.847 8.344 5.328 2.290 9.040 2.834 3.742", "8.209 6.085 2.707 2.928 7.297 7.177 1.419 3.305", "4.686 5.982 3.078 3.765 4.673 4.744 2.880 3.837", "5.995 9.658 9.013 5.962 8.272 6.652 6.854 3.497"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 929;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<string> marks = {"0.001", "9.998", "5.000", "0.500"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 501;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<string> marks = {"0.001", "0.002", "0.003", "0.004", "0.005", "0.006", "0.007", "0.008", "0.009", "0.010", "0.011", "0.012", "0.013", "0.014", "0.015", "0.016", "0.017", "0.018", "0.019", "0.020", "0.021", "0.022", "0.023", "0.024", "0.025", "0.026", "0.027", "0.028", "0.029", "0.030", "0.031", "0.032", "0.033", "0.034", "0.035", "0.036", "0.037", "0.038", "0.039", "0.040", "0.041", "0.042", "0.043", "0.044", "0.045", "0.046", "0.047", "0.048", "0.049", "0.050"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 981;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<string> marks = {"0.500 0.125"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<string> marks = {"0.333", "0.500"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<string> marks = {"6.151", "3.548", "5.180", "2.763", "5.550", "2.458", "3.430", "0.890", "7.680", "0.868", "1.542", "7.917", "4.710", "5.890", "8.758", "5.409", "8.327", "7.432", "8.775", "0.370", "1.410", "7.459", "7.147", "4.942", "5.833", "4.981", "5.492", "7.288", "3.194", "5.668", "7.821", "8.105", "1.103", "3.857", "4.285", "1.981", "4.768", "8.742", "7.694", "8.360", "8.170", "9.494", "8.585", "3.250", "4.110", "2.840", "5.310", "0.200", "1.283", "5.564"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 908;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<string> marks = {"0.123 0.377", "0.246"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 381;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<string> marks = {"0.333", "0.200", "0.142", "0.090", "0.076", "0.058", "0.052", "0.047", "0.043", "0.037", "0.034", "0.027", "0.020", "0.019"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 717;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<string> marks = {"0.001 0.500"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 501;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<string> marks = {"0.500", "0.001"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 501;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<string> marks = {"0.499"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 501;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<string> marks = {"0.333 0.999"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<string> marks = {"0.999"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<string> marks = {"10.000", "0.500", "1.000", "2.500"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<string> marks = {"0.333 0.834 0.166 0.000"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 503;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<string> marks = {"0.001 0.002 0.003 0.004 0.005 0.006", "0.007 0.011 0.012", "0.009 0.987 0.999 0.087"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<string> marks = {"10.000 10.000 10.000 10.000 10.000 4.345 3.456", "4.534 3.523 7.423 6.123 10.000 10.000 10.000", "3.432 4.532 5.234 7.424 9.000 10.000 1.099 6.666"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 747;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<string> marks = {"10.000 1.999"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<string> marks = {"0.130 0.187", "0.135"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 192;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<string> marks = {"0.500 0.301", "0.250"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<string> marks = {"0.500 0.125", "0.250"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<string> marks = {"0.127", "0.131", "0.137", "0.139", "0.149", "0.151", "0.157", "0.163", "0.167", "0.173", "0.179", "0.181", "0.191", "0.193", "0.197", "0.199", "0.211", "0.223", "0.227", "0.229", "0.233", "0.239", "0.241", "0.251", "0.257", "0.263", "0.269", "0.271", "0.277", "0.281", "0.283", "0.293", "0.307", "0.311", "0.313", "0.317", "0.331", "0.337", "0.347", "0.349", "0.353", "0.359", "0.367", "0.373", "0.379", "0.383", "0.389", "0.397", "0.401", "0.409"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 501;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<string> marks = {"0.301", "0.107"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<string> marks = {"0.234", "0.345", "0.456", "0.456 0.467 0.895", "0.111", "0.332", "0.238", "0.299", "0.001", "0.000"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 755;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<string> marks = {"9.999"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<string> marks = {"0.125", "0.300", "0.301"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 510;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<string> marks = {"0.001", "0.007", "0.002", "0.053", "0.057", "0.490"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 673;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<string> marks = {"5.224 3.715 7.367 4.642 4.264 6.154 7.961 9.542"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 549;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<string> marks = {"0.991"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 112;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<string> marks = {"0.001 0.333 9.999"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<string> marks = {"0.500", "0.301", "0.714"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 126;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<string> marks = {"0.011 0.035 0.082"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 85;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<string> marks = {"0.301 0.302"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 538;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<string> marks = {"0.001", "5.500", "0.333"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 501;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<string> marks = {"0.002", "0.003"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 751;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<string> marks = {"0.001 0.002", "0.003"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 751;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<string> marks = {"10.000 10.000 0.005"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 167;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<string> marks = {"0.001 0.003 0.004 0.007 0.997 0.991"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 801;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<string> marks = {"2.000"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<string> marks = {"0.004", "0.008", "0.012", "0.016", "0.128", "0.252", "0.256", "0.196", "0.192", "0.132", "0.020", "0.304", "0.316", "0.320", "0.324"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 250;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<string> marks = {"10.000 10.000 10.000 0.500"};
    AverageProblem* pObj = new AverageProblem();
    clock_t start = clock();
    int result = pObj->numberOfParticipants(marks);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=14970299&rd=10765&pm=7901
********************************************************************************
#include <algorithm> 
#include <bitset> 
#include <cassert> 
#include <cctype> 
#include <cmath> 
#include <complex> 
#include <cstdio> 
#include <cstdlib> 
#include <cstring> 
#include <ctime> 
#include <deque> 
#include <functional> 
#include <iostream> 
#include <iterator> 
#include <list> 
#include <map> 
#include <numeric> 
#include <queue> 
#include <set> 
#include <sstream> 
#include <stack> 
#include <string> 
#include <valarray> 
#include <vector> 
#include <utility> 
 
using namespace std; 
 
#define all(v) (v).begin(), (v).end() 
 
// Types 
typedef long double ld; 
typedef long long ll; 
typedef pair <int, int> pii; 
typedef vector <int> vi; 
typedef vector <pii> vp; 
typedef vector <ld> vd; 
typedef vector <string> vs; 
typedef vector <bool> vb; 
typedef queue <pii> qp; 
typedef map <string, int> msi; 
 
// Constants 
const int INF = 1000000000; 
const ld EPS = 1e-10L; 
const ld PI = 3.14159265358979L; 
 
class AverageProblem 
{ 
// Global 
 
// Functions 
public: 
  int numberOfParticipants(vector <string> s) 
  { 
    int res; 
    int n; 
    vi m; 
    for (int i = 0; i < s.size(); ++i) 
    { 
      istringstream in(s[i]); 
      double v; 
      while (in >> v) 
        m.push_back(v * 1000 + EPS); 
    } 
    n = m.size(); 
    for (int i = 1; i <= 1000; ++i) 
    { 
      set <int> g; 
      for (int j = 0; j <= i * 10; ++j) 
        g.insert(j * 1000 / i); 
      bool good = true; 
      for (int j = 0; j < m.size(); ++j) 
      { 
        if (g.find(m[j]) == g.end()) 
        { 
          good = false; 
          break; 
        } 
      } 
      if (good) 
        return i; 
    } 
    return res; 
  } 
   
 
}; 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/