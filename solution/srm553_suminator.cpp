/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11354
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

class Suminator {
public:
    int findMissing(vector<int> program, int wantedResult);
};

int Suminator::findMissing(vector<int> program, int wantedResult) {
    int ret;
    return ret;
}


int test0() {
    vector<int> program = {7, -1, 0};
    int wantedResult = 10;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> program = {100, 200, 300, 0, 100, -1};
    int wantedResult = 600;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {-1, 7, 3, 0, 1, 2, 0, 0};
    int wantedResult = 13;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {-1, 8, 4, 0, 1, 2, 0, 0};
    int wantedResult = 16;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> program = {7, -1, 3, 0};
    int wantedResult = 3;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {315291978, -1, 0, 55598902, 0};
    int wantedResult = 703034801;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 332143921;
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> program = {242118690, 483584629, -1};
    int wantedResult = 725703319;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {360518734, -1, 0};
    int wantedResult = 628719390;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 268200656;
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> program = {28107371, 157214073, 116123103, 430918710, 0, 0, 0, -1, 0};
    int wantedResult = 736756081;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 4392824;
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> program = {17389086, 971075642, -1};
    int wantedResult = 988464728;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {585983170, -1, 0};
    int wantedResult = 981293046;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 395309876;
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> program = {808312155, 85035091, -1};
    int wantedResult = 893347246;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {-1, 749942586, 0};
    int wantedResult = 775380477;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 25437891;
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> program = {429184190, 108889203, -1};
    int wantedResult = 538073393;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> program = {19368652, 131711616, 347313404, 0, -1};
    int wantedResult = 498393672;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> program = {27554278, 17337966, 0, 56877584, 27250977, 24654333, 0, 95244498, 0, 0, 80572612, 0, 0, 48429664, 86916536, 0, 87348885, 29024272, 0, 0, 0, 58309589, 67899872, 31402538, 0, 57195876, 0, 65223972, 0, 32519795, 380796, 0, 26527035, 0, 0, 0, -1, 6819708, 7681057, 0, 12061011, 0, 0};
    int wantedResult = 947232854;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> program = {6121784, 37579799, 42054671, 0, 0, 21650056, 42465117, 0, 19699029, -1, 0, 62475162, 82954834, 60533217, 0, 60906322, 27490398, 0, 0, 0, 0, 17457492, 62465630, 7676347, 0, 0, 66209524, 0, 78811351, 34979933, 0, 0, 0};
    int wantedResult = 731530666;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> program = {22203450, 82299496, 0, 7038659, 60308119, 81529514, 0, 48346978, -1, 0, 0, 25143746, 0, 0, 82495369, 0, 0, 79657184, 15611548, 0, 0, 7384260, 58361068, 53937964, 0, 0, 40839007, 42257011, 0, 9251722, 0, 49696141, 0, 58916453, 0, 0, 65659131, 0, 0};
    int wantedResult = 948785511;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 57848691;
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> program = {2393490, 56408385, 73433210, 33640283, 70413538, 0, 0, 2651077, 75556057, 0, 0, 81458762, 66135028, 0, 53468221, 0, 0, 82463513, 70665058, 51438458, 0, 0, 50153796, 55047141, 0, 0, 0, -1, 0};
    int wantedResult = 825326017;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> program = {8968086, 71183583, 21372385, 0, 0, 45663719, 91377290, 41206862, 0, 0, 52648830, 0, 76870920, 0, 32435288, 56551108, 0, 0, 0, 68210949, 9317952, 0, 32366429, 11070050, 69173085, 0, 13258192, 0, 0, 29679029, -1, 0, 0};
    int wantedResult = 731353757;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> program = {16869820, 51221912, 94011778, 0, 17074086, 0, 0, 13997877, 0, 32307577, 76801615, 36596734, 0, 0, 0, 85763579, 88547759, 0, 55025034, -1, 52024955, 0, 9695889, 0, 75309749, 44536073, 0, 55465839, 0, 0, 0, 0, 0};
    int wantedResult = 900729282;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 95479006;
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> program = {1906618, 73193354, 0, 5183734, 72381, 0, -1, 0, 44586187, 7897709, 0, 36571227, 92972392, 0, 0, 0, 61692364, 59280198, 70327032, 0, 34037300, 0, 9948593, 0, 0, 55500096, 0, 0, 16628763, 56926570, 3158331, 0, 13038238, 0, 62028644, 91031966, 0, 0, 0, 41275821, 0, 0, 0, 56235962, 15363972, 0, 0};
    int wantedResult = 933314801;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 24457349;
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> program = {21300835, 7893779, 0, 69177473, 3281250, 5303217, 0, 60276620, 0, 0, 43725318, 35171555, 0, 69839608, 28652498, 94146503, 0, 108850, 0, 74423631, 20449449, 0, 0, 1776066, 42250851, 0, 0, 31465253, 0, 0, 0, 99078543, 22476310, 89104559, 33143272, 0, 10693493, 0, 0, 0, 0, 0, -1};
    int wantedResult = 863738933;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {60170971, 87285249, 0, 74360457, 24322550, 0, 77970602, 75256921, 554413, 0, -1, 0, 27187444, 63945021, 0, 50080571, 23513604, 97407919, 0, 0, 71388131, 0, 0, 48208912, 0, 0, 0, 55781581, 61460360, 0, 0};
    int wantedResult = 898894706;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> program = {59944435, 3875246, 79043002, 25796131, 0, 37020529, 0, 0, 35488475, 0, 83060151, 169344, 0, 66849600, 14319108, 0, 0, 0, 55515921, 43969692, 0, -1, 0, 77356161, 91104921, 0, 0, 0, 0, 45174426, 62189700, 0, 0};
    int wantedResult = 814454357;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 33577515;
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> program = {98423334, 40389105, 77840151, 34702292, 40769476, 2026722, 0, 63164352, 0, 53095687, 82052748, 41232966, 74759175, 57505634, 0, 0, 0, 16933623, -1, 0, 20533073, 0, 0, 62312725, 49491340, 80813023, 11761410, 0, 0, 0, 30028143, 56269325, 0, 77231511, 29781155, 0, 0, 0, 0};
    int wantedResult = 849762088;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {90456225, 85312801, -1, 93541849, 90015805, 0, 0, 79829127, 55845796, 0, 0, 14659918, 18832075, 7515373, 0, 60031859, 0, 0, 0, 93327133, 0, 50620889, 66619994, 66426447, 0, 0, 88287780, 13169100, 0, 0, 0, 12158979, 0};
    int wantedResult = 849835476;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 38953352;
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> program = {14938044, 46246998, 85902525, 2416658, 27232359, 0, 0, 27246177, 46222391, 0, 8475680, 31761455, 63084522, 0, 0, 2702197, 0, 64118410, 64013290, 0, 65506550, 98935847, 0, 5076046, 80102234, 49465450, 0, -1, 0, 99070854, 89669472, 0, 0, 0, 0, 0, 0};
    int wantedResult = 911002117;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> program = {45743656, 29111629, 29808213, 8037071, 71283894, 0, 75917069, 0, 59844809, 0, 24035971, 67204919, 0, 30570008, 42088729, 0, 0, 69669113, -1, 0, 41567270, 37250545, 0, 0, 0, 56111537, 0, 26799697, 62773021, 0, 0, 0};
    int wantedResult = 683827216;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 10673563;
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> program = {79243676, 95900435, 95363426, 0, 53929344, 18108136, 0, 11020340, 0, 72950603, 52748967, 59770766, 0, 31059099, 98175993, 0, 43868893, 0, 0, 0, -1, 36781007, 0, 53727860, 83280877, 0, 0, 0, 0, 0};
    int wantedResult = 858785097;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 52099351;
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> program = {48113759, 6699772, 17036353, 39342250, 78863665, 5611809, 92220838, 0, 93728808, 0, 19795792, 22264008, 0, 48569202, 0, 0, 0, 77108548, 0, 74525174, 74904464, 0, 32764045, 0, 81117315, 0, 74565894, 24098381, 0, 6408936, 25943227, -1, 0, 26269372, 78878026, 13679000, 0, 0, 0, 0, 0};
    int wantedResult = 951316504;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> program = {85062112, 18746825, 57233685, 59543708, 0, 28864697, 0, 80448723, 0, 0, 62684571, 44579929, -1, 16611469, 25587465, 0, 90265906, 0, 0, 99382320, 91339916, 57656571, 0, 0, 0, 20202118, 0, 0, 14851696, 67271105, 0, 67553630, 13796062, 0, 0, 0};
    int wantedResult = 916620396;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> program = {83191762, 51967785, 29386946, 49982786, -1, 0, 40039437, 5735068, 0, 0, 44049021, 49149340, 0, 0, 27869343, 10451002, 0, 20708423, 0, 70588499, 0, 73201533, 9816665, 0, 0, 74990186, 92961936, 0, 2735492, 0, 46747896, 0, 0, 0};
    int wantedResult = 694354117;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 75327490;
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> program = {90890752, 52886353, 39874533, 86620279, 60675504, 41113674, 0, 77749103, 47677476, 0, 15738275, 71457403, 15584516, 0, 29283919, 41965110, 0, 0, 0, 0, 0, 9603159, 0, 84668136, 46882061, 0, 0, 13156925, 56568327, 55601319, -1, 0, 78422544, 46925617, 9639952, 0, 0, 0, 0};
    int wantedResult = 802713020;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> program = {49715430, 5526199, 87281548, 0, 36463972, 21245176, 46179840, 0, 0, 0, 29836599, 15418748, 0, 43943801, 27877246, 66693517, 22809386, 0, 52321737, 0, 0, 0, 0, 0, 56578810, 48758945, 63321081, 96648320, 0, -1, 0, 0, 0, 0};
    int wantedResult = 784529097;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 63624172;
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> program = {54935281, 68594537, -1, 30167972, 6251648, 30104310, 55589738, 0, 8634584, 60608308, 65445346, 0, 0, 0, 47557432, 34644269, 0, 6555666, 0, 21897301, 73294612, 57761996, 0, 0, 0, 44758725, 40299341, 0, 55950654, 0, 42940566, 0, 0, 53744745, 85569015, 0, 0, 0};
    int wantedResult = 785356608;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> program = {-1, 4157188, 20144091, 34028992, 0, 0, 58285104, 46054299, 60039873, 0, 0, 56665373, 0, 71181655, 8120218, 0, 0, 28485199, 21600051, 94165749, 85272877, 0, 0, 0, 0, 0, 24266805, 48090490, 50435958, 0, 0, 2035946, 91560907, 8456936, 0, 35942693, 85304843, 62280523, 0, 0, 0, 0, 0, 0};
    int wantedResult = 996575770;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> program = {8709400, 9166572, 94585811, 81226439, -1, 66640251, 68697334, 0, 87915046, 77265579, 90477471, 0, 36675609, 0, 0, 72337658, 67974877, 0, 71659436, 0, 0, 0, 86618732, 15702153, 0, 57793274, 38368034, 35294672, 0, 0, 69085366, 0, 0, 0};
    int wantedResult = 942505492;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> program = {35880404, -1, 40944277, 38334477, 84675446, 86719767, 8569974, 0, 0, 0, 37464173, 2485920, 33060234, 75739762, 0, 0, 0, 64824343, 0, 0, 44406595, 40668925, 29023893, 0, 0, 87729953, 0, 0, 42202011, 16418266, 0, 77322234, 0, 49625137, 0, 0};
    int wantedResult = 819271110;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> program = {46496316, -1, 40244435, 57054136, 82504991, 84752051, 0, 22163114, 0, 40078641, 18135857, 91067969, 0, 0, 0, 0, 0, 99625812, 40726852, 0, 25547835, 57479783, 31264082, 0, 57716052, 0, 0, 6114861, 0, 0, 0};
    int wantedResult = 754476471;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> program = {-1, 9830727, 88031936, 87169296, 0, 0, 92678444, 53357920, 0, 0, 97396811, 47600544, 0, 5008467, 56646835, 0, 0, 58936643, 0, 0, 21665011, 48348970, 0, 98139588, 0, 76022724, 70367407, 0, 0, 18214786, 0, 37200731, 0, 0};
    int wantedResult = 966616840;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> program = {34412299, -1, 54752466, 1426673, 0, 58447631, 14847682, 21713679, 56247078, 83833685, 0, 0, 55563755, 0, 0, 0, 0, 43151512, 6067172, 0, 63206457, 25322989, 0, 14019712, 0, 0, 57184614, 28776201, 0, 937026, 61811064, 0, 0, 0, 24825650, 49201691, 0, 0, 14036421, 68806402, 15463303, 0, 0, 0, 0};
    int wantedResult = 819642863;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {-1, 58431741, 94439105, 96665047, 69617029, 0, 73394230, 0, 0, 79513756, 95163740, 0, 23586389, 0, 0, 18106551, 66764824, 0, 7185148, 0, 29656654, 0, 4721788, 70639377, 0, 0, 78454355, 2847959, 57657308, 0, 0, 0, 0};
    int wantedResult = 868413260;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> program = {65313989, 29224385, 47350053, 1646938, -1, 47886094, 90383913, 5461838, 56942461, 0, 55749776, 0, 0, 0, 98810333, 57788195, 0, 60802583, 10072319, 25604929, 0, 0, 19126863, 0, 54149019, 10957755, 40228468, 0, 10888062, 0, 0, 0, 0, 0, 30764764, 5310015, 83796410, 0, 0, 0};
    int wantedResult = 764723797;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> program = {-1, 68149726, 18957574, 0, 54496335, 0, 52778519, 45633253, 84931199, 0, 0, 67877059, 63951830, 98291967, 11146302, 0, 0, 0, 0, 90327581, 82532071, 0, 0, 34381598, 0, 0, 7415297, 0, 87837557, 0, 22703326, 21049749, 0, 15857940, 0, 8083428, 0, 0};
    int wantedResult = 936402311;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> program = {582754528, 494887055, 591828883, 144176393, 119650471, 0, 739891773, 0, 589412237, 616162214, 382470605, 0, 0, -1, 354633409, 142155495, 690477455, 0, 380431293, 546406944, 218510074, 0, 0, 0, 0, 0, 335579968, 949638819, 803304197, 0, 561578075, 0, 0, 412439300, 833824263, 0, 0, 0};
    int wantedResult = 882074298;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> program = {845151429, 60888921, 349419441, 452722179, 698157266, 589688000, 0, 0, 614020210, 917738413, 0, 0, 984300555, 785675697, 623438381, 865773912, -1, 0, 0, 202538864, 576905676, 0, 320406658, 0, 634482942, 379832022, 241814338, 0, 0, 0, 0, 0, 815856524, 588150990, 672632541, 704357226, 0, 0, 205398249, 0, 0, 0, 0};
    int wantedResult = 122233108;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {279808452, 620805437, 83635404, 838871679, 857178021, 691041863, 84348544, 575676690, 0, 910430492, 0, 215400751, 238179932, 0, 525142367, 0, 0, 0, 11990241, 957341740, 0, 0, 934141887, 418006881, 0, 267811800, 555461679, 0, 432168824, 835612860, 0, 0, 0, 568807639, 201562867, 0, 47484219, 0, 0, 934223454, 110523480, 0, -1, 0};
    int wantedResult = 925423618;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> program = {605408652, 230633679, 179958601, 282903749, 0, 223697969, 245883197, 0, 0, 771536505, 0, 0, 266036721, 0, 742945916, 651004715, 0, 712341879, 0, 58528233, 0, 104776063, 699406000, 0, 0, 103374037, 811802165, 0, 577168694, 668961064, 675998885, 0, 258195776, 0, 0, 272701409, 0, -1, 0, 0};
    int wantedResult = 853785525;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {357238094, 130331731, 747170763, 360259568, 28651631, 262180699, 510844152, 0, 32695546, 0, 473721555, 894547214, 0, 0, 694755401, 629958322, 0, 324999126, 586928525, 0, 484829140, 509725543, 0, 0, 0, 0, 87370995, 434980501, 0, 374686812, 0, 433091693, 338728248, -1, 0, 0, 0, 450777857, 160856759, 695081255, 710246554, 0, 0, 0, 0, 0};
    int wantedResult = 598941299;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {61839030, 430305560, 293919480, 852410070, 729929915, 0, 877601219, 662380493, 324369743, -1, 0, 0, 0, 997831150, 777002476, 0, 51468784, 259336732, 835531355, 538188462, 0, 0, 0, 0, 0, 0, 974504720, 644046695, 222184467, 0, 764704646, 0, 0, 0, 383678630, 526245602, 553840716, 0, 0, 0};
    int wantedResult = 111816257;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> program = {551199873, 712588991, 834935381, 291061285, 10564320, 975108071, 593114393, 0, 474890090, 654018463, 0, -1, 0, 271647513, 274431195, 250660747, 0, 163935318, 648116283, 0, 0, 824868970, 777625223, 0, 252665572, 937252197, 793175882, 0, 0, 0, 0, 374375300, 296261313, 0, 644355911, 302841151, 0, 0, 0, 0, 0};
    int wantedResult = 929973320;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {789654684, 566364589, 132807813, 954342599, 35537713, 167014159, 0, 0, 527502165, 863260323, 0, 62519272, 0, 109943112, 515518880, 438991295, 0, 0, 0, 388935264, 172607760, 489587296, 486148885, 485583952, 0, 0, 0, 0, 0, 0, 0, 43897666, -1, 0, 686446611, 0, 610840718, 45645333, 0, 0, 0, 913613509, 612042210, 0, 0};
    int wantedResult = 238208598;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> program = {882928983, 484511801, 277557010, 936093524, 345945601, 163322780, 502092255, 61844818, 0, 0, 768651124, 740375801, 0, 0, 125802453, 711152557, 0, 713283832, 763971211, 0, 0, 251782937, 0, 85343659, 217269316, 0, 868727608, -1, 719504744, 0, 142872132, 751395802, 0, 279682500, 348539127, 0, 0, 234720762, 0, 0, 0, 467439019, 0, 0};
    int wantedResult = 327839845;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {636752772, 570097146, 542987086, 333070396, 598017840, 166886122, 56087870, 0, 404381561, 0, 515108199, 302263989, 0, 691864340, 0, 0, 765471580, 117113339, 775001859, 406695768, -1, 0, 346614879, 822838605, 0, 42191846, 213272479, 0, 380799912, 0, 0, 0, 0, 368656183, 22664848, 0, 0, 590866005, 109393731, 0, 537892273, 0, 221828339, 253253843, 0, 0, 0, 0};
    int wantedResult = 811114757;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {19131545, 85268859, 33001208, 0, 29983140, 97917399, 49247737, 14086271, 0, 2185239, 0, 0, 0, -1, 8931147, 0, 11229782, 28945949, 2238603, 0, 71704020, 46480929, 0, 0, 0, 0, 65128034, 0, 51892068, 48599014, 83333940, 0, 26603693, 70382155, 0, 0, 0, 0, 0, 0};
    int wantedResult = 859960311;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 32801124;
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> program = {99695872, 66155921, 24299051, 35949126, 76544886, 30362054, 0, 0, 44591431, 0, 63428127, 26510939, 5480247, 14060401, -1, 0, 0, 46048334, 0, 0, 0, 0, 24924352, 97240994, 0, 22291066, 44036112, 0, 14337533, 0, 0, 0, 11095091, 27803079, 0, 66037805, 0, 0, 0, 0, 44554281, 0};
    int wantedResult = 800031701;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 14280871;
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> program = {82391954, 10400084, 92247077, 60007666, 57322244, 0, 0, -1, 3373274, 38863286, 0, 0, 0, 16390235, 0, 0, 67268376, 6531820, 71012161, 0, 56430180, 0, 0, 23703630, 69736201, 0, 0, 46759468, 0, 40187867, 26039833, 0, 85457307, 0, 45245474, 0, 29609600, 0, 0, 0};
    int wantedResult = 904959838;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 58374055;
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> program = {68247897, 49287772, 10572649, 86863478, 14666187, 0, 0, 68266695, 7474313, 0, 17306033, 0, 0, 21619285, 64353467, 89665922, 0, 61298184, 0, 1028086, 57375104, 0, 0, 0, 0, 86018538, 11043517, 30158469, 0, 0, 0, -1, 56449860, 0, 29193381, 0, 64001822, 56576912, 0, 0, 0};
    int wantedResult = 932677219;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 98745317;
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> program = {16272577, 30273166, 77316801, 70628577, 0, 4101760, 37893993, 0, 0, 58090962, 0, 33154385, 68520270, 63769491, 0, 79212934, 0, 0, 27171237, 0, 0, 52303370, 96162546, 23110277, 37005114, 0, 0, -1, 0, 37219951, 18158636, 0, 0, 36510303, 56478151, 60714245, 22950728, 0, 0, 0, 0, 0, 0};
    int wantedResult = 989911080;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 29437349;
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> program = {43913989, 67364946, 87902954, 0, 20891448, 0, 65989383, 34904322, 0, 30949411, 0, -1, 7773816, 0, 0, 29370199, 0, 95561039, 27491404, 70754139, 0, 65523689, 0, 0, 0, 0, 15152079, 98468232, 0, 45979533, 0, 13887985, 25850246, 87874780, 0, 52786826, 0, 0, 0, 0};
    int wantedResult = 946547828;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 2071397;
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> program = {92815231, 67583132, 30481888, 45535974, 0, 49136747, 18931635, 0, 29580054, 12538637, 0, 31375171, 0, 0, 90370711, 0, 0, 39261806, 77945892, 0, 71553248, 22308530, 59208691, 0, 31085687, 0, 85036012, 0, 0, 0, 63302613, 298108, 0, 62351614, -1, 0, 18916716, 55959335, 0, 0, 34748974, 0, 0, 0, 0};
    int wantedResult = 950992003;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 21063960;
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> program = {27058474, 16722355, 36561517, 79508329, 0, 42492098, 0, -1, 0, 19370814, 36965519, 0, 19149836, 0, 44202294, 33260787, 0, 19765702, 0, 0, 0, 13912838, 27953332, 57136287, 0, 91984852, 0, 36889382, 0, 68421542, 66276672, 0, 92610780, 0, 99678411, 0, 0, 60122284, 0, 0, 0};
    int wantedResult = 969429368;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 23166092;
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> program = {72350534, 85809165, 19840937, 5351128, 39700567, 0, 38739611, 65341718, 0, 58992212, 40737835, 63497995, 0, 0, 5186661, 47796098, 0, 33923050, 0, 0, 0, 0, 79467913, 68362497, 0, 0, 0, 33382896, 55790532, 0, 2523312, -1, 74966375, 0, 0, 89182011, 63253397, 0, 0, 0, 0};
    int wantedResult = 939405737;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 53368992;
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> program = {29094678, 24507371, 13695287, 0, 38106846, 59517030, 0, 63930879, 44169284, 0, 16169976, 0, 0, 14021954, 6697649, 89651613, 0, 0, 0, 0, 1319858, 18396546, 9005948, 95521177, 0, 0, 0, 26090599, 58325190, 76262307, 12457609, 0, 74495673, 0, 0, 0, -1, 0, 38449202, 0, 0, 0};
    int wantedResult = 803043208;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 22251210;
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> program = {-1};
    int wantedResult = 1;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {1, 1, -1, 1, 0};
    int wantedResult = 1;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {-1, 444, 921, 0, 764, 0, 455, 625, 0, 0, 15, 908, 0, 618, 864, 0, 0, 0, 731, 686, 0, 0, 751, 20, 0, 75, 116, 0, 0, 0, 212, 884, 0, 58, 146, 0, 655, 631, 0, 0, 0, 59, 0, 387, 0, 0};
    int wantedResult = 11025;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {-1, 442, 730, 609, 0, 7, 0, 0, 201, 763, 0, 620, 613, 0, 0, 399, 676, 250, 0, 260, 0, 0, 955, 926, 238, 0, 812, 0, 0, 0, 0, 554, 990, 0, 227, 117, 0, 0, 0, 0};
    int wantedResult = 10389;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {893, -1, 457, 460, 169, 0, 504, 0, 0, 384, 116, 0, 28, 885, 0, 652, 515, 0, 0, 938, 143, 0, 0, 330, 0, 789, 326, 319, 0, 0, 745, 113, 0, 0, 859, 0, 342, 15, 658, 0, 0, 0, 0, 0, 0};
    int wantedResult = 9747;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {168, 191, 927, 0, 164, 785, 0, 616, 0, 92, 0, 217, 563, 0, 986, 334, 0, 0, 0, 976, 644, 0, 25, 376, 0, 0, 331, 668, 0, 5, 0, 330, -1, 0, 0, 0, 0, 229, 254, 0, 0, 0};
    int wantedResult = 9441;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 728;
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> program = {430, 222, 389, 0, 235, 132, 128, 795, 0, 0, 0, 623, 437, 0, 724, 883, 0, 654, 549, 831, 0, 0, 0, 35, 550, 280, 956, 194, 167, 0, 0, 0, 0, -1, 0, 0, 601, 374, 0, 0, 787, 0, 0, 0, 0, 0};
    int wantedResult = 10551;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> program = {914, 558, 421, 4, 0, 5, 108, 0, 0, 23, 885, 0, 972, 722, 0, 298, 0, 0, 181, 167, 0, 338, 0, 527, 75, 488, 698, 0, 0, 919, 312, 0, 971, 0, 265, 0, 0, 0, 0, 0, 111, -1, 0, 0, 0};
    int wantedResult = 9144;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 654;
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> program = {191, 134, 619, 450, 685, 11, 0, 0, 0, 402, 68, 0, 30, 909, 0, 131, 384, 416, 707, 422, 0, 0, 0, 130, 137, 63, 0, 0, -1, 662, 0, 0, 0, 0, 0, 486, 41, 0, 0, 0, 0};
    int wantedResult = 6896;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 143;
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> program = {1, 3, 288, 460, 52, 0, 79, 0, 0, 677, 839, 382, 678, 0, 0, 574, 123, 0, 0, -1, 0, 0, 299, 704, 0, 831, 0, 737, 0, 0, 0, 494, 709, 79, 0, 0, 287, 468, 0, 833, 0, 0, 0};
    int wantedResult = 10489;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 896;
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> program = {973, 850, 282, 0, 375, 256, 0, 796, 841, 512, 693, 0, 0, 642, 582, 0, 0, 0, 544, 531, 40, 0, 0, 738, 0, -1, 793, 0, 0, 976, 0, 0, 0, 766, 823, 961, 601, 0, 0, 0, 0, 919, 0, 0};
    int wantedResult = 14001;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 480;
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> program = {785, 522, 57, 768, 113, 912, 323, 0, 0, 316, 0, 0, 794, 585, 491, 658, 67, 0, 722, 0, 779, 0, 752, 0, 0, 0, 0, -1, 0, 922, 0, 340, 922, 0, 908, 288, 18, 0, 0, 0, 0, 0, 0, 0};
    int wantedResult = 11927;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 670;
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> program = {1, -1, 0};
    int wantedResult = 1000000000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 999999999;
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> program = {-1};
    int wantedResult = 1000000000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> program = {-1, 3, 1, 0, 0, 2, 0, 3, 1, 3, 0, 0, 3, 0, 1, 4, 0, 5, 0, 5, 0, 0, 2, 4, 0, 4, 5, 0, 0, 5, 1, 3, 0, 5, 0, 0, 0, 4, 1, 2, 0, 4, 0, 0, 0, 0, 0};
    int wantedResult = 999999924;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 999999853;
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> program = {3, 2, 0, 4, 0, 2, 1, 0, 5, 5, 0, 4, 2, 5, -1, 0, 2, 1, 0, 0, 0, 0, 0, 5, 0, 0, 1, 1, 0, 3, 5, 0, 0, 1, 3, 3, 0, 0, 2, 0, 4, 0, 0, 0, 5, 0, 0};
    int wantedResult = 999999964;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 999999895;
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> program = {5, 2, 4, 0, 0, 2, 5, 0, 0, 1, 5, 0, 2, 3, 0, 0, 0, 1, 3, 5, 0, 1, 0, 0, 1, 5, 0, 0, 5, 0, 5, 0, 0, 2, 2, 0, 1, 3, 0, 0, -1, 2, 1, 0, 2, 0, 0, 0, 0};
    int wantedResult = 999999946;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 999999878;
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> program = {2, 5, 3, 2, 0, 0, 0, 1, 2, 0, 0, 2, 4, 4, 0, 0, 0, 1, 4, 5, 0, 1, 4, 0, 1, 0, 0, 0, 2, 0, 5, 3, 0, 3, 4, 0, 0, 3, 0, 3, 0, 4, 1, 0, 0, 0, 0, -1, 0};
    int wantedResult = 999999831;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 999999762;
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> program = {5, 3, 2, 4, 0, 0, 0, 1, 3, 0, 1, 0, 0, 5, -1, 0, 1, 0, 3, 3, 2, 0, 2, 0, 0, 5, 1, 0, 0, 0, 0, 2, 5, 0, 5, 0, 5, 5, 0, 4, 0, 0, 0, 4, 1, 0, 0};
    int wantedResult = 999999927;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 999999855;
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> program = {5, 2, 0, 2, 5, 0, 1, 0, 0, 4, 2, 0, 5, 5, 1, 2, 0, 0, 0, 0, 2, 2, 0, 4, 2, 5, 2, 0, 5, 2, 0, 0, 3, 0, 0, 3, 4, 0, -1, 2, 0, 0, 0, 0, 0, 0, 0};
    int wantedResult = 999999943;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 999999873;
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> program = {2, 5, 0, 1, 0, 5, 5, 0, 4, 4, 0, 5, 4, 0, 2, 0, 0, 4, 5, 0, 4, 3, 5, 0, 0, 0, 5, 1, -1, 0, 2, 2, 0, 0, 0, 0, 0, 1, 1, 0, 4, 0, 4, 0, 0, 0, 0};
    int wantedResult = 999999945;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 999999867;
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> program = {1, 5, 0, 4, 3, 0, 0, 1, 0, 3, 3, 1, 0, 1, 0, 5, 2, 0, 0, 0, 0, 1, 5, 3, 0, 0, 3, -1, 4, 0, 4, 0, 0, 0, 1, 0, 0, 1, 3, 0, 5, 3, 4, 0, 0, 0, 0};
    int wantedResult = 999999967;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 999999901;
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> program = {1, 3, 5, 0, 0, 3, 0, 5, 5, 0, 4, 3, 0, 2, 1, 0, 5, 0, 2, 5, 0, 0, 0, 0, 0, -1, 3, 3, 0, 0, 3, 0, 4, 5, 0, 4, 1, 0, 0, 0, 3, 4, 0, 0, 0, 3, 1, 0, 0};
    int wantedResult = 999999979;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 999999901;
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> program = {1, 1, 0, 1, 0, -1, 1, 0, 1, 0, 0, 1, 1, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0, 0, 1, 1, 0, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 1, 0, 0};
    int wantedResult = 1000000000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 999999976;
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> program = {999998012, 0, 0, 0, 995917172, 0, 991821848, -1, 0, 0};
    int wantedResult = 999998046;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {1, -1};
    int wantedResult = 1;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {-1, 0, 0, 6786143, 124597551};
    int wantedResult = 196;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> program = {7169462, 0, 0, 3097757, 0, -1, 0, 0};
    int wantedResult = 629;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {0, 1, 0, -1, 1, 0};
    int wantedResult = 1;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> program = {1000000000, 1000000000, 1000000000, 1000000000, -1, 0, 0, 0, 0};
    int wantedResult = 1000000000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {7, -1, 3, 0};
    int wantedResult = 3;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, -1, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0};
    int wantedResult = 1;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {0, -1};
    int wantedResult = 5;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> program = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 0, 0, -1, 0};
    int wantedResult = 705032704;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> program = {1000000000, 1000000000, 1000000000, 1000000000, -1, 0, 0, 0, 0};
    int wantedResult = 1000000000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0};
    int wantedResult = 410065409;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> program = {100, 200, 300, 0, 100, -1};
    int wantedResult = 600;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {-1, 1000000000, 1000000000, 0, 1000000000, 0, 1000000000, 0, 294967297, 0};
    int wantedResult = 1;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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

