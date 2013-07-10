/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=11779
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

class Pikachu {
public:
    vector<int> bestEncoding(vector<int> freq);
};

vector<int> Pikachu::bestEncoding(vector<int> freq) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> freq = {1, 1};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4, 2};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> freq = {1, 1, 2};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9, 4};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> freq = {1, 1, 1, 1};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13, 48};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> freq = {2, 3, 5, 7, 11, 13, 17, 19};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {309, 96};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> freq = {533, 533, 533, 353, 335, 335};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10290, 288};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> freq = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {72, 362124467};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> freq = {353, 783, 226, 713, 517, 706, 160, 149, 639, 83, 783, 918, 860, 856, 385, 148};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {45248, 829440};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> freq = {122, 428, 386, 905, 257, 311, 71};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {8942, 24};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> freq = {318, 19, 421, 249, 588, 194};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6198, 8};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> freq = {348, 922, 183, 380, 346, 248, 342, 490};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13664, 96};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> freq = {390, 96, 13, 375, 173, 422};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4969, 8};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> freq = {574, 574, 125};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2671, 2};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> freq = {15, 976, 518, 794, 389, 176};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9299, 8};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> freq = {729, 775, 3, 3, 612, 734, 672, 566, 705, 811, 734, 743, 997, 330};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {44230, 138240};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> freq = {238, 238, 903, 581, 238, 267, 267, 84, 550, 521, 318, 81, 559, 769, 903, 624, 546};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {42989, 14929920};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> freq = {7, 7, 817, 775, 318, 640, 767, 339, 411, 459, 114, 640, 118, 967, 963, 421, 45, 114, 582, 3};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {47210, 13271040};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> freq = {925, 142, 961, 440, 630, 630, 693, 681, 961, 925, 617, 856, 639, 961, 222, 962, 305, 460};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {70512, 418037760};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> freq = {491, 491, 620, 620, 338, 393, 393, 393, 507, 393, 997, 252, 393, 615, 410, 791, 620, 874, 105};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {57886, 352831721};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> freq = {853, 109, 313, 397, 58, 866, 63, 58, 849, 286, 205, 286};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {19737, 1152};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> freq = {86, 86, 453, 86, 750, 574, 86};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7098, 96};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> freq = {189, 867, 658, 833, 371, 178, 299, 178, 42, 156, 867};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {20736, 1152};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> freq = {219, 219, 353, 83};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2571, 8};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> freq = {601, 996, 723, 107, 461, 107, 461, 601, 881, 461, 881, 107, 658, 461};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {39168, 1658880};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> freq = {765, 366, 802, 366, 609, 946, 609, 104, 395, 395, 395, 889, 180, 325};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {37598, 138240};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> freq = {536, 190, 536, 242};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4304, 4};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> freq = {626, 931, 552, 343, 359};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9099, 4};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> freq = {388, 388, 347, 7, 948, 673, 600, 810, 388, 388, 747};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {27052, 20736};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> freq = {815, 2, 913, 780, 780, 977, 780, 780, 780, 55, 2, 780, 2, 913, 780, 780, 294, 55};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {56737, 114767351};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> freq = {994, 847, 233, 156, 459, 432, 847, 507, 117, 952, 117, 732, 432};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {33949, 27648};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> freq = {815, 67, 67, 258, 496, 5, 342, 258, 102};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9152, 48};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> freq = {654, 654, 654, 128, 330, 545, 654, 654, 318, 330, 654, 464, 505, 806, 705, 318, 654, 330, 167, 654};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {62173, 329061500};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> freq = {562, 562, 562, 562, 951, 562, 388, 562, 438, 951};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {29424, 103680};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> freq = {125, 125, 125, 26, 125, 125, 26, 629};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {4549, 480};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> freq = {162, 162, 162, 355, 355, 162};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {5177, 192};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> freq = {239, 239, 239, 239, 225, 239, 239, 223, 239, 239, 816, 283, 239, 239, 239, 225, 223};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26849, 160063829};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> freq = {258, 258, 258, 218, 258, 258, 258, 929, 258, 258, 342};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {17220, 483840};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> freq = {996, 887, 887, 287, 996, 996, 887, 287, 304, 887, 269, 962, 887, 434, 434, 996, 61};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {65120, 92897280};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> freq = {969, 290, 969, 290, 983, 290, 290, 844, 969, 290, 983, 969, 290, 969, 969, 290, 969, 727, 40};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {72876, 773252511};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> freq = {609, 872};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2962, 2};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> freq = {716, 716, 716, 716, 716, 523};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {16219, 240};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> freq = {817, 817, 146, 817, 146, 146, 817, 817, 817, 817, 817, 423, 201, 483};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {42747, 11612160};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> freq = {599, 599, 633, 599, 599, 599, 599, 272, 633, 217, 103};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {26675, 17280};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> freq = {783, 783, 996, 783, 783, 783, 996, 783, 990, 339, 996, 783, 783, 783, 783};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {69030, 135283173};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> freq = {292, 292, 380, 292, 292, 292, 275, 292, 513, 275, 513, 292, 513, 513, 544};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {31122, 20321280};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> freq = {95, 95, 95, 95, 95, 95, 711, 453, 711, 710, 95};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {13999, 483840};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> freq = {966, 966, 966};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {6762, 6};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> freq = {733, 733, 464, 733, 464};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {10773, 48};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> freq = {873, 986, 419, 873, 873, 973, 986, 873, 873, 419, 660, 973, 973, 973, 419, 873};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {75453, 254113271};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> freq = {92, 92, 92, 92};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1196, 48};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> freq = {457, 457, 457, 457, 457, 457, 457, 457, 457, 457, 457, 457, 224, 725, 843, 457};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {45054, 690987136};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> freq = {269, 269, 808, 808, 269, 808, 269, 808, 808, 808, 269, 808, 269, 808, 269};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {46037, 438553582};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> freq = {567, 567, 567, 567, 567, 567, 567, 567, 567, 567, 567, 567, 567, 567, 567, 567, 567, 567, 567};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {67473, 256104427};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> freq = {236, 236, 236, 236, 236, 236, 236, 236, 236};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {9912, 362880};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> freq = {932, 932, 932, 932};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {12116, 48};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> freq = {855, 855, 855, 855, 855, 21, 855, 855, 855, 855, 855, 855, 855, 855, 855};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {68547, 139484986};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> freq = {67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67, 67};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {7437, 592426554};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> freq = {517, 517, 728, 140, 728, 728, 140, 728, 517, 728, 140, 140, 140, 140, 517, 517, 728, 728, 316, 517, 532, 517, 517, 728, 728, 140};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {81900, 147142071};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> freq = {225, 438, 611, 582, 396, 186, 302, 641, 347, 955, 870, 920, 917, 463, 682, 218, 977, 856, 478, 852, 288, 440, 664, 659, 335, 389, 270, 915};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {107059, 868434557};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> freq = {400, 400, 400, 400, 400, 400, 400, 160, 746, 400, 829, 400, 400, 639, 400, 776, 400, 405, 536, 400, 400, 400, 400, 588, 400};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {76394, 659610581};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> freq = {857, 191, 623, 887, 403, 686, 191, 60, 250, 753, 271, 94, 812, 928, 341, 84, 187, 320, 321, 424, 579, 871, 694, 137, 840, 29, 427, 666, 233, 630};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {91870, 295056642};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> freq = {43, 43, 447, 43, 529, 357, 43, 357, 80, 636, 921, 357, 825, 756, 357, 636, 227, 756, 357, 153, 285};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {47697, 573836755};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> freq = {886, 299, 177, 383, 363, 881, 346, 44, 429, 807, 882, 4, 199, 2, 952, 553, 783, 114, 119, 807, 991, 509, 961, 541, 805, 986, 339, 387, 527};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {98780, 234972539};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> freq = {416, 476, 128, 476, 481, 455, 660, 242, 364, 660, 615, 242, 258, 449, 242, 615, 242, 242, 896, 606, 549, 242, 844};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {65882, 617486274};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> freq = {142, 461, 360, 67, 9, 720, 70, 929, 490, 906, 753, 387, 693, 885, 937, 370, 781, 196, 427, 474, 618, 279, 10, 256, 966};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {75864, 493592250};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> freq = {405, 460, 901, 287, 974, 407, 836, 231, 393, 442, 240, 22, 319, 976, 593, 800, 96, 64, 737, 827, 278, 724, 8, 694, 240, 770, 794, 331, 219};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {92671, 409835225};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> freq = {262, 646, 110, 640, 510, 118, 106, 63, 554, 611, 214, 4, 514, 206, 332, 639, 487, 455, 258, 529, 403};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {45632, 836075520};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> freq = {128, 128, 785, 265, 112, 666, 495, 760, 612, 573, 67, 643, 612, 484, 950, 523, 127, 616, 395, 362, 858, 285, 729};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {69423, 493592250};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> freq = {821, 136, 566, 505, 117, 881, 787, 450, 495, 79, 190, 206, 437, 765, 458, 905, 491, 967, 42, 31, 835, 694, 134};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {66570, 16453075};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> freq = {182, 412, 257, 317, 322, 976, 721, 640, 976, 274, 274, 138, 316, 262, 706, 334, 844, 512, 756, 8, 651, 525, 425, 720};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {72856, 935922464};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> freq = {715, 587, 731, 851, 384, 109, 702, 858, 162, 247, 688, 472, 145, 472, 973, 53, 549, 613, 54, 653, 882};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {65087, 836075520};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> freq = {452, 660, 683, 108, 657, 486, 452, 932, 20, 475, 284, 413, 149, 932, 265, 660, 803, 648, 273, 132, 269, 47, 774, 657};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {69978, 480776741};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> freq = {370, 85, 927, 381, 803, 799, 145, 342, 713, 501, 836, 710, 442, 580, 810, 962, 139, 576, 49, 370, 513, 859, 59, 92, 244, 942, 981};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {92026, 846994515};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> freq = {25, 230, 230, 363, 774, 924, 25, 230, 485, 973, 924, 2, 25, 2, 804, 230, 487, 181, 25, 695, 736, 861, 25, 230, 25, 25, 2, 55, 55};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {56806, 234972539};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> freq = {881, 199, 923, 49, 688, 685, 983, 532, 584, 907, 173, 188, 313, 651, 584, 779, 17, 512, 578, 480, 924, 148};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {71402, 16453075};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> freq = {627, 647, 699, 627, 703, 650, 164, 883, 927, 570, 663, 932, 884, 375, 214, 627, 329, 818, 359, 327, 574, 117, 782, 937, 234, 675, 1000, 585, 433};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {118264, 622811522};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> freq = {698, 90, 44, 678, 190, 737, 3, 806, 815, 555, 286, 938, 908, 338, 493, 418, 283, 67, 717, 476, 618, 692};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {65244, 672151031};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> freq = {991, 94, 76, 658, 991, 912, 844, 658, 868, 298, 59, 84, 787, 191, 673, 804, 426, 273, 818, 591, 474, 437, 187, 422, 982};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {85860, 961553482};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> freq = {965, 649, 165, 121, 160, 521, 374, 823, 700, 228, 953, 484, 918, 840, 504, 963, 11, 219, 509, 218, 671, 756, 193, 765, 776, 216, 541, 507, 980};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {104972, 459011332};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> freq = {430, 430, 430, 430, 430, 430, 430, 726, 842, 430, 953, 430, 45, 430, 953, 974, 927, 430, 528, 114, 231, 45};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {68108, 99043620};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> freq = {421, 213, 84, 730, 442, 3, 596, 877, 8, 464, 761, 149, 743, 928, 566, 10, 780, 973, 443, 897, 439, 690, 976, 59, 719, 581, 728, 244, 244};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {96511, 234972539};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> freq = {391, 274, 315, 782, 317, 389, 554, 479, 651, 643, 553, 964, 891, 855, 300, 810, 7, 905, 13, 521, 720, 902, 210, 963};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {84533, 606860964};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test81() {
    vector<int> freq = {126, 412, 654, 927, 660, 160, 260, 462, 432, 45, 823, 163, 342, 524, 454, 997, 486, 348, 21, 607, 211, 456, 120, 328, 919, 20, 707, 276, 383, 467};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {85099, 316924134};
    if(result == expected) {
        cout << "Test Case 81: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 81: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test82() {
    vector<int> freq = {338, 723, 352, 370, 656, 844, 895, 282, 70, 994, 844, 895, 882, 25, 379, 389, 393, 389, 901, 328, 70, 49, 320, 772};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {75535, 974368991};
    if(result == expected) {
        cout << "Test Case 82: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 82: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test83() {
    vector<int> freq = {759, 577, 58, 290, 985, 470, 64, 779, 776, 3, 65, 11, 455, 55, 235, 410, 657, 15, 267, 473, 648, 570, 321, 125, 453};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {57465, 32906150};
    if(result == expected) {
        cout << "Test Case 83: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 83: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test84() {
    vector<int> freq = {324, 788, 107, 562, 712, 197, 401, 954, 801, 616, 781, 13, 336, 112, 333, 339, 14, 973, 622, 283, 426, 338, 749, 1, 312};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {68761, 493592250};
    if(result == expected) {
        cout << "Test Case 84: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 84: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test85() {
    vector<int> freq = {343, 184, 196, 563, 750, 315, 292, 858, 330, 391, 140, 451, 211, 662, 852, 465, 405, 159, 590, 305, 370, 735, 169, 295, 625, 675, 93};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {75145, 409835225};
    if(result == expected) {
        cout << "Test Case 85: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 85: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test86() {
    vector<int> freq = {191, 556, 144, 203, 716, 203, 479, 144, 472, 455, 152, 83, 472, 164, 152, 479, 274, 479, 144, 57, 63, 479, 445, 924, 101, 463, 657, 213, 766, 279};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {69390, 590113284};
    if(result == expected) {
        cout << "Test Case 86: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 86: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test87() {
    vector<int> freq = {395, 184, 15, 87, 161, 758, 173, 485, 735, 648, 566, 471, 132, 891, 555, 132, 39, 268, 668, 980, 947, 647, 19, 707, 398, 411, 620, 284, 723};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {85551, 81967045};
    if(result == expected) {
        cout << "Test Case 87: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 87: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test88() {
    vector<int> freq = {731, 731, 731, 141, 221, 731, 386, 731, 731, 731, 584, 584, 221, 221, 782, 731, 669, 731, 296, 425, 731, 486, 731, 141, 691, 731, 731};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {103098, 111684321};
    if(result == expected) {
        cout << "Test Case 88: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 88: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test89() {
    vector<int> freq = {362, 346, 588, 458, 467, 67, 90, 214, 947, 756, 251, 316, 658, 859, 164, 643, 230, 527, 653, 729, 987, 958, 149, 154, 272, 518, 655, 792, 294};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {94172, 491761070};
    if(result == expected) {
        cout << "Test Case 89: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 89: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test90() {
    vector<int> freq = {661, 661, 274, 661, 661, 661, 661, 168, 661, 968, 490, 409, 661, 17, 661, 793, 657, 968, 793, 17, 631, 355, 661, 661};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {88410, 264116320};
    if(result == expected) {
        cout << "Test Case 90: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 90: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test91() {
    vector<int> freq = {96, 293, 122, 76, 217, 514, 394, 474, 213, 852, 223, 44, 265, 264, 245, 74, 20, 549, 744, 699, 38, 316, 325, 348, 938, 292, 258, 200, 47};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {58792, 852458813};
    if(result == expected) {
        cout << "Test Case 91: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 91: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test92() {
    vector<int> freq = {232, 232, 232, 232, 828, 5, 545, 967, 967, 45, 545, 233, 233, 545, 929, 967, 45, 967, 232, 967, 18, 232, 168, 232, 946, 5, 545, 45};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {75542, 409835225};
    if(result == expected) {
        cout << "Test Case 92: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 92: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test93() {
    vector<int> freq = {332, 118, 234, 179, 94, 52, 778, 522, 54, 201, 147, 148, 394, 864, 707, 435, 471, 422, 260, 915, 791};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {47267, 139345920};
    if(result == expected) {
        cout << "Test Case 93: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 93: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test94() {
    vector<int> freq = {284, 706, 706, 334, 336, 334, 839, 284, 334, 334, 334, 706, 821, 334, 334, 497, 451, 977, 334, 112, 367, 269, 763, 367, 334, 334, 213, 218, 659, 334};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {91387, 940085267};
    if(result == expected) {
        cout << "Test Case 94: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 94: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test95() {
    vector<int> freq = {780, 723, 365, 386, 608, 909, 36, 364, 93, 400, 965, 73, 623, 205, 386, 512, 876, 246, 831, 713, 659, 925, 291, 467, 484, 782};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {88812, 617486274};
    if(result == expected) {
        cout << "Test Case 95: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 95: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test96() {
    vector<int> freq = {181, 572, 606, 646, 212, 470, 212, 212, 633, 300, 3, 754, 346, 247, 3, 989, 499, 774, 336, 749, 515, 677, 384, 535, 978, 606, 12, 806, 677, 564};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {97345, 98352214};
    if(result == expected) {
        cout << "Test Case 96: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 96: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test97() {
    vector<int> freq = {909, 181, 583, 629, 873, 193, 303, 474, 592, 685, 936, 987, 425, 298, 534, 540, 17, 332, 708, 307, 843, 390, 57, 15, 789, 417, 322, 628, 40, 145};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {94059, 98352214};
    if(result == expected) {
        cout << "Test Case 97: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 97: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test98() {
    vector<int> freq = {702, 702, 702, 18, 702, 702, 281, 672, 919, 43, 67, 677, 439, 43, 702, 518, 503, 816, 706, 164, 43, 67, 832, 905};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {72901, 131624600};
    if(result == expected) {
        cout << "Test Case 98: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 98: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test99() {
    vector<int> freq = {425, 181, 704, 240, 396, 752, 83, 499, 310, 482, 171, 399, 451, 427, 532, 380, 224, 234, 735, 966, 932, 927, 406, 668, 470, 139, 992, 334, 498, 771};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {100409, 98249214};
    if(result == expected) {
        cout << "Test Case 99: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 99: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test100() {
    vector<int> freq = {288, 288, 117, 288, 288, 288, 288, 309, 288, 309, 288, 288, 419, 972, 288, 288, 907, 568, 288, 288, 205, 288, 309, 288};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {54567, 620687147};
    if(result == expected) {
        cout << "Test Case 100: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 100: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test101() {
    vector<int> freq = {882, 499, 332, 65, 479, 160, 262, 755, 784, 235, 366, 374, 125, 441, 725, 843, 325, 148, 825, 376, 982, 496, 646};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {69135, 740388375};
    if(result == expected) {
        cout << "Test Case 101: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 101: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test102() {
    vector<int> freq = {445, 555, 171, 445, 445, 446, 445, 445, 212, 599, 418, 445, 599, 228, 599, 11, 445, 65, 542, 11, 445, 445, 171, 445, 171, 445, 256, 445};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {69447, 403706725};
    if(result == expected) {
        cout << "Test Case 102: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 102: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test103() {
    vector<int> freq = {533, 335, 692, 519, 855, 49, 73, 285, 416, 353, 476, 704, 393, 85, 147, 847, 810, 976, 687, 452, 932, 999, 399, 512};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {78831, 606860964};
    if(result == expected) {
        cout << "Test Case 103: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 103: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test104() {
    vector<int> freq = {610, 610, 672, 672, 610, 610, 911, 911, 911, 911, 34, 181, 34, 567, 621, 610, 175, 21, 241, 175, 610, 610};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {68157, 460686100};
    if(result == expected) {
        cout << "Test Case 104: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 104: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test105() {
    vector<int> freq = {945, 945, 945, 945, 945, 945, 945, 945, 945, 945, 945, 945, 945, 945, 945, 945, 945, 945, 945, 945, 945, 945, 945};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {144585, 312336197};
    if(result == expected) {
        cout << "Test Case 105: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 105: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test106() {
    vector<int> freq = {808, 250, 74, 659, 931, 273, 545, 879, 924, 710, 441, 166, 493, 43, 988, 504, 328, 730, 841, 613, 304, 170, 710, 158, 561, 934, 100, 279, 817, 336};
    Pikachu* pObj = new Pikachu();
    clock_t start = clock();
    vector<int> result = pObj->bestEncoding(freq);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {104688, 98249214};
    if(result == expected) {
        cout << "Test Case 106: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 106: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=251074&rd=14726&pm=11779
********************************************************************************
#include <string>
#include <vector>
#include <map>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <set>
#include <iostream>
#include <sstream>
#include <cstddef>
#include <algorithm>
#include <utility>
#include <iterator>
#include <numeric>
#include <list>
#include <complex>
#include <climits>
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<string> vs;
typedef long long ll;
typedef complex<double> pnt;
typedef pair<int, int> pii;
 
#define RA(x) (x).begin(), (x).end()
#define FE(i, x) for (typeof((x).begin()) i = (x).begin(); i != (x).end(); i++)
#define SZ(x) ((int) (x).size())
 
 
class Pikachu
{
public:
    vector <int> bestEncoding(vector <int> freq);
};
 
struct state
{
    int freq[4];
    int used;
 
    bool operator<(const state &s) const
    {
        if (used != s.used)
            return used < s.used;
        else
        {
            for (int i = 0; i < 4; i++)
                if (freq[i] != s.freq[i])
                    return freq[i] < s.freq[i];
        }
        return false;
    }
};
 
typedef pair<int, ll> result;
static ll choose[60][60];
static ll fact[60];
static map<state, result> cache;
 
#define MOD 1000000009
 
static result combine(const result &a, const result &b)
{
    if (a.first == b.first)
        return result(a.first, (a.second + b.second) % MOD);
    else
        return min(a, b);
}
 
static result recurse(const state &s, const vi &freq_sum)
{
    int N = SZ(freq_sum) - 1;
    if (s.freq[0] == 0 && s.freq[1] == 0 && s.freq[2] == 0 && s.freq[3] == 0)
    {
        if (s.used == SZ(freq_sum) - 1)
            return result(0, 1);
        else
            return result(INT_MAX, 0);
    }
    if (s.freq[0] + s.freq[1] + s.freq[2] + s.freq[3] > N - s.used)
        return result(INT_MAX, 0);
 
    if (s.freq[0] == 0)
    {
        state n = s;
        for (int i = 0; i < 3; i++)
            n.freq[i] = n.freq[i + 1];
        n.freq[3] = 0;
        result r = recurse(n, freq_sum);
        r.first += (freq_sum.back() - freq_sum[s.used]);
        return r;
    }
 
    if (cache.count(s))
        return cache[s];
 
    result ans(INT_MAX, 0);
    for (int u = 0; u <= min(N - s.used, s.freq[0]); u++)
    {
        int cut = freq_sum[s.used + u] - freq_sum[s.used + u - 1];
        int p = s.used + u - 1;
        while (p > s.used && freq_sum[p] - freq_sum[p - 1] == cut)
            p--;
        int q = s.used + u;
        while (q < N && freq_sum[q + 1] - freq_sum[q] == cut)
            q++;
        for (int i = 0; i <= s.freq[0] - u; i++)
        {
            int j = s.freq[0] - u - i;
            state n = s;
            n.freq[0] = 0;
            n.freq[2] += 2 * (i + j);
            n.freq[3] += j;
            n.used += u;
            result r = recurse(n, freq_sum);
            r.second = (r.second * choose[s.freq[0]][u]) % MOD;
            r.second = (r.second * fact[u]) % MOD;
            r.second = (r.second * choose[q - p][s.used + u - p]) % MOD;
            r.second = (r.second * choose[s.freq[0] - u][i]) % MOD;
            ans = combine(ans, r);
        }
    }
    return cache[s] = ans;
}
 
vector <int> Pikachu::bestEncoding(vector <int> freq)
{
    cache.clear();
    fact[0] = 1;
    for (int i = 0; i < 60; i++)
    {
        choose[i][0] = choose[i][i] = 1;
        for (int j = 1; j < i; j++)
            choose[i][j] = (choose[i - 1][j - 1] + choose[i - 1][j]) % MOD;
    }
    for (int i = 1; i < 60; i++)
    {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
 
    int N = SZ(freq);
    vi freq_sum(N + 1, 0);
    sort(RA(freq), greater<int>());
    partial_sum(RA(freq), freq_sum.begin() + 1);
    state s;
    for (int i = 0; i < 4; i++)
        s.freq[i] = 0;
    s.freq[0] = 1;
    s.used = 0;
    result ans = recurse(s, freq_sum);
    vi ans2(2);
    ans2[0] = ans.first;
    ans2[1] = ans.second;
    return ans2;
}
 
 
// Powered by FileEdit

********************************************************************************
*******************************************************************************/