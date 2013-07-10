/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12588
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

class SurveillanceSystem {
public:
    string getContainerInfo(string containers, vector<int> reports, int L);
};

string SurveillanceSystem::getContainerInfo(string containers, vector<int> reports, int L) {
    string ret;
    return ret;
}


int test0() {
    string containers = "-X--XX";
    vector<int> reports = {1, 2};
    int L = 3;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "??++++";
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    string containers = "-XXXXX-";
    vector<int> reports = {2};
    int L = 3;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "???-???";
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    string containers = "------X-XX-";
    vector<int> reports = {3, 0, 2, 0};
    int L = 5;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++++++?";
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    string containers = "-XXXXX---X--";
    vector<int> reports = {2, 1, 0, 1};
    int L = 3;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "???-??++++??";
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    string containers = "-XX--X-XX-X-X--X---XX-X---XXXX-----X";
    vector<int> reports = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    int L = 7;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "???++++?++++++++++++++++++++??????--";
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    string containers = "X";
    vector<int> reports = {1};
    int L = 1;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "+";
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    string containers = "X-";
    vector<int> reports = {1};
    int L = 2;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "++";
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    string containers = "XX";
    vector<int> reports = {1, 1};
    int L = 1;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "++";
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    string containers = "--X-X--X----X--X-X-X----";
    vector<int> reports = {7, 7, 7};
    int L = 22;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    string containers = "---";
    vector<int> reports = {0, 0};
    int L = 2;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "+++";
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    string containers = "-X-XXX-X-XXXX--XX-XX-X---XX----XX---X-XX--X-X-X-";
    vector<int> reports = {11, 9};
    int L = 18;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?????????++++++++++++++++++++????---------------";
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    string containers = "-X--X---XX";
    vector<int> reports = {3};
    int L = 8;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "-?+++++++?";
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    string containers = "X--XX-X-----";
    vector<int> reports = {3, 4, 2, 3, 3};
    int L = 8;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++++++++";
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    string containers = "---XXX----X---X-XX-X-XXXX-X-XX-XX-X-X--XX--X";
    vector<int> reports = {19, 20, 21, 20, 20};
    int L = 39;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++++++++++++++++++++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    string containers = "-X-X------X-XX-X-XX-----XXXX-X-X--X-X---XX";
    vector<int> reports = {2, 3, 5, 5};
    int L = 10;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "??++++++++??????????????????????????????--";
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    string containers = "XXXX--XXX-XXX-X--X-X---X-XXX----XXX-";
    vector<int> reports = {9, 9, 11, 7, 7, 11, 8, 8, 7, 10};
    int L = 17;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "+++++++++++++++++++++++++++++++++???";
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    string containers = "-XXXX-XXXX-XX-X-XXX-----XXX---X--X-X";
    vector<int> reports = {3, 2, 1, 3, 4, 3, 1, 3, 2, 3};
    int L = 4;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "????????????????????????????????????";
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    string containers = "-X--XX---XXXXXX-X--X-X";
    vector<int> reports = {6};
    int L = 11;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "-?++++++++++?---------";
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    string containers = "------X-XX-X-";
    vector<int> reports = {1, 1, 0, 0, 1, 1};
    int L = 2;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?????????????";
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    string containers = "X-X-XX----XX-XXXXX-XX---XXX-X--X";
    vector<int> reports = {14};
    int L = 25;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "???????++++++++++++++++++???????";
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    string containers = "X--X-XX--X--XX-X-X---X--XX--XX-X-XX--X--X-XX--X-X";
    vector<int> reports = {5, 4, 4, 5, 3, 4, 4, 4, 5, 5, 3, 4, 4, 5, 4, 4, 5, 4, 5, 4, 5, 4, 4, 4, 4, 3, 4, 4, 5, 4, 3, 4, 4};
    int L = 9;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "??????+++++++++++++++++++++++++++++++++++++??????";
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    string containers = "-XX--X-X--";
    vector<int> reports = {3, 2, 3, 2};
    int L = 6;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?+++++++++";
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    string containers = "---XX-X-XX---XX-X--X---XX--X-X--XXX----XX---X---X";
    vector<int> reports = {11, 12, 13};
    int L = 29;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?????????????++++++++++++++++++++++++++??????????";
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    string containers = "-X-XX---";
    vector<int> reports = {1, 2, 2, 1, 2};
    int L = 3;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "+++++++-";
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    string containers = "X-XX-X---XXXXX-X----X------XXX";
    vector<int> reports = {11, 10, 10, 10, 11};
    int L = 25;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++++++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    string containers = "X--XX--XXX-XX-X-X-";
    vector<int> reports = {7, 7, 8, 7, 7, 7, 7};
    int L = 12;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    string containers = "-XX--";
    vector<int> reports = {2, 1, 2};
    int L = 3;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "+++++";
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    string containers = "--X------XX";
    vector<int> reports = {2, 1, 1, 1, 0};
    int L = 6;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?++++++++++";
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    string containers = "-X--XXX-XXX-X-X-X---X---X--X--X--X";
    vector<int> reports = {14, 14};
    int L = 32;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?++++++++++++++++++++++++++++++++?";
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    string containers = "-XX-XX-X-X---X-XX----XX-X-XXXX";
    vector<int> reports = {4, 2, 1, 3, 1, 3, 2, 1, 2};
    int L = 5;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "??????????+++????++++?????????";
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    string containers = "-X--XXX------XX-X-XXX-XX-XXXXXXX---X--XXX-";
    vector<int> reports = {12, 15, 16, 16, 16, 16, 13, 15, 14, 16, 15, 14};
    int L = 24;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "??++++++++++++++++++++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    string containers = "-X---XX--X--X-XX--X--XX-XXXX-XX-XX--";
    vector<int> reports = {3, 3, 4, 3, 4, 2, 2, 3, 3, 2, 1};
    int L = 5;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "????????????????????????????????????";
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    string containers = "XXX--X";
    vector<int> reports = {3};
    int L = 5;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?++++?";
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    string containers = "XXX-----XXX-XXXX--XXXXXXX--XXX-XXX-X-X---X---";
    vector<int> reports = {23, 22, 21};
    int L = 35;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "????????+++++++++++++++++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    string containers = "-X--XXXX----X-XXXX";
    vector<int> reports = {3, 4};
    int L = 6;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?????????????????-";
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    string containers = "---X-XX-XX-X";
    vector<int> reports = {2, 1, 1, 2, 0, 2, 2, 2};
    int L = 3;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++++++??";
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    string containers = "X-XX--XX--XXX-X-XXXX-XX--X-X-X---XXXX-------X--X--";
    vector<int> reports = {19, 16, 19, 17, 20, 19, 16, 18};
    int L = 36;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "---+++++++++++++++++++++++++++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    string containers = "-XX--X-------XX--X-X-XX-X--X-X--XX-XX-X---X-XXX-X";
    vector<int> reports = {18, 17, 19};
    int L = 42;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "???++++++++++++++++++++++++++++++++++++++++++++??";
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    string containers = "--XXX--XX----X---XXX-XXXX----X-XXXX--XXXXX----X-XX";
    vector<int> reports = {21, 23, 22, 23, 23, 22};
    int L = 43;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?+++++++++++++++++++++++++++++++++++++++++++++++??";
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    string containers = "X--------XX-X-X--XX-XXX--XX-XXXX-X-X-XX--";
    vector<int> reports = {19, 19};
    int L = 38;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "??+++++++++++++++++++++++++++++++++++++??";
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    string containers = "--X--X--X-X---X--XXX-";
    vector<int> reports = {5, 6, 6, 5};
    int L = 14;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "-?++++++++++++++++++?";
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    string containers = "-X---X----X--XX-XXXXX-X-X----X-XX-X-X-X----X--XX-";
    vector<int> reports = {2, 1, 2, 2, 1, 1, 3, 4, 2, 1, 2, 3, 1, 1, 2, 4, 1, 1, 2, 1, 1};
    int L = 4;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "????????????????+++++????????????????????????????";
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    string containers = "-XX--XXXXXX-X-X-X-X-----X--X-XX--XX---XX--X-XXXX-";
    vector<int> reports = {1, 0, 1, 2, 3, 2, 2, 1, 3, 1, 2, 1, 2, 2, 2, 2, 2, 4, 2, 3, 2, 2, 2, 2, 3, 2, 2, 2, 2, 4, 3, 2, 2, 4, 1, 2, 2, 1};
    int L = 4;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "??+++?++++??++++++??++++++???++++++???++++???+???";
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    string containers = "-XX---X---XXX---XXX---X---XXXXXX-X-X-";
    vector<int> reports = {6, 4, 4, 4, 4, 4};
    int L = 10;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "-????????????????????????????????----";
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    string containers = "-X---X--XX-";
    vector<int> reports = {4, 3, 3};
    int L = 9;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "+++++++++++";
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    string containers = "XXX----";
    vector<int> reports = {2, 3, 1};
    int L = 5;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "+++++++";
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    string containers = "X------XX";
    vector<int> reports = {3};
    int L = 9;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "+++++++++";
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    string containers = "XXX--X-XX----X--X-X-X-XXX";
    vector<int> reports = {5, 4, 6, 4, 4, 5, 7};
    int L = 12;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "???????++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    string containers = "-X-XXX---XX-X--";
    vector<int> reports = {5, 5, 5, 5};
    int L = 9;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "-++++++++++++--";
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    string containers = "X-X------X-XX";
    vector<int> reports = {1, 1, 2, 1, 0, 1};
    int L = 5;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?++++++++++?-";
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    string containers = "-X------XXXXXX-X--XXX------XXX-";
    vector<int> reports = {3, 3, 3, 3, 3, 6, 4, 7, 3, 7, 6, 2, 5, 5, 6, 6, 4, 6, 3, 3, 4, 3, 6};
    int L = 9;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "+++++++++++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    string containers = "XX--X-XXX-X--X-XXXXXX-XX--X-XX-X--X-XXX--X-X-";
    vector<int> reports = {21};
    int L = 34;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "----??++++++++++++++++++++++++++++++++??-----";
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    string containers = "X-X";
    vector<int> reports = {1};
    int L = 2;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?+?";
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    string containers = "X--X-X-XXX----X----";
    vector<int> reports = {7, 6, 5};
    int L = 15;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "+++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    string containers = "-XX--X-X-XXXXX";
    vector<int> reports = {4, 2, 3};
    int L = 5;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "????+???++++?-";
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    string containers = "XXX-XX--XX--X--XX--X--X-X--XX---X--X--";
    vector<int> reports = {6, 7, 6, 7, 6, 7, 7, 6, 6, 6, 7, 9, 8, 6, 7, 6, 7, 6, 9};
    int L = 16;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "+++++++++++++++++++++++++++++++++++++?";
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    string containers = "XX-XX---XXXXX--X---XX-----XX--XX---X--XXX-XX-XXX";
    vector<int> reports = {6, 4, 7, 5, 6, 5, 4, 3, 6, 3, 8, 5, 4, 3, 4, 5, 6, 4, 4, 7, 4, 4, 6, 3, 3, 5, 6, 5, 6, 5, 6, 6, 6, 3, 2, 3};
    int L = 10;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++++++++++++++++++++++++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    string containers = "X--XX-X---XX--XX-XXXX---X---X-X---X-----";
    vector<int> reports = {14, 14, 12, 12, 14, 13};
    int L = 31;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "-?+++++++++++++++++++++++++++++++++++++?";
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    string containers = "XXXXXXXX-";
    vector<int> reports = {6, 5};
    int L = 6;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "??+++++++";
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    string containers = "--X----X--X-X--XXX----XXXXXXX-X-XXXXX-";
    vector<int> reports = {3, 2, 3, 2, 3, 4, 1, 4, 3, 2, 3, 4, 1, 1, 2, 1, 1, 1, 3, 4, 1, 0, 1, 2, 2, 2};
    int L = 4;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "??+++++++?+?++??????????+++???????????";
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    string containers = "--X";
    vector<int> reports = {0};
    int L = 2;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "++-";
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    string containers = "---";
    vector<int> reports = {0};
    int L = 2;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?+?";
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    string containers = "-XXXX";
    vector<int> reports = {1, 1};
    int L = 1;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "-????";
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    string containers = "-X-XX--------X-X-";
    vector<int> reports = {1, 1};
    int L = 7;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "----???+++++++?--";
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    string containers = "X---XXX-";
    vector<int> reports = {0, 0, 1, 1, 0, 1, 0};
    int L = 1;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?+++???+";
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    string containers = "-XXXX-X-X---XXX-X---X-XXX";
    vector<int> reports = {2, 3, 4, 5, 5};
    int L = 7;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?+++++++?????????????????";
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    string containers = "XX--XX---X-X--";
    vector<int> reports = {2};
    int L = 6;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "--????????????";
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    string containers = "X--X---X--XX---X----";
    vector<int> reports = {5, 5, 6};
    int L = 17;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "+++++++++++++++++++?";
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    string containers = "XXXXX-X--XX-XXXX------X--X---XXX-XXXXXXX-XX-X-X-";
    vector<int> reports = {19, 19, 19, 19};
    int L = 35;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "??????++++++++++++++++++++++++++++++++??????????";
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    string containers = "XXX--XXXX-------XX-XX";
    vector<int> reports = {0, 1, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1};
    int L = 1;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?????????????????????";
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    string containers = "-X---X-XX------XX-XXX-X-XX-----XX---XX-X-";
    vector<int> reports = {15, 15, 16, 14, 14};
    int L = 35;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?+++++++++++++++++++++++++++++++++++++++?";
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    string containers = "-X-XXXXX-X--XX-X--XXX-XXX-X-X--XX";
    vector<int> reports = {12, 14, 12, 13, 13, 15};
    int L = 22;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "???++++++++++++++++++++++++++++??";
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    string containers = "---XXXX---";
    vector<int> reports = {4, 4, 4};
    int L = 7;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?++++++++?";
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    string containers = "--X----XX---X-XXX--XX--XX";
    vector<int> reports = {7, 6, 8};
    int L = 14;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "--???????++++++++++++????";
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    string containers = "XX-X-XXXX-XXXXX---XXX-X-X-XXX";
    vector<int> reports = {8, 6, 7, 9, 7, 7, 6, 6, 7, 7, 5, 7, 7, 8, 6};
    int L = 10;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?+++++++++++++++++++++++++++?";
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    string containers = "X-XXX--XXX--XXXXXX----XX---XX-X-X---";
    vector<int> reports = {9, 8, 6, 6, 10, 8, 9, 6, 9, 9, 6, 8, 8, 6, 11, 7, 9, 7, 10};
    int L = 15;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?+++++++++++++++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    string containers = "---X-XXX-XXX-X-XX-";
    vector<int> reports = {10};
    int L = 17;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?++++++++++++++++?";
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    string containers = "X-X----X-XX--X--XX----XX--XXX-----XXX-";
    vector<int> reports = {0, 1, 2, 0, 2, 1, 1, 1, 2, 1, 0, 0, 1, 2, 1, 1, 0, 1, 1};
    int L = 2;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "??????????????????????????????????????";
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    string containers = "X---XX--X--X-XXX--XX---XXXXX--X---X-X-X-XXXXXX---";
    vector<int> reports = {15, 16, 15, 14, 16, 15, 16, 15, 16, 17, 15, 14, 14, 14, 15, 16, 15, 15, 15, 17};
    int L = 29;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "+++++++++++++++++++++++++++++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    string containers = "XXXX-X--XX--X--XX-XX--X-X--X---X-XX";
    vector<int> reports = {6, 5};
    int L = 13;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "--???????????????????+++++++++?????";
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    string containers = "--X--X---XXXXXX-----XX---XX-XX-";
    vector<int> reports = {8, 7, 8, 8, 7, 7, 8, 7, 8, 8, 8, 8};
    int L = 16;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "??+++++++++++++++++++++++++++?-";
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    string containers = "-X--XXX--XXXXX------X--X---XXXX--XX";
    vector<int> reports = {16};
    int L = 34;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++++++++++++++++++++++++++++++-";
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    string containers = "-XX-------XX--";
    vector<int> reports = {0, 2, 1, 0, 1, 2, 2, 0, 2};
    int L = 4;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?++++++++++++?";
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    string containers = "XXX-------XX-X--X-X-XXX--XX";
    vector<int> reports = {10, 10, 9};
    int L = 22;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?+++++++++++++++++++++++???";
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    string containers = "XX-X--XX--XXXX---XXX";
    vector<int> reports = {2, 3, 1, 2, 2, 2, 3, 1, 1, 2};
    int L = 4;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "??++++???????+++++??";
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    string containers = "XXX---X---X-X-";
    vector<int> reports = {2, 1, 2, 2, 2, 3};
    int L = 7;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "-?++++++++++++";
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    string containers = "XXXX----XXX";
    vector<int> reports = {3, 4};
    int L = 4;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "++++?--????";
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    string containers = "--XXX-XXX---XX-XX--X-X---XXXX--XX--XXXX-X-X---";
    vector<int> reports = {5, 6, 6, 4, 4, 4, 5, 5, 5, 4, 5, 6, 4, 5, 6, 5, 4, 5, 5, 5, 3, 5, 5, 6, 3, 5, 6, 5};
    int L = 9;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "????????++++++++++++++++++++++??+??++++???????";
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    string containers = "X--X---XXXX-XXX----XX--X-XXX-XXX--XX-XX-XX--X--XX-";
    vector<int> reports = {20, 20};
    int L = 37;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "???????????+++++++++++++++++++++++++++????????????";
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    string containers = "XXX-X-XXXX-XX-X-XXX---XX--X---XXXX---X-------XXX--";
    vector<int> reports = {5, 2, 5, 6, 4, 7, 3, 5, 5, 9, 4, 5, 7, 6, 8, 5, 6, 2, 6, 6, 6, 4, 3, 7, 8, 9, 4, 5, 8, 4, 8, 6, 9, 9, 7};
    int L = 12;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "+++++++++++++++++++++++++++++++++++++++++++++++++?";
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    string containers = "XX-X-X-XX-X-XXX-X-X-X-XXXXX--X---XX---XXXXXXXXX--X";
    vector<int> reports = {16, 18, 17, 18, 19, 17, 19, 19, 18, 17, 18};
    int L = 30;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "???????++++++++++++++++++++++++++++++++++++++++???";
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    string containers = "--XXX--XX-X-XXX----X-X-X--X-XXX---XX---X-XX--XXX-X";
    vector<int> reports = {6, 7, 5, 4, 7, 7, 6, 6, 6, 6, 6, 7, 6, 7, 5, 5, 8, 6, 6, 6, 6, 7, 7, 6, 7, 6, 9, 6, 8, 6, 5};
    int L = 13;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?+++++++++++++++++++++++++++++++++++++++++++++++??";
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    string containers = "--X--X--XXX--X---X-X-XX-X---X-XX-X-XXX---X--X-XX--";
    vector<int> reports = {10, 12, 11, 10, 9, 10, 11, 10, 10, 10, 11, 11, 10, 10, 10, 11, 11, 9, 10, 11, 10, 12, 10, 10, 10, 10};
    int L = 22;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "??+++++++++++++++++++++++++++++++++++++++++++++++?";
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    string containers = "XXX-XXX-XXXX----XXX-X--XX-XX--XXX--X-X---X---X-X-X";
    vector<int> reports = {2, 1, 2, 1, 2, 1, 2, 1, 2, 2, 0, 2, 2, 2, 1, 0, 0, 1, 1, 1, 1, 3, 2, 2, 1, 2, 2, 1, 2, 2, 3, 1, 1, 2, 1, 1, 2, 1, 1, 3, 3, 1, 3};
    int L = 3;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?????????++++++++??+++++???++++?+++++++++++++++++?";
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    string containers = "--X--XXX--XX-X--XX-XX------XX--XX-XX-XXXX----XXXX-";
    vector<int> reports = {23};
    int L = 46;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "-++++++++++++++++++++++++++++++++++++++++++++++---";
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    string containers = "--XXXX--XXXXX--X-X--X-XXXX-XXX-X-XXX-XX-X-X-XX-XX-";
    vector<int> reports = {19, 17};
    int L = 29;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "-????????????+++++++++++++++++++++++++++++????????";
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    string containers = "----XX---XXX--X-XX-XX--XX-X--XX-X-XX--XX-XXX-XX---";
    vector<int> reports = {16, 20, 19, 20, 19, 19, 18, 18, 18};
    int L = 34;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++++++++++++++++++++++++++++++++++++++++++????";
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    string containers = "-----X-XXXXX-----X--XX-X--X----X---X--XX--X--X--X-";
    vector<int> reports = {15, 15, 15, 13, 15, 16, 15};
    int L = 38;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "???++++++++++++++++++++++++++++++++++++++++++????-";
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    string containers = "XXXX----XXXX--XXXX";
    vector<int> reports = {4, 4};
    int L = 4;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "????----????--????";
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    string containers = "-XX--X-XX-X-X--X---XX-X---XXXX-----X";
    vector<int> reports = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    int L = 7;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "???++++?++++++++++++++++++++??????--";
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    string containers = "------X-XX-";
    vector<int> reports = {3, 0, 2, 0};
    int L = 5;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++++++?";
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    string containers = "-XXXXX---X--";
    vector<int> reports = {2, 1, 0, 1};
    int L = 3;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "???-??++++??";
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    string containers = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    vector<int> reports = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    int L = 3;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "??????????????????????????????????????????????????";
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    string containers = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    vector<int> reports = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int L = 1;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++++++++++++++++++++++++++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    string containers = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    vector<int> reports = {3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    int L = 3;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "??++++++++++++++++++++++++++++++++++++++++++++++??";
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    string containers = "XXXX";
    vector<int> reports = {4};
    int L = 4;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "++++";
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    string containers = "-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X-X";
    vector<int> reports = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int L = 2;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "??????????????????????????????????????????????????";
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    string containers = "-XX--X-XX-X-X--X---XX-X---XXXX-----X-XX--X-XX-X-X-";
    vector<int> reports = {2, 2, 2, 2, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3};
    int L = 7;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?????????+++++++++++++++++???++++++++++++?????----";
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    string containers = "XXXXXX";
    vector<int> reports = {6};
    int L = 6;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++";
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    string containers = "XXXXXX---X";
    vector<int> reports = {2, 5};
    int L = 5;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "?++++++++?";
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    string containers = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    vector<int> reports = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int L = 1;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++++++++++++++++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    string containers = "XX--XX-XXX-XX--XX-XX-X---";
    vector<int> reports = {5, 7, 6, 6, 6, 5, 6, 5, 6, 7, 6, 7, 7, 6};
    int L = 10;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "+++++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    string containers = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    vector<int> reports = {50};
    int L = 50;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "++++++++++++++++++++++++++++++++++++++++++++++++++";
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    string containers = "-XXXXX-";
    vector<int> reports = {2};
    int L = 3;
    SurveillanceSystem* pObj = new SurveillanceSystem();
    clock_t start = clock();
    string result = pObj->getContainerInfo(containers, reports, L);
    clock_t end = clock();
    delete pObj;
    string expected = "???-???";
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22921804&rd=15501&pm=12588
********************************************************************************
#include <vector> 
#include <list> 
#include <map> 
#include <set> 
#include <queue> 
#include <deque> 
#include <stack> 
#include <bitset> 
#include <algorithm> 
#include <sstream> 
#include <fstream> 
#include <iostream> 
#include <cstdio> 
#include <cassert> 
#include <cmath> 
#include <cstdlib> 
#include <climits> 
#include <cstring> 
 
using namespace std; 
 
typedef     long long        ll; 
typedef     long double      ld; 
typedef     pair<int,int>    pii; 
typedef     vector<int>      vi; 
typedef     vector<string>   vs; 
typedef     map<int,int>     mii; 
typedef     map<string,int>  msi; 
typedef     map<char,int>    mci; 
typedef     istringstream    iss; 
typedef     ostringstream    oss; 
 
#define    REP(i,a)          for (int i=0; i<a; i++) 
#define    FIT(it,v)         for (typeof((v).begin())it=(v).begin(); it!=(v).end(); ++it) 
#define    ALL(v)            (v).begin(),(v).end() 
#define    SET(a,x)          memset((a),(x),sizeof(a)) 
#define    EXIST(a,b)        find(ALL(a),(b))!=(a).end() 
#define    SORT(x)           sort(ALL(x)) 
#define    GSORT(x)          sort(ALL(x), greater<typeof(*((x).begin()))>()) 
#define    UNIQUE(v)         SORT(v); (v).resize(unique(ALL(v)) - (v).begin()) 
#define    pb                push_back 
#define    mp                make_pair 
#define    MOD               1000000007 
 
template<typename T> inline string tostring(const T& x){oss os;os<<x;return os.str();} 
inline int toint(const string& s){iss is(s);int x;is>>x;return x;} 
inline int todecimal(string s){int a=0;REP(i,s.size())a=2*a+(s[i]-'0');return a;} 
inline string tobinary( int a){string s;while(a!=0){s=(char)(a%2+'0')+s;a>>=1;}return s;} 
 
template<typename T> inline T sqr(T x){return x*x;} 
template<typename T> T gcd(T a,T b){return (b==0)?abs(a):gcd(b,a%b);} 
inline int isvowel(char c){if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')return 1;return 0;} 
inline int isprime(int a){for(int i=2;i*i<=a;i++)if(!(a%i))return 0;return 1;} 
 
class node { 
public: 
    int x, y, z; 
    node( int a, int b, int c ) {x=a; y=b; z=c;} 
}; 
bool operator<( const node &a, const node &b ) { 
    return a.x > b.x; 
} 
bool compare( const node &a, const node &b ) { 
    return a.x < b.x; 
} 
 
class SurveillanceSystem { 
  public: 
  string getContainerInfo(string containers, vector <int> reports, int L) { 
    int n = containers.size(); 
 
    int count[n+1]; 
    SET( count, 0 ); 
 
    REP( i, reports.size() ) count[reports[i]]++; 
 
    string answer; 
    REP( i, n ) answer += '?'; 
 
    vector< vi > vv[n+1]; 
    REP( i, n-L+1 ) { 
        vi v; 
        int y = 0; 
        REP( j, L ) { 
            v.pb( i+j ); 
            if ( containers[i+j] == 'X' ) y++; 
        } 
        vv[y].pb( v ); 
    } 
 
    int not_negative[n]; 
    SET( not_negative, 0 ); 
 
    REP( i, n+1 ) { 
        if ( vv[i].size() == 0 || count[i] == 0 ) continue; 
        int y = vv[i].size(); 
 
        int cnt[n]; 
        SET( cnt, 0 ); 
 
        REP( j, y ) { 
                REP( k, vv[i][j].size() ) { 
                    int element = vv[i][j][k]; 
                    cnt[element]++; 
                    not_negative[element] = 1; 
                } 
        } 
 
        REP( j, n ) { 
            if ( y - cnt[j] + 1 <= count[i] ) answer[j] = '+'; 
        } 
    } 
 
    REP( i, n ) { 
        if ( !not_negative[i] ) answer[i] = '-'; 
    } 
 
    return answer; 
  } 
}; 
 
 
 
// Powered by FileEdit
// Powered by TesterDream 1.2.4 by fushar (December 19 2012)
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/