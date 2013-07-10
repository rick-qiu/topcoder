/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=12374
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

class NextAndPrev {
public:
    int getMinimum(int nextCost, int prevCost, string start, string goal);
};

int NextAndPrev::getMinimum(int nextCost, int prevCost, string start, string goal) {
    int ret;
    return ret;
}


int test0() {
    int nextCost = 5;
    int prevCost = 8;
    string start = "aeaae";
    string goal = "bcbbc";
    NextAndPrev* pObj = new NextAndPrev();
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
    string start = "aeaae";
    string goal = "bccbc";
    NextAndPrev* pObj = new NextAndPrev();
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
    NextAndPrev* pObj = new NextAndPrev();
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
    int nextCost = 1000;
    int prevCost = 39;
    string start = "a";
    string goal = "b";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 975;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int nextCost = 123;
    int prevCost = 456;
    string start = "pqrs";
    string goal = "abab";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int nextCost = 100;
    int prevCost = 19;
    string start = "topcoder";
    string goal = "ssszsffs";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 676;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int nextCost = 7;
    int prevCost = 6;
    string start = "qwerty";
    string goal = "jjjjjj";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 125;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int nextCost = 1;
    int prevCost = 1000;
    string start = "csk";
    string goal = "wog";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 64;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int nextCost = 1000;
    int prevCost = 1000;
    string start = "abcdefghijklmnopqrstuvwxyz";
    string goal = "abcdefghijklmnopqrstuvwyxz";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int nextCost = 1000;
    int prevCost = 1000;
    string start = "abcdefghijklmnopqrstuvwxy";
    string goal = "nopqrstuvwxyzabcdefghijkl";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 325000;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int nextCost = 150;
    int prevCost = 328;
    string start = "abcdefghijklmnopqrstuvwxyz";
    string goal = "abcdefghijklmnopqrstuvwxyz";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int nextCost = 150;
    int prevCost = 328;
    string start = "tkjrdvuhggaovymbpawncstuqrfxlxdvciksxvpmqtpfbwezms";
    string goal = "tkjrdvuhggaovymbpawncstuqrfxlxdvciksxvpmqtpfbwezms";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int nextCost = 150;
    int prevCost = 328;
    string start = "abcdefghijklmnopqrstuvwxpz";
    string goal = "abcdefghijklmnopqrstuvwxpz";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int nextCost = 639;
    int prevCost = 225;
    string start = "abcdefghijklmnopqrstuvwxyz";
    string goal = "tuvwxyzabcdefghijklmnopqrs";
    NextAndPrev* pObj = new NextAndPrev();
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
    int nextCost = 639;
    int prevCost = 225;
    string start = "zpxvahrqrpoxnoogkmnedoufhjovoicyqwbqwqgkswesslvtje";
    string goal = "siqotakjkihqghhzdfgxwhnyachohbvrjpujpjzdlpxlleomcx";
    NextAndPrev* pObj = new NextAndPrev();
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
    int nextCost = 639;
    int prevCost = 225;
    string start = "abcdefgfijklmnopqrstuvwxyz";
    string goal = "tuvwxyzybcdefghijklmnopqrs";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 39375;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int nextCost = 945;
    int prevCost = 376;
    string start = "abcdefghijklmnopqrstuvwxyz";
    string goal = "bcdefghijklmnopqrstuvwxyza";
    NextAndPrev* pObj = new NextAndPrev();
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
    int nextCost = 586;
    int prevCost = 386;
    string start = "abcdefghijklmnopqrstuvwxyz";
    string goal = "zabcdefghijklmnopqrstuvwxy";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int nextCost = 946;
    int prevCost = 188;
    string start = "cdefgjlmprswzz";
    string goal = "fhjlqrstuxybcd";
    NextAndPrev* pObj = new NextAndPrev();
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
    int nextCost = 628;
    int prevCost = 955;
    string start = "rzsvlpkjzvktksgzzeohqkmxoowudidswbrztaxpofdzrchwis";
    string goal = "wfxaruqpfaqyqxmfektnvqsdttbzjojxbhwfygdutljfwinbox";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int nextCost = 386;
    int prevCost = 126;
    string start = "ensxonexrlgcwufrzbtrgmxjuxqxo";
    string goal = "xzllxsderbwadcvvppimtxtdtkffv";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int nextCost = 641;
    int prevCost = 879;
    string start = "cllcwwcipczzijccijlzwpeuwzijcyjcyqiqiziiwqueiceuzi";
    string goal = "irrapzakiinnfcttfcrnziuxpnlcascisbkbknlfpbxufiuxnf";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int nextCost = 149;
    int prevCost = 327;
    string start = "p";
    string goal = "p";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int nextCost = 208;
    int prevCost = 156;
    string start = "c";
    string goal = "k";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1664;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int nextCost = 208;
    int prevCost = 52;
    string start = "a";
    string goal = "j";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 884;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int nextCost = 162;
    int prevCost = 47;
    string start = "fp";
    string goal = "kk";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 987;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int nextCost = 163;
    int prevCost = 69;
    string start = "sf";
    string goal = "yy";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1380;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int nextCost = 31;
    int prevCost = 26;
    string start = "xi";
    string goal = "bb";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 306;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int nextCost = 33;
    int prevCost = 33;
    string start = "vh";
    string goal = "bb";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 396;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int nextCost = 48;
    int prevCost = 110;
    string start = "wh";
    string goal = "aa";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 912;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int nextCost = 43;
    int prevCost = 92;
    string start = "oa";
    string goal = "tt";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 817;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int nextCost = 55;
    int prevCost = 654;
    string start = "jgjhgjggjhhghghhggjjgjjhhjgjjghgggjhgj";
    string goal = "rzrqzrzzrqqzqzqqzzrrzrrqqrzrrzqzzzrqzr";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 4840;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int nextCost = 21;
    int prevCost = 537;
    string start = "gjjmmjmgggmjmgmjgmjgggjggjm";
    string goal = "qrryyryqqqyryqyrqyrqqqrqqry";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 630;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int nextCost = 99;
    int prevCost = 659;
    string start = "rum";
    string goal = "yul";
    NextAndPrev* pObj = new NextAndPrev();
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
    int nextCost = 953;
    int prevCost = 431;
    string start = "tdltlddddldd";
    string goal = "ixvivxxxxvxx";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int nextCost = 131;
    int prevCost = 905;
    string start = "pow";
    string goal = "xxx";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1179;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int nextCost = 115;
    int prevCost = 579;
    string start = "wrjs";
    string goal = "tttt";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 2645;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int nextCost = 506;
    int prevCost = 571;
    string start = "wgnmz";
    string goal = "nnnnn";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 8602;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int nextCost = 809;
    int prevCost = 822;
    string start = "zqeki";
    string goal = "lllll";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 13818;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int nextCost = 713;
    int prevCost = 595;
    string start = "nnoxoxvunxvxvxouxvngugnunuonnnnxgnvgvggvougvvnugvo";
    string goal = "vvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvvv";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 11885;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int nextCost = 203;
    int prevCost = 636;
    string start = "iwidrydwywyyfhyhwwrhifhfdhrr";
    string goal = "oooooooooooooooooooooooooooo";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 4669;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int nextCost = 535;
    int prevCost = 202;
    string start = "goigibbmsgbemgselbi";
    string goal = "ttttttttttttttttttt";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 4777;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int nextCost = 262;
    int prevCost = 727;
    string start = "hzrjwyvcm";
    string goal = "vvvvvvvvv";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 6550;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int nextCost = 792;
    int prevCost = 9;
    string start = "qfrxtvdney";
    string goal = "eeeeeeeeee";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 225;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int nextCost = 859;
    int prevCost = 516;
    string start = "bfgivwecyxt";
    string goal = "qqqqqqqqqqq";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 9288;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int nextCost = 33;
    int prevCost = 544;
    string start = "yrbqvprbyqqyjgpjponpmvyqxxmbjopooyyrbojmrqb";
    string goal = "qqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqqq";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 825;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int nextCost = 839;
    int prevCost = 221;
    string start = "rycdcedrfthrsytscitwkcwdyyhcrkysnk";
    string goal = "uuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuuu";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 5525;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int nextCost = 58;
    int prevCost = 788;
    string start = "qlrpvafecikbyw";
    string goal = "hhhhhhhhhhhhhh";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1450;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int nextCost = 853;
    int prevCost = 816;
    string start = "tfkquivrobhzejx";
    string goal = "ccccccccccccccc";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 18470;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int nextCost = 542;
    int prevCost = 513;
    string start = "yvajquixntmwspdf";
    string goal = "wwwwwwwwwwwwwwww";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 12089;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int nextCost = 845;
    int prevCost = 169;
    string start = "aetiycjgphnlkwmbz";
    string goal = "wwwwwwwwwwwwwwwww";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 3887;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int nextCost = 710;
    int prevCost = 235;
    string start = "nkvxexpekkqakpkbtxrcixadmyjidciv";
    string goal = "gggggggggggggggggggggggggggggggg";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 5640;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int nextCost = 920;
    int prevCost = 697;
    string start = "yuecwtktrzaykzhntqbwgwncavhdytpnhzh";
    string goal = "ooooooooooooooooooooooooooooooooooo";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 16254;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int nextCost = 413;
    int prevCost = 791;
    string start = "usjgricbktfypdnvmoq";
    string goal = "sssssssssssssssssss";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 10325;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int nextCost = 838;
    int prevCost = 333;
    string start = "zhgvaqqdyjpbwfobwiyguboxxuiecn";
    string goal = "iiiiiiiiiiiiiiiiiiiiiiiiiiiiii";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 8325;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int nextCost = 163;
    int prevCost = 607;
    string start = "oagnoyjhpmlcidbvkrzgfeu";
    string goal = "qqqqqqqqqqqqqqqqqqqqqqq";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 4075;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int nextCost = 957;
    int prevCost = 593;
    string start = "vbmyytaqhcwxojfzlsjpvgngrk";
    string goal = "mmmmmmmmmmmmmmmmmmmmmmmmmm";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 14825;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int nextCost = 236;
    int prevCost = 930;
    string start = "wdfzzgaitahicmgygfosxupptnvklavibumzsmnhq";
    string goal = "sssssssssssssssssssssssssssssssssssssssss";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 5900;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int nextCost = 817;
    int prevCost = 563;
    string start = "gdetvrqmzfcbphksaoywjuix";
    string goal = "vvvvvvvvvvvvvvvvvvvvvvvv";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 14075;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int nextCost = 650;
    int prevCost = 324;
    string start = "japmxdteywgbrclvhosqkzuin";
    string goal = "uuuuuuuuuuuuuuuuuuuuuuuuu";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 8100;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int nextCost = 480;
    int prevCost = 741;
    string start = "ncfvctvmuorurzhgkycjfkojmkwpzxdwpqslwynaseibgy";
    string goal = "yyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyyy";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 12000;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int nextCost = 270;
    int prevCost = 871;
    string start = "qhaefvcryidtzkxjgupwsnmbol";
    string goal = "yyyyyyyyyyyyyyyyyyyyyyyyyy";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 6750;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int nextCost = 605;
    int prevCost = 450;
    string start = "adylkxevgojpizrqjbmfut";
    string goal = "wwwwwwwwowowwwwwowwoww";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
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
    int nextCost = 25;
    int prevCost = 646;
    string start = "jwrjuayhcrcltsgtzhdfcbtliwjhvqramzowxxdnpev";
    string goal = "bbsbsbbbbsbbssbsbbbbbbsbbbbbsssbsbsbbbbssbs";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1575;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int nextCost = 734;
    int prevCost = 392;
    string start = "ebduxmgofrzayqlph";
    string goal = "kkkkkddddkkkkdddd";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 12936;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int nextCost = 643;
    int prevCost = 60;
    string start = "tkektrrekuajieurxjxaeiehhkcea";
    string goal = "sssssjjssssssssjsssssssssssss";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1560;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int nextCost = 816;
    int prevCost = 133;
    string start = "yycwzwjupzfuufwefvvowbecuudpe";
    string goal = "ggogggbbbgcbbcgbcggbggbobbobb";
    NextAndPrev* pObj = new NextAndPrev();
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
    int nextCost = 965;
    int prevCost = 973;
    string start = "xyjsicbmoprgflppcniarepjscijdstdarixflxtkijqsm";
    string goal = "bbfbfcbbbbbffbbbcbfbbfbfbcfffbbfbbfbfbbbbffbbb";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 22227;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int nextCost = 47;
    int prevCost = 705;
    string start = "yqx";
    string goal = "esb";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 564;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int nextCost = 689;
    int prevCost = 453;
    string start = "ehozkgqyacbdpnmltfvirjs";
    string goal = "bkkrkkkrrrrrkkkkrbrkrkr";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 12722;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int nextCost = 967;
    int prevCost = 1;
    string start = "sohzujeigusdhuxptwaoqpsntwzbrfcbtyszwlk";
    string goal = "mbbbmcbbbmmbbmmmmmbbmmmcmmbbmbbbmbmbmcc";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int nextCost = 5;
    int prevCost = 765;
    string start = "rbccjcbccrcbbjcbrccccjjbccjrbjcjccbb";
    string goal = "jwddfdwddjdwwfdwjddddffwddfjwfdfddww";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 440;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int nextCost = 783;
    int prevCost = 522;
    string start = "dohvrincximapfqgzb";
    string goal = "jwuhwuwjjuwjwjwjjj";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 36801;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int nextCost = 143;
    int prevCost = 932;
    string start = "qtaforg";
    string goal = "wwccqwg";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 4226;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int nextCost = 506;
    int prevCost = 113;
    string start = "farreafpftdolloizikpzjetrdrjatedproad";
    string goal = "jbqqjbjqjqhpkkpjbjjqbjjqqhqjbqjhqqpbh";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 7143;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int nextCost = 146;
    int prevCost = 743;
    string start = "zbmagsqwvoxue";
    string goal = "hhthivvxvthvi";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 3942;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int nextCost = 512;
    int prevCost = 913;
    string start = "fadoafagfeugslgsjnffxhisizenzdlyoqtgiqxzzstzp";
    string goal = "hzzyzhzhhhzhzyhzmyhhzjjzjzhyzzyzyyzhjyzzzzzzy";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 17988;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int nextCost = 123;
    int prevCost = 555;
    string start = "glenqo";
    string goal = "fgbgxi";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 10296;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int nextCost = 53;
    int prevCost = 851;
    string start = "xspvciwarh";
    string goal = "qgfjrwgqfr";
    NextAndPrev* pObj = new NextAndPrev();
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
    int nextCost = 923;
    int prevCost = 416;
    string start = "wcvpdyflsemluguoibjnrtx";
    string goal = "ekeelklrelrreleuqkqueek";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 48672;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int nextCost = 97;
    int prevCost = 553;
    string start = "napyjrogryqngdmjwcwxuisgjeyxgskqhmkcq";
    string goal = "xnyknyxnykyxnnwnknkkknfnnnkknfnynwnny";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 6887;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int nextCost = 616;
    int prevCost = 952;
    string start = "onbzdwateuxsmjv";
    string goal = "dzwpwnwmwmpdzzn";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 60928;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int nextCost = 588;
    int prevCost = 487;
    string start = "ukzksqepyywiqucmccvikoygemgyowo";
    string goal = "odpdmhyhppoyhordrroydhpvydvphoh";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int nextCost = 156;
    int prevCost = 669;
    string start = "baygmljozhnucteqrisdkfvw";
    string goal = "vvvhnkhnvhnnvnbnnhnvkfpv";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 18375;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int nextCost = 648;
    int prevCost = 471;
    string start = "peoysdtgkzurni";
    string goal = "sqslwpeqqpfwqq";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 46656;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int nextCost = 874;
    int prevCost = 118;
    string start = "wprvusdyrszdakpowsuvynda";
    string goal = "jzzjccqnzcqqqxzyjccjnyqq";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 12036;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int nextCost = 818;
    int prevCost = 116;
    string start = "kqzxxzcejidiycyllqkldwrxidgbzwbcdbnlgil";
    string goal = "pnnttnpqbtqttptggnpgqgnttqtpngppqpbgttg";
    NextAndPrev* pObj = new NextAndPrev();
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
    int nextCost = 632;
    int prevCost = 653;
    string start = "tykadvomigebhxzj";
    string goal = "ijaowiidaaztaioa";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 52893;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int nextCost = 36;
    int prevCost = 716;
    string start = "ojbkngxlrucdmuwb";
    string goal = "qmfmqmdoycfkocdf";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1620;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int nextCost = 552;
    int prevCost = 249;
    string start = "thqvzakpgejcwdxnyso";
    string goal = "jxijuuyixwxujwqdqii";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 20169;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int nextCost = 750;
    int prevCost = 720;
    string start = "mnlsvrhyikqsobmzxmiunohjshgyb";
    string goal = "kmcmmmfvfgmmmxkxtkfmmmfzmfcvx";
    NextAndPrev* pObj = new NextAndPrev();
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
    int nextCost = 401;
    int prevCost = 581;
    string start = "cbgfnefukhztdriayxwmbkqsvljaxop";
    string goal = "bbjjwjjyukbygyrbbbbubuxyyuubbwx";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 24641;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int nextCost = 847;
    int prevCost = 387;
    string start = "ikknmnzwzzzxnqnplylpzlignuznyxnikgmgyuupwxyxqzymxi";
    string goal = "tuuzxzqnqqqpzkzdwpwdqwttzlqzppztutxtplldnpppkqpxpt";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 49923;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int nextCost = 16;
    int prevCost = 780;
    string start = "elwgzszemaszgnzggbjehtjabstlkffjessonpwu";
    string goal = "iwfkfafiwfafkxfkkfwisbwffabwwjjwiaayxzfc";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 1584;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int nextCost = 184;
    int prevCost = 840;
    string start = "kjvfdtpxyerzgabwhoqnulcsmi";
    string goal = "ppdnnxuugngmommfowtvytnxup";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int nextCost = 49;
    int prevCost = 729;
    string start = "fwegakhlivdsypqtrubxm";
    string goal = "vwhoumjmdvgsyoquruvwm";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int nextCost = 833;
    int prevCost = 399;
    string start = "pyemqgtkzfndhrjxvswauio";
    string goal = "vimtvndrimykoyqigcpjfph";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int nextCost = 576;
    int prevCost = 426;
    string start = "ayhdcrtgpbmjzqvolufni";
    string goal = "jhrolaaqyktshzgwtbpur";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 88704;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    int nextCost = 811;
    int prevCost = 410;
    string start = "xoiwzgqblkujmerdafyvthsc";
    string goal = "ewpegoyhsrcqtkzigmgdboah";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 112729;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    int nextCost = 614;
    int prevCost = 128;
    string start = "ekqtypivfcrhlsloanucxgmiaz";
    string goal = "jcvydlnbviwmjxjthruieabnhw";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    int nextCost = 393;
    int prevCost = 645;
    string start = "zndjbgvlfcqhsauyoxeimwrkpt";
    string goal = "wjafycrhczmdoxqvkubeitnglp";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 58695;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    int nextCost = 306;
    int prevCost = 26;
    string start = "me";
    string goal = "ii";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = 572;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    int nextCost = 1;
    int prevCost = 1;
    string start = "abcdefghijklmnopqrstuvwxyz";
    string goal = "zabcdefghijklmnopqrstuvwxy";
    NextAndPrev* pObj = new NextAndPrev();
    clock_t start = clock();
    int result = pObj->getMinimum(nextCost, prevCost, start, goal);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22263204&rd=15492&pm=12374
********************************************************************************
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
 
class NextAndPrev {
public:
  int getMinimum(int, int, string, string);
};
 
int was[999], x[999], y[999];
char mp[999];
 
int NextAndPrev::getMinimum(int nextCost, int prevCost, string start, string goal) {
  if (start == goal) return 0;
  int n = start.length();
  for (char c='a';c<='z';c++) was[c] = 0;
  for (int i=0;i<n;i++) was[goal[i]] = 1;
  int ok = 0;
  for (char c='a';c<='z';c++)
    if (!was[c]) ok = 1;
  if (!ok) return -1;
  for (char c='a';c<='z';c++) mp[c] = ' ';
  for (int i=0;i<n;i++)
    if (mp[start[i]] == ' ') mp[start[i]] = goal[i]; else
    if (mp[start[i]] != goal[i]) return -1;
  vector < pair <int, int> > x;
  x.clear();
  for (char c='a';c<='z';c++)
    if (mp[c] != ' ')
      x.push_back(make_pair(c-'a', mp[c]-'a'));
  int m = x.size();
  int ans = (int)2e9;
  for (int st=0;st<m;st++) {
    int good = 1;
    for (int i=0;i<m-1;i++)
      if (x[i].second > x[i+1].second) good = 0;
    if (good) {
      for (int shift=-5;shift<=5;shift++) {
        for (int i=0;i<m;i++) x[i].second += shift*26;
        int i = 0, cur = 0;
        while (i < m) {
          int j = i;
          while (j < m && x[i].second == x[j].second) j++;
          int low = x[i].second, high = x[i].second;
          for (int k=i;k<j;k++) {
            if (x[k].first < low) low = x[k].first;
            if (x[k].first > high) high = x[k].first;
          }
          cur += (x[i].second-low)*nextCost;
          cur += (high-x[i].second)*prevCost;
          i = j;
        }
        if (cur < ans) ans = cur;
        for (int i=0;i<m;i++) x[i].second -= shift*26;
      }
    }
    x[0].first += 26;
    sort(x.begin(), x.end());
  }
  return ans > 1e9 ? -1 : ans;
}
 
 
//Powered by [KawigiEdit] 2.0!

********************************************************************************
*******************************************************************************/