/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=7417
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

class CardStraights {
public:
    int longestStraight(vector<int> cards);
};

int CardStraights::longestStraight(vector<int> cards) {
    int ret;
    return ret;
}


int test0() {
    vector<int> cards = {0, 6, 5, 10, 3, 0, 11};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
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
    vector<int> cards = {100, 100, 100, 101, 100, 99, 97, 103};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> cards = {0, 0, 0, 1, 2, 6, 8, 1000};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> cards = {1, 9, 5, 7, 3, 4, 0, 0, 0, 10};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> cards = {0, 0, 999999};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 3};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> cards = {1000000};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
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
    vector<int> cards = {1};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
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
    vector<int> cards = {0, 0, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 999999, 1000000, 0, 0, 1000000, 99};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 11;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> cards = {541345, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> cards = {0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> cards = {62462, 62461};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> cards = {675544, 675546};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> cards = {3, 0, 0, 1};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> cards = {1000000, 999997, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> cards = {850675, 850700, 850696, 850716, 850674, 850681, 850676, 850715, 850689, 850720, 850688, 850721, 850677, 850683, 850707, 850686, 850693, 850697, 850692, 850680, 0, 850695, 850699, 850703, 850682, 0, 850719, 0, 850687, 850717, 0, 850698, 850714, 850709, 850710, 850672, 850711, 850702, 850678, 850673, 850705, 850708, 850685, 850690, 850712, 850691, 850718, 850704, 850713, 850679};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> cards = {122333, 122328, 122332, 122338, 122331, 122330, 0, 122334, 0, 122339, 122336, 122335};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> cards = {33680, 33679, 0, 33682, 33688, 0, 33689, 0, 0, 33700, 33698, 0, 33692, 0, 33697, 33693, 0, 0, 0, 33678, 0, 33703, 33681, 33684, 33685, 33687, 33701, 33683, 0, 33699};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> cards = {935123, 935121, 0, 935125, 935116, 935097, 935133, 0, 935120, 935139, 935124, 0, 0, 935126, 935119, 0, 935137, 935138, 0, 935100, 0, 935115, 935129, 935107, 0, 935117, 935112, 935132, 0, 935135, 0, 935111, 935101, 935114, 935131, 935113, 0, 935134, 0, 935140, 0, 935093, 935118, 0, 0, 935103, 0, 935130, 935098};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> cards = {109309, 109299, 0, 109301, 109298, 0, 109308, 109294, 0, 109297, 0, 109295, 0, 0, 109316, 0, 0, 0, 0, 0, 0, 109304, 109303, 109306, 109293, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 26;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> cards = {421450, 0, 0, 421453, 0, 421442, 0, 421437, 421445, 421443, 421441, 421448, 0, 0, 421449, 421447, 421454, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> cards = {731017, 731020, 731044, 731007, 731050, 731025, 731024, 0, 731021, 731027, 0, 731016, 731019, 731055, 731040, 0, 0, 731018, 731054, 731033, 731032, 731045, 731029, 731023, 731022, 731035, 731037, 731051, 731012, 0, 0, 731013, 731008, 731042, 0, 731047, 731043, 731056, 731030, 731034, 731010, 0, 0, 731041, 731049, 731046, 731036, 731031, 731011, 731028};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> cards = {0, 0, 74662, 74661};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> cards = {0, 0, 395667, 395665, 0, 0, 395661, 395652, 395658, 395668, 0, 395663, 395659, 395653, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> cards = {0, 0, 936682, 0, 936701, 0, 0, 0, 936681, 0, 0, 0, 936712, 936713, 0, 0, 936728, 936726, 936704, 0, 936723, 936699, 936690, 936718, 936696, 0, 0, 936694, 936691, 936722, 0, 0, 936708, 0, 936705, 936697, 0, 936721, 936684, 936700, 936689, 936707, 0, 0, 0, 0, 0, 0, 936688};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 49;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> cards = {124395, 124398, 0, 124405, 124392, 124402, 124403, 0, 0, 124388, 124401, 0, 0, 124393, 124394, 124396, 124399, 124404};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> cards = {0, 566124, 566138, 566136, 566112, 566114, 566133, 566123, 566128, 566116, 566118, 566144, 566132, 566143, 566121, 566111, 0, 566127, 566113, 566134, 566115, 566129, 566131, 566145, 566122, 0, 566110, 566135, 566142, 0, 566108, 566109, 566139, 566126, 566130, 566125, 566137, 566119};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> cards = {958803, 958835, 958815, 958836, 958802, 958817, 958816, 958824, 958844, 958840, 958850, 958818, 958805, 958823, 958806, 958822, 958812, 958820, 958832, 958807, 958821, 958827, 958811, 958829, 958839, 958828, 958834, 958804, 958838, 958842, 958810, 958813, 958808, 958843, 958848, 958825, 958837, 958841, 958833, 958831, 958849, 958845, 958814, 958830, 958847, 958819, 958846, 958851, 958826, 958809};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> cards = {389880, 389884, 389888, 389882, 389879, 389878, 389891, 389890, 389887, 389881, 389886, 389883, 389889, 389885};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> cards = {58774, 58773, 58777, 58775, 58776};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> cards = {0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> cards = {801628, 0, 554689, 0, 801624, 250797, 554686, 0, 29894, 554688, 797401, 250799, 353072, 250796, 250807, 0, 353070, 554682, 250803, 801625, 0, 554685, 0, 554687, 353071, 353075, 250801, 0, 458974, 250804, 353073, 0, 353069, 250795, 801620, 250798, 250805, 801631, 554680, 801630, 0, 250800, 554684, 0, 801627, 0, 554683, 801621, 797402, 739295};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> cards = {591009, 251409, 251413, 0, 112199, 310966, 251411, 982530, 112198, 310968, 310965, 251410, 112202, 310967, 112201, 112200, 251412};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> cards = {260045, 0, 363291, 363288, 363283, 0, 363285, 0, 363290, 363281, 363292, 0, 363286, 363296, 363294, 363280, 0, 0, 363297};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> cards = {165378, 0, 165367, 27240, 165364, 165358, 165353, 27239, 165375, 165382, 165373, 165359, 165360, 0, 165366, 165379, 0, 165347, 165365, 317853, 165386, 0, 0, 165380, 0, 0, 0, 165355, 165348, 165356, 0, 165351, 165354, 165384, 0, 165381, 165349, 211328, 27236, 165383, 165372, 165370, 165368, 0, 27238, 165357, 165363, 165362, 27237};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 42;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> cards = {431317, 431320, 431315, 234663, 234665, 234671, 559393, 431319, 234674, 234669, 234673, 234660, 431322, 234666, 234657, 234667, 234668, 234661, 431316, 431312, 559394, 234670, 431321, 431318, 431311, 234664, 234662, 234672, 234658, 431314, 431310, 234675, 234659, 0, 431309};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> cards = {197664, 197661, 241468, 727386, 0, 206627, 0, 616925, 197662, 616924, 0, 0, 241470, 0, 474277, 0, 727385, 616919, 0, 0, 197668, 848814, 0, 0, 616923, 0, 241466, 197665, 616922, 0, 197667, 0, 197669};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> cards = {468075, 766829, 0, 766840, 766830, 766847, 0, 766846, 0, 0, 766853, 766844, 0, 766835, 766820, 0, 468073, 468072, 766827, 473562, 766838, 468078, 766848, 766842, 766826, 0, 0, 766833, 766850, 473559, 0, 0, 0, 766852, 468077, 766834, 0, 766828, 766836, 0, 473561, 0, 766832, 931112, 766823, 0, 766822, 766841, 468074, 766821};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 40;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> cards = {790990, 790985, 790995, 0, 210396, 0, 0, 210387, 791001, 210383, 0, 210399, 790992, 790988, 790986, 790999, 210400, 790984, 790989, 0, 0, 210389, 210398, 0, 790998, 790991, 210392, 790987, 790983, 210386, 210391, 210395, 0, 210393, 0, 791000, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> cards = {847783, 84795, 184804, 184797, 184799, 184802, 537871, 537869, 0, 84801, 951829, 84802, 537878, 0, 951827, 537872, 84797, 184795, 537874, 537870, 184800, 537879, 0, 84800, 847785, 0, 84798, 0, 537866, 951828, 0, 847784, 0, 184801, 537876, 537877, 847789, 84799, 184803, 84803, 847786, 847790, 847782, 184796, 847791, 847787, 537867, 847788};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> cards = {0, 687412, 412378, 687416, 687421, 412374, 0, 687419, 687439, 687407, 687414, 687436, 523537, 0, 687437, 0, 687408, 0, 687430, 412375, 0, 412370, 0, 0, 687428, 412377, 412376, 412369, 687417, 0, 687434, 687409, 687438, 412381, 687423, 687433, 687413, 412380, 687426, 687422, 524558, 687418, 687435, 687425, 687432, 687424, 0, 412373, 412372};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 36;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> cards = {273568, 273558, 935759, 273554, 273552, 935763, 273559, 273556, 935758, 273553, 935762, 169415, 273562, 935760, 273569, 273560, 169417, 273566, 935761, 169414, 169416, 273572, 273555, 273571, 13108, 273563, 0, 273567, 273561, 273570, 273564, 273565, 273557};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> cards = {690342, 0, 205981, 690335, 0, 0, 799390, 0, 393920, 0, 0, 690343, 434757, 690346, 393919, 0, 690337, 0, 0, 0, 525187, 434759, 196207, 434758, 525185, 0, 690336, 969142, 0, 525186, 0, 0, 525188, 0, 690341, 0, 0, 690330, 690331, 0, 0, 690344, 434756};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 29;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> cards = {537729, 0, 338699, 256578, 338700, 336338, 537732, 336349, 271660, 537727, 338698, 537730, 271661, 338702, 612282, 537722, 537720, 336343, 537723, 537721, 537734, 537731, 271662, 336341, 0, 537726, 537735, 338701, 0, 271664, 338694, 537724, 336350, 537733, 336344, 336339, 612283, 338696, 537725, 338697, 336345, 336347, 271665, 612280, 336342, 271663, 336348, 336340, 336346, 271666};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> cards = {432205, 432208, 609435, 161022, 406231, 432204, 432210, 432220, 0, 574626, 161021, 0, 944868, 432215, 504934, 432218, 432216, 574628, 432221, 432217, 432209, 609436, 432213, 432214, 818611, 432207, 432211, 432206, 432219, 432212, 504933};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> cards = {0, 264859, 0, 213532, 264861, 819484, 25496, 264862, 376200, 264860, 884473, 25494, 107262, 25495, 540936, 213530, 213529, 213531, 819485, 376202, 264858, 847360, 819483, 376201, 847361};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> cards = {246185, 482811, 610877, 482831, 0, 482830, 482809, 482800, 482804, 482810, 426983, 482806, 482799, 417871, 482823, 482815, 482816, 610876, 246183, 482824, 482796, 482818, 482826, 0, 482821, 482822, 482798, 246184, 482797, 482828, 482825, 482802, 482813, 482820, 417872, 610878, 482803, 482819, 482807, 482832, 482805, 653876, 246182, 482801, 482814, 482808, 482829, 482827, 482817};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> cards = {0, 300266, 178616, 440266, 0, 692574, 0, 440281, 0, 0, 692573, 440283, 692576, 440271, 0, 0, 692579, 440268, 692575, 0, 440277, 692572, 692581, 0, 440279, 440286, 440267, 440282, 489624, 440278, 0, 440269, 440270, 0, 440264, 440275, 692577, 692580, 440273, 440272, 440262, 358165, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 30;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> cards = {20111, 534889, 451973, 950468, 0, 440236, 703868, 749200, 950473, 950469, 451970, 440235, 20107, 20112, 20106, 950471, 11057, 20104, 20108, 950472, 749199, 20105, 20110, 451972, 556692, 20109, 451974, 749198, 20113, 20114, 440234, 556691, 451971, 950470, 703869};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> cards = {916224, 0, 916236, 261498, 916253, 916246, 79792, 916242, 916228, 656886, 916251, 916232, 968779, 916222, 102514, 916235, 916223, 664710, 79793, 916241, 916257, 0, 656887, 916227, 0, 916254, 916238, 916225, 916252, 916233, 916249, 79794, 916245, 916239, 916229, 916226, 916221, 916248, 261497, 79795, 916244, 916240, 916230, 916243, 916237, 664711, 916247, 916231, 916256, 916234};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 38;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> cards = {927767, 927752, 927755, 99409, 0, 927759, 927756, 927768, 227571, 927764, 927753, 227574, 927769, 927762, 927751, 927748, 927758, 927757, 927763, 227572, 783947, 927750, 927765, 927760, 927761, 927766, 783946, 927749, 927754, 978760};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> cards = {246302, 246301, 338780, 74352, 649937, 338783, 338785, 649935, 74353, 338784, 338786, 692286, 576992, 576993, 246300, 649936, 338781, 0, 69762, 69761, 620460, 620461, 649934, 69763};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> cards = {731636, 731635, 899161, 680006, 606713, 899158, 899155, 276675, 783823, 276674, 899157, 899166, 680008, 899165, 680007, 731638, 899168, 606712, 278505, 899154, 899163, 278503, 478217, 0, 912252, 899156, 899162, 572927, 899160, 912251, 899159, 680003, 680004, 278504, 173367, 899169, 606714, 731640, 899167, 899153, 278502, 899164, 405331, 397546, 783824, 731637, 680009, 634682, 680005};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> cards = {147708, 147706, 147710, 147705, 417418, 0, 147711, 0, 964549, 147709};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> cards = {251323, 251327, 251329, 793264, 0, 0, 251325, 251324};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> cards = {560160, 211461, 652286, 283166, 211463, 250442, 283164, 127534, 13766, 754131, 283165, 417240, 754133, 652285, 27266, 283163, 27268, 27267, 560162, 754132, 159809, 560161, 347840, 211464, 488959, 560792, 727796, 425191, 283167, 153608, 417239, 347842, 127535, 27270, 0, 820143, 27271, 347841, 517796, 446358, 211460, 347843, 784344, 27269, 548493, 211462, 677140, 675787, 524342, 27265};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> cards = {695988, 695986, 0, 695987, 873185, 308647, 104141};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> cards = {711967, 205931, 711968, 57608, 205929, 549571, 311141, 840923, 186645, 665333, 452650, 221360, 485916, 57609, 348493, 710594, 18809, 205928, 57607, 398499, 452649, 205930, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> cards = {403739, 84182, 328768, 771406, 328778, 771419, 953763, 328769, 0, 379011, 771417, 379009, 775854, 771421, 771415, 771412, 328775, 379008, 403738, 771409, 328770, 771424, 328773, 771407, 35610, 771405, 478069, 771416, 328772, 328774, 771411, 771418, 771422, 771410, 328776, 771408, 771423, 771404, 771425, 328767, 529827, 875327, 738672, 328771, 771420, 328777, 379010, 771403, 771414};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 23;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> cards = {269789, 38678, 38680, 38691, 38689, 127456, 612306, 38685, 38686, 825702, 0, 38677, 612307, 38681, 127455, 127457, 38673, 442874, 56562, 38690, 38687, 38674, 38684, 589915, 38672, 38692, 442873, 442872, 98233, 825701, 529316, 442875, 266964, 401141, 127458, 38683, 38675, 38682, 38688, 38679, 52901, 227176, 38676};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 22;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> cards = {95951, 437018, 734976, 519303, 734974, 428912, 519301, 437015, 899278, 0, 428911, 457003, 549300, 49330, 734975, 437014, 519302, 592798, 549301, 437016};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> cards = {271810, 323409, 44256, 385729, 56386, 577109, 588159, 110314, 726948, 806690, 936924, 618039, 925759, 498338, 741715, 119187, 593314, 653722, 78037, 743068, 347750, 477542, 741564, 589080, 122455, 900458, 291331, 789101, 476674, 998884, 124505, 582731, 558915, 309733, 540687, 313806, 846493, 608567, 577350, 292237, 780106, 53302, 224506, 265633, 847115, 44558, 576764, 297751, 681593, 974484};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> cards = {377390, 830395, 96528, 823742, 65118, 31015, 729837, 988859, 232666, 873209};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> cards = {297002, 75192, 513276};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> cards = {478940, 610628, 299823, 129175, 305098, 947708, 498513, 121059, 151218, 484728, 799529, 625670, 863484, 766428, 174646, 534340, 833285, 303198, 177619, 690224, 245407, 3028, 817295, 3743, 806801, 598928, 70172, 546456, 582060, 528029, 846475, 298380, 768599, 540465, 173007, 349124, 330346, 616329, 673294, 795640, 832011, 822598, 929374, 403158, 111075, 418635, 504052, 92321, 970311};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> cards = {663522, 252425, 0, 146493, 0, 659574, 694424, 801451, 0, 247808, 364539, 523403, 624650, 135438, 874856, 850528, 38188, 419652, 387955, 0, 0, 783171, 921214, 991263, 719157, 273832, 759755, 732584, 0, 30453, 0, 345932, 0, 750488, 813510, 808981, 552705, 369696, 687739, 31696, 0, 378880, 735601, 0, 270194, 608228, 0, 0, 648890, 907552};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> cards = {970960, 0, 856584, 0, 0, 0, 966512, 153202, 0, 252582, 208570, 0, 704398, 907418, 393339, 0, 578545, 497837, 193975, 0, 934670, 611330, 221000, 433389, 0, 736591, 0, 0, 0, 430534, 965165, 511182, 309281};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> cards = {559998, 0, 0, 315160, 22137, 309704, 715382, 370041, 0, 611095, 456222, 584059, 12689, 277494};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> cards = {129722, 2653, 847094, 689532, 371309, 840682, 97231, 0, 56874, 0, 111366, 42920, 0, 31534, 0, 0, 0, 766025, 375229, 0, 315425, 0, 0, 0, 526476, 0, 0, 274729, 0, 440992, 400210, 389819, 621005, 0, 721534, 763288, 672970, 913263, 17721, 616545, 0, 0, 836856, 0, 499754, 340813, 233455, 830803, 390513};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> cards = {0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> cards = {0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 99};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 48;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> cards = {999951, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 999978, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> cards = {40502, 271871, 499190, 499190, 40502, 40502, 40502, 499190, 499190, 0, 40502, 267780, 499190, 499190, 499190, 499190, 40502, 499190, 499190, 973985, 40502, 40502, 499190, 499190, 40502, 40502, 40502, 40502, 40502, 499190, 40502, 499190, 499190, 40502, 499190, 499190, 40502, 40502, 40502, 499190, 40502, 40502, 40502, 267780, 267780, 40502, 40502, 40502, 499190, 499190};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> cards = {558838, 558838, 0, 0, 558838, 558838, 558838, 0, 558838, 558838, 0, 558838, 558838, 0, 0, 558838, 0, 558838, 0, 822012, 558838, 0, 0, 0, 558838};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> cards = {320116, 320116, 320116, 437150, 320116, 182978, 0, 320116, 320116, 0, 437150, 320116, 320116, 320116, 320116, 182978};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> cards = {189713, 0, 0, 189713, 0, 0, 189713, 0, 189713, 189713, 189713, 0, 189713, 189713, 189713, 189713, 0, 0, 0, 189713, 189713, 189713, 0, 0, 189713, 0, 189713, 0, 189713, 0, 806224, 0, 0, 0, 0, 189713, 189713, 0, 0, 189713, 0, 0, 189713, 189713, 189713, 0, 189713, 0, 189713};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 25;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> cards = {0, 555315, 555315, 210702, 0, 0, 555315, 210702, 555315, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> cards = {894939, 639549, 894939, 639549, 639549, 894939, 0, 263853, 86678, 86678, 894939, 639549, 0, 86678, 639549, 894939, 86678, 86678, 86678, 894939, 639549, 86678, 86678, 0, 0, 894939, 0, 639549, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> cards = {16048, 339812, 16048, 352582, 54977, 16048, 352582, 352582, 352582, 0, 16048, 0, 0, 0, 352582, 0, 54977, 54977, 16048, 16048, 0, 16048, 16048, 339812, 16048, 0, 16048, 0, 16048, 16048, 16048, 16048, 0, 352582, 16048, 0, 0, 0, 0, 54977, 0, 16048, 16048, 0, 352582, 0, 16048, 16048, 0, 352582};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> cards = {0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
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
    vector<int> cards = {0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> cards = {0, 0, 0, 0, 0, 6, 7};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> cards = {0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> cards = {0, 0, 1, 2, 4, 5, 6, 9, 10, 11, 12, 14};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> cards = {0, 5};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> cards = {5, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> cards = {1, 0, 100, 0, 500};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> cards = {0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> cards = {1000000};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> cards = {0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> cards = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39, 41, 43, 45, 47, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> cards = {0, 0, 17};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> cards = {0, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> cards = {0, 999998, 1000000, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 16;
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> cards = {0, 0, 0, 0, 5};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> cards = {0, 0, 0, 4, 5, 6, 7};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> cards = {1, 10};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> cards = {1, 2, 4, 5, 2, 3, 5, 2, 0, 56, 345, 2, 123123, 0, 0, 0, 0, 3, 5, 234, 5, 345, 34, 2, 2345, 345, 36, 4567, 567, 567, 867, 856, 73, 45, 2345, 234, 52, 31, 3, 123, 423, 123, 123, 12344};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 15;
    if(result == expected) {
        cout << "Test Case 109: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 109: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test110() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 21;
    if(result == expected) {
        cout << "Test Case 110: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 110: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test111() {
    vector<int> cards = {0, 1};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> cards = {0, 0, 0, 1000000};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 112: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 112: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test113() {
    vector<int> cards = {1, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> cards = {0, 0, 1, 2, 5, 11, 12, 13, 14, 15, 16, 17};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> cards = {0, 0, 0, 1};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> cards = {0, 0, 0, 1, 999999, 1000000};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 3};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> cards = {1};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 118: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 118: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test119() {
    vector<int> cards = {0, 0, 0, 1, 3};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> cards = {1000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 50;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> cards = {0, 0, 1000000, 999999};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> cards = {1000000, 0, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> cards = {999999, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> cards = {0, 0, 3, 4};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> cards = {999999, 999998, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 2, 3, 4};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 14;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> cards = {0, 7};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 2, 3, 4, 20, 21, 22, 23, 24, 25, 26};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> cards = {1000000, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> cards = {1, 4, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 18;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> cards = {1, 5, 10, 11, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> cards = {1, 2, 3, 0, 0, 0, 5, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> cards = {0, 0, 1, 4, 5, 6, 8, 9, 11};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 20;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> cards = {1000000, 1000000, 1000000, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> cards = {0, 0, 0, 0, 0, 3, 0, 0, 0, 5, 7, 8, 14};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> cards = {1, 2, 2, 3};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> cards = {0, 0, 0, 0, 0, 239};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> cards = {0, 1, 1000, 2000, 3000, 4000, 5000, 6000, 7000, 8000, 9000, 10000, 11000, 12000, 13000, 14000, 15000, 16000, 17000, 18000, 19000, 20000, 21000, 22000, 23000, 24000, 25000, 26000, 27000, 28000, 29000, 30000, 21000, 22000, 23000, 24000, 25000, 26000, 27000, 28000, 29000, 30000, 20000, 300000, 999997, 999998, 999999, 1000000};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 3, 20, 10};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 12;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> cards = {1000000, 999999, 0, 0, 1};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1000000};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> cards = {1, 2, 3};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> cards = {999998, 999999, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> cards = {999998, 999999, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 7;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> cards = {999999, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> cards = {0, 0, 1, 1000, 1000000, 99999};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> cards = {5, 4, 0, 0, 1, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 6;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 13;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> cards = {0, 0, 0, 0, 0, 0, 0, 0};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 8;
    if(result == expected) {
        cout << "Test Case 150: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 150: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test151() {
    vector<int> cards = {1, 1000};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 151: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 151: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test152() {
    vector<int> cards = {0, 0, 0, 1, 2, 6, 8, 9, 10, 12, 14};
    CardStraights* pObj = new CardStraights();
    clock_t start = clock();
    int result = pObj->longestStraight(cards);
    clock_t end = clock();
    delete pObj;
    int expected = 9;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=15878380&rd=10661&pm=7417
********************************************************************************
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <inttypes.h>
#include <ctype.h>
 
#include <algorithm>
#include <utility>
#include <vector>
#include <string>
#include <iostream>
 
using namespace std;
 
#define TRACE(x...) x
#define PRINT(x...) TRACE(printf(x))
#define WATCH(x) TRACE(cout << #x" = " << x << "\n")
 
int is[1000010];
 
struct CardStraights {
  int longestStraight(vector <int> cards) {
    int N = cards.size();
    int J = 0;
    memset(is, 0, sizeof(is));
    for (int i = 0; i < N; i++) {
      if (cards[i] == 0) {
        J++;
      } else {
        is[cards[i]] = 1;
      }
    }
    int ans = 0;
    for (int i = 1; i <= 1000000; i++) {
      int R = J, best = 0;
      for (int j = i; j <= 1000000; j++) {
        if (is[j]) {
          best++;
          continue;
        } else if (R) {
          R--;
          best++;
          continue;
        } else break;
      }
      ans = max(ans, best);
    }
    return ans;
  }
};
 
// Powered by PopsEdit

********************************************************************************
*******************************************************************************/