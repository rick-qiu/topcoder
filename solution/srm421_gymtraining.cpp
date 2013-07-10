/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10105
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

class GymTraining {
public:
    int trainingTime(int needToTrain, int minPulse, int maxPulse, int trainChange, int restChange);
};

int GymTraining::trainingTime(int needToTrain, int minPulse, int maxPulse, int trainChange, int restChange) {
    int ret;
    return ret;
}


int test0() {
    int needToTrain = 5;
    int minPulse = 70;
    int maxPulse = 120;
    int trainChange = 25;
    int restChange = 15;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int needToTrain = 100;
    int minPulse = 50;
    int maxPulse = 100;
    int trainChange = 5;
    int restChange = 200;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 109;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int needToTrain = 1;
    int minPulse = 60;
    int maxPulse = 70;
    int trainChange = 11;
    int restChange = 11;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int needToTrain = 200;
    int minPulse = 50;
    int maxPulse = 200;
    int trainChange = 150;
    int restChange = 1;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 30050;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int needToTrain = 19;
    int minPulse = 89;
    int maxPulse = 143;
    int trainChange = 17;
    int restChange = 13;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int needToTrain = 1;
    int minPulse = 50;
    int maxPulse = 50;
    int trainChange = 1;
    int restChange = 1;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int needToTrain = 1;
    int minPulse = 199;
    int maxPulse = 200;
    int trainChange = 1;
    int restChange = 1;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
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
    int needToTrain = 200;
    int minPulse = 50;
    int maxPulse = 200;
    int trainChange = 150;
    int restChange = 150;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 399;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int needToTrain = 200;
    int minPulse = 50;
    int maxPulse = 200;
    int trainChange = 1;
    int restChange = 150;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int needToTrain = 200;
    int minPulse = 50;
    int maxPulse = 200;
    int trainChange = 1;
    int restChange = 1;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 250;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int needToTrain = 200;
    int minPulse = 50;
    int maxPulse = 200;
    int trainChange = 200;
    int restChange = 200;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int needToTrain = 187;
    int minPulse = 79;
    int maxPulse = 170;
    int trainChange = 177;
    int restChange = 154;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int needToTrain = 189;
    int minPulse = 140;
    int maxPulse = 164;
    int trainChange = 29;
    int restChange = 140;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int needToTrain = 16;
    int minPulse = 72;
    int maxPulse = 199;
    int trainChange = 177;
    int restChange = 117;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int needToTrain = 163;
    int minPulse = 95;
    int maxPulse = 164;
    int trainChange = 186;
    int restChange = 74;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int needToTrain = 52;
    int minPulse = 55;
    int maxPulse = 153;
    int trainChange = 146;
    int restChange = 135;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int needToTrain = 149;
    int minPulse = 89;
    int maxPulse = 170;
    int trainChange = 79;
    int restChange = 35;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 593;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int needToTrain = 101;
    int minPulse = 167;
    int maxPulse = 183;
    int trainChange = 14;
    int restChange = 53;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 201;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int needToTrain = 159;
    int minPulse = 63;
    int maxPulse = 126;
    int trainChange = 2;
    int restChange = 169;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 164;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int needToTrain = 173;
    int minPulse = 94;
    int maxPulse = 181;
    int trainChange = 64;
    int restChange = 75;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 345;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int needToTrain = 173;
    int minPulse = 63;
    int maxPulse = 166;
    int trainChange = 50;
    int restChange = 29;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 468;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int needToTrain = 91;
    int minPulse = 72;
    int maxPulse = 136;
    int trainChange = 2;
    int restChange = 65;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 93;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int needToTrain = 25;
    int minPulse = 77;
    int maxPulse = 168;
    int trainChange = 8;
    int restChange = 160;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 27;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int needToTrain = 120;
    int minPulse = 55;
    int maxPulse = 112;
    int trainChange = 39;
    int restChange = 67;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 239;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int needToTrain = 12;
    int minPulse = 108;
    int maxPulse = 171;
    int trainChange = 59;
    int restChange = 109;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int needToTrain = 163;
    int minPulse = 52;
    int maxPulse = 166;
    int trainChange = 38;
    int restChange = 125;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 217;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int needToTrain = 138;
    int minPulse = 55;
    int maxPulse = 172;
    int trainChange = 69;
    int restChange = 29;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 463;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int needToTrain = 7;
    int minPulse = 77;
    int maxPulse = 160;
    int trainChange = 29;
    int restChange = 148;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int needToTrain = 134;
    int minPulse = 85;
    int maxPulse = 137;
    int trainChange = 8;
    int restChange = 169;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 156;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int needToTrain = 135;
    int minPulse = 76;
    int maxPulse = 147;
    int trainChange = 62;
    int restChange = 45;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 403;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int needToTrain = 175;
    int minPulse = 65;
    int maxPulse = 188;
    int trainChange = 21;
    int restChange = 109;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 209;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int needToTrain = 185;
    int minPulse = 81;
    int maxPulse = 196;
    int trainChange = 80;
    int restChange = 10;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 1654;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int needToTrain = 152;
    int minPulse = 77;
    int maxPulse = 187;
    int trainChange = 33;
    int restChange = 173;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 202;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int needToTrain = 154;
    int minPulse = 57;
    int maxPulse = 133;
    int trainChange = 53;
    int restChange = 67;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 307;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int needToTrain = 39;
    int minPulse = 59;
    int maxPulse = 196;
    int trainChange = 123;
    int restChange = 158;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 77;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int needToTrain = 135;
    int minPulse = 102;
    int maxPulse = 166;
    int trainChange = 34;
    int restChange = 102;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 269;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int needToTrain = 146;
    int minPulse = 155;
    int maxPulse = 198;
    int trainChange = 9;
    int restChange = 76;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 182;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int needToTrain = 36;
    int minPulse = 158;
    int maxPulse = 186;
    int trainChange = 18;
    int restChange = 185;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 71;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int needToTrain = 61;
    int minPulse = 110;
    int maxPulse = 192;
    int trainChange = 21;
    int restChange = 117;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int needToTrain = 140;
    int minPulse = 88;
    int maxPulse = 184;
    int trainChange = 57;
    int restChange = 135;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 279;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int needToTrain = 32;
    int minPulse = 74;
    int maxPulse = 187;
    int trainChange = 2;
    int restChange = 19;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 32;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int needToTrain = 38;
    int minPulse = 69;
    int maxPulse = 192;
    int trainChange = 58;
    int restChange = 154;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 56;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int needToTrain = 17;
    int minPulse = 71;
    int maxPulse = 134;
    int trainChange = 9;
    int restChange = 100;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int needToTrain = 1;
    int minPulse = 72;
    int maxPulse = 200;
    int trainChange = 25;
    int restChange = 182;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int needToTrain = 108;
    int minPulse = 53;
    int maxPulse = 149;
    int trainChange = 96;
    int restChange = 59;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 322;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int needToTrain = 22;
    int minPulse = 130;
    int maxPulse = 192;
    int trainChange = 61;
    int restChange = 191;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int needToTrain = 1;
    int minPulse = 137;
    int maxPulse = 167;
    int trainChange = 11;
    int restChange = 160;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int needToTrain = 2;
    int minPulse = 66;
    int maxPulse = 142;
    int trainChange = 60;
    int restChange = 178;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int needToTrain = 4;
    int minPulse = 87;
    int maxPulse = 124;
    int trainChange = 4;
    int restChange = 180;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int needToTrain = 6;
    int minPulse = 125;
    int maxPulse = 155;
    int trainChange = 22;
    int restChange = 149;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int needToTrain = 24;
    int minPulse = 88;
    int maxPulse = 198;
    int trainChange = 1;
    int restChange = 175;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 24;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int needToTrain = 26;
    int minPulse = 55;
    int maxPulse = 91;
    int trainChange = 23;
    int restChange = 168;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int needToTrain = 118;
    int minPulse = 66;
    int maxPulse = 170;
    int trainChange = 3;
    int restChange = 124;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int needToTrain = 137;
    int minPulse = 118;
    int maxPulse = 196;
    int trainChange = 13;
    int restChange = 185;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 159;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int needToTrain = 171;
    int minPulse = 53;
    int maxPulse = 115;
    int trainChange = 59;
    int restChange = 72;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 341;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int needToTrain = 69;
    int minPulse = 50;
    int maxPulse = 173;
    int trainChange = 85;
    int restChange = 9;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 707;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int needToTrain = 121;
    int minPulse = 72;
    int maxPulse = 126;
    int trainChange = 35;
    int restChange = 4;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 1167;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int needToTrain = 140;
    int minPulse = 76;
    int maxPulse = 185;
    int trainChange = 59;
    int restChange = 3;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 2857;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int needToTrain = 149;
    int minPulse = 81;
    int maxPulse = 146;
    int trainChange = 63;
    int restChange = 2;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 4810;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int needToTrain = 89;
    int minPulse = 56;
    int maxPulse = 188;
    int trainChange = 125;
    int restChange = 1;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 11082;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int needToTrain = 161;
    int minPulse = 58;
    int maxPulse = 191;
    int trainChange = 115;
    int restChange = 1;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 18543;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int needToTrain = 20;
    int minPulse = 60;
    int maxPulse = 150;
    int trainChange = 5;
    int restChange = 13;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int needToTrain = 100;
    int minPulse = 100;
    int maxPulse = 101;
    int trainChange = 5;
    int restChange = 1;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int needToTrain = 40;
    int minPulse = 60;
    int maxPulse = 80;
    int trainChange = 10;
    int restChange = 5;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 116;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int needToTrain = 50;
    int minPulse = 100;
    int maxPulse = 101;
    int trainChange = 10;
    int restChange = 1;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int needToTrain = 3;
    int minPulse = 70;
    int maxPulse = 100;
    int trainChange = 20;
    int restChange = 50;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int needToTrain = 10;
    int minPulse = 100;
    int maxPulse = 101;
    int trainChange = 1;
    int restChange = 10;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int needToTrain = 1;
    int minPulse = 50;
    int maxPulse = 200;
    int trainChange = 1;
    int restChange = 1;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int needToTrain = 10;
    int minPulse = 50;
    int maxPulse = 55;
    int trainChange = 1;
    int restChange = 10;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int needToTrain = 100;
    int minPulse = 50;
    int maxPulse = 50;
    int trainChange = 10;
    int restChange = 1;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int needToTrain = 10;
    int minPulse = 50;
    int maxPulse = 100;
    int trainChange = 30;
    int restChange = 80;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int needToTrain = 200;
    int minPulse = 199;
    int maxPulse = 199;
    int trainChange = 20;
    int restChange = 1;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int needToTrain = 2;
    int minPulse = 60;
    int maxPulse = 70;
    int trainChange = 10;
    int restChange = 20;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int needToTrain = 200;
    int minPulse = 50;
    int maxPulse = 200;
    int trainChange = 100;
    int restChange = 160;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 399;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int needToTrain = 50;
    int minPulse = 100;
    int maxPulse = 120;
    int trainChange = 19;
    int restChange = 17;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 148;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int needToTrain = 10;
    int minPulse = 100;
    int maxPulse = 200;
    int trainChange = 100;
    int restChange = 1;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 910;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int needToTrain = 3;
    int minPulse = 50;
    int maxPulse = 100;
    int trainChange = 30;
    int restChange = 100;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int needToTrain = 5;
    int minPulse = 80;
    int maxPulse = 90;
    int trainChange = 9;
    int restChange = 20;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int needToTrain = 10;
    int minPulse = 100;
    int maxPulse = 200;
    int trainChange = 150;
    int restChange = 50;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int needToTrain = 184;
    int minPulse = 79;
    int maxPulse = 126;
    int trainChange = 29;
    int restChange = 66;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 367;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int needToTrain = 50;
    int minPulse = 50;
    int maxPulse = 100;
    int trainChange = 5;
    int restChange = 2;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 150;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int needToTrain = 150;
    int minPulse = 50;
    int maxPulse = 60;
    int trainChange = 8;
    int restChange = 10;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 299;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int needToTrain = 5;
    int minPulse = 50;
    int maxPulse = 200;
    int trainChange = 2;
    int restChange = 1;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int needToTrain = 100;
    int minPulse = 50;
    int maxPulse = 51;
    int trainChange = 100;
    int restChange = 50;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int needToTrain = 100;
    int minPulse = 60;
    int maxPulse = 70;
    int trainChange = 20;
    int restChange = 30;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int needToTrain = 8;
    int minPulse = 50;
    int maxPulse = 60;
    int trainChange = 11;
    int restChange = 9;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int needToTrain = 5;
    int minPulse = 50;
    int maxPulse = 100;
    int trainChange = 1;
    int restChange = 5;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int needToTrain = 5;
    int minPulse = 50;
    int maxPulse = 60;
    int trainChange = 10;
    int restChange = 6;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int needToTrain = 10;
    int minPulse = 50;
    int maxPulse = 100;
    int trainChange = 25;
    int restChange = 100;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int needToTrain = 200;
    int minPulse = 50;
    int maxPulse = 200;
    int trainChange = 74;
    int restChange = 47;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 512;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int needToTrain = 20;
    int minPulse = 50;
    int maxPulse = 200;
    int trainChange = 150;
    int restChange = 100;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 58;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int needToTrain = 2;
    int minPulse = 50;
    int maxPulse = 55;
    int trainChange = 7;
    int restChange = 6;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int needToTrain = 10;
    int minPulse = 50;
    int maxPulse = 60;
    int trainChange = 9;
    int restChange = 200;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 19;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int needToTrain = 5;
    int minPulse = 100;
    int maxPulse = 104;
    int trainChange = 2;
    int restChange = 6;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int needToTrain = 80;
    int minPulse = 50;
    int maxPulse = 100;
    int trainChange = 1;
    int restChange = 80;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 81;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int needToTrain = 1;
    int minPulse = 100;
    int maxPulse = 200;
    int trainChange = 1;
    int restChange = 1;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int needToTrain = 10;
    int minPulse = 50;
    int maxPulse = 100;
    int trainChange = 30;
    int restChange = 10;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 35;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int needToTrain = 20;
    int minPulse = 50;
    int maxPulse = 200;
    int trainChange = 50;
    int restChange = 101;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int needToTrain = 199;
    int minPulse = 100;
    int maxPulse = 120;
    int trainChange = 1;
    int restChange = 100;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 208;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int needToTrain = 2;
    int minPulse = 50;
    int maxPulse = 200;
    int trainChange = 2;
    int restChange = 2;
    GymTraining* pObj = new GymTraining();
    clock_t start = clock();
    int result = pObj->trainingTime(needToTrain, minPulse, maxPulse, trainChange, restChange);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22740212&rd=13512&pm=10105
********************************************************************************
#include <iostream>
 
using namespace std;
 
class GymTraining {
public:
  int trainingTime(int need, int mi, int ma, int train, int rest) {
    int p=mi;
    
    if(p+train>ma) return -1;
    
    int total=0;
    int work=0;
    while(work<need) {
      total++;
      if(p+train<=ma) {
        p+=train;
        work+=1;
      } else {
        p-=rest;
        if(p<mi) p=mi;
      }
    
    }
    
    return total;
  }
 
};

********************************************************************************
*******************************************************************************/