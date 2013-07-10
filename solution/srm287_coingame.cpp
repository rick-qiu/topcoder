/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6005
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

class CoinGame {
public:
    double bestProbability(vector<string> sequences);
};

double CoinGame::bestProbability(vector<string> sequences) {
    double ret;
    return ret;
}


int test0() {
    vector<string> sequences = {"H", "T"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
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
    vector<string> sequences = {"HHHHHHHHH", "TTTTTTTTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5000000000000011;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> sequences = {"HH", "HT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> sequences = {"TTT", "HTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.875;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> sequences = {"HHH", "HHT", "HTH", "HTT", "THH", "THT", "TTH", "TTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.33333333333333337;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> sequences = {"TTHTTHTTH", "HTTHTHHTT", "TTHHHHTHT", "TTTTTHTTT", "HHTTHTHHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5019379844961235;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> sequences = {"TTTTTTTTT", "TTTTTTTTH", "TTTTTTTHH", "TTTTTTHHH", "TTTTTHHHH", "TTTTHHHHH", "TTTHHHHHH", "TTHHHHHHH", "THHHHHHHH", "HHHHHHHHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> sequences = {"THTTHHTHT", "HHTHTHHTT", "HTTTHTHTT", "THTTTTTHT", "TTTTTHTHT", "HTTHTHTHT", "HTHTTTTHT", "HTHHHTHHH", "HHHTHTHHT", "HTHTTTHTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5019531249999993;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> sequences = {"HHHHHHHHHH", "THHHHHHHHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.9990234375;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> sequences = {"THTHTHTHTH", "TTHTHTHTHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.7985948477751708;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> sequences = {"HHHH", "HHHT", "HHTH", "HHTT", "HTHH", "HTHT", "HTTH", "HTTT", "THHH", "THHT", "THTH", "THTT", "TTHH", "TTHT", "TTTH", "TTTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.3571428571428572;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> sequences = {"HHHT", "HHTT", "HTHH", "HTHT", "HTTH", "THHT", "THTH", "THTT", "TTHH", "TTHT", "TTTH", "TTTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.41666666666666663;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> sequences = {"THHHHTTHHT", "HTHHTTTTTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5000000000000044;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> sequences = {"HHT", "TTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> sequences = {"HHTTTH", "HHTHTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> sequences = {"HHTHTTHT", "HTHTTHTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6736842105263163;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> sequences = {"HHHTHTH", "THHHTHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6562499999999999;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> sequences = {"THTT", "HTHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6428571428571428;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> sequences = {"TTTHHTH", "TTTTHTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5000000000000001;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> sequences = {"THHTT", "THHHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> sequences = {"TTTHTTHH", "HTHTHHHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5039062499999993;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> sequences = {"HHHHHT", "HHTHTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5333333333333334;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> sequences = {"TTHTHH", "HTTTHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5535714285714286;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> sequences = {"THTHTHHH", "HTTTHTHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5381355932203394;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> sequences = {"TTTHT", "HHHHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6458333333333333;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> sequences = {"HTHHH", "HHTTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5333333333333334;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> sequences = {"THTTHH", "HTTTTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5000000000000002;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> sequences = {"THH", "HTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<string> sequences = {"THTHTHTTHH", "TTHTTTHHHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5000000000000003;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> sequences = {"HTTHHTT", "TTHTHHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5078124999999998;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> sequences = {"THTTT", "TTHTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5833333333333331;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> sequences = {"TTHTT", "TTTHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<string> sequences = {"THHHHTHTT", "HHHHTHHHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.501953125;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<string> sequences = {"HTTTTTTTT", "THHTHTHTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5019685039370083;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<string> sequences = {"HHTTTHT", "HHTHHHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5000000000000001;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> sequences = {"THHT", "HHTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5833333333333334;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> sequences = {"HTHHTHHT", "THTTHTTT", "HHTTTHTT", "HTTTHHTT", "HTHTHTTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5000000000000008;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> sequences = {"THT", "TTT", "HTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> sequences = {"THHTTHHH", "HTHTHHTH", "THHHHTTT", "HHHTTTTT", "HHTHTHHH", "TTHHTTTT", "HHTTHTHT", "TTTTTHTH", "TTTHTHTT", "TTHTTHTH", "TTTTHHTH", "HHHHTHTT", "HTHHTTHT", "TTTTHTHT", "HHTTTTHH", "HTTHHTTT", "HHTHHHHH", "THHHHHHT", "THTHTHTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49606299212598515;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> sequences = {"HTHHHTTHHT", "TTHTHHTHTH", "HTHTHHHTTH", "HHHTTTHHHT", "HTHTTTHTHH", "THTHHHTTHT", "HTTHHTHTHH", "TTHHHHTTTH", "TTTTHHHHTH", "HHHHTTTTTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4990215264187837;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> sequences = {"TTTHHTHHTH", "HTHTTHHTTH", "HHTTTTTTTH", "HTHTHTTTTT", "THHHTHTHHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49999999999999956;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> sequences = {"HTHHHHTTT", "THHTTHTTH", "HHHHHTTHT", "THTTTTHHH", "TTHHTTTTT", "HHHHTTTHH", "TTTTTTTTT", "HTTTTTTHT", "THHHHTTTT", "TTTHHTTHT", "TTTTHTTHH", "THTHTTTHH", "THHTHHTTT", "TTTTTTHHH", "HHTTTTHHT", "HHHTHTHHH", "TTHHTTHHT", "HTHTHHTTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49803921568627596;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<string> sequences = {"TTTHH", "TTHHH", "THHTT", "TTHHT", "THTTT", "HHTTH", "HTTHH", "HHHHT", "THTTH", "TTHTH", "TTTTH", "THTHH", "HTHHT", "THHHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.46875;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> sequences = {"TTTH", "TTHT", "HHTT", "HHHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5000000000000001;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<string> sequences = {"TTTHTT", "THTHTH", "THHTTH", "HHTTHH", "HHHHHT", "THTTTH", "HTTHHT", "TTHHTH", "THHTHT", "HHHTTH", "TTTHHH", "TTHTHH", "HTHTHH", "TTHHTT", "HTHTTH", "HHTTTH", "HTHTTT", "HHTTTT", "TTTHHT", "HTTHTH", "TTTTTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.46666666666666656;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<string> sequences = {"TTHTHH", "THHTHH", "THTHTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5161290322580645;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<string> sequences = {"HTHTHHTTH", "TTTHTHHTT", "HTTTTHTTH", "HTTTTTHTH", "HTHTTHHHH", "TTTTTTTTH", "HHHHTHHTH", "HHHTTHHHT", "HTHTTTTHT", "HHTTHHHTH", "THHTTHHTH", "HHTHTTTHH", "THTTTHHTT", "THTTTHHTH", "THHTTHTHH", "HTTTTTTHT", "HTHTTTTTT", "TTTHTTHTT", "THTHTTTTT", "TTHTHHHHT", "TTTTTTHHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4960784313725478;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<string> sequences = {"HTTHHHH", "THHTTTT", "HHHTTTH", "HHTTTTH", "TTHHTHH", "THTTTHT", "TTTHHHT", "HTHHHHH", "HTTTTTH", "HHTHTTH", "TTTTTTT", "HTTHTHT", "HTHHTTH", "HTTTHHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49193548387096775;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<string> sequences = {"HTTHHHHTTT", "HHTTHTTTTH", "HHTTTTTTHH", "HTTHHHTHHH", "HTTHTTTTTT", "THHTHTTTTT", "HHTHHTHHHT", "TTHHHHHHTH", "HTTHTTHHTH", "HHHHHTHTHT", "TTTHHTHTHH", "HHHHTHHHTH", "THHHHTHTTH", "HTHHTTHHTH", "THTHTTTTHH", "HHTTHHTTTT", "HHHTTHTTTT", "HTHHHTHHTT", "THHHTTTTHT", "HTHTHTHHTH", "THHHTTHHHH", "HTHTHHHHHT", "TTTHTHHHHH", "THTHTTHTHH", "HTHTHTHTHH", "THHTHTTTHH", "TTTTHTHHTT", "TTHHTTHTTT", "HTTTTHTTHT", "HHTHTHTHTT", "HTTTHHTTHT", "HTTHTHTHHH", "HHHHTHTTTH", "HHHHTHTTHH", "HTHHHTTHHT", "HTHTHHHHTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49704724409448786;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<string> sequences = {"TTT", "THH", "HTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<string> sequences = {"HHHTTTHHH", "THTTHTHHH", "THHTHHTTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5000000000000004;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<string> sequences = {"THT", "HTH", "HHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.625;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<string> sequences = {"TTHHHHT", "HHHHHTT", "TTTHHHH", "HHTTHHT", "HHTTHTH", "HHHTHTH", "TTHHTHT", "TTTHHTT", "THTTTTT", "TTHHTTH", "HTTHTHT", "TTHTTHT", "HHTHHTH", "HTHHHTT", "HTHTTHH", "TTTHTHH", "TTHHHHH", "THTTTTH", "HTTTHHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4841269841269844;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<string> sequences = {"HTHHHTTTTT", "TTTHHTHHTH", "HTTTTTHHTT", "THTTHHTHTT", "TTTTHHTTHH", "HTHHTHHHTH", "THHTHTTHHT", "HHTTHHHTTT", "HHHTHHHTHH", "THTHHHHHTT", "HTTHTHHHHH", "TTTHTHTHTH", "HTTHHTHTHH", "THHTTHTHHH", "THTHTTTTTT", "THTTTHTHHT", "HTHTTHTTHH", "THTTTTTHTT", "HTHTHTHHHH", "HTHTHHTHTH", "TTTTTHTTTT", "HHHTHTTHHT", "THTHHHTHTT", "TTTHTTTTHT", "HTHTTHTHTH", "HTTHHTHHHH", "TTTTHTHHHT", "HTTTTTHTHH", "HTHTTTTHTH", "TTHTTTHHHT", "HTTHHTTTTH", "THTHHTTHHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49705882352940667;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<string> sequences = {"TTTHHHTHTH", "THTHHTHTHH", "TTTTHHHTHH", "HHHTTTHTTH", "HTTHHTTTTH", "HHHHHTTTHH", "HTTHTTHHTH", "TTHHHTHHTH", "THTTTHTHTH", "THTHTTHTTT", "HTTHHHHTHT", "THHTHTTTHT", "HHHHTTTTTT", "THTTTTHTTT", "TTTHHHHHHT", "HHTTTTTTTT", "TTTHTTHTTH", "TTTTTHTHTH", "THTTHHTTHH", "TTHTHTHTTH", "HTTHHTTHHT", "THHHHHTTHH", "HHHTTTTHTT", "TTHTHTTTHT", "THHTTHHTHT", "TTHHTHTHTT", "HHTTHTTTTH", "TTHHTHTHTH", "HTHHHTTHHH", "TTTTHHTHHT", "HHHTHHHHHH", "HTHTHHTTTH", "HTTHHHTHTT", "THHHHTTHTH", "THTTHHHTHH", "HTTHHHTTTH", "TTTHHTTTHT", "HHHHHTHTTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4990196078431368;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<string> sequences = {"TTT", "HTH", "TTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<string> sequences = {"HHTHTTHHH", "HHTHHHTTT", "HTTHHTTHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4999999999999999;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<string> sequences = {"TTHTHTTHH", "TTTTHHTTH", "THTHTHTTT", "HHTTHHTTT", "TTHTTHTTH", "HTHTHTHTT", "TTTTHHHTH", "TTHTTHHTH", "HTTTHTHTH", "HHTHHTTHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4960629921259839;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<string> sequences = {"HHHTTHTHH", "THHHTHHHT", "TTHHTHTTH", "HTTHHHTTH", "TTTHHHTTH", "HHHTHHHHH", "THHTHHTTH", "HTHTTHTHT", "HTTTHTHHH", "TTTHHTTHH", "THHHTHTTT", "HTHTHHTHH", "THTTHHTHT", "THHHHTTTT", "TTTTTTHTH", "HTTTHHTHH", "HHTHTHTHH", "TTHTTTTTT", "THTHTTTTH", "HHTTTTTTT", "TTHHHHTHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.498046874999999;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<string> sequences = {"TTTH", "HTTT", "HTTH", "HHTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<string> sequences = {"HTTTTTT", "HHHTHTH", "HHTTTHH", "TTTTHTT", "TTHHHTT", "HTTTHHT", "HHHTTTH", "THTTHTH", "TTHTHTT", "TTTHHTH", "THTHTHT", "THHHTHH", "TTTTTHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49999999999999956;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<string> sequences = {"TTTTHT", "THTTTT", "HTTTTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6086956521739127;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<string> sequences = {"HHTT", "HTHT", "THHT", "THTH", "TTTH", "HTTH", "THHH", "HHHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4285714285714286;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<string> sequences = {"HHHTTTHHT", "HTTHHHHTT", "HTHHHTTTH", "HHHTTHTTH", "THTTHHTTT", "HHTHTTTTH", "HTTTTHTTH", "HTHTTTTTH", "HHHHTTHTH", "HTHHHHHTH", "TTTHHTTHH", "THHTHTHTH", "TTHHHHTTH", "HHHHHHHTT", "HTHTHTTHH", "TTTHTTTHH", "THTHHHTTH", "HHHHTTTHH", "THTTHTTHH", "THTHHTHTH", "HTHTHTHTT", "HTHTHTTHT", "HHHTHTTTT", "TTTHHHTHT", "TTHHTHTTT", "HHHHTTTTH", "TTTTHTHTH", "THTTHTHTT", "HHHHTTHHT", "HHTHHTHTH", "HHTTHHTHT", "THHHTTTHT", "TTHTTTTHH", "TTHTHTTHH", "HHHHHTTTT", "TTHTTTHTT", "HTHHHHTHT", "HHHTTTHHH", "HTTHTTHHH", "HTHHTTTHH", "HHTHTHTHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49800796812748904;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<string> sequences = {"THTTTTTHH", "THTHTTTHT", "HTTTHTHTH", "TTTHTHHTH", "THTHHHHTT", "HTHHHHTTT", "THHTHHTTH", "HTHTTTTHH", "HTTHTTTHT", "HHTTTHHTH", "TTHHHHTHH", "HHTTTHTTH", "HTTHTTHTT", "THTHHTHTH", "TTTTHHTTH", "HTHTHTHTT", "HHTHTHHHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49399999999999766;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<string> sequences = {"THTTH", "HHHHT", "HTHHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<string> sequences = {"HHTH", "THTT", "THHH", "HTHH", "TTTT", "HHHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.43749999999999994;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<string> sequences = {"TTTTHTTH", "HHTHHHTH", "THHTHTTH", "TTTHHHHH", "HHTTTTHH", "HTTTHTTH", "HHTTHTHH", "HHTTTTTT", "HTTHTTTH", "TTTHTTTH", "HTTTHHHT", "HTTHTTHH", "TTHTTHTT", "TTHTTHTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4960629921259839;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<string> sequences = {"HHTHHTTH", "THHHTHHH", "HTTHTTHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.511538461538462;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<string> sequences = {"HTT", "HHH", "TTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.6;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<string> sequences = {"THH", "TTH", "TTT", "HHT", "HHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<string> sequences = {"THHTTT", "HTTHHH", "TTTTHT", "HTHHTH", "HHTTHH", "HHHHHH", "HHHHTT", "TTTTTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.484375;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<string> sequences = {"TTHTHTTHT", "HHHHTTTHH", "HHTHHTHTT", "TTHTTHHTT", "HTHHTTTHT", "HHTTHHHTT", "HTTTTTHTT", "THHTTHHHH", "THTTTTTHH", "HTHTHHTHH", "HTHHTTTTT", "TTHHTHTTH", "THTHTTTTT", "THHHTTHHT", "HTHTTHHHH", "THHTHTTTH", "HHHHHTTTT", "THTHHTTHT", "HTHTHHHHT", "THHHTTTHH", "HTHHTHHHT", "HHHHTHHTT", "TTHTTHHHH", "HHHTTHTTH", "HHHHHTTTH", "HHHTHHHTH", "THTTHTHHT", "THTHTTTHH", "HHHTHHHHT", "HTTTHTHHH", "HTTHTTTHT", "TTTHHHTHT", "HTHTHTTTH", "THTHTTTHT", "THHTHHTTT", "THHTTTTTH", "THHHHTHHT", "HHTHHHTHH", "TTHTTTTTH", "TTHHTTHHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49798387096774227;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<string> sequences = {"TTTHHH", "TTHTTH", "HHHTTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<string> sequences = {"HTT", "HHH", "HTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<string> sequences = {"HHTTTHTTTT", "TTHTTTTHTT", "THHTTHHTTT", "TTHTTTTTTT", "TTHTHHTHTT", "TTTHTTTTTH", "THHTHHTHHT", "TTHHTTTTHT", "THTTHTTHTH", "THTHHHTHHT", "HHTTTTTTTT", "TTHTHTTHTH", "TTTTTHTTTH", "THTTTTTTTT", "TTHTTTTTHT", "HTHHTHTTHT", "HTTHTTHHTH", "HHHTHHTHTT", "THTHHTTHHH", "TTHTTTTHHT", "HTHTHTTHTT", "HTHHHTTHTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49999999999999334;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<string> sequences = {"HTT", "THT", "THH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<string> sequences = {"HHTHHHTHH", "THTTHHTTT", "HTTHTTTTT", "HHTTHTTTH", "TTTHHTHHH", "TTHHHHHTH", "HTTHTHHTT", "HTTHTHHHT", "HTHHHHTTT", "THTHTHHHH", "HTHHTHTHT", "HTHHTTTHH", "THHTHTHHT", "TTHHHHTHH", "HHTHTHHHH", "HHTTHHHTH", "HHTHHTTTT", "HTHHHTHHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49999999999999967;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<string> sequences = {"HHHTHHTHT", "TTHHTTTTT", "TTHTHTHHT", "THTTTTHHH", "THTTHTHTT", "HTHHTHHTH", "HHTHTTTTT", "TTHHTTTHH", "TTHHTHTHH", "HTHTTHHHH", "HHHHHHHHT", "HHHHHHTTH", "TTHHTHHTH", "THHHTTTTT", "THHTTTHHH", "TTTTTTHHT", "TTHTTTHHH", "HTHHTTTTT", "THTTHTTHT", "TTHHHTTHT", "TTTHHTTHT", "THTHTHHTT", "HTTHTTTHH", "THTHTTHHT", "HTHHTTHHT", "TTTTHTTTH", "HHTTHTHTT", "HHHHTHTHT", "HTHHTTTHH", "THTHTHTHT", "TTHTHTHHH", "HHTHTHTTH", "TTTTTTTTT", "HTHHTHTTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4939999999999998;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<string> sequences = {"HTTHHHHTHH", "THHHHTTHHH", "TTHTTHTHHH", "HTTTTHHHHT", "HHHTTTHTHT", "TTTHTTTTTH", "HHTHHTTTHH", "TTTTHHTTHT", "THTTHTHHTH", "HHTHHTHHTT", "HHHHHTTHTT", "HTHHTTHHTH", "THHHTTHHHH", "HTTTTHTTHT", "TTTTTHTHTT", "HHHTTHTHTH", "TTTHTTTHTH", "HHTTHTHHHH", "TTTHTTHTHH", "TTHTHTTHHT", "HTHHTTHHTT", "HTHHHHTTTH", "TTHHTTHTTT", "THHTTHTHHT", "HTTTHTTHTT", "HTTTTTHHTH", "TTTHTTTHHH", "HTHTHHTHTT", "HHHHTHHHTH", "TTHTHTTTHH", "HTHHTTTTHT", "HTTTHTHTHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49705882352941055;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<string> sequences = {"HHTHHTHTT", "THHHHHTHH", "HTTHTTHHH", "HHHTHHHTT", "HHTHHTTHH", "THTHTTHTT", "THHHHHTHT", "HTTHHHTTT", "THHHHTHTH", "HTHHTTTHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49801587301587447;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<string> sequences = {"HHHHHT", "HTTHHT", "TTHHHT", "TTHTHT", "THHHHT", "TTTHHH", "TTTTTH", "HTHTTT", "HTTTTH", "HTHTHT", "THTTHH", "THTTHT", "HTTTHT", "HTTHTT", "HHTTHH", "TTHTTT", "HTHHTT", "HHHTTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.48387096774193566;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<string> sequences = {"HTTH", "TTTH", "HHTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5625;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<string> sequences = {"HHHT", "HHTH", "TTHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5833333333333334;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<string> sequences = {"TTTH", "TTHH", "HTTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5833333333333333;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<string> sequences = {"HHHHTTTTT", "TTTTTTTTT", "THHHHHHTH", "TTHTHTHTT", "TTTTHHTHH", "THHHTHTHT", "TTTHTTHHH", "HTHTTHTHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5000000000000002;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<string> sequences = {"HTTHTHHHHT", "HHTHHHHTTT", "HTHHHTTTHH", "HTTHHTTTHT", "TTHHHTTTTT", "TTTHHHHHHT", "HHHHTTHHHT", "HHTTTHHTHH", "THHHTHTHTT", "THHHTHHHTT", "HHTHTTTHHH", "THTTTTHHTH", "HTHTHHHTHT", "HTHHTHHTTT", "THTTHTHTHH", "HTHTTTTTTH", "THHHTHHTTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4980237154150203;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<string> sequences = {"HTTT", "THTT", "HHTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<string> sequences = {"HTTHT", "HHHHH", "HHHHT", "HTHTH", "HHTHH", "THHHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5312499999999998;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<string> sequences = {"THHHHTHTHT", "HHHHTTHHTH", "THTTHHTTTT", "TTHHTHHHHT", "TTHHTHHHTT", "HTHHTTTHHT", "HHHTTHHHTT", "HTHHTHTHTH", "HHHHTTHHHT", "HTHTTHHTTT", "TTTHHTTHTH", "THTTTHTTTH", "THHTTHHHHT", "HTTTHHTTTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49706457925636155;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<string> sequences = {"TTHH", "TTTH", "HTTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5833333333333333;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<string> sequences = {"TTTTTHHHH", "TTTTHTHHT", "TTHTTHTHT", "HTTHHTHHT", "HTTTHTTHH", "TTTTTHHTH", "HTTHHTHTH", "TTTTHHTHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<string> sequences = {"HHTTTHT", "HTHTHHT", "THTTHTT", "HTTTHHT", "HHTHHTH", "HHHTTTT", "HTTTHTT", "TTTTHTT", "THTTHTH", "THTHTHH", "TTHTTHT", "HHTHTTH", "HTTHTTH", "HHTHTTT", "TTHHTTH", "THHHTHT", "THTHHTH", "HTTTHHH", "HHHTHTH", "HTTHHHT", "TTHTHHT", "THHTHHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49999999999999967;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<string> sequences = {"TTHHHTTTHH", "HTHHHHHHHT", "TTHHHHHHHT", "HTHTHTTHTH", "THTHHHHTHT", "THHHTTTHTT", "THTHHHHHTH", "HTHHTTTHTH", "HHHTTHHHHH", "HHTHTHTHTT", "THTHTTHHHT", "THHHHHHTTT", "HHHHTHTTTH", "TTTHTHHHTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49804687499999545;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<string> sequences = {"TTTHTHTTHH", "TTHTHHHHTH", "HHTHTTHTHT", "THHTTHHTHT", "THTHTHTHTH", "TTTHHTHTTT", "HTHTHHHTTT", "HTTHHTHHHH", "THHTTHTHHT", "HTHTTTTHTT", "THTTHHTTTH", "HHTHHHTTTH", "TTTHTTHTTT", "TTHTTTHTTT", "HTHHHTTHTH", "THHTTHHTTH", "TTHHHHTTHT", "TTTHHHTTTT", "HHHTHTHTTH", "HTTTHHHHHT", "TTTTHTTHTT", "THHHHHHTHH", "THHTHHHHTT", "HTTTHTTHHT", "HHHHHTTTTH", "TTTHTTTHHH", "TTHTTTTTHT", "THHHTTHTHT", "HHTTTHTHTH", "TTHHHTTHTH", "HHTHTTHTTT", "TTHTTTHTHT", "HHTTTHTTHH", "TTTTHTHHTH", "HTHHHHHTHT", "TTHHHHTHTH", "TTTTTHHHTH", "HTTTHHTTHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4960629921259843;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<string> sequences = {"THHHTHTTH", "HTHHHTTTH", "THHTTTHTT", "THTTHHHTH", "HHTTTTHHH", "HTTTTHHTH", "HHHHHHHTT", "THHTTTTTT", "THHTHHTHH", "HHHHTTTTT", "HHTTTHHTT", "HTTHTTTTH", "TTTHTHHHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5000000000000009;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<string> sequences = {"HTHHTHTHHT", "HTTHTTTTHH", "HTHTTTTHHT", "TTTHTTTTHT", "HHTHTHTTHH", "HTHHTTHHHH", "HTHHHHHTTH", "THTTTTHTHT", "HTTHHHHHTT", "THTHTTHHTH", "TTTTTTHTHT", "TTTHHTTTHT", "HHHHTHHHTH", "THHTHTHTTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49804305283757555;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<string> sequences = {"TTHHH", "THHTT", "THTTH", "HHTHT", "THHHT", "THTHT", "HTTHH", "HHHHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.46875;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<string> sequences = {"HTT", "THT", "HHT", "TTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.625;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<string> sequences = {"TTHTHHTT", "TTTTHTTT", "HTTTHTHT", "THHHTTTH", "THHHTHHT", "THTHTTHH", "THTHHHTT", "THHHHHTH", "HHHHHTTH", "TTTTHTHH", "HHHHHHHH", "TTTHHTTT", "THTHTTTT", "TTTHTHHT", "HTHTHTHH", "TTTHTTTT", "TTHTTHTT", "TTTTHHTT", "HHTTHTHH", "THHTHHHH", "HTHHTHHT", "HHTHTHHH", "TTHTTTHT", "HTTHHHTT", "TTHTHHTH", "TTTHHHTT", "HTTHTHHT", "TTHHHHTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4920634920634924;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<string> sequences = {"TTTTTHTH", "HHHTHHTT", "HHTHHTTH", "HTHHHTTT", "HTTHTTTH", "HHTTHTHT", "HHHTHHHT", "HTHHHTHT", "THHTHHTT", "TTHHTTTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<string> sequences = {"TTHH", "TTTH", "HHHT", "HTHT", "TTHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4999999999999999;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<string> sequences = {"TTHTTHTH", "TTHHHHTH", "THTTTHTH", "HTTTHHTH", "HHTHTTTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4999999999999997;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<string> sequences = {"THHTTHHHTH", "THHHHTTTTH", "THHTTTTHTH", "HTHTTHHTHH", "HHTHTTHTTH", "TTHHTHHTTT", "THTHHHTHHH", "TTTHHTHTHH", "THTHTTTHHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4999999999999988;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<string> sequences = {"HTTTHTHTTT", "TTHTHTTTHT", "HHHHTHTHHT", "TTTTHHTTHT", "THHHHTHTTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.5009765624999996;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<string> sequences = {"TTT", "THT", "HHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.625;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<string> sequences = {"TTHHHTTTHT", "HTHHTHHHHT", "HTHHTHTHTT", "HTTTTHHTTT", "THTHTHTHTT", "HHTTTTTHHT", "HTHHHHHTHH", "THTTTHHHTH", "HTHHTHHTTH", "HHHTHTHTTT", "HTHHHHTTTH", "THHHTHTTTH", "HHTTHHHTHH", "TTTHTHTTHH", "HHTTTHTHHT", "TTHTTTTHTH", "HTTHHTTHTH", "TTHHTHTTTH", "TTHHHHHHHH", "TTHTHTTHTH", "TTHHHHHHTH", "TTTHTHHHTT", "HTTTHHHHTH", "TTHHTHHHTH", "THHTTHHHHH", "HTTHTHTHTT", "THHTTHHHTH", "TTTTHHHTTT", "TTTTHHHTTH", "THTHHHTTTT", "HHHTHTHTTH", "HTHHTHTHHH", "HHTHHHTHHH", "TTTHTHHHHH", "HTTTTTHTTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49604743083003866;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<string> sequences = {"TTHHTHTHT", "HTTHTHTTH", "HTTTHTTTT", "HTTTTTHHH", "TTTHHTHTT", "TTTTTTTTH", "TTHTHHTHH", "TTHHHHHTT", "THTTHTHHT", "HHTHHHTHT", "THTHTTTHH", "HHHHHTHHT", "TTHTTHHHT", "THTTHHTHH", "HHHTHTTTH", "TTTTTHTTH", "HHTHHHHTH", "HTTTHHHTT", "HTHTTHHHH", "THHHTHHHT", "THTHTHHTT", "HTTHHTTTH", "HHTTHHTTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4960629921259846;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<string> sequences = {"HTHTHHHHTH", "TTHTTTTTHH", "THHTHTTHHT", "HHHTHTHTTH", "TTHHHHHHHT", "TTTHTHTTTH", "HHTTHTTTTT", "HTHTTTHHHH", "THHTHHHHTH", "THHHHTHHHH", "TTTHHTHTHT", "HHHTHTTTHT", "TTHHHTHTHT", "HHHHTTHHTH", "HTTHTTHTTH", "TTHHHTHHTH", "HHTTHHTTTH", "HTHTHHTTTT", "HTHTTTTHHT", "THTHHHTTHT", "HHTTHHHHTH", "HHTTTTHTHT", "HTHHHHTHHH", "HTTTTHHHTH", "HTHHTHHHHT", "TTTHHHTHTH", "HTHHTHHHHH", "HTHTHTHTHT", "THHHHTTHTH", "HHHTTHTHTH", "HHHTHTTTTT", "HTHTHTTTTT", "HHHTHTHHHH", "TTHHHTHHHH", "HTTHTHHTHH", "HTTTTTTHHT", "HTTTHHTHHH", "TTHTHHTHTH", "THTHHTHTTT", "THTTHTTHHH", "HHHTTHTTTT", "HTHHHTTTTT", "HTHHHTHHHT", "TTTHHTTHTT", "HHHTHTTHHH", "HTHTHTTHHH", "HHTHHHHHTH", "THHHHTHHHT", "TTTTTTTTHT", "HTHHTTTHTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4990196078431308;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<string> sequences = {"THTHHTTHTH", "TTTHHTTHHH", "THHTTTTHHT", "THTTTHHTTH", "HTTHHHHHHT", "THTTHTTHTH", "TTTTHTHTHH", "HTHHTTHHHT", "THHTHHTHTT", "TTHTTTHHTT", "THTHHTHTTT", "TTTHTHTTHH", "HHHTTTTHHT", "HTHHHTTHTT", "HTTHTTHTTT", "HHHHHHHHTT", "HHTHHTHHHT", "HTTHTTHHHH", "HTHTHTTTTT", "HHTHTHHTTT", "THHTTHHHTT", "THTHHTTHTT", "THHTHTHTTH", "HTTTTTHHHH", "HHTTHHTHHT", "HHTTHHTTHT", "HTTHTHHHTT", "TTHTTTTTHH", "TTTTHHHHHH", "TTHTHTHTHT", "TTTHTTTTTH", "HTTHHHTTTH", "HTHHHTHTTT", "TTTTTHTTHT", "HHHHTTTHTH", "TTHTHTTTHH", "THHHTHTTHH", "HHTTTHTHTT", "TTTHTHTHHH", "TTTHHTHHHT", "TTHHTTTTHT", "THTHTHTTTT", "HTTTHHTTTH", "HTHTHHTHHH", "HTTTHHHHHH", "HHHHHTTHHT", "HTHTTTTHTH", "THHHHTTTTH", "HHTTHHHHHT", "TTTHTTHTHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49803921568627607;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<string> sequences = {"HHTTTTTTTH", "HTHTTHTHTT", "TTTTHHTTHT", "HHTHHTHHTH", "THTTHTHHHH", "HHTHHHTHTT", "THHTTTTTTT", "HTHHTTTHHH", "HHHHTTTHTT", "HTHTTTTTTT", "THHHHHHHHT", "TTHHHTTHHT", "TTTHTTHTTH", "HTHTHTHTHT", "THTTHHTHHH", "HHHHTHHTHH", "HTHTTTTTTH", "TTHHTTTTHH", "HTTTHHHTHH", "HTHTHTTHTT", "HTTTHHTTHH", "HHHTHTHHTT", "THTHHHHHHH", "HTTHTHTTHT", "HHHTHTTTHT", "THHTHTTTHH", "TTHTHHHTHH", "TTTHTHHTHH", "THTHHHHHTT", "TTTHTHTHHH", "THHTTHHTHT", "HHHHTHHHTH", "HHHHTHHHTT", "THTTHTHHTH", "HHTHHHTTTT", "HTHTHTHTHH", "HHTHHTHHHT", "TTHTHTHHTT", "THTHHHHTTT", "THTTTHTHTH", "HTTHHHHTHT", "THHTTHTTHT", "THHTTHTTTT", "TTHTHTHTTT", "THHTHTHHTT", "HTTTHTHHTT", "HTTTTHTTHH", "TTTTTHTHHT", "HTTHHHHTTT", "TTTTTHHHHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49606299212598526;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<string> sequences = {"THHTHHHHTT", "HHHTHTHTTT", "THTHHTTHHH", "THTHHTTHHT", "HHHTHTTTHH", "THTTTHHTTT", "HTTTHHTHTH", "HTTHTHHHTT", "TTTTHTHTHT", "TTTTTTTTHT", "THTTTHTHTT", "TTTTTHTHHH", "HTTTTTTTHH", "HHTHHTTHTT", "HTTTTTHTTH", "THHTHHTHTH", "HHTHTTTHHT", "HHTTHTTTTT", "HTTTTHTHHT", "TTHHHHHHTT", "HTHHTTHTHT", "HTTHHHTHTH", "HTHTHHHTTT", "HTTTHTHHTT", "HHTHTHTHTT", "THHTHTHHHH", "HTHHTHHHTH", "HHHTTHHHTT", "HHHTHHHTTT", "HHTHTTTHTT", "THHHHHHHTH", "HTTTTHHHHH", "HHTHTTTTHT", "TTHHHHTTTH", "THHTHHTHHH", "TTTHTTHTTH", "TTHHHTTTHT", "HHHTHHHHTT", "HTHHHHTHHT", "THHHTTHHTT", "HHHHHHTHTT", "HHTTHTHHHT", "HHHTTTHHHH", "TTHHHTTHHH", "HHTTHHTHTH", "HTTHTTHHHT", "HHTTHTTHHT", "THHHHTTHHH", "THHTTHTHHH", "HTHHTTHTHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49607072691552134;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<string> sequences = {"THHTHTTHTH", "THTTHTHHTT", "HHTHHHTHHT", "HTHHTTHTHH", "HHHHTTHHHT", "TTHTTTHTHH", "THHHTHHHHT", "TTTHTTHHHT", "HHHTHHHHHT", "THHHTHTHTH", "HHHHTHHTHH", "TTTHHTTTHH", "THTTTTHTHT", "HHHTTHTTHH", "HTHHHTHTTT", "HHHTHHTTHT", "TTHHHHHHHT", "TTTHTTTHTT", "THHHHTHTHT", "THHHHTTTHT", "THTHTTHTTH", "HTTTHTHTTT", "HTHTHTTHTH", "HHTTTTTHHT", "TTTTTTTHTT", "HHTHHHHHHT", "TTHTTHHHTT", "HTTTTTTHTT", "HHTTTHHTHT", "THHHTHTHTT", "HTTHTTHTHH", "THHTHHTTHH", "HHTTTTHTHT", "TTTTHTHHTT", "TTHHHTHHHT", "TTTTTTHHHT", "HHHHTTHHHH", "HTTHHHHTTT", "HTTHTTHHTT", "THTHHTHTHH", "TTHTHTHHHH", "HTHTHHTTHT", "HHTHTHHHHT", "THTHHTTTHH", "HTHTTTTHTH", "HHTHTTTHHT", "HTHTHHTHHH", "THHHHTHHHT", "TTHTTTTTHT", "THTTHHHHHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49704724409448797;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<string> sequences = {"HHHHTTHHTT", "THHTHHHTTH", "TTHHTTHTTH", "HTTTHTTHHH", "HTTTTHHHHT", "THTHTTHHTH", "THHTTHHTTT", "HHTHHTTHHH", "HHTHTTTHTT", "HTTTHTHTTH", "TTTHHTHTHH", "HTTTHHTHTT", "THHTTTTHTT", "HTTHHTHHTT", "THTTHTHTHT", "THHHHHHHHH", "TTTTHHTHTT", "HTTTHHTTHH", "TTHTHTHHTT", "TTTTTTTHHT", "HTHHTTHTTT", "THTHHTHTHH", "HHHHTTHTHT", "TTHHTHHHTT", "HTHTHTTTTH", "THTHHTHTTT", "HHHTTHHTTH", "THHHHTHHHH", "THHHTTHTTT", "THHHHHTHHT", "THTTTHTHHH", "HHTTTHTTHT", "THTHHHTHTT", "THHTHTHHHT", "HTTHTTTTTH", "HTHHHTTTHH", "THTHHHHHTH", "HHHHHTTHTT", "HHHTTTTHTH", "TTHTTTHHHH", "THHTTTTTHT", "HTTTTTTTHH", "THHHHHHTHH", "THTHHTHHHT", "TTHTTHTTTT", "HTHHHHTTHH", "HHHHTTTHTH", "TTHHTHTTHT", "THTTTHHTTT", "THTHHTHHTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49500998003992;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<string> sequences = {"HTHTHHTHTH", "TTHTTTTHTH", "HTHTHTTHHH", "HHHTHTTTHT", "HTTTTTHHHH", "TTHHHTHHHH", "TTTHHHTHHH", "HTHHHTHTHH", "HHHTHTTTTH", "HTHHTTHTHT", "HTHHHTHHTT", "THHHHTTHHT", "TTTHTTTHTH", "HTTTHHTTTT", "TTHHTTTTHH", "THHTHHHHTH", "TTHTTTTHTT", "HTHHTHHTHH", "HHTTHHTTTT", "THTHHHTHTT", "THHHTHTTHH", "HTTHTHHTTH", "HTTHHTTHHT", "THTHTTTTTH", "HHHHHHHTTH", "HHHTTTTHTH", "HTHHHHTHTT", "THTHHHTTHT", "HTHTTTTTHT", "TTTHTHTTTT", "TTTTHHHTHT", "TTHTTHTTTH", "HTHHHHHHHH", "TTTTTHHTHT", "TTTHTTHTTH", "HHHTHTTTHH", "HHHHHTHTTT", "TTTTTTTHTH", "THTHTHHTHT", "HHTHTHHHTH", "TTHTHHHHTH", "TTHHHHTTHT", "HTHHHHTTHT", "HHHHHTTTHH", "TTHHHHTHHH", "HTHTHHTTHH", "THTHTHHTTH", "HTHHHTTHHH", "THTHHHTHHT", "TTHTHHTHHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49607072691551746;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<string> sequences = {"HHHHHTHHTH", "HTTTHHTHHH", "HTTHTHHHHH", "HTTTHHTTTH", "THHTTTHTHT", "HHTHTHTHTH", "TTHTTTHHTT", "TTHHTHHTHH", "TTTHHTTHHT", "TTTHTHHTTT", "TTTHHHHTHT", "HHHHTTHTTH", "HTHHTHTHHT", "HHTTHHHTTT", "THHHHTTTTT", "HHTTHTTHTH", "THHTHTTTTT", "TTHTTTTTHT", "TTTTHHHHTH", "TTTHHTHHTH", "HHTTHTHHTT", "HTTHTHTHTH", "THHHTTHTHH", "HTTHHHHTTH", "TTHTHTTTHT", "HTHTHTHTTT", "HHHTHTHTTT", "TTTHTHHTHH", "HTHTHTTTTT", "THTHHHHHHH", "HHHHHTTTTT", "HHTTTHTTHT", "HTTHHHTHTH", "THHTTTTHTT", "HTTHTTHHTT", "HHTHTTHTHH", "THHHHHHHTH", "THHTHTTTHT", "TTTHTTHHHT", "THHHTHHHTH", "TTHTTTTTTH", "HTHHHHHTTT", "THHTTHHHTH", "HHTTHTTHHT", "TTTHHTHTTH", "HHTTHHTTTT", "HHHHHTTHHH", "HHHTHTTTTT", "HHHTTTHTTH", "TTHTHTTHTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49704724409448486;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<string> sequences = {"THTTTHHTTH", "THHHHHHTTH", "HHHTTTHHTH", "TTHHHHTTHT", "HHHTTTHHHH", "TTHTTHTHTT", "HHTTTHHTHT", "TTTHHTTTTH", "TTHHTHTTTT", "THHHHHTTHT", "HHTHHHHHTH", "TTTHHTTHHT", "HHTHTHTHTT", "HHHHTTHHHH", "HHHHTTHTHT", "HTTHHTTTHT", "TTHHTHTHHH", "TTHHHHHTTT", "HHTHTTHTTH", "HTHTHHTHTH", "HTHTHTHTTH", "THTHTTHTHH", "HTHTTTTTTT", "HHHTHTTTHH", "THTTTHHHHT", "TTTHTTTTHT", "HTHTHTTHTH", "TTHHHHTTHH", "THHTHHTHTH", "HHTTHHTHTT", "HHHTTTHTTT", "HTTTTHHTTH", "THTTHHHHHH", "HTTTTTTHTT", "THTTHTHHHH", "THTHHHTTTH", "HHHTTHTTHH", "HHTHHTTTHH", "HHTHTHTHHT", "TTHTTHHHTT", "THHTTTTTTH", "HHHHTHTTTH", "HHHHHHHHHH", "THHHHHHHHH", "THHHTHTHTH", "TTTTTHHTHT", "HTTTHTHTTT", "HTHTHTTTHT", "HHTHTHTHHH", "HTTHTHHHHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4970588235294112;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<string> sequences = {"HHTTTTTTHH", "TTHTTTHHTH", "HHTTTHTHHT", "HTHHTTTHTH", "THHHHTHTHH", "HTHTTHHTHT", "HTTTHTTHHH", "HHTTTHTHTH", "HHTTHTHTHT", "TTTTTTHHHT", "TTTTHTHHTH", "HHHHHTHTHT", "HHTHTHHHTH", "HTHHTTTHTT", "HHHTTTTHTH", "THHTHHHTTH", "HHHHHHHHHH", "HTTTTTTTTT", "TTTHTHTTHT", "HHHHTTTHHH", "HTHHTHTTTT", "HTTHHTTHTH", "HTTTHTHHTT", "HHHTTHTTTT", "THTTTHHTTH", "HHHTHTTTTT", "HHHTHTHHTH", "HHTHHTTTTT", "TTHHTHTTHT", "HTHTTTTTTH", "HHTTHHTHTH", "TTHHHHTHHT", "HTTTHHHHHH", "TTTTTHTHHT", "THTHTHTHHH", "HTTHHHTTTH", "HHTHHTHHHT", "HHHHTHHTTT", "THTTHHHHHH", "HTTHTTHHHH", "HHTTTHHHHT", "HHHTHTHTTH", "THHTTHTHTT", "THHHHHTHHH", "HTHTTTHTHH", "HHTTHTTTHT", "TTTHHHTHTH", "THTHTTTHTH", "THTTTHTTHH", "THHTTTTHHT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4960707269155122;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<string> sequences = {"TTTTHTHHHH", "THHTHHTHHH", "THHTTHTTTT", "THTTHHTTHH", "THTHTHTTTH", "HHTTHTTHTT", "HHHHHHHTHT", "HHHTTHHTHT", "HHHTHTTHHH", "THTHTHTHHT", "HHHHHTTTTT", "TTHHTTHTTH", "HTTHHTHTTT", "THHHTTHHHT", "HHTTHTTTTT", "HTTHHTTTTT", "HTHTHTHHHT", "HTHHTTHTHH", "HTHHTHHTHH", "TTHHHHHTTT", "THTHTTTHHH", "TTHTHHHHHT", "THHTHTHTTH", "HTTHHTTHHH", "THHTHTHTHH", "HTTTTHTHTT", "THTTTHTTHH", "HHTTHTHHTT", "THTTHTTHHT", "HHHHHHHHTT", "THHHTHHHTH", "HTHTTTTTTT", "THHHHHHTTH", "THTHTTTHHT", "THTHHHTHHT", "HTHHHTTTTT", "HTHTTHTTTT", "HHHHTTTTHT", "THTTTHTTTH", "THHTHHHTTT", "THHHTHHHTT", "HTHHTHTHHT", "TTTHTHHHHH", "HHTTTTTHHT", "TTTHHHHTTT", "TTTTHTTTTH", "HHHHTHTTHH", "THTTTHHHHH", "TTHTTHHTHH", "THTHTTTTTH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49705882352941266;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<string> sequences = {"TTHHTTTHHH", "TTTTTTHHTT", "THTTTHHHHT", "HHTTTTTTHT", "THTTHTTTHH", "HTTHTTTTHH", "TTHTTHTHTH", "HTTHTTHTTT", "HHTHTHTTHH", "THTHHTTHHT", "TTTTHTTTHH", "HTTHTHTTHH", "HHTHTHTHTH", "HTTTHHTHTH", "THTHTTTHTH", "THHHHHTHTH", "TTHTTTTTTT", "TTHTHHTHTT", "HHHTTTHTHT", "HTTHTTHTTH", "TTTHTHHTHH", "TTTTTTTHHT", "HTTHHTHHHT", "THTTHHTTHH", "HTHTTHTTTH", "TTTTHHHHTT", "HHHHHTTHTT", "TTTHTTTTTH", "THHTHTHTHT", "TTHTTTTTTH", "TTHTTHTTHH", "HHTTHHHHTT", "HTHTTHTHHT", "TTHHTHTHHH", "THHTHTHTHH", "HTTTTTHHHT", "HHTTTHHTTH", "TTTHTHHHTH", "HHHHHTHTHH", "TTTHHHTTHT", "HHTHTTHTHH", "HTTTHHTHHH", "THTTTHHTHH", "THTTTHTHHT", "TTTTTTHHHT", "THTTHTHHHH", "THTTTTHTTT", "TTTHHHHTTT", "HTHHHTHTHT", "HHTHTTTHTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4970000000000002;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<string> sequences = {"TTHTHTHTHH", "HTTHTTHHHT", "HTHHTTTTTT", "HHTTHHTTHH", "TTHTHTTHHH", "HHTHTTHTTT", "HHHHHTHHHT", "THHHHTHHHH", "HHTHTTHHTH", "HHTTHHHTTT", "TTHHHTTHHH", "TTTTHTTTTT", "HHTHTHTHHT", "HHTTHTTHHH", "THTHHHHHTH", "HHHHHHTHTH", "THHTHTTHHH", "THTTTHTTTT", "HTHTHTHTTH", "HTTTTHTHTH", "THHHHHTHHH", "HHHHHTHHTH", "TTHHTTTHHH", "THTHTHHHHT", "TTHHHHHHTT", "TTTTHTTTHH", "HTTHHHTTTH", "HTTTHHHTTH", "THTTHHHHHT", "TTTTHTHTTH", "HHHHTTHHHH", "HHTHTHTHTT", "HTTTHTTTTT", "THTHHTTTHH", "HTTTHTHTHT", "THTTHHTHTT", "HTTHHHHHHH", "TTHHTHHTHH", "THTTHHTTTT", "THTTHHHTHT", "HHHHTHTTHH", "HHTHTHTTHT", "TTHTTTHTHT", "TTTHHTHHTT", "THTTTTTTTH", "TTHTTTTHTH", "TTTTTHTHHH", "HHTHTHHTHH", "HTHHTHHTHH", "THHTHHHHTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49606299212598626;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<string> sequences = {"THHTHTHHHH", "TTHHHTHHHH", "HTTTTTHTHH", "HHTHHHHTTT", "THHHHTTTHT", "HHTTHTTHTH", "HTTHTHTTHH", "HTTTHTHTHT", "HTHHTHTHTH", "HHHHTHHTTT", "THHTHHTHHT", "THHHTTTTTH", "THHHTTTTHT", "TTHTTTHTTH", "THHTHTTTHT", "TTHTHTTTTH", "TTHHTTHTTT", "HTTHHTHTHT", "TTHTTHTTHT", "HHTTTTHHTH", "TTTHHHHTHT", "HHTTHHHHTH", "HTTTTTHHTT", "THHTTHHTHH", "HHTHHTHHTH", "HTTTTHTHHH", "THTTHHHHHH", "HHTTTHHHTH", "HTTHHHHHTH", "TTTHTTHTTH", "TTTHHHTHTH", "HTTTTHTTHH", "TTHHTTHTTH", "HTHHTHHHTH", "THTTHHTHTT", "HHHTHHTTTH", "TTHHHHTHHH", "TTHTTTHTHT", "TTHTHHHTHT", "TTTTTHHHHH", "TTHHHHHHTH", "HTHTTHTHHT", "THTTTTTHHT", "THHTHHHHTH", "HHHTTTHHHT", "THTHHTHHTT", "TTTTTHHHHT", "THTTTHTHHT", "HHTHTHTTHT", "TTHTHHTTTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49803921568627313;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<string> sequences = {"HHHHHHHHHH", "THHHHHHHHH", "HTHHHHHHHH", "TTHHHHHHHH", "HHTHHHHHHH", "THTHHHHHHH", "HTTHHHHHHH", "TTTHHHHHHH", "HHHTHHHHHH", "THHTHHHHHH", "HTHTHHHHHH", "TTHTHHHHHH", "HHTTHHHHHH", "THTTHHHHHH", "HTTTHHHHHH", "TTTTHHHHHH", "HHHHTHHHHH", "THHHTHHHHH", "HTHHTHHHHH", "TTHHTHHHHH", "HHTHTHHHHH", "THTHTHHHHH", "HTTHTHHHHH", "TTTHTHHHHH", "HHHTTHHHHH", "THHTTHHHHH", "HTHTTHHHHH", "TTHTTHHHHH", "HHTTTHHHHH", "THTTTHHHHH", "HTTTTHHHHH", "TTTTTHHHHH", "HHHHHTHHHH", "THHHHTHHHH", "HTHHHTHHHH", "TTHHHTHHHH", "HHTHHTHHHH", "THTHHTHHHH", "HTTHHTHHHH", "TTTHHTHHHH", "HHHTHTHHHH", "THHTHTHHHH", "HTHTHTHHHH", "TTHTHTHHHH", "HHTTHTHHHH", "THTTHTHHHH", "HTTTHTHHHH", "TTTTHTHHHH", "HHHHTTHHHH", "THHHTTHHHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4999999999999968;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<string> sequences = {"TTHHTT", "HHTHTH", "THHTHT", "TTTHTT", "THHTHH", "THTTHT", "HTHTHH", "HHTTHH", "THHHTT", "HTHTTT", "HHHHHH", "TTTTTH", "TTTTHH", "THTHHH", "HTHTHT", "HHHTTH", "HHHHTT", "TTHHHH", "HTTHHH", "HHTHHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4666666666666671;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<string> sequences = {"HHHTHHTTTT", "HTTTTHHTHH", "TTTTTTHHHT", "HHTHTTTTTT", "HTTTTHTTHH", "HTTHHHHTHT", "THTTTHTTHT", "THHHTTHHHT", "HTTHTHTHTT", "HTTHHTTTHT", "HTHTHTTTHT", "TTHHTHTHTT", "HTHHHTHTHT", "THTHTHHHHH", "HHHTTHHTTT", "HHHTHHTHTH", "THHTHTTTHT", "HHHHHTTTHH", "THHTTTHHTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49901960784313126;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<string> sequences = {"TTTTTTHTTH", "TTTHTTTTHH", "THTTTTTHTH", "TTTTHHTTHH", "THHTHTTTTH", "HTHTHTTTHT", "HHTHTHHTHH", "THHTHTHTTT", "HHTHTHTHTH", "HHTTHTTTTH", "HTHTHHTTTT", "HHHTHHHTTT", "HTTHTTTHTT", "HTTHTHHHTH", "THHHTHTTHH", "HTTTHTTTTH", "THHHHHHHTT", "TTTTTHTTTH", "THTTTTTHHT", "HTTHTTTHTH", "TTHHTHTHTH", "THHTTTTHHT", "HTHTHHTTHH", "HTHTTTHTTH", "THTTHTTHHH", "HTHTTHHTTT", "THHTHTTHHT", "THHTHHHHTT", "TTTTTTHTHH", "HTHHTTHTHT", "THTTTTTTHT", "TTTHTHHHTT", "HHTTHHHTTT", "HHTHTTHHHT", "HTHTHTHHTH", "HTTHHTHHHT", "TTHHHTHHTH", "HTTTTTHHTT", "HTTTTTTHHH", "HTHHTTTTHH", "THTHHTTTHT", "THHTTHHTHH", "HHTHHHHHTT", "TTHTTHHTTT", "HTTTHHHTHT", "HHTTTTHTTT", "HTHTHHTTHT", "HHHHTTTTHH", "HTHTHTTHTH", "HTHHTTHTHH"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.49606299212598437;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<string> sequences = {"HTTTTTTTTT", "THTTTTTTTT", "HHTTTTTTTT", "TTHTTTTTTT", "HTHTTTTTTT", "THHTTTTTTT", "HHHTTTTTTT", "TTTHTTTTTT", "HTTHTTTTTT", "THTHTTTTTT", "HHTHTTTTTT", "TTHHTTTTTT", "HTHHTTTTTT", "THHHTTTTTT", "HHHHTTTTTT", "TTTTHTTTTT", "HTTTHTTTTT", "THTTHTTTTT", "HHTTHTTTTT", "TTHTHTTTTT", "HTHTHTTTTT", "THHTHTTTTT", "HHHTHTTTTT", "TTTHHTTTTT", "HTTHHTTTTT", "THTHHTTTTT", "HHTHHTTTTT", "TTHHHTTTTT", "HTHHHTTTTT", "THHHHTTTTT", "HHHHHTTTTT", "TTTTTHTTTT", "HTTTTHTTTT", "THTTTHTTTT", "HHTTTHTTTT", "TTHTTHTTTT", "HTHTTHTTTT", "THHTTHTTTT", "HHHTTHTTTT", "TTTHTHTTTT", "HTTHTHTTTT", "THTHTHTTTT", "HHTHTHTTTT", "TTHHTHTTTT", "HTHHTHTTTT", "THHHTHTTTT", "HHHHTHTTTT", "TTTTHHTTTT", "HTTTHHTTTT", "THTTHHTTTT"};
    CoinGame* pObj = new CoinGame();
    clock_t start = clock();
    double result = pObj->bestProbability(sequences);
    clock_t end = clock();
    delete pObj;
    double expected = 0.4999999999999988;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=7502813&rd=9808&pm=6005
********************************************************************************
#include <string>
#include <vector>
using namespace std;
#define REP(i,n) for(int i=0;i<(n);++i)
#define FORE(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
 
 
 
int w(const string& a, const string& b) {
   int wy=0;
   for(int i=1;i<=min(a.size(),b.size());++i)
      if (a.substr(a.size()-i,i)==b.substr(0,i)) wy|=1<<i-1;
   return wy;
}
 
struct CoinGame {
double bestProbability(vector<string> seq) {
   double best=0;
   int n=seq.size();
   REP(i,n) {
   
      double naj=1;
   REP(j,n) if (i!=j) {
       string b=seq[j],a=seq[i];
       int A=w(b,b)-w(b,a), B=w(a,a)-w(a,b);
       naj = min(naj,A/double(A+B));
   }
   
   best=max(best,naj);
   }
   return best;
}
};

********************************************************************************
*******************************************************************************/