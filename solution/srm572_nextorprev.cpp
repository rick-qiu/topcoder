/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12454
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

class NextOrPrev {
public:
    int getMinimum(int nextCost, int prevCost, string start, string goal);
};

int NextOrPrev::getMinimum(int nextCost, int prevCost, string start, string goal) {
    int ret;
    return ret;
}


int test0() {
    int nextCost = 5;
    int prevCost = 8;
    string start = "ae";
    string goal = "bc";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int nextCost = 5;
    int prevCost = 8;
    string start = "ae";
    string goal = "cb";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int nextCost = 1;
    int prevCost = 1;
    string start = "srm";
    string goal = "srm";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
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
    int nextCost = 10;
    int prevCost = 1;
    string start = "acb";
    string goal = "bdc";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int nextCost = 10;
    int prevCost = 1;
    string start = "zyxw";
    string goal = "vuts";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int nextCost = 1000;
    int prevCost = 1000;
    string start = "abcdefghijklmnopqrstuvwxyz";
    string goal = "abcdefghijklmnopqrstuvwxyz";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int nextCost = 1000;
    int prevCost = 1000;
    string start = "abcdefghijklm";
    string goal = "nopqrstuvwxyz";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 169000;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int nextCost = 1000;
    int prevCost = 1000;
    string start = "nopqrstuvwxyz";
    string goal = "abcdefghijklm";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 169000;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int nextCost = 150;
    int prevCost = 328;
    string start = "c";
    string goal = "j";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1050;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int nextCost = 189;
    int prevCost = 105;
    string start = "hj";
    string goal = "fu";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 2289;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int nextCost = 676;
    int prevCost = 594;
    string start = "zq";
    string goal = "bv";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
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
    int nextCost = 137;
    int prevCost = 80;
    string start = "np";
    string goal = "va";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
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
    int nextCost = 217;
    int prevCost = 14;
    string start = "pzm";
    string goal = "uya";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1267;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int nextCost = 607;
    int prevCost = 663;
    string start = "ogw";
    string goal = "pce";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
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
    int nextCost = 242;
    int prevCost = 434;
    string start = "kvq";
    string goal = "lnp";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
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
    int nextCost = 879;
    int prevCost = 940;
    string start = "hetu";
    string goal = "dcgo";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 23500;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int nextCost = 42;
    int prevCost = 440;
    string start = "oria";
    string goal = "uwst";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
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
    int nextCost = 417;
    int prevCost = 149;
    string start = "djvkh";
    string goal = "akysg";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 5600;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int nextCost = 976;
    int prevCost = 588;
    string start = "ypubd";
    string goal = "tqpai";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int nextCost = 494;
    int prevCost = 615;
    string start = "gimjhx";
    string goal = "afqkbt";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 14155;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int nextCost = 210;
    int prevCost = 438;
    string start = "bipgzoy";
    string goal = "alsbzpt";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 6288;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int nextCost = 586;
    int prevCost = 935;
    string start = "ilwjdpfn";
    string goal = "emxgaubs";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 20122;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int nextCost = 359;
    int prevCost = 525;
    string start = "sueqyxthl";
    string goal = "orbntspdf";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 19425;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int nextCost = 273;
    int prevCost = 578;
    string start = "ufagnqxeso";
    string goal = "tfbjmrxesp";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 2794;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int nextCost = 156;
    int prevCost = 106;
    string start = "knpucjavzef";
    string goal = "qruvhpeyzln";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 7644;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int nextCost = 582;
    int prevCost = 48;
    string start = "sadebkfnotx";
    string goal = "tbhigqnsuvx";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int nextCost = 563;
    int prevCost = 440;
    string start = "ptrbgcnlaizo";
    string goal = "rtscedkiahul";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 10295;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int nextCost = 126;
    int prevCost = 311;
    string start = "yovlkwpjgsna";
    string goal = "zpwnkytjisob";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int nextCost = 920;
    int prevCost = 627;
    string start = "ikxunovswelrt";
    string goal = "ghyvknwrxbjos";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 15593;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int nextCost = 193;
    int prevCost = 494;
    string start = "mxltredcabswv";
    string goal = "ozmsqlkhbirut";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int nextCost = 884;
    int prevCost = 512;
    string start = "nufaseixrzbqh";
    string goal = "deifukhtxcanb";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int nextCost = 235;
    int prevCost = 986;
    string start = "ykesljtouvbfic";
    string goal = "ypjtrouswxbmni";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 11515;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int nextCost = 907;
    int prevCost = 213;
    string start = "tlqxpyswvfhmkb";
    string goal = "rknymzpwvbflhc";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int nextCost = 520;
    int prevCost = 88;
    string start = "nslqpfvwmkrcgb";
    string goal = "kxgcrhznyovwep";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int nextCost = 398;
    int prevCost = 548;
    string start = "noaixgtydurkcvq";
    string goal = "lmbhxgszetpjdun";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 9264;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int nextCost = 768;
    int prevCost = 666;
    string start = "faugpikqnodxvbzy";
    string goal = "gbshoijrmnevudzw";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 12702;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int nextCost = 27;
    int prevCost = 314;
    string start = "rxswhmdiyvfeoatpb";
    string goal = "qwrvhjdiztfekbsnc";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 5105;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int nextCost = 743;
    int prevCost = 756;
    string start = "lvnbxeqpodizwshkcf";
    string goal = "kulawdpnmcgzvqfhbe";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 18900;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int nextCost = 123;
    int prevCost = 367;
    string start = "cuqypviwjterxzbogdn";
    string goal = "ernxmsivjqgpwyblhfk";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 10770;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int nextCost = 731;
    int prevCost = 657;
    string start = "vwmgosyetihqkrlapxfd";
    string goal = "wxniotzeukjqlrmbpyhc";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 13815;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int nextCost = 42;
    int prevCost = 267;
    string start = "lcxpvsuhoqejimfytkgzb";
    string goal = "lbwpvruhoqdjinfyskgza";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1644;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int nextCost = 886;
    int prevCost = 199;
    string start = "jyvlqpwbifagxsuzkmtcn";
    string goal = "jxumqovdhfcgwrtyknsep";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int nextCost = 279;
    int prevCost = 449;
    string start = "sfugtrekbzaxypwijlhmcn";
    string goal = "retfsqdkbzavwouhjlgmcn";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 7184;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int nextCost = 80;
    int prevCost = 760;
    string start = "nywurdavxcfthkozbegilm";
    string goal = "nywspdatxcgqjkozbehilm";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int nextCost = 652;
    int prevCost = 855;
    string start = "umrzwesxjotcpqgkiynfla";
    string goal = "tvqkicabjesmopwlfxhdrz";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int nextCost = 36;
    int prevCost = 729;
    string start = "xfjkimhprtbcnudzywegsvq";
    string goal = "xfkljniprtacoudzywegsvq";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 945;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int nextCost = 96;
    int prevCost = 626;
    string start = "zdohrxqgklvutpsmayniefw";
    string goal = "zbohrxpgjkvutqslaynicfw";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int nextCost = 816;
    int prevCost = 305;
    string start = "pwolgbicnytfaumqzjrsvekd";
    string goal = "qxpmibjcoyugavnrzkstweld";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 14688;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int nextCost = 177;
    int prevCost = 675;
    string start = "altzrmbidjnkhevqofwsucxp";
    string goal = "aktzrlbheinjgdwqofxsucyp";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int nextCost = 607;
    int prevCost = 12;
    string start = "mgsdalrxqypiuvtzfocbkhnj";
    string goal = "uwxeqrpmcdslkbhayzgfjvot";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int nextCost = 87;
    int prevCost = 958;
    string start = "kmrjqsatfudhxognypcvbeiwl";
    string goal = "kmrjqtaufvdhyognzpcwbeixl";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 609;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int nextCost = 106;
    int prevCost = 886;
    string start = "qxmfedgojlurcwptyniakshvb";
    string goal = "qxmfedgojlvrcyptzniakshwb";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int nextCost = 845;
    int prevCost = 299;
    string start = "pavknqfozxmydglehirtjcuwsb";
    string goal = "pavknqfozxmydglehirtjcuwsb";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int nextCost = 899;
    int prevCost = 293;
    string start = "iqyopksawrhlxtceumdfgvnzbj";
    string goal = "iqyopksawrhlxtbeumdfgvnzcj";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int nextCost = 696;
    int prevCost = 39;
    string start = "qfhobpxvjntureigkzalscmdwy";
    string goal = "qmhxbpuljgkoreintvazscfdwy";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int nextCost = 12;
    int prevCost = 56;
    string start = "wvu";
    string goal = "xyz";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int nextCost = 1;
    int prevCost = 1;
    string start = "ab";
    string goal = "ba";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int nextCost = 10;
    int prevCost = 10;
    string start = "hm";
    string goal = "mh";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int nextCost = 1;
    int prevCost = 2;
    string start = "abc";
    string goal = "xyz";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 69;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int nextCost = 4;
    int prevCost = 2;
    string start = "abc";
    string goal = "abc";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int nextCost = 1;
    int prevCost = 1;
    string start = "ab";
    string goal = "de";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int nextCost = 1000;
    int prevCost = 1;
    string start = "aeiou";
    string goal = "bcjzv";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int nextCost = 1;
    int prevCost = 1;
    string start = "ab";
    string goal = "ac";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int nextCost = 999;
    int prevCost = 998;
    string start = "abcdefghijklmnopqrstuvwxyz";
    string goal = "bcdefghijklmnopqrstuvwxyza";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int nextCost = 10;
    int prevCost = 10;
    string start = "ac";
    string goal = "eg";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 80;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int nextCost = 5;
    int prevCost = 10;
    string start = "bc";
    string goal = "da";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int nextCost = 5;
    int prevCost = 8;
    string start = "ab";
    string goal = "dc";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int nextCost = 1000;
    int prevCost = 1000;
    string start = "zxcvbnmas";
    string goal = "xcvbnmasr";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int nextCost = 1;
    int prevCost = 1;
    string start = "ah";
    string goal = "ha";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int nextCost = 1000;
    int prevCost = 1;
    string start = "ab";
    string goal = "yz";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 48000;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int nextCost = 1000;
    int prevCost = 1000;
    string start = "zywx";
    string goal = "vust";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 16000;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int nextCost = 1;
    int prevCost = 1;
    string start = "ab";
    string goal = "dc";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
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
    int nextCost = 1;
    int prevCost = 1;
    string start = "ba";
    string goal = "cd";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int nextCost = 3;
    int prevCost = 4;
    string start = "ab";
    string goal = "dc";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int nextCost = 2;
    int prevCost = 2;
    string start = "ac";
    string goal = "cd";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int nextCost = 7;
    int prevCost = 15;
    string start = "ab";
    string goal = "dc";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int nextCost = 123;
    int prevCost = 123;
    string start = "ab";
    string goal = "cf";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 738;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int nextCost = 1;
    int prevCost = 1;
    string start = "sq";
    string goal = "qs";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int nextCost = 10;
    int prevCost = 100;
    string start = "db";
    string goal = "ac";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
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
    int nextCost = 5;
    int prevCost = 8;
    string start = "abc";
    string goal = "def";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 45;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int nextCost = 10;
    int prevCost = 12;
    string start = "ac";
    string goal = "ef";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 70;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int nextCost = 10;
    int prevCost = 5;
    string start = "ab";
    string goal = "dc";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int nextCost = 2;
    int prevCost = 2;
    string start = "ba";
    string goal = "ca";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
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
    int nextCost = 1;
    int prevCost = 1;
    string start = "zb";
    string goal = "ya";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int nextCost = 1000;
    int prevCost = 1000;
    string start = "abcdefghijklz";
    string goal = "mnopqrstuvwxy";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 145000;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int nextCost = 5;
    int prevCost = 10;
    string start = "ab";
    string goal = "zc";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
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
    int nextCost = 2;
    int prevCost = 3;
    string start = "ab";
    string goal = "zy";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int nextCost = 100;
    int prevCost = 250;
    string start = "cdef";
    string goal = "bacd";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int nextCost = 1;
    int prevCost = 1;
    string start = "d";
    string goal = "e";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int nextCost = 1;
    int prevCost = 1;
    string start = "zy";
    string goal = "wx";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int nextCost = 5;
    int prevCost = 10;
    string start = "dc";
    string goal = "ac";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int nextCost = 1;
    int prevCost = 999;
    string start = "b";
    string goal = "a";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int nextCost = 1;
    int prevCost = 1;
    string start = "ac";
    string goal = "zb";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int nextCost = 25;
    int prevCost = 15;
    string start = "ac";
    string goal = "de";
    NextOrPrev* pObj = new NextOrPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 125;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=23141403&rd=15492&pm=12454
********************************************************************************
#include<vector>
#include<string>
#include<algorithm>
using namespace std;
 
class NextOrPrev{
  public:
  int getMinimum(int ne,int pr,string st,string go){
    int i,j,k,n;
    n=st.length();
    for(i=0;i<n;i++)
      for(j=0;j<n;j++)
        if((st[i]<st[j] && go[i]>go[j]) || (st[i]>st[j] && go[i]<go[j]))
          return -1;
    int ans=0;
    for(i=0;i<n;i++)
      if(st[i]<go[i])ans+=(((int)go[i])-((int)st[i]))*ne;
      else ans+=(((int)st[i])-((int)go[i]))*pr;
    return ans;
  }
};

********************************************************************************
*******************************************************************************/