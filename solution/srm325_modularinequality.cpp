/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=6765
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

class ModularInequality {
public:
    int countSolutions(vector<int> A, int P);
};

int ModularInequality::countSolutions(vector<int> A, int P) {
    int ret;
    return ret;
}


int test0() {
    vector<int> A = {1, 2, 3};
    int P = 6;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> A = {10, 30, 15, -1, 17};
    int P = 42;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> A = {0, 2, 3, -5, 10};
    int P = 17;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> A = {-693};
    int P = 1265;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 2531;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> A = {965, -938, -396, -142, 926, 31, -720};
    int P = 6495;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1781;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> A = {-1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000001;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> A = {0};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000001;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> A = {0};
    int P = 0;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> A = {0, 0};
    int P = 0;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> A = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000};
    int P = 0;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> A = {-1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000};
    int P = 0;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> A = {-1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000};
    int P = 50;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> A = {-547, -89, -623, -366, -823, 88};
    int P = 3410;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1137;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> A = {-995, -406, -365, -575, -585, -632, 186, 166, 277, 663, 576, -627, -575, -437, -796};
    int P = 6726;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 434;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> A = {43, -226, 808, -669, 228, 710, -123, 367, 614, -369, -473, 0, 480, 417, 457, -649, -688, -882, -786, -484};
    int P = 17405;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1741;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> A = {-200};
    int P = 529;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1059;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> A = {-535, 956, -612, -395, -278, 95, -703, -499, -677, 960, -790, 871, 449, -93, -610, -252, -134, 994, -497};
    int P = 10407;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 599;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> A = {-264, -546, -923, 129, -11, -646, 370, -31, 180};
    int P = 4869;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1022;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> A = {-121, -513, -597, 254, 301, -359};
    int P = 2035;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 371;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> A = {-675, 894, 909, -235, -266, 444, -44, 717, 724, -703, 50, 149, 18, 497, 524, -544, 321, 456, -115};
    int P = 19195;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 2021;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> A = {516, -17, -341, -986, -904, 541, -660, -264, 235, 912, -718, -713, 101, 557, -895, 202, -910, -9, -533};
    int P = 11042;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 844;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> A = {-818, 697, 271};
    int P = 1702;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 375;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> A = {596825, 783296, -427517, -907595, 8339, -314044, -807494, -399782, -43006, -663934, 607288, 221447, -772666, 735274, -822126, -816656, -795191, -776008};
    int P = 12137474;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1136460;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> A = {-93752, -679804, -690604, 785180, -36583, 184253, 968158};
    int P = 5791308;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1623291;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> A = {601874};
    int P = 522559;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1045119;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> A = {229237, 558532, -749993};
    int P = 1450825;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 284601;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> A = {124375, -329983, 141277, 263949, -978996};
    int P = 1818920;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 150889;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> A = {728555, 108630, -538235, -594806, -99311, -569937, -916058, -55007, -951585, -687277, -736638, -192302, -549509, -45652, -168725, -957126, -946888, 593932};
    int P = 17120957;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1880752;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> A = {-769394, 397726, 318380, -656436, 253614, 953070, 823998, -77787, -49406, -813717, 819429, 614901, 494443, -264449, 825327};
    int P = 13795827;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1816482;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> A = {-879021, -677543, -972125};
    int P = 955336;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 636891;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> A = {965684, 691132, 552491, 214679, 58372, -571534, -455328, 126477, 168365, 695075, 617615, -767373, 296737, 158847, 824617, -595067, 670134};
    int P = 8471611;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 637427;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> A = {104451, 407229, 49134, -524459, 687209, 205083, 406787, -286948, 845611, 985441, 125797};
    int P = 4267621;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 394835;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> A = {-3365668, -29111517, -21155736, -20426964, 16718497};
    int P = 137048909;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 54301569;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> A = {16925455, 10771137, -32756670, -33212954, -3428892, 8706107, 4377055, 2470576, -24298054, -33559834, 22281953, -31727681, 33773208, -17611101, 2605072, -18753551, -16868169, -16644750, -9682769, 29107360, -2577, 1552722};
    int P = 398988439;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 18512982;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> A = {9743628, 7141906, 10428674, 3539683, -5817602, -7097370, -38376689, 23895233, 34602274, -34643620, -23003226, 9494258, -24051376, 30976905, -14663796, -25457488, 8934828, -21483884, -10272111, -34358113, 33941741, 35855190, 21306246, 25483020, 22191257, 17090618, 20873910, 5900689, -4254240, -12301420, 5113513, 29558079, -35340510, 15279039, -36689489, -36575630, -18515809, 38540390, 22851489};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 40903208;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> A = {-36399333, -10493921, -13222279, 11343474, -7757559, -7608057, -19521067, -24008690, 7865393};
    int P = 243630248;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 54140056;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> A = {20043820, 15474917, 37761915, -8994754, -18462781, -21495470, 8219456, -18250783, -15559839, 30168850, -26188698, -1044111, -4424417, 37888007, 26926713, -36178768, -5709657};
    int P = 422309062;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 40867727;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> A = {39385143, 2207798, 27454625, 13287398, -1132348, -30334681, -28222589, 32278868};
    int P = 250350470;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 57328663;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> A = {22710954, -19608990, -5501599, -3826249, -37008173, 5496604, -1917733, 35422500, -11588083, -10491361, 21363356, 18720146, -21766280, -29328792, -5978780, -4039139, -39230814, 15604074, -12087794, -26961387, -21858163, -30680155, 617525, 39207681, 20175066, -30418259, 37832981, 8602100, -13180352, -34355725, 8008860, -23924381, -22332385, 29831710, 2116019, -25304111, 38280491, 14275500, 27432322, -3044798};
    int P = 767987218;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 4001561;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> A = {-2797755, -7599651, -11861624, 11026998, 37448357, -13122664, 31657022, 7668394, -22199909, -38624269, 38129561, -11646110, 17521741, 14979876, 12890438, -9723414, 1181269, 38467572, -31209868, 35904351, -11826157, -13711434, 28972176, -29846771, 153405, 5408280};
    int P = 771819570;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 55126251;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> A = {-15765597, 28086153, -31143126, 8046535, 4338243, 22318268, -1246160, -32910852, -3765453, 18722745, -35737028, 23215745, 12313176, 25533330, -4081547, -33854279, -16542495, 24351362, 13515763, 2575112, -39634454, 35227160, -13021613, 32781454, -18286263, -16200550, -38024054, -29618544, -14926365, 36139971, 17093413, -14362452, 30675288, -2493398, 32383383, -35607418, 4461227, 36461896, 18348674, 13731197, 31384331, -13999565, -5824801, -26130432, 11930048, 45853, -3062875, 39411731};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 13697611;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> A = {37784784, 8965767, -5359514, -32486960, -11359815, 33935118, -34060690, 5741944, -27491590, 26024273, 16699978, -36502805, -21929224, 683780, 4268694, 36435333, 19456307, 26835878, 19247610, -17471870, -35830310, -10944200, 34500252, 34474534, -39100964, 25264314, 27653593, -20841224, -26989504, 17864221, 15730585, -30049419, -16937865, -38217209, 37083330, -7085151, -216139, 31998797, -31601855, 4618339, 30526175, -26005949, -38109777, -799911, 39340815, 26667600, -22029340, -14605920, 6484857};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> A = {-18152004, -32570685, 880336, 28276595, -27092573, -14052408, -6844135, 38182517, -33551161, 1746229, 1452312, 15681095, 14963837, 9279538, -13574273, -2159081, 9385636, -16977330, -21292924, -21354403, -841798, 15144364, -39802158, 6936168, -15416917, -27780211, 35452099, 1313834, 25239681, 10048762, 30093751, -4387991, -8469219, -20485050};
    int P = 805326137;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 40607059;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> A = {8634540, -22892621, 30999618, -24950074, -14697884, -31284864, -363336, -2411172, -8201778, 23155266, 1055459, -5469747, 5194162, 26059147, 26388853, -21358370, -15036640, 19320815, 24853808, 31005727, 14803175, -38746901, -2790219, 15202558, 8705691, -7278800, -39069400, 20063316, 22701235, -37501580, -10531470, -10070264, 30015397, -8676569, 12992785, 26115274, 30187516, 34712221, -26042162, -1208283, -12159006, 6496895, -38159209, 13987932, 29185647, -10207800};
    int P = 850945186;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1418796;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> A = {11495425, 36253875, 30966072, 38700949, 13954672, -35191288, 6714834, -1722691, -439961, -19687362, 5355644};
    int P = 331208803;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 57093834;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> A = {-6496367, -29594891, 10446386, 22756756, 21867125, -12384630, 33187930, -10903593, 2055421, -38265337, -4557881, 24424883, 25562469, 27370071, 1832175, 20146473, 26517039, 22851910, 35294312, -8517654, 35620192, -27846804, -10538459, -18179987, 14060682, -39915148, -6744915, -1708304, -31195180, -19191092, -33045472, -19093751, 22611803, 2198090, 10208947, -4069983, 12250325, 17260083, 6347314, 13113752, 32032737, -23350468, -3012970, -1424802};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 36100260;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> A = {-30716332, 39619890, 25179180, -38073823, -28927196, 13978421, -38526943, 19207485, 32153067, 39680716, -3359522, 28974345, 3316120, -7890096, -34058563, 1464082, -38501540, 23658468, -11371585};
    int P = 716820728;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 74689657;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> A = {2543906, -7199455, -12845947, 33159452, -9366219, -2794394, 13110180, -4463498, -1014614, 29690355, 22151066, -33335771, 16979891, -4080598, -38792504, 20218147, 16654222, 35545271, 27560151, 37140169, -16240548, 20313608, 5355841, 3077886, 27428579, 11108328, -13886389, 16770050, -16689558, 38263361, 30932069, 25787756, 2031771, 8011976, 2568315, -33380691, -28817217, -11808934, 16887914, 12043311, 27376188, 25852285, 10765228, 26876124, -26604822};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 36261786;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> A = {-30658168, -3524872, -10317245, -26169859, -25205832, -24116348, 9734909, 2326404, -16212625, 7982883, -14945114, -6561824, 15888262, -32531066, 14857429, -14085214};
    int P = 220852968;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 9105017;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> A = {33549448, 22907811, -37664933, 36859947, -8251486, 4014679, -13352958, -33295459, 16232415, -15042685, 3119496, 5115589, 27392653, -324468, 15099275, 25774398, 39942885, -30904984, -16523523, 9060337, 29889870, 14646756, -3190816, -6869428, -38420669, -23629187, -2561012, -3731779, 22242183, 18438313, -38206386, 25516545, -3337426, 2707079, 8663631, 12410447, 30395465, -11704227, 14535652, -3586146, 574028, 6454658, 32934674, 27939742, -21928624, 38263067, -470558, -30196960, 9890405};
    int P = 907855046;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 14584529;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> A = {38271528, -19237505, 32535634, 2905452, 12408852, 6101887, 24175357, -29664931, -28544348, -4029766, 811430, -16222667, -17584243, 32900066, 24126484, -34337197, -4397699, 23473226, 22268910, 14011476, 6188022, 24406818, -10426037, -5938441, -33750237, 13886005, 3897732, -27858545, 23805410, 4999535, 2940865, -14590894, -10063516, 4052630, -17255630, -2052233, -22678240, 22819945, 12544721, -35879900, -22603748, 27595788, -18354599, -5034411, 31465326, 38961148, -13571239, 15525520, 20325738};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 25811493;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> A = {6150194, -21618453, -35437030, -38065263, -34368076, 688592, 32947255, 29478094, 26693100, -5277736, -6506771, 30656449, -26682894, -21332865, -21937299, 25182669, 28520459, -35903760, -8685538, 19179590, -24439363, 32860742, 18900962, 5272389, 35316546, 11044059, -25135699, 8863182, -24544144, -18685226, 10271576, -20691536, 38884027, -28090939, -8061407, 32397142, -26604942, 15173672, 15099492, -15545278, 28120972, 9788565, -20835874, 5522144, 27458619, -2159406, 1548692, 9492811};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 14577191;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> A = {-13279976, -4941891, -6366382, 11902394, -6068184, -14263476, -12973003, -64558, -13162324, 12810020, -2683410, 6677387, -17792614, -9772692, -18910858, -13179028, -10241378, -14484335, 3199290, 15863635, 5110195, 133448, 12437298, -8980310, -16307324, -18418403, 19748397, 15205476, -15030774, 11906927, -18862667, 19841472, -6885225, 3005532, -13320483, 9897293, -5133334, 1981047, 18197729, -4776151, 19325138, -15391969, 6275766, -1711945, 19788866, 15458544, 6728063, 11345812, -602375, 14528257};
    int P = 553727463;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 6223297;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> A = {2781036, 1386069, -5635861, 17721727, -13296522, -5092127, -8934091, -10368545, 14941734, 5891289, -7146515, -3324598, -11039411, -18979095, -12155659, 12634381, -253928, -17180070, 1255899, 11839444, -7542917, -12281930, -867233, -7269469, -1561960, -776716, -18759121, 4469058, -2465596, 18335492, -12530135, 9360994, 18434885, 18603967, 13517717, -18772240, 17856244, -16423609, 11877475, -7418761, 11822363, 16839008, -10891862, 15535679, 19905565, -7530798, 19949150, 3171643, 10707414, 17352984};
    int P = 824596058;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 31901251;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> A = {-3178340, 7566860, -4953430, 15177465, 17847052, 11026106, 11801670, 7262761, 14865430, 5350719, 12670366, -10620551, 14969410, 15540659, 13786954, -3726411, -855596, 16619697, 12812891, -2644764, 14126596, 19438581, 19841282, 1321400, 10379483, 19435215, -9042737, -12150889, 3677859, -19346675, -5175426, -1596819, 4473338, -2793061, 8395865, -6294098, 15272710, -16867093, -13863567, -17316149, 7221291, 17106197, 16631090, 16943226, -6516921, 6251973, -5022667, -18799276, -19319739, -10123621};
    int P = 531674582;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 6385575;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> A = {364585, -3909995, 13066296, -14027707, -9837169, 8162216, 9700343, 14473141, 2419001, -10202587, -12917269, -15888205, 1859733, -5916093, -9913318, -586590, 10626061, 9743720, 14700443, 9077296, -6383058, -2338348, 10572674, 8685774, -18463751, 18998417, -7430863, 16415881, 1456019, -15803947, 6381138, 276043, 11995651, -10692793, 314612, -13433495, -8395352, 5340291, -12539851, -6252320, 6990395, 17736624, -12669802, 16862075, -8199899, -11627998, -14888718, -17689687, -9519667, -7734983};
    int P = 859854880;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 34131184;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> A = {-3093717, 18845703, -13994471, -13288150, 11024945, 16207213, 1005996, 11238444, 749176, 18567432, -12150490, 2365128, -5722873, 12415147, -16104076, -5449292, 7861250, -2820053, 14631496, 10530770, 10364224, 12406838, -3490327, -5350714, 6173923, -821719, -12215706, -8504636, 11375220, -6028132, -1298024, 9671220, 11531740, -18346363, 7126986, -6518481, 7852539, 4119909, 15768193, -18550312, -7020590, -16554537, -15300175, 14011758, 667064, -15448081, -17667793, -110417, 12075478, -12474264};
    int P = 983983449;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 39359338;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> A = {7233713, 8913943, -10310343, -7672433, -19222854, -14162297, -12211047, 17381782, -16797614, 18392490, -1852614, 18944091, -19159734, 7396483, -17895611, 14199068, -8136586, 15862979, 5929190, 17993215, 6511883, -1289030, 17995983, -1593029, 3536266, 14437189, 19964738, 15711405, -8118376, 11663204, -17891326, -11783503, 17496050, 6752411, 13639462, -9111066, 9203624, 4118742, -8536758, 7411336, -19069772, -19413750, 14418569, -16766663, -8612199, -5874309, -12718649, 17825890, -616101, -18913433};
    int P = 803197587;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 29751722;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> A = {6711378, -4753583, -9555956, 14982381, 1803110, -9218378, -4903419, -8446663, 18954014, -3561870, 13321816, -8999208, 5022282, -4741092, 6623098, 19086766, -7047012, 16699419, -11102232, -2176141, 9759436, -8143070, -12903444, 3871681, 11036432, 16580949, -19692372, -13410333, 10600207, 3349058, 14344134, -12018218, 318843, 876504, -2718705, 7788366, 16946207, -11835736, -12654729, -1047790, 18752280, 11190998, 17051638, -8656239, -9678902, -1499568, -9072489, -16137380, -2226483, -16050979};
    int P = 866784870;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 34381071;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> A = {9291989, 13933543, -3927079, 2424220, 9220397, 13065382, -12078507, 17950422, 181687, 6403968, 9635464, 240588, 14204826, 19703746, 17739665, -30277, 13653156, 6216265, -12132362, -5930556, -4208112, -5057843, -3311062, -4377318, 7629920, -9671218, 9014638, -2626003, -6924045, -14793012, -5515831, 7482750, -18248028, 388988, 17922991, 9519947, -18254336, -12417822, 2036249, 14505964, -5797774, -16889571, -3202411, 6174841, -15663469, -3358227, 17948630, 182128, 16843936, -12780830};
    int P = 693076429;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 25539897;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> A = {-7650415, 7957051, -6569438, 5135779, 620179, -17187772, -8970381, -15151919, 5003330, -18762643, 1975701, -14161806, -10343088, 14815548, 351143, -4356695, 2618998, -11113480, -12324206, -12208606, 7795936, -4590717, -16238338, 18124451, 5598399, 3859910, 14294587, 15735534, -18309033, 1411882, -10131963, -12233944, -2609566, -7984120, 13676679, -17049965, -17976467, 14000495, -10931982, 15465770, -3625103, 14290634, 16926887, -12229819, 10809587, -19575775, -3217416, -11792374, 12341822, 9242686};
    int P = 580088479;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 16267540;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> A = {-16404666, -19272292, 13807300, -8271531, -14051780, -17169581, -2927831, -18057363, -11613994, 6413258, -11987417, -1416556, 10333026, -10996177, 305738, -16536707, -6235725, 19157361, -14734438, -16249484, -9700313, -10296620, -6478717, -13843813, -3250355, -5816952, -8026621, 10706815, -19774557, 19946801, -19765537, 19990085, -1575717, -10979559, 14709958, 10161606, -1358257, 15270570, -16994870, -17102263, 7903551, -4219360, -18807514, -3746669, -10646986, -3744040, 8862962, -18357040, 18146631, -18971997};
    int P = 537108765;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 9688241;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> A = {14189631, 8101891, -5083826, -11147976, -10213145, -11499013, 17691755, 7047300, -11571734, -5075400, 8663318, -16071552, 13291089, -17659900, -4202901, 4885137, -5077571, -13144973, 17787289, 18293115, 12647174, -14433935, 5739611, 199036, 16681753, 229994, 16310028, 19370474, 7579715, 10303678, 2402194, 6691923, 14134838, 11939952, -18138019, -6659536, -14979316, 8199788, 15659779, 451163, 18407883, 19608350, -3310622, -1517144, 15813500, 16345107, -1080738, -2920568, -7414215, 7330621};
    int P = 548433486;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 12984652;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> A = {-17300821, -18621484, -2616689, 6211853, -14012095, -17228338, -17552529, -5010928, -229396, -14998661, -647519, 480408, -15730201, 12547585, 8309879, 17082659, -18733380, 7317112, -13156357, 18480631, 16862452, 12126188, 15395539, -18382471, 1205979, 13528219, -12545634, 19838126, -7828455, 11394141, 3417826, -7290364, 7177469, -18731151, 1258667, 5705686, -17178735, 1255487, -4870836, -19159610, -9495755, 6827363, -16919812, 3695950, -16075178, 1646556, 19615582, 7956038, 10733207, 9136172};
    int P = 568737637;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 8286560;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> A = {-511512, -12484285, -9306500, -12090286, -12576456, -13652132, -6159444, -9868957, 14353515, 13332175, -2119528, -9022398, 1966424, 14925519, 15249547, -17551525, 8391483, -5539560, 11491770, 7751305, -16775833, -432075, -976144, 5144843, -1959095, -6526521, 8191732, 11365635, 16841227, -7823000, -1901028, -6300325, 17083770, -19503527, -6391234, -6337824, -18115670, -19976103, 18104543, 8079603, 13816523, 10081708, 12013431, -5172225, -5595962, -17702262, 7213633, 1722922, 6501209, 10376937};
    int P = 965324665;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 38600397;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> A = {7790399, 12750353, 8525410, 13405479, -18163886, -4817930, 11360007, -238593, -5342621, -1934173, -16074539, -10875615, -13116658, -5950057, -834679, 10512799, -30355, 16718379, 19251335, -5909479, -16713982, -9531003, 911765, -13241469, 17277486, 8473146, -9907859, -8266057, 12500713, 9375395, -5831567, -19049524, -2967099, -1772369, 7475442, -10232212, -3461738, 11810977, -18092348, -9395494, 1951672, -19217075, -14591378, -3747281, 15793976, 1304220, -13581772, -13118472, 2383208, -10306};
    int P = 822256799;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 32318705;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> A = {-5431468, 15970788, -5158182, -18105896, -9287014, -952750, 6104606, 8603520, 19456151, -6498834, -19066733, 2430597, -16297378, 5034033, -11949321, -14246002, -2297230, 7532834, -5986252, -316524, -9769011, 6954571, 2427406, -11261336, -19475108, -10186689, 13216861, -16518712, -7459635, 13628609, 18494731, 7784734, 9591957, -12896827, 13471180, 3197630, -19282240, 5887641, 3871392, 17621022, 19379203, -3356515, -7608484, 6767580, 5099270, -11691787, -16892283, -12838969, 9900515, 9203443};
    int P = 526805286;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 9956706;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> A = {1903402, 2547141, 14998504, -17977208, 6202956, 460727, -9204672, 4286903, -16461687, -14303984, 3229577, -11520199, 16716976, -16778849, -11244058, -8384521, -337383, 11304155, 143559, -14606747, -6785630, 5330071, 12260183, 1612081, 11095493, -6168457, -18339459, 18150449, 9579023, -7445973, -16705881, -10088530, 19420900, -6170591, 13309848, 1900895, 10063209, -1165572, -1372783, 5808895, -3206416, 12194498, 5488857, 11973828, 12147654, -15529307, -4611725, -5374077, 146262, 17933649};
    int P = 533755914;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 14001498;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> A = {-11566424, 13824763, 3165190, -18804901, -10149578, 10883297, 4476859, -15998506, -12033805, -15164862, 11884320, -14370188, -6950248, -3508458, 1983426, -19492275, -12405593, 7939668, -11716004, -8470964, -6278143, -9637232, 9937346, -15324867, -18641772, -15245214, -12525697, 2377776, 3803006, -7374284, -12301795, 1622718, -1995327, -9667598, 12927640, -3888872, 7828109, -16379369, 18667818, 10467174, 4387861, -1067531, -18000861, 1457975, -15222815, 3238104, -12937843, 11887544, 13243456, -9636820};
    int P = 790765348;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 31081448;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> A = {7672856, 3954346, -18540422, 2385139, -6264433, 7163236, 11611101, -10940752, -18548352, -9775448, -6384389, 12778160, 1455705, -6615232, -1600244, 6417781, 19540118, -6653827, 2278520, 3442713, -5355557, 9580164, -5908921, 5420091, -5590730, -11005614, -14808616, -18391762, -534885, -9977530, 12977334, -2146771, 6097483, 18312001, 18898196, -16489111, -14288365, -3916147, -5920638, 15193670, 19364561, 17921587, -5224455, 13052019, -13611804, 15759230, -17157265, 13568975, 2305447, -15445563};
    int P = 497177496;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1065360;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> A = {15150705, 8006934, -15933787, 1117510, -5109038, 17475599, -6718405, 5285369, 17297689, 3616599, 4918328, 6360687, 16465935, -3271036, 19070924, -19057261, 14926248, 11506911, -11743888, 14508965, -16244752, 19603286, 13194261, 16911489, -9294022, 17949134, -6121934, -6547312, -18713523, -4581924, 15134413, -13665005, 13881641, 18054732, 18424890, 5714939, 10226256, 17966556, -9053407, 2713124, -17737298, -16927512, 99604, 5436084, -12146673, 15280025, -2037752, 5319698, -4277605, -11156516};
    int P = 944121655;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 37329439;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> A = {-17422312, -603362, -7740303, -5788206, 13639178, 10737511, -6869889, -12970211, -1416655, 7397608, 4897792, 13603655, -4889791, 16017850, 11227737, -13867832, -1795545, 7558212, 17975166, 14996321, 14971032, 7844570, 10206563, 9842803, 5665504, -2211285, -3309397, 17332923, -11193345, 3445785, -19419660, -11318071, 7880144, 5637710, 6874641, 11566411, 19736029, 19152990, -977607, 19456236, 2179337, -9278196, -19940143, -4110731, -16629960, -11317928, -13940445, -441473, 13289752, 4733350};
    int P = 512918417;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 10106484;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> A = {-10, -9};
    int P = 18;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> A = {1, 5, 8, 8};
    int P = 13;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> A = {-906331985, -595778437, -515697510, -509040636};
    int P = 895788091;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 397221225;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> A = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
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
    vector<int> A = {0, 0, 0};
    int P = 0;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> A = {0, 0, 0, 1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> A = {965, -938, -396, -142, 926, 31, -720, -100000000, 1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> A = {0, 1, 1};
    int P = 1;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> A = {-1000000000, -1000000000, 1000000000, 0};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> A = {-1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000001;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> A = {1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000001;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> A = {-741920015, 818516152, -100562606, -856453582, 290609501, -196465738, 481302465, -938646250, 545102929, 518519638, -155007608, -295522007, -711605948, -105190840, -866968581, 714739579, -124418883, -62125465, 22680421, 227954605, -766696796, 18704131, 557846087, -91519267, 407469717, 487450441, -407681778, -959596287, 394193004, 703093167, -686914818, -980885466, -27325904, -927132068, -187522579, 87027193, 758791573, -804789387, 177889178, 657187096, -801856438, 699967308, -932171724, 68520081, -282707152, -120380085, 243044055, 116472068, -248034878, -294722652};
    int P = 999999999;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> A = {1417648, 5055593, -3969583, 1299745, -3028949, -6305903, -7142287, 9996826, 5193073, 8155245, 258497, 4175182, -9546881, 8777282, 7380047, 1851470, -764153, 4990326, 1407130, -5879572, -2130566, -2292275, 8268792, -7561194, 7695256, 8924445, 9380301, -3914911, 1116472, -4290005, 357743, 9482490, 6963014, -9216629, 2642784, 4072730, -1389516, -3142458, 3975077, 4428101, 3290457, 6940965, 8649834, 3289305, -3970313, 7783627, 3498046, -4783420, 6655727, 8655125};
    int P = 666666666;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 26666667;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> A = {0, 1};
    int P = 6;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> A = {289383, 930886, 692777, 636915, 747793, 238335, 885386, 760492, 516649, 641421, 202362, 490027, 368690, 520059, 897763, 513926, 180540, 383426, 89172, 455736, 5211, 595368, 702567, 956429, 465782, 21530, 722862, 665123, 174067, 703135, 513929, 979802, 634022, 723058, 133069, 898167, 961393, 18456, 175011, 478042, 176229, 377373, 484421, 544919, 413784, 898537, 575198, 594324, 798315, 664370};
    int P = 20000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 775710;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> A = {-1000000000, 1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> A = {292, -737, -53, 97, -906, 572, -713, -966, -890, 979, -77, -116, -715, -738, -309, -366, 185, 157, 53, -156, 293, -261, -743, -574, 918, 922, -998, 873, 776, -17, 210, -768, 316, -181, 422, 138, 845, 846, 406, 250, 508, -715, 538, 353, 206, -337, 515, 475, -503, -620};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 40000000;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> A = {1000000, 1000001, 1000002};
    int P = 5000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 3333333;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> A = {96500000, 938000, 400000000, 99999999, 96500000, 72033333};
    int P = 999999999;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 280497610;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> A = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 100000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 4083334;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> A = {1, 2, 3};
    int P = 6;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> A = {1000000000, 0, 1000000000, 1, 1000000000, 2, 1000000000, 3};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> A = {0, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> A = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 800000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 23611112;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> A = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 800000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 25098039;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> A = {100000000, 100000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000001;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> A = {10};
    int P = 0;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> A = {-1000000000, -1000000000, -1000000000, 0, 0, 0, 0};
    int P = 6;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> A = {-1000000000};
    int P = 50;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 101;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> A = {0};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000001;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> A = {0, 0, 0, 0, 0, 100, 101, 101, 101, 101, 101, 201};
    int P = 606;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> A = {1000000000};
    int P = 123456789;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 246913579;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> A = {965, -938, -396, -142, 926, 31, -720, 3, 2, 1, 4, 133, -32222, 1, 33222, 123134, 13434, 333, 3333, 333, 3333, 33333333, 33, 333, 33, 333, 3, 3, 3, 3, 3, 3};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 62430858;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> A = {1, 2, 12};
    int P = 12;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
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
    vector<int> A = {1000000000, -1000000000, 213, 213, 43, 5, 43, 1, 123, 1, 2, 21342, 2345, 234, 321, 21, 312, 3, 123, 12, 3, 5, 46, 54, 6, 546, 54};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> A = {-1000000000, 0, 0, 4, 6, 7, 7, 1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9, 9};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 40000000;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> A = {9840989, 100000, 1000000000, 938728373, 92839237, 84978975, 9589894, 94889858, 40959485, 984948598, 9458948, 984, 98, 94, 1, 99999, 9283928};
    int P = 99999999;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> A = {965, -938, -396, -142, 926, 31, -720, -1000000000, 1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> A = {-693};
    int P = 1265;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 2531;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> A = {0, 1, 2, 3, 4, 5, 6};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 285714285;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> A = {1000000000, -1000000000};
    int P = 1000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> A = {1000000000, 1000000000, 1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, 0};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> A = {-1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 153846153;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 15, 16, 17, 18, 19};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 100000000;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> A = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40};
    int P = 999999999;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 50000000;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> A = {100000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000001;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> A = {100000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 4257247;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> A = {1, 1000000000, -1000000000, 1000000000, -1000000000, 0};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> A = {1000000000, 999999995, 999999990, 999999985};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 500000000;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> A = {-1000000000};
    int P = 0;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> A = {129038, -938234, 34234534, -1424533, 5543534, 3134953, -453435};
    int P = 100000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 22890521;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> A = {-1000000000, -1000000000, -1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 666666667;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> A = {10, 10, 10, 10};
    int P = 15;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> A = {1, 2, 3};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 666666667;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> A = {0, 0, 0};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 666666667;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> A = {11, 11, 11, 11};
    int P = 1;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> A = {-1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 0, 0, 0, 0, 0, 0, 0};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> A = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int P = 999999999;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 49999999;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> A = {9999999, 9999999, 9999999, 9999999, 9999999, 9999999, 9999999, 9999999, 9999999, 9999999, 9999999, 9999999, 9999999, 9999999, 9999999, 9999999, -99999, -99999, -99999, -99999, -99999, -99999, -99999, -99999, -99999, -99999, -99999, -99999, -99999, -99999, -99999, -99999, -99999, -99999, -99999, -99999, -99999, -99999};
    int P = 999999999;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 52631579;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> A = {1000000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> A = {10};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 2000000001;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> A = {1, 1, 1};
    int P = 0;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> A = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 200000001;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> A = {965, -938, -396, -142, 926, 31, -720};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 285714286;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> A = {1000000000, 1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000001;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> A = {1000000000, -1000000000, 1000000000, -1000000000, -1000000000, 264926482, -372692382, 276849372, 286743964, -573829253, 0, 0, 0, 0, 0};
    int P = 1;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> A = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 40000000;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> A = {1000000000, -1000000000, 1000000000, -1000000000, 1000000000, -1000000000, 1000000000, 1000000000, 1000000000, -1000000000, -1000000000, 1000000000, 1000000000, -1000000000, -1000000000, -1000000000, -1000000000, 1000000000, 1000000000, 500000000, -500000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> A = {1000000000, 1000000000, 1000000000, 0, 0, 0};
    int P = 0;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> A = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 100000001;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> A = {1000000000, -1000000000, 1000000000, -1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, -1000000000, -1000000000, 8392, 93283, 893283, -892829, 898988899, 892382};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> A = {2, 2, 2};
    int P = 8;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> A = {0, 0, 0, 0};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 500000001;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> A = {1, 2, 3, -1000000000, 1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> A = {-1000000000, 1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, 1000000000, -1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> A = {-1000000000, -1000000000, -1000000000, 0, 1231212};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> A = {0, 1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000001;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> A = {0, 1000000000, 1000000000, 1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> A = {-1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 40000001;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> A = {0, -1000000000, 1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> A = {-100000000};
    int P = 1000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 2001;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> A = {0, 1, 1, 2, 2, 3};
    int P = 6495;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 2166;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> A = {0, 0, 0, 0};
    int P = 1;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> A = {1000000000, 1000000000, 1000000000};
    int P = 0;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> A = {1000000000, -1000000000, -999999999, -888888888, 926, 31, -720};
    int P = 6495;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> A = {1, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    int P = 1000000000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> A = {-999999999, -900999000, 999999999, 10, 50, 20, 60, 45345, 2345234, 234534, 43424, 434, 2342, 423423, 23423, 234, 23, 23432, 343, 23, 23, 232, 232, 232, 232, 232, 232, 232, 232, 232, 232, 232, 232, 2323, 232, 232};
    int P = 100000;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> A = {-1000000000, 1000000000, 1000000000, 0, 0, -1, 1, 1000000000, 1000000000, 999999999, -999999999, -999999999, 999999999, 999999999, 999999999, 999999999, 999999999};
    int P = 999999999;
    ModularInequality* pObj = new ModularInequality();
    clock_t start = clock();
    int result = pObj->countSolutions(A, P);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8355516&rd=10005&pm=6765
********************************************************************************
// my submission accuracy is quite low recently, don't be afraid to challenge me 
 
#include <algorithm> 
#include <vector> 
using namespace std; 
 
typedef long long ll; 
typedef vector<int> vi; 
 
#define LS < 
#define Size(x) (int(x.size())) 
#define LET(k,val) typeof(val) k = (val) 
// execute "act", and return "val" as an expression result 
#define CLC(act,val) (*({act; static typeof(val) CLCR; CLCR = (val); &CLCR;})) 
 
// All macros with parameters "k,a,b" run the "k" variable in range [a,b) 
#define FOR(k,a,b) for(typeof(a) k=(a); k LS (b); ++k) 
 
// find the first k in [a,b) that satisfies cond, or b if none 
// using binary search 
#define BINFIRST(k,a,b,cond)          \ 
  CLC(                                \ 
    LET(k##mIn, a); LET(k##mAx, b);   \ 
    while(k##mIn != k##mAx) {         \ 
      LET(k, (k##mIn>>1)+(k##mAx>>1)+ \ 
      (((k##mIn&1)+(k##mAx&1))>>1)    \ 
      ); \ 
      if(cond) k##mAx = k;            \ 
      else k##mIn = k+1;              \ 
      },                              \ 
    k##mIn                            \ 
    )                                  
 
#line 3 "ModularInequality.cc" 
 
int gP; 
 
vi gA; 
 
int min, max; 
 
bool good(int v) { 
  ll sum = 0; 
  FOR(s,0,Size(gA)) sum += v > gA[s] ? v-gA[s] : gA[s]-v; 
  return sum <= gP; 
  } 
 
class ModularInequality { 
  public: 
  int countSolutions(vector <int> A, int P) { 
    // !FDI 
    sort(A.begin(), A.end()); 
    gA = A; gP = P; 
    int val = A[Size(A)/2]; 
    if(!good(val)) return 0; 
    return 
      BINFIRST(v, val, A[Size(A)-1]+P+10, !good(v)) 
    - BINFIRST(v, A[0]-P-10, val, good(v)); 
    } 
  }; 
 
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/