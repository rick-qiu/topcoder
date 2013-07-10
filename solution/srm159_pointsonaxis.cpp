/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=1670
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

class PointsOnAxis {
public:
    vector<int> findPoints(vector<int> distances);
};

vector<int> PointsOnAxis::findPoints(vector<int> distances) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> distances = {5, 2, 1, 6, 2, 3, 3, 4, 5, 6, 3, 9, 1, 4, 1};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 4, 5, 6, 9};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> distances = {20, 100, 120};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 20, 120};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> distances = {1, 2, 3, 4, 5, 7};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3, 7};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> distances = {1, 2, 4};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> distances = {237601, 843904, 56786, 429289, 52254, 83576, 220417, 606303, 180815, 191688, 185347, 154025, 17184, 787118, 414615, 791650, 760328, 623487, 372503, 4532, 26790, 163631, 377035, 345713, 208872, 31322, 168163, 136841};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 52254, 56786, 83576, 220417, 237601, 429289, 843904};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> distances = {1, 1, 1, 1, 2, 2, 3, 4, 4, 5, 5, 5, 6, 6, 7};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 5, 6, 7};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> distances = {2, 5, 6, 8, 11, 16, 17, 19, 22, 24, 29, 31, 37, 48, 53};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 16, 22, 24, 53};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> distances = {70, 17, 13, 53, 83, 30};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 13, 30, 83};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> distances = {8, 61, 7, 4, 69, 15, 4, 54, 65, 11};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 8, 15, 69};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> distances = {77, 52, 89, 3, 31, 32, 81, 55, 25, 12, 80, 46, 45, 4, 22, 37, 55, 21, 20, 29, 3, 92, 58, 57, 8, 34, 34, 35, 84, 58, 1, 50, 24, 49, 23, 26};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 34, 35, 55, 58, 80, 84, 92};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> distances = {37, 29, 54, 25, 18, 19, 46, 8, 17, 12, 19, 56, 9, 25, 4, 11, 48, 17, 29, 36, 73, 8, 7, 44, 21, 37, 28, 65};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 8, 17, 25, 29, 36, 54, 73};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> distances = {26, 8, 55, 22, 27, 50, 34, 29, 4, 1, 24, 63, 30, 35, 58, 33, 28, 5, 5, 28, 23};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 28, 29, 33, 55, 63};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> distances = {20, 2, 43, 67, 19, 49, 72, 24, 19, 22, 23, 47, 39, 29, 52, 44, 1, 45, 69, 17, 51, 74, 22, 21, 24, 62, 6, 29, 67, 24, 86, 18, 5, 91, 48, 68, 91, 5, 38, 23, 73, 30, 96, 53, 43};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 22, 24, 43, 44, 67, 73, 91, 96};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> distances = {24, 49, 31, 44, 23, 25, 26, 27, 4, 73, 7, 68, 47, 1, 2, 3, 20, 80, 5, 26, 74, 75, 76, 53, 75, 54, 6, 5, 4, 27, 21, 69, 70, 71, 48, 48, 49, 50, 27, 1, 2, 21, 1, 22, 23};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 5, 6, 7, 27, 31, 54, 75, 80};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> distances = {44};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 44};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> distances = {10, 68, 60, 58, 50, 8};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 8, 58, 68};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> distances = {56, 30, 77, 1, 26, 21, 57, 47, 31, 78};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 31, 57, 78};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> distances = {176630, 227598, 568688, 102567, 2763, 85886, 236904, 89171, 205038, 404228, 392058, 74063, 179393, 90744, 413534, 87459, 28408, 796286, 330165, 224835, 313484, 9306, 316769, 432636, 466121, 571451, 482802, 805592, 479517, 363650, 105330, 16681, 339471, 13396, 102471, 88649, 234141, 91934, 207801, 322790, 3285, 119152, 326075, 441942, 115867};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 9306, 234141, 236904, 322790, 326075, 339471, 413534, 441942, 805592};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> distances = {170945, 389149, 722857, 100263, 47332, 248636, 171128, 560094, 893802, 70682, 123613, 419581, 183, 333708, 489412, 436481, 140513, 560277, 823120, 770189, 474221, 893985, 52931, 348899, 70865, 295968, 123796, 419764};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 183, 70865, 123796, 171128, 419764, 560277, 893985};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> distances = {14740, 99980, 114720};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 14740, 114720};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> distances = {589785};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 589785};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> distances = {551951, 147069, 435595, 521734, 120698, 79258, 474941, 327914, 693186, 699020, 116356, 30217, 672649, 631209, 77010, 224037, 141235, 582664, 668803, 26371, 67811, 622010, 474983, 840255, 86139, 556293, 514853, 39346, 107681, 257591, 642432, 600992, 46793, 193820, 171452, 41440, 595639, 448612, 813884, 554199, 407172, 772444, 147027, 218245, 365272};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 26371, 67811, 147069, 474983, 582664, 622010, 668803, 699020, 840255};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> distances = {534705, 192239, 146428, 200999, 40516, 342466, 681133, 333706, 575221, 338667, 8760, 232755, 347427, 105912, 241515};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 105912, 146428, 338667, 347427, 681133};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> distances = {136673, 332659, 278737, 555779, 57285, 469332, 142064, 692452, 193958, 611396, 223120, 275374, 834516, 336022, 498494};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 142064, 278737, 336022, 611396, 834516};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> distances = {69012, 179002, 20122, 218912, 315126, 73305, 44623, 248014, 89134, 287924, 246114, 142317, 24389, 158880, 39910, 494128, 105697, 223625, 198790, 335248, 53183, 64745, 534038, 145607, 263535, 388431, 270503, 117928};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 39910, 145607, 198790, 218912, 263535, 287924, 534038};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> distances = {791212, 484920, 588670, 32633, 288780, 794939, 306292, 202542, 758579, 502432, 3727, 103750, 452287, 196140, 310019, 556037, 299890, 206269, 256147, 762306, 506159};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3727, 206269, 310019, 506159, 762306, 794939};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> distances = {704314, 33448, 703076, 336394, 396693, 503890, 737762, 1238, 367920, 307621, 200424, 36524, 369842, 430141, 537338, 366682, 306383, 199186, 60299, 167496, 107197};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> distances = {247676, 338928, 277873, 411367, 226218, 586604, 525549, 163691, 473894, 61055, 750295, 112710, 689240, 51655, 637585};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 61055, 112710, 338928, 586604, 750295};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> distances = {59376, 662081, 165724, 752637, 96670, 210658, 721457, 106348, 812013, 37294, 270034, 827805, 90556, 758751, 451423, 918361, 69054, 376382, 849307, 541979, 307328};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 69054, 106348, 165724, 376382, 827805, 918361};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> distances = {183471, 8653, 109371, 795194, 498682, 740286, 487375, 538436, 284179, 98904, 633117, 20267, 800104, 7407, 238222, 832452, 464228, 552630, 703755, 154240, 746573, 343967, 548639, 373115, 167682, 89316, 7550, 661669, 347833, 932590, 164514, 192019, 110150, 441710, 664702, 279539};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> distances = {164141, 521691, 647297, 593899, 814493, 823875, 708676, 981016, 388607, 568217, 585573, 315262, 308129, 248151, 158684, 437366, 344037, 205699, 290242, 462504, 505214, 372265, 230637, 98176, 363933, 363558, 752962, 913504, 927889, 144953, 559240, 604911, 856923, 273711, 956141, 483793, 292269, 545687, 533394, 123708, 817175, 726752, 594667, 347795, 99938};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> distances = {521507, 106488, 763760, 37215, 639514, 804342, 397562, 841221, 596336, 787410, 937624, 667535, 998283, 88707, 18599, 742664, 852874, 77210, 714390, 349581, 836958, 189821, 903093, 598636, 469675, 60635, 461242, 264983};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> distances = {959712, 247034, 682280};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> distances = {245991, 99858, 307577, 422028, 507187, 798877};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> distances = {157422, 765168, 911073, 540611, 922355, 847304, 765088, 86212, 133068, 540454, 781670, 298671, 995797, 504533, 531162};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> distances = {474455, 652385, 706361, 208212, 997481, 591835, 600479, 457014, 191318, 162256, 189992, 623587, 209278, 149911, 698243};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> distances = {847058, 392081, 928200, 158247, 34753, 85882, 160725, 453470, 352093, 571568, 888573, 435409, 720359, 235304, 982312, 76727, 945720, 213927, 602930, 688604, 330797, 395920, 504030, 446748, 178353, 946039, 826133, 416639};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> distances = {263779, 860582, 560441, 5205, 554849, 657758, 631676, 619984, 919522, 286499, 404023, 267143, 167625, 903904, 745510, 170167, 975065, 227529, 348913, 801591, 533212, 336476, 298772, 177455, 938227, 406658, 254217, 278821, 238320, 848310, 595781, 486881, 675112, 721009, 143156, 590998};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> distances = {885369, 44825, 532929, 970700, 900987, 617133, 916829, 310662, 19442, 686098, 626135, 117506, 548652, 857008, 852100, 137004, 800776, 187190, 854199, 914235, 220118, 233772, 935122, 341933, 414816, 692897, 621694, 1471, 558169, 122838, 463378, 348015, 524865, 181965, 900034, 495509};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> distances = {340931, 727061, 200942, 743308, 239066, 360876, 941807, 781132, 748036, 151230, 475593, 187111, 359036, 859256, 382875, 396470, 781739, 503388, 204080, 729200, 467362, 525567, 790991, 13642, 658870, 782122, 111664, 364244};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> distances = {420585, 99803, 985068, 813107, 297027, 480406, 600100, 443834, 805930, 104581, 759969, 69194, 488191, 962875, 357022, 103270, 259948, 846708, 256252, 940288, 609354};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> distances = {111240, 971185, 732277, 663657, 792735, 324156, 805826, 766809, 805841, 437469, 228983, 458486, 467109, 577436, 808789};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> distances = {691486, 435430, 525369, 371805, 947147, 695252, 188790, 651976, 515216, 998246, 904282, 108862, 547274, 48625, 811020, 720070, 46629, 613712, 188730, 81523, 362372, 368821, 742486, 578282, 123688, 22150, 127456, 30227, 661325, 722889, 253190, 796750, 706298, 287985, 290806, 122478};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> distances = {716441, 615813, 761547, 111220, 555374, 754626, 960050, 753827, 548374, 686258, 93342, 707802, 639147, 723927, 266161, 869825, 962071, 229266, 737318, 475817, 455981, 514763, 614510, 974734, 202160, 795782, 671203, 201944, 175069, 63523, 482382, 345154, 118722, 813778, 241021, 24928};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> distances = {10, 10, 10};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> distances = {30, 30, 20, 20, 10, 10};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> distances = {1, 2, 999998, 999999, 1000000, 1, 999997, 999998, 999999, 999996, 999997, 999998, 1, 2, 1};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2, 999998, 999999, 1000000};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> distances = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 10, 10, 10, 11, 12, 12, 13, 14, 15, 17};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 7, 8, 9, 10, 12, 13, 14, 17};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> distances = {1, 1, 1, 1, 1, 2, 2, 2, 2, 2, 3, 3, 3, 3, 4, 4, 4, 4, 5, 5, 5, 5, 5, 6, 6, 6, 6, 7, 7, 7, 8, 8, 9, 9, 9, 10, 10, 10, 11, 11, 12, 13, 14, 15, 16};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 6, 7, 9, 10, 11, 12, 14, 16};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> distances = {1, 6, 10, 23, 26, 34, 41, 53, 55, 5, 9, 22, 25, 33, 40, 52, 54, 4, 17, 20, 28, 35, 47, 49, 13, 16, 24, 31, 43, 45, 3, 11, 18, 30, 32, 8, 15, 27, 29, 7, 19, 21, 12, 14, 3};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> distances = {2, 3, 4, 5, 5, 6, 7, 7, 8, 9, 9, 9, 11, 11, 12, 13, 13, 14, 15, 15, 16, 17, 18, 18, 20, 20, 21, 22, 24, 25, 25, 26, 27, 30, 30, 31, 33, 35, 35, 38, 39, 42, 44, 46, 5};
    PointsOnAxis* pObj = new PointsOnAxis();
    clock_t start = clock();
    vector<int> result = pObj->findPoints(distances);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=305142&rd=4600&pm=1670
