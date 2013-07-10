/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11322
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

class CubeRoll {
public:
    int getMinimumSteps(int initPos, int goalPos, vector<int> holePos);
};

int CubeRoll::getMinimumSteps(int initPos, int goalPos, vector<int> holePos) {
    int ret;
    return ret;
}


int test0() {
    int initPos = 5;
    int goalPos = 1;
    vector<int> holePos = {3};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int initPos = 36;
    int goalPos = 72;
    vector<int> holePos = {300, 100, 200, 400};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int initPos = 10;
    int goalPos = 21;
    vector<int> holePos = {38, 45};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int initPos = 98765;
    int goalPos = 4963;
    vector<int> holePos = {10, 20, 40, 30};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int initPos = 68332;
    int goalPos = 825;
    vector<int> holePos = {99726, 371, 67, 89210};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int initPos = 2;
    int goalPos = 17;
    vector<int> holePos = {1, 18};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int initPos = 2;
    int goalPos = 305;
    vector<int> holePos = {1, 306};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int initPos = 2;
    int goalPos = 99998;
    vector<int> holePos = {1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int initPos = 5;
    int goalPos = 12;
    vector<int> holePos = {4, 13};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int initPos = 100000;
    int goalPos = 1;
    vector<int> holePos = {83170};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int initPos = 100000;
    int goalPos = 1;
    vector<int> holePos = {84007, 87055, 80458, 19984, 27981, 61345, 93084, 70385, 49743, 83726, 79834, 37359, 68678, 82270, 68978, 61167, 83727, 14014, 88719, 36106, 15660, 65961, 19485, 34840, 96215, 4081, 64836, 63087, 15644, 60820, 53701, 3625, 10375, 14117, 54507, 31153, 64698, 42249, 27051, 66307, 46344, 13120, 42878, 87056, 46230, 53213, 50614, 94973, 29643, 50780};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
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
    int initPos = 100;
    int goalPos = 99900;
    vector<int> holePos = {99997, 88, 30, 62, 36, 99985, 56, 35, 99993, 79, 39, 50, 45, 57, 2, 99903, 94, 92, 99972, 99960, 53, 26, 99978, 99955, 99959, 99963, 99974, 84, 99904, 80, 99956, 14, 99951, 22, 75563, 99915, 65, 23, 99923, 91, 19, 99970, 78, 76, 99999, 99980, 67, 72, 99919, 99968};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
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
    int initPos = 500;
    int goalPos = 5;
    vector<int> holePos = {402, 35031, 11782, 11, 23957, 94, 67486, 42900, 102, 92126, 491, 348, 117, 33, 96527, 283, 318, 205, 57, 80, 5970, 17804, 20, 137, 489, 66473, 287, 97946, 161, 12486, 56, 440, 42293, 79091, 415, 411, 3014, 26756, 298, 59631, 19422, 16147, 31268, 56326};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
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
    int initPos = 4000;
    int goalPos = 20;
    vector<int> holePos = {3930, 18020, 16946, 3497, 37758, 12214, 2479, 2830, 97198, 41982, 3772, 38106, 2247, 2864, 142, 49514, 89682, 869, 73794, 72308, 95252, 70637, 308, 2745, 2361, 7290, 1830, 70414, 1547, 98729, 8198, 1538, 497, 374, 20388, 2196, 52457, 3180, 96118, 753, 126, 5993, 28111, 1865, 2906};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
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
    int initPos = 13500;
    int goalPos = 45;
    vector<int> holePos = {598, 18463, 1942, 90899, 70, 57338, 91863, 9136, 9276, 10310, 29093, 3826, 5884, 9820, 37556, 5793, 64756, 19179, 82214, 3367, 90708, 42222, 31603, 49761, 22555, 1024, 23218, 8310, 61892, 90873, 6929, 9345, 1678, 6309, 10487, 182, 10167, 12378, 99079, 65771, 7555, 68399, 2320, 58408, 4906, 29232, 75580, 92364, 8720};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
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
    int initPos = 80;
    int goalPos = 32000;
    vector<int> holePos = {31132, 62727, 64617, 18409, 85238, 61012, 22532, 9737, 4074, 76986, 22867, 48724, 48246, 16595, 13065, 25898, 71904, 29758, 87428, 40010, 53473, 13364, 8420, 3676, 11202, 29497, 8851, 8936, 94896, 6288, 56298, 92944, 83590, 50204, 26374, 41771, 33599, 57193, 52002, 5035, 7946, 97215, 85907, 21210, 91532, 86571, 13646, 43247, 5417};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
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
    int initPos = 125;
    int goalPos = 62500;
    vector<int> holePos = {86735, 23446, 5613, 99969, 80858, 51974, 78982, 78892, 51570, 52484, 24473, 70032, 77616, 51006, 64916, 16505, 85550, 37993, 46191, 60057, 58373, 86305, 10123, 19582, 99937, 75384, 97491, 64553, 87825, 26959, 95094, 74754, 3015, 53212, 69008, 74596, 21846, 81977, 50089, 12671, 83023, 67478, 22967, 79903, 89445, 71889};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int initPos = 42807;
    int goalPos = 44571;
    vector<int> holePos = {39017, 20306, 29032, 25977, 18312, 42424, 27909, 22813, 42264, 33996, 14393, 12311, 33005, 16254, 20880, 126, 19777, 31443, 9321, 5760, 1160, 20301, 34356, 32737, 20907, 32171, 36059, 25373, 11937, 16767, 30015, 33421, 3569, 1574, 29407, 22544, 35042, 19455, 40334, 14547, 7328, 27007, 10953, 32956, 39191, 29707, 5139, 41106, 35028, 5366};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int initPos = 54627;
    int goalPos = 42306;
    vector<int> holePos = {20880, 21947, 35698, 2069, 11757, 9378, 23155, 5266, 7547, 41617, 40141, 36453, 28348, 9017, 31643, 11742, 14480, 16940, 30819, 36171, 16280, 23169, 17051, 32112, 5875, 804, 9070, 28071, 17921, 19884, 18080, 842, 34787, 31438, 6665, 25647, 42212, 3686, 757, 20587, 5328, 6685, 21035, 20809, 31072, 16034, 40403, 14770};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int initPos = 71392;
    int goalPos = 37536;
    vector<int> holePos = {30734, 35499, 29902, 28174, 16650, 10515, 36171, 37517, 10103, 22950, 32581, 1497, 6314, 25959, 5568, 4697, 19370, 34984, 13439, 11214, 26501, 1759, 31413, 1001, 31339, 583, 8739, 16190, 18726, 26133, 24686, 6789, 16937, 33828, 5047, 34121, 13556, 33036, 16647, 1301, 17829, 28842, 20613, 12600, 20092, 29041, 21754};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int initPos = 87094;
    int goalPos = 15270;
    vector<int> holePos = {13564, 13878, 13511, 13539, 11622, 8103, 10072, 7418, 1288, 6236, 15162, 9296, 8581, 7012, 10220, 1358, 8874, 6462, 13984, 11529, 10283, 7925, 9851, 8921, 5526, 13293, 8032, 3027, 10488, 3902, 10905, 4835, 6415, 4799, 142, 1099, 6023, 4523, 9215, 7917, 12353, 11323, 6725, 10247, 4376, 7660, 5317, 7817, 13548};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int initPos = 99953;
    int goalPos = 97;
    vector<int> holePos = {31, 21, 57, 19, 50, 69, 11, 33, 88, 29, 84, 9, 59, 73, 87, 48, 16, 40, 83, 77, 71, 72, 3, 38, 81, 96, 15, 37, 78, 42, 93, 52, 92, 5, 64, 76, 82, 13, 66, 28, 30, 23, 63, 2, 56, 26, 8, 90, 89, 54};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int initPos = 99979;
    int goalPos = 99980;
    vector<int> holePos = {60, 43, 17, 6, 42, 10, 7, 77, 72, 74, 65, 59, 64, 30, 15, 50, 36, 12, 2, 71, 78, 54, 79, 69, 38, 32, 48, 73, 22, 26, 11, 51, 76, 31, 46, 49, 5, 24, 61, 1, 35, 47, 67, 62, 75, 45, 55, 34, 18, 3};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int initPos = 3778;
    int goalPos = 69614;
    vector<int> holePos = {88990, 84320, 71593, 82597, 97011, 92362, 93937, 84916, 72944, 69615, 86984, 86829, 72635, 97499, 80615, 99263, 74480, 96760, 79837, 84024, 95648, 80509, 91922, 87689, 87279, 95983, 82550, 87758, 95270, 74859, 92796, 86473, 73883, 89786, 96784, 71668, 89975, 74179, 72382, 81843, 91164, 88014, 95891, 96041, 95509, 92120, 80479, 73891, 70299, 81089};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int initPos = 81247;
    int goalPos = 62954;
    vector<int> holePos = {30171, 9572, 20677, 29005, 29157, 18097, 3863, 7601, 38755, 20001, 7099, 49274, 48284, 7155, 1814, 9093, 25130, 27403, 25182, 615, 38597, 6692, 35207, 36018, 30998, 33632, 58506, 16757, 48164, 33934, 29840, 46312, 19493, 41646, 22701, 33757, 55569, 62953, 36871, 28113, 43610, 10937, 1547, 52665, 17212, 24107, 43945, 27055, 43030, 5682};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int initPos = 83950;
    int goalPos = 50827;
    vector<int> holePos = {88946, 92493, 89432, 83951, 86065, 91467, 94887, 99990, 99066, 94607, 85737, 89212, 96093, 99442, 84047, 84252, 99181, 90552, 99579, 91027, 96593, 85360, 92937, 99375, 86961, 87904, 92827, 95631, 84175, 93106, 99730, 95289, 83962, 90797, 89074, 93043, 97415, 91381, 86464, 90288, 90260, 96733, 97846, 99414, 86511, 89375, 90302, 87165, 99671};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int initPos = 96821;
    int goalPos = 36037;
    vector<int> holePos = {9995, 31737, 33051, 13768, 7713, 22843, 15518, 35954, 10237, 18520, 14892, 11946, 22758, 1655, 327, 682, 28234, 13909, 549, 26734, 36029, 8496, 7854, 35264, 19391, 23896, 35894, 33442, 3689, 32081, 6315, 447, 19693, 26983, 4290, 28640, 22615, 27860, 17950, 29405, 22648, 32105, 20205, 36019, 18882, 15976, 20313, 7504, 29070, 32993};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int initPos = 23139;
    int goalPos = 96720;
    vector<int> holePos = {1615, 19499, 7359, 22435, 1088, 6823, 16263, 1805, 7563, 22660, 1173, 18857, 11870, 15129, 18898, 12677, 7493, 16299, 19359, 5731, 9607, 23133, 11554, 15507, 9241, 11010, 2576, 14373, 3943, 4852, 18745, 6109, 14985, 11194, 19070, 14008, 3462, 13764, 4362, 9184, 17273, 5615, 2069, 1152, 7503, 15875, 22515, 13486, 734, 3243};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int initPos = 24209;
    int goalPos = 13398;
    vector<int> holePos = {76194, 73785, 54434, 42335, 62515, 26412, 53307, 82529, 31587, 96886, 36612, 58234, 62452, 30980, 44621, 53267, 64057, 64260, 31925, 48972, 46617, 79378, 39370, 60075, 38812, 60766, 35534, 53704, 24213, 69371, 32436, 79679, 86559, 89294, 94666, 43805, 87713, 75816, 66060, 35288, 43319, 48465, 88120, 73530, 30417, 39540, 99707, 92973, 40976};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int initPos = 16888;
    int goalPos = 99724;
    vector<int> holePos = {99890, 99990, 99958, 99764, 99907, 99767, 99920, 99956, 99966, 99903, 99827, 99755, 99821, 99999, 99744, 99915, 99782, 99991, 99950, 99997, 99904, 99928, 99760, 99860, 99730, 99942, 99973, 99982, 99925, 99861, 99742, 99759, 99802, 99800, 99993, 99816, 99826, 99960, 99839, 99855, 99912, 99763, 99980, 99868, 99992, 99835, 99738, 99769, 99938};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int initPos = 4940;
    int goalPos = 94369;
    vector<int> holePos = {99539, 95492, 95910, 94583, 96155, 96577, 96346, 99377, 94821, 97789, 95190, 97815, 98345, 94626, 97027, 94904, 95793, 98724, 98354, 98262, 95070, 98535, 98707, 99514, 98460, 99427, 96106, 95855, 94533, 94832, 99858, 96632, 97522, 95263, 97484, 95609, 99017, 94781, 97897, 94919, 97755, 97780, 99759, 97664, 97735, 94374, 95508, 99093, 94889};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int initPos = 32857;
    int goalPos = 46060;
    vector<int> holePos = {24815, 11617, 20476, 1030, 25503, 32856, 29459, 20485, 15672, 20457, 24748, 1133, 16389, 16200, 17104, 22382, 2498, 2508, 31534, 24198, 3887, 21655, 13068, 1310, 29579, 31355, 25782, 13309, 25270, 18846, 10230, 23739, 23547, 6503, 3884, 11254, 4419, 5097, 5890, 24065, 29158, 1897, 9058, 22489, 17673, 29913, 2461, 29954, 27667, 7697};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int initPos = 98427;
    int goalPos = 13771;
    vector<int> holePos = {13499, 11439, 5918, 1301, 2088, 9970, 2925, 5176, 7975, 10719, 142, 7744, 411, 4796, 1949, 11003, 9022, 9420, 11591, 12212, 12015, 13046, 12397, 5953, 6362, 718, 11930, 11069, 10105, 4963, 6347, 8291, 13184, 2586, 11284, 8672, 9196, 1770, 8174, 9582, 8433, 3928, 6302, 8443, 2075, 13743, 9988, 5795, 9974, 6815};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int initPos = 56829;
    int goalPos = 47240;
    vector<int> holePos = {94986, 83865, 96025, 65622, 76762, 87976, 93018, 76355, 96610, 97720, 69731, 88342, 82702, 77303, 91410, 97628, 93054, 70806, 96352, 79604, 72965, 69861, 99105, 88903, 57895, 59342, 92178, 85591, 99086, 81443, 88643, 79569, 60087, 60185, 90761, 98371, 88948, 72259, 94053, 68011, 69605, 59412, 91658, 87246, 56841, 62986, 68843, 97099, 72083, 91007};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int initPos = 55429;
    int goalPos = 26214;
    vector<int> holePos = {10647, 5101, 17836, 13560, 7641, 10355, 7938, 26205, 10786, 9795, 22543, 5445, 735, 21561, 2673, 6071, 5327, 4293, 21359, 22334, 23379, 18990, 9359, 3282, 12103, 25026, 15271, 8463, 21298, 22409, 17472, 3017, 467, 22252, 16389, 4340, 19565, 9699, 5416, 23332, 15719, 12544, 6008, 9358, 19678, 12036, 18126, 16609, 24033, 18299};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int initPos = 11430;
    int goalPos = 53464;
    vector<int> holePos = {5602, 3010, 7913, 3761, 456, 1359, 2408, 11425};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int initPos = 51237;
    int goalPos = 39388;
    vector<int> holePos = {9524, 39378, 16664, 26247, 16533, 32351, 32797, 13462, 8308, 12864, 20262, 23517, 38050, 5834, 8195, 26751};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int initPos = 97777;
    int goalPos = 25129;
    vector<int> holePos = {98804, 98846, 99012, 99597, 97869, 98745, 98987, 99579, 99667, 97792, 99843, 99116, 98692, 99984, 99559, 99107, 98601, 98296, 97912, 98175, 98959, 98316, 99466, 99401};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int initPos = 65170;
    int goalPos = 33650;
    vector<int> holePos = {7170, 12454, 8857, 29113, 19492, 1072, 25260, 8296, 7381, 11848, 32997, 17744, 15100, 13279, 25021, 5884, 24112, 16217, 1667, 9410, 14171, 18239, 16561, 85, 33630, 25887, 3799, 13311, 29397, 29520, 14365, 9912};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int initPos = 98383;
    int goalPos = 28650;
    vector<int> holePos = {99201, 99470, 99332, 99043, 98456, 99105, 99490, 99509, 99882, 98947, 99792, 99044, 99647, 98573, 98805, 99988, 98817, 98779, 98709, 99337, 99984, 98482, 98826, 99431, 99079, 99225, 99147, 98408, 99644, 98742, 99525, 99057, 99129, 98872, 99008, 98528, 99610, 98996, 99657, 99596};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int initPos = 96559;
    int goalPos = 19483;
    vector<int> holePos = {98611, 99912, 99693, 99746, 99350, 99839, 98005, 97642, 98104, 98907, 97998, 97983, 96754, 97242, 99591, 99923, 99046, 98958, 99661, 98337, 98105, 98283, 99568, 98007, 97494, 99293, 99078, 99870, 97487, 98549, 96792, 99073, 97215, 98301, 96862, 98700, 98264, 97269, 97192, 99781, 96589, 97459, 97481, 99789, 97561, 97565, 98265, 96804};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int initPos = 92740;
    int goalPos = 2846;
    vector<int> holePos = {2000, 453, 2053, 2528, 2797, 681, 588, 1670, 2714, 264, 442, 2007, 2376, 1691, 1327, 1988, 172, 2115, 1053, 1222, 511, 1833, 2497, 1814, 871, 528, 1471, 1545, 390, 2787, 228, 734, 2039, 2258, 2552, 217, 1091, 2009, 1330, 2555, 1657, 2248, 2104, 473, 2724, 998, 2751, 1774, 22, 2826};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int initPos = 22865;
    int goalPos = 88559;
    vector<int> holePos = {96933, 95904, 93422, 88599, 95502, 95207, 88685, 99930, 89070, 96641, 94328, 94270, 98253, 92628, 96175, 88632, 94340, 92844, 99938, 96966, 89320, 98872, 96621, 99342, 93138, 97605, 94647, 92830, 91327, 96317, 99189, 89973, 92117, 91448, 99084, 88858, 92687, 90301, 98081, 95511, 95498, 99484, 92136, 96100, 97239, 89094, 90504, 96465, 94312, 94283};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int initPos = 52332;
    int goalPos = 23534;
    vector<int> holePos = {52392, 85000, 58968, 53374, 72978, 76423, 81169, 86728, 81006, 99868, 82724, 75433, 70731, 56627, 82543, 58133, 71999, 96268, 95129, 92219, 84261, 89037, 93142, 98517, 64503, 99334, 66751, 91819, 98593, 95558, 79918, 75921, 56655, 65731, 74231, 78487, 60863, 62664, 66586, 52583, 77393, 72498, 54755, 95765, 79180, 86312, 93936, 99422, 87933, 60284};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int initPos = 92950;
    int goalPos = 68572;
    vector<int> holePos = {66624, 15429, 65266, 1818, 19907, 37381, 24638, 28768, 16047, 13655, 55011, 63696, 23764, 29273, 2446, 15967, 9060, 33142, 9367, 68492, 46404, 29182, 59564, 41474, 32906, 62415, 63771, 44384, 22890, 48107, 20852, 17642, 62968, 26945, 64189, 17623, 2829, 58226, 46740, 33951, 8818, 61991, 60491, 3164, 16473, 7852, 38088, 20242, 55762, 13132};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int initPos = 92652;
    int goalPos = 15958;
    vector<int> holePos = {95476, 94738, 96730, 93409, 96196, 95452, 96577, 95573, 95946, 99213, 93271, 98160, 94719, 98975, 97041, 96261, 98797, 94176, 93850, 98119, 93322, 92848, 99394, 96172, 97220, 99964, 96228, 96795, 94331, 98924, 99041, 95424, 96930, 98128, 98482, 96956, 93642, 93959, 98690, 95552, 96944, 97268, 92752, 93821, 94646, 98223, 94926, 98277, 95330, 97753};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int initPos = 94579;
    int goalPos = 39485;
    vector<int> holePos = {98580, 96884, 99732, 96682, 99793, 97063, 97265, 96779, 94699, 98692, 96380, 95545, 98704, 98286, 96251, 99871, 95587, 96842, 97523, 99729, 95340, 99326, 95132, 95294, 98673, 96868, 99640, 96646, 95022, 95082, 99341, 96121, 98060, 98625, 95682, 95112, 96709, 98895, 97166, 97550, 97836, 95819, 98993, 96335, 95893, 94955, 99868, 97100, 97952, 97238};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int initPos = 36610;
    int goalPos = 55588;
    vector<int> holePos = {96967, 95938, 93454, 1483, 3574, 95031, 99488, 95422, 4129, 96139, 4222, 92326, 2187, 3031, 95867, 93540, 1593, 3577, 849, 93478, 95294, 2729, 2622, 93858, 92275, 96714, 99152, 97137, 1289, 99290, 4088, 97905, 1786, 93235, 93039, 2516, 91873, 98467, 99469, 99204, 93070, 95265, 630, 3691, 94561, 93583, 4, 97980, 99196};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
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
    int initPos = 42220;
    int goalPos = 23755;
    vector<int> holePos = {70846, 85977, 80478, 65128, 70031, 4734, 78120, 9547, 78267, 75279, 68651, 74527, 94894, 64953, 84240, 93050, 70889, 75275, 13320, 82335, 73729, 10159, 67076, 63326, 62206, 98759, 99423, 86925, 79887, 72665, 98680, 70701, 3531, 64420, 63940, 82774, 70566, 96178, 87023, 82029, 71588, 3300, 77119, 91363, 1292, 62069, 73336, 1526};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int initPos = 36190;
    int goalPos = 50892;
    vector<int> holePos = {93344, 88334, 88425, 185, 86493, 94263, 488, 95212, 93197, 87706, 1325, 91118, 91787, 89861, 1437, 86685, 1626, 97741, 4917, 98347, 4322, 97612, 95561, 97165, 91919, 92300, 94010, 91296, 4838, 97586, 94259, 89098, 4524, 457, 99083, 89610, 86001, 89407, 85889, 95328, 88864, 1756, 95247, 94718, 97739, 1563, 4568, 94731};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int initPos = 53067;
    int goalPos = 65887;
    vector<int> holePos = {85436, 84000, 29552, 98009, 29091, 41829, 4143, 89735, 15688, 2044, 90557, 2413, 48984, 98303, 26469, 80867, 91090, 43766, 18331, 71476, 7815, 77645, 92648, 24370, 43444, 75583, 51161, 20151, 50928, 97511, 2569, 76541, 84339, 91408, 20711, 12900, 37660, 72456, 27652, 73965, 3485, 72849, 33568, 75692, 48606, 34423};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int initPos = 85294;
    int goalPos = 63724;
    vector<int> holePos = {13772, 29419, 7617, 19938, 11453, 6808, 3726, 21158, 20759, 17892, 18482, 8416, 10480, 7460, 9849, 16742, 30234, 6573, 20598, 2779, 7943, 19761, 19396, 10908, 21221, 51, 28696, 21623, 27319, 29575, 7272, 19634, 8746, 1632, 12249, 23688, 1375, 28738, 16164, 26732, 28782, 23791, 14863, 11244, 97011, 26146, 22905};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int initPos = 41026;
    int goalPos = 52827;
    vector<int> holePos = {77958, 93916, 23422, 19348, 23242, 97626, 80613, 18821, 12350, 99858, 8025, 89917, 99976, 20754, 14774, 72324, 72832, 80562, 16421, 32881, 30432, 94480, 78945, 89927, 83658, 77480, 72916, 81105, 90127, 79761, 23492, 96787, 84081, 32239, 12515, 98120, 24043, 4660, 75783, 10826, 13790, 74232, 7867, 15978, 90075, 25485, 94907, 29938};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int initPos = 54819;
    int goalPos = 68491;
    vector<int> holePos = {31672, 36967, 38718, 33009, 36374, 98701, 32228, 21113, 14408, 18938, 26014, 532, 22764, 29390, 1300, 36880, 26583, 38979, 565, 44935, 35330, 29902, 19261, 45939, 20017, 38686, 99205, 13775, 2315, 7710, 18440, 20084, 97814, 45082, 26965, 39987, 42774, 41342, 3187, 38398, 34380, 33197, 21031, 30809, 38742, 29987, 98742, 48711, 45010, 37165};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int initPos = 10586;
    int goalPos = 41821;
    vector<int> holePos = {66568, 82745, 60274, 52703, 58214, 71167, 1562, 93192, 7434, 6364, 51838, 75163, 81334, 59093, 57607, 65190, 10585, 3260, 88183, 7292, 83568, 2657, 9459, 77904, 4499, 54074, 879, 1143, 87473, 81080, 8158, 88911, 77623, 96472, 93259, 92785, 81420, 89913, 76399, 98707, 92704, 75817, 99740, 50946, 10069, 48109};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int initPos = 54076;
    int goalPos = 77206;
    vector<int> holePos = {77207, 90966, 10078, 7573, 88774, 13309, 97296, 91708, 24216, 10365, 20243, 4670, 93575, 19173, 96705, 22387, 22797, 96829, 10948, 78998, 14811, 15458, 82639, 81132, 976, 25496, 18054, 6646, 638, 17010, 27174, 77599, 87450, 25262, 80136, 77490, 78312, 99571, 82183, 78010, 8658, 93421, 19374, 23612, 82074, 85919, 82903, 79920, 18931, 86128};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int initPos = 79157;
    int goalPos = 37797;
    vector<int> holePos = {37796, 5505, 26197, 19259, 8027, 26077, 27702, 4428, 2026, 31773, 36003, 97481, 11061, 26477, 33532, 37540, 5548, 33665, 1523, 32686, 29478, 624, 5179, 26881, 23082, 12681, 29759, 27660, 6593, 20386, 4034, 12763, 23672, 18861, 5104, 30709, 27964, 21420, 18852, 23723, 2303, 13396, 13492, 15570, 8358, 18015, 97493};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int initPos = 72196;
    int goalPos = 52458;
    vector<int> holePos = {8273, 80120, 48870, 43980, 9069, 94143, 4022, 83856, 97490, 98535, 19715, 37851, 7659, 24975, 17623, 42259, 30640, 3265, 8206, 2861, 96944, 11805, 84275, 15736, 92939, 32070, 7244, 88080, 81370, 89618, 36422, 2900, 23540, 94997, 41694, 83943, 36820, 22005, 37294, 36232, 14225, 84847, 90480, 30368, 11258, 52457, 98004};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int initPos = 14955;
    int goalPos = 4869;
    vector<int> holePos = {50410, 4868, 62267, 90270, 77751, 92960, 83511, 83325, 2295, 59218, 90297, 80458, 67694, 65186, 99637, 60548, 72578, 77735, 91894, 83233, 64804, 82592, 74676, 63096, 78095, 71884, 51572, 63079, 97068, 76755, 75353, 62732, 63803, 80246, 2552, 84531, 92631, 85811, 74861, 87562, 77927, 67743, 73697, 95943, 64129, 87067, 55415, 92822};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int initPos = 78004;
    int goalPos = 55832;
    vector<int> holePos = {5350, 18537, 11117, 90093, 30874, 90225, 1330, 27871, 42725, 18044, 16764, 39740, 12463, 7636, 94429, 38101, 98764, 99979, 96465, 78490, 34075, 82859, 79915, 27713, 87191, 25622, 8106, 636, 98613, 27957, 36251, 79216, 38504, 10869, 6869, 97675, 46808, 78005, 33779, 34099, 91995, 89661, 25556, 28226, 26061, 45907, 11361, 21001};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int initPos = 87628;
    int goalPos = 44451;
    vector<int> holePos = {99746, 87718, 3370, 96058, 9984, 88892, 28559, 20930, 20092, 87629, 12026, 93370, 5004, 95054, 28773, 25324, 19796, 94713, 91111, 11196, 1660, 18866, 9123, 88812, 94305, 90100, 14919, 12053, 93039, 97505, 11688, 28437, 90537, 8988, 28328, 21355, 10817, 30109, 15833, 93989, 95189, 23364, 89544, 94159, 19321, 4463, 87669, 7331};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int initPos = 55113;
    int goalPos = 15683;
    vector<int> holePos = {70160, 11723, 89502, 5448, 92660, 70475, 62204, 92404, 14513, 98279, 78437, 59563, 68467, 79059, 75462, 95004, 87574, 85000, 9843, 64588, 93952, 68006, 4033, 91990, 6746, 15682, 56689, 70554, 93947, 76989, 81154, 2305, 55114, 97092, 72949, 85028, 76942, 88535, 94217, 92579, 64778, 10176, 82913, 70017, 96984, 88261, 79976, 97842};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int initPos = 36775;
    int goalPos = 25327;
    vector<int> holePos = {46021, 70633, 53007, 25326, 48532, 66671, 65302, 81851, 76114, 20692, 77975, 93449, 10983, 45346, 59675, 37441, 44759, 85437, 95608, 77104, 70971, 2466, 48425, 70406, 63367, 8891, 83416, 59738, 46467, 7331, 39269, 84212, 7725, 3147, 919, 73652, 57973, 36776, 47084, 38051, 70259, 15516, 11679, 66803, 98946, 53785, 60918};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int initPos = 86535;
    int goalPos = 81783;
    vector<int> holePos = {89994, 62570, 89205, 99466, 46566, 41618, 22829, 26042, 10782, 63678, 46222, 78785, 4656, 48198, 86646, 18265, 68209, 98576, 74483, 51509, 34712, 12642, 33535, 73764, 45225, 61734, 72936, 29636, 18152, 12036, 22381, 88128, 72460, 37546, 98903, 93113, 51175, 10289, 95071, 86536, 20985, 60379, 13768, 20551, 11801, 44151, 81782};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int initPos = 51856;
    int goalPos = 30384;
    vector<int> holePos = {59454, 54078, 1931, 8704, 14736, 62784, 72558, 29140, 79665, 14705, 18875, 80198, 78821, 87117, 24999, 23769, 29278, 28044, 487, 27198, 87470, 87919, 4030, 72554, 54165, 59184, 69150, 79494, 587, 205, 52485, 64871, 54285, 70602, 82325, 51857, 52491, 30383, 96061, 80835, 25449, 29930, 16835, 87088, 86142, 21015, 92836, 86171};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int initPos = 82681;
    int goalPos = 99343;
    vector<int> holePos = {70337, 10864, 67520, 25849, 71317, 17051, 21861, 41902, 17058, 29860, 51371, 54751, 21257, 69779, 60142, 9167, 29988, 71837, 806, 65478, 77494, 78327, 74380, 71582, 55522, 49368, 1067, 6012, 46306, 26663, 71998, 77420, 20502, 6273, 63834, 8194, 40175, 64850, 99344, 63085, 82680, 20859, 218, 59839, 60454, 74317, 68344};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int initPos = 20613;
    int goalPos = 32180;
    vector<int> holePos = {82139, 40650, 58202, 41231, 55126, 89649, 20612, 6174, 41295, 85853, 15118, 2135, 52776, 11638, 45032, 40631, 98621, 57422, 79579, 64929, 12474, 64719, 59082, 91922, 36598, 71899, 32181, 80362, 47056, 39153, 44399, 17062, 33205, 59524, 6628, 4048, 40335, 53398, 57646, 80237, 91091, 92997, 116, 3654, 11055, 1914, 75731};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int initPos = 17356;
    int goalPos = 51584;
    vector<int> holePos = {80656, 81056, 65468, 3569, 55742, 11731, 75040, 65900, 53458, 5789, 88500, 70373, 88230, 78592, 61626, 58465, 1926, 3530, 17355, 63242, 57538, 99216, 90640, 351, 6749, 91264, 68282, 83990, 80951, 81516, 70844, 54671, 62371, 14058, 14267, 60315, 86981, 73915, 99948, 80623, 77374, 2934, 51585, 71006, 73203, 62782, 82769};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int initPos = 2;
    int goalPos = 56443;
    vector<int> holePos = {1, 100000};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int initPos = 2;
    int goalPos = 83802;
    vector<int> holePos = {1, 100000};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int initPos = 42608;
    int goalPos = 2;
    vector<int> holePos = {100000, 1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int initPos = 1808;
    int goalPos = 2;
    vector<int> holePos = {100000, 1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int initPos = 71368;
    int goalPos = 2;
    vector<int> holePos = {1, 100000};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
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
    int initPos = 99999;
    int goalPos = 974;
    vector<int> holePos = {100000, 1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int initPos = 95554;
    int goalPos = 99999;
    vector<int> holePos = {100000, 1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int initPos = 2;
    int goalPos = 22803;
    vector<int> holePos = {100000, 1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int initPos = 56748;
    int goalPos = 50000;
    vector<int> holePos = {100000, 1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int initPos = 50000;
    int goalPos = 91279;
    vector<int> holePos = {1, 100000};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int initPos = 96846;
    int goalPos = 50000;
    vector<int> holePos = {1, 100000};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int initPos = 1142;
    int goalPos = 50001;
    vector<int> holePos = {100000, 1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int initPos = 22867;
    int goalPos = 50001;
    vector<int> holePos = {1, 100000};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int initPos = 50001;
    int goalPos = 47428;
    vector<int> holePos = {1, 100000};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int initPos = 36442;
    int goalPos = 50001;
    vector<int> holePos = {100000, 1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int initPos = 41720;
    int goalPos = 50001;
    vector<int> holePos = {100000, 1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int initPos = 2;
    int goalPos = 98033;
    vector<int> holePos = {1, 100000};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int initPos = 50212;
    int goalPos = 79659;
    vector<int> holePos = {1, 100000};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int initPos = 50212;
    int goalPos = 20765;
    vector<int> holePos = {1, 100000};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int initPos = 50212;
    int goalPos = 349;
    vector<int> holePos = {1, 100000};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int initPos = 10000;
    int goalPos = 15727;
    vector<int> holePos = {9977, 15775};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int initPos = 10000;
    int goalPos = 15447;
    vector<int> holePos = {9975, 15465};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int initPos = 36;
    int goalPos = 72;
    vector<int> holePos = {300, 100, 200, 400};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int initPos = 68332;
    int goalPos = 825;
    vector<int> holePos = {99726, 371, 67, 89210};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int initPos = 2;
    int goalPos = 5;
    vector<int> holePos = {1, 6};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int initPos = 100000;
    int goalPos = 2;
    vector<int> holePos = {1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int initPos = 1;
    int goalPos = 99999;
    vector<int> holePos = {100000};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int initPos = 2;
    int goalPos = 80003;
    vector<int> holePos = {1, 80004};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int initPos = 2;
    int goalPos = 9;
    vector<int> holePos = {1, 10};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int initPos = 11;
    int goalPos = 14;
    vector<int> holePos = {10, 15};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int initPos = 10;
    int goalPos = 21;
    vector<int> holePos = {9, 22};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int initPos = 1;
    int goalPos = 7;
    vector<int> holePos = {8};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int initPos = 1;
    int goalPos = 2002;
    vector<int> holePos = {100000};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int initPos = 1;
    int goalPos = 2;
    vector<int> holePos = {20};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int initPos = 3443;
    int goalPos = 99994;
    vector<int> holePos = {20, 30, 3000, 99999};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    int initPos = 2;
    int goalPos = 33976;
    vector<int> holePos = {1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    int initPos = 99999;
    int goalPos = 1;
    vector<int> holePos = {100000};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    int initPos = 1;
    int goalPos = 15;
    vector<int> holePos = {100000};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    int initPos = 6;
    int goalPos = 9;
    vector<int> holePos = {5, 10};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    int initPos = 1;
    int goalPos = 4;
    vector<int> holePos = {90012};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    int initPos = 3;
    int goalPos = 100000;
    vector<int> holePos = {1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    int initPos = 2;
    int goalPos = 100000;
    vector<int> holePos = {1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    int initPos = 76453;
    int goalPos = 9117;
    vector<int> holePos = {1, 1000};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    int initPos = 6;
    int goalPos = 12;
    vector<int> holePos = {1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    int initPos = 1;
    int goalPos = 4;
    vector<int> holePos = {555};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    int initPos = 1;
    int goalPos = 31;
    vector<int> holePos = {32};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    int initPos = 1;
    int goalPos = 7;
    vector<int> holePos = {99726, 371, 67, 89210};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    int initPos = 1001;
    int goalPos = 1015;
    vector<int> holePos = {1000, 1016};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    int initPos = 1;
    int goalPos = 20;
    vector<int> holePos = {21};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    int initPos = 99997;
    int goalPos = 100000;
    vector<int> holePos = {99996};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    int initPos = 2000;
    int goalPos = 1;
    vector<int> holePos = {2001};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    int initPos = 10;
    int goalPos = 25;
    vector<int> holePos = {9, 26};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    int initPos = 1;
    int goalPos = 7;
    vector<int> holePos = {10000};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    int initPos = 2;
    int goalPos = 60001;
    vector<int> holePos = {1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    int initPos = 1;
    int goalPos = 15;
    vector<int> holePos = {20};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    int initPos = 10;
    int goalPos = 21;
    vector<int> holePos = {45, 9};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    int initPos = 2;
    int goalPos = 100;
    vector<int> holePos = {1, 101};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    int initPos = 5;
    int goalPos = 1;
    vector<int> holePos = {3};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    int initPos = 2;
    int goalPos = 8;
    vector<int> holePos = {1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    int initPos = 100;
    int goalPos = 121;
    vector<int> holePos = {99, 122};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    int initPos = 100;
    int goalPos = 107;
    vector<int> holePos = {90000};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    int initPos = 1;
    int goalPos = 7;
    vector<int> holePos = {10};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    int initPos = 2;
    int goalPos = 14;
    vector<int> holePos = {15, 1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    int initPos = 2;
    int goalPos = 20016;
    vector<int> holePos = {1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    int initPos = 10;
    int goalPos = 13;
    vector<int> holePos = {9, 14};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    int initPos = 2;
    int goalPos = 2005;
    vector<int> holePos = {1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    int initPos = 1;
    int goalPos = 15;
    vector<int> holePos = {100};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    int initPos = 1;
    int goalPos = 99998;
    vector<int> holePos = {100000};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    int initPos = 50;
    int goalPos = 10;
    vector<int> holePos = {20};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    int initPos = 1;
    int goalPos = 33;
    vector<int> holePos = {50000};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    int initPos = 100;
    int goalPos = 123;
    vector<int> holePos = {99, 124};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    int initPos = 2;
    int goalPos = 13;
    vector<int> holePos = {1, 14};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    int initPos = 1;
    int goalPos = 55;
    vector<int> holePos = {100};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    int initPos = 2;
    int goalPos = 4005;
    vector<int> holePos = {1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    int initPos = 99860;
    int goalPos = 1;
    vector<int> holePos = {99999};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    int initPos = 2;
    int goalPos = 17;
    vector<int> holePos = {1, 18};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    int initPos = 50;
    int goalPos = 61;
    vector<int> holePos = {35, 62};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    int initPos = 4;
    int goalPos = 7;
    vector<int> holePos = {3, 8};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    int initPos = 2;
    int goalPos = 5;
    vector<int> holePos = {6, 1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    int initPos = 2;
    int goalPos = 5;
    vector<int> holePos = {7, 6, 1};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    int initPos = 1;
    int goalPos = 7;
    vector<int> holePos = {33};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    int initPos = 98765;
    int goalPos = 4963;
    vector<int> holePos = {10, 20, 40, 30};
    CubeRoll* pObj = new CubeRoll();
    clock_t start = clock();
    int result = pObj->getMinimumSteps(initPos, goalPos, holePos);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22924266&rd=14436&pm=11322
********************************************************************************
#include <vector> 
#include <string> 
#include <deque> 
#include <algorithm> 
#include <iostream> 
 
using namespace std; 
 
int min(int a,int b){ 
  return (a>b)?b:a; 
} 
 
int max(int a,int b){ 
  return (a>b)?a:b; 
} 
 
int sqrt(int n){ 
  for(int i=0; i*i<=n; i++) 
    if (i*i==n) return i; 
  return -1; 
} 
 
class CubeRoll { 
public: 
  int getMinimumSteps(int initPos, int goalPos, vector <int> holePos) { 
    //case 0 
    int a=min(initPos,goalPos), b=max(initPos,goalPos); 
    int l=-1,r=100001; 
    vector <int> h = holePos; 
    for(int i=0; i<h.size(); i++){ 
      if(a<=h[i] && b>=h[i]) return -1; 
      if(h[i]<a) 
  l = max(l,h[i]); 
      if(h[i]>b) 
  r = min(r,h[i]); 
    } 
 
    //case 1 
    if(l==-1 || r == 100001){ 
      int k = b-a; 
      int j=sqrt(k); 
      if(j!=-1) return 1; 
      if(((k&1)==1) || (((k/2)&1)==0)) return 2; 
      for(j=1; j*j<k; j++){ 
  int jj = sqrt(k-j*j); 
  if (jj!=-1) return 2; 
      } 
      return 3; 
    } 
 
    //case 2; 
    deque<int> map(100001,-1); 
    map[a] = 0; 
    bool flag = true; 
    for(int cnt=0; flag; cnt++){ 
      flag = false; 
      for(int i=l; i<=r; i++){ 
  if(map[i] == cnt){ 
    if(i==b) return cnt; 
    for(int j=1; i-j*j>l; j++) 
      if(map[i-j*j]==-1){ 
        flag = true; 
        map[i-j*j] = cnt+1; 
      } 
    for(int j=1; i+j*j<r; j++) 
      if(map[i+j*j]==-1){ 
        flag = true; 
        map[i+j*j] = cnt+1; 
      } 
  } 
      } 
    } 
    return -1; 
  } 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/