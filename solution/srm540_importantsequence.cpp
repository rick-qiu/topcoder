/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11842
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

class ImportantSequence {
public:
    int getCount(vector<int> B, string operators);
};

int ImportantSequence::getCount(vector<int> B, string operators) {
    int ret;
    return ret;
}


int test0() {
    vector<int> B = {3, -1, 7};
    string operators = "+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> B = {1};
    string operators = "-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
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
    vector<int> B = {1};
    string operators = "+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
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
    vector<int> B = {10};
    string operators = "+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> B = {540, 2012, 540, 2012, 540, 2012, 540};
    string operators = "-+-+-+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1471;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "--------------------------------------------------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> B = {-1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000};
    string operators = "--------------------------------------------------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "++++++++++++++++++++++++++++++++++++++++++++++++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> B = {-1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000};
    string operators = "++++++++++++++++++++++++++++++++++++++++++++++++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> B = {3, 3};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> B = {6, 7, 9};
    string operators = "+++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> B = {-2, 7};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> B = {8, -3, 14, -5, 18, 4, -3};
    string operators = "+-+-+--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> B = {-7, 5, 10, 4, 9, -1, 11};
    string operators = "--+-+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> B = {-1, 12, 16, 2, 10, -4};
    string operators = "-++-+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> B = {1, 12, 9, 10};
    string operators = "-+++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> B = {5, 5, 8, -3, 14, 7, 0, -4};
    string operators = "-++-++--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> B = {15, 13, 7, -5, 14, 10, -7, 6};
    string operators = "++--++--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> B = {108, 1171, 673, 544, 205, -126, 161, 51, -530, 1174, 248, 807, 1019, 976, 950};
    string operators = "-+-+-----+-++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 252;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> B = {1, 1636, 996, 684, 414, 774, 1434, 986, 580, 1059, 1571, 1339, -609};
    string operators = "-+++-+++++++-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 269;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> B = {251, 481, 603, 608, -658, 139, 81, 998, 897, 920, -565, 172, 322, 609, 196, 897};
    string operators = "++++---+++---+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 244;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> B = {-51428, 92584, -25080, 155258, 94775, 55178, 29017, 5241, -47672, 123687, 15038, 12564, -7658, 91901, 118011, 134636, 3230, -8779, 176160, 106557, -582, 35052, 127164, 78564, -31688, 96210};
    string operators = "-+-+++---+---+++--++-++--+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 5752;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> B = {187943, 7177, 67462, 90513, 15389, 33399, -25073, -18000, 94364, 70098, 61631, -59828, -16230, 56583, 88258, 59460, 31502, -10131, 126753, 3650, 121806, 18194, 56185, -13003, 84354, -22267, -42528, 57351};
    string operators = "+--+----+++---+++-+-+-+-+---";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 22141;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> B = {99229, 107901, 1715, 8540, 128583, -28281, 82439, -49684, 64312, 18288, 50160, 102757, 60757, -18486, -6478, 108437, 60631, -66008, 180276, 92812, -6155, 35566, -40440};
    string operators = "++--+-+-++++---+--+--+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 8741;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> B = {-1515820, 11564838, -750854, 6047797, 3952104, 7326226, 3409673, -3777086, -1643594, 16538031, 5728018, 10038365, 12793815, 26685, 13993015, 578223, 7576558, 3469451, -2443980, -1844952, 11931584, 12809213, 7353446, 5931198, 4232491, 7073814, 16055699, 16145933, -1812070, 16405331, 12949652, 12151742, 14382180, -1402557, 6844651, 826757, 500549};
    string operators = "-+-+++---+-++-+-++--++-+-+++-++++----";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 565335;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> B = {1335776, 8255908, 2757682, -6322055, -2349974, -565985, 12515215, 6298227, 9438825, -1194637, 10714374, -6005060, 2224243, 9125374, -2878561, 669084, 12068272, 10953244, 5693610, 10398146, 12414888, 11826363, 11398116, 5764289, 9563331, 9116108, 2875492, 5017706, -5882990, 14248121, 624779};
    string operators = "-++---+++-+--+--++++++++++++-+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1372028;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> B = {1837973, 430898, 14558440, 5611229, -6009695, 2243396, 14698898, 10689278, 5828457, 11044424, 2144632, -3746380, 7125357, 6459978, 10961410, 11701632, 11198913, 712053, -3434682, 14684863, 5351158, -5781184, 12197884, 7294066, 6835789, 3187967, -4559587, -1143632, 9392332, -6230083, -352051, 5878661, -6451377, -1184291, 10922995, 3622207, 1059425, 3186171, 9749147};
    string operators = "--+---++++---++++--+--+++---+-----++-++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1665196;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> B = {124840850, -19252969, -10909259, 187196378, 49705000, -51436003, 192523910, 16500551, 122504650, 96505425, 141975510, 102770187, 105518926, 179623656, 27578398, 134823375, 20027117, 111821689, -29006339, 24712524, 132449590, 61201398, 58787416, 126200446, -20304165, 45787054, 73542730, -34500965, 155056184, 82119054, 56331943, -16527355, 97796987, 38684899, -4516400, -66744864, 6195481, 27417471, -112120, -45116805};
    string operators = "+--+--+-++++++-+-+--+-++--+-+-+-+-------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 16478979;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> B = {104912511, -40151362, 58216976, 48159466, 57217825, 19148113, 32948956, -56108114, -10404352, 187124772, 69990285, -28858311, 66987955, 18881502, 76160152, -13055119, 150055195, 163314842, 42759814, 67798080, -34875336, 134731628, 81204393, -26035641, 14682786, -9911446, -52122710, 146920981, 65956825, -53277244, 82667847, 59992076, -12760673, 86338103, -16261139, 150873710, 155991789, 33378997, 90238005, 131289463, 47765547, 29595504, 23168469, 76883135, 7248515, 110712232, 20770598, -57168820, 84369691};
    string operators = "+-+++++--+--+++-++-+-+-----+--++-+-++-++-+++-+---";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 5522898;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> B = {118633207, 160710495, 132380082, 9112169, -11605377, 6515393, 12556016, 46787915, 94776064, 128435706, -5122953, -29398313, 12561945, 126543765, 136448365, 88097412, -40863764, 25384999, -49530210, 2499039, 115863884, 44904570, 65130059, 91836729, 48559409, 75758749, 102897886, 144089922, 1874961, 9902841, -9987194, 90226429, -56726245, 126905352, 106917078, -34278119, 149733950, -6871881, 16565641, -33821966, 66660741, 100983491, 116602609, -48324464, 38585522, 136541227, 114348977};
    string operators = "+++----+++---++-----+-++++++-----++-+----++--++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 8449377;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> B = {5088176, 8400645, 10563217, 8262742, 9898433, 4807083, 4888329, 10126912, 14809162, 6892989, 5380252, 2314097, 6040349, 10078397, 5798791, 2669884, 3018122, 4613267, 11057129, 9302390, 10420295, 4148027, 3590134, 1414147, 8586740, 15372244, 8124388, -1278161, -583049, 3110148, 2945836, 3771406, 4507087, 4796086, 7657298, 5753664, 3878775, 4273272, 541649, 1053296, 8420807, 14343299, 12430471, 6435268, -1082420, 6822032, -3910115};
    string operators = "+++++++++-+-+++++++++--++++--++++++-++++++++-+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 147085;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> B = {15346141, -304996, 8600897, 1861579, 6474609, 12134935, 12170140, 4496981, 6047127, 13719155, 11846497, 8720501, 6614757, 7605931, -653339, 13804603, 7627000, 8182807, 11087415, 9786048, 720787, 10692437, 10848152, 2719164, 6209422, 11191956, 7453800, 2508669, 3049787, -3611361, 5961540, 6498237, 13459186, 11546351, 11860703, 14021857, 11748219, 12620368, 6477744, -3464095, -2965585, 8253957, 10946375, 10266307, 7428967, 3582851, -2305152};
    string operators = "+-+-+++-++++++-+++++-++-+++++-+++++++++--++++--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 668099;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> B = {4445368, 3292467, -7090131, 9654880, 6416727, 9647868, 12875814, 10001301, -3782551, 6097933, 10469848, 17221617, 11096250, 12490597, 10798262, 9352075, 15477417, 16435433, 12329904, 12374749, 8894419, 1781010, 11393545, 17080533, 11219426, 12602743, 16053412, 13259635, 13433799, 12049642, 10975059, 1504789, 9855511, 7126877, 7733673, 10394998, 9959048, 11667603, 12516659, -1429398, 6385369, -3482816, 8608574, 12749826, 11534773, 4871129};
    string operators = "-+-+++++-++++++++++++++++++++++-+++++++---++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1122552;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> B = {6976956, -2793218, 12385348, 6395592, 1079523, 3196821, 9709275, 3719323, -2747076, 4890756, -7300418, 2277241, 13116994, 1785646, -1905190, -39605, 1833060, -1637031, 3850433, -2118513, -1208511, -2777496, 4179682, 3969216, -247066, -3512046, 1863308, 11416772, 7032999, -4956505, 3222551, 2702576, -7852178, -879435, 9306111, -3286434, 2421568, -3901198, 4655577, 9114513, 14399580, -3240728, 7200481, -1565671, -4895116, -229031, 50817, 16714146, 4529622, -5128987};
    string operators = "--+-+++-----+--------------+-----------++------+--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 511696;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> B = {4921030, -4373473, 4577095, -6387073, 4292337, 1518178, 2415686, 8754111, 14156119, 1324368, 4106161, -5343405, 4056786, -6474199, 255048, -960509, 18368221, -458679, 1051615, 8666506, -2582247, -1594412, -5318945, 3271820, 347953, -277444, 15869671, 6646871, -3124786, -370874, -3268011, 5658797, -5014084, 6298496, -6809937, 7800452, -7234721, 10276115, -4516995, -202047, -135775, 1440548, -1980259, 551876, 5093356, 3173733, -5218803, 14040066};
    string operators = "-------++-------+--+------+----------+-------+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1899471;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> B = {5032118, 4883396, 2056557, -3748098, 807534, -1848850, 3186036, 2548789, 446145, -4476247, 2341800, -5497297, 9739928, -4652145, -466224, 1410661, 4539396, -2997383, 1094354, -2429031, 426362, 819332, -6510013, 4947630, 782167, -1159564, -2974181, 5601347, 2859217, -5660912, 3906807, -6103019, 1245287, 3305893, 10653053, 1700387, -1897973, -2605319, 4259056, 2021905, -1928052, 4275640, -8559749, 4828408, 2545424, 466709};
    string operators = "-+----------+---------------+-----+-----------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 460236;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> B = {2, -4, 4, 12, 1, 11, -1, -5, 9, -8, 6, 4, -6, 4, -4, -3, 4, 11, 0, -1, -3, 8, 6, -4, -1, 5, -2, 1, -1, -2, 7, -6, 6, -8, 11, 4, -7, 3, 1, 3, 11, 6, 1, -7, 4, -4, -1, 6, 2};
    string operators = "---+-+--+--+-----+----+-----------++----+--------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> B = {-1, 0, -3, -1, 16, -2, 12, -5, 1, 8, -7, 14, 0, 2, -2, -2, 3, -5, 5, 4, -4, -1, 5, 0, -7, 3, -3, 1, 3, 14, 2, 2, 0, 1, -1, -3, 8, -2, -7, 1, 2, 4, -6, 12, 7, -2, 16};
    string operators = "----+-+--+-+-----------------+-------------++-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> B = {-3, -1, 8, -2, -5, -1, 4, -2, 4, -2, 2, -1, 3, -2, 7, 11, 6, -4, -4, 10, -6, 1, 1, -2, 10, -5, -1, -1, 8, -7, 3, -4, 18, 1, 1, 3, -2, 1, 11, -2, 3, -1, 1, -1, 0, 4};
    string operators = "--------------++---+----+-------+-----+-------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> B = {3, 16, 2, 13, 13, 16, 3, 13, 9, 2, 11, 11, 5, -6, 11, 6, 9, 8, 6, 10, 14, 13, 16, 19, 18, -1, 12, 12, 6, 8, 15, 11, 10, 4, 15, 19, 10, 3, 6, 14, 15, 6, 2, -2, 8, 9, 12, 12};
    string operators = "-+-+++-++++++-+++++++++++-++-++++-+++++++++-++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> B = {9, 11, 11, 7, 8, 12, 16, 15, 8, -9, 15, 8, 6, 5, 6, 14, 0, 12, 6, 13, 2, -1, 12, 9, 8, 8, -1, 11, 7, -1, -7, 13, 11, 15, 6, 9, 14, 11, 0, 12, 16, 8, 7, 9, 5, 12, 19, -1};
    string operators = "+++++++++-++++++-+++--++++-++--+++-+++-++-+++++-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> B = {-3, 17, 11, 4, -5, 12, -4, 13, 14, 11, 12, 18, 4, 12, 16, 12, 9, 3, 3, -3, 10, 9, 8, 14, 19, 18, 15, 13, 9, 7, 3, 10, 18, 15, 13, 14, 13, 16, 20, 20, 12, 11, 19, 15, 15, 0, 17, 16, 17, 2};
    string operators = "-+++-+-+++++-++++-+-++++++++++-++++++++++++++-+++-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> B = {18, 5, 8, 5, -4, -4, 16, 3, -1, 11, 8, -9, 15, -4, 1, 15, 12, 8, 10, 9, -4, 16, 20, 19, 3, 8, -4, 16, 18, 2, -4, 17, 6, 8, -2, 19, 14, 9, 0, 15, 20, 3, 8, 3, 7, -2, 16};
    string operators = "+-++--+--++-+--+++++-+++-+-++--+-+-+++-++-+++-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> B = {2, 13, 4, 8, 6, 10, -1, 3, 15, 16, -1, 14, 8, -6, 12, -7, 18, 12, 13, 13, 11, 8, 0, 2, 2, 10, 15, 4, 6, 2, -3, 11, 10, 5, 0, -6, 0, 0, 4, 5, -2, 7, 4, 10, 0, 7, -5, 0, 12, -5};
    string operators = "-+-+++--++-++-+-++++++-++++-+--+++-----+-+++----+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> B = {8, 1, 6, 10, 14, 15, 6, 0, 6, 7, -4, 13, 14, 13, 3, -6, 5, 8, 0, -4, 14, -5, 17, 3, 0, 11, 2, -6, 0, 14, 11, 15, 10, 1, -1, 8, 9, 9, 5, -3, 6, -8, 17, 9, 11, -1};
    string operators = "+-++++--++-+++---+--+-+--+---++++--+++--+-+++-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> B = {-3, 5, -1, -3, 0, 0, 4, -2, -1, 1, 8, 4, -1, -2, -1, 3, 0, -2, 7, 0, 2, -4, 3, 0, 1, -4, 6, 5, 1, 1, -2, -1, 1, 8, -1, 4, -1, -3, 3, -1, 1, -2, 8, 2, -2, 1};
    string operators = "-+--------+-------+-------++-----+--------+---";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> B = {2, 1, -4, 8, 7, 7, 1, 4, 1, 3, 0, 0, -3, 4, -1, 1, -3, 6, -3, 2, 1, -1, 2, 5, 1, -1, 1, -2, 0, 6, 6, 3, -1, 2, -2, 1, 0, -2, 1, 1, 0, -2, 0, 0, -1, 3, 0, 3, -4};
    string operators = "---+++-+-+-------+-----+-----++----------------+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> B = {1, 8, 2, 2, -4, 2, -1, -1, 3, 0, 1, 5, -1, 0, 2, -1, 2, -2, -1, 4, 0, -4, 10, 4, 5, 3, 4, 1, 6, 1, -1, 0, 2, -1, 0, 6, -1, 2, -1, 2, 3, 0, -2, 3, -2, 8};
    string operators = "-+---------+----------+-+-+-+------+----+----+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> B = {6, 10, 0, 8, 6, 4, 5, 2, 6, 5, 5, -1, 8, -1, 5, 4, 6, 4, 6, 0, 10, 6, 3, 5, 7, 6, 7, 1, 6, 5, 5, 1, 4, 6, 7, 6, -3, 4, 0, -4, 0, 7, 7, 7, 4, 7, 4, -1};
    string operators = "++-++++-+++-+-+++++-+++++++-+++-++++-----+++++--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> B = {5, 4, -2, 7, 6, 7, 7, 5, 6, -2, 8, 4, 2, 3, -2, 2, 4, 4, 7, 10, 9, 9, 0, 9, 7, 2, 3, 1, 4, 8, 8, 6, 8, 8, 5, 6, 2, 7, 10, 1, 6, -2, 6, 1, 2, 2};
    string operators = "++-++++++-++++--++++++-++-+-++++++++-++-+-+-++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> B = {3, 2, 4, 5, 6, 3, 2, 6, 7, 6, 5, 2, 5, 9, 8, 5, 5, 4, 5, 6, 4, -1, 8, 6, 4, 5, 6, 1, 5, 7, 9, 0, 5, 3, 6, 2, 1, 6, 6, 2, 3, 3, -1, 5, 7, -1, 8};
    string operators = "+++++-+++++++++++++++-+++++-+++-+++--+++++-++-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> B = {1, -1, 2, 1, -3, 8, 8, 2, -3, 8, -1, 7, 0, 4, 3, 0, -2, 7, 1, 5, -1, 5, 3, 5, 7, 8, 8, 1, -1, 3, 3, 3, -1, 0, 4, 5, 2, -3, 9, 3, -2, 0, 2, 0, 1, 2, 2};
    string operators = "-----++--+-+-++--+-+-++++++---++--++--+------++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> B = {4, 4, 3, 3, 6, 6, 5, 2, 4, -2, 1, 5, -4, 3, -1, -1, 5, -2, 0, -2, 2, 5, 0, 1, 6, 10, 7, 4, 0, 5, 0, 8, 6, 3, -2, 2, 4, 0, 5, 6, 8, 10, 7, -1, 8, 1};
    string operators = "+++++++-+--+----+----+--++++-+-+++--+-+++++-+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> B = {6, 5, 5, -3, 6, 5, 7, 5, 2, 2, 6, 3, 7, 2, -1, 6, -3, 0, 1, 2, 6, -1, 7, -1, 7, 1, 0, -1, 0, 1, 7, 9, 8, -2, 4, -3, 0, 1, 5, -1, -2, 2, 7, 8, 0, 8};
    string operators = "+++-+++++++-+--+----+-+-+-----+++-----+---++-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> B = {-85151, 22452, -24615, 40316, 1556};
    string operators = "-----";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
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
    vector<int> B = {-22204, 32449, -30492, 86982, -87431};
    string operators = "-----";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
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
    vector<int> B = {-17521, 26470, 25157, -26678, 35665, 27121};
    string operators = "------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
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
    vector<int> B = {104368437, 314535331, 182520759, 429468274};
    string operators = "-+++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 182520758;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> B = {-36898850, 221759803, -169344304, -101921728, 441287578, -228221590, 415632544, 182407468, -266065070, 518948042, -171191864, 433313227, 169071492, 316490451, 663322421, 74387373, 637328195, 85735627, 174546548, 320766353};
    string operators = "-+--+-++-+-++++-+--+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 104601422;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> B = {563299174, -210843592, -139225437, 152158395, 435114526, 73190055, 145972554, 286703749, -51417959, 380583939, -139470765, 524054034, 122061759, 519185360, 57424281, 5063283, 434844502, -52146136, 337481089, 562612488, 60069361, 349596916, 102243436, 514557505, -46456091, 498443467, 139696200, -71941786, 551868681, 619825580, 679244818, 424270221, -162293390, -267152392, 375128833, 495462575, 551248089, -178749297, 486511824, -168246724, 155235187, -168207792};
    string operators = "+---+-++-+-+-+--+-++--++-++-+++----++-+---";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 15053018;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> B = {-34, 11, 999999954, 4, 999999902, -20, 999999894, 30, 999999846, 999999904, 999999921, 15, 999999851, 16, 999999906, 999999926, 999999923, 69, -73, 999999963, 999999918, 36, 999999843, -8, 999999889, 0, 999999886, 999999864, 999999842, 999999839, -48, -10, 999999882, -41, 40, 999999886, 999999918, 999999886, -13, 999999954, 999999920, 999999875, 999999930, 999999945, 999999935, -31, 54, 999999906, 999999869, -57};
    string operators = "--+-+-+-+++-+-+++--++-+-+-++++--+--+++-++++++--++-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999810;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> B = {999999850, 999999894, 32, 999999839, 999999889, 76, -8, -16, 25, 999999870, 999999931, 25, 999999845, 999999833, 999999902, 999999948, 999999917, 999999852, 999999904, -8, 92, 999999893, 999999981, 89, 999999891, 999999891, 5, 999999897, 33, -30, -1, 75, 6, 999999905, 76, -85, 74, 999999872, 999999921, -2, 75};
    string operators = "++-++----++-+++++++--++-++-+-----+---++--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999808;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> B = {999999920, 999999900, 999999912, -20, 999999868, 999999815, 999999880, 999999967, 88, -62, 999999943, 47, 999999857, 999999862, -44};
    string operators = "+++-++++--+-++-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999813;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> B = {-4, 2};
    string operators = "+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> B = {3, -5};
    string operators = "++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> B = {1, 7, 1, 2, -9};
    string operators = "--+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> B = {1, 2, 6, 3, -5, 1, -9, 7};
    string operators = "+-+-++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> B = {792, 318, -875, 111, 56, 35, -738, -401, -522, -260, 736, -296, 583, -434, 164, -738, 81};
    string operators = "++----+-+--+-+++-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> B = {-298, 639, -610, 269, -229, -110, -75, 554, -372, -584, 558, 83, 408, 896, 785};
    string operators = "+-+++++---+-+--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> B = {46282, -97485, 97247, -35403, 33056, -18482, -28873, -7130, 29176, -70458, -19195, -31312, 95102, -73115, -63011, 85351, -35917, 5295, -41993, -10669};
    string operators = "---+++---+-+-+-+--+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> B = {18392, -57623, -30021, 54222, 70847, 76396, -6793, 27677, 20923, 43599, 13462, -37767, 7042, 86662, 5596, 56685, -40181, 16505, -50662, 34788, -37308};
    string operators = "--+----+--+--+++--+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> B = {3593819, -8716331, -1644783, -5273938, 5388092, -3905717, 6077012, 2262874, 5436417, -6656306, -4232582, 8073655, -6525739, -2535873, -9084630, -8500228, -6236657, -8209306, 5632421, -5575403, -8773438, 9640641, -8615151, -7071159, -6141092, -1538650, -6798349, -2571291, -7624579, 8162237, -584093};
    string operators = "+-++--+-+-++++---+--+--+----+++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> B = {-5425268, 5792681, -9101756, 6664627, 6102503, -7312289, 3205182, -7494114, -8371743, -4912901, 6393404, 6483638, -8109623, 7311713, -8473024, -801616, -8038190, -8342268, -1428692, 9660234, -5582058, -8881425, 3081173, 1013934, -1344616, 5103315, -4384614, -8398326, -9129130, -639945, -8724606};
    string operators = "+++----+--++---++--+--+-+-++-+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> B = {17717786, -13245553, 34667695, -48983608, -55922135, 48720813, 58716078, -2689675, 2009153, 44291232, -81474393, 60977046, -15263151, -28317870, -15423024, -13415873, -45655284, -10096803, -80908612, 94963861, 84421142, 61732440, 27739661, 65402655, -25306453, 77466124, -93483606, 42369731, 49771952, 55096631, -57405163, 61705426, 12667248, 23810962, -80843152, 75380983, 20114890, -96471569, -23463681, 18992264, 72245983, 5780513, 63528181};
    string operators = "++++---++++--+--+++---+-----++-+++-----+---";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> B = {52260502, 13055179, 87159909, 75241864, 56606942, 60900757, -10347435, 77760465, -52277576, 55766119, -17171011, -55688287, -3423801, 74685065, -41072113, -86301038, 96615038, 38847012, -97938933, -78800069, -6379507, -21356205, 25070089, 37750534, 22448013, -60977303, -85858314, 29676411, -63434020, -58175488, -86644145, -83265062, 89100836, 51782105, 91645344, 53995519, -91817252, -53246621, -43189111, -5119399, 83937671, -92782749, -51650775, 3544322};
    string operators = "----++-++++--+-++++---+--+++---+-++-+++++--+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> B = {-524537155, -351223447, -898623166, 120008427, 295951006, 412363725, 633225389, 924044463, 66122384, -942355219, 38449518, 455563276, -48129433, -774309033, 12890368, -145793823, 179749544, 12369653, 534971166, 673744744, 650638020, -367333888, -392265965, -201551878, 681433366, 654153214, -822516896, -921562896, -449226419, 690678525, -492950694, -607395586, 174622381, 446013760, 976135849, -976979378, 641977540, 442094794, 712463501, 615525908, 287138151, 443329337, 540718752, -318796254, -273935575, 838468726, 688020831, -422075153, 461820860, 697498551};
    string operators = "++--+--++++++++---++++-+++--+++-+++++-++++++-+++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> B = {-219869902, 379384469, 203910584, -423316149, 77111801, -755662256, -184592523, -68117205, -150674234, 179574133, -10789108, -50238817, 101403509, 693652707, -94132485, 479828617, -145138724, -655925383, 553972659, -356559497, 375671672, 580075430, -51394277, -678127568, -316919191, -422326953, 226874853, 937250687, -167632905, 550544728, -853736185, 544143108, -438277524, 114324071, 248072756, 341499495, -251992416, -355745738, -929532278, -838435378, 924831942, -640281626, 33650072, 599682661, -167633186, -934835963};
    string operators = "+++++++++++++++++++++-+-+++++++-+++++-+-+++-++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> B = {-769094598, 504446630, -353493424, 503610227, 62475166, -496429663, 836473698, -666348410, -638276333, -977919212, 226817300, 730987316, 521774629, -25406724, 914777205, 55670110, 389083407, 848905168, 174730068, -166000459, -872259253, -548443996, -871238536, -507146579, 944338029, 331801347, 162567872, 775102071, 364549131, -16516107, 977769675, 391658987, 736725863, -754142238, -646683932, -489345994, -550025509, 506430562, 591336101, -95739063, 416836632, -295331367, 937501486, 940285629, -381862861, -180180640, -986987692, -156486555};
    string operators = "------+-------------------+------------++-------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> B = {492749190, 687228693, -667625783, 494433793, -893034494, -78144611, -454055881, -873952022, -666302696, 73789921, -946951300, -344983549, -492946596, 884062394, -879968335, 316487339, 828902002, -847594177, 907530640, -521783423, -725944642, -163537454, 595643135, -761532857, -455514300, 509298076, -243442353, 915883373, -548293845, -638690045, -745683814, -251619351, 22009138, 402772647, -596453076, 320515184, 938059827, -554562048, -174278613, 594439314, 951489453, 675955287, 60215543, 736444291, -806840128, -752084431, 933082217, -352030765, 764948850};
    string operators = "-+--------+-----------------------------------++-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
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
    vector<int> B = {380363427, 583629335, -681431183, -219398108, 24128364, 933370503, 476023070, -401987717, -625916565, 496045772, 908035426, -895357751, 464638908, -115569799, -905531819, -393481688, 203364448, 48324176, -36670007, -531426289, -460125068, 629279122, -733410707, -159928285, -562938483, -878488131, 560719010, -466275382, -312074009, -445541791, 320972323, -477210673, 514950353, -252233737, -599779031, 819400249, 364282240, 530984231, 981313465, 353217366, 118458547, -491592609, 190379345, 187993123, 299990918, 968081798, 212935226, 448245418};
    string operators = "-++-+----+-++-+--++--+-+---++-------++-+--++-+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> B = {-606377907, 698607592, -551572075, 450127444, -850401877, 425186192, -987454083, 606185156, 661109734, 166092480, 190214265, -68072892, 965729298, -543117821, -757811717, 75855985, 344103596, -840130994, 78111683, -876552115, 1608029, -63724450, -807483716, -756059108, 155110649, 977972952, -636645074, 1455045, 593202480, -538696310, -537429386, -321572094, 444124919, -229405471, 337041010, -803917771, -90848156, 938164826, -279736657, -499833252, -304809855, 358015525, 494100210, -353126294, -492329526, 763872688};
    string operators = "--+--+---+--+-+++-++-+--+----+--++---+-++---++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
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
    vector<int> B = {999999912, 999999907, -999999921, -999999931, 999999960, 999999939, 999999997, 999999950, 999999967, 999999972, 999999944, 999999979, -999999968, -999999964, 999999997, 999999990, 999999947, 999999965, 999999990, -999999956, -999999913, -999999907, 999999942, -999999990, 999999924, -999999986, -999999963, -999999941, -999999932, -999999923, -999999966, 999999948, 999999903, -999999950, -999999962, 999999973, -999999995, 999999984, 999999993, 999999962, -999999922, 999999933, 999999988, 999999967, 999999961, -999999921, 999999996};
    string operators = "++-++++--+++++++++--+++++++++++--++++--+++++-+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> B = {999999942, -999999980, -999999973, 999999901, -999999908, -999999993, -999999948, -999999940, 999999979, 999999964, 999999998, -999999982, -999999985, 999999942, 999999909, 999999941, -999999984, -999999914, -999999995, -999999910, -999999922, 999999933, 999999939, 999999906, 999999916, 999999939, -999999914, -999999964, -999999903, -999999999, -999999972, 999999963, 999999963, -999999972, 999999943, -999999987, 999999901, -999999927, -999999950, -999999989, -999999961, -999999913, 999999974, -999999948, -999999993, -999999928, 999999975, -999999955, -999999976};
    string operators = "++++++-+++++--++-++++++++++-+++++++++-++++---++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> B = {999999901, -999999931, -999999998, 999999909, -999999918, 999999906, -999999929, 999999951, 999999982, 999999949, 999999964, -999999925, 999999987, 999999957, 999999926, -999999977, 999999976, 999999953, -999999994, -999999905, 999999928, 999999987, 999999938, -999999991, 999999926, 999999930, 999999946, 999999912, -999999979, 999999978, -999999937, -999999917, 999999939, -999999927, 999999984, 999999979, -999999956, -999999934, 999999985, 999999955, 999999961, 1000000000, -999999993, 999999982, 999999943, 999999993};
    string operators = "----------+---+-+----+-+---+-----------------+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
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
    vector<int> B = {999999936, -999999919, 999999932, 999999931, -999999992, -999999925, 999999957, -999999959, 999999933, 999999905, 999999947, 999999978, -999999945, -999999961, 999999958, 999999995, -999999958, 999999951, 999999979, 1000000000, 999999908, 999999986, -999999932, 999999948, 999999991, -999999909, 999999940, -999999988, -999999984, 999999942, -999999977, 999999968, -999999908, -999999950, 999999951, -999999938, -999999936, 999999939, -999999913, 999999948, 999999916, -999999914, 999999968, 999999924, 999999941, -999999922, 999999906};
    string operators = "-----+--------+----------------++++--------++--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> B = {-999999926, -999999934, 999999903, -999999985, 999999970, 999999947, -999999987, -999999951, -999999928, 999999983, -999999937, -999999981, 999999901, 999999937, -999999906, -999999949, -999999926, -999999972, -999999917, 999999911, 999999906, -999999985, -999999916, 999999955, 999999971, -999999974, -999999976, -999999912, 999999969, 999999979, 999999927, -999999906, -999999941, 999999919, 999999950, -999999929, -999999923, -999999975, -999999985, 999999905, 999999916, 999999956, 999999932, -999999977, 999999945, 999999938, -999999999, 999999967, -999999917};
    string operators = "+-+-+++--+--+-++++--++-+++---+--+-+--+---++++--++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> B = {999999964, 999999920, -999999915, 999999923, -999999912, -999999966, 999999938, 999999980, 999999909, 999999962, -999999992, 999999930, -999999998, 999999921, 999999955, 999999905, -999999926, 999999906, 999999905, -999999945, 999999968, 999999961, -999999984, 999999932, 999999929, 999999920, -999999967, 999999971, -999999959, 999999960, 999999947, -999999984, -999999940, -999999903, 999999948, 999999927, 999999950, 999999917, 999999980, -999999993, 999999962, -999999912, 999999932, 999999981, -999999922, -999999978, -999999967};
    string operators = "++--+-----++-+--++++++-+++-+-++++------+-+-++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> B = {-999999997, 999999997, 999999998, -1000000000, -999999997, -1000000000, -999999996, -999999996, 999999995, 999999996, 999999995, 999999998, 999999998, -999999997, 999999995, 999999998, -999999996, -999999995, 999999998, 1000000000, -999999995, 999999997, 999999999, 999999997, -999999997, 999999999, -999999999, -1000000000, 1000000000, -999999996, 999999995, 999999997, -999999997, -1000000000, 999999998, -999999996, 999999995, 1000000000, 999999998, 999999996, -1000000000, 999999995, -1000000000, -999999998, -999999998, 999999999, 999999999, -999999996, 999999998};
    string operators = "+++++++++--++--+-+-++++--++-+++++-++++++-+-++++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
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
    vector<int> B = {999999995, -999999998, -999999999, -999999997, 1000000000, -1000000000, -999999997, -999999999, -999999998, 999999999, 999999998, 999999995, -999999997, 1000000000, -1000000000, 999999997, -999999999, 1000000000, 999999996, -999999996, -999999998, -999999998, -1000000000, 999999995, -1000000000, -1000000000, 999999997, -999999995, -999999995, -1000000000, 999999996, 999999995, -999999996, 999999999, 999999998, -999999997, 999999995, 999999995, -999999998, -999999998, -999999996, 999999998, -999999995, 999999996, 999999997, -999999997, 1000000000, 1000000000, -1000000000, -999999999};
    string operators = "++--+++++++-+++-++++++++--+--++++++-++-++++--+++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> B = {999999995, 999999997, 999999997, 999999995, 999999996, -1000000000, -999999998, 999999999, -1000000000, -999999997, 999999999, 999999998, 999999999, -1000000000, -999999999, -999999997, 999999995, -999999996, 999999999, 999999995, -1000000000, -1000000000, -999999999, -999999999, -999999997, 999999995, 999999996, -999999995, -1000000000, -999999999, 999999995, -1000000000, -999999996, 999999996, -999999996, 999999997, 999999995, 999999996, -999999998, 1000000000, -999999999, 999999996, -999999996, -999999999, -999999995, -999999995};
    string operators = "-----------+---+--------------------------+---";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> B = {999999997, -1000000000, 999999996, 999999998, -999999996, 999999999, -999999999, 1000000000, 999999999, -999999997, -999999997, 999999999, -999999997, -999999999, -999999996, 999999998, 999999999, -999999999, -999999996, -999999997, -999999996, 999999995, -999999999, 999999999, -999999996, -999999995, 999999995, 999999998, 1000000000, -999999995, 1000000000, 999999996, 999999997, -999999997, 1000000000, 999999996, 999999997, -999999996, -999999995, -999999997, 1000000000, -1000000000, 999999995, -999999999, 999999997, -999999998, 999999998, 1000000000, 1000000000, -999999995};
    string operators = "+--------+---+----+-------------------------------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> B = {-999999995, -999999995, -999999998, 1000000000, 999999997, 1000000000, -999999999, 999999998, 1000000000, 999999995, -1000000000, -999999997, 999999997, 999999996, -999999996, 999999996, -999999998, -1000000000, -999999995, -999999996, -999999999, -999999998, -1000000000, -999999999, -999999998, 999999998, -999999995, 999999995, 999999996, 999999998, 999999996, 1000000000, 999999996, -1000000000, 999999997, -999999998, 999999998, 999999998, 999999999, -1000000000, 999999998, -999999998, 999999997, 999999997, 999999999, -999999999, -999999996, -999999999};
    string operators = "++++++-+--+----+-+-+-----+++-----+---++-+++-----";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> B = {999999998, 999999999, 999999996, 1000000000, -1000000000, -1000000000, -1000000000, 999999996, 999999997, 1000000000, 999999997, -999999996, 999999998, 999999999, 999999999, 999999995, -999999997, 999999995, -999999999, -999999996, -999999997, -999999996, 999999997, 999999996, -999999995, -999999999, -999999998, 999999995, 999999999, -999999998, 999999995, -999999999, 999999998, 999999997, -999999995, -999999999, -1000000000, -999999997, 999999996, 999999997, -1000000000, 1000000000, 999999995, 1000000000, -999999997, -999999995, -999999998};
    string operators = "+-+---+++--++--+++---++-+-+-+-+-+---+-++-+-+-+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> B = {3, -4, 6, -2, -8, 4, -5, 4, 7, -9, 3, 1, 8, -10, 7, 10, -1, -7, 1, -3, -4, -9, -8, 9, -4, -5, -5, -5, -3, 7, -1, 1, -5, 6, 3, 8, 7, 5, 1, 7, 1, 5, 2, -2, 3, 5, -2, 4, -6};
    string operators = "+-+-----+--------------------------+-+--+---+----";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
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
    vector<int> B = {9, 1, -10, -9, 1, 7, -10, 2, 2, -3, 8, -1, 2, -3, 6, 7, -4, -9, -4, -2, -5, 10, -4, -8, 1, 3, 6, 7, 4, 9, -4, 10, 3, 4, 5, -1, 8, 1, -8, -4, -8, -1, -10, -4, 1, -6};
    string operators = "+++++++--+++++-++--+++-++++++++-+++++++++-++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> B = {6, 1, 6, 8, 5, 2, 1, 1, 1, 6, 3, -7, -2, -5, -6, -2, -10, -5, 5, 8, 4, 2, -5, 5, 3, -5, -2, -4, 1, 5, -9, -10, 3, -3, 5, -7, 6, 5, -1, 4, -2, -2, 3, 2, -7, -1, -10};
    string operators = "-+++-+--++-+--+--+--+-+--++---++-+---+-++-+--+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> B = {-2, 1, -2, -4, 2, -1, -2, 2, -5, -4, 5, -5, 4, -3, 3, -4, -2, -1, 2, -1, 2, 2, 4, 5, -2, -2, -3, 1, -2, -5, -4, -4, 5, -2, 3, -3, 1, -4, -1, 2, -3, 5, -3, 5, -3, -4};
    string operators = "-------+---+-------+--------------+-+---------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> B = {3, -2, -2, 4, 1, 1, 4, 4, -1, -2, -2, -1, 5, 5, -2, -2, 5, -1, -5, 3, -3, 3, 5, -5, 1, 2, 3, 4, 4, 4, 4, -3, 3, -4, -2, -2, 4, -4, 2, -2, 5, 1, 2, -3, -1, -2};
    string operators = "---++++-+++++++++-++++++-+++-++-+++++++-++-++-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> B = {2, -3, -1, -3, -4, -3, -5, -4, 1, 5, 2, -5, 1, 3, -4, -4, 4, 1, 2, -2, -3, -5, 2, -3, 2, -4, -5, 3, -5, 5, -3, -5, -2, 2, 5, -5, 2, 5, -4, 4, -3, -3, 3, -2, 1, 5, -3, -5, -2};
    string operators = "+--+-++++++++++++----+-+--------+-+++-+-+--+---+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> B = {665468908, -600472584, 121212979, -578402718, -749388998, 857620780, -101278665, 412064292, 304160862, 233830987, 941544311, -415509647, 297070223, 61048160, 190524648, 407755023, 767340434, 504208882, 260916980, 459097677, -867365276, -436933225, 509286136, -872733345, 279439254, -751196580, -250128996, -606495771, 512777957, -937781331, 925094916, -701794779, 449315261, 573137456, 568652351, -677212147, 421736616, 141364926, -471140619, 544737414, 777703886, 333650948, -27573507};
    string operators = "++-+---+++-++++--+-+---+-+++++-+++--+++--+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
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
    vector<int> B = {-708225098, 303753193, 623855747, -175491241, -265553895, -113084984, -903543273, 924587465, 113858236, -580092388, 534395886, 324327155, 863582967, -559703029, -264282701, 331484606, -52139812, -479813091};
    string operators = "-+--++-+-+++-++---";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> B = {-999999959, -999999910, 999999991, 999999930, 999999920, -999999936, 999999964, -999999914, -999999936, -999999901, 999999946, -999999933, -999999968, -999999981, -999999979, -999999944, 999999991, -999999966, 999999966, -999999989, 999999935, -999999995, 999999977, 999999936, 999999941, -999999927, 999999964, -999999953, -999999999, -999999991, 999999957, -999999966, 999999921, -999999963, -999999919, -999999909, -999999918, -999999963, 999999968, -999999982, 999999962, 999999985, 999999994, 999999921, -999999946, 999999901, 999999908, -999999919, -999999907};
    string operators = "---+---+--++---+++---++-+---+++-++--+--++--+-+---";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> B = {-999999995, -999999914, -999999943, -999999998, 999999957, -999999947, -999999995, 999999961, -999999954, -999999949, 999999989, -999999935, -999999924, -999999919, 999999916, -999999914, -999999905, 999999992, 999999915, 999999965, 999999916, -999999924, 999999991, -999999988, -999999902, 999999982, 999999965, -999999908, -999999957, -999999910, -999999912, -999999960, -999999989, 999999931, 999999929, 999999915, -999999984, 999999929, 999999917, 999999990};
    string operators = "--++-+++-+-+---+++-+-----+++++--++++++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> B = {51, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    string operators = "+-------------------------------------------------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> B = {50, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    string operators = "+-------------------------------------------------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> B = {52, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    string operators = "+-------------------------------------------------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> B = {1000000000, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408174};
    string operators = "+-------------------------------------------------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> B = {1000000000, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408175};
    string operators = "+-------------------------------------------------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
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
    vector<int> B = {1000000000, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408163, 20408160, 20408163, 20408174};
    string operators = "+-------------------------------------------------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> B = {-777580846, 282032361, 118574439, 441361314, 667426311, -57738756, -277455973, 90476891, 671880906, 48165090, 112673243, -896767841, 912538789, 350557483, 13639128, 4642428, 149083753, 508230554, 206465318, -444957242, 7850615, -878267443, 679342420, 370883250, 106126282, -80655536, -217484186, 737010242, -590078924, 769502807, -232066416, -947591474, -759711079, 899646558, -399609522, 447316520, -314142478, 24597329, -714735696, 157312797, -888369840, -118744829, 589471170, -316191548, -519284853, 214811734, 716612633, -983678769, -779755618};
    string operators = "-------------------------------------------------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> B = {-622836829, 564422897, -116742491, 595517474, 363521581, -958174955, -491775717, -830981607, -485585026, -437151964, -480751365, 595259578, -58793382, -288174754, 293707072, 812437524, 265558653, 288582113, -681840414, -248311169, -843782904, -221069002, 474446574, 747158747, -388457751, 12737187, 923343018, 140481937, 177904357, 32246290, 379301574, -922460915, -526495791, 183917571, -576222812, -300204679, 542218987, 708466908, 763954188, -67925057, 276761295, 209222211, 435987670, 134619537, -377661303, 70419725, 866614574, 55950708};
    string operators = "------------------------------------------------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> B = {999999979, 999999951, -999999949, 999999922, 999999989, -999999932, 999999907, 999999950, 999999943, 999999940, 999999924, 999999984, 999999944, 999999911, 999999995, 999999942, 999999911, -999999902, 999999935, -999999907, 999999932, 999999915, -999999999, -999999912, -999999964, 999999915, -999999988, -999999971, -999999994, -999999905, 999999949, 999999984, 999999935, -999999953, 999999993, 999999922, 999999973, -999999984, -999999940, 999999919, 999999920, 999999975, 999999934, 999999961, 999999979, -999999902, 999999957, 999999944};
    string operators = "------------------------------------------------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> B = {653096789, 669465169, 688147457, 271020851, 636952756, 928548678, 306849827, 756496271, 915447011, 219514503, 440462246, 328959422, 799413043, 740560536, 177177852, 132455527, 346676949, 489836078, 559221346, 487208130, 587160779, 26896742, 20091525, 442912318, 814743928, 609770451, 152631504, 283178700, 154230232, 134158726, 456552838, 100968028, 809086117, 949638604, 844211412, 617324392, 277396607, 654026544, 253064528, 774661240, 934836059, 423697303, 497719520, 550966303, 574051629, 617054259, 126672471, 238109619, 808431520, 753809823};
    string operators = "++++++++++++-+++++++++++++++++++++++++++++++++++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> B = {911637484, 463276285, 947602775, 442449227, 897150077, 924637466, 595815108, 552147461, 856132802, 715488325, 484399802, 980646296, 212651540, 992900646, 391609315, 421086996, 79402001, 684895839, 411842325, 433819724, 672993174, 608715376, 109275242, 118402066, 187362521, 104304508, 929713522, 677900409, 934574012, 308598393, 67438794, 945306367, 17948135, 469371825, 403945914, 15111183, 931316213, 818844112, 702183665, 892674510, 130952585, 49703549, 140287132, 278295566, 943420230, 227924637, 153371800, 726158297, 643842454, 561707818};
    string operators = "++++++++++++++++++++++++++++++++++++++++++++++++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
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
    vector<int> B = {577115880, 897093301, 704921136, 707381503, 16585592, 647228151, 666199250, 398839891, 22622825, 969083513, 349972392, 723978983, 546447750, 544686310, 535694048, 956466923, 276212199, 327112038, 266327269, 602923686, 948136347, 442920742, 40588779, 195376426, 665688137, 43904999, 310971694, 582965097, 994885460, 877107440, 74715081, 627075976, 784875988, 781182311, 953745564, 722696750, 926573976, 824693503, 23497349, 151878975, 957074424, 815751402, 305603815, 893072609, 679082183, 168239980, 983883186, 902459417, 177632235};
    string operators = "+++++++++++++++++++++++++++++++++++++++++++++++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
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
    vector<int> B = {999999907, 999999976, 999999918, 999999906, 999999915, 999999918, 999999901, 999999905, 999999910, 999999970, 999999909, 999999948, 999999914, 999999966, 999999955, 999999936, 999999937, 999999958, 999999905, 999999968, 999999932, 999999942, 999999922, 999999994, 999999916, 999999955, 999999986, 999999954, 999999944, 999999911, 999999925, 999999934, 999999925, 999999935, 999999993, 999999984, 999999993, 999999964, 999999903, 999999960, 999999916, 999999994, 999999962, 999999972, 999999959, 999999965, 999999952, 999999962};
    string operators = "++++++++++++++++++++++++++++++++++++++++++++++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999483;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> B = {999999967, 999999964, 999999998, 999999922, 999999973, 999999952, 999999902, 999999992, 999999905, 999999939, 999999985, 999999917, 999999916, 999999988, 999999955, 999999987, 999999951, 999999995, 999999933, 999999916, 999999978, 999999936, 999999901, 999999998, 999999939, 999999974, 999999976, 999999965, 999999949, 999999955, 999999951, 999999959, 999999909, 999999942, 999999929, 999999994, 999999994, 999999938, 999999918, 999999999, 999999915, 999999919, 999999917, 999999927, 999999908, 999999961, 999999954, 999999947, 999999932};
    string operators = "+++++++++++++++-+++++++++++++++++++++++++++++++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> B = {999999934, 999999986, 999999901, 999999910, 999999902, 999999956, 999999916, 999999981, 999999983, 999999939, 999999971, 999999910, 999999900, 999999920, 999999960, 999999947, 999999919, 999999959, 999999929, 999999987, 999999931, 999999940, 999999941, 999999949, 999999975, 999999979, 999999936, 999999989, 999999965, 999999949, 999999916, 999999963, 999999965, 999999971, 999999951, 999999956, 999999931, 999999929, 999999950, 999999911, 999999965, 999999910, 999999923, 999999986, 999999989, 999999983, 999999930, 1000000000, 999999963};
    string operators = "+++++++++++++++++++++++++++++++++++++++++++++++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999634;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> B = {3, -1, 7};
    string operators = "-+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> B = {540, 2012, 540, 2012, 540, 2012, 540};
    string operators = "-+-+-+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1471;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> B = {7, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 999999999, 1234, 4311};
    string operators = "-------+--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999994453;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> B = {1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000};
    string operators = "+---------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> B = {-189596705, -734634603, -11574580, 53128855, 416582364, -833553592, 232993540, -7567199, -20732661, 471782175, -703913800, -371733528, 630174086, -443606048, -651875678, -159032719, 277657473, -908114599, -470065694, -108238238, -94055669, 279034138, 233625192, 811600457, -293575561, 121734112, -914787226, 909541989, 648762277, -595742029, -397440203, 328966885, -94524543, -512370449, 35401999, -625224418, -248685127, -414342578, -370889905, 638326935, 380744947, 147252682, 885099392, -260575117, 399663764, -548342136, -9181273, -31538172, 324320060, 89594804};
    string operators = "+-----+++-++-+---+-++-+-++-+++++-+-+--+--+++-+-+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> B = {-1000000000, -1000000000, -1000000000, 1000000000, 1000000000, 1000000000, 2};
    string operators = "------+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> B = {1000000};
    string operators = "+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> B = {1000000000, -1000000000, -1000000000, -1000000000};
    string operators = "+---";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> B = {1000000000, -1000000000, -1000000000};
    string operators = "+--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> B = {-1000000000, -1000000000, -1000000000, -1000000000, -1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000, 1000000000};
    string operators = "----------+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 281575, 954159, 69513, 1000000000, 50, 1000000000, 10000, 1000000000};
    string operators = "-------------------------------------------+-+-+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 874695;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "---+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> B = {999999999, 999999999, -999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999, 999999999};
    string operators = "---------------------------------------------+++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999998;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "-----+++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "------------------------------+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> B = {2, 9, -1, -5, 10, 2, 6};
    string operators = "-+--+--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> B = {1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000};
    string operators = "+-------------------------------------------------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "-----+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> B = {-1000000000, -1000000000, -1000000000, 1000000000, 1000000000, 1000000000, 100};
    string operators = "------+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 100};
    string operators = "----+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 99;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> B = {-3, 5, 3};
    string operators = "-++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> B = {1000000000, -1000000000};
    string operators = "+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> B = {5, 1, 1};
    string operators = "+++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
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
    vector<int> B = {10, -1000};
    string operators = "++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
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
    vector<int> B = {1000000000, 1000000000, 1000000000, 2};
    string operators = "---+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "++++++++++++++++++++++++++++++++++++++++++++++++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> B = {-1000000000, -1000000000, -1000000000, 999999999, 999999999, 999999};
    string operators = "---+++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "---++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> B = {1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000};
    string operators = "+----------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> B = {5, -1000000000, -1000000000, -1000000000, 5};
    string operators = "+----";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> B = {3, 3};
    string operators = "+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
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
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "-------------------------------------------------+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> B = {1000000000};
    string operators = "+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "----+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "---+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
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
    vector<int> B = {2, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000};
    string operators = "+-----";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 153: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 153: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test154() {
    vector<int> B = {100, 4, 51, -5, 24, 2, 151};
    string operators = "+-+-+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> B = {1000000000, -1000000000, -1000000000, -1000000000, -1000000000};
    string operators = "+----";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> B = {55, 50, 20};
    string operators = "+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "---------+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> B = {5, -8, 9, -100, 6, 45};
    string operators = "------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 158: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 158: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test159() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "--------------------------------------------------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> B = {1, 1000000000, 1000000000};
    string operators = "-++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 999999998, 999999999, 1000000000, 1000000000};
    string operators = "---------+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> B = {-2};
    string operators = "+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> B = {1000000000, 1000000000};
    string operators = "++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> B = {-200000000, -200000000, -200000000, -200000000, -200000000, -200000000, -200000000, -200000000, -200000000, -200000000, -200000000, -200000000, -200000000, -200000000, -200000000, -200000000, -200000000, -200000000, -200000000, -200000000, 200000000, 200000000, 200000000, 200000000, 200000000, 200000000, 200000000, 200000000, 200000000, 200000000, 200000000, 200000000, 200000000, 200000000, 200000000, 200000000, 200000000, 200000000, 200000000, 200000000, 1000000000};
    string operators = "----------------------------------------+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> B = {3, 1};
    string operators = "--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> B = {3, 8, 4};
    string operators = "+++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> B = {24, 1, 2, -1, 4};
    string operators = "----+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> B = {-5};
    string operators = "+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> B = {1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "+---------++++++++++++++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> B = {23, 22};
    string operators = "--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 170: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 170: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test171() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 123123};
    string operators = "+++++++++++++++++++++++++++++++++++++++++++++++++-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999876876;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> B = {1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "+----------------------------------------+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> B = {2000, 2000, 2000};
    string operators = "+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> B = {-1000000000};
    string operators = "+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> B = {1000000000, 1000000000, 500000000, -10, -10, 100};
    string operators = "--+--+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> B = {0};
    string operators = "+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> B = {1000000000, 1000000000, 12345, 12345};
    string operators = "++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 12344;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> B = {10, 11};
    string operators = "--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 178: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 178: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test179() {
    vector<int> B = {10, 5};
    string operators = "--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 179: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 179: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test180() {
    vector<int> B = {1, -11};
    string operators = "++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 180: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 180: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test181() {
    vector<int> B = {-1000000000, -1000000000, -1000000000, -1000000000, -1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 122};
    string operators = "----------+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 121;
    if(result == expected) {
        cout << "Test Case 181: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 181: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test182() {
    vector<int> B = {-100000, 43324324, -12321321, 43243443, -2313123, -32132321, 332333213, -321332, 3213213};
    string operators = "+--+--+--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 182: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 182: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test183() {
    vector<int> B = {-1};
    string operators = "+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 183: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 183: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test184() {
    vector<int> B = {10, -15};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 184: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 184: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test185() {
    vector<int> B = {-1000000000, -1000000000, 1000000000};
    string operators = "--+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 185: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 185: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test186() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 10, 7};
    string operators = "-----+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 186: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 186: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test187() {
    vector<int> B = {123456, 472884, 90509388, 14748365, 28592, 2346089};
    string operators = "-+-+++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 187: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 187: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test188() {
    vector<int> B = {100, 66, 3, -1, 7};
    string operators = "----+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 188: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 188: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test189() {
    vector<int> B = {-1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 2};
    string operators = "------------------------------+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 189: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 189: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test190() {
    vector<int> B = {1};
    string operators = "+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 190: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 190: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test191() {
    vector<int> B = {3, -1, 3};
    string operators = "+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 191: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 191: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test192() {
    vector<int> B = {1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000};
    string operators = "+--------++++++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 192: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 192: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test193() {
    vector<int> B = {2};
    string operators = "+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 193: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 193: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test194() {
    vector<int> B = {-100, 1000};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 899;
    if(result == expected) {
        cout << "Test Case 194: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 194: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test195() {
    vector<int> B = {2, 10};
    string operators = "+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 195: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 195: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test196() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "++++++++++++++++++++++++++++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 196: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 196: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test197() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000};
    string operators = "-----+-----";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 197: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 197: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test198() {
    vector<int> B = {-999999999, 999999999, 1000000000};
    string operators = "--+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 198: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 198: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test199() {
    vector<int> B = {-3, 5};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 199: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 199: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test200() {
    vector<int> B = {3, 1, 2};
    string operators = "+++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 200: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 200: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test201() {
    vector<int> B = {5, 6, -8};
    string operators = "+++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 201: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 201: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test202() {
    vector<int> B = {1, 1, 7};
    string operators = "++-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 202: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 202: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test203() {
    vector<int> B = {1000000000, 1000000000, 2323, 45345, 65756756, 123123, -123123, -213213, -5345, 4234, 123123, 5656, 4535, 7567, 1243234, 456346, 35432, 342423, 23423, 666666, 444444, 55555234, 243234, 234234, 44444, 12, 5554, -12, -34, -45, 343, 343, 34, 3453, 546456, 345345, 324234, 23423, 46456, 56456};
    string operators = "+-+-+------+-+-+-+++++-+-+-+-+-+-+++++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 203: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 203: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test204() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "-------------------+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 204: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 204: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test205() {
    vector<int> B = {1000000000, 1000000000};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 205: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 205: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test206() {
    vector<int> B = {135, 105, 97, 186, 133};
    string operators = "+++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 43;
    if(result == expected) {
        cout << "Test Case 206: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 206: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test207() {
    vector<int> B = {2, 2};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 207: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 207: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test208() {
    vector<int> B = {-5, 15};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 208: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 208: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test209() {
    vector<int> B = {573262756, 806333545, -437217824, -223973548, 252483382};
    string operators = "+----";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 209: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 209: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test210() {
    vector<int> B = {300000000, 200000000};
    string operators = "+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 99999999;
    if(result == expected) {
        cout << "Test Case 210: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 210: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test211() {
    vector<int> B = {-10, 5};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 211: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 211: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test212() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000, 0, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 10000000, 0, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1, 0, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 10000, 0, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "-------------------------------------------------+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 212: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 212: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test213() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 55};
    string operators = "----+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 213: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 213: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test214() {
    vector<int> B = {1000000000, 4000000, 100000000, 1000000000};
    string operators = "+-++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 99999999;
    if(result == expected) {
        cout << "Test Case 214: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 214: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test215() {
    vector<int> B = {-1, 5};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 215: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 215: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test216() {
    vector<int> B = {0, 0};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 216: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 216: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test217() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "-------+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 217: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 217: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test218() {
    vector<int> B = {4, 4, 13, 4, 1};
    string operators = "--+--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 218: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 218: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test219() {
    vector<int> B = {1000000000, 100, 1};
    string operators = "--+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 219: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 219: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test220() {
    vector<int> B = {999999999, 999999999};
    string operators = "++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999998;
    if(result == expected) {
        cout << "Test Case 220: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 220: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test221() {
    vector<int> B = {3, 3, 1};
    string operators = "--+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 221: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 221: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test222() {
    vector<int> B = {1000000000, 1};
    string operators = "+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999998;
    if(result == expected) {
        cout << "Test Case 222: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 222: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test223() {
    vector<int> B = {10, -5};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 223: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 223: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test224() {
    vector<int> B = {12, 5, 5};
    string operators = "+--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 224: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 224: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test225() {
    vector<int> B = {1000000000, -999999999, 1000000000};
    string operators = "+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 225: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 225: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test226() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "---+-+--------------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 226: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 226: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test227() {
    vector<int> B = {100, 10000};
    string operators = "--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 227: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 227: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test228() {
    vector<int> B = {5, 7, 8, 9, 4};
    string operators = "+++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 228: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 228: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test229() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "-----------------------------+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 229: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 229: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test230() {
    vector<int> B = {10, 11, 5};
    string operators = "+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 230: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 230: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test231() {
    vector<int> B = {8424, -6252, 9998, 5051, 8763, 4674, 1802, -2730, -2074, -3557};
    string operators = "++--++-+--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 231: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 231: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test232() {
    vector<int> B = {-1, -1, 4};
    string operators = "--+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 232: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 232: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test233() {
    vector<int> B = {2, 1};
    string operators = "+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 233: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 233: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test234() {
    vector<int> B = {100000000, -100000000, 100000000, -100000000, 100000000, -100000000};
    string operators = "+-+-+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 234: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 234: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test235() {
    vector<int> B = {20, 10};
    string operators = "++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 235: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 235: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test236() {
    vector<int> B = {1, 3, 2};
    string operators = "--+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 236: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 236: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test237() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "---------------------------------------+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 237: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 237: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test238() {
    vector<int> B = {5, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000, -1000000000};
    string operators = "+---------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 238: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 238: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test239() {
    vector<int> B = {1000};
    string operators = "-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 239: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 239: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test240() {
    vector<int> B = {-5, 10};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 240: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 240: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test241() {
    vector<int> B = {99999997, 1000000000};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 241: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 241: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test242() {
    vector<int> B = {-24586546, -1245744, 1, 1, 1, 13, 12, 999999999};
    string operators = "++--+-+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 242: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 242: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test243() {
    vector<int> B = {-30};
    string operators = "+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 243: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 243: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test244() {
    vector<int> B = {1, 1};
    string operators = "--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 244: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 244: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test245() {
    vector<int> B = {3, 1, 3, -1, 3};
    string operators = "+-+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 245: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 245: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test246() {
    vector<int> B = {-1, -1, -1, 27};
    string operators = "---+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 246: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 246: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test247() {
    vector<int> B = {1, -2};
    string operators = "--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 247: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 247: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test248() {
    vector<int> B = {100, 5, 100, 3};
    string operators = "++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 248: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 248: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test249() {
    vector<int> B = {999999999, -999999999, -999999999, -999999999, -999999999, -999999999, -999999999};
    string operators = "+------";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999998;
    if(result == expected) {
        cout << "Test Case 249: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 249: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test250() {
    vector<int> B = {100000000, 100000000};
    string operators = "++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 99999999;
    if(result == expected) {
        cout << "Test Case 250: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 250: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test251() {
    vector<int> B = {1000000000, 1000000000, 1000000000, -1000000000, -1000000000, -1000000000, 1000000000};
    string operators = "------+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 251: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 251: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test252() {
    vector<int> B = {10000};
    string operators = "-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 252: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 252: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test253() {
    vector<int> B = {1000000000, 40, 80};
    string operators = "+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 253: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 253: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test254() {
    vector<int> B = {-1000000000, -1000000000, -1000000000, -1000000000};
    string operators = "----";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 254: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 254: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test255() {
    vector<int> B = {999999999, -999999999, -999999999, -999999999, -999999999, -999999999};
    string operators = "+-----";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999998;
    if(result == expected) {
        cout << "Test Case 255: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 255: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test256() {
    vector<int> B = {-5, -5, 15};
    string operators = "--+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 256: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 256: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test257() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "++++++++++++++++++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 257: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 257: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test258() {
    vector<int> B = {1000000000, 2};
    string operators = "+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999997;
    if(result == expected) {
        cout << "Test Case 258: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 258: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test259() {
    vector<int> B = {5, 10};
    string operators = "+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 259: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 259: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test260() {
    vector<int> B = {540, 2012, 540, 2012, 540, 2012, 540, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    string operators = "-+-+-+--+-+-+--+-+-+--+-+-+--+-+-+--+-+-+--+-+-+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 260: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 260: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test261() {
    vector<int> B = {1000000000, -1};
    string operators = "--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 261: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 261: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test262() {
    vector<int> B = {1000000000, -1000000000, -1000000000, 1000000000, 1000000000, 900000000};
    string operators = "+-----";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 99999999;
    if(result == expected) {
        cout << "Test Case 262: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 262: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test263() {
    vector<int> B = {-2, 2};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 263: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 263: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test264() {
    vector<int> B = {2, 2};
    string operators = "++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 264: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 264: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test265() {
    vector<int> B = {100, 10, 10};
    string operators = "+--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 79;
    if(result == expected) {
        cout << "Test Case 265: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 265: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test266() {
    vector<int> B = {10, 1000};
    string operators = "+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 266: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 266: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test267() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "---+++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 267: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 267: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test268() {
    vector<int> B = {10, -100, 10};
    string operators = "+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 268: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 268: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test269() {
    vector<int> B = {8, 3, 1};
    string operators = "+--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 269: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 269: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test270() {
    vector<int> B = {4, 4};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 270: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 270: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test271() {
    vector<int> B = {19, 43, 163, 23};
    string operators = "+--+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 271: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 271: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test272() {
    vector<int> B = {999999999};
    string operators = "-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 272: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 272: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test273() {
    vector<int> B = {1000000000, -1000000000, 1000000000};
    string operators = "+--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 273: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 273: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test274() {
    vector<int> B = {3, -1, 7};
    string operators = "+--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 274: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 274: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test275() {
    vector<int> B = {-1000000000, -1000000000, -1000000000, -1000000000, 1000000000};
    string operators = "----+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 275: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 275: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test276() {
    vector<int> B = {-100000000, 300000000};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 199999999;
    if(result == expected) {
        cout << "Test Case 276: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 276: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test277() {
    vector<int> B = {3, -1, 7, 1000};
    string operators = "+-+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 277: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 277: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test278() {
    vector<int> B = {1, 1};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 278: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 278: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test279() {
    vector<int> B = {1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000, 1000};
    string operators = "++++++++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999;
    if(result == expected) {
        cout << "Test Case 279: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 279: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test280() {
    vector<int> B = {-4};
    string operators = "+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 280: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 280: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test281() {
    vector<int> B = {-2, 10};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 281: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 281: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test282() {
    vector<int> B = {2, 5, 2};
    string operators = "+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 282: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 282: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test283() {
    vector<int> B = {1000000000};
    string operators = "-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 283: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 283: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test284() {
    vector<int> B = {3, 1, 1};
    string operators = "+--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 284: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 284: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test285() {
    vector<int> B = {100, 60, 1};
    string operators = "+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 285: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 285: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test286() {
    vector<int> B = {1000000000, 999999999};
    string operators = "+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 286: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 286: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test287() {
    vector<int> B = {540, 212, 1540, 332012, 15340, 462012, 11540};
    string operators = "-+-+-+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 287: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 287: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test288() {
    vector<int> B = {-1, 10};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 288: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 288: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test289() {
    vector<int> B = {-2, 4};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 289: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 289: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test290() {
    vector<int> B = {1, 4, 0};
    string operators = "+++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 290: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 290: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test291() {
    vector<int> B = {5, -5};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 291: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 291: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test292() {
    vector<int> B = {100, 1, 3};
    string operators = "++-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 292: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 292: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test293() {
    vector<int> B = {284367182, -500558632, -220339521};
    string operators = "+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 293: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 293: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test294() {
    vector<int> B = {7, -1, 3};
    string operators = "+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 294: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 294: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test295() {
    vector<int> B = {-999999342, 999999422, 999999829, 999999303, 999999471};
    string operators = "----+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999470;
    if(result == expected) {
        cout << "Test Case 295: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 295: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test296() {
    vector<int> B = {999999999, 999999997};
    string operators = "++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999996;
    if(result == expected) {
        cout << "Test Case 296: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 296: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test297() {
    vector<int> B = {3, -1, 2};
    string operators = "+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 297: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 297: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test298() {
    vector<int> B = {1000000000, 1000000000, 1000000000, -1000000000, -1000000000, 1000000000, 1000000000};
    string operators = "---+-+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 298: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 298: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test299() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 999999999, 999999999, 999999999, 999999999};
    string operators = "---++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999998;
    if(result == expected) {
        cout << "Test Case 299: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 299: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test300() {
    vector<int> B = {1, 10};
    string operators = "+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 300: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 300: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test301() {
    vector<int> B = {1, 2, 3};
    string operators = "---";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 301: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 301: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test302() {
    vector<int> B = {3, 1, 1, 1};
    string operators = "+---";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 302: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 302: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test303() {
    vector<int> B = {540, 2012, 540, 2012, 540, 2012, 540, 321312, 123123, 123123, 111111111, 232323, 123123, 12, 213123, 123, 213, 123, 123, 23, 2323, 232, 2323, 232, 23, 23, 2, 2, 2, 2, 2, 2};
    string operators = "++++++++++++++--++++++++++++++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 303: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 303: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test304() {
    vector<int> B = {-100000000};
    string operators = "+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 304: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 304: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test305() {
    vector<int> B = {4, -5, 10};
    string operators = "--+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 305: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 305: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test306() {
    vector<int> B = {1, 2, 3};
    string operators = "-+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 306: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 306: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test307() {
    vector<int> B = {999999999};
    string operators = "+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999998;
    if(result == expected) {
        cout << "Test Case 307: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 307: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test308() {
    vector<int> B = {1000000000, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
    string operators = "+-+-++-++-++++--+++-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 308: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 308: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test309() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "-------------------------+++++++++++++++++++++++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 309: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 309: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test310() {
    vector<int> B = {-1000000000, -1000000000, -147483647};
    string operators = "---";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 310: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 310: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test311() {
    vector<int> B = {-500};
    string operators = "-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 311: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 311: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test312() {
    vector<int> B = {1000000000, 100000000, 1000000000, 100000000, 1000000000, 100000000, 1000000000, 100000000, 1000000000, 100000000, 100000000, 1000000000, 1000000000, 100000000, 1000000000, 100000000, 100000000, 1000000000, 100000000, 1000000000, 1000000000, 100000000, 100000000, 1000000000, 100000000, 1000000000, 100000000, 100000000, 100000000, 1000000000, 1000000000, 100000000, 100000000, 100000000, 100000000, 100000000, 10000000, 100000000, 100000000, 1000000000, 100000000, 1000000000, 100000000, 1000000000, 100000000, 1000000000, 100000000, 100000000, 100000000, 1000000000};
    string operators = "++++++++++++++++++++++++++++++++++++++++++++++++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 312: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 312: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test313() {
    vector<int> B = {-40, 10, -30, -60, 20};
    string operators = "--+--";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 313: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 313: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test314() {
    vector<int> B = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    string operators = "-+-+-+-+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 314: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 314: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test315() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 10, 1000000000};
    string operators = "----+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 315: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 315: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test316() {
    vector<int> B = {1000000000, -1000000000, 1000000000};
    string operators = "+-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 316: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 316: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test317() {
    vector<int> B = {86, 61, 55};
    string operators = "--+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 54;
    if(result == expected) {
        cout << "Test Case 317: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 317: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test318() {
    vector<int> B = {-1000, -1000};
    string operators = "++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 318: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 318: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test319() {
    vector<int> B = {1000000000, 999999999, -1000000000, 123832872, 4, 1000000000};
    string operators = "-+----";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 876167122;
    if(result == expected) {
        cout << "Test Case 319: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 319: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test320() {
    vector<int> B = {-1, 3, 7};
    string operators = "-++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 320: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 320: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test321() {
    vector<int> B = {109098006, 317458034, -73016547, 455777924, -432039350, -445751550, -291600664, 172977964, -287537461, -367580910, 297911091, -489556578, -138892044, 287147476, 260204500, 302299993, -344876235, -434470350, 415479284, -375856689, -484693616, -11961528, 236740751, -420654362, -283151331, -188230939, -250419977, 71854968, -327984249, -465950194, 492974928, -139284012, -431453299, -428417669, 171255573, -29978053, -447967870, -188598248, 325767058, -283120796, 148690126, 747397, 181536873, 389901048, 274064234, -97209706, 292315662, 471808534, -297113497};
    string operators = "------+-+-++---++++---+-+++-+---+---+++++++++++-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 321: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 321: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test322() {
    vector<int> B = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000};
    string operators = "++++++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 322: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 322: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test323() {
    vector<int> B = {-2, 3, 2};
    string operators = "-++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 323: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 323: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test324() {
    vector<int> B = {1000000000, 1000000000, 1000000000};
    string operators = "---";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 324: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 324: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test325() {
    vector<int> B = {1, 1000000000, 1, 1000000000, 1000000000};
    string operators = "-+-++";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 999999998;
    if(result == expected) {
        cout << "Test Case 325: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 325: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test326() {
    vector<int> B = {-4, 6};
    string operators = "-+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 326: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 326: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test327() {
    vector<int> B = {-1000000000, -1000000000, -1000000000, -1000000000, -1000000000, 1000000000};
    string operators = "-----+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 327: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 327: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test328() {
    vector<int> B = {100000000, 99999993};
    string operators = "+-";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 328: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 328: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test329() {
    vector<int> B = {-101};
    string operators = "+";
    ImportantSequence* pObj = new ImportantSequence();
    clock_t start = clock();
    int result = pObj->getCount(B, operators);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 329: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 329: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    test161() == 0 ? ++passed : ++failed;
    test162() == 0 ? ++passed : ++failed;
    test163() == 0 ? ++passed : ++failed;
    test164() == 0 ? ++passed : ++failed;
    test165() == 0 ? ++passed : ++failed;
    test166() == 0 ? ++passed : ++failed;
    test167() == 0 ? ++passed : ++failed;
    test168() == 0 ? ++passed : ++failed;
    test169() == 0 ? ++passed : ++failed;
    test170() == 0 ? ++passed : ++failed;
    test171() == 0 ? ++passed : ++failed;
    test172() == 0 ? ++passed : ++failed;
    test173() == 0 ? ++passed : ++failed;
    test174() == 0 ? ++passed : ++failed;
    test175() == 0 ? ++passed : ++failed;
    test176() == 0 ? ++passed : ++failed;
    test177() == 0 ? ++passed : ++failed;
    test178() == 0 ? ++passed : ++failed;
    test179() == 0 ? ++passed : ++failed;
    test180() == 0 ? ++passed : ++failed;
    test181() == 0 ? ++passed : ++failed;
    test182() == 0 ? ++passed : ++failed;
    test183() == 0 ? ++passed : ++failed;
    test184() == 0 ? ++passed : ++failed;
    test185() == 0 ? ++passed : ++failed;
    test186() == 0 ? ++passed : ++failed;
    test187() == 0 ? ++passed : ++failed;
    test188() == 0 ? ++passed : ++failed;
    test189() == 0 ? ++passed : ++failed;
    test190() == 0 ? ++passed : ++failed;
    test191() == 0 ? ++passed : ++failed;
    test192() == 0 ? ++passed : ++failed;
    test193() == 0 ? ++passed : ++failed;
    test194() == 0 ? ++passed : ++failed;
    test195() == 0 ? ++passed : ++failed;
    test196() == 0 ? ++passed : ++failed;
    test197() == 0 ? ++passed : ++failed;
    test198() == 0 ? ++passed : ++failed;
    test199() == 0 ? ++passed : ++failed;
    test200() == 0 ? ++passed : ++failed;
    test201() == 0 ? ++passed : ++failed;
    test202() == 0 ? ++passed : ++failed;
    test203() == 0 ? ++passed : ++failed;
    test204() == 0 ? ++passed : ++failed;
    test205() == 0 ? ++passed : ++failed;
    test206() == 0 ? ++passed : ++failed;
    test207() == 0 ? ++passed : ++failed;
    test208() == 0 ? ++passed : ++failed;
    test209() == 0 ? ++passed : ++failed;
    test210() == 0 ? ++passed : ++failed;
    test211() == 0 ? ++passed : ++failed;
    test212() == 0 ? ++passed : ++failed;
    test213() == 0 ? ++passed : ++failed;
    test214() == 0 ? ++passed : ++failed;
    test215() == 0 ? ++passed : ++failed;
    test216() == 0 ? ++passed : ++failed;
    test217() == 0 ? ++passed : ++failed;
    test218() == 0 ? ++passed : ++failed;
    test219() == 0 ? ++passed : ++failed;
    test220() == 0 ? ++passed : ++failed;
    test221() == 0 ? ++passed : ++failed;
    test222() == 0 ? ++passed : ++failed;
    test223() == 0 ? ++passed : ++failed;
    test224() == 0 ? ++passed : ++failed;
    test225() == 0 ? ++passed : ++failed;
    test226() == 0 ? ++passed : ++failed;
    test227() == 0 ? ++passed : ++failed;
    test228() == 0 ? ++passed : ++failed;
    test229() == 0 ? ++passed : ++failed;
    test230() == 0 ? ++passed : ++failed;
    test231() == 0 ? ++passed : ++failed;
    test232() == 0 ? ++passed : ++failed;
    test233() == 0 ? ++passed : ++failed;
    test234() == 0 ? ++passed : ++failed;
    test235() == 0 ? ++passed : ++failed;
    test236() == 0 ? ++passed : ++failed;
    test237() == 0 ? ++passed : ++failed;
    test238() == 0 ? ++passed : ++failed;
    test239() == 0 ? ++passed : ++failed;
    test240() == 0 ? ++passed : ++failed;
    test241() == 0 ? ++passed : ++failed;
    test242() == 0 ? ++passed : ++failed;
    test243() == 0 ? ++passed : ++failed;
    test244() == 0 ? ++passed : ++failed;
    test245() == 0 ? ++passed : ++failed;
    test246() == 0 ? ++passed : ++failed;
    test247() == 0 ? ++passed : ++failed;
    test248() == 0 ? ++passed : ++failed;
    test249() == 0 ? ++passed : ++failed;
    test250() == 0 ? ++passed : ++failed;
    test251() == 0 ? ++passed : ++failed;
    test252() == 0 ? ++passed : ++failed;
    test253() == 0 ? ++passed : ++failed;
    test254() == 0 ? ++passed : ++failed;
    test255() == 0 ? ++passed : ++failed;
    test256() == 0 ? ++passed : ++failed;
    test257() == 0 ? ++passed : ++failed;
    test258() == 0 ? ++passed : ++failed;
    test259() == 0 ? ++passed : ++failed;
    test260() == 0 ? ++passed : ++failed;
    test261() == 0 ? ++passed : ++failed;
    test262() == 0 ? ++passed : ++failed;
    test263() == 0 ? ++passed : ++failed;
    test264() == 0 ? ++passed : ++failed;
    test265() == 0 ? ++passed : ++failed;
    test266() == 0 ? ++passed : ++failed;
    test267() == 0 ? ++passed : ++failed;
    test268() == 0 ? ++passed : ++failed;
    test269() == 0 ? ++passed : ++failed;
    test270() == 0 ? ++passed : ++failed;
    test271() == 0 ? ++passed : ++failed;
    test272() == 0 ? ++passed : ++failed;
    test273() == 0 ? ++passed : ++failed;
    test274() == 0 ? ++passed : ++failed;
    test275() == 0 ? ++passed : ++failed;
    test276() == 0 ? ++passed : ++failed;
    test277() == 0 ? ++passed : ++failed;
    test278() == 0 ? ++passed : ++failed;
    test279() == 0 ? ++passed : ++failed;
    test280() == 0 ? ++passed : ++failed;
    test281() == 0 ? ++passed : ++failed;
    test282() == 0 ? ++passed : ++failed;
    test283() == 0 ? ++passed : ++failed;
    test284() == 0 ? ++passed : ++failed;
    test285() == 0 ? ++passed : ++failed;
    test286() == 0 ? ++passed : ++failed;
    test287() == 0 ? ++passed : ++failed;
    test288() == 0 ? ++passed : ++failed;
    test289() == 0 ? ++passed : ++failed;
    test290() == 0 ? ++passed : ++failed;
    test291() == 0 ? ++passed : ++failed;
    test292() == 0 ? ++passed : ++failed;
    test293() == 0 ? ++passed : ++failed;
    test294() == 0 ? ++passed : ++failed;
    test295() == 0 ? ++passed : ++failed;
    test296() == 0 ? ++passed : ++failed;
    test297() == 0 ? ++passed : ++failed;
    test298() == 0 ? ++passed : ++failed;
    test299() == 0 ? ++passed : ++failed;
    test300() == 0 ? ++passed : ++failed;
    test301() == 0 ? ++passed : ++failed;
    test302() == 0 ? ++passed : ++failed;
    test303() == 0 ? ++passed : ++failed;
    test304() == 0 ? ++passed : ++failed;
    test305() == 0 ? ++passed : ++failed;
    test306() == 0 ? ++passed : ++failed;
    test307() == 0 ? ++passed : ++failed;
    test308() == 0 ? ++passed : ++failed;
    test309() == 0 ? ++passed : ++failed;
    test310() == 0 ? ++passed : ++failed;
    test311() == 0 ? ++passed : ++failed;
    test312() == 0 ? ++passed : ++failed;
    test313() == 0 ? ++passed : ++failed;
    test314() == 0 ? ++passed : ++failed;
    test315() == 0 ? ++passed : ++failed;
    test316() == 0 ? ++passed : ++failed;
    test317() == 0 ? ++passed : ++failed;
    test318() == 0 ? ++passed : ++failed;
    test319() == 0 ? ++passed : ++failed;
    test320() == 0 ? ++passed : ++failed;
    test321() == 0 ? ++passed : ++failed;
    test322() == 0 ? ++passed : ++failed;
    test323() == 0 ? ++passed : ++failed;
    test324() == 0 ? ++passed : ++failed;
    test325() == 0 ? ++passed : ++failed;
    test326() == 0 ? ++passed : ++failed;
    test327() == 0 ? ++passed : ++failed;
    test328() == 0 ? ++passed : ++failed;
    test329() == 0 ? ++passed : ++failed;
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22929522&rd=14732&pm=11842
********************************************************************************
#line 90 "ImportantSequence.cpp" 
#include<string> 
#include<vector> 
#include<algorithm> 
#include<map> 
#include<set> 
#include<string.h> 
#include<stdio.h> 
#include<iostream> 
#include<sstream> 
using namespace std; 
class ImportantSequence { 
public: 
  int getCount(vector <int> B, string operators) { 
            int i; 
            int n=B.size(); 
            long long lb=1,rb=30000000000000ll; 
            long long k=1,l=0; 
            for(i=0;i<n;i++){ 
                if(operators[i]=='-'){ 
                    l-=B[i]; 
                }else{ 
                    l=B[i]-l; 
                    k*=-1; 
                } 
                if(k==1)lb=max(lb,-l+1); 
                else rb=min(rb,l-1); 
            } 
            if(lb>rb)return 0; 
            if(rb-lb+1>2147483647ll)return -1; 
            return rb-lb+1; 
  } 
 
 
}; 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/