********************************************************************************
#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <string>
#include <cstring>
using namespace std;
typedef vector<int> VI; typedef vector<VI> VVI;
typedef vector<string> VS; typedef vector<VS> VVS;
typedef vector<bool> VB; typedef vector<VB> VVB;
typedef vector<double> VD; typedef vector<VD> VVD;
#define guard(X) for(bool X=1;X;X=0)
#define for_up(X, L) for(int X=0;X<(L);X++)
#define for_down(X, L) for(int X=(L)-1;X>=0;X--)
#define for_range(X, L, H) guard(X##_fi)for(typeof(H)X=(L);X!=(H);++X,X##_fi=0)
#define for_each(X, C) for_range(X,(C).begin(),(C).end())
#define for_tok(X,D,S) guard(X##_fi)for(char*for_tok__s1=strdup((S).c_str()),*for_tok__s3;for_tok__s1;free(for_tok__s1),for_tok__s1=0)for(char*X=strtok_r(for_tok__s1,(D),&for_tok__s3);X;X=strtok_r(0,(D),&for_tok__s3),X##_fi=0)
#define for_tok_ws(X,S) for_tok(X," \n\t",S)
#define for_bool(X) for(bool X=0,__g=1;__g;__g=X=!X)
#define let(X,V) guard(__g)for(typeof(V)X=V;__g;__g=0)
 
VI r, d, q;
int n;
 
int a[1100000];
 
bool go(int x, int v) {
  if (x == n) return true;
  if (v == q.size()) return false;
  // try include
  if (a[q[v]]) {
    r[x] = q[v];
    int j;
    for (j = 0; j < x; j++) {
      const int z = r[x] - r[j];
      if (a[z] == 0) break;
      --a[z];
    }
    if (j == x && go(x+1, v+1)) return true;
    for (j--; j >= 0; j--) {
      const int z = r[x] - r[j];
      ++a[z];
    }
  }
  return go(x, v+1);
}
 
struct PointsOnAxis {
 
vector <int> findPoints(vector <int> distances) {
  d = distances;
  sort(d.begin(), d.end());
  for (int i = 0; i < d.size(); i++) {
    if (a[d[i]] == 0) q.push_back(d[i]);
    a[d[i]]++;
  }
  for (n = 2; n <= 10; n++) {
    if (n * (n - 1) / 2 == d.size()) break;
  }
  r = VI(n);
  r[0] = 0;
  if (go(1, 0)) return r;
  return VI();
}
 
 
};
 
 
// vim:ts=4:sw=4

********************************************************************************
*******************************************************************************/