/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=5953
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

class RobotTesting {
public:
    double estimateCommands(int N, string program);
};

double RobotTesting::estimateCommands(int N, string program) {
    double ret;
    return ret;
}


int test0() {
    int N = 2;
    string program = "L";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 1.5;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    int N = 2;
    string program = "LURD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 12501.0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    int N = 4;
    string program = "LDLDLDRRR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 3.375;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    int N = 29;
    string program = "RRULDD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 53.236623067776456;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    int N = 697;
    string program = "LLLLLDRRRRR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 3806.5179340028694;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    int N = 66;
    string program = "DLRDUDLULDDDUURLDLRULLURLUUD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 213.15197428833793;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    int N = 51;
    string program = "RLDDULRLRURRLRURUDR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 103.481353325644;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    int N = 73;
    string program = "LRURULRLDDDRLDLRDDURLURR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 266.6605366860574;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    int N = 88;
    string program = "DDLULL";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 78.43556301652892;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    int N = 73;
    string program = "UURUDUUDUDUURLRLRLRULLLDLDDUUDLDUDLDLULDLLDDRRULUR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 237.47119534621882;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    int N = 42;
    string program = "DULLLRD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 58.85997732426304;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    int N = 79;
    string program = "DUULUUDLURRULLLDRUDDURRRDU";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 275.6015061688832;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    int N = 25;
    string program = "ULLDLDUUR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 40.6224;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    int N = 88;
    string program = "DRUDUD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 174.5056818181818;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    int N = 65;
    string program = "RRLRRUDURLDULDRRURLUUUDLUURDR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 133.96686390532545;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    int N = 954;
    string program = "UDUULLLRRLLLDDLRLLLUDRRRLLRRLLDRLLLLRUU";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 2217.1923183418376;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    int N = 307;
    string program = "UDLLDDRLDLLRRRDRDRULULURDRL";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 1332.9329541958004;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    int N = 930;
    string program = "LUULLDLDUDDUUUUDLLLDRDUDDDU";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 1962.5497028558214;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    int N = 930;
    string program = "LDULRDRRRDRDRLULDULRLD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 3010.663949589548;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    int N = 670;
    string program = "DUUUULULURLLUDRLUUUURRULDRLUDLLLR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 1037.169213633326;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    int N = 1000;
    string program = "DLDDUDRUUDRLDULDURRDLDDLUURDLDRDLRL";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 2747.376861;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    int N = 327;
    string program = "LRDDDLURUDDDDLLULRURDDDDDDLLR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 486.80405689756753;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    int N = 226;
    string program = "UDDDLRRDULDRLUUDDRLDDLDRRDLLULD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 446.67125460098674;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    int N = 879;
    string program = "UURUDLDURRURRDULRDDLULDDULDLURULDUDRLLULR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 7433.544766586293;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    int N = 420;
    string program = "DRULLLRUDLRDUDU";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 3103.766150793651;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    int N = 921;
    string program = "DDRRLUDDLULULDRUDRRUUUDDUDD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 5131.5840922568;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    int N = 391;
    string program = "RRL";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 584.0051150895141;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    int N = 164;
    string program = "DRULDDDDRUDULDUDRDUDLLUDRLLURU";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 701.4128866745984;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    int N = 35;
    string program = "LDUUUURDRULLRURDDLDRRRULURURLLLRLRDDDRURLR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 127.75836734693878;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    int N = 185;
    string program = "UURDLLRLLRLRD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 1166.4306793279766;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    int N = 2;
    string program = "LULRULUDULURLUUD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 1.75;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    int N = 995;
    string program = "LDURULRU";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 1986.5040185853893;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    int N = 912;
    string program = "DDRLUDLRUUUURDULRDDRULRUDRDRUDRRDRDLDUDLUD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 3042.526143861573;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    int N = 987;
    string program = "DURULUDULRRULL";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 2041.5096199940667;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    int N = 629;
    string program = "LDURLULUDUR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 1436.0963727217352;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    int N = 683;
    string program = "DDDDLDULURURU";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 4374.342035932252;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    int N = 762;
    string program = "LRDDUUUDRDLRRDRDRD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 1141.3815556520003;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    int N = 837;
    string program = "ULRDUDLUULULUURRDRLL";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 1739.0753830100962;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    int N = 156;
    string program = "DRDLLDRRLUUDRRDLDLUDDULUDUDUDRDRUR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 535.9019559500329;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    int N = 777;
    string program = "DDLUDRDDRUDRDRLRLURLDUDRDDLUDLLDRLDURULLD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 1892.720907890792;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    int N = 40;
    string program = "DDRRLURRDDRRRDUR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 39.419375;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    int N = 232;
    string program = "RULRRLRRUDRLDLULLULLLLLRUUDULDDUURRLURLUUULLURDRDR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 684.5865598989297;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    int N = 67;
    string program = "UUDDDULLLDRLRURLLDRLLDDLLLULLDDRUD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 115.36466919135665;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    int N = 3;
    string program = "DRLRDLURLRRRDRRDULLURLRDDRLRRUDDDLLLUR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 4.444444444444445;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    int N = 36;
    string program = "URUU";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 21.88888888888889;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    int N = 868;
    string program = "RUDUDURLDRLDRUULLDLRDUDRDULUUULLRRRDDULDDRLRLLLRUR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 49540.37930833104;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    int N = 998;
    string program = "UUULDDULRRRURURLDRLRRURULLLRLUULDRDDDDDUULRLRLLDDD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 49301.256425677006;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    int N = 491;
    string program = "ULLDRUDDRLDDLRLRRRLDLUDLURRURRUDULURUDRLUDLDLUDULR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 48987.1460629415;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    int N = 791;
    string program = "LURDRUDLRLUUDUUURLDRDLURDULUDRLRDLLURLRDLDLLDDURRR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 49432.92975014425;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    int N = 780;
    string program = "ULRLUUDUURUULRRLLUDLDDDRDDRLRDLDLRDRUURLRLLDLUURDR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 49233.20014464168;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    int N = 459;
    string program = "LDUUURDULRUULLDLULDDURLRDDRDDRLURRLDDLURLRULRRUDRL";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 48809.22748135807;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    int N = 363;
    string program = "RLRDRDUULDDRLDDDRRDRLDLLLLRRUUUULURRDDRUULLULURLDU";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 48360.84063778279;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    int N = 432;
    string program = "URUDRLDDRDLURDDLLLLUULRRRDRLDUURLLDULLRUDRUUDDRLUR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 48849.5269633059;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    int N = 448;
    string program = "DURULLRDRRDRRLDDUUUDLURDULURLRDDLLRRLLUULULLDUDDRR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 48780.16229870855;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    int N = 213;
    string program = "RUDLDRUULLLRURLDLLLDRRLDRRDURUDULLUDRDLUDRURUDLDUR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 47909.855716458376;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    int N = 464;
    string program = "RLURLLULDUDRDLUULLURRDRDDURRUULUDRRDLUURLRDLDDLLDR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 48928.29982907254;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    int N = 194;
    string program = "DLDRLRLDRLDRLUUDLUDRRRDULLRUUDDUDDURUULURRLRRLLLUD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 47456.903682644275;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    int N = 115;
    string program = "RURLDRLUUDLLDDRUURLDRDRULRRUDUUDURLDLLURLDDLLDULRR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 46156.28234404537;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    int N = 590;
    string program = "RLULRLLUUDDDURRRULDRLLRRLDUUDRUDRLDDLDLLRUUDLRURUD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 49240.39514507326;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    int N = 100;
    string program = "LRUUDRRDLLRDLUDRRDUUDRULLRUUDLRRRLRLDUDRLUDULLDDLU";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 45601.025700000006;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    int N = 269;
    string program = "RULDLRRLRLRRUDRDRRLDRDDLDDLULDUDULLDRUULUUUDRULLUR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 47613.40326971711;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    int N = 138;
    string program = "LRDLRLUURDULURLRRDLLUULRRLRUDLUUURDDRRLDRDULDDLDUD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 46089.54673387944;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    int N = 303;
    string program = "RUDDRLLLUURURULDDRRDLRURURRUUULDLUDLLRDDDLLUDLRRDL";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 48040.000152490495;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    int N = 722;
    string program = "ULULLRRRLLLRRDRUDLDRDDUULULLUURRRDLUUDDLLRDRUDUDDR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 49378.63026104773;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    int N = 178;
    string program = "UDLDLLDLRLUURURUDRLLUDRRDDRUDDLLURRUULLRDRDDRLLUUR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 47503.9954551193;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    int N = 1000;
    string program = "LRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 24499.9765;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    int N = 1000;
    string program = "LR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 49950.001;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    int N = 1000;
    string program = "UD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 49950.001;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    int N = 999;
    string program = "UDLR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 49899.9540010481;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    int N = 997;
    string program = "ULRD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 49899.75240566232;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    int N = 1000;
    string program = "LLLLLLLLLLLLLLLLLLLLLLLLDRRRRRRRRRRRRRRRRRRRRRRRRR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 16079.5706;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    int N = 2;
    string program = "LRR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 2.0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    int N = 4;
    string program = "LRRUDDD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 4.5625;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    int N = 3;
    string program = "LRR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 3.3333333333333335;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    int N = 3;
    string program = "UDDLLL";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 3.0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    int N = 1000;
    string program = "LLLLLLLLLLLLLLLLLLLLLLLLRRRRRRRRRRRRRRRRRRRRRRRRRD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 16090.989800000001;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    int N = 1000;
    string program = "LLLLLLLLLLLLLLLLLLLLLLLLRRRRRRRRRRRRRRRRRRRRRRRRD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 23936.212;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    int N = 1000;
    string program = "LDLDLDLDLDRDRDRDRDRDRURURURURULULULULULU";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 49005.25817;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    int N = 1000;
    string program = "LLLLLLLLLLLLLLLLLLLLLLLLDRRRRRRRRRRRRRRRRRRRRRRRRD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 12212.5;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    int N = 1000;
    string program = "LRU";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 1499.9995;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    int N = 999;
    string program = "LRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRL";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 24452.0;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    int N = 1000;
    string program = "LR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 49950.001;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    int N = 1000;
    string program = "LRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLRLR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 49950.001;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    int N = 998;
    string program = "LURDLDLDLLURUDURDDUDURUDUDDLLLRUDURDRDDDD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 3210.500032128385;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    int N = 1000;
    string program = "RDULRDULDRULDRULDRUULDRLURDULDRLUDRULDRULDRULDRLU";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 24422.085469;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    int N = 1000;
    string program = "UDLRUDLRRRRRRUDDDLLL";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 3312.881525;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    int N = 997;
    string program = "LLLRRRLLLRRRRLLLLRRRLRLRRLRLLRUUUDDDUDUUDUDDUDUDUD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 49649.66541651031;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    int N = 1000;
    string program = "LLLLLDRRRRR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 5473.0125;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    int N = 1000;
    string program = "LRRLUDDU";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 49800.21597600001;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    int N = 1000;
    string program = "URDL";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 49900.05299800001;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    int N = 1000;
    string program = "ULDR";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 49900.05299800001;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    int N = 1000;
    string program = "LDRULDRULDRULDRULDRULDRULDRULDRULDRULDRULDRULDRU";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 49900.05299800001;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    int N = 1000;
    string program = "LRUUUUUUUUUUUUUUUUUUUUDDDDDDDDDDDDDDDDDDDDLRD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 21609.6697;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    int N = 1000;
    string program = "UD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 49950.001;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    int N = 1000;
    string program = "ULDRU";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 2496.003499;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    int N = 1000;
    string program = "LLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLLL";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 500.5;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    int N = 1000;
    string program = "RRRRRRRRRRRRLLLLLLLLLLLLUUUUUUUUUUUUDDDDDDDDDDDDD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 23652.896800000002;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    int N = 1000;
    string program = "LD";
    RobotTesting* pObj = new RobotTesting();
    clock_t start = clock();
    double result = pObj->estimateCommands(N, program);
    clock_t end = clock();
    delete pObj;
    double expected = 667.1665;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15635535&rd=8082&pm=5953
********************************************************************************
#include <string>
#include <cstring>
using namespace std;
#define S program
int l,n;
char s[128];
int mm[1024][1024];
int dfs(int x0,int y0)
{
  int i,x=x0,y=y0;
  if(mm[x][y]>=0)return mm[x][y];
  for(i=0;i<l;i++)
  {
    switch(s[i])
    {
    case 'U':y--;break;
    case 'D':y++;break;
    case 'L':x--;break;
    case 'R':x++;break;
    }
    if(x<0||x>=n||y<0||y>=n)return mm[x0][y0]=i+1;
  }
  if(x==x0&&y==y0)return mm[x0][y0]=50000;
  int d=l+dfs(x,y);
  if(d>50000)d=50000;
  return mm[x0][y0]=d;
}
struct RobotTesting{
double estimateCommands(int N, string program)
{
  int i,j;
  double tot;
  l=S.length();strcpy(s,S.c_str());n=N;
  memset(mm,255,sizeof(mm));
  tot=0;
  for(i=0;i<N;i++)
    for(j=0;j<N;j++)
      tot+=dfs(i,j);
  return tot/N/N;
}
};

********************************************************************************
*******************************************************************************/