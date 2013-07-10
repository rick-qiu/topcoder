/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=10664
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

class RowGame {
public:
    long score(vector<int> board, int k);
};

long RowGame::score(vector<int> board, int k) {
    long ret;
    return ret;
}


int test0() {
    vector<int> board = {2, -2, 4, 3, -10};
    int k = 3;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 21;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> board = {-6, 5};
    int k = 10;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> board = {5, -6};
    int k = 10;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 50;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> board = {10, -100, 80};
    int k = 3;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 30;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> board = {10, -100, 80};
    int k = 4;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 90;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> board = {-100, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 41999999900;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> board = {0};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> board = {-1};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> board = {1};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 400000000;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> board = {-400000000};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> board = {400000000};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 160000000000000000;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> board = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> board = {400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8000000000000000000;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> board = {-400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> board = {-400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3999999990000000000;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> board = {-400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, -400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 400000000, 399999999};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> board = {-1, 1, -2, 2, -4, 4, -8, 8, -16, 16, -32, 32, -64, 64, -128, 128, -256, 256, -512, 512, -1024, 1024, -2048, 2048, -4096, 4096, -8192, 8192, -16384, 16384, -32768, 32768, -65536, 65536, -131072, 131072, -262144, 262144, -524288, 524288, -1048576, 1048576, -2097152, 2097152, -4194304, 4194304, -8388608, 8388608, -16777216, 16777216};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 6710886383222784;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> board = {-20, 20, -40, 40, -80, 80, -160, 160, -320, 320, -640, 640, -1280, 1280, -2560, 2560, -5120, 5120, -10240, 10240, -20480, 20480, -40960, 40960, -81920, 81920, -163840, 163840, -327680, 327680, -655360, 655360, -1310720, 1310720, -2621440, 2621440, -5242880, 5242880, -10485760, 10485760, -20971520, 20971520, -41943040, 41943040, -83886080, 83886080, -167772160, 167772160, -335544320, 335544320};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 134217727664455680;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> board = {0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -400000000, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 5000000278;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> board = {2, -400000, 9, -40000000, 4000, -4, -400000, 6, 23555, 4000, 111, 2, -40000000, -40, 9, -400000, -40, -40000, 0, -400, -40, -40, 4000, 400000, 111, 7, -400000, -400000, 23555, -40, -40000000, 4000000, -4000000, 2, 400000, -400000000, 2, 400, 6, -40000, 111, -400, -40, 2131, -4000, 8, 7, 3, 2131, 4000000};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1582266693126005;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> board = {8, -4000000, -40000000, 2, -4000000, 9, -400000000, 400, 4000, 111, -40000000, 10, 40000, -400000, -400000, 40000, 2, 10, -400000000, 400000, 111, 2131, -40, 23555, -40000, 400000, -400000000, 40000000, 2131, 10, 4000, -400000000, 4, 23555, -40000, 6, -4000000, -40000, 6, -400000000, 40000000, 7, 10, 4, 2, 6, 1, 6, 400000, 1};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 14121296418452577;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> board = {-54945964, 908839, 62705995, 55120191, -336736715, 120475581, -72768326, -103351585, -263998456, -250247796, -111221170, -77205336, 59380984, 81416226, -263109899, 187092452, -168172381, -259741880, -179325231, 189771228, -24959787, -252522500, -158616334, -354364761, 12231419, 145106713, -224422733, -62538051, 246538333, -290935871, -55853583, 44108721, 109972969, -393147588, -300771087, -374247394, 379844346, 26460587, -77598979, -284154110, -371270857, -336303797, 38640554, 88110128, 145112429, -371952993, 127718932, 376940048, -231694873, 348393702};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 248543110022591703;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> board = {19270842, -161775038, -221930472, 28322234, -376367455, -366504369, 48570750, -181446696, 70983634, -281152955, -239793919, 171243172, -122596883, -376127274, -304412980, 197251928, -218414120, 145019373, 126825355, -167953148, -339954274, -209853877, 370064856, -370600664, -271926291, 79885639, 239454064, -90832597, 57617354, -331427355, -353067628, -323111803, -93202393, -174998100, 357726783, -69569848, -141502469, 258813885, -398500192, -218002483, -169822717, -238294111, -194242958, 107580400, -214421385, -98655938, -95167672, -32835505, -101120213, -115825965};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 162187315553239260;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> board = {3, -40000, 10, -4000, 12, -40000000, 13, -400000000, 15, 1, 5, -400, 5, -4, 11, -40000000, 6, -4000000, 3, 3, 2, -4, 4, 5, 13, -4000, 10, -400, 15, 1, 15, -400000, 14, 0, 8, 1, 10, -4000, 10, 0, 0, 6, 15, -4000, 8, 2, 6, 5, 13, 1};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 12732129992;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> board = {3, -40000, 10, -4000, 12, -40000000, 13, -400000000, 15, 1, 5, -400, 5, -4, 11, -40000000, 6, -4000000, 3, 3, 2, -4, 4, 5, 13, -4000, 10, -400, 15, 1, 15, -400000, 14, 0, 8, 1, 10, -4000, 10, 0, 0, 6, 15, -4000, 8, 2, 6, 5, 13, 1};
    int k = 111111;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1168575;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> board = {3, -400000000, 4, -40, 8, -400000, 3, -400000000, 9, -400000, 4, -400000, 5, 0, 2, -40000000, 4, -40, 10, -40, 11, -400000, 13, -40000000, 9, 6, 5, -40000, 5, -40000000, 0, 0, 1, -40000, 0, 1, 7, -400000, 10, -400000000, 7, 5, 3, 3, 7, -400, 13, 2, 13, -40};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 5234488705;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> board = {1, -400, 3, -4000000, 5, -40, 7, -400, 9, -4000, 11, -4000000, 13, -40000000, 15, -400000000, 17, -4000000, 19, -4000000, 21, -400000, 23, -40000000, 25, -400000000, 27, 2, 29, -4000000, 31, 2, 33, -400000, 35, 3, 37, -40000000, 39, 0, 41, 3, 43, -4000, 45, 3, 47, 5, 49, 6};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 54210655178;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> board = {1, -4000, 3, -4000, 5, 0, 7, -400000000, 9, -40000000, 11, -4000000, 13, -400000000, 15, -400, 17, -400000, 19, -400000, 21, -400000000, 23, -40000000, 25, -400000000, 27, -4000, 29, -40000000, 31, -4000000, 33, -40, 35, -40000, 37, -40, 39, -4000000, 41, -4000, 43, -400, 45, -40000, 47, -4000, 49, 3};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 15276602842;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> board = {1, -200000000, 3, -66666666, 5, -40000000, 7, -28571428, 9, -22222222, 11, -18181818, 13, -15384615, 15, -13333333, 17, -11764705, 19, -10526315, 21, -9523809, 23, -8695652, 25, -8000000, 27, -7407407, 29, -6896551, 31, -6451612, 33, -6060606, 35, -5714285, 37, -5405405, 39, -5128205, 41, -4878048, 43, -4651162, 45, -4444444, 47, -4255319, 49, -4081632};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 7611804509;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> board = {1, -133333333, 3, -133333333, 5, -133333333, 7, -133333333, 9, -133333333, 11, -133333333, 13, -133333333, 15, -133333333, 17, -133333333, 19, -133333333, 21, -133333333, 23, -133333333, 25, -133333333, 27, -133333333, 29, -133333333, 31, -133333333, 33, -133333333, 35, -133333333, 37, -133333333, 39, -133333333, 41, -133333333, 43, -133333333, 45, -133333333, 47, -133333333, 49, -133333333};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2844454024;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> board = {1, -113333333, 3, -113333333, 5, -113333333, 7, -113333333, 9, -113333333, 11, -113333333, 13, -113333333, 15, -113333333, 17, -113333333, 19, -113333333, 21, -113333333, 23, -113333333, 25, -113333333, 27, -113333333, 29, -113333333, 31, -113333333, 33, -113333333, 35, -113333333, 37, -113333333, 39, -113333333, 41, -113333333, 43, -113333333, 45, -113333333, 47, -113333333, 49, -113333333};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 5323391540;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> board = {6, 14, 5, -33301287, -138889904, -276662102, 17, 1, 12, 4, -392492963, -15754437, -284042274, -272962784, -20989941, 9, 1, 14, 16, -148138519, -72992714, -259884412, -33956158, -64398969, 18, 6, 6, -387339539, -51374280, -105311637, 18, 18, 5, 18, -385565322, -181508270, -58062888, 16, 16, 9, 14, 16, -312763119, 16, 6, 17, -397239335, -112763248, 19};
    int k = 349419753;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 18728242127;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> board = {7, -221771379, -194580718, -156070137, 12, 6, 3, -209077926, 10, 13, -286798365, -236599601, -334030091, -255803307, 4, 4, 11, 6, 1, -307029796, -312701340, -241036688, 18, 5, 1, 17, 17, -283995862, 8, 4, 9, 12, -292493953, -257516915, -382451663, 1, 2, 3, -111786687, -162718458, -21071263, -43911817, 16, -81084483, -117350141, -215706663, -11822263, -5229982, 1, 1};
    int k = 334156991;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 9333271967;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> board = {4, 10, -190143659, 9, 5, -14746777, -98946878, -397691895, -169706421, -4981279, 18, -188721888, -36616452, -172045438, 10, 3, 13, -60492411, -12373382, 11, 17, -112479371, -112022555, 3, -296932567, -68467062, -24979218, 10, 2, 4, 9, 13, -333067516, -239109117, -83464615, -197957249, 0, 19, 15, 5, -48004977, -288836093, 10, -274445162, -273917553, -175031638, -69034736, -6065232, 0, -349528272};
    int k = 346641977;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 9014193756;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> board = {8, -96328619, -75952729, -283260419, 15, -1994457, -221100111, -137436881, 1, 17, -161629098, 19, 19, 14, 5, -113132995, -103490681, 10, 2, 0, 15, 19, -72411215, -175817632, -382384390, 14, 18, 11, 14, 11, -335179667, -305056670, -75199813, -291186699, 8, 9, 9, 1, -176922798, -396329349, -20028545, -205256782, 1, 3, 18, -181401198, -38033665, 2, 9, 10};
    int k = 334496988;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 15617943787;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> board = {2, 12, -232467038, 7, -182708246, 12, 16, 4, -143115479, -101712846, -186911036, 1, 16, 17, -145094546, -224496489, -198672051, -197084351, 7, 12, 10, 13, -91623282, 3, 11, 13, -75668104, -14286164, 19, 3, 19, 9, 16, -112842409, -358641418, -182153885, -15835875, -9173720, 17, 19, 10, 1, -220443562, -288799461, 19, 16, -20905716, 19, 18, 4};
    int k = 335782048;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 17542887656;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> board = {9, -295325342, -262990385, -141858699, 6, 8, 12, 0, 6, -334515607, -37060338, -203298685, 4, 3, 6, -136437526, -386644736, -233256384, -284279219, 9, 12, -67383347, 6, -109498312, 9, 19, 2, 0, 6, -47018850, -104799673, -275474670, -35972728, 5, 17, 8, 17, 9, -98927942, -19808422, 16, 11, 9, 10, 12, -316959366, -49048015, 1, -6197791};
    int k = 386653605;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 13795646376;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> board = {11, -178709921, 6, 10, 0, -265053730, -179988509, -75999107, -42037140, 3, 8, 18, -50798265, 9, 4, 7, 6, 5, -13472239, -199782782, -293143524, -130927436, 4, 19, -144262627, -138745839, 6, 3, 4, 6, 17, -267207752, -122341757, 15, 3, 17, 0, 11, -244608154, -98852383, -204674474, 4, 7, 18, 0, 9, -392572703, -337981141, 19};
    int k = 322163471;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 10509345116;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> board = {10, -80299336, -311111180, -111591381, 18, -38971541, 14, 11, -351112740, -363137357, 3, 2, 7, 6, 18, -130907985, -9612461, 19, -144166333, -32461436, -232377981, 1, 1, 18, 18, 2, -106748258, -8557184, 3, -249724344, 1, 1, 5, 13, 7, -159594525, -176735536, 8, 9, 4, -76438431, 5, 2, 4, -195603770, 15, -138100750, -174871301, 10, 8};
    int k = 372157191;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 11034292013;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> board = {8, 13, -303814993, 8, 18, -42702570, -37777885, -201061150, -263657600, -296652292, 18, 1, -79064133, -83543359, -99967284, 0, 17, -47915796, -253650951, -42136758, 3, 2, 16, -56291401, -283251721, -45645234, -319949001, -179904013, 10, 19, -254328258, -183049230, -68697373, 13, 3, 19, 14, -27749061, -297610, 0, 18, 13, 12, 7, -390160340, -297899733, 9, -27587802, 6};
    int k = 369553649;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 12366284231;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> board = {16, 5, -199431030, 5, 0, 11, 0, 8, -276916252, -188798382, -56879479, -291169834, -234711223, 7, 13, 3, 8, 6, -16184138, 19, 17, -348027836, -206568489, -364516367, -322455189, -319995001, 3, 7, 10, 15, 7, -372327847, -28989292, -148009429, -316033016, -262235623, 11, 12, 3, 9, 17, -343089740, -267400070, -151575443, 9, 1, 19, 12, -377269059, -185240820};
    int k = 346194261;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 11623131989;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> board = {4, -81117563, -231137658, -140955268, -39953999, 11, 4, 2, -397525372, -365089941, -51231495, 3, 18, 2, 2, -141022862, -7112041, -288846810, -3564021, 14, 8, -126061871, 17, 13, 8, 4, -270705658, -161313833, -393951454, -81211958, 11, 15, -261983272, -187900088, 1, -217292790, 0, 5, 0, 16, -205459474, -326734712, -169905728, 19, 18, 15, 16, -399491814, 13};
    int k = 363507022;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 7852426456;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> board = {16, 4, -283729554, -200538279, -262913128, -53400360, -216911484, 14, 1, 18, -86586330, -125506281, -5277611, 10, -21894607, -115098645, 18, 14, -392843972, 4, 19, 4, 7, -209007598, -103021549, -140986985, -168538216, 15, 5, 2, -151524528, -279668367, -53859865, -182045613, 6, 12, 3, 17, 16, -12197784, -228772924, 11, 7, 9, 17, 15, -261907991, -269975244, -353937638, -168284207};
    int k = 303664098;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 11079187777;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> board = {3, 2, 0, -121949308, 1, 13, 8, -263161149, -68369078, -205818813, 1, 1, 17, -213363016, -234555088, -56770505, -139103183, -22975758, 11, 7, 6, -300473861, -55763381, -290487512, -136411414, -187299832, 19, -256392601, -314822993, -255614021, 1, 0, -208035490, 4, 4, 0, 17, 10, -384218659, -272072743, -276969911, 2, 5, 12, 11, 12, -298957089, -300581825, -294652057};
    int k = 390192327;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8435745325;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> board = {5, 7, 13, 5, -150606379, 6, 5, -69312436, -49523422, 17, 17, -178498106, 11, 11, 5, 0, 8, -331586198, -361874035, -316258526, -82192577, 14, 11, 16, -212462450, -23191921, -8910614, -35841696, -227557698, 16, 3, 15, 19, -5980916, -345149005, 1, 5, -62354217, -363830044, -386976425, -270531178, -153224707, 10, 14, 11, 10, 11, -52899760, -180885786};
    int k = 351928630;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 15587853333;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> board = {9, 15, -275644651, -55738650, -135281345, -375956126, 3, 4, -40843982, -211675853, -155229496, -8366316, 14, 0, -350860241, -271762234, -231957962, 9, 16, -84077202, -22981583, -285119776, -392332204, 9, 16, 0, 9, -74949457, -388414486, -228798037, -259184924, -199910352, 14, 8, 4, 17, 4, -55473745, -261792447, -111530479, 11, 12, 9, 9, 9, -4552316, -144896046, -260120113, 8, 0};
    int k = 369676046;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 10362845537;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> board = {4, 2, -45095030, -4966180, 10, 0, 17, -288824091, 17, 14, -63417233, -393063617, -36977145, 14, -59779054, -391893377, -298280195, -16953090, 17, 19, 1, 10, -27819068, -191784429, 11, 14, 13, 15, -144865044, -23303623, 12, 17, -16684517, -284365099, 7, 5, -385806928, -371716828, -132568503, -266142348, -16017608, 18, 11, -521283, -84469803, 17, 5, 4, 16};
    int k = 318811974;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 13485423332;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> board = {3, -174554562, -115784009, 18, -252296033, -395578162, -251673849, -1504695, 10, 12, 4, 1, -288235678, 14, 0, 2, 12, 15, -234178592, 1, 12, 17, 6, 8, -40985296, -25842665, -144796413, -194230249, 18, 16, 15, 14, 18, -62661085, 3, 1, 2, 16, 9, -248306136, -213000268, 0, 6, -246896851, -318682414, -331410899, 4, 9, 14, -208025567};
    int k = 328476857;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 12659771903;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> board = {2, 4, 7, -176805475, -30165572, -24616289, -143344180, 8, 0, 19, 5, -137951797, -376425571, -177606073, 0, 5, -252118070, 2, 11, 12, 12, -364226318, -256247734, 3, -232768659, -215191815, -313058733, 0, 16, 15, 8, -375606140, 11, 13, 13, 12, 7, -261362044, -235832630, 11, 12, 12, 4, -269304225, 12, 18, -233967009, -181007620, 12, -370466766};
    int k = 349714182;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 13686486587;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> board = {14, -332031279, 16, -315918272, 8, 3, 3, 5, -22330563, -67201011, -49723418, 19, 14, -395810738, -163637750, -113475395, -48887359, -348185381, 16, 18, -26291214, -33299728, 13, 5, 9, 17, -214573813, -268747635, -66597566, -49134637, 2, 11, 11, 3, 16, -230138367, -389373916, -284090921, 5, 7, 4, 18, 4, -248038640, -279215679, 4, 9, 4, 1, -122955941};
    int k = 360571440;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 12126576372;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> board = {16, -206997185, -336826696, 1, -273941020, -242041200, -260641735, -139417137, 18, 10, -214428165, -152921892, -96734901, -7907658, -228870874, 16, 5, 7, 1, -245054998, -77546089, -47026757, -90821211, -253688830, 9, -356695718, -186462018, 2, 11, 16, 8, 7, -44688359, -37664925, -41093125, 17, 14, 13, 4, -167064287, 19, 13, 1, -276529939, -270255345, -278455127, 14, 7, -173613138, -125221452};
    int k = 344140683;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8721968022;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> board = {2, 5, -16717262, 1, -288038866, -262033434, -209903591, -16633590, 2, 5, 16, -236875670, -103481304, -358308629, -68537636, -285684700, 17, 12, -206077003, 15, 18, 10, 10, -27391825, 6, 17, 10, 6, 12, -315385665, -99776537, -342672124, -51537442, 1, 6, -105932949, 16, 19, 14, 13, -300018983, -319818788, 17, 9, -8697165, -61042244, -338608727, 7, -55424267, -316215922};
    int k = 302049274;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 7318871988;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> board = {5, 16, -384476668, -235190281, -269221847, 11, 9, 11, -184957003, -221189297, 18, 14, -54283450, -223143837, 9, -129428356, -131077399, -364512177, -132665572, -168174447, 6, 17, 3, 9, -9790260, -252449636, -352614680, 9, 2, 18, -86061264, -377761361, 11, 2, 5, -220732754, -373166988, 16, 12, 9, 16, 8, -363641619, -367574450, 4, 4, 12, -194784505, -120975427};
    int k = 313174143;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 10513596503;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> board = {6, 1, 11, 18, -351129429, -172535294, -332663167, -269474278, 5, 0, -336997983, -77393470, 7, 15, 10, 3, 7, -164469107, -384879801, -374217855, -392757898, -45162818, 17, 1, 6, 0, 19, -31308903, -294892489, 16, 2, 15, 12, -201604598, 9, 3, 3, 16, -358916108, -303771392, 3, 18, 10, 19, 15, -227933240, -274286337, 8, 6};
    int k = 332753910;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 14999518316;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> board = {12, -146627166, -355829508, -179665899, 8, 2, 12, -194232701, -128991229, -175846684, -109028968, 3, 2, 14, -343123838, 11, 8, 10, 5, -124884308, -366980465, -26196555, 0, 17, 8, 5, 13, -106921456, 4, 6, 14, 19, 17, -65955995, -241585644, -107364927, 0, 15, -333448844, -327598505, -16258308, 13, 4, 6, 15, -246282913, -16585222, 2, 2, 0};
    int k = 396878258;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 16744418641;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> board = {0, 7, 18, -298313280, -118114742, 15, 11, -369133085, -382317648, -79177205, 10, 18, -28278238, -142438513, -267262889, -167937366, 17, 12, -94492271, -327819307, -151148864, 14, 9, 8, 4, -219595241, -183573813, -322314123, 8, 1, 3, 2, -176862437, -336626728, -229817213, -271354708, -264446034, 5, 1, 7, -282181553, -316525073, -333397422, -101776793, -100098885, 6, 11, -381989095, -353122907, -22379370};
    int k = 360340872;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 9461274748;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> board = {13, 4, 2, -90911698, -236908608, -19144928, 12, 16, 0, -3668229, -230947572, 13, 19, -177423953, -141405064, 17, 5, 16, -161458919, -18493541, -284067696, -250883878, 15, -160549614, -77753153, -241323666, 13, 10, 11, -47652392, -121131628, 16, 12, 13, 2, -190566446, 10, -363791971, 15, 4, 14, 12, 8, -251964863, -330969212, 6, -271113173, -66535859, 8};
    int k = 307885153;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 11793164412;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> board = {10, -207869685, -407400, 16, -32665355, 11, 14, -88595788, -270012913, -271314588, -210002407, -380562972, 12, 3, -180951739, 15, 1, 5, 6, -251025089, -34905969, -351751760, 10, 9, -43855784, -87076302, 12, 8, 16, 14, 1, -320677083, 10, 10, 12, -59576246, -394598992, -98857821, -57961861, -313597882, 10, 2, -204348142, -134773528, 16, 12, 17, 8, -74702148};
    int k = 383657787;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 14089446916;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> board = {8, 6, -222668772, 9, 12, -108215643, -262558845, -142063250, -70917963, 6, 5, 13, -264650024, -63576918, -140029701, -380660980, 17, 3, 10, -166982933, 1, 13, 16, 9, -332291022, -57950518, -348397097, -103271174, 18, 18, 14, 5, 6, -70776004, -11066308, -96405793, -325737025, -178049240, 13, -378389499, -8784034, -99474034, 4, 3, 13, -233452668, -248553312, -170260252, 17, -114725657};
    int k = 340561558;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 14294353516;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> board = {9, -68403709, -45233433, -65203610, -24842377, 10, 7, 4, 5, -301398668, -54743937, -134033126, -142682973, -32999637, 6, -96055817, 2, 12, -243363402, -111158574, -90777677, -161083364, -136000950, 11, 8, -368682394, 2, 2, 11, 14, -147626430, -48764560, -334080931, -66096076, 8, 8, -126158612, -155818338, -67433626, 18, 16, -81154047, 13, 11, 19, -127392379, 0, 15, 3};
    int k = 315673034;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 7997872535;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> board = {16, 10, -313963743, 10, 5, 0, 2, 11, -40643526, -315278561, -12929091, -270428768, 5, 8, 11, 3, 14, -355704266, -25202690, -20413647, -375355018, 3, 16, 4, 6, 13, -295654688, -161019084, -295027651, -25239642, 6, -319732571, -335835890, -131194382, -70711554, 17, 17, 19, 11, 13, -274749211, -336082019, -375732319, -258704569, 11, -137357748, 2, 4, 19};
    int k = 300707122;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 16011550153;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> board = {10, 3, 3, -102659470, -388895906, 5, 9, 12, -69622057, -207627961, -23294175, 5, 0, -91404801, -319703734, -95398984, -371944045, 15, 5, 15, 0, -219325406, 16, 2, 9, 9, -62361335, 2, 6, 10, 19, 4, -342917210, -212064822, 10, -343011226, -224151976, -20841267, 3, -88404414, -31150106, -292626308, -29827775, -240396573, 5, 15, -280477190, -127195478, -37641966, -260868409};
    int k = 319460756;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 9651148222;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> board = {15, 8, -352390342, -13285321, -40775044, 2, 6, 5, -380915136, -381026743, -149805984, -52654764, -179585033, 9, 5, 3, 10, -171224069, -202637826, -237390722, -45116277, -128930850, 12, -342554467, -60271695, -305134262, -127854733, -60953855, 9, 11, 4, 7, -43893937, 11, 13, 1, -269555920, 6, 12, 4, 8, 13, -385662678, -282183855, -315331040, 16, 18, 13, 17, -398123084};
    int k = 370770860;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 13317489861;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> board = {10, 6, 2, -38601140, 7, 8, -37445508, -5408400, -362795263, -161918436, -253142272, 13, -177612573, -38064443, -152424207, 11, 4, 12, -336264855, -42801134, -190259357, 8, 11, 7, 4, 5, -114524690, -384928681, -303662078, -293368463, -86265739, 4, 12, 5, 16, 10, -82991412, -248291168, 7, 7, 15, -317510028, 19, 7, 17, 18, -122519091, -177451250, -251187667};
    int k = 397134172;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 15875954003;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> board = {7, -355007156, -25764512, 14, -170320867, 4, 3, -300974807, -216950545, 7, 19, -295377034, 9, 12, 19, 8, -5534752, -228174515, -229707000, 6, 19, 8, -137471633, 14, 5, 3, 4, 14, -117834582, -245604067, -112742171, -286463902, 10, 16, 14, 15, -139749022, -167452658, -201865717, -229445984, 1, 6, 14, 19, 6, -243229673, -232236868, -340185480, -208488195, 16};
    int k = 340307102;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 10834072058;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> board = {3, 4, -311345799, -86763945, -24009375, -101076506, 17, -136536496, -257456041, -209549396, 12, 0, 6, 3, 9, -298682357, -299690782, 16, 5, 16, 3, -138567580, -321297378, -15792060, 14, -56951677, -92640110, -114815444, -26491642, 4, 2, 11, -240985797, 11, 13, 0, 18, 14, -379154241, -17897534, -83003770, 12, 0, 13, 8, 3, -186277323, -360226847, -194096450};
    int k = 307791529;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8535101260;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> board = {8, 1, 0, -319689265, -16723091, -123558276, 19, 8, 0, 9, -66127163, 19, 9, 0, 12, 13, -287292711, -335416655, 11, -73395741, -392328359, 10, 16, 18, 9, 7, -250361857, -126232247, -319675826, -285202918, -117800309, 12, 3, 11, -22384808, -9676603, -268700102, -245675634, 19, 14, 19, 16, 4, -260391263, -235522796, -389195539, 7, -205979271, 11};
    int k = 352545190;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 18117755866;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> board = {8, 7, -170533828, -280515028, -33408952, 1, 6, 19, -213644479, -47985466, -151218844, -109420539, 10, 17, 1, 2, -249680508, -378218795, -239308848, 6, 6, -394469159, -55056654, -86305754, 3, 13, 3, 0, 9, -361291692, -127950900, -41901033, 6, 16, 10, -373271927, -93064457, -181188571, 0, 13, 17, 17, 11, -258424871, -24018172, -181941176, 18, 18, 0};
    int k = 399662551;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 15229068977;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> board = {0, 5, -239797560, -334295485, -191134286, 19, -96729809, -135700666, -27105618, -44644642, -350622114, 11, 17, 4, -295953630, -291536757, -29017488, -77081996, -31165003, 2, 3, 13, 2, 16, -196331263, -79266765, 18, 8, 7, 15, 17, -268169079, -199219186, 7, 12, 14, 7, 14, -122369846, -320084691, -124257303, -318701109, -251867808, 5, 0, 17, 11, -166474424, -61186153, 13};
    int k = 312888106;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 6179891192;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> board = {11, -69032156, -380118915, -283355689, 11, 10, 6, -65243856, -106289532, -305348210, 10, 16, 4, -32129105, -52516834, -368406166, -97597095, 17, -370060269, -101392133, -254296828, -105932309, 19, 0, 3, -387024838, -86426367, -350692299, 0, 1, -129774610, -107636906, -60576334, 8, 12, 17, -144441891, 9, -173175020, -166118746, -223912648, 16, -85198300, -72465387, -159156555, 10, 15, 3, 13, 16};
    int k = 374284343;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 10195027755;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> board = {7, 14, 8, -185756776, -316708310, -386566583, -76365985, 2, 9, 16, 18, -220402710, -91721537, -373719567, -45368032, -23594274, 11, 0, 8, -132801612, -249094904, -81559786, 15, 15, 19, -16898112, -97476829, -177666846, -185116300, -235371076, 17, 11, 5, 13, 6, -75990487, 9, 8, 19, 10, 12, -201585108, -153568524, 2, 9, 6, -91042991, -359896968, 12, 14};
    int k = 325034034;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 14422813564;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> board = {1, 5, 18, -287903035, -294335781, -254699407, -370846312, -259105986, 8, -239648500, -222461524, -107207733, -296341438, -72824148, 18, 4, 1, 8, -357676364, -266002451, 6, -90473831, -108511413, -7323102, -345173237, 14, 14, 8, 3, -19601946, -134757572, -198705994, 18, 10, 9, 6, -283578749, -104414848, -201886738, -144049718, -194888678, 13, 16, 13, 18, 1, -349936844, -66046979, 13};
    int k = 362938785;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 11843337945;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> board = {2, 1, 2, -289768476, -188094980, -77235419, 9, 0, 3, 0, 11, -348080516, 1, 13, 9, 4, 7, -295686883, -362724619, 18, 7, -364419136, -252874058, -178920448, 0, -49296220, 14, 18, 6, 3, -113682518, -281279328, 18, 3, 16, 12, 1, -335887713, 5, -302240551, -340075177, -22407817, -358538652, 1, 15, 12, -296459363, -299898972, 2};
    int k = 345858814;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8291945753;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> board = {3, 3, 11, -330714517, -336830714, 15, 19, -207560540, -262606068, 6, 15, 17, -350155080, -34840100, -21123304, -61444941, 6, 0, 4, 13, 16, -45539910, -363452985, 10, 7, 11, 16, 10, -240542533, -115314050, -213177153, -114182188, 5, 3, -380542211, -160393900, -254626442, 9, 1, 10, 15, -185677789, 13, -89659903, -109229464, 5, 5, -359109114, -268035611, -167310947};
    int k = 360673191;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 15378449475;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> board = {2, 7, 0, 0, 8, -123182346, -55167770, -265207704, -145601945, 19, -316729581, 9, 11, -45815564, -216518167, -334420384, 8, 12, 2, -362503570, -89869643, -314240398, -363127799, -221188693, 7, 19, 10, -314872660, 8, 6, -240187145, -257763925, -175372011, 19, 10, 10, 16, 16, -209166438, -210972391, 9, -398738616, -130030393, -45951505, 18, -370654735, -231512954, -7783961, -146026745, -6489205};
    int k = 316059161;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 10368785384;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> board = {2, -267395176, 11, 3, 1, 3, -340954316, 1, -330576874, 9, 5, 18, -296589909, -247173434, -101111110, -9708538, -202776476, 5, 7, -319660982, -22482101, 3, -55347349, 1, -239638626, -104247042, -244046465, -320235535, 4, 19, 18, -167431203, 6, 2, 4, 13, -10869458, -63527350, 11, 19, 6, 9, 14, -112156770, 2, 2, 10, -186878255, -232856514, 18};
    int k = 358809445;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 6744410290;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> board = {1, 19, -320999548, -80212617, -54970492, -386911376, -63983224, 18, 5, -121793768, -208201448, -75222932, -202391751, 13, 0, 2, -37281359, -70651575, 16, 7, 3, -190259019, 10, -351556517, -186518354, -244023854, -12665821, 3, 19, 8, -63636562, 2, 1, -172060010, -265953950, 17, 11, 2, 17, -143105379, 10, 7, -188227931, -192891700, -62751103, -272461500, 2, 18, 4, 13};
    int k = 368158260;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 11143072038;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> board = {9, 7, 2, -54526549, -77471523, 3, 19, -1848159, -279891546, -338082835, -374447111, 2, 14, 0, 1, 12, -311594407, 5, 9, 9, 5, -291699960, -296765974, -208532820, -231369383, 16, 6, 16, 19, -107586320, 10, 10, 11, 13, 19, -137295802, -26610724, -123117750, 2, 16, 6, -296591800, -123320994, -290564670, 8, 11, 5, -372318313, -91354716, -371820970};
    int k = 324379483;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 14096823534;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> board = {10, 11, -229683529, -190686002, 6, 4, 3, 16, -344431942, -232986842, -215121447, 12, 9, 13, -330798774, -330727071, -246761932, -246528932, 2, -295966298, -276852596, -113072816, 1, 0, -124547794, -320942677, 17, 4, 16, 4, 7, -181077885, -7883458, -149737735, 3, 12, 5, -96274230, -81544120, -12696421, -248164230, -231573700, 7, 10, 18, 19, -172608682, -340988265, -35106606, -249765069};
    int k = 376569815;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 13011962958;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> board = {5, 10, 11, -164942654, -30348831, -62344703, -85537520, -326580357, 12, -393409012, -91188257, -50421598, 18, 10, -268821898, -344231296, 10, 6, 6, 16, -224602813, -357769990, -126144452, -139463867, -43307509, 14, 16, 16, -63863116, 11, -383876121, 15, 19, 3, 14, 2, -202016549, -356562464, -146974656, -341480415, 13, 14, 19, 7, 2, -123262487, -17379454, -68449616, -8107488, 3};
    int k = 397540517;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 15694355702;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> board = {18, -31109736, -248618311, -96547499, 9, -348138228, -60174123, -329228545, -149601703, 17, 13, -261408302, -311440885, -332484357, 13, 4, 14, -167775485, -288564773, 14, 4, 12, 0, -69653260, -153283063, 19, 10, 0, 10, -223197408, -290242656, -313915992, -133377884, 19, 10, 17, 8, 10, -360029042, -80266871, -262078760, -282198653, 1, 2, 0, 7, -59296519, -55885492, -293295034};
    int k = 347110924;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 12812601435;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> board = {4, 9, -353791894, -276440013, -360987944, -76606727, 15, -130863888, 3, 13, 10, -75729393, 14, 6, 8, -148589809, -114040926, -226605650, -54482831, 2, 0, 2, 2, -203943429, -120550043, -188391346, -346315747, -251550788, 13, 16, -65492003, -121469132, 11, 1, 3, 11, 5, -376705799, 6, 13, 19, -260724233, 0, 15, 10, 19, -21266990, -152490724, 6, 2};
    int k = 363778995;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8159951115;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> board = {8, -131493973, 2, 8, 2, -63293924, -43946128, 14, -84723349, -254296472, -328498174, 3, -97498426, 17, -65734668, -229426325, 16, 12, -229937123, -349658522, -305538150, -20783365, -78214065, 0, 18, 5, 2, 13, -353951699, -155722599, 16, 10, -339636704, 19, 0, 5, 9, 13, -67364742, -143975571, -389457445, -62705851, 13, 19, 3, 17, -3338106, -155252275, -242529017, -398160427};
    int k = 327467355;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8224615347;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> board = {15, -82410784, 7, 9, 0, -290089176, -128101802, -57478180, -115919255, 5, 18, -228539690, -363908317, -333882792, -306389046, -363931596, 3, 16, 5, -58811161, -309213254, -185785920, 14, -114191298, -85317810, -12098086, 11, 9, 5, -192668422, 18, 6, 4, -327048572, -262178115, -135576680, 13, 6, 16, 13, -128257224, -190722103, -48341775, -261769188, 19, 16, 9, 10, 17, -133880035};
    int k = 366234024;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 12478609233;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> board = {2, -198786560, -175637643, 0, 3, 8, -36131371, -324518249, 16, -27150405, -60578313, 19, -236850533, -295919867, 13, 16, -189447111, -287133468, 13, -85886089, -95731289, 19, 17, -63097068, -355946514, 18, 13, 15, -168679185, -181904909, -41629193, 0, 19, 16, 13, 6, -48711743, -383074528, 16, -9369550, -381004327, 11, 11, 13, 12, 8, -336019201, -332576820, -143477954};
    int k = 388553473;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 4977099297;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> board = {6, -374396693, 15, -241812958, -106669384, -36127382, -82763189, -81589946, 6, 10, -58285424, -265162213, 5, 11, 8, 4, -154400341, -152338170, 4, 7, -301518460, -117663989, -36810945, -99271422, -53923715, 16, 3, 13, -162873767, -138296455, -329768213, 19, 6, 13, -46534834, -346646472, -302091770, 16, 8, 5, 11, 8, -274493027, -313724624, -153826303, 8, 15, 16, 14, 10};
    int k = 323110901;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 7415984809;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> board = {0, 10, -298910468, -249622280, 6, 6, -365893107, -4412817, -20610294, -199729133, 13, 6, -333524528, 11, 15, 2, -347471409, 16, 14, -243600839, -205017481, -299601268, 6, 14, 3, 12, -365307983, 5, 16, 3, 3, 7, -347638448, -7893254, -230859609, -191239286, -212910734, 14, 1, 16, 15, -334777852, 6, 18, 16, 6, 11, -388712472, -371155791, -71683401};
    int k = 367326547;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 9252937379;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> board = {10, 0, 1, -295765656, -155816017, 2, 7, 7, -377433300, 0, 14, 0, 1, 6, -63755680, 13, 15, -275708703, -368962091, 18, 6, 5, -25363741, -203328465, -284934939, -318014299, -60998446, 13, 16, -158382451, -260439375, -147358963, 8, 7, -379985013, 14, 16, -245994181, -131187547, 6, 16, 9, 16, -62603404, 5, 16, 19, 12, 12};
    int k = 335162138;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 10697468157;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> board = {4, -271797777, 5, 3, -78116532, -82042496, -174406871, -160371715, -49211802, 9, -314975906, -33937373, -188364422, -157725820, -136140547, 18, -13894711, 0, 4, 17, 17, -318485561, -42982208, 9, 1, 12, 15, 2, -80745641, -322586301, -167937003, 15, 14, 6, 8, -213087696, 8, 17, 8, 16, -146774673, -23909341, -356919672, -244658261, -94412810, 9, 11, -243527038, -224607939, -398371998};
    int k = 381410385;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 6037056964;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> board = {5, -286895488, -55887907, 16, 1, 0, -17511630, -367849692, -189209460, 6, 19, -68279330, -270881174, 0, 7, -219550408, 1, 8, 16, 6, -159114037, 17, 16, -234415893, -116214923, -66382251, -341651604, 9, 2, 19, 6, -303370431, -100945877, 16, 6, 4, -296003270, -106514884, 13, 17, 11, 0, -9856240, -365326802, 10, 12, 17, 4, 4, -375610655};
    int k = 351544735;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 7856328439;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> board = {6, -347480550, 11, -116370147, -12819889, -320845935, -346721062, -193849042, 19, -5221019, -135237466, 15, 1, 5, -43019881, -324641262, 0, 17, 1, 12, -274554660, -284401821, 13, -134438510, -266145493, -20656969, 12, 16, 4, -326641799, 19, 15, -83319509, -29723633, -105056681, -292484670, -187908147, 17, 9, 18, -270693388, -162985844, -9419973, 5, 1, -98229447, -298330857, -168270229, -4243390, 6};
    int k = 392889273;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 6890216381;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> board = {9, -210552985, -197079342, -332410528, 9, 3, -117423600, 1, -66102056, 18, -369287547, -645007, 15, 7, 0, -222464629, 1, 8, 16, -320003577, 6, 12, 13, 13, -3390587, -11687592, 9, 4, 14, 19, 4, -127631604, -104321212, 19, 4, -237247431, -398301751, -76729986, 18, 14, 15, 2, 14, -252882922, -120848124, -344346673, -160296407, 2, 2, 10};
    int k = 313762217;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 9673658253;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> board = {0, 6, -201054711, 15, -20076228, -340821968, 4, 14, -69829168, 6, 2, -63620763, -196806740, -147648091, -72806768, 13, 4, 2, -139953018, -378378488, 6, 7, 14, -330081790, -166317205, 15, 16, -304566286, 8, 18, -305175424, 14, -390031029, -66849912, -33988803, -61473003, 11, 16, 7, -81450142, -75877094, -338960736, 12, 15, 12, 13, 0, -302858896, -217774795, 14};
    int k = 315901042;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 6759371537;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> board = {6, -354425151, -196054282, -113183760, -78372293, 11, 3, -155190965, -181834272, -87436202, -67933693, -123041129, 16, -189048349, -195867658, -51955791, 16, 12, -360495839, -182985252, 12, 12, 12, -255739657, -181597156, 7, -183897017, -86472556, -342930596, -305972041, 9, 15, 18, 1, -66875381, -186160232, -65436326, 18, 15, 17, -265951608, -375602554, 12, 16, 7, 14, 17, -58328748, -320134116};
    int k = 377272593;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 6930314852;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> board = {10, -269508593, 3, 8, -63862005, -93982195, -48383037, 2, 2, 4, -287953928, -142048475, 0, 0, 13, 2, -284671916, -139658499, -229740754, 7, 11, 10, -234545149, -101169063, -210418214, -181424295, -42138105, 10, 12, 14, 0, -37463263, -84133534, 2, 15, 4, 2, 17, -193677543, -101998058, 2, 0, 18, 19, 3, -397004008, 9, 13, 11, 13};
    int k = 363102672;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8601855644;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> board = {8, -56111483, -76514178, -302196879, -217620203, -123711222, 9, -9671005, -53929476, 13, -200844999, 8, 9, 10, -1874379, -155890397, -78673766, 13, 18, -380868196, -242916153, -94923304, 12, 7, -78763617, 13, 12, 15, -65326075, -385219945, -34520376, -73732823, -63893710, 14, 17, 2, 19, -26622773, 19, 7, 9, 18, 11, -275805578, 3, -164472037, -267380827, -10898542, -273478654, -129499606};
    int k = 304299940;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 8589005176;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> board = {1, 15, -26711152, -322892809, -68567870, -197557270, 3, 5, 12, -197005360, -301425300, -49682103, -123260248, 14, 9, 9, -68945850, -377656596, 17, 16, -113666058, 4, -302030218, -39602615, -34194786, 18, 17, -155298205, -166775945, -67224342, 10, 3, 16, 7, -269730340, -9048556, 12, 13, 19, -120391736, 13, 13, 19, 7, 8, -81708504, -51509796, 3, 16, -291361939};
    int k = 307994819;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 11133047471;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> board = {5, -302671355, -9828620, 1, 8, -198145112, -96570008, 5, 1, 3, 9, -246371209, -380083418, 5, 1, 3, 14, -210514590, -137261486, -375112700, 7, 19, -172982323, -8060377, 9, 13, 1, -130025614, -315106291, -3635210, -348440926, -364465836, 13, 16, 14, -371977006, 13, 17, 19, 0, -156725195, -99194602, 6, 18, 17, 16, 2, -71783651, -167409128, -367506343};
    int k = 392878351;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 9787087147;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> board = {11, 2, -57666413, -121284585, -359702893, 18, -146481925, -216056351, -223606952, -363343710, 19, -102506357, -307565829, -204333660, -266853982, -396592172, 7, 18, -102031145, 18, 9, -20221202, -351539850, -229510852, 7, 16, -95056379, -282133803, 10, 8, 18, -315562224, -40680378, -74187884, -293249942, -6732399, 15, 16, 12, 6, 0, -297915043, -350954062, 19, 17, 12, 16, 15, -220203148};
    int k = 381347661;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 11538419793;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> board = {8, -215070972, -204301143, -369357325, -200588437, 8, 4, 6, -53895911, 4, 17, -118112399, -362685670, 1, 1, 11, 16, -268056353, 1, -17753107, -313023402, -218278059, -208177372, -177721096, 17, 13, -183752150, -336837811, 11, -122335243, 3, 18, 8, 1, 8, -59863230, -85359095, -74490284, 11, 3, 6, 10, 18, -348032596, 17, 9, 17, 9, 4, -14762048};
    int k = 318112337;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 5186257161;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> board = {8, 0, -75913415, -322333190, -115853024, -86304002, 13, -112834008, -344189243, 5, 3, -314399995, -80718112, -206621507, -161273046, -383748015, 8, 13, 4, -173248129, -246581650, 12, -167346675, -330491719, 5, 14, 9, -330716446, -304183685, 2, 15, -250929411, 15, 7, 19, 11, -67084501, 10, 0, 17, 17, 10, -238621564, 17, 18, 11, 15, -174764286, -308327643, 400000000};
    int k = 369586489;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 38301354400000048;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> board = {12, -104228743, 10, 3, -96918543, -315904564, -265773134, 10, -86945910, 17, -46679466, -286707721, 4, -215982682, -316963505, 16, 3, -261213489, -238157415, -285493083, -291787072, -387544169, 13, 17, -315830188, -16881067, -64911845, -376147619, -196535684, 16, 12, 10, -263387997, -216057774, -343771396, -279330085, -170046629, 16, 8, 13, 18, 3, -47541151, 14, 16, 15, -133664892, -121424381, -366340386, 400000000};
    int k = 393701233;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 51053469600000002;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> board = {3, 2, -95560469, 16, -341785306, -310458617, 5, 13, 3, -386163547, -159110091, -278903250, -363056066, -179477846, 5, 6, 9, 10, 1, -124746705, -37069242, -207648816, -228712179, 15, 19, 12, -357651780, 16, 6, 5, -281831399, 19, 14, 2, 14, -257306729, -301463493, -198127881, -175547145, -192083947, 5, 17, 12, 16, -13795064, -338052023, -27621433, -183661649, 400000000};
    int k = 305869702;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 48600354800000040;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> board = {15, -375489796, 17, -133390218, -20212293, 3, 3, 2, -2589920, -327585225, -175016645, -374831021, 3, 16, -209139532, -292314255, 1, 19, -294077714, -168148809, -283083995, -27467931, 8, 3, -192149067, -20475758, 1, 18, -53048079, -3782222, -230653220, -8048788, -97863403, 15, 14, -167061587, 14, 6, 1, 15, -83917566, -347350783, 8, 4, 10, 19, -40057671, -370854454, -195803726, 400000000};
    int k = 310170103;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 42488576800000081;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> board = {13, -84172799, -368242178, -75069197, -176477723, 18, -45937319, -60556675, -254247447, 16, 7, -140048775, -280952475, -367619194, 12, 16, -70332709, -139159109, 12, 3, 10, 11, -223047293, -351038963, -54091115, -77294739, 7, 17, 6, 9, -82705875, -156713562, -33512878, -73362303, -74095056, 13, 14, 18, -144958505, -9327954, -133320995, 8, -162186336, -135832612, 15, 6, -284732622, -266980556, 400000000};
    int k = 317924919;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 62080851200000075;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> board = {3, -378498555, 7, 10, -111424959, -210233848, -90147732, -399226412, -38991888, 16, 6, 6, -251492904, -47665011, -269903088, 15, 19, -218292428, -145925532, -9479064, -340530744, 6, 13, 4, 8, 1, -239588800, -343978009, 6, 14, 3, 2, 10, -5437940, -393552018, 17, 6, 7, 7, -102019287, -63002201, -74009331, 19, 19, 2, -146689752, -356307210, -74470711, -121147183, 400000000};
    int k = 375649290;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 46264896400000029;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> board = {2, 6, -15014517, -320579911, -330950369, 5, 7, -32049742, -334934843, -46625309, -292627098, -146473515, 3, 11, 3, 0, -41699922, 0, 9, 9, -378077687, -88212875, 0, 15, 18, -354665736, 12, 17, 0, -118454393, -106042213, -173164456, -12670667, 18, 17, -187141450, -18482724, -79273535, -127870676, 8, 15, 2, 16, -337213793, -352918070, 5, 15, -203407212, 400000000};
    int k = 357715901;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 51187188000000010;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> board = {5, -242520790, -136564731, -14790812, 13, -131755967, -110527978, -100735483, -377806121, 4, 1, 12, 1, -358317988, 1, 12, 18, 6, 0, -125053211, -45871340, -86843132, 0, 18, 4, 16, -110983494, 14, -145466811, -270735766, -391333118, 2, 4, 14, 12, 13, -300265376, -79339748, -341123871, 0, -235213000, 17, 8, 13, 11, 10, -170838777, -151016093, -132574296, 400000000};
    int k = 376849465;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 67766238400000040;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> board = {9, 7, -278727868, -342219641, -75049503, 12, -107886025, -284897238, -18080965, -109803401, 17, 1, -242044979, -268453637, -265140745, 14, 5, -277793568, 15, 6, -322982924, 15, 16, -334811151, -198094157, -295893071, -339231005, -221828246, 13, 14, -86669773, -14619814, -1445652, 8, 17, 2, 13, -374188169, -174110762, -315842842, -286429736, -90840949, 18, 10, 19, -199342554, -242698945, -305232286, 400000000};
    int k = 338214626;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 41003556400000053;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> board = {11, -306104506, -12620615, -64350877, -386543614, 1, 14, 2, 3, -173705150, -298209824, 0, 12, 11, -120479809, -322804069, 10, 8, -156398828, 2, 14, 14, -79704986, -124925615, -35825942, 16, 18, -360593631, -142513243, 10, 1, 8, 17, -57580692, -361134197, -43528327, -240688173, -285220340, 10, 16, -249740507, 1, 8, 13, 14, 15, -314111333, -94677429, 400000000};
    int k = 302130607;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 50050232800000026;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> board = {5, -67690141, -327984554, -163266629, 12, -290283810, -327861151, 12, 1, -399018384, -107061123, -280558739, -28527124, 18, -246086494, 9, -238310445, -136336207, -320988350, 18, 1, -16973994, 6, 16, 11, -206868062, -17146694, -385244281, -235395185, -204663229, 11, 11, 3, -347963215, -50054650, -300813341, -106480151, -114375410, -394994500, -198562766, 131428660, 11595085, 123913454, 113177328, 147751550, 398409300, 275592657, 180859789, 39412797, 374779317};
    int k = 326681596;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 43599999949104381;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> board = {4, -229244791, -88419796, -380635311, 5, -220282978, 12, -80086954, -350003246, -181121630, -27908078, 16, 4, 6, -289888081, -372638613, -329624887, -265807165, -167516300, 1, 4, 10, 13, -66986586, -65303770, 18, 0, 12, -398181906, -53655945, -26704482, 15, 13, 8, -298694243, -106027472, -322094047, -133484473, -267246556, 101899711, 200193776, 143471283, 115898886, 25583378, 184927460, 217204644, 104157294, 138159652, 77380079};
    int k = 397969875;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 74109356292510144;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> board = {0, 5, -120836835, 16, -17778662, -167238573, -313946770, 19, -39010884, -93196780, -90476207, -14765521, 11, 9, -43667192, 2, -93288607, -258746024, -301849308, 12, 18, 1, -88998126, 4, 11, 5, 12, -60005976, -245771839, -293984670, -166607206, 12, -94130889, -348559259, -139433381, -248496548, -118457661, 0, -283990296, -378946522, 193646715, 149052058, 236553978, 172329075, 109239298, 275098687, 200796485, 138265285, 26602140, 61363105};
    int k = 322970488;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 299913330350378719;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> board = {3, -265381513, 5, 3, -38163708, -111194979, 10, -356072796, -325673691, -260316481, -207195683, 1, 13, -77805451, -189377081, -82440226, 19, -113977921, -362989492, 8, 12, 10, -371183447, -319634550, -135214553, 15, -335419380, -316647529, -362525332, 4, -267055584, -345407965, -28214525, -78350704, -269565541, 0, -137384257, -129413818, -265055828, -225947519, 8268094, 140282106, 128851615, 182320575, 275226279, 146921445, 192419967, 228865228, 163377985, 86500073};
    int k = 356644825;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 25954992494319200;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> board = {6, -317946192, -355575150, 8, 0, -177519304, 9, 6, -243418431, -127298877, -335107628, -109910650, -112950670, 2, 5, 15, -11513822, 4, 5, 3, 11, -60335965, -19045750, -215699791, -35575626, 7, 17, -175050019, -213274187, -324662085, -182046018, -30215449, 19, 16, 4, 17, -139637758, -395486701, 11, 211679227, 39261521, 296786488, 64567305, 43774820, 304632379, 233116359, 185744443, 36330847, 30129395};
    int k = 316221185;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 150918015420809704;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> board = {5, -188977558, 9, -122850223, -361049743, -180842431, -154714401, 19, -348145816, -351289819, -323496428, 7, 4, 13, 5, -43320403, 19, 6, 5, -357277470, -350459821, -377893990, 1, 11, 19, 12, 2, -328033258, -129219939, -377624302, -363698831, -196879278, 19, 4, 11, 9, -66923298, -183141159, -231772601, -44817287, 194215966, 370502248, 337864709, 11074807, 51062599, 56551928, 185211118, 983549, 2848745, 50076827};
    int k = 324338938;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 112512463994036346;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> board = {4, -347887370, -55605660, -62702065, -129147391, 11, -260512182, 10, 5, -63540002, -256303015, -91718469, -86081347, 3, 14, 3, -339288323, 2, 11, 9, -67965145, -123990493, -18648481, -328477327, 8, 13, 9, 7, -177571417, -345376030, -27911792, 10, 3, 8, -177136940, -320173887, -206031958, -391230147, -82549716, 19, 9968408, 135373011, 156712412, 98256765, 244663719, 221646344, 254510267, 38631761, 48956106, 77373327};
    int k = 389817039;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 168106677665468192;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> board = {5, -340116609, -175864223, -31160148, 16, -164741864, 6, 4, 7, -75970335, 19, -239075983, 16, 16, -378572866, -137715945, -268867957, -9733013, 9, 8, -2833394, -388209368, -134048342, -21283452, -15576991, 9, 1, 14, 16, -297933305, -136876179, 6, -236618042, -324707812, -364451775, -98867407, 7, 6, 12, -180511305, 31217235, 115805480, 238635396, 267018227, 271026944, 58124092, 118396210, 47531859, 11661129, 63016263};
    int k = 330668149;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 172426826059793021;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> board = {1, -196051677, 6, 10, -200201437, -47850509, 17, -55180274, -40084768, 11, 18, -110752896, -277740673, -82583786, -14745278, -305616409, 5, 15, 12, 3, -299640384, 19, 19, 0, 13, -385613596, -310331872, 15, 19, -252020595, -136187525, -135916872, -353887561, -164764021, 6, 1, 15, 0, 5, -45661761, 159064830, 175372862, 41896865, 74645510, 80123228, 273206657, 58285808, 42357374, 196557445, 194082842};
    int k = 365880687;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 133816244900324481;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> board = {4, 3, -315165218, -140750891, -387731601, 5, 8, -282749004, 15, -242137365, -360584499, -294290662, 16, -5916644, -20047773, -303497642, 1, 16, -253845361, -183214435, -256381107, -94093313, -46130046, 16, 13, 10, 6, 7, -395201437, -354842615, -72385663, -33649113, -38551972, 5, 9, -197528666, -345170627, 12, -397983691, -279547810, 61903903, 365097399, 350530513, 19813455, 131679635, 46640135, 234104113, 186509009, 396595118, 164024987};
    int k = 306999972;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 63129360015677741;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> board = {1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 1, 1, -1, -1, -1, -1, -1, 1, 1, 1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1599999929;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> board = {1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 1, 1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 1, 1, 1, 1, 1};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2399999902;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> board = {1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 1, 1, 1, 1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 1, 1, 1, 1, 1, 1, -1, -1, -1};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2799999918;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> board = {1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 1, 1, 1, 1, 1, 1};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 2799999895;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> board = {1, -1, -1, -1, -1, -1, -1, 1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 1, 1, 1, 1, 1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 1, 1, 1, 1, 1, 1, 1, -1, -1, -1};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3199999939;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> board = {1, 1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 1, 1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 1, 1, 1, 1, 1, 1, 1, 1, -1, -1};
    int k = 10;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 33;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> board = {-400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000};
    int k = 1;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 0;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> board = {-400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000};
    int k = 2;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 400000000;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> board = {-400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000, -400000000, 400000000};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 159999999600000000;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> board = {-40887793, 76727977, 38759777, -48736833, -34249818, -103900109, -83857452, 100606449, -69592138, 32920529, -132063924, -47052866, -30127828, -35656066, 79221653, -59734589, -60594015, -139681514, 44192517, 52716500, 137835160, 20022197, -108619895, -74790020, -7515930};
    int k = 123214272;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 31390852187476688;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> board = {28736713, -14479761, 26419103, -26453386, -13957913, -23493452, -73980980, 11134153, 57737264, -69320976, -23717548, 52356823};
    int k = 334684748;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 23050212689447516;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> board = {-8, 5, 0, 3, -2, 4, -7, 3, 1, 6, -9, -7, -7, -4, -7, -5, -9, 0, 9, -8, 5, 5, 1, 5, -8, -3, 3, -8, -5, -8, -4, -2, -7, -8, 8, -9};
    int k = 54425;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 925174;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> board = {1, -3, -2, 0, 0, 2, -3, 0, 2, -3, -3, -1, 1, 2, -1, 0, -2, 1, -2, -2, -3, -1, 1, -1, 0, 3, -2, 2, 0, 0, -3, 1, 3, -3, -3, 1, -1, 0, -1};
    int k = 476612;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1906415;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> board = {1394, -4494, -5439, -2173, -4751, 541, 1051, -4404, -4413, -271, 2821};
    int k = 5341250;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 15067624105;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> board = {326907, -64870239, -90790609, -72097777, 37378131, 67335188, -50614627, -7529387, 20343235, -61211491, 73409195, 4921444};
    int k = 29967;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 3098467307843;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> board = {496131, -104424180, -329476133, -258598959, -198204233, 240032027, -249473248, 205188513, -349265502, 198577215, -127871800, -334870656, 234922082, -287714524};
    int k = 298734;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 71390566250892;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> board = {3, -40000000, 9, -400000000, 5, 6, 111, 4, -40000000, 23555, -4000, -400000000, 9, -400, 4000, 9, -4, -4000, 0, -400, 0, 4000000, 3, -40000000, 2, 400000000, 111, 400, 111, 5, -40000, 40000000, -40, 400000000, 40000000, 5, -400000000, -400, 40000, -40000000, 111, 40000000, -40000000, 0, 23555, 23555, 40000, -400000000, 40000};
    int k = 398987707;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 340527919751679156;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> board = {40000, 6, -40000, 6, -400, -400, 3, -40000000, -40, -4, 0, 4, 1, -40000, 7, 4000, 2, 1, 400, 4, -40, 9, -40000000, 400000, 400, -4, 4000000, 400, 400, 5, 6, 9, 400, 3, 400000, -400, 9, -400000000, 400, 4000000, 0, 0, -400000000, 10, 4, 8, 0, 7, 10};
    int k = 365181784;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1753454751116189;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> board = {2, -1, 2, -100, 13, -2, 5, -54321, 3, -4, 3, 8, -5, 6, -3, 2, -400000000, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, -10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, -400000000, -10, 5, -1, 5, -1, 5, -6, 4, -400000000, 400000000, 399999999};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 299997261225003429;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> board = {1, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, -1000, 4000000};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 1599999999952001;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> board = {1, -1, -1, 2, -5, 4};
    int k = 7;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 24;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> board = {1, -200000000, 100000000};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 29999999900000001;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> board = {-5, 1, 2, 3, -100, -1000, -10000, 10, 30, -100, 99, -1000, -10000000, 322223, 99999, -54123333, 199999, 2233232, 4323212, -1023913, 3214389, -12301231, 3243434, 100, 2000, -400, -2310, 430234, 231392, -123992132, 43949243};
    int k = 400000000;
    RowGame* pObj = new RowGame();
    clock_t start = clock();
    long result = pObj->score(board, k);
    clock_t end = clock();
    delete pObj;
    long expected = 17575358576133435;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=19849563&rd=13904&pm=10664
********************************************************************************
#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
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
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
 
using namespace std;
 
#define SIZE(X) ((int)(X.size()))
#define MP(X,Y) make_pair(X,Y)
typedef long long int64;
template<class T> inline void checkmax(T &a,T b){if(b>a) a=b;}
 
const int64 oo=1000000000LL*1000000000LL;
 
class RowGame
{
public:
  int n,m;
  int64 G[110][110],E[110],F[110];
  pair<int64,int64> D[110];
  int64 score(vector <int> board, int _m)
  {
    int size=SIZE(board);
    m=_m;
    n=size+size;
    for (int i=0;i<n;i++) for (int j=0;j<n;j++) G[i][j]=-oo;
    for (int i=0;i<size;i++)
      for (int j=0;j<size;j++)
      {
        if (i<=j)
        {
          int64 s=0;
          for (int k=i;k<=j;k++) s+=board[k];
          G[i][j+size]=s;
        }
        if (i>=j)
        {
          int64 s=0;
          for (int k=j;k<=i;k++) s+=board[k];
          G[i+size][j]=s;
        }
      }
    for (int i=0;i<n;i++) E[i]=0;
    for (int i=0;i<n;i++)
      for (int j=0;j<n;j++)
        if (G[i][j]!=-oo && G[j][i]!=-oo && G[i][j]>=0)
          checkmax(E[i],G[i][j]+G[j][i]);
    for (int i=0;i<n;i++) F[i]=-oo;
    for (int i=0;i<n;i++)
      for (int j=0;j<n;j++)
        if (G[i][j]!=-oo)
          checkmax(F[i],G[i][j]);
    for (int i=0;i<n;i++)
      D[i]=MP(oo,oo);
    D[0]=MP(0,0);
    for (int step=0;step<n;step++)
      for (int i=0;i<n;i++)
        if (D[i].first!=oo)
          for (int j=0;j<n;j++)
            if (G[i][j]!=-oo)
            {
              int64 tfirst=D[i].first;
              int64 tsecond=D[i].second;
              if (tsecond+G[i][j]<0)
              {
                if (E[i]<=0) continue;
                int64 cnt=(-tsecond-G[i][j]+E[i]-1)/E[i];
                tfirst+=cnt*2;
                tsecond+=E[i]*cnt;
              }
              tfirst++;
              tsecond+=G[i][j];
              if (tfirst<D[j].first || tfirst==D[j].first && tsecond>D[j].second)
              {
                D[j].first=tfirst;
                D[j].second=tsecond;
              }
            }
    int64 R=0;
    for (int i=0;i<n;i++)
      if (D[i].first!=oo && D[i].first<=m)
      {
        int64 now=D[i].second;
        checkmax(R,now);
        if (D[i].first+1<=m)
          for (int j=0;j<n;j++)
            if (G[i][j]!=-oo)
              checkmax(R,now+G[i][j]);
        if (E[i]>0)
        {
          checkmax(R,now+(m-D[i].first)/2*E[i]);
          if (m-D[i].first>=1)
            checkmax(R,now+(m-D[i].first-1)/2*E[i]+F[i]);
        }
      }
    return R;
  }
};
 
 
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/