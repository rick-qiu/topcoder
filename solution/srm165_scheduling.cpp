/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1879
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

class Scheduling {
public:
    int fastest(vector<string> dag);
};

int Scheduling::fastest(vector<string> dag) {
    int ret;
    return ret;
}


int test0() {
    vector<string> dag = {"3:", "2:", "4:", "7:0,1,2"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> dag = {"9:", "8:", "6:", "4:", "7:", "7:0,1,2,3,4", "3:2,3"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> dag = {"10:", "5:", "5:1", "5:1", "5:2,3"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> dag = {"1:", "5:0"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> dag = {"5:", "10:"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> dag = {"8:", "9:0", "8:0,1"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> dag = {"9:", "8:0", "7:0,1", "7:0,1,2"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 31;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> dag = {"2:", "2:", "8:1", "2:0,2", "1:0,1,2,3"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> dag = {"4:", "10:", "2:0", "8:2", "10:1"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> dag = {"4:", "10:0", "2:0,1", "2:1,2", "6:1,2,3", "9:1,2,3,4"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> dag = {"2:", "4:0", "6:0,1", "4:0,1,2", "7:0,1,2,3", "3:0,1,2,3,4"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> dag = {"7:", "5:", "3:0,1", "6:1", "8:0,1,2,3", "4:0,3,4", "3:2,3,4,5"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> dag = {"2:", "6:0", "4:", "4:0,2", "2:0,1,2,3", "8:0,1,2,4", "2:0,1,2,3,5", "4:0,1,2,3,4,5,6"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> dag = {"10:", "8:0", "10:1", "4:0,1,2", "8:0,1,2,3", "3:0,1,2,3", "6:0,4,5", "8:0,1,2,3,4,5,6"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> dag = {"2:", "10:0", "7:0,1", "4:0,2", "1:0,2,3", "8:0,1,2,3", "4:0,1,2,3,5", "8:0,1,2,4,5,6"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> dag = {"7:", "1:0", "9:", "4:1", "2:", "9:2,3", "9:2,3,4,5", "9:0,1,3", "8:2,3,4,5"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> dag = {"4:", "4:0", "3:", "10:1,2", "7:0,1,3", "9:2", "2:0,1,4", "6:0,6", "1:0,1,4,5,6"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> dag = {"1:", "1:", "4:1", "6:", "9:0,1,2", "2:0,1,4", "4:0,3,5", "5:0,1,2,4,5,6", "5:1,2,3,6,7"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> dag = {"10:", "7:0", "1:0", "8:1,2", "1:0,1,2", "2:0,2,3", "10:0,2,4", "2:1,3,4", "3:1,4,5,6,7", "4:1,2,5,6,7"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 33;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> dag = {"4:", "10:", "8:0,1", "6:1,2", "8:0,3", "10:0,1,2", "8:3,4", "6:0,1,4,5", "10:0,2,3,4,5,7", "2:1,2,4,5,6,7"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> dag = {"10:", "9:0", "9:0,1", "10:1,2", "9:0,1,2,3", "9:0,1,3,4", "5:1,2,3,4,5", "10:0,1,2,3,4,5,6", "5:0,2,3,5,6,7", "9:0,1,3,6,7"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> dag = {"7:", "6:0", "2:0,1", "1:1,2", "5:1,2,3", "5:0,1,2,3,4", "4:0,1,2,4,5", "9:0,1,2,3,5,6", "2:1,2,3,4,5,6,7", "7:0,1,2,3,4,6,7,8", "10:0,1,2,3,4,5,6,7,8,9"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> dag = {"8:", "3:0", "6:0,1", "6:0,1", "7:0,1,2", "6:0,2,3,4", "5:0,1,2,4,5", "9:0,1,3,4,5,6", "9:0,1,3,5,6", "2:0,1,2,3,4,5,6,8", "10:1,2,3,5,6,7,8,9"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> dag = {"8:", "4:", "3:1", "9:1", "8:0,1,3", "6:0,3", "4:0,1,3,5", "7:1,3,4,5", "4:0,1,3,5,6", "7:0,1,2,3,6,7", "6:0,2,3,4,6"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> dag = {"1:", "8:0", "9:0,1", "7:0,1,2", "3:0,1,2,3", "5:1,2,3,4", "1:0,1,2,3,4,5", "3:1,2,3,4,5,6", "7:0,1,2,3,4,5,6,7", "7:0,1,2,3,4,5,6,7,8", "6:0,1,2,4,5,6,7,8,9"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 57;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> dag = {"4:", "6:0", "10:1", "10:0,2", "5:0,1,2,3", "4:0,3", "4:0,1,3,5", "3:0,1,4", "8:0,2,3", "4:1,3,5,6,7,8", "10:0,1,2,3,4,5,6", "3:1,2,3,6,7,8,9,10"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 52;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> dag = {"1:", "4:0", "6:0,1", "7:0,1,2", "7:0,2,3", "5:0,1,2,3,4", "2:0,1,2,3,4,5", "7:0,1,2,4,5,6", "4:0,1,2,3,4,5,6,7", "10:0,1,2,3,4,5,6,8", "9:0,1,2,3,4,5,6,7,8,9", "8:0,1,2,4,5,6,7,8,10"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> dag = {"1:", "2:", "4:", "8:", "6:", "3:", "7:", "5:", "9:", "5:", "10:", "3:"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> dag = {"2:", "10:", "10:", "6:", "5:", "7:", "9:", "8:", "2:", "1:", "5:", "9:"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 37;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> dag = {"3:", "10:", "6:", "4:", "10:", "10:", "9:", "3:", "5:", "3:", "8:", "6:"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> dag = {"9:", "6:", "8:", "5:", "8:", "7:", "5:", "7:", "1:", "3:", "8:", "10:"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 39;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> dag = {"10:", "10:", "10:", "10:", "10:", "10:", "10:", "10:", "10:", "10:", "10:", "10:"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 60;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> dag = {"10:", "10:0", "10:1", "10:2", "10:3", "10:4", "10:5", "10:6", "10:7", "10:8", "10:9", "10:10"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 120;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> dag = {"1:", "9:", "7:", "10:", "7:", "9:", "6:", "8:", "10:", "5:", "10:", "10:"};
    Scheduling* pObj = new Scheduling();
    clock_t start = clock();
    int result = pObj->fastest(dag);
    clock_t end = clock();
    delete pObj;
    int expected = 46;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=272072&rd=4630&pm=1879
********************************************************************************
#include <iostream> 
#include <string> 
#include <vector> 
#include <algorithm> 
#include <functional> 
#include <numeric> 
#include <cstdio> 
#include <cstdlib> 
#include <cmath> 
#include <queue> 
using namespace std; 
typedef vector<int> VI;  typedef vector<vector<int> > VVI; 
typedef vector<string> VS;  typedef vector<vector<string> > VVS; 
typedef signed long long i64;  typedef unsigned long long u64; 
 
vector<string> tokenize(string s, string ch) { 
  vector<string> ret; 
  for( int p = 0, p2; p < s.size(); p = p2+1 ) { 
    p2 = s.find_first_of(ch, p); 
    if( p2 == -1 ) p2 = s.size(); 
    if( p2-p > 0 ) ret.push_back( s.substr(p, p2-p) ); 
  } 
  return ret; 
} 
 
vector<int> tokint(string s, string ch) { 
  vector<int> ret; 
  vector<string> p = tokenize(s, ch); 
  for( int i = 0; i < p.size(); i++ ) 
    ret.push_back( atoi(p[i].c_str()) ); 
  return ret; 
} 
 
vector<vector<int> > tokmat(vector<string> s, string ch) { 
  vector<vector<int> > ret; 
  for( int i = 0; i < s.size(); i++ ) 
    ret.push_back( tokint(s[i], ch) ); 
  return ret; 
} 
 
VVI a; 
VI dep; 
int memo[121][1<<12][13]; 
int memo2[121][1<<12]; 
int ret = 500; 
 
void doit2(int t, int b, int p, int pt); 
void doit(int t, int b) { 
//cout << t << ' ' << b << '\n'; 
  if( b == (1<<a.size())-1 ) {ret <?= t; return;} 
  if( memo2[t][b] ) return; 
  memo2[t][b] = 1; 
  for( int x = 0; x < a.size(); x++ ) if(!(b&(1<<x)) && (b&dep[x])==dep[x]) 
  for( int y = 0; y < a.size(); y++ ) if(!(b&(1<<y)) && (b&dep[y])==dep[y]) { 
    if( x == y ) { 
      doit(t+a[x][0], b|(1<<x)); 
    } else { 
      if( a[x][0] <= a[y][0] ) 
        doit2(t+a[x][0], b|(1<<x), y, a[x][0]); 
      else 
        doit2(t+a[y][0], b|(1<<y), x, a[y][0]); 
    } 
  } 
} 
 
void doit2(int t, int b, int p, int pt) { 
//cout << t << ' ' << b << ' ' << p << ' ' << pt << '\n'; 
  if( pt == a[p][0] ) {doit(t, b|(1<<p)); return;} 
  if( memo[t][b][p] & (1<<pt) ) return; 
  memo[t][b][p] |= (1<<pt); 
  for( int x = 0; x < a.size(); x++ ) if(!(b&(1<<x)) && (b&dep[x])==dep[x]) { 
    if( x == p ) { 
      doit(t+a[x][0]-pt, b|(1<<x)); 
    } else { 
      if( a[x][0] <= a[p][0]-pt ) 
        doit2(t+a[x][0], b|(1<<x), p, pt+a[x][0]); 
      else 
        doit2(t+a[p][0]-pt, b|(1<<p), x, a[p][0]-pt); 
    } 
  } 
 
} 
 
class Scheduling { 
public: 
int fastest(vector <string> A) { 
  a = tokmat(A, ":,"); 
  int i, j, k, x, y, z, n; 
 
  for( i = 0; i < a.size(); i++ ) { 
    for( x = 0, j = 1; j < a[i].size(); j++ ) 
      x |= (1<<a[i][j]); 
    dep.push_back(x); 
  } 
  doit(0, 0); 
  return ret; 
} 
};

********************************************************************************
*******************************************************************************/