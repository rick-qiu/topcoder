/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4846
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

class DrawPlanar {
public:
    int minArea(vector<string> graph);
};

int DrawPlanar::minArea(vector<string> graph) {
    int ret;
    return ret;
}


int test0() {
    vector<string> graph = {"F"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<string> graph = {"FTF", "TFF", "FFF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<string> graph = {"FTT", "TFT", "TTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<string> graph = {"FTTT", "TFTT", "TTFT", "TTTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<string> graph = {"FTTTT", "TFTTT", "TTFTT", "TTTFF", "TTTFF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<string> graph = {"FTTTTT", "TFTTTT", "TTFFTT", "TTFFFF", "TTTFFF", "TTTFFF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<string> graph = {"FFFFFF", "FFFFFF", "FFFFFF", "FFFFFF", "FFFFFF", "FFFFFF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<string> graph = {"FTTTTT", "TFTTTT", "TTFFTT", "TTFFTF", "TTTTFF", "TTTFFF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<string> graph = {"FTTTTTT", "TFTTTTF", "TTFFTTF", "TTFFTFT", "TTTTFFT", "TTTFFFF", "TFFTTFF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<string> graph = {"FTTTF", "TFTTT", "TTFTT", "TTTFT", "FTTTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<string> graph = {"FTTFF", "TFTTT", "TTFTT", "FTTFT", "FTTTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<string> graph = {"FTTTTTT", "TFTTTTT", "TTFTTFF", "TTTFFTF", "TTTFFFT", "TTFTFFF", "TTFFTFF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<string> graph = {"FTTTTTT", "TFTTTFT", "TTFFFFT", "TTFFTFF", "TTFTFTT", "TFFFTFT", "TTTFTTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<string> graph = {"FTTTTTT", "TFTTTFT", "TTFTFFF", "TTTFFTT", "TTFFFFT", "TFFTFFT", "TTFTTTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<string> graph = {"FTTTTTF", "TFTTFTT", "TTFTTFT", "TTTFFFF", "TFTFFTT", "TTFFTFT", "FTTFTTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<string> graph = {"FTTTTTF", "TFTTFFT", "TTFFTFT", "TTFFFTF", "TFTFFTF", "TFFTTFT", "FTTFFTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<string> graph = {"FTTTTTF", "TFTTFFT", "TTFFTFT", "TTFFFTF", "TFTFFTT", "TFFTTFT", "FTTFTTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<string> graph = {"FTTTTTF", "TFTTFFT", "TTFFTFT", "TTFFFTT", "TFTFFTF", "TFFTTFT", "FTTTFTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<string> graph = {"FTTTTFF", "TFTTFTF", "TTFFTTF", "TTFFFFT", "TFTFFFT", "FTTFFFT", "FFFTTTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<string> graph = {"FTTTTFF", "TFTFTTF", "TTFTFTF", "TFTFFFT", "TTFFFFT", "FTTFFFT", "FFFTTTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<string> graph = {"FTTTTTF", "TFTFTFT", "TTFFFTT", "TFFFTTT", "TTFTFFT", "TFTTFFT", "FTTTTTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<string> graph = {"FTTTTTT", "TFTFFTF", "TTFFFFT", "TFFFTFT", "TFFTFTF", "TTFFTFF", "TFTTFFF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<string> graph = {"FFFFFFF", "FFTTFFF", "FTFTFFF", "FTTFFFF", "FFFFFTT", "FFFFTFT", "FFFFTTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<string> graph = {"FTTFFTT", "TFTTFFF", "TTFTFFF", "FTTFFFF", "FFFFFTT", "TFFFTFT", "TFFFTTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<string> graph = {"FFFFFFF", "FFFFFFF", "FFFFFFF", "FFFFFFF", "FFFFFFF", "FFFFFFF", "FFFFFFF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<string> graph = {"FTFFFFF", "TFTFFFF", "FTFTFFF", "FFTFTFF", "FFFTFTF", "FFFFTFT", "FFFFFTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<string> graph = {"FTFFFFF", "TFFFFFF", "FFFFFFF", "FFFFFFF", "FFFFFFF", "FFFFFFF", "FFFFFFF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<string> graph = {"FTTTT", "TFTFF", "TTFFF", "TFFFF", "TFFFF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
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
    vector<string> graph = {"FTF", "TFT", "FTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<string> graph = {"FTTTT", "TFTTT", "TTFTT", "TTTFF", "TTTFF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<string> graph = {"FTTFTT", "TFTTFT", "TTFTTF", "FTTFFF", "TFTFFF", "TTFFFF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<string> graph = {"FTTFTT", "TFFTFT", "TFFTTF", "FTTFFF", "TFTFFF", "TTFFFF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
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
    vector<string> graph = {"FTTTTF", "TFTTFF", "TTFFFF", "TTFFFF", "TFFFFF", "FFFFFF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
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
    vector<string> graph = {"FTTTTT", "TFTFFF", "TTFFFF", "TFFFFF", "TFFFFF", "TFFFFF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
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
    vector<string> graph = {"FTTTTTT", "TFTTTFT", "TTFFFFT", "TTFFTFF", "TTFTFTT", "TFFFTFT", "TTTFTTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<string> graph = {"FTFFFTT", "TFTTFTT", "FTFTTFT", "FTTFTTF", "FFTTFTT", "TTFTTFT", "TTTFTTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<string> graph = {"FTTFFFF", "TFTFFFF", "TTFFFFF", "FFFFTTF", "FFFTFTF", "FFFTTFF", "FFFFFFF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<string> graph = {"FTFFTFT", "TFTTTFF", "FTFTFTF", "FTTFTTT", "TTFTFFT", "FFTTFFT", "TFFTTTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<string> graph = {"FTTT", "TFTT", "TTFT", "TTTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<string> graph = {"FTTTTTT", "TFTTTFT", "TTFFFFT", "TTFFTFF", "TTFTFTT", "TFFFTFT", "TTTFTTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<string> graph = {"FTFFFTT", "TFTTFTT", "FTFTTFT", "FTTFTTF", "FFTTFTT", "TTFTTFT", "TTTFTTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<string> graph = {"FTTFFFF", "TFTFFFF", "TTFFFFF", "FFFFTTF", "FFFTFTF", "FFFTTFF", "FFFFFFF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
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
    vector<string> graph = {"FTFFTFT", "TFTTTFF", "FTFTFTF", "FTTFTTT", "TTFTFFT", "FFTTFFT", "TFFTTTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<string> graph = {"FTTT", "TFTT", "TTFT", "TTTF"};
    DrawPlanar* pObj = new DrawPlanar();
    clock_t start = clock();
    int result = pObj->minArea(graph);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=20081327&rd=8077&pm=4846
********************************************************************************
#line 5 "DrawPlanar.cpp" 
 
#include <string> 
#include <sstream> 
#include <vector> 
#include <fstream> 
#include <iostream> 
#include <fstream> 
#include <algorithm> 
using namespace std; 
 
#define Max(a,b) ((a)>(b)?(a):(b)) 
#define Min(a,b) ((a)<(b)?(a):(b)) 
 
inline bool between(int a, int b, int c) 
{ 
  return a<=c&&c<=b || a>=c&&c>=b; 
} 
 
class DrawPlanar 
{  
public:  
  int n, m, X,Y; 
  int order[20]; 
  char pos[7][2]; 
  int map[20][20]; 
  vector<string> net; 
  int div[20][20], mod[20][20], GCD[20][20]; 
 
  inline int DIV(int a, int b) 
  { 
    return a<0 ? -div[-a][b] : div[a][b]; 
  } 
  inline int MOD(int a, int b) 
  { 
    return a<0 ? -div[-a][b] : div[a][b]; 
  } 
  inline int multi(int a, int b, int c) 
  { 
    int tmp = (pos[b][1]-pos[a][1])*(pos[c][0]-pos[a][0]) - (pos[b][0]-pos[a][0])*(pos[c][1]-pos[a][1]); 
    if (tmp<0) tmp = -1; 
    if (tmp>0) tmp = 1; 
    return tmp; 
  } 
  int gcd(int a, int b) 
  { return b==0 ? a : gcd(b,mod[a][b]); } 
  bool search(int s, int u, int cur) 
  { 
    if (cur==n) return true; 
    int i = order[u],j,k,l, x,y, k1,k2; 
    for (x=0; x<=X; x++) 
      for (y=0; y<=Y; y++) 
        if (map[x][y]==0) 
        { 
          pos[u][0] = x, pos[u][1] = y; 
          bool okay = true; 
          for (l=s; l<u&&okay; l++) if (net[l][u]=='T') 
          { 
            int g = GCD[abs(pos[u][0]-pos[l][0]) ][ abs(pos[u][1]-pos[l][1])]; 
            int step1 = DIV(pos[u][0]-pos[l][0],g), step2 = DIV(pos[u][1]-pos[l][1],g); 
            for (k1=pos[l][0]+step1, k2=pos[l][1]+step2; k1!=x||k2!=y; k1+=step1,k2+=step2) 
              if (map[k1][k2]) 
              { 
                okay = false; 
                break; 
              } 
            if (!okay) break; 
/*            for (j=s; j<u; j++) if (j!=l) 
              if ( multi(u,l,j)==0 ) 
                if ( between(pos[u][0],pos[l][0],pos[j][0]) && 
                   between(pos[u][1],pos[l][1],pos[j][1]) ) 
                   break; 
            if (j!=u) 
            { 
              okay = false; 
              break; 
            }*/ 
            for (j=s; j<u&&okay; j++) 
              for (k=j+1; k<u; k++) if (net[j][k]=='T') 
                if ( multi(u,l,j)*multi(u,l,k)<0 && multi(j,k,u)*multi(j,k,l)<0 ) 
                { 
                  okay = false; 
                  break; 
                } 
          } 
          if (okay) 
          { 
            for (l=s; l<u&&okay; l++) if (net[l][u]=='T') 
            { 
              int g = GCD[abs(pos[u][0]-pos[l][0]) ][ abs(pos[u][1]-pos[l][1])]; 
              if (g<0) g = -g; 
              int step1 = DIV(pos[u][0]-pos[l][0],g), step2 = DIV(pos[u][1]-pos[l][1],g); 
              for (k1=pos[l][0]+step1, k2=pos[l][1]+step2; k1!=x||k2!=y; k1+=step1,k2+=step2) 
                map[k1][k2]++; 
            } 
            map[x][y]++; 
            if (search(s,u+1,cur+1)) return true; 
            map[x][y]--; 
            for (l=s; l<u&&okay; l++) if (net[l][u]=='T') 
            { 
              int g = GCD[ abs(pos[u][0]-pos[l][0]) ][ abs(pos[u][1]-pos[l][1])]; 
              if (g<0) g = -g; 
              int step1 = DIV(pos[u][0]-pos[l][0],g), step2 = DIV(pos[u][1]-pos[l][1],g);  
              for (k1=pos[l][0]+step1, k2=pos[l][1]+step2; k1!=x||k2!=y; k1+=step1,k2+=step2) 
                map[k1][k2]--; 
            } 
          } 
          pos[u][0] = -1; 
        } 
    return false; 
  } 
  bool put(int _X, int _Y) 
  { 
    X = _X, Y = _Y; 
    int i; 
    for (i=0; i<n; i++) 
    { 
      pos[i][0] = 0, pos[i][1] = 0; 
      map[0][0] = 1; 
      if (search(i,i+1,1)) return true; 
      pos[i][0] = -1; 
      map[0][0] = 0; 
    } 
    return false; 
  } 
  int minArea(vector <string> g)  
  { 
    int i,j,k; 
    n = g.size(); 
    if (n<=1) return 0; 
    net.clear(); 
    for (i=0; i<n+n; i++) 
    { 
      string tmp = g[i%n] + g[i%n]; 
      net.push_back(tmp); 
    } 
    for (i=0; i<n+n; i++) order[i] = i%n; 
    for (i=0; i<20; i++) for (j=1; j<20; j++) div[i][j] = i/j; 
    for (i=0; i<20; i++) for (j=1; j<20; j++) mod[i][j] = i%j; 
    for (i=0; i<20; i++) for (j=0; j<20; j++) GCD[i][j] = gcd(i,j); 
    memset(pos,0xFF,sizeof(pos)); 
    memset(map,0,sizeof(map)); 
 
    if (put(0,n-1)) return 0; 
    for (k=1; ; k++) 
      for (j=1; j*j<=k; j++) if (k%j==0) 
      { 
        if (put(j,k/j)) return k; 
      } 
  } 
   
 
};  
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/