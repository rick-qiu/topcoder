/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6448
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

class TrainRobber {
public:
    double finalPosition(int length, int nCarriages, vector<string> offset, vector<string> period, int trainSpeed, int robberSpeed, int nBridges);
};

double TrainRobber::finalPosition(int length, int nCarriages, vector<string> offset, vector<string> period, int trainSpeed, int robberSpeed, int nBridges) {
    double ret;
    return ret;
}


int test0() {
    int length = 1;
    int nCarriages = 4;
    vector<string> offset = {"3 4"};
    vector<string> period = {"4", "2"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 100;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 14.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int length = 1;
    int nCarriages = 4;
    vector<string> offset = {"3 4"};
    vector<string> period = {"4 2"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 1;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int length = 5;
    int nCarriages = 10;
    vector<string> offset = {"8 23"};
    vector<string> period = {"15 13"};
    int trainSpeed = 10;
    int robberSpeed = 10;
    int nBridges = 10;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 75.0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int length = 100;
    int nCarriages = 100;
    vector<string> offset = {"1 1"};
    vector<string> period = {"1 1"};
    int trainSpeed = 100;
    int robberSpeed = 100;
    int nBridges = 100;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 50.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int length = 1;
    int nCarriages = 1000000;
    vector<string> offset = {"10", "15 63"};
    vector<string> period = {"23 42 11"};
    int trainSpeed = 10;
    int robberSpeed = 1000;
    int nBridges = 1000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 6355.0;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int length = 1;
    int nCarriages = 4;
    vector<string> offset = {"3 4"};
    vector<string> period = {"4 2"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 2;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 4.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int length = 1;
    int nCarriages = 4;
    vector<string> offset = {"3 4"};
    vector<string> period = {"4 2"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 3;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 6.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int length = 1;
    int nCarriages = 4;
    vector<string> offset = {"3 4"};
    vector<string> period = {"4 2"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 4;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 7.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int length = 1;
    int nCarriages = 4;
    vector<string> offset = {"3 4"};
    vector<string> period = {"4 2"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 5;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 8.0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int length = 1;
    int nCarriages = 4;
    vector<string> offset = {"3 4"};
    vector<string> period = {"4 2"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 6;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int length = 1;
    int nCarriages = 4;
    vector<string> offset = {"3 4"};
    vector<string> period = {"4 2"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 7;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int length = 1;
    int nCarriages = 1;
    vector<string> offset = {"3 4"};
    vector<string> period = {"4 2"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 8;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int length = 49;
    int nCarriages = 29;
    vector<string> offset = {"516"};
    vector<string> period = {"4492"};
    int trainSpeed = 20;
    int robberSpeed = 62;
    int nBridges = 55;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1941.7419354838707;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int length = 49;
    int nCarriages = 29;
    vector<string> offset = {"516 762"};
    vector<string> period = {"4492 2855"};
    int trainSpeed = 74;
    int robberSpeed = 78;
    int nBridges = 63;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 2862.7179487179487;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int length = 49;
    int nCarriages = 29;
    vector<string> offset = {"516 762 678"};
    vector<string> period = {"4492 2855 4263"};
    int trainSpeed = 85;
    int robberSpeed = 45;
    int nBridges = 76;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 4324.777777777777;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int length = 49;
    int nCarriages = 29;
    vector<string> offset = {"516 762 678 845"};
    vector<string> period = {"4492 2855 4263 2876"};
    int trainSpeed = 44;
    int robberSpeed = 21;
    int nBridges = 89;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 4782.666666666667;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int length = 49;
    int nCarriages = 29;
    vector<string> offset = {"516 762 678 845 321"};
    vector<string> period = {"4492 2855 4263 2876 4889"};
    int trainSpeed = 53;
    int robberSpeed = 48;
    int nBridges = 61;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3319.4999999999995;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int length = 49;
    int nCarriages = 29;
    vector<string> offset = {"516 762 678 845 321 948"};
    vector<string> period = {"4492 2855 4263 2876 4889 3504"};
    int trainSpeed = 93;
    int robberSpeed = 83;
    int nBridges = 24;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3441.6867469879517;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int length = 49;
    int nCarriages = 29;
    vector<string> offset = {"516 762 678 845 321 948 883"};
    vector<string> period = {"4492 2855 4263 2876 4889 3504 4746"};
    int trainSpeed = 38;
    int robberSpeed = 46;
    int nBridges = 88;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3005.9999999999995;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int length = 49;
    int nCarriages = 29;
    vector<string> offset = {"516 762 678 845 321 948 883 246"};
    vector<string> period = {"4492 2855 4263 2876 4889 3504 4746 2388"};
    int trainSpeed = 26;
    int robberSpeed = 63;
    int nBridges = 54;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 2263.2222222222226;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int length = 49;
    int nCarriages = 29;
    vector<string> offset = {"516 762 678 845 321 948 883 246 863"};
    vector<string> period = {"4492 2855 4263 2876 4889 3504 4746 2388 2939"};
    int trainSpeed = 61;
    int robberSpeed = 36;
    int nBridges = 76;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 4848.083333333333;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int length = 49;
    int nCarriages = 29;
    vector<string> offset = {"516 762 678 845 321 948 883 246 863 961"};
    vector<string> period = {"4492 2855 4263 2876 4889 3504 4746 2388 2939 4556"};
    int trainSpeed = 99;
    int robberSpeed = 31;
    int nBridges = 92;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 8161.483870967742;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int length = 49;
    int nCarriages = 29;
    vector<string> offset = {"516 762 678 845 321 948 883 246 863 961 731"};
    vector<string> period = {"4492 2855 4263 2876 4889 3504 4746 2388 2939 4556", "3692"};
    int trainSpeed = 13;
    int robberSpeed = 37;
    int nBridges = 63;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 2285.324324324324;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int length = 49;
    int nCarriages = 29;
    vector<string> offset = {"516 762 678 845 321 948 883 246 863 961 731 337"};
    vector<string> period = {"4492 2855 4263 2876 4889 3504 4746 2388 2939 4556", "3692 3320"};
    int trainSpeed = 17;
    int robberSpeed = 78;
    int nBridges = 47;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 2035.2307692307695;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int length = 49;
    int nCarriages = 29;
    vector<string> offset = {"516 762 678 845 321 948 883 246 863 961 731 337", "878"};
    vector<string> period = {"4492 2855 4263 2876 4889 3504 4746 2388 2939 4556", "3692 3320 4647"};
    int trainSpeed = 9;
    int robberSpeed = 17;
    int nBridges = 38;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 2459.823529411765;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int length = 49;
    int nCarriages = 29;
    vector<string> offset = {"516 762 678 845 321 948 883 246 863 961 731 337", "878 617"};
    vector<string> period = {"4492 2855 4263 2876 4889 3504 4746 2388 2939 4556", "3692 3320 4647 4738"};
    int trainSpeed = 88;
    int robberSpeed = 48;
    int nBridges = 89;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 5160.833333333333;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int length = 49;
    int nCarriages = 29;
    vector<string> offset = {"516 762 678 845 321 948 883 246 863 961 731 337", "878 617 748"};
    vector<string> period = {"4492 2855 4263 2876 4889 3504 4746 2388 2939 4556", "3692 3320 4647 4738 789"};
    int trainSpeed = 9;
    int robberSpeed = 59;
    int nBridges = 18;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1932.322033898305;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int length = 49;
    int nCarriages = 29;
    vector<string> offset = {"516 762 678 845 321 948 883 246 863 961 731 337", "878 617 748 409"};
    vector<string> period = {"4492 2855 4263 2876 4889 3504 4746 2388 2939 4556", "3692 3320 4647 4738 789 3452"};
    int trainSpeed = 59;
    int robberSpeed = 19;
    int nBridges = 19;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 2634.0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int length = 49;
    int nCarriages = 29;
    vector<string> offset = {"516 762 678 845 321 948 883 246 863 961 731 337", "878 617 748 409 719"};
    vector<string> period = {"4492 2855 4263 2876 4889 3504 4746 2388 2939 4556", "3692 3320 4647 4738 789 3452 2739"};
    int trainSpeed = 58;
    int robberSpeed = 73;
    int nBridges = 52;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3378.7945205479455;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int length = 49;
    int nCarriages = 29;
    vector<string> offset = {"516 762 678 845 321 948 883 246 863 961 731 337", "878 617 748 409 719 458"};
    vector<string> period = {"4492 2855 4263 2876 4889 3504 4746 2388 2939 4556", "3692 3320 4647 4738 789 3452 2739 3552"};
    int trainSpeed = 98;
    int robberSpeed = 81;
    int nBridges = 63;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 4668.567901234568;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int length = 49;
    int nCarriages = 29;
    vector<string> offset = {"516 762 678 845 321 948 883 246 863 961 731 337", "878 617 748 409 719 458 581"};
    vector<string> period = {"4492 2855 4263 2876 4889 3504 4746 2388 2939 4556", "3692 3320 4647 4738 789 3452 2739 3552 4136"};
    int trainSpeed = 68;
    int robberSpeed = 21;
    int nBridges = 74;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 10375.0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int length = 49;
    int nCarriages = 29;
    vector<string> offset = {"516 762 678 845 321 948 883 246 863 961 731 337", "878 617 748 409 719 458 581 268"};
    vector<string> period = {"4492 2855 4263 2876 4889 3504 4746 2388 2939 4556", "3692 3320 4647 4738 789 3452 2739 3552 4136 3774"};
    int trainSpeed = 6;
    int robberSpeed = 70;
    int nBridges = 53;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 2015.8;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int length = 1;
    int nCarriages = 1000000;
    vector<string> offset = {"1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000"};
    vector<string> period = {"1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000"};
    int trainSpeed = 1000000;
    int robberSpeed = 2;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3.334E9;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int length = 1;
    int nCarriages = 1000000;
    vector<string> offset = {"1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000"};
    vector<string> period = {"1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000"};
    int trainSpeed = 1000000;
    int robberSpeed = 1;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3.334E9;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int length = 1;
    int nCarriages = 1000000;
    vector<string> offset = {"1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000"};
    vector<string> period = {"1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000"};
    int trainSpeed = 1000000;
    int robberSpeed = 10;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3.334E9;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int length = 1;
    int nCarriages = 1000000;
    vector<string> offset = {"1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000"};
    vector<string> period = {"1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000", "1000000 1000000 1000000 1000000 1000000 1000000"};
    int trainSpeed = 1000000;
    int robberSpeed = 100;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3.334E9;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int length = 49;
    int nCarriages = 29;
    vector<string> offset = {"843516 269762 832678 588845 907321 824653 977883", "925246 975863 560961 541199 139337 230878 633609", "472388 517409 301719 541458 502298 381268 507906", "680244 782381 640724 632372 700654 545689 836726", "452287 690152 606987 956793 450754 977711 366860", "810578 837872 804594 742617 912156 850716 921791", "502233 417030 693082 463785 475713 903316 905603", "753716 763439 455917 637495 834160 499491 462351", "309815 764127 739114 590547 785020 839051 581417", "776729 653848 970390 985787 367896 962458 844035", "913159 641781 551752 943018 979616 424142 735754", "162000 803830 830818 127987 501336 609975 921728", "719819 526869 814255 827299 952535 442378 894171", "349894 726498 957350 113017 312722 488063 513187", "520889 733654 484278 604150 912000 288978 767002", "278523 690159 788257 998503 981633 708040 705800", "698243 659890 914858 723485 411118 244508 262934", "836759 420565 785968 304581 766395 903990 239821", "420615 438597 756057 952907 553678 316556 779844", "860308 924988 772182 667465 580469 817844 861246", "745989 955795 675306 475461 446834 343182 471376", "80013 419094 567359 534779 999011 810901 722576", "227537 864384 790132 355087 602467 358850 565334", "367323 991166 980283 679553 899643 582736 458602", "594668 653527 402766 993046 116545 811554 901071", "463260 297026 546066 760180 823159 923196 925101", "832858 980390 896247 735855 708707 595014 844295", "650286 818604 675728 359749 479164 601684 360988", "611048 461710 230012 640481 604362 922658 769353", "793268 225017 534603 697352 824382 257139 825407", "531320 856476 583523 584222 298453 889846 933558", "774542 870181 789824 944817 966369 894423 788587", "923798 890312 488006 241118 873630 845859 678447", "404230 830198 884672 872503 436372 715364 904023", "924915 775506 862340 953884 909342 170168 956156", "974744 987162 883505 173844 935510 311377 729330", "791472 971411 780627 398815 523131 613711 291331", "845980 481143 951507 932741 648982 375862 827185", "348513 431515 820033 530925 315159 590962 586678", "828434 774798 808589 407278 394271 602521 111638", "860569 960518 596905 802547 828144 319058 771295", "893154 751259 795632 578904 632557 505950 447085", "746830 249151 752926 365653 996822 874093"};
    vector<string> period = {"681054 581078 931096 567876 804525 903504 810224", "491603 117939 972376 563692 503320 589647 799738", "250106 563452 941119 698552 454136 713774 517153", "997224 723515 484606 678320 572332 509964 464798", "698291 411731 654005 413451 682142 993863 502672", "726779 505542 283358 736441 668509 851634 319007", "896068 823792 988482 710590 542873 985692 236835", "883783 768291 804363 197129 858675 887461 859471", "680703 572946 174478 523103 449873 949895 732770", "528936 788325 975254 650975 493772 776478 486783", "504453 752820 524393 68824 679009 879937 387819", "437712 47037 130576 915472 605041 338021 369527", "611524 81442 972694 584108 632663 986039 791581", "826499 956899 871527 285124 885556 669099 938630", "830612 283923 810918 434429 964723 432152 953262", "843242 676579 648624 879504 733882 760805 961331", "729413 405473 880461 657071 175525 591603 954958", "654614 415657 295508 675176 588573 817520 859620", "492339 252743 867911 695726 619218 710545 848034", "523546 943255 965576 952746 949398 918345 714765", "656546 613623 931218 648068 832917 815470 936157", "986878 652170 616709 490794 198228 824464 878255", "904552 834266 184037 882720 925538 604886 562483", "330207 980851 616485 188381 544389 262517 918880", "292982 845632 192980 839625 811079 582448 889083", "859908 708077 497687 810134 815378 414605 896231", "510864 785367 417612 490407 993872 754644 885077", "754347 738379 656877 910402 732672 859978 691171", "842615 250032 741484 968346 581948 965894 802314", "996243 972722 463692 847610 388250 937760 513180", "367662 977697 848134 744543 460420 861193 532891", "933500 783774 362982 557001 845204 449455 900851", "814626 715561 268139 619953 559889 495067 83147", "832323 353241 591149 517099 473708 881231 739876", "664436 193167 168978 368514 624753 592693 972537", "426022 423703 658362 404864 358043 902799 964491", "920082 690931 541402 258854 148504 999692 248276", "767728 984479 882144 990240 376837 757354 919144", "871631 945127 257757 528539 846387 827591 347411", "139068 213594 641014 753378 976618 212293 748515", "962047 803771 641517 610847 464032 970690 851020", "589275 434768 768166 457661 602103 153371 89462", "373947 597043 689101 630916 803948 902602"};
    int trainSpeed = 24;
    int robberSpeed = 84;
    int nBridges = 8;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1827.0000000000082;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int length = 830;
    int nCarriages = 1000000;
    vector<string> offset = {"843516 269762 832678 588845 907321 824653 977883", "925246 975863 560961 541199 139337 230878 633609", "472388 517409 301719 541458 502298 381268 507906", "680244 782381 640724 632372 700654 545689 836726", "452287 690152 606987 956793 450754 977711 366860", "810578 837872 804594 742617 912156 850716 921791", "502233 417030 693082 463785 475713 903316 905603", "753716 763439 455917 637495 834160 499491 462351", "309815 764127 739114 590547 785020 839051 581417", "776729 653848 970390 985787 367896 962458 844035", "913159 641781 551752 943018 979616 424142 735754", "162000 803830 830818 127987 501336 609975 921728", "719819 526869 814255 827299 952535 442378 894171", "349894 726498 957350 113017 312722 488063 513187", "520889 733654 484278 604150 912000 288978 767002", "278523 690159 788257 998503 981633 708040 705800", "698243 659890 914858 723485 411118 244508 262934", "836759 420565 785968 304581 766395 903990 239821", "420615 438597 756057 952907 553678 316556 779844", "860308 924988 772182 667465 580469 817844 861246", "745989 955795 675306 475461 446834 343182 471376", "80013 419094 567359 534779 999011 810901 722576", "227537 864384 790132 355087 602467 358850 565334", "367323 991166 980283 679553 899643 582736 458602", "594668 653527 402766 993046 116545 811554 901071", "463260 297026 546066 760180 823159 923196 925101", "832858 980390 896247 735855 708707 595014 844295", "650286 818604 675728 359749 479164 601684 360988", "611048 461710 230012 640481 604362 922658 769353", "793268 225017 534603 697352 824382 257139 825407", "531320 856476 583523 584222 298453 889846 933558", "774542 870181 789824 944817 966369 894423 788587", "923798 890312 488006 241118 873630 845859 678447", "404230 830198 884672 872503 436372 715364 904023", "924915 775506 862340 953884 909342 170168 956156", "974744 987162 883505 173844 935510 311377 729330", "791472 971411 780627 398815 523131 613711 291331", "845980 481143 951507 932741 648982 375862 827185", "348513 431515 820033 530925 315159 590962 586678", "828434 774798 808589 407278 394271 602521 111638", "860569 960518 596905 802547 828144 319058 771295", "893154 751259 795632 578904 632557 505950 447085", "746830 249151 752926 365653 996822 874093"};
    vector<string> period = {"681054 581078 931096 567876 804525 903504 810224", "491603 117939 972376 563692 503320 589647 799738", "250106 563452 941119 698552 454136 713774 517153", "997224 723515 484606 678320 572332 509964 464798", "698291 411731 654005 413451 682142 993863 502672", "726779 505542 283358 736441 668509 851634 319007", "896068 823792 988482 710590 542873 985692 236835", "883783 768291 804363 197129 858675 887461 859471", "680703 572946 174478 523103 449873 949895 732770", "528936 788325 975254 650975 493772 776478 486783", "504453 752820 524393 68824 679009 879937 387819", "437712 47037 130576 915472 605041 338021 369527", "611524 81442 972694 584108 632663 986039 791581", "826499 956899 871527 285124 885556 669099 938630", "830612 283923 810918 434429 964723 432152 953262", "843242 676579 648624 879504 733882 760805 961331", "729413 405473 880461 657071 175525 591603 954958", "654614 415657 295508 675176 588573 817520 859620", "492339 252743 867911 695726 619218 710545 848034", "523546 943255 965576 952746 949398 918345 714765", "656546 613623 931218 648068 832917 815470 936157", "986878 652170 616709 490794 198228 824464 878255", "904552 834266 184037 882720 925538 604886 562483", "330207 980851 616485 188381 544389 262517 918880", "292982 845632 192980 839625 811079 582448 889083", "859908 708077 497687 810134 815378 414605 896231", "510864 785367 417612 490407 993872 754644 885077", "754347 738379 656877 910402 732672 859978 691171", "842615 250032 741484 968346 581948 965894 802314", "996243 972722 463692 847610 388250 937760 513180", "367662 977697 848134 744543 460420 861193 532891", "933500 783774 362982 557001 845204 449455 900851", "814626 715561 268139 619953 559889 495067 83147", "832323 353241 591149 517099 473708 881231 739876", "664436 193167 168978 368514 624753 592693 972537", "426022 423703 658362 404864 358043 902799 964491", "920082 690931 541402 258854 148504 999692 248276", "767728 984479 882144 990240 376837 757354 919144", "871631 945127 257757 528539 846387 827591 347411", "139068 213594 641014 753378 976618 212293 748515", "962047 803771 641517 610847 464032 970690 851020", "589275 434768 768166 457661 602103 153371 89462", "373947 597043 689101 630916 803948 902602"};
    int trainSpeed = 24;
    int robberSpeed = 84;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.515399020142857E9;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int length = 830;
    int nCarriages = 1000000;
    vector<string> offset = {"843516 269762 832678 588845 907321 824653 977883", "925246 975863 560961 541199 139337 230878 633609", "472388 517409 301719 541458 502298 381268 507906", "680244 782381 640724 632372 700654 545689 836726", "452287 690152 606987 956793 450754 977711 366860", "810578 837872 804594 742617 912156 850716 921791", "502233 417030 693082 463785 475713 903316 905603", "753716 763439 455917 637495 834160 499491 462351", "309815 764127 739114 590547 785020 839051 581417", "776729 653848 970390 985787 367896 962458 844035", "913159 641781 551752 943018 979616 424142 735754", "162000 803830 830818 127987 501336 609975 921728", "719819 526869 814255 827299 952535 442378 894171", "349894 726498 957350 113017 312722 488063 513187", "520889 733654 484278 604150 912000 288978 767002", "278523 690159 788257 998503 981633 708040 705800", "698243 659890 914858 723485 411118 244508 262934", "836759 420565 785968 304581 766395 903990 239821", "420615 438597 756057 952907 553678 316556 779844", "860308 924988 772182 667465 580469 817844 861246", "745989 955795 675306 475461 446834 343182 471376", "80013 419094 567359 534779 999011 810901 722576", "227537 864384 790132 355087 602467 358850 565334", "367323 991166 980283 679553 899643 582736 458602", "594668 653527 402766 993046 116545 811554 901071", "463260 297026 546066 760180 823159 923196 925101", "832858 980390 896247 735855 708707 595014 844295", "650286 818604 675728 359749 479164 601684 360988", "611048 461710 230012 640481 604362 922658 769353", "793268 225017 534603 697352 824382 257139 825407", "531320 856476 583523 584222 298453 889846 933558", "774542 870181 789824 944817 966369 894423 788587", "923798 890312 488006 241118 873630 845859 678447", "404230 830198 884672 872503 436372 715364 904023", "924915 775506 862340 953884 909342 170168 956156", "974744 987162 883505 173844 935510 311377 729330", "791472 971411 780627 398815 523131 613711 291331", "845980 481143 951507 932741 648982 375862 827185", "348513 431515 820033 530925 315159 590962 586678", "828434 774798 808589 407278 394271 602521 111638", "860569 960518 596905 802547 828144 319058 771295", "893154 751259 795632 578904 632557 505950 447085", "746830 249151 752926 365653 996822 874093"};
    vector<string> period = {"681054 581078 931096 567876 804525 903504 810224", "491603 117939 972376 563692 503320 589647 799738", "250106 563452 941119 698552 454136 713774 517153", "997224 723515 484606 678320 572332 509964 464798", "698291 411731 654005 413451 682142 993863 502672", "726779 505542 283358 736441 668509 851634 319007", "896068 823792 988482 710590 542873 985692 236835", "883783 768291 804363 197129 858675 887461 859471", "680703 572946 174478 523103 449873 949895 732770", "528936 788325 975254 650975 493772 776478 486783", "504453 752820 524393 68824 679009 879937 387819", "437712 47037 130576 915472 605041 338021 369527", "611524 81442 972694 584108 632663 986039 791581", "826499 956899 871527 285124 885556 669099 938630", "830612 283923 810918 434429 964723 432152 953262", "843242 676579 648624 879504 733882 760805 961331", "729413 405473 880461 657071 175525 591603 954958", "654614 415657 295508 675176 588573 817520 859620", "492339 252743 867911 695726 619218 710545 848034", "523546 943255 965576 952746 949398 918345 714765", "656546 613623 931218 648068 832917 815470 936157", "986878 652170 616709 490794 198228 824464 878255", "904552 834266 184037 882720 925538 604886 562483", "330207 980851 616485 188381 544389 262517 918880", "292982 845632 192980 839625 811079 582448 889083", "859908 708077 497687 810134 815378 414605 896231", "510864 785367 417612 490407 993872 754644 885077", "754347 738379 656877 910402 732672 859978 691171", "842615 250032 741484 968346 581948 965894 802314", "996243 972722 463692 847610 388250 937760 513180", "367662 977697 848134 744543 460420 861193 532891", "933500 783774 362982 557001 845204 449455 900851", "814626 715561 268139 619953 559889 495067 83147", "832323 353241 591149 517099 473708 881231 739876", "664436 193167 168978 368514 624753 592693 972537", "426022 423703 658362 404864 358043 902799 964491", "920082 690931 541402 258854 148504 999692 248276", "767728 984479 882144 990240 376837 757354 919144", "871631 945127 257757 528539 846387 827591 347411", "139068 213594 641014 753378 976618 212293 748515", "962047 803771 641517 610847 464032 970690 851020", "589275 434768 768166 457661 602103 153371 89462", "373947 597043 689101 630916 803948 902602"};
    int trainSpeed = 24;
    int robberSpeed = 84;
    int nBridges = 943340;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.515397953E9;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int length = 830;
    int nCarriages = 1000000;
    vector<string> offset = {"843516 269762 832678 588845 907321 824653 977883", "925246 975863 560961 541199 139337 230878 633609", "472388 517409 301719 541458 502298 381268 507906", "680244 782381 640724 632372 700654 545689 836726", "452287 690152 606987 956793 450754 977711 366860", "810578 837872 804594 742617 912156 850716 921791", "502233 417030 693082 463785 475713 903316 905603", "753716 763439 455917 637495 834160 499491 462351", "309815 764127 739114 590547 785020 839051 581417", "776729 653848 970390 985787 367896 962458 844035", "913159 641781 551752 943018 979616 424142 735754", "162000 803830 830818 127987 501336 609975 921728", "719819 526869 814255 827299 952535 442378 894171", "349894 726498 957350 113017 312722 488063 513187", "520889 733654 484278 604150 912000 288978 767002", "278523 690159 788257 998503 981633 708040 705800", "698243 659890 914858 723485 411118 244508 262934", "836759 420565 785968 304581 766395 903990 239821", "420615 438597 756057 952907 553678 316556 779844", "860308 924988 772182 667465 580469 817844 861246", "745989 955795 675306 475461 446834 343182 471376", "80013 419094 567359 534779 999011 810901 722576", "227537 864384 790132 355087 602467 358850 565334", "367323 991166 980283 679553 899643 582736 458602", "594668 653527 402766 993046 116545 811554 901071", "463260 297026 546066 760180 823159 923196 925101", "832858 980390 896247 735855 708707 595014 844295", "650286 818604 675728 359749 479164 601684 360988", "611048 461710 230012 640481 604362 922658 769353", "793268 225017 534603 697352 824382 257139 825407", "531320 856476 583523 584222 298453 889846 933558", "774542 870181 789824 944817 966369 894423 788587", "923798 890312 488006 241118 873630 845859 678447", "404230 830198 884672 872503 436372 715364 904023", "924915 775506 862340 953884 909342 170168 956156", "974744 987162 883505 173844 935510 311377 729330", "791472 971411 780627 398815 523131 613711 291331", "845980 481143 951507 932741 648982 375862 827185", "348513 431515 820033 530925 315159 590962 586678", "828434 774798 808589 407278 394271 602521 111638", "860569 960518 596905 802547 828144 319058 771295", "893154 751259 795632 578904 632557 505950 447085", "746830 249151 752926 365653 996822 874093"};
    vector<string> period = {"681054 581078 931096 567876 804525 903504 810224", "491603 117939 972376 563692 503320 589647 799738", "250106 563452 941119 698552 454136 713774 517153", "997224 723515 484606 678320 572332 509964 464798", "698291 411731 654005 413451 682142 993863 502672", "726779 505542 283358 736441 668509 851634 319007", "896068 823792 988482 710590 542873 985692 236835", "883783 768291 804363 197129 858675 887461 859471", "680703 572946 174478 523103 449873 949895 732770", "528936 788325 975254 650975 493772 776478 486783", "504453 752820 524393 68824 679009 879937 387819", "437712 47037 130576 915472 605041 338021 369527", "611524 81442 972694 584108 632663 986039 791581", "826499 956899 871527 285124 885556 669099 938630", "830612 283923 810918 434429 964723 432152 953262", "843242 676579 648624 879504 733882 760805 961331", "729413 405473 880461 657071 175525 591603 954958", "654614 415657 295508 675176 588573 817520 859620", "492339 252743 867911 695726 619218 710545 848034", "523546 943255 965576 952746 949398 918345 714765", "656546 613623 931218 648068 832917 815470 936157", "986878 652170 616709 490794 198228 824464 878255", "904552 834266 184037 882720 925538 604886 562483", "330207 980851 616485 188381 544389 262517 918880", "292982 845632 192980 839625 811079 582448 889083", "859908 708077 497687 810134 815378 414605 896231", "510864 785367 417612 490407 993872 754644 885077", "754347 738379 656877 910402 732672 859978 691171", "842615 250032 741484 968346 581948 965894 802314", "996243 972722 463692 847610 388250 937760 513180", "367662 977697 848134 744543 460420 861193 532891", "933500 783774 362982 557001 845204 449455 900851", "814626 715561 268139 619953 559889 495067 83147", "832323 353241 591149 517099 473708 881231 739876", "664436 193167 168978 368514 624753 592693 972537", "426022 423703 658362 404864 358043 902799 964491", "920082 690931 541402 258854 148504 999692 248276", "767728 984479 882144 990240 376837 757354 919144", "871631 945127 257757 528539 846387 827591 347411", "139068 213594 641014 753378 976618 212293 748515", "962047 803771 641517 610847 464032 970690 851020", "589275 434768 768166 457661 602103 153371 89462", "373947 597043 689101 630916 803948 902602"};
    int trainSpeed = 24;
    int robberSpeed = 84;
    int nBridges = 943339;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.515397611E9;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int length = 830;
    int nCarriages = 1000000;
    vector<string> offset = {"843516 269762 832678 588845 907321 824653 977883", "925246 975863 560961 541199 139337 230878 633609", "472388 517409 301719 541458 502298 381268 507906", "680244 782381 640724 632372 700654 545689 836726", "452287 690152 606987 956793 450754 977711 366860", "810578 837872 804594 742617 912156 850716 921791", "502233 417030 693082 463785 475713 903316 905603", "753716 763439 455917 637495 834160 499491 462351", "309815 764127 739114 590547 785020 839051 581417", "776729 653848 970390 985787 367896 962458 844035", "913159 641781 551752 943018 979616 424142 735754", "162000 803830 830818 127987 501336 609975 921728", "719819 526869 814255 827299 952535 442378 894171", "349894 726498 957350 113017 312722 488063 513187", "520889 733654 484278 604150 912000 288978 767002", "278523 690159 788257 998503 981633 708040 705800", "698243 659890 914858 723485 411118 244508 262934", "836759 420565 785968 304581 766395 903990 239821", "420615 438597 756057 952907 553678 316556 779844", "860308 924988 772182 667465 580469 817844 861246", "745989 955795 675306 475461 446834 343182 471376", "80013 419094 567359 534779 999011 810901 722576", "227537 864384 790132 355087 602467 358850 565334", "367323 991166 980283 679553 899643 582736 458602", "594668 653527 402766 993046 116545 811554 901071", "463260 297026 546066 760180 823159 923196 925101", "832858 980390 896247 735855 708707 595014 844295", "650286 818604 675728 359749 479164 601684 360988", "611048 461710 230012 640481 604362 922658 769353", "793268 225017 534603 697352 824382 257139 825407", "531320 856476 583523 584222 298453 889846 933558", "774542 870181 789824 944817 966369 894423 788587", "923798 890312 488006 241118 873630 845859 678447", "404230 830198 884672 872503 436372 715364 904023", "924915 775506 862340 953884 909342 170168 956156", "974744 987162 883505 173844 935510 311377 729330", "791472 971411 780627 398815 523131 613711 291331", "845980 481143 951507 932741 648982 375862 827185", "348513 431515 820033 530925 315159 590962 586678", "828434 774798 808589 407278 394271 602521 111638", "860569 960518 596905 802547 828144 319058 771295", "893154 751259 795632 578904 632557 505950 447085", "746830 249151 752926 365653 996822 874093"};
    vector<string> period = {"681054 581078 931096 567876 804525 903504 810224", "491603 117939 972376 563692 503320 589647 799738", "250106 563452 941119 698552 454136 713774 517153", "997224 723515 484606 678320 572332 509964 464798", "698291 411731 654005 413451 682142 993863 502672", "726779 505542 283358 736441 668509 851634 319007", "896068 823792 988482 710590 542873 985692 236835", "883783 768291 804363 197129 858675 887461 859471", "680703 572946 174478 523103 449873 949895 732770", "528936 788325 975254 650975 493772 776478 486783", "504453 752820 524393 68824 679009 879937 387819", "437712 47037 130576 915472 605041 338021 369527", "611524 81442 972694 584108 632663 986039 791581", "826499 956899 871527 285124 885556 669099 938630", "830612 283923 810918 434429 964723 432152 953262", "843242 676579 648624 879504 733882 760805 961331", "729413 405473 880461 657071 175525 591603 954958", "654614 415657 295508 675176 588573 817520 859620", "492339 252743 867911 695726 619218 710545 848034", "523546 943255 965576 952746 949398 918345 714765", "656546 613623 931218 648068 832917 815470 936157", "986878 652170 616709 490794 198228 824464 878255", "904552 834266 184037 882720 925538 604886 562483", "330207 980851 616485 188381 544389 262517 918880", "292982 845632 192980 839625 811079 582448 889083", "859908 708077 497687 810134 815378 414605 896231", "510864 785367 417612 490407 993872 754644 885077", "754347 738379 656877 910402 732672 859978 691171", "842615 250032 741484 968346 581948 965894 802314", "996243 972722 463692 847610 388250 937760 513180", "367662 977697 848134 744543 460420 861193 532891", "933500 783774 362982 557001 845204 449455 900851", "814626 715561 268139 619953 559889 495067 83147", "832323 353241 591149 517099 473708 881231 739876", "664436 193167 168978 368514 624753 592693 972537", "426022 423703 658362 404864 358043 902799 964491", "920082 690931 541402 258854 148504 999692 248276", "767728 984479 882144 990240 376837 757354 919144", "871631 945127 257757 528539 846387 827591 347411", "139068 213594 641014 753378 976618 212293 748515", "962047 803771 641517 610847 464032 970690 851020", "589275 434768 768166 457661 602103 153371 89462", "373947 597043 689101 630916 803948 902602"};
    int trainSpeed = 24;
    int robberSpeed = 84;
    int nBridges = 943330;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.515380139E9;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int length = 830;
    int nCarriages = 1000000;
    vector<string> offset = {"843516 269762 832678 588845 907321 824653 977883", "925246 975863 560961 541199 139337 230878 633609", "472388 517409 301719 541458 502298 381268 507906", "680244 782381 640724 632372 700654 545689 836726", "452287 690152 606987 956793 450754 977711 366860", "810578 837872 804594 742617 912156 850716 921791", "502233 417030 693082 463785 475713 903316 905603", "753716 763439 455917 637495 834160 499491 462351", "309815 764127 739114 590547 785020 839051 581417", "776729 653848 970390 985787 367896 962458 844035", "913159 641781 551752 943018 979616 424142 735754", "162000 803830 830818 127987 501336 609975 921728", "719819 526869 814255 827299 952535 442378 894171", "349894 726498 957350 113017 312722 488063 513187", "520889 733654 484278 604150 912000 288978 767002", "278523 690159 788257 998503 981633 708040 705800", "698243 659890 914858 723485 411118 244508 262934", "836759 420565 785968 304581 766395 903990 239821", "420615 438597 756057 952907 553678 316556 779844", "860308 924988 772182 667465 580469 817844 861246", "745989 955795 675306 475461 446834 343182 471376", "80013 419094 567359 534779 999011 810901 722576", "227537 864384 790132 355087 602467 358850 565334", "367323 991166 980283 679553 899643 582736 458602", "594668 653527 402766 993046 116545 811554 901071", "463260 297026 546066 760180 823159 923196 925101", "832858 980390 896247 735855 708707 595014 844295", "650286 818604 675728 359749 479164 601684 360988", "611048 461710 230012 640481 604362 922658 769353", "793268 225017 534603 697352 824382 257139 825407", "531320 856476 583523 584222 298453 889846 933558", "774542 870181 789824 944817 966369 894423 788587", "923798 890312 488006 241118 873630 845859 678447", "404230 830198 884672 872503 436372 715364 904023", "924915 775506 862340 953884 909342 170168 956156", "974744 987162 883505 173844 935510 311377 729330", "791472 971411 780627 398815 523131 613711 291331", "845980 481143 951507 932741 648982 375862 827185", "348513 431515 820033 530925 315159 590962 586678", "828434 774798 808589 407278 394271 602521 111638", "860569 960518 596905 802547 828144 319058 771295", "893154 751259 795632 578904 632557 505950 447085", "746830 249151 752926 365653 996822 874093"};
    vector<string> period = {"681054 581078 931096 567876 804525 903504 810224", "491603 117939 972376 563692 503320 589647 799738", "250106 563452 941119 698552 454136 713774 517153", "997224 723515 484606 678320 572332 509964 464798", "698291 411731 654005 413451 682142 993863 502672", "726779 505542 283358 736441 668509 851634 319007", "896068 823792 988482 710590 542873 985692 236835", "883783 768291 804363 197129 858675 887461 859471", "680703 572946 174478 523103 449873 949895 732770", "528936 788325 975254 650975 493772 776478 486783", "504453 752820 524393 68824 679009 879937 387819", "437712 47037 130576 915472 605041 338021 369527", "611524 81442 972694 584108 632663 986039 791581", "826499 956899 871527 285124 885556 669099 938630", "830612 283923 810918 434429 964723 432152 953262", "843242 676579 648624 879504 733882 760805 961331", "729413 405473 880461 657071 175525 591603 954958", "654614 415657 295508 675176 588573 817520 859620", "492339 252743 867911 695726 619218 710545 848034", "523546 943255 965576 952746 949398 918345 714765", "656546 613623 931218 648068 832917 815470 936157", "986878 652170 616709 490794 198228 824464 878255", "904552 834266 184037 882720 925538 604886 562483", "330207 980851 616485 188381 544389 262517 918880", "292982 845632 192980 839625 811079 582448 889083", "859908 708077 497687 810134 815378 414605 896231", "510864 785367 417612 490407 993872 754644 885077", "754347 738379 656877 910402 732672 859978 691171", "842615 250032 741484 968346 581948 965894 802314", "996243 972722 463692 847610 388250 937760 513180", "367662 977697 848134 744543 460420 861193 532891", "933500 783774 362982 557001 845204 449455 900851", "814626 715561 268139 619953 559889 495067 83147", "832323 353241 591149 517099 473708 881231 739876", "664436 193167 168978 368514 624753 592693 972537", "426022 423703 658362 404864 358043 902799 964491", "920082 690931 541402 258854 148504 999692 248276", "767728 984479 882144 990240 376837 757354 919144", "871631 945127 257757 528539 846387 827591 347411", "139068 213594 641014 753378 976618 212293 748515", "962047 803771 641517 610847 464032 970690 851020", "589275 434768 768166 457661 602103 153371 89462", "373947 597043 689101 630916 803948 902602"};
    int trainSpeed = 24;
    int robberSpeed = 84;
    int nBridges = 943140;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.515065971E9;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int length = 1;
    int nCarriages = 1;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 1;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int length = 1000000;
    int nCarriages = 1;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 1;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int length = 1;
    int nCarriages = 1000000;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 1;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int length = 1000000;
    int nCarriages = 1000000;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 1;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int length = 1;
    int nCarriages = 1;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1000000;
    int robberSpeed = 1;
    int nBridges = 1;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int length = 1000000;
    int nCarriages = 1;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1000000;
    int robberSpeed = 1;
    int nBridges = 1;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int length = 1;
    int nCarriages = 1000000;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1000000;
    int robberSpeed = 1;
    int nBridges = 1;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int length = 1000000;
    int nCarriages = 1000000;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1000000;
    int robberSpeed = 1;
    int nBridges = 1;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int length = 1;
    int nCarriages = 1;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1;
    int robberSpeed = 1000000;
    int nBridges = 1;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int length = 1000000;
    int nCarriages = 1;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1;
    int robberSpeed = 1000000;
    int nBridges = 1;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int length = 1;
    int nCarriages = 1000000;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1;
    int robberSpeed = 1000000;
    int nBridges = 1;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int length = 1000000;
    int nCarriages = 1000000;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1;
    int robberSpeed = 1000000;
    int nBridges = 1;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int length = 1;
    int nCarriages = 1;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1000000;
    int robberSpeed = 1000000;
    int nBridges = 1;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int length = 1000000;
    int nCarriages = 1;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1000000;
    int robberSpeed = 1000000;
    int nBridges = 1;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int length = 1;
    int nCarriages = 1000000;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1000000;
    int robberSpeed = 1000000;
    int nBridges = 1;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int length = 1000000;
    int nCarriages = 1000000;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1000000;
    int robberSpeed = 1000000;
    int nBridges = 1;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int length = 1;
    int nCarriages = 1;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3334.0;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int length = 1000000;
    int nCarriages = 1;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3334.0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int length = 1;
    int nCarriages = 1000000;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3334.0;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int length = 1000000;
    int nCarriages = 1000000;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3334.0;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int length = 1;
    int nCarriages = 1;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1000000;
    int robberSpeed = 1;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3334.0;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int length = 1000000;
    int nCarriages = 1;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1000000;
    int robberSpeed = 1;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3334.0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int length = 1;
    int nCarriages = 1000000;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1000000;
    int robberSpeed = 1;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3334.0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int length = 1000000;
    int nCarriages = 1000000;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1000000;
    int robberSpeed = 1;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3334.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int length = 1;
    int nCarriages = 1;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1;
    int robberSpeed = 1000000;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3334.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int length = 1000000;
    int nCarriages = 1;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1;
    int robberSpeed = 1000000;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3334.0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int length = 1;
    int nCarriages = 1000000;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1;
    int robberSpeed = 1000000;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3334.0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int length = 1000000;
    int nCarriages = 1000000;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1;
    int robberSpeed = 1000000;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3334.0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int length = 1;
    int nCarriages = 1;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1000000;
    int robberSpeed = 1000000;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3334.0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int length = 1000000;
    int nCarriages = 1;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1000000;
    int robberSpeed = 1000000;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3334.0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int length = 1;
    int nCarriages = 1000000;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1000000;
    int robberSpeed = 1000000;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3334.0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int length = 1000000;
    int nCarriages = 1000000;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1000000;
    int robberSpeed = 1000000;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 3334.0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int length = 1000000;
    int nCarriages = 1000000;
    vector<string> offset = {"1000000"};
    vector<string> period = {"1000000"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E12;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int length = 500000;
    int nCarriages = 1;
    vector<string> offset = {"1000000"};
    vector<string> period = {"1000000"};
    int trainSpeed = 59049;
    int robberSpeed = 59049;
    int nBridges = 2;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1000000.0000000001;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int length = 1;
    int nCarriages = 959375;
    vector<string> offset = {"1000000"};
    vector<string> period = {"1000000"};
    int trainSpeed = 40027;
    int robberSpeed = 945253;
    int nBridges = 2;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 999999.9999999999;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int length = 1000000;
    int nCarriages = 1;
    vector<string> offset = {"1000000"};
    vector<string> period = {"1000000"};
    int trainSpeed = 1;
    int robberSpeed = 999999;
    int nBridges = 2;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 2000000.0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int length = 1000000;
    int nCarriages = 1000000;
    vector<string> offset = {"1000000"};
    vector<string> period = {"1000000"};
    int trainSpeed = 1000000;
    int robberSpeed = 1;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E12;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int length = 1000000;
    int nCarriages = 1000000;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1000000;
    int robberSpeed = 1000000;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 834.0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int length = 99999;
    int nCarriages = 99999;
    vector<string> offset = {"99999"};
    vector<string> period = {"99999"};
    int trainSpeed = 99999;
    int robberSpeed = 99999;
    int nBridges = 99999;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 9.999800001E9;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int length = 1;
    int nCarriages = 1000000;
    vector<string> offset = {"10", "15 63"};
    vector<string> period = {"23 42 11"};
    int trainSpeed = 10;
    int robberSpeed = 1000;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1178043.01;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int length = 123124;
    int nCarriages = 1000000;
    vector<string> offset = {"6 6 7 4 1 8 8 9 3 4 9 7 2 8 8 5 1 7 6 5 9 9 2 5 6", "4 6 9 8 3 2 3 2 1 5 9 4 9 9 9 5 4 6 5 3 9 1 8 2 5", "5 4 5 3 2 4 5 6 8 5 3 3 6 5 4 8 9 9 6 9 6 2 3 2 9", "8 5 7 1 7 7 8 7 5 7 8 5 9 1 5 9 7 7 4 4 7 6 9 3 2", "5 5 1 2 1 3 8 4 7 2 7 5 6 8 4 3 5 7 1 3 3 9 1 4 3", "9 2 1 5 6 9 4 3 4 4 4 8 7 2 8 1 4 9 8 2 5 8 3 3 1", "3 7 7 5 4 1 6 7 1 8 9 1 3 3 3 7 2 7 7 2 5 4 5 9 3", "5 1 3 3 9 3 4 1 6 3 6 3 4 1 6 1 3 8 5 5 7 3 8 8 6", "2 3 1 4 9 2 5 5 4 8 6 7 3 8 9 4 9 7 6 1 4 3 5 5 5", "2 9 2 8 6 4 8 8 7 6 1 6 4 6 5 8 8 6 5 4 9 2 7 1 7", "4 2 9 7 6 9 8 2 8 5 4 9 1 6 7 4 5 7 3 7 4 4 3 4 3", "1 5 5 9 8 9 2 7 8 8 7 6 6 2 6 4 1 8 3 2 5 3 5 3 7", "3 4 3 2 3 8 1 2 5 1 8 7 2 2 5 2 5 1 2 3 8 8 9 3 9", "4 2 5 3 3 7 3 9 5 3 4 2 8 6 8 4 2 2 8 5 4 3 5 3 6", "4 7 7 5 2 4 8 9 1 8 2 7 9 3 5 5 9 8 5 4 1 2 5 9 1", "1 8 3 1 3 5 2 3 4 7 6 2 9 4 8 4 3 4 6 8 7 8 5 5 9", "3 2 4 8 6 1 2 1 7 4 7 7 8 4 5 4 5 9 3 5 1 8 2 9 3", "3 3 3 9 6 5 7 3 4 2 3 7 6 4 2 2 9 9 3 7 5 1 8 5 6", "9 1 2 9 2 9 9 9 5 2 7 6 5 4 4 9 9 8 5 1 8 9 5 3 8", "4 2 6 2 5 9 6 8 6 3 4 5 8 4 3 7 4 9 6 2 7 6 3 8 9", "1 3 5 4 6 9 8 2 3 6 8 3 2 4 4 4 7 4 9 7 1 3 5 2 5", "4 9 4 6 6 7 7 5 8 9 6 4 1 8 9 8 7 8 2 3 6 7 4 7 6", "7 1 2 3 9 2 3 8 6 6 4 2 3 2 8 7 8 1 8 7 4 4 2 2 5", "4 5 4 1 4 7 4 3 5 9 8 9 5 6 1 8 9 2 5 4 1 3 7 7 6", "5 8 3 9 9 3 9 5 5 7 9 6 4 7 8 9 2 5 3 1 4 1 6 6 1", "8 9 7 7 1 4 9 8 3 3 7 9 6 4 8 2 4 1 9 7 1 1 6 9 6", "4 2 9 4 1 5 4 3 2 1 4 8 7 4 9 3 8 5 2 4 8 8 2 1 2", "3 2 4 9 3 5 6 1 1 3 5 1 9 9 3 2 7 7 4 3 1 2 4 6 5", "7 8 8 2 7 6 4 8 7 6 1 2 8 7 1 5 2 4 7 7 8 7 7 6 8", "3 2 1 3 1 1 9 5 9 6 6 6 4 7 3 7 5 2 1 6 7 2 8 3 9", "5 7 8 2 7 3 3 3 2 3 5 3 2 2 1 6 1 3 1 3 2 3 4 1 9", "9 1 7 2 7 6 1 9 4 2 7 2 4 3 2 3 8 7 5 5 3 6 9 8 9", "2 5 2 7 4 9 2 7 4 4 3 9 3 5 2 2 3 4 7 2 6 3 7 3 3", "9 2 7 5 5 3 8 3 2 3 5 9 6 4 6 8 4 5 6 1 5 6 4 5 3", "1 6 8 5 3 6 6 8 8 2 5 6 5 9 8 8 8 1 9 1 7 3 8 6 8", "1 5 1 1 6 8 2 8 5 7 9 4 4 9 8 1 4 4 9 6 2 7 4 6 2", "6 7 5 6 7 3 6 5 5 5 2 4 4 8 4 3 7 3 5 1 3 7 9 8 7", "2 3 9 8 3 4 6 4 3 2 4 9 2 9 9 1 9 3 4 1 8 2 3 3 3", "8 7 6 9 1 2 3 4 5 7 3 5 9 8 5 9 2 6 9 9 2 1 9 7 1", "9 5 6 3 2 7 9 6 8 7 1 3 7 6 7 2 9 2 8 2 9 5 3 5 3", "6 1 8 9 7 4 5 8 4 5 4 4 9 6 6 2 2 3 3 1 8 7 2 2 7", "8 5 6 4 5 5 7 5 6 3 9 2 9 7 2 8 6 6 3 4 4 4 9 1 8", "7 7 9 2 5 2 9 3 9 7 7 2 8 2 4 1 2 6 4 7 4 8 8 7 2", "2 6 1 9 3 2 1 6 7 5 5 1 7 9 1 8 8 3 5 7 6 6 2 4 6", "9 3 3 1 5 7 7 9 6 9 1 9 3 9 7 6 8 5 1 2 3 8 8 1 3", "6 4 3 5 6 9 7 2 8 3 2 3 8 1 2 5 1 7 2 3 2 3 4 4 8", "9 8 6 1 3 5 4 2 8 4 1 7 1 2 7 7 3 6 5 4 1 3 2 4 1", "8 5 5 6 7 4 6 4 6 8 1 8 9 6 5 5 4 6 4 4 4 5 2 2 1", "9 3 6 9 3 4 3 7 9 4 7 1 9 3 1 4 9 4 3 5 1 8 4 3 7", "5 4 6 5 4 8 8 4 7 3 7 3 4 9 5 2 1 8 3 6 3 5 6 9 4"};
    vector<string> period = {"2 9 2 1 2 2 9 6 4 8 3 4 4 8 2 5 1 9 2 3 2 3 5 7 1", "1 2 6 4 6 6 9 6 8 5 5 5 9 4 4 2 7 4 7 6 2 3 2 6 4", "3 8 8 7 7 9 4 5 7 1 6 2 9 9 8 4 8 6 8 4 7 5 6 8 2", "5 8 5 7 2 8 4 6 2 9 2 9 1 4 3 1 7 2 2 7 8 7 2 8 6", "2 3 3 5 6 2 7 1 5 7 3 8 2 5 6 7 1 1 6 2 8 9 8 8 7", "6 7 9 5 1 7 7 3 8 6 4 8 9 6 5 1 8 5 1 4 2 9 4 5 3", "6 4 2 7 6 5 7 8 8 1 3 1 5 3 4 6 7 5 5 2 4 3 7 4 7", "5 3 9 9 8 9 8 9 8 3 7 9 8 6 5 8 8 6 3 9 3 2 2 3 7", "3 5 5 5 2 4 5 3 8 7 8 5 5 8 3 8 1 9 8 6 4 2 3 6 9", "5 4 1 8 7 7 2 1 5 4 2 4 2 8 7 2 5 3 1 8 1 1 8 2 6", "2 9 5 8 3 3 2 8 2 4 9 7 5 9 9 5 2 9 2 2 3 4 9 9 6", "6 1 1 9 8 6 1 4 4 3 4 4 3 6 9 3 9 3 4 5 3 8 4 8 7", "1 1 9 2 4 3 2 6 4 3 9 6 7 5 5 8 3 9 1 3 3 2 9 6 7", "1 3 1 3 1 9 6 6 5 8 7 2 5 9 7 4 5 2 4 1 6 3 9 1 4", "1 9 9 9 3 2 2 6 2 1 7 8 9 9 4 8 6 1 3 8 5 4 4 2 1", "4 1 6 8 1 2 7 8 6 5 8 5 4 2 8 9 8 3 3 3 4 6 5 2 8", "3 6 7 9 9 2 3 2 7 8 2 5 8 9 1 6 6 6 1 1 2 4 3 4 7", "1 3 7 1 3 6 5 8 4 2 9 2 3 3 6 5 6 4 2 6 2 8 2 9 7", "4 7 5 4 1 8 9 9 7 3 6 1 9 8 2 6 5 8 9 3 4 6 9 4 2", "6 2 3 6 9 5 2 3 1 3 4 7 7 8 4 1 4 1 7 9 1 9 6 2 3", "8 4 4 4 1 4 3 7 6 3 1 7 5 7 9 4 3 7 7 9 5 1 9 5 3", "9 4 7 1 8 3 9 8 5 7 8 1 7 1 4 2 2 3 3 6 9 6 3 4 1", "1 5 9 3 3 7 4 4 5 9 9 2 2 5 6 6 5 3 3 8 2 5 2 8 9", "6 3 7 6 2 3 2 7 9 1 7 8 5 2 1 9 4 8 8 8 4 9 8 9 4", "7 3 6 1 8 9 8 1 4 4 6 8 4 9 1 7 4 5 7 6 6 4 8 2 5", "8 1 4 6 8 1 1 1 3 4 2 7 3 1 7 8 5 9 1 3 7 3 6 5 8", "5 3 6 2 9 6 6 6 4 7 2 2 4 5 8 5 5 5 2 9 4 2 7 5 8", "9 6 8 6 7 8 2 3 3 7 6 1 8 3 4 6 8 9 6 2 2 7 3 6 4", "1 5 7 7 5 9 3 9 4 6 9 6 2 9 7 2 5 6 8 1 1 2 4 8 2", "3 7 6 5 8 6 1 8 7 5 5 6 8 7 6 5 2 8 8 9 4 8 4 2 7", "5 5 6 6 6 7 1 5 7 9 5 6 7 3 1 3 2 5 2 4 1 3 2 3 7", "4 4 2 3 9 5 2 5 2 6 8 2 6 9 9 2 2 3 6 6 5 2 1 9 6", "5 2 3 6 9 3 5 9 8 1 6 1 4 6 3 5 7 8 1 9 3 6 3 3 5", "4 7 6 4 2 9 2 2 2 6 4 2 7 8 1 5 4 5 3 9 2 2 4 2 2", "1 1 9 7 7 1 2 6 7 3 9 1 6 4 1 2 7 1 4 2 2 4 8 9 5", "7 1 9 2 8 4 1 1 1 1 8 9 1 6 6 9 1 5 1 4 5 6 9 7 9", "4 7 1 1 2 5 9 2 3 7 5 3 4 6 3 4 1 8 3 9 9 6 7 2 4", "5 4 5 8 1 4 7 8 7 6 4 8 3 9 3 6 2 5 3 6 6 1 8 4 7", "5 7 7 5 7 8 3 1 8 4 1 1 3 3 7 2 9 1 7 1 6 4 9 7 8", "4 5 6 7 5 9 1 1 9 2 8 8 9 8 8 4 2 9 4 2 5 6 4 2 9", "5 2 9 8 9 5 8 9 2 9 6 3 2 7 3 7 9 6 7 3 9 9 9 5 9", "3 8 3 2 5 4 5 3 8 7 2 5 3 7 2 4 7 2 2 3 5 5 6 2 2", "2 8 3 1 2 6 8 6 4 2 5 8 7 7 3 7 8 2 3 3 2 2 3 5 6", "7 9 1 2 9 7 2 6 1 5 9 2 8 8 8 3 6 6 2 3 7 8 4 8 3", "7 3 7 1 5 6 7 1 5 5 9 4 3 1 3 5 6 7 3 5 6 9 2 7 8", "6 5 5 5 7 5 3 4 4 1 5 8 9 8 8 3 6 4 3 9 4 6 2 8 5", "7 9 5 9 1 6 7 4 8 3 9 8 4 7 5 4 8 2 2 6 7 7 7 4 5", "2 2 4 1 7 2 9 5 8 2 8 3 9 3 1 7 8 6 9 2 5 9 4 6 9", "4 9 8 8 1 4 3 7 2 4 8 2 2 1 1 1 6 5 6 4 1 7 2 7 8", "2 5 9 9 9 2 6 2 9 8 1 7 5 5 7 1 5 2 9 4 2 9 2 3 5"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 2582.0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int length = 1000000;
    int nCarriages = 1000000;
    vector<string> offset = {"1"};
    vector<string> period = {"1000000"};
    int trainSpeed = 1000000;
    int robberSpeed = 1;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 9.99999000001E11;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int length = 1000000;
    int nCarriages = 1000000;
    vector<string> offset = {"1000000"};
    vector<string> period = {"1000000"};
    int trainSpeed = 1000000;
    int robberSpeed = 1000000;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E12;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int length = 10;
    int nCarriages = 2;
    vector<string> offset = {"1"};
    vector<string> period = {"11"};
    int trainSpeed = 1;
    int robberSpeed = 7;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.099999E7;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int length = 1000000;
    int nCarriages = 1000000;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1"};
    int trainSpeed = 1000000;
    int robberSpeed = 1000000;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 800.0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int length = 1000;
    int nCarriages = 1;
    vector<string> offset = {"1000000"};
    vector<string> period = {"1000000"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 1;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 2000.0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int length = 1;
    int nCarriages = 1;
    vector<string> offset = {"10"};
    vector<string> period = {"999999"};
    int trainSpeed = 1;
    int robberSpeed = 2;
    int nBridges = 1;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int length = 5;
    int nCarriages = 1000000;
    vector<string> offset = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20"};
    vector<string> period = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 5562.0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int length = 1;
    int nCarriages = 1000;
    vector<string> offset = {"470"};
    vector<string> period = {"530"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 478923;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 2000.0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int length = 1;
    int nCarriages = 1000000;
    vector<string> offset = {"1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7"};
    vector<string> period = {"1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7", "1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7 8 9 1 2 3 4 5 6 7"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 2425.0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int length = 13;
    int nCarriages = 3;
    vector<string> offset = {"50000"};
    vector<string> period = {"12"};
    int trainSpeed = 7;
    int robberSpeed = 6;
    int nBridges = 3;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 84.49999999999409;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int length = 1000000;
    int nCarriages = 1000000;
    vector<string> offset = {"42 35 70 79 63 6 82", "62 96 28 92 3 93 22", "19 48 72 70 68 36 4", "23 74 42 54 48 63 38", "24 30 17 91 89 41 65", "47 91 71 7 94 30 85", "57 67 32 45 27 38 19", "30 34 40 5 78 74 22", "25 71 78 98 87 62 56", "56 32 51 42 67 8 8", "58 54 46 10 22 23 7", "14 1 63 11 25 49 96", "3 92 75 97 49 69 82", "54 19 1 28 29 49 8", "11 14 10 36 1 20 99", "25 45 90 96 94 24 15", "49 59 81 99 90 10 73", "39 39 91 59 16 57 3", "73 29 63 76 70 45 82", "23 22 58 93 76 1 4", "62 2 56 3 83 89 18", "33 70 22 77 69 26 35", "42 46 19 40 80 88 50", "67 94 98 87 89 56 15", "17 87 14 86 13 33 14", "22 47 82 97 30 36 74", "45 93 54 55 46 87 75", "69 88 59 3 78 15 35", "73 34 88 19 74 64 93", "3 14 3 28 44 24 62", "4 6 26 93 23 65 88", "14 71 36 12 97 86 41", "96 20 77 59 72 79 52", "19 20 1 61 11 71 77", "44 65 83 66 78 26 30", "24 3 24 38 96 65 3", "31 12 12 54 91 89 41", "63 1 59 66 78 59 4", "58 78 14 2 61 94 6", "12 36 73 24 57 27 27", "38 70 97 18 18 86 24", "30 60 97 54 85 55 58", "33 8 12 68 76 24 55", "42 60 22 27 6 51 80", "94 38 57 77 63 82 14", "56 43 12 25 53 97 41", "76 19 18 13 70 41 86", "98 91 54 52 45 36 93", "65 4 76 93 50 62 68", "30 14 2 16 14 25 93"};
    vector<string> period = {"999907 999900 999904 999908 999904 999905 999907", "999901 999902 999906 999904 999903 999902 999906", "999905 999906 999908 999902 999909 999904 999901", "999903 999904 999901 999908 999904 999907 999909", "999901 999908 999905 999902 999906 999902 999908", "999905 999909 999900 999901 999908 999903 999904", "999900 999906 999908 999909 999903 999908 999902", "999901 999905 999908 999900 999906 999906 999905", "999902 999909 999903 999902 999900 999906 999907", "999904 999902 999900 999904 999900 999901 999907", "999907 999903 999909 999908 999908 999906 999900", "999908 999901 999905 999909 999907 999903 999901", "999900 999906 999900 999901 999909 999904 999904", "999909 999908 999908 999907 999903 999903 999901", "999907 999904 999906 999901 999909 999906 999903", "999908 999909 999902 999905 999903 999907 999903", "999900 999908 999906 999901 999908 999907 999902", "999902 999909 999907 999901 999908 999901 999904", "999905 999906 999906 999903 999902 999906 999908", "999901 999909 999906 999909 999902 999900 999909", "999908 999909 999903 999905 999905 999906 999907", "999902 999904 999909 999909 999902 999905 999909", "999902 999900 999903 999903 999906 999909 999907", "999909 999905 999906 999905 999902 999904 999901", "999901 999903 999905 999903 999908 999905 999906", "999908 999902 999904 999902 999901 999900 999906", "999909 999909 999904 999900 999909 999903 999902", "999908 999905 999901 999905 999904 999904 999904", "999909 999900 999907 999907 999900 999908 999905", "999900 999907 999909 999905 999904 999902 999901", "999902 999903 999901 999902 999906 999900 999900", "999904 999900 999903 999900 999907 999900 999904", "999904 999905 999904 999902 999906 999903 999904", "999904 999902 999907 999906 999907 999905 999907", "999908 999909 999906 999907 999904 999907 999908", "999900 999902 999906 999901 999905 999900 999906", "999906 999901 999907 999900 999904 999903 999901", "999909 999903 999908 999907 999900 999909 999900", "999904 999908 999907 999900 999908 999904 999900", "999904 999906 999900 999905 999906 999907 999907", "999901 999901 999902 999902 999906 999901 999909", "999905 999902 999905 999902 999904 999902 999909", "999903 999903 999905 999908 999908 999902 999901", "999905 999905 999900 999904 999903 999908 999901", "999904 999904 999903 999905 999908 999900 999901", "999905 999902 999907 999908 999903 999903 999903", "999902 999900 999902 999905 999901 999908 999900", "999909 999905 999904 999900 999908 999909 999905", "999901 999909 999908 999907 999906 999907 999901", "999900 999904 999907 999903 999902 999901 999909"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 2.856717183E9;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int length = 1000000;
    int nCarriages = 1000000;
    vector<string> offset = {"500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000"};
    vector<string> period = {"500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000", "500000 499000 498000 497000 496000 495000 494000"};
    int trainSpeed = 1000000;
    int robberSpeed = 999000;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.420155E9;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int length = 100000;
    int nCarriages = 1000000;
    vector<string> offset = {"1000000"};
    vector<string> period = {"1000000"};
    int trainSpeed = 1;
    int robberSpeed = 2;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.666666E11;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int length = 100000;
    int nCarriages = 1000000;
    vector<string> offset = {"1000000"};
    vector<string> period = {"1000000"};
    int trainSpeed = 1;
    int robberSpeed = 2;
    int nBridges = 100000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E11;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int length = 100;
    int nCarriages = 100000;
    vector<string> offset = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15"};
    vector<string> period = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15"};
    int trainSpeed = 100;
    int robberSpeed = 100;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 6030.0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int length = 4;
    int nCarriages = 1;
    vector<string> offset = {"5"};
    vector<string> period = {"5"};
    int trainSpeed = 1;
    int robberSpeed = 7;
    int nBridges = 10;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 4.571428571428571;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int length = 1;
    int nCarriages = 1000000;
    vector<string> offset = {"7 6 6 4 2 8 9 8 7 5 6 8 9 8 4 3 8 7 6 8 7 3 2 2 10", "9 4 8 3 3 1 1 8 6 3 8 5 9 4 6 6 2 5 9 9 2 3 9 3 10", "9 7 6 5 2 3 1 6 6 6 9 7 3 2 4 9 4 1 8 8 2 4 3 7 10", "3 2 6 9 7 2 2 3 8 3 5 1 1 1 3 4 7 1 7 3 5 7 8 6 10", "6 4 3 6 1 8 6 9 7 3 8 1 1 9 4 3 8 7 5 3 6 9 1 5 10", "8 1 8 8 2 7 6 2 5 4 7 7 5 8 2 7 5 1 1 3 2 4 5 6 10", "4 4 4 9 5 8 4 7 9 3 7 8 2 3 9 4 8 1 3 5 4 2 7 5 10", "7 5 2 5 9 3 1 9 7 2 6 4 9 7 6 1 4 6 1 2 3 5 2 5 10", "6 6 6 1 3 5 9 3 7 3 9 4 9 9 3 3 5 8 7 3 8 7 6 2 10", "9 2 1 8 2 1 7 8 1 5 6 7 4 9 3 4 4 6 3 7 8 3 5 3 10", "4 3 2 1 8 9 7 6 1 8 8 8 9 1 6 6 8 9 9 7 1 3 7 9 10", "6 6 1 9 6 1 1 9 2 5 9 2 5 1 2 9 4 9 7 1 8 8 6 1 10", "7 3 9 7 2 1 8 9 7 7 2 8 4 5 4 4 7 9 4 6 3 3 4 6 10", "9 1 5 8 7 6 7 2 9 7 1 2 3 5 5 2 3 4 5 5 7 4 7 6 10", "4 9 4 7 1 7 5 1 7 6 8 2 2 8 7 9 9 6 6 5 1 3 6 5 10", "3 3 2 6 4 6 8 5 7 2 6 2 9 1 8 4 6 5 7 5 8 5 9 1 10", "3 1 4 8 5 1 8 6 7 2 9 1 7 4 9 8 5 5 1 4 4 4 9 7 10", "9 6 3 1 6 2 6 4 9 4 6 3 9 8 2 1 1 3 4 1 5 3 6 4 10", "8 4 1 9 8 9 9 4 1 7 2 3 8 8 7 7 2 1 2 1 1 4 5 3 10", "1 5 9 7 1 3 4 7 2 4 9 7 7 1 5 1 4 6 5 5 9 7 7 4 10", "7 7 4 9 5 2 7 1 6 4 1 9 8 4 9 4 2 4 1 2 7 2 9 7 10", "3 2 7 8 8 2 9 1 1 2 1 9 6 3 9 4 9 1 8 6 4 6 7 8 10", "8 9 8 3 9 2 8 3 7 2 2 2 8 5 2 1 6 4 7 8 5 4 1 7 10", "8 4 5 6 8 3 5 3 3 4 7 2 6 6 6 3 9 2 3 6 7 6 2 6 10", "7 4 2 2 3 1 1 9 8 1 8 3 2 7 9 1 2 7 1 4 3 6 9 3 10", "5 2 7 1 7 9 4 9 8 4 9 8 5 3 2 4 2 1 7 4 4 8 7 4 10", "2 4 5 1 9 3 3 8 9 1 7 2 4 7 7 2 9 1 1 8 8 6 4 7 10", "3 4 9 3 9 1 6 3 5 6 3 7 6 9 3 5 5 9 8 8 3 6 9 4 10", "5 7 1 1 6 6 8 1 8 2 9 5 3 6 2 6 5 6 4 9 1 1 6 3 10", "4 4 7 2 6 4 7 3 7 2 9 5 5 3 7 9 7 1 9 3 4 2 4 3 10", "7 4 9 3 4 2 9 6 2 5 1 2 5 9 7 9 7 2 4 6 9 4 2 2 10", "1 5 5 8 2 4 2 3 2 8 1 4 3 1 1 6 9 2 1 9 6 2 2 8 10", "3 1 5 3 2 1 5 4 6 1 7 1 6 3 1 9 2 2 7 2 4 8 5 3 10", "5 3 9 9 7 6 6 8 7 9 8 8 7 4 8 9 1 7 4 3 9 7 3 9 10", "9 4 3 3 8 2 2 6 4 3 8 3 8 4 2 4 9 1 7 8 8 2 6 3 10", "5 6 7 2 6 1 5 8 5 5 9 5 1 7 1 3 6 8 9 1 6 1 6 7 10", "8 9 8 4 3 5 1 7 2 7 2 6 5 5 8 2 7 3 6 1 3 6 6 3 10", "7 9 6 4 6 3 9 6 3 3 3 2 2 5 5 4 8 5 2 3 6 7 2 1 10", "1 3 1 7 9 5 1 9 4 8 9 2 8 1 3 1 1 8 2 8 8 7 3 5 10", "5 3 5 1 5 2 5 7 2 6 3 7 8 1 9 2 1 4 3 1 6 1 5 2 10", "8 7 5 8 5 4 1 9 2 8 6 1 4 8 9 3 7 2 7 4 6 2 5 1 10", "3 2 1 1 2 7 6 2 6 1 2 8 4 5 1 8 5 1 1 1 6 5 6 9 10", "3 6 6 7 9 6 5 5 6 2 7 6 7 2 9 1 7 9 8 1 4 7 7 8 10", "1 6 6 3 2 6 6 4 8 4 5 1 8 1 9 3 3 1 4 4 1 2 5 5 10", "7 1 9 8 3 4 7 8 2 9 7 1 6 1 9 5 4 1 6 1 6 4 1 8 10", "9 6 8 7 7 8 3 5 6 9 4 4 4 9 5 3 8 1 3 3 7 7 8 2 10", "1 5 6 9 9 3 6 2 5 7 2 3 4 4 8 6 6 2 8 7 8 4 7 7 10", "8 5 1 5 5 8 5 9 1 1 7 3 6 2 8 4 5 1 1 9 1 5 1 5 10", "8 9 9 7 9 8 7 7 2 8 5 3 3 4 4 3 8 4 9 8 8 3 8 3 10", "1 3 9 3 6 4 3 7 3 2 5 7 2 2 4 7 8 7 8 6 9 1 3 8 10"};
    vector<string> period = {"7 6 6 4 2 8 9 8 7 5 6 8 9 8 4 3 8 7 6 8 7 3 2 2 10", "9 4 8 3 3 1 1 8 6 3 8 5 9 4 6 6 2 5 9 9 2 3 9 3 10", "9 7 6 5 2 3 1 6 6 6 9 7 3 2 4 9 4 1 8 8 2 4 3 7 10", "3 2 6 9 7 2 2 3 8 3 5 1 1 1 3 4 7 1 7 3 5 7 8 6 10", "6 4 3 6 1 8 6 9 7 3 8 1 1 9 4 3 8 7 5 3 6 9 1 5 10", "8 1 8 8 2 7 6 2 5 4 7 7 5 8 2 7 5 1 1 3 2 4 5 6 10", "4 4 4 9 5 8 4 7 9 3 7 8 2 3 9 4 8 1 3 5 4 2 7 5 10", "7 5 2 5 9 3 1 9 7 2 6 4 9 7 6 1 4 6 1 2 3 5 2 5 10", "6 6 6 1 3 5 9 3 7 3 9 4 9 9 3 3 5 8 7 3 8 7 6 2 10", "9 2 1 8 2 1 7 8 1 5 6 7 4 9 3 4 4 6 3 7 8 3 5 3 10", "4 3 2 1 8 9 7 6 1 8 8 8 9 1 6 6 8 9 9 7 1 3 7 9 10", "6 6 1 9 6 1 1 9 2 5 9 2 5 1 2 9 4 9 7 1 8 8 6 1 10", "7 3 9 7 2 1 8 9 7 7 2 8 4 5 4 4 7 9 4 6 3 3 4 6 10", "9 1 5 8 7 6 7 2 9 7 1 2 3 5 5 2 3 4 5 5 7 4 7 6 10", "4 9 4 7 1 7 5 1 7 6 8 2 2 8 7 9 9 6 6 5 1 3 6 5 10", "3 3 2 6 4 6 8 5 7 2 6 2 9 1 8 4 6 5 7 5 8 5 9 1 10", "3 1 4 8 5 1 8 6 7 2 9 1 7 4 9 8 5 5 1 4 4 4 9 7 10", "9 6 3 1 6 2 6 4 9 4 6 3 9 8 2 1 1 3 4 1 5 3 6 4 10", "8 4 1 9 8 9 9 4 1 7 2 3 8 8 7 7 2 1 2 1 1 4 5 3 10", "1 5 9 7 1 3 4 7 2 4 9 7 7 1 5 1 4 6 5 5 9 7 7 4 10", "7 7 4 9 5 2 7 1 6 4 1 9 8 4 9 4 2 4 1 2 7 2 9 7 10", "3 2 7 8 8 2 9 1 1 2 1 9 6 3 9 4 9 1 8 6 4 6 7 8 10", "8 9 8 3 9 2 8 3 7 2 2 2 8 5 2 1 6 4 7 8 5 4 1 7 10", "8 4 5 6 8 3 5 3 3 4 7 2 6 6 6 3 9 2 3 6 7 6 2 6 10", "7 4 2 2 3 1 1 9 8 1 8 3 2 7 9 1 2 7 1 4 3 6 9 3 10", "5 2 7 1 7 9 4 9 8 4 9 8 5 3 2 4 2 1 7 4 4 8 7 4 10", "2 4 5 1 9 3 3 8 9 1 7 2 4 7 7 2 9 1 1 8 8 6 4 7 10", "3 4 9 3 9 1 6 3 5 6 3 7 6 9 3 5 5 9 8 8 3 6 9 4 10", "5 7 1 1 6 6 8 1 8 2 9 5 3 6 2 6 5 6 4 9 1 1 6 3 10", "4 4 7 2 6 4 7 3 7 2 9 5 5 3 7 9 7 1 9 3 4 2 4 3 10", "7 4 9 3 4 2 9 6 2 5 1 2 5 9 7 9 7 2 4 6 9 4 2 2 10", "1 5 5 8 2 4 2 3 2 8 1 4 3 1 1 6 9 2 1 9 6 2 2 8 10", "3 1 5 3 2 1 5 4 6 1 7 1 6 3 1 9 2 2 7 2 4 8 5 3 10", "5 3 9 9 7 6 6 8 7 9 8 8 7 4 8 9 1 7 4 3 9 7 3 9 10", "9 4 3 3 8 2 2 6 4 3 8 3 8 4 2 4 9 1 7 8 8 2 6 3 10", "5 6 7 2 6 1 5 8 5 5 9 5 1 7 1 3 6 8 9 1 6 1 6 7 10", "8 9 8 4 3 5 1 7 2 7 2 6 5 5 8 2 7 3 6 1 3 6 6 3 10", "7 9 6 4 6 3 9 6 3 3 3 2 2 5 5 4 8 5 2 3 6 7 2 1 10", "1 3 1 7 9 5 1 9 4 8 9 2 8 1 3 1 1 8 2 8 8 7 3 5 10", "5 3 5 1 5 2 5 7 2 6 3 7 8 1 9 2 1 4 3 1 6 1 5 2 10", "8 7 5 8 5 4 1 9 2 8 6 1 4 8 9 3 7 2 7 4 6 2 5 1 10", "3 2 1 1 2 7 6 2 6 1 2 8 4 5 1 8 5 1 1 1 6 5 6 9 10", "3 6 6 7 9 6 5 5 6 2 7 6 7 2 9 1 7 9 8 1 4 7 7 8 10", "1 6 6 3 2 6 6 4 8 4 5 1 8 1 9 3 3 1 4 4 1 2 5 5 10", "7 1 9 8 3 4 7 8 2 9 7 1 6 1 9 5 4 1 6 1 6 4 1 8 10", "9 6 8 7 7 8 3 5 6 9 4 4 4 9 5 3 8 1 3 3 7 7 8 2 10", "1 5 6 9 9 3 6 2 5 7 2 3 4 4 8 6 6 2 8 7 8 4 7 7 10", "8 5 1 5 5 8 5 9 1 1 7 3 6 2 8 4 5 1 1 9 1 5 1 5 10", "8 9 9 7 9 8 7 7 2 8 5 3 3 4 4 3 8 4 9 8 8 3 8 3 10", "1 3 9 3 6 4 3 7 3 2 5 7 2 2 4 7 8 7 8 6 9 1 3 8 10"};
    int trainSpeed = 10;
    int robberSpeed = 1000;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 2536.0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int length = 1000000;
    int nCarriages = 1000000;
    vector<string> offset = {"1000000"};
    vector<string> period = {"1000000"};
    int trainSpeed = 1;
    int robberSpeed = 2;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E12;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int length = 1000000;
    int nCarriages = 1000000;
    vector<string> offset = {"1000000"};
    vector<string> period = {"1000000"};
    int trainSpeed = 999999;
    int robberSpeed = 1000000;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E12;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int length = 1;
    int nCarriages = 1;
    vector<string> offset = {"1000"};
    vector<string> period = {"10000"};
    int trainSpeed = 1;
    int robberSpeed = 1;
    int nBridges = 10000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int length = 999999;
    int nCarriages = 999999;
    vector<string> offset = {"1"};
    vector<string> period = {"1000000"};
    int trainSpeed = 1;
    int robberSpeed = 3;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 9.99999000001E11;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int length = 1000000;
    int nCarriages = 1000000;
    vector<string> offset = {"100000"};
    vector<string> period = {"100000"};
    int trainSpeed = 1000000;
    int robberSpeed = 1;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0E11;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int length = 1000000;
    int nCarriages = 1000000;
    vector<string> offset = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5"};
    vector<string> period = {"1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5", "1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 2 3 4 5"};
    int trainSpeed = 300000;
    int robberSpeed = 1;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 898.0;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int length = 9997;
    int nCarriages = 999903;
    vector<string> offset = {"113 66 555555 99 99 99 99 99 99 99 99 99 99 99", "99 99 99 99 99 99 99 99 99 99 99 99 99 99 99", "99 99 99 99 99 99 1000000"};
    vector<string> period = {"999937 999996 993333 999999 999999 999999 999999", "999999 999999 999999 999999 999999 999999 999999", "999999 999999 999999 999999 999999 999999 999999", "999999 999999 999999 999999 999999 999999 999999", "999999 999999 999999 999999 999999 999999 999999", "1000000"};
    int trainSpeed = 5604;
    int robberSpeed = 111111;
    int nBridges = 999998;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0780021002418392E10;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int length = 1000000;
    int nCarriages = 1000000;
    vector<string> offset = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20"};
    vector<string> period = {"1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20", "1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20"};
    int trainSpeed = 1000;
    int robberSpeed = 1000;
    int nBridges = 1000000;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 5562.0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int length = 2;
    int nCarriages = 3;
    vector<string> offset = {"70"};
    vector<string> period = {"2"};
    int trainSpeed = 2;
    int robberSpeed = 80;
    int nBridges = 200;
    TrainRobber* pObj = new TrainRobber();
    clock_t start = clock();
    double result = pObj->finalPosition(length, nCarriages, offset, period, trainSpeed, robberSpeed, nBridges);
    clock_t end = clock();
    delete pObj;
    double expected = 6.150000000000006;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8357090&rd=9987&pm=6448
********************************************************************************
// another fine solution by misof
// #includes {{{
#include <algorithm>
#include <numeric>
 
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <queue>
#include <set>
#include <map>
 
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cassert>
 
#include <cmath>
#include <complex>
using namespace std;
// }}}
 
/////////////////// PRE-WRITTEN CODE FOLLOWS, LOOK DOWN FOR THE SOLUTION ////////////////////////////////
 
// pre-written code {{{
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define SIZE(t) ((int)((t).size()))
vector<string> SPLIT( const string& s, const string& delim =" " ) { vector<string> res; string t; for ( unsigned int i = 0 ; i != s.size() ; i++ ) { if ( delim.find( s[i] ) != string::npos ) { if ( !t.empty() ) { res.push_back( t ); t = ""; } } else { t += s[i]; } } if ( !t.empty() ) { res.push_back(t); } return res; }
vector<int> SPLITINT( const string& s, const string& delim =" " ) { vector<string> tok = SPLIT( s, delim ); vector<int> res; for ( unsigned int i = 0 ; i != tok.size(); i++ ) res.push_back( atoi( tok[i].c_str() ) ); return res; }
typedef vector<int> VI;
// }}}
 
/////////////////// CODE WRITTEN DURING THE COMPETITION FOLLOWS ////////////////////////////////
 
vector<long long> offset;
vector<long long> period;
 
class TrainRobber {
public:
  double finalPosition(int length, int nCarriages, vector <string> _offset, vector <string> _period, int trainSpeed, int robberSpeed, int nBridges) {
    
    offset.clear();
    REP(i,SIZE(_offset)) { VI V = SPLITINT(_offset[i]); REP(j,SIZE(V)) offset.push_back(V[j]); }
 
    period.clear();
    REP(i,SIZE(_period)) { VI V = SPLITINT(_period[i]); REP(j,SIZE(V)) period.push_back(V[j]); }
 
    int B = SIZE(offset);
 
    long long speed = trainSpeed + robberSpeed;
 
    int passedCarriages = 0;
 
    int passedBridges = 0;
 
    long long x = 0;
 
    while (passedBridges < nBridges) {
      long long nextBridge = 987654321987654321LL;
      REP(i,B) nextBridge <?= offset[i];
      REP(i,B) if (offset[i]==nextBridge) { passedBridges++; offset[i] += period[i]; }
 
      long long distance = nextBridge - x;
      
      int now = (distance * robberSpeed) / (length * speed);
      if (now + passedCarriages < nCarriages) { passedCarriages += now; x = nextBridge; continue; }
      return x + (nCarriages-passedCarriages) * speed * double(length) / robberSpeed;
    }
    return double(x);
  }
 
 
};
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/