int test103() {
    vector<int> program = {7, -1, 3, 0};
    int wantedResult = 3;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> program = {-1};
    int wantedResult = 4;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 4;
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> program = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 0, 0, 0, -1};
    int wantedResult = 705032704;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 705032704;
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> program = {656040131, 420053325, 672058175, 459357954, 883462951, 306319514, 304726974, 323327257, 650507305, 673693686, 428860088, 378453150, 403214389, 548120973, 664004604, 358390117, 489552867, 401695990, 485725869, 559877273, 345093980, 650059157, 341491920, 302227266, 361070511, 621228845, 365577767, 368340082, 339692219, 346158939, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0};
    int wantedResult = 842595100;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test107() {
    vector<int> program = {578784, 20592, 102977, 713261, 295626, 913091, 472225, 896382, 570818, 913193, 989993, 330530, 425048, 818064, 196098, 130996, 304861, 838890, 831389, 949547, 586741, 726338, 864290, 785801, 589221, 77539, 659822, 874504, 61983, 608661, 246250, 241010, 341291, 208903, 510409, 721168, 6196, 221768, 194846, 319674, 614829, 806127, 8343, 62030, 348638, -1, 0};
    int wantedResult = 348938;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 300;
    if(result == expected) {
        cout << "Test Case 107: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 107: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test108() {
    vector<int> program = {536870912, 536870912, 536870912, 536870912, 536870912, 536870912, 536870912, 536870912, -1, 0, 0, 0, 0, 0, 0, 0, 0};
    int wantedResult = 1;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 108: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 108: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test109() {
    vector<int> program = {-1, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 0, 0, 0, 0, 0};
    int wantedResult = 705032704;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {-1, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0};
    int wantedResult = 500000000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {1000000000, 1000000000, 1000000000, 1000000000, 0, 0, 0, 0, 0, 0, -1};
    int wantedResult = 5;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 111: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 111: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test112() {
    vector<int> program = {3, 4, -1};
    int wantedResult = 4;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 0, 0, 0, 0, 0, -1};
    int wantedResult = 1111;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 1111;
    if(result == expected) {
        cout << "Test Case 113: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 113: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test114() {
    vector<int> program = {-1, 1};
    int wantedResult = 2;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 114: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 114: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test115() {
    vector<int> program = {0, 1, -1, 0, 0};
    int wantedResult = 1;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 115: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 115: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test116() {
    vector<int> program = {1000000000, 1000000000, 1000000000, 1000000000, 0, 0, 0, 0, -1};
    int wantedResult = 1000000000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 116: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 116: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test117() {
    vector<int> program = {1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, -1, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0};
    int wantedResult = 1000000000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 117: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 117: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test118() {
    vector<int> program = {0, -1, 2, 3, 0};
    int wantedResult = 5;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {1, -1};
    int wantedResult = 100;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 119: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 119: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test120() {
    vector<int> program = {-1, 2, 0, 2, 3, 4};
    int wantedResult = 10;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 120: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 120: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test121() {
    vector<int> program = {1, 1, 1, 1, -1, 0, 0, 10, 10, 10};
    int wantedResult = 100;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 121: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 121: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test122() {
    vector<int> program = {0, 0, -1, 0};
    int wantedResult = 1000000000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 122: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 122: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test123() {
    vector<int> program = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1};
    int wantedResult = 1000000000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 123: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 123: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test124() {
    vector<int> program = {1000000000, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, -1};
    int wantedResult = 705032704;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 705032704;
    if(result == expected) {
        cout << "Test Case 124: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 124: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test125() {
    vector<int> program = {1, 2, -1, 4, 0};
    int wantedResult = 55;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 51;
    if(result == expected) {
        cout << "Test Case 125: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 125: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test126() {
    vector<int> program = {-1, 1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 0, 0, 0, 0};
    int wantedResult = 705032704;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 126: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 126: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test127() {
    vector<int> program = {7, 0, -1, 0, 0, 0};
    int wantedResult = 7;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 127: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 127: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test128() {
    vector<int> program = {-1};
    int wantedResult = 3;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 128: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 128: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test129() {
    vector<int> program = {2, 3, 2, -1, 5, 0};
    int wantedResult = 5;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 129: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 129: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test130() {
    vector<int> program = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 0, 0, 0, 0, 1, -1};
    int wantedResult = 705032705;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 705032705;
    if(result == expected) {
        cout << "Test Case 130: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 130: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test131() {
    vector<int> program = {-1};
    int wantedResult = 100;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 100;
    if(result == expected) {
        cout << "Test Case 131: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 131: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test132() {
    vector<int> program = {-1, 5, 0, 5, 5, 5, 0};
    int wantedResult = 20;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 132: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 132: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test133() {
    vector<int> program = {0, 0, 0, 0, -1, 1, 0};
    int wantedResult = 999999999;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 999999998;
    if(result == expected) {
        cout << "Test Case 133: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 133: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test134() {
    vector<int> program = {1, -1};
    int wantedResult = 2;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 134: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 134: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test135() {
    vector<int> program = {1000, 1000, 0, -1, 0};
    int wantedResult = 1000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 135: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 135: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test136() {
    vector<int> program = {7, -1, 0};
    int wantedResult = 10;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 136: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 136: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test137() {
    vector<int> program = {1, -1, 0, 3, 7, 0};
    int wantedResult = 10;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 137: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 137: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test138() {
    vector<int> program = {-1, 2, 2, 0};
    int wantedResult = 14;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 138: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 138: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test139() {
    vector<int> program = {2, 2, -1};
    int wantedResult = 1;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 139: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 139: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test140() {
    vector<int> program = {3, 0, -1, 0};
    int wantedResult = 4;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 140: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 140: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test141() {
    vector<int> program = {2, 3, -1, 0};
    int wantedResult = 1000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 997;
    if(result == expected) {
        cout << "Test Case 141: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 141: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test142() {
    vector<int> program = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1};
    int wantedResult = 1000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 142: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 142: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test143() {
    vector<int> program = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 1000000000, 0, 0, -1, 1, 2, 3, 4, 10};
    int wantedResult = 1000000000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 143: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 143: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test144() {
    vector<int> program = {1, 7, -1, 0};
    int wantedResult = 10;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 144: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 144: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test145() {
    vector<int> program = {1000000000, 1000000000, 1000000000, 1000000000, 294967297, 0, 0, 0, -1};
    int wantedResult = 1;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 145: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 145: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test146() {
    vector<int> program = {-1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int wantedResult = 1000000000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 146: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 146: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test147() {
    vector<int> program = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, 0, 0, 0, 0, -1};
    int wantedResult = 705032704;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 705032704;
    if(result == expected) {
        cout << "Test Case 147: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 147: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test148() {
    vector<int> program = {2, -1, 0, 3};
    int wantedResult = 1000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 148: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 148: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test149() {
    vector<int> program = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1};
    int wantedResult = 10;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 149: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 149: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test150() {
    vector<int> program = {1, 1, -1};
    int wantedResult = 1;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {0, 0, 0, 0, 0, -1};
    int wantedResult = 1;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {-1, 0};
    int wantedResult = 1000000000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 1000000000;
    if(result == expected) {
        cout << "Test Case 152: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 152: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test153() {
    vector<int> program = {1000000000, 1000000000, 0, 1000000000, 0, 1000000000, 0, 294967297, -1};
    int wantedResult = 1;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {-1, 0, 0};
    int wantedResult = 1;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 154: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 154: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test155() {
    vector<int> program = {1000000000, 1000000000, 1000000000, 1000000000, 0, 0, 0, -1, 0};
    int wantedResult = 1234567;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 155: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 155: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test156() {
    vector<int> program = {1, 1, 0, 1, 1, 0, 1, 1, 0, 1, 1, -1, 0};
    int wantedResult = 3;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 156: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 156: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test157() {
    vector<int> program = {0, -1, 0};
    int wantedResult = 10;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 157: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 157: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test158() {
    vector<int> program = {1000000000, 1000000000, 0, 1000000000, -1, 1000000000, 0, 1000000000, 0};
    int wantedResult = 705032704;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {1, 2, 3, 4, -1};
    int wantedResult = 5;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 5;
    if(result == expected) {
        cout << "Test Case 159: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 159: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test160() {
    vector<int> program = {1000000000, 100, 0, -1, 0};
    int wantedResult = 1000000000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 160: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 160: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test161() {
    vector<int> program = {1000, 1, -1, 0, 0, 0};
    int wantedResult = 1001;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 161: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 161: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test162() {
    vector<int> program = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1};
    int wantedResult = 1000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 162: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 162: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test163() {
    vector<int> program = {-1};
    int wantedResult = 10;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 10;
    if(result == expected) {
        cout << "Test Case 163: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 163: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test164() {
    vector<int> program = {1000000000, 1000000000, 0, 1000000000, 0, 1000000000, 0, 1000000000, 0, -1, 0};
    int wantedResult = 1000000000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 164: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 164: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test165() {
    vector<int> program = {1, 2, -1};
    int wantedResult = 2;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 2;
    if(result == expected) {
        cout << "Test Case 165: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 165: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test166() {
    vector<int> program = {1000000000, 1000000000, 1000000000, 1000000000, 1000000000, -1, 0, 0, 0, 0, 0};
    int wantedResult = 1000000000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 166: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 166: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test167() {
    vector<int> program = {-1, 10, 5};
    int wantedResult = 5;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 0;
    if(result == expected) {
        cout << "Test Case 167: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 167: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test168() {
    vector<int> program = {-1};
    int wantedResult = 74;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 74;
    if(result == expected) {
        cout << "Test Case 168: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 168: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test169() {
    vector<int> program = {1000000000, 1000000000, 200000000, 1000000000, 1000000000, 94967299, 0, 0, 0, 0, 0, 0, 0, -1};
    int wantedResult = 3;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 3;
    if(result == expected) {
        cout << "Test Case 169: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 169: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test170() {
    vector<int> program = {4, 2, 1, -1, 1, 1, 0, 0, 0, 3};
    int wantedResult = 4;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    vector<int> program = {1000000000, 1000000000, 1000000000, 1000000000, -1, 0, 0, 0, 0};
    int wantedResult = 705032704;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 171: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 171: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test172() {
    vector<int> program = {1, 1, 0, 2382, 0, 7232, 0, 2321, 0, 0, 32321, 1, 2, 3, 0, 8, 0, 9989893, 0, 1230, 0, 123, 0, 34, 29, 0, 0, 0, 823, 232, 222, 982, 9, 10, 10, 1034, 231, 0, 100, 30, 98, 0, 20, 230, -1, 2332, 8, 30, 0};
    int wantedResult = 1000000000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 172: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 172: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test173() {
    vector<int> program = {1000000000, 1000000000, 0, 1000000000, 0, 1000000000, -1, 294967297, 0};
    int wantedResult = 1;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 173: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 173: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test174() {
    vector<int> program = {42, -1, 0, 5, 5, 5};
    int wantedResult = 42;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 174: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 174: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test175() {
    vector<int> program = {1, -1, 0, 3};
    int wantedResult = 4;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = -1;
    if(result == expected) {
        cout << "Test Case 175: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 175: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test176() {
    vector<int> program = {1, -1, 0};
    int wantedResult = 2;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 1;
    if(result == expected) {
        cout << "Test Case 176: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 176: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test177() {
    vector<int> program = {-1};
    int wantedResult = 1000;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
    clock_t end = clock();
    delete pObj;
    int expected = 1000;
    if(result == expected) {
        cout << "Test Case 177: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 177: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test178() {
    vector<int> program = {1, -1, 2, 0};
    int wantedResult = 2;
    Suminator* pObj = new Suminator();
    clock_t start = clock();
    int result = pObj->findMissing(program, wantedResult);
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=22732328&rd=15175&pm=11354
********************************************************************************
#include <algorithm> 
#include <string> 
#include <vector> 
#include <queue> 
#include <iostream> 
#include <cmath> 
#include <sstream> 
#include <map> 
#include <set> 
using namespace std; 
#define pb push_back 
#define INF 1000000000 
#define L(s) (int)((s).size()) 
#define FOR(i,a,b) for (int _n(b), i(a); i <= _n; i++) 
#define rept(i,n) FOR(i,0,(n)-1) 
#define C(a) memset((a),0,sizeof(a)) 
#define ll long long 
#define all(c) (c).begin(), (c).end() 
#define SORT(c) sort(all(c)) 
#define VI vector<int> 
#define ppb pop_back 
 
VI pr; 
ll w; 
vector<ll> st; 
inline ll pop() { 
  if (st.empty()) return 0; 
  ll t = st.back(); 
  st.ppb(); 
  return t; 
} 
ll check(ll x) { 
  st.clear(); 
  vector<int> tpr = pr; 
  rept(i, L(pr)) { 
    if (tpr[i] == -1) tpr[i] = x; 
    if (tpr[i] == 0) { 
      ll a = pop(); 
      ll b = pop(); 
      st.pb(a + b); 
    } else { 
      st.pb(tpr[i]); 
    } 
  } 
  return pop(); 
} 
class Suminator  
  { 
    public: 
       int findMissing( vector <int> program, int wantedResult ) 
    { 
      pr = program; 
      w = wantedResult; 
 
      if (check(0) == w) return 0; 
      if (check(1) == w) return 1; 
 
      int l = 0, r = INF + 1; 
      while (r - l > 1) { 
        int xx = (r + l) / 2; 
        ll t = check(xx); 
        if (t >= w) r = xx; else 
        l = xx; 
      } 
      FOR(i, r - 5, r + 5) { 
        if (i > 1 && check(i) == w) return i; 
      } 
      return -1; 
    } 
  }; 
 
 
 
// Powered by FileEdit
// Powered by moj 4.17 [modified TZTester]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/