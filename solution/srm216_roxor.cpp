/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=2987
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

class Roxor {
public:
    vector<int> play(vector<int> piles);
};

vector<int> Roxor::play(vector<int> piles) {
    vector<int> ret;
    return ret;
}


int test0() {
    vector<int> piles = {0, 0, 1, 0, 1, 100};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 4, 5};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> piles = {1000, 1000, 1000, 1000, 1000};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> piles = {2, 1, 1, 1, 5};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> piles = {14, 301, 391, 410, 511, 681, 58, 259, 981, 81, 5, 42, 251, 401, 120};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 5, 14};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> piles = {193, 584};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> piles = {895, 746, 858, 513, 14, 364, 165, 445};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 6};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> piles = {0, 1, 531};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> piles = {607, 663, 352, 607, 802, 301, 726, 925, 142};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> piles = {862, 779, 996, 611, 266, 840, 375, 677};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> piles = {1, 275};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> piles = {691, 726, 205, 468, 949};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> piles = {599, 734, 572, 151, 425, 517, 751, 168, 491, 699, 147, 141};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 7, 11};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> piles = {303, 70, 683, 877, 582, 177, 475, 503, 405, 568, 755, 475, 367, 35};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 12, 13};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> piles = {426, 949, 549, 471, 846, 456, 982, 739, 195};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 7, 8};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> piles = {397, 890, 994, 50, 194, 626, 197, 123, 743, 941, 336, 733};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 7};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> piles = {600, 252, 1, 806, 210, 553, 0, 454, 686, 73, 201, 290, 232};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 4, 12};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> piles = {628, 504, 695, 189, 178, 457, 97, 94, 931, 894};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 5};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> piles = {769, 201, 604, 466, 634, 828};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 5};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> piles = {565, 184, 555, 242, 604, 584, 494, 740, 620, 804};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 9};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> piles = {867, 614, 43, 976};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> piles = {305, 108, 851, 154, 79, 640};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> piles = {448, 298, 501, 323, 313, 959, 725, 943, 65, 524, 956, 875, 322};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 12};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> piles = {227, 919, 662};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> piles = {379, 793, 382};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> piles = {606, 5, 100, 863, 747, 380, 552, 955, 176, 131, 951};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> piles = {329, 639, 847, 596, 853, 0, 707, 217, 168, 340};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 9};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> piles = {660, 806, 611, 900, 630, 253};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 4};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> piles = {66, 573, 548};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> piles = {110, 134, 788, 789, 615};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> piles = {228, 229, 542, 53, 524, 94, 891};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 6};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> piles = {125, 80, 58, 914, 432};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> piles = {534, 693, 259, 0, 954, 241, 255, 945, 890, 0, 601, 576, 222, 4, 82};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 13, 14};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> piles = {64, 662, 802, 685, 689, 777, 868, 706, 551, 58, 145};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 8, 10};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> piles = {292, 367, 218, 240, 902, 902, 80, 171, 775, 210, 3, 114, 311, 38, 189};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test34() {
    vector<int> piles = {620, 939, 779, 656, 455};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 4};
    if(result == expected) {
        cout << "Test Case 34: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 34: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test35() {
    vector<int> piles = {150, 569, 942, 578, 255, 350, 795, 70, 590, 197, 644, 604, 441, 396};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 11};
    if(result == expected) {
        cout << "Test Case 35: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 35: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test36() {
    vector<int> piles = {199, 875, 987, 895, 442, 708, 285, 407, 710, 896, 397, 308, 570};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 10};
    if(result == expected) {
        cout << "Test Case 36: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 36: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test37() {
    vector<int> piles = {745, 739, 200, 680, 367, 109};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4};
    if(result == expected) {
        cout << "Test Case 37: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 37: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test38() {
    vector<int> piles = {517, 438, 90, 75, 355, 697, 394, 675, 198, 615, 543, 545, 974, 969};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 9, 13};
    if(result == expected) {
        cout << "Test Case 38: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 38: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test39() {
    vector<int> piles = {679, 372, 49, 169, 310, 212, 484, 0, 507, 758, 349, 942};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 6};
    if(result == expected) {
        cout << "Test Case 39: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 39: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test40() {
    vector<int> piles = {53, 863, 306, 26, 391, 0, 455, 936, 727, 808};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 40: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 40: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test41() {
    vector<int> piles = {595, 793, 590, 569, 672, 10, 341, 770, 869, 725, 893, 535, 780, 197};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 12, 13};
    if(result == expected) {
        cout << "Test Case 41: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 41: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test42() {
    vector<int> piles = {953, 890, 185, 264, 732, 170, 480, 806, 124, 573, 762, 727, 15, 691};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 9};
    if(result == expected) {
        cout << "Test Case 42: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 42: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test43() {
    vector<int> piles = {274, 838, 371, 232};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {2, 3, 3};
    if(result == expected) {
        cout << "Test Case 43: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 43: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test44() {
    vector<int> piles = {204, 281, 769, 46, 0, 643, 414, 90, 699, 657};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 3, 9};
    if(result == expected) {
        cout << "Test Case 44: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 44: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test45() {
    vector<int> piles = {570, 465, 426, 486, 565, 778, 850, 864, 746, 765, 908, 521, 107, 823};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 6};
    if(result == expected) {
        cout << "Test Case 45: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 45: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test46() {
    vector<int> piles = {0, 773, 89, 683, 154, 48, 18};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 3};
    if(result == expected) {
        cout << "Test Case 46: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 46: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test47() {
    vector<int> piles = {53, 637, 21, 391, 781, 826, 634, 983, 214, 782, 480, 102, 755, 456, 998};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 5};
    if(result == expected) {
        cout << "Test Case 47: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 47: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test48() {
    vector<int> piles = {621, 688, 567, 548, 246, 492, 669, 623, 798, 988, 629, 591};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4};
    if(result == expected) {
        cout << "Test Case 48: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 48: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test49() {
    vector<int> piles = {489, 889, 182, 203, 941, 41, 34, 544, 61, 127, 50, 660, 315, 410};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 13};
    if(result == expected) {
        cout << "Test Case 49: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 49: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test50() {
    vector<int> piles = {678, 497, 802, 4, 375, 827, 891};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1};
    if(result == expected) {
        cout << "Test Case 50: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 50: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test51() {
    vector<int> piles = {514, 737, 465, 112, 821, 108, 761, 416, 67, 211, 591};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 8, 10};
    if(result == expected) {
        cout << "Test Case 51: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 51: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test52() {
    vector<int> piles = {580, 731, 669};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 2};
    if(result == expected) {
        cout << "Test Case 52: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 52: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test53() {
    vector<int> piles = {378, 772, 170, 181, 195, 190};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {1, 2, 5};
    if(result == expected) {
        cout << "Test Case 53: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 53: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test54() {
    vector<int> piles = {120, 46, 761, 1, 426, 461, 749};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 5};
    if(result == expected) {
        cout << "Test Case 54: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 54: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test55() {
    vector<int> piles = {92, 893, 59, 632, 756};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 3, 4};
    if(result == expected) {
        cout << "Test Case 55: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 55: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test56() {
    vector<int> piles = {791, 552, 522, 704, 731};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1};
    if(result == expected) {
        cout << "Test Case 56: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 56: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test57() {
    vector<int> piles = {875, 305, 481, 651, 0, 756, 154, 670, 345};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 57: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 57: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test58() {
    vector<int> piles = {436, 635, 476, 79, 143, 917, 373, 46, 239, 256, 208};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 5, 10};
    if(result == expected) {
        cout << "Test Case 58: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 58: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test59() {
    vector<int> piles = {874, 844, 40, 183, 449};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 59: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 59: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test60() {
    vector<int> piles = {623, 911, 730, 969};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3};
    if(result == expected) {
        cout << "Test Case 60: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 60: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test61() {
    vector<int> piles = {146, 284, 973, 716, 645, 735, 124, 375, 915, 32, 448, 0, 418, 919};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 9};
    if(result == expected) {
        cout << "Test Case 61: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 61: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test62() {
    vector<int> piles = {754, 213, 771, 556, 851, 538, 869, 227, 371};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 7};
    if(result == expected) {
        cout << "Test Case 62: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 62: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test63() {
    vector<int> piles = {561, 119, 898, 940, 849, 445, 634};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 63: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 63: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test64() {
    vector<int> piles = {423, 0, 139, 291, 561, 607, 422, 739, 516};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 7, 8};
    if(result == expected) {
        cout << "Test Case 64: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 64: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test65() {
    vector<int> piles = {1, 333};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1};
    if(result == expected) {
        cout << "Test Case 65: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 65: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test66() {
    vector<int> piles = {767, 630, 682, 500, 265, 646, 263, 460, 351, 0, 626, 383, 288, 883};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 12};
    if(result == expected) {
        cout << "Test Case 66: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 66: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test67() {
    vector<int> piles = {382, 10, 865, 699, 602, 559, 378, 937};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 1};
    if(result == expected) {
        cout << "Test Case 67: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 67: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test68() {
    vector<int> piles = {608, 76, 305, 80, 304, 932, 216, 560, 250, 727, 231, 446, 574, 995, 0};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 12, 14};
    if(result == expected) {
        cout << "Test Case 68: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 68: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test69() {
    vector<int> piles = {256, 116};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 69: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 69: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test70() {
    vector<int> piles = {959, 79, 279, 490, 924};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 2};
    if(result == expected) {
        cout << "Test Case 70: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 70: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test71() {
    vector<int> piles = {475, 951, 834, 801, 870, 939, 943, 127, 472, 26};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 6, 9};
    if(result == expected) {
        cout << "Test Case 71: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 71: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test72() {
    vector<int> piles = {862, 14};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 72: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 72: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test73() {
    vector<int> piles = {797, 658, 781, 842};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 3};
    if(result == expected) {
        cout << "Test Case 73: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 73: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test74() {
    vector<int> piles = {23, 30, 715, 180, 182};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 4};
    if(result == expected) {
        cout << "Test Case 74: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 74: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test75() {
    vector<int> piles = {58, 358, 158, 131, 181, 249, 346, 664, 932, 105, 557, 895};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 4};
    if(result == expected) {
        cout << "Test Case 75: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 75: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test76() {
    vector<int> piles = {822, 548, 450};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 76: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 76: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test77() {
    vector<int> piles = {982, 594, 131, 600, 355};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 1, 3};
    if(result == expected) {
        cout << "Test Case 77: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 77: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test78() {
    vector<int> piles = {691, 671, 237, 235, 484};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 78: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 78: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test79() {
    vector<int> piles = {570, 348, 290, 922, 806, 686};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {};
    if(result == expected) {
        cout << "Test Case 79: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 79: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test80() {
    vector<int> piles = {1000, 999, 1000, 999, 1000, 999, 1000, 999, 1000, 999, 1000, 999, 1000, 999, 1000};
    Roxor* pObj = new Roxor();
    clock_t start = clock();
    vector<int> result = pObj->play(piles);
    clock_t end = clock();
    delete pObj;
    vector<int> expected = {0, 2, 5};
    if(result == expected) {
        cout << "Test Case 80: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 80: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=144400&rd=5862&pm=2987
********************************************************************************
#include <algorithm>
#include <cstdio>
#include <cstdlib>
#include <cctype>
#include <cmath>
#include <iostream>
#include <map>
#include <set>
#include <sstream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#define VAR(a,b) typeof(b) a=(b)
#define REP(i,n) for(int _n=n, i=0;i<_n;++i)
#define FOR(i,a,b) for(int i=(a),_b=(b);i<=_b;++i)
#define FORD(i,a,b) for(int i=(a),_b=(b);i>=_b;--i)
#define FOREACH(it,c) for(VAR(it,(c).begin());it!=(c).end();++it)
#define ALL(f,w) ({ bool _ok=true; f { _ok=_ok && (w);if(!_ok) break;} _ok; })
#define EXISTS(f,w) (!ALL(f,!(w)))
#define MIN(f,w) ({ int _mm=(1<<31)-1; f _mm<?=(w); _mm; })
#define MAX(f,w) ({ int _mm=(1<<31); f _mm>?=(w); _mm; })
typedef long long LL;
const int INF = 1000000000; const LL INFLL = LL(INF) * LL(INF);
typedef vector<int> VI; typedef vector<string> VS; typedef vector<VI> VVI;
template<class T> inline int size(const T&c) { return c.size(); }
template<class T> inline vector<T> makeV(const T&x) { return vector<T>(1,x); }
template<class T> inline vector<T> makeV(const T&x,const T&y) {
  vector<T> v(2); v[0] = x; v[1] = y; return v;
}
template<class T> inline vector<T> makeV(const T&x,const T&y,const T&z) {
  vector<T> v(3); v[0] = x; v[1] = y; v[2]=z; return v;
}
template<class A,class B> inline bool contains(const A&a, const B&b) {
  return find(a.begin(),a.end(),b)!=a.end();
}
template<class T> string i2s(T x) { ostringstream o; o<<x; return o.str(); }
int s2i(string s) { istringstream i(s); int x; i>>x; return x; }
LL s2ll(string s) { istringstream i(s); LL x; i>>x; return x; }
 
vector<string> split(string s,string del=" ") {
  s+=del[0];
  string w;
  vector<string> res;
  FOREACH(it,s) {
    if(!contains(del,*it)) w+=*it;
    else if(w!="") { res.push_back(w); w=""; }
  }
  return res;
}
 
VI s2vi(string s,string del=" ") {
  VS v = split(s,del);
  VI res;
  FOREACH(it,v) res.push_back(s2i(*it));
  return res;
}
 
///////////////////////////////////////////////////////////////////
 
int n;
int cache[1<<15];
 
int calc(int p) {
  int &res = cache[p];
  if(res!=-1) return res;
  REP(i,n-1) if(p&(1<<i)) FOR(j,i+1,n-1) FOR(k,j,n-1) {
    int p2 = p ^ (1<<i) ^ (1<<j) ^ (1<<k);
    if(!calc(p2)) return (res=1);
  }
  return (res = 0);
}
 
struct Roxor {
  // MAIN
  vector <int> play(vector <int> piles) {
    n = size(piles);
    REP(i,1<<n) cache[i]=-1;
    REP(i,n-1) if(piles[i]>0) FOR(j,i+1,n-1) FOR(k,j,n-1) {
      VI p2 = piles;
      p2[i]--; p2[j]++; p2[k]++;
      int start = 0;
      REP(a,n) start |= (p2[a]&1)<<a;
      int res = calc(start);
      if(!res) return makeV(i,j,k);
    }
    return VI();
  }
 
 
  
///////////////////////////////////////////////////////////////////
 
 
 
 
};
 
 
 
// Powered by FileEdit
// Powered by TZTester 1.01 [25-Feb-2003]
// Powered by CodeProcessor

********************************************************************************
*******************************************************************************/