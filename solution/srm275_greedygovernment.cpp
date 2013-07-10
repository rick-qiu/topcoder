/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5910
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

class GreedyGovernment {
public:
    double maxAverageCost(vector<string> tolls, int tollHike);
};

double GreedyGovernment::maxAverageCost(vector<string> tolls, int tollHike) {
    double ret;
    return ret;
}


int test0() {
    vector<string> tolls = {"X324", "XXX2", "12X5", "991X"};
    int tollHike = 9;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> tolls = {"X324", "5X22", "12X5", "991X"};
    int tollHike = 57;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 29.2;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> tolls = {"X11", "2X1", "37X"};
    int tollHike = 76;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 39.5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> tolls = {"X32X", "XXXX", "XXXX", "XXXX"};
    int tollHike = 99;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> tolls = {"X561324534", "1X82346123", "98X1641451", "982X412355", "9812X31235", "82359X8371", "283659X112", "9832465X12", "98246892X1", "982468926X"};
    int tollHike = 17;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 33.75003877701846;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> tolls = {"X9791", "5X5X4", "84X95", "554X3", "9215X"};
    int tollHike = 29;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 28.307692307692307;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> tolls = {"XX49", "9X99", "47X6", "511X"};
    int tollHike = 77;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 64.33333333333333;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> tolls = {"X45864X71", "4X9916233", "58X357392", "351X3X613", "1687XX235", "16495X195", "737387XX2", "285516XX8", "22978484X"};
    int tollHike = 68;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 48.42628722311867;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> tolls = {"XX745", "3X373", "X9X23", "154X4", "7349X"};
    int tollHike = 76;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 48.81818181818182;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> tolls = {"XX7X45355", "5X1362732", "57X982581", "835X53753", "1355X3599", "75281X287", "479136X51", "1927285XX", "X5852753X"};
    int tollHike = 67;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 49.19266595920293;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> tolls = {"X482X3892", "7X4756585", "27XX291X9", "576X625X2", "64X7X5755", "55978X445", "334343X34", "5521543X5", "324575XXX"};
    int tollHike = 34;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 41.6393372982158;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> tolls = {"X49X1586", "XX582836", "59XX5456", "216X9455", "3X65X243", "42241X51", "X3X146X2", "9465892X"};
    int tollHike = 7;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 27.956398104265404;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> tolls = {"X16889", "XX54X8", "29X496", "755X19", "5482X5", "68292X"};
    int tollHike = 66;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 42.407407407407405;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> tolls = {"X8X71218", "7XX59X22", "86X32358", "291X3987", "5713X138", "77X45X35", "785539X5", "34X3187X"};
    int tollHike = 33;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 34.56659619450317;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> tolls = {"X3355991", "1X3475X4", "33X47833", "745X8967", "56X7X894", "5X891X55", "553432X7", "4998X9XX"};
    int tollHike = 32;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 37.762199845081334;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> tolls = {"X6347", "1X585", "33X57", "X77X8", "4136X"};
    int tollHike = 80;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 42.3125;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> tolls = {"X833939X", "7X5X44XX", "97X69582", "221X44XX", "3799X644", "92467X5X", "8X2259X8", "1953828X"};
    int tollHike = 87;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 57.67484662576687;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> tolls = {"X71X95X6", "4X553942", "66X366X3", "384X6363", "2289X116", "6998XXX4", "577776X2", "9222X58X"};
    int tollHike = 35;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 41.4024064171123;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> tolls = {"XX79", "XXX2", "2XX3", "95XX"};
    int tollHike = 79;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 49.0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> tolls = {"XXX2649", "5X34494", "32X9XX8", "475X28X", "9359XX4", "25917XX", "124116X"};
    int tollHike = 14;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 30.933333333333334;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> tolls = {"X1", "4X"};
    int tollHike = 60;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 61.0;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> tolls = {"X2X89", "9X72X", "X5X98", "627X8", "2974X"};
    int tollHike = 98;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 67.375;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> tolls = {"X1X665", "XXX257", "78X415", "557X19", "84X3X6", "729X5X"};
    int tollHike = 57;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 41.44444444444444;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> tolls = {"X568474", "7X3X126", "54X1196", "X76X975", "3886X55", "X5658X8", "657355X"};
    int tollHike = 44;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 37.66064981949459;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> tolls = {"XX698855", "5X111547", "75X76535", "68XX4336", "7625X559", "X6787X59", "41765XX8", "9939686X"};
    int tollHike = 17;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 36.831042845594176;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> tolls = {"X7X3", "7X63", "X3X3", "55XX"};
    int tollHike = 55;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 46.333333333333336;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> tolls = {"XXX8", "2X73", "5XX3", "477X"};
    int tollHike = 23;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 31.0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> tolls = {"X625", "5X86", "45X8", "335X"};
    int tollHike = 38;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 27.6;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> tolls = {"X5325555", "9X492845", "4XXX3764", "873X9766", "315XX625", "5453XX29", "358972XX", "X928252X"};
    int tollHike = 31;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 37.91270718232044;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> tolls = {"X8392583", "1XX51698", "56X2527X", "X53X1595", "8756X19X", "8546XX62", "465868X7", "X484291X"};
    int tollHike = 32;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 39.88704965920156;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> tolls = {"X54934693", "4X3366915", "83X546816", "793X54628", "8715X4232", "89968X834", "866982X69", "1715248X3", "15759958X"};
    int tollHike = 87;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 48.784963503649635;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> tolls = {"X2656", "2X996", "87X82", "785X3", "8455X"};
    int tollHike = 85;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 43.0625;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> tolls = {"X998576", "3X31239", "62X8525", "283X122", "5149X35", "76646X7", "296948X"};
    int tollHike = 39;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 32.828220858895705;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> tolls = {"X3462", "2X669", "65X24", "157X5", "8784X"};
    int tollHike = 97;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 45.9375;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> tolls = {"X34", "8X7", "85X"};
    int tollHike = 81;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 47.5;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> tolls = {"X2976445", "3X592614", "51X15876", "382X9299", "7262X627", "85345X21", "994573X7", "9865985X"};
    int tollHike = 30;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 34.66581502299438;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> tolls = {"X86", "5X8", "43X"};
    int tollHike = 69;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 45.5;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> tolls = {"X57978", "5X4592", "11X454", "174X46", "2179X2", "58159X"};
    int tollHike = 36;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 29.476923076923075;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> tolls = {"X978331", "7X26297", "82X6287", "724X678", "2557X42", "52567X6", "616563X"};
    int tollHike = 94;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 45.28834355828221;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> tolls = {"X29143567", "5X8532555", "88X635519", "185X54266", "1529X1522", "25275X357", "845178X13", "5984155X3", "59155997X"};
    int tollHike = 22;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 35.64313868613139;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> tolls = {"X62", "8X9", "37X"};
    int tollHike = 33;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 25.0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> tolls = {"X9289547", "7X145758", "82X27566", "583X7765", "4678X527", "55435X18", "199397X5", "8328474X"};
    int tollHike = 33;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 39.23300970873787;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> tolls = {"X7655", "7X462", "87X83", "741X6", "1554X"};
    int tollHike = 47;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 29.6875;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> tolls = {"X38586375", "3X7577778", "28X222745", "921X26876", "3811X5564", "94125X921", "157564X99", "5685728X1", "99313558X"};
    int tollHike = 83;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 47.666131386861316;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> tolls = {"X523268", "6X72375", "11X4285", "779X655", "5425X75", "18687X8", "749375X"};
    int tollHike = 75;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 40.38343558282209;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> tolls = {"X3XX5XX235", "6X22XX86X6", "17X3733X6X", "5XXX921X57", "233XX2X295", "46X7XXX28X", "68X4X4X16X", "XX87XXXXX6", "4X1X8823X9", "X854X5793X"};
    int tollHike = 23;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 44.62383770076078;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> tolls = {"XX9X2X65X3", "XXX554X69X", "X6X55294X4", "X45X67X295", "85X6X549X8", "75XX3X9821", "X44XXXXX71", "97685XXX5X", "XX92558XX7", "X95XX8X42X"};
    int tollHike = 14;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 45.600969305331176;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> tolls = {"X57XX6XX51", "XX475X76X5", "24X44XX575", "5X7X885XX9", "5553X15297", "X5763X6X26", "5X7135XXX8", "21X639XX9X", "XX9X5957X5", "9XX911247X"};
    int tollHike = 43;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 55.56570987257047;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> tolls = {"XXX6758838", "3XX2X9X553", "81XX29X56X", "9X6XX97XX4", "X63XX274X6", "1X9X3X585X", "15X94XX52X", "X1X9199X69", "X22X2451X5", "96X779X65X"};
    int tollHike = 5;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 40.406764027671024;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> tolls = {"XX5X7X156X", "XX8X421959", "X7X1575X57", "981XXX7X68", "XXX1XX23XX", "1X3X9X8785", "4X5365X83X", "X8389X5X22", "6X11X455X4", "553574X58X"};
    int tollHike = 21;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 44.390405904059044;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> tolls = {"XXXX3XX478", "2XX981X7X7", "95X455691X", "X33X6X4282", "6X41X55247", "639X1XX572", "1515X2XX11", "X25XX4XXX4", "568915X2X7", "5X98X5XX3X"};
    int tollHike = 11;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 38.9973474801061;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> tolls = {"X52XX928X8", "5XX1X68XXX", "X5X5XX9516", "X28XXX5X37", "X5X1X13651", "73556X397X", "5XXX33XX81", "43X592XXXX", "512X5X94X5", "554XXX922X"};
    int tollHike = 91;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 59.286014169509315;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> tolls = {"X55X29X599", "4X2XXX8X51", "76X8XXX5X2", "392X4X4X26", "791XX758X7", "XXX4XX9X68", "5XX41XXX35", "5175X52X55", "51X55X9XX5", "92XXXX95XX"};
    int tollHike = 55;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 53.45491932932616;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> tolls = {"XX9XX5659X", "7XX975X5XX", "93X49858X5", "X5XX67581X", "8645X3X624", "454X9XX718", "656416XX43", "5X465XXXX2", "XX54235XX4", "5X7X17X17X"};
    int tollHike = 95;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 66.7055124431362;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> tolls = {"XX483X79X5", "7X1X152996", "52XX88X753", "95XX624762", "2512XX3X45", "9X864XX916", "613765X765", "X891877X28", "2534X444X3", "929X54739X"};
    int tollHike = 96;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 61.031095123900876;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> tolls = {"X198514486", "5X38531767", "32X5595353", "171X615445", "8141X22716", "12542X8555", "137219X554", "5211815X21", "23474564X4", "572627591X"};
    int tollHike = 97;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 46.0356474849682;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> tolls = {"X543212677", "4X53452576", "51X3755522", "232X738512", "9956X65484", "31316X1956", "149379X453", "2738683X31", "78159547X5", "879225196X"};
    int tollHike = 15;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 38.714354796032886;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> tolls = {"X973725637", "5X58571757", "18X5342554", "585X461632", "7437X72445", "95425X1865", "846589X523", "3875141X81", "65319996X7", "331348853X"};
    int tollHike = 19;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 41.87504676052226;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> tolls = {"X664111745", "7X56923248", "77X2569869", "281X217778", "7245X41253", "99971X3987", "184839X415", "9428429X62", "99856795X8", "555123533X"};
    int tollHike = 80;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 51.82138849098092;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> tolls = {"X525986369", "7X28585395", "16X9989957", "455X771355", "7912X58947", "35468X8758", "348585X245", "2522753X15", "55469213X4", "595835321X"};
    int tollHike = 95;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 55.267826023485185;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> tolls = {"X255739723", "3X51253585", "99X4556585", "756X243386", "5762X95315", "52324X2275", "839561X182", "3951159X39", "56586283X3", "154535382X"};
    int tollHike = 9;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 39.089296630505196;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> tolls = {"X522684593", "8X27978128", "56X5532665", "487X955124", "2635X56599", "38181X4532", "513571X813", "3555879X75", "56478675X2", "456551598X"};
    int tollHike = 4;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 41.44645578051295;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> tolls = {"X714517452", "6X77439185", "88X8348856", "596X321582", "6358X79583", "71725X3529", "879255X445", "6725561X42", "85555827X5", "655899451X"};
    int tollHike = 55;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 46.821397614985266;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> tolls = {"X831915326", "5X15468442", "59X3237719", "125X576899", "1863X56974", "58362X7695", "781357X728", "9897859X26", "27246523X7", "652172715X"};
    int tollHike = 67;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 50.87498289249186;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> tolls = {"X274253172", "6X55475885", "36X6474639", "554X145141", "9454X92951", "57611X5466", "576528X418", "8255269X25", "86946234X9", "577875988X"};
    int tollHike = 49;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 44.214249869982936;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> tolls = {"X2XX", "XX44", "X1XX", "XXXX"};
    int tollHike = 4;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 10.0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> tolls = {"X23X", "XX44", "X1XX", "111X"};
    int tollHike = 4;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 11.0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> tolls = {"X111111111", "1X11111111", "11X1111111", "111X111111", "1111X11111", "11111X1111", "111111X111", "1111111X11", "11111111X1", "111111111X"};
    int tollHike = 1;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 8.1250079835038;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> tolls = {"X324", "5X22", "12X5", "991X"};
    int tollHike = 57;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 29.2;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> tolls = {"X123456789", "1X23456789", "11X3456789", "112X456789", "1123X56789", "11234X6789", "112345X789", "1123456X89", "11234567X9", "112345678X"};
    int tollHike = 100;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 52.999927007965255;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> tolls = {"X324", "5X22", "12X5", "991X"};
    int tollHike = 82;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 39.2;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> tolls = {"X999999999", "9X99999999", "99X9999999", "999X999999", "9999X99999", "99999X9999", "999999X999", "9999999X99", "99999999X9", "999999999X"};
    int tollHike = 100;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 84.4999680659848;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> tolls = {"X11", "2X1", "37X"};
    int tollHike = 76;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 39.5;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> tolls = {"X32445", "5X2223", "12X589", "991X11", "6321X5", "86942X"};
    int tollHike = 98;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 38.261538461538464;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> tolls = {"X123456789", "1X23456789", "12X3456789", "123X456789", "1234X56789", "12345X6789", "123456X789", "1234567X89", "12345678X9", "123456789X"};
    int tollHike = 98;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 55.749938412970685;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> tolls = {"X123456789", "9X12345678", "94X2345678", "192X345678", "9123X45678", "91234X5678", "912345X678", "9123444X67", "91234333X7", "912345678X"};
    int tollHike = 10;
    GreedyGovernment* pObj = new GreedyGovernment();
    clock_t start = clock();
    double result = pObj->maxAverageCost(tolls, tollHike);
    clock_t end = clock();
    delete pObj;
    double expected = 37.28574556801489;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15052902&rd=8072&pm=5910
********************************************************************************
#line 71 "GreedyGovernment.cpp" 
#include <string> 
#include <vector> 
#include <iostream> 
#include <cmath> 
#include <queue> 
#include <cstdio> 
#include <cstdlib> 
#include <set> 
 
using namespace std; 
 
bool used[12]; 
int sum,number; 
int matrix[12][12]; 
 
class GreedyGovernment { 
  public: 
    void DFS(int a, int n, int cost) { 
         if (a==n-1) { 
            number++; 
            sum+=cost; 
            return; 
         }; 
         used[a]=true; 
         for (int i=0; i<n; i++) 
             if (matrix[a][i]>=0 && !used[i]) 
                DFS(i,n,cost+matrix[a][i]); 
         used[a]=false; 
    } 
  double maxAverageCost(vector <string> tolls, int toll) {           
           for (int i=0; i<tolls.size(); i++) 
               for (int j=0; j<tolls[i].size(); j++) 
                   if (tolls[i][j]=='X') matrix[i][j]=-1; 
                   else matrix[i][j]=tolls[i][j]-'0';                    
           double best=0. 
; 
           for (int i=0; i<tolls.size(); i++) 
               for (int j=0; j<tolls.size(); j++) 
                   if (matrix[i][j]<0) continue; 
                   else { 
                        matrix[i][j]+=toll; 
                        for (int k=0; k<tolls.size(); k++) 
                            used[k]=false;                    
                        sum=0; number=0; 
                        DFS(0,tolls.size(),0); 
                        double avg; 
                        if (number>0) avg=(double)sum/(double)number; 
                        else avg=0.; 
                        best>?=avg; 
                        matrix[i][j]-=toll; 
                   } 
           return best; 
     
  } 
}; 
 
 
// Powered by FileEdit 
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/