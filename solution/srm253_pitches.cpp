/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4667
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

class Pitches {
public:
    double strikeOut(vector<double> stats, int balls, int strikes);
};

double Pitches::strikeOut(vector<double> stats, int balls, int strikes) {
    double ret;
    return ret;
}


int test0() {
    vector<double> stats = {0.0, 0.0, 0.0, 1.0, 0.0, 1.0, 0.0, 0.0};
    int balls = 3;
    int strikes = 2;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<double> stats = {0.541360678953378, 0.251311079561226, 0.810364006439709, 0.172433517475874, 0.224491762214985, 0.40885541054179, 0.586207954897386, 0.118656938732521};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06393930309319609;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<double> stats = {0.576011612426814, 0.418368878292426, 0.00659910848814249, 0.466372046112021, 0.289294236388617, 0.280864375524416, 0.556361780182097, 0.382662625898313};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1949923005099184;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<double> stats = {0.0, 0.0, 0.0, 0.51, 0.0, 1.0, 0.0, 0.49};
    int balls = 3;
    int strikes = 2;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<double> stats = {0.375, 0.25, 0.375, 0.25, 0.375, 0.25, 0.375, 0.25};
    int balls = 0;
    int strikes = 2;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.39208984375;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<double> stats = {0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 1.0};
    int balls = 2;
    int strikes = 1;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<double> stats = {0.33, 0.0, 0.0, 1.0, 0.44, 0.0, 0.0, 1.0};
    int balls = 2;
    int strikes = 1;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<double> stats = {0.0, 1.0, 0.0, 1.0, 0.0, 0.0, 0.0, 0.0};
    int balls = 2;
    int strikes = 1;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 1.0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<double> stats = {0.0, 0.5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.5};
    int balls = 1;
    int strikes = 1;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0625;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<double> stats = {0.0, 0.4, 0.05, 0.75, 0.2, 0.7, 0.85, 0.1};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.32194802205218886;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<double> stats = {0.046, 0.046, 0.046, 0.046, 0.046, 0.046, 0.046, 0.046};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 1.1209888882495999E-4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<double> stats = {0.264, 0.389, 0.242, 0.389, 0.251, 0.389, 0.418, 0.389};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14019653097450774;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<double> stats = {0.262, 0.319, 0.601, 0.319, 0.576, 0.319, 0.486, 0.25};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.13921041179085655;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<double> stats = {0.139, 0.162, 0.682, 0.162, 0.455, 0.162, 0.237, 0.389};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.019340684483310003;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<double> stats = {0.02, 0.485, 0.169, 0.485, 0.377, 0.439, 0.22, 0.439};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.18662321614905125;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<double> stats = {0.413, 0.431, 0.286, 0.431, 0.616, 0.244, 0.056, 0.431};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.20677969244686692;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<double> stats = {0.0080, 0.382, 0.363, 0.382, 0.372, 0.355, 0.208, 0.0};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07267762409605114;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<double> stats = {0.204, 0.353, 0.147, 0.353, 0.727, 0.152, 0.336, 0.211};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07048557781436769;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<double> stats = {0.67, 0.176, 0.083, 0.176, 0.219, 0.037, 0.595, 0.367};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.021552986306934228;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<double> stats = {0.246, 0.05, 0.028, 0.05, 0.241, 0.101, 0.309, 0.05};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 3.493652862500001E-4;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<double> stats = {0.367, 0.017, 0.653, 0.017, 0.645, 0.318, 0.494, 0.318};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16566717379053886;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<double> stats = {0.72, 0.099, 0.065, 0.099, 0.476, 0.236, 0.714, 0.076};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0051374113568896235;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<double> stats = {0.286, 0.244, 0.742, 0.244, 0.372, 0.34, 0.304, 0.275};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08675955241817294;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<double> stats = {0.047, 0.081, 0.469, 0.081, 0.079, 0.269, 0.088, 0.31};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.024903200883376518;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<double> stats = {0.578, 0.395, 0.094, 0.224, 0.774, 0.224, 0.579, 0.224};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07518603007655936;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<double> stats = {0.134, 0.366, 0.57, 0.261, 0.598, 0.261, 0.554, 0.366};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.13983521193903417;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<double> stats = {0.21, 0.419, 0.803, 0.187, 0.547, 0.187, 0.441, 0.087};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0800709794625522;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<double> stats = {0.358, 0.289, 0.844, 0.01, 0.335, 0.01, 0.586, 0.203};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01243702310799791;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<double> stats = {0.191, 0.15, 0.182, 0.114, 0.017, 0.114, 0.318, 0.387};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.005474707149656154;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<double> stats = {0.377, 0.437, 0.542, 0.237, 0.303, 0.437, 0.197, 0.237};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07961652530415864;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<double> stats = {0.4, 0.396, 0.606, 0.151, 0.425, 0.396, 0.371, 0.396};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.214210603868089;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<double> stats = {0.424, 0.4, 0.403, 0.154, 0.064, 0.4, 0.2, 0.129};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.01401725143207928;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<double> stats = {0.503, 0.443, 0.549, 0.074, 0.463, 0.443, 0.146, 0.101};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.002899747636088471;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<double> stats = {0.391, 0.358, 0.739, 0.192, 0.067, 0.358, 0.033, 0.401};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.12904666808018028;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<double> stats = {0.533, 0.278, 0.364, 0.098, 0.47, 0.0010, 0.544, 0.0010};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00317112191323648;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<double> stats = {0.22, 0.404, 0.719, 0.259, 0.315, 0.248, 0.359, 0.259};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.12746563858037338;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<double> stats = {0.154, 0.326, 0.602, 0.141, 0.24, 0.112, 0.195, 0.326};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.037959851581878826;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<double> stats = {0.339, 0.484, 0.01, 0.399, 0.377, 0.291, 0.604, 0.219};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10945104972766692;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<double> stats = {0.053, 0.4, 0.01, 0.397, 0.759, 0.226, 0.316, 0.293};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0768685878069554;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<double> stats = {0.384, 0.489, 0.049, 0.431, 0.448, 0.252, 0.218, 0.44};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.14865457593791112;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<double> stats = {0.018, 0.302, 0.686, 0.085, 0.913, 0.023, 0.076, 0.43};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.028070464636325575;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<double> stats = {0.511, 0.441, 0.58, 0.0040, 0.186, 0.377, 0.262, 0.0040};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 4.2940928E-7;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<double> stats = {0.098, 0.442, 0.297, 0.101, 0.176, 0.246, 0.153, 0.246};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.024344156408724716;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<double> stats = {0.335, 0.379, 0.561, 0.07, 0.812, 0.124, 0.469, 0.379};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08996536688037415;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<double> stats = {0.025, 0.46, 0.616, 0.152, 0.469, 0.269, 0.85, 0.082};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.026228272892608512;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<double> stats = {0.138, 0.46, 0.61, 0.171, 0.195, 0.323, 0.168, 0.221};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04225203959426001;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<double> stats = {0.0010, 0.403, 0.324, 0.073, 0.432, 0.135, 0.586, 0.251};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.032211756243620666;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<double> stats = {0.533, 0.342, 0.259, 0.054, 0.465, 0.132, 0.535, 0.426};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06328648667111784;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<double> stats = {0.466, 0.125, 0.74, 0.116, 0.35, 0.492, 0.317, 0.116};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.015098964802057115;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<double> stats = {0.139, 0.37, 0.652, 0.301, 0.466, 0.397, 0.054, 0.37};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.13983272921820197;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<double> stats = {0.334, 0.17, 0.172, 0.062, 0.134, 0.355, 0.203, 0.355};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06862035404792999;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<double> stats = {0.575, 0.387, 0.762, 0.211, 0.167, 0.419, 0.742, 0.21};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.10515915139270166;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<double> stats = {0.428, 0.121, 0.297, 0.015, 0.299, 0.44, 0.192, 0.101};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0019245640232268804;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<double> stats = {0.437, 0.073, 0.925, 0.026, 0.524, 0.472, 0.051, 0.226};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.014390633034280655;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<double> stats = {0.244, 0.027, 0.094, 0.023, 0.725, 0.144, 0.033, 0.345};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.029793945553919992;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<double> stats = {0.12, 0.049, 0.202, 0.282, 0.49, 0.049, 0.03, 0.049};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 5.270289628740813E-4;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<double> stats = {0.141, 0.125, 0.494, 0.42, 0.125, 0.125, 0.363, 0.42};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00306702775390625;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<double> stats = {0.552, 0.362, 0.288, 0.415, 0.616, 0.362, 0.231, 0.195};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.1826916112516655;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<double> stats = {0.876, 0.048, 0.19, 0.39, 0.102, 0.048, 0.271, 0.122};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.00165384471969792;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<double> stats = {0.402, 0.348, 0.549, 0.374, 0.255, 0.348, 0.366, 0.461};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.16121300099175934;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<double> stats = {0.516, 0.243, 0.417, 0.28, 0.124, 0.28, 0.63, 0.243};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08122719984466728;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<double> stats = {0.333, 0.096, 0.483, 0.479, 0.198, 0.479, 0.29, 0.479};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.20956685584049287;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<double> stats = {0.143, 0.131, 0.204, 0.479, 0.507, 0.479, 0.419, 0.082};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.07042996282442894;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<double> stats = {0.684, 0.064, 0.298, 0.312, 0.115, 0.312, 0.0070, 0.137};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02357175626604909;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<double> stats = {0.155, 0.083, 0.337, 0.143, 0.766, 0.143, 0.135, 0.458};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.033081808080040714;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<double> stats = {0.165, 0.306, 0.428, 0.397, 0.078, 0.225, 0.381, 0.225};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.04880317707008999;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<double> stats = {0.525, 0.382, 0.18, 0.396, 0.623, 0.096, 0.415, 0.382};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.15076250862157328;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<double> stats = {0.177, 0.402, 0.215, 0.446, 0.105, 0.012, 0.069, 0.446};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.11527526583859465;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<double> stats = {0.274, 0.249, 0.504, 0.418, 0.484, 0.083, 0.474, 0.073};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.038258516600015766;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<double> stats = {0.581, 0.338, 0.443, 0.409, 0.217, 0.034, 0.327, 0.317};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.25705032816220863;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<double> stats = {0.153, 0.192, 0.338, 0.383, 0.119, 0.024, 0.404, 0.294};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.011574256281845762;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<double> stats = {0.27, 0.172, 0.148, 0.221, 0.287, 0.071, 0.111, 0.46};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.012437337255039997;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<double> stats = {0.792, 0.127, 0.287, 0.41, 0.535, 0.283, 0.792, 0.127};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08925935909420737;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<double> stats = {0.262, 0.013, 0.08, 0.349, 0.173, 0.056, 0.788, 0.056};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0738967107072E-4;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<double> stats = {0.347, 0.027, 0.094, 0.379, 0.221, 0.218, 0.139, 0.379};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.021383359404029523;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<double> stats = {0.132, 0.272, 0.267, 0.48, 0.059, 0.303, 0.073, 0.209};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.032707712261783504;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<double> stats = {0.307, 0.248, 0.388, 0.45, 0.29, 0.318, 0.51, 0.294};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.08393147068672727;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<double> stats = {0.804, 0.056, 0.524, 0.323, 0.724, 0.065, 0.8, 0.187};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.0027884002088800004;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<double> stats = {0.78, 0.06, 0.077, 0.453, 0.088, 0.216, 0.383, 0.481};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.014129547965890561;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<double> stats = {0.684, 0.068, 0.59, 0.163, 0.363, 0.402, 0.582, 0.068};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.02005008649770985;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<double> stats = {0.407, 0.119, 0.431, 0.299, 0.507, 0.367, 0.685, 0.299};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.23127786276592244;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<double> stats = {0.115, 0.079, 0.052, 0.182, 0.534, 0.208, 0.142, 0.208};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.014178837648834559;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<double> stats = {0.529, 0.087, 0.144, 0.441, 0.228, 0.474, 0.6, 0.057};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.06377471607787412;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<double> stats = {0.403, 0.117, 0.418, 0.179, 0.307, 0.373, 0.129, 0.127};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.016320920120349514;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<double> stats = {0.465, 0.227, 0.33, 0.288, 0.32, 0.4, 0.468, 0.383};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.18441875249561604;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<double> stats = {0.262, 0.077, 0.156, 0.155, 0.14, 0.205, 0.3, 0.462};
    int balls = 0;
    int strikes = 0;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.013483015229999997;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<double> stats = {1.0E-6, 0.999, 0.5, 0.49, 1.0E-6, 1.0E-6, 0.99, 0.0};
    int balls = 1;
    int strikes = 1;
    Pitches* pObj = new Pitches();
    clock_t start = clock();
    double result = pObj->strikeOut(stats, balls, strikes);
    clock_t end = clock();
    delete pObj;
    double expected = 0.660275;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=7227&pm=4667
********************************************************************************
// You will never see how this line looked after 4 challenges failed! 
#include <algorithm> 
#include <vector> 
using namespace std; 
 
typedef long double ld; 
 
#define LS < 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
#line 3 "Pitches.cc" 
 
ld prob[8][8]; 
 
vector<double> s; 
 
ld test(ld bb, ld ss, ld p0, ld p1) { 
  // pitcher p1 
  ld resultb, results; 
   
  resultb = 0; 
  results = 0; 
   
  for(int c0=0; c0<2; c0++) 
  for(int c1=0; c1<2; c1++) { 
    ld chance = 1; 
    if(c0 == 1) chance *= p0; else chance *= (1-p0); 
    if(c1 == 1) chance *= p1; else chance *= (1-p1); 
    resultb += chance * s[2*c0+4*c1]; 
    results += chance * s[2*c0+4*c1+1]; 
    } 
   
  return resultb * bb + results * ss; 
  } 
 
#define eps 1e-12 
 
class Pitches { 
  public: 
  double strikeOut(vector <double> stats, int balls, int strikes) { 
    // !FDI 
    s = stats; 
     
    FOR(b,0,8) prob[4][b] = 0; 
    FOR(b,0,8) prob[b][3] = 1; 
    for(int bb=3; bb >= 0; bb--) 
    for(int ss=2; ss >= 0; ss--) { 
       
      ld bbb = prob[bb+1][ss]; 
      ld sss = prob[bb][ss+1]; 
 
      if(test(bbb,sss,0,0) >= test(bbb,sss,0,1)-eps && 
         test(bbb,sss,1,0) >= test(bbb,sss,1,1)-eps) { 
        prob[bb][ss] = test(bbb,sss,0,0) <? test(bbb,sss,1,0); 
        } 
      else if(test(bbb,sss,0,0) <= test(bbb,sss,0,1)+eps && 
         test(bbb,sss,1,0) <= test(bbb,sss,1,1)+eps) { 
        prob[bb][ss] = test(bbb,sss,0,1) <? test(bbb,sss,1,1); 
        } 
      else if(test(bbb,sss,0,0) >= test(bbb,sss,1,0)-eps && 
         test(bbb,sss,0,1) >= test(bbb,sss,1,1)-eps) { 
        prob[bb][ss] = test(bbb,sss,1,1) >? test(bbb,sss,1,0); 
        } 
      else if(test(bbb,sss,0,0) <= test(bbb,sss,1,0)+eps && 
         test(bbb,sss,0,1) <= test(bbb,sss,1,1)+eps) { 
        prob[bb][ss] = test(bbb,sss,0,1) >? test(bbb,sss,0,0); 
        } 
      else { 
 
/*    printf("Here (%d,%d)\n", bb,ss); 
      printf("%Lf %Lf %Lf %Lf\n", 
        test(bbb,sss,0,0), 
        test(bbb,sss,0,1), 
        test(bbb,sss,1,0), 
        test(bbb,sss,1,1) 
        ); 
*/       
 
        int sign; 
        if(test(bbb,sss,0,0) > test(bbb,sss,0,1)) sign = 0; 
        else sign = 1; 
        ld min = 0, max = 1; 
        while(max-min > eps) { 
          ld med = (min+max)/2; 
          if(test(bbb,sss,med,sign) > test(bbb,sss,med,1-sign)) 
            min = med; 
          else 
            max = med; 
          } 
        prob[bb][ss] = test(bbb,sss,min,sign); 
        } 
      } 
    return prob[balls][strikes]; 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/