/*******************************************************************************
*    Automatically generated code for TopCode SRM Problem
*    Problem URL: http://community.topcoder.com/stat?c=problem_statement&pm=4701
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

class ChutesAndLadders {
public:
    vector<double> winningChance(vector<int> startLadder, vector<int> endLadder, vector<int> players);
};

vector<double> ChutesAndLadders::winningChance(vector<int> startLadder, vector<int> endLadder, vector<int> players) {
    vector<double> ret;
    return ret;
}


int test0() {
    vector<int> startLadder = {};
    vector<int> endLadder = {};
    vector<int> players = {0, 0};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.6063557826968836, 0.3936442173031164};
    if(result == expected) {
        cout << "Test Case 0: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 0: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test1() {
    vector<int> startLadder = {7, 23, 42, 58, 87};
    vector<int> endLadder = {35, 91, 11, 31, 22};
    vector<int> players = {0, 0, 0, 0};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.2850398049975441, 0.2591808222220256, 0.23726366951493458, 0.21851570326549555};
    if(result == expected) {
        cout << "Test Case 1: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 1: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test2() {
    vector<int> startLadder = {};
    vector<int> endLadder = {};
    vector<int> players = {0, 30};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.013280440302841312, 0.9867195596971587};
    if(result == expected) {
        cout << "Test Case 2: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 2: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test3() {
    vector<int> startLadder = {79, 70, 50, 27, 3, 8, 35, 20, 97, 94, 92, 86, 53, 63, 61, 46, 48, 15};
    vector<int> endLadder = {98, 90, 66, 83, 13, 30, 43, 41, 77, 74, 72, 23, 52, 59, 18, 25, 10, 5};
    vector<int> players = {21, 32, 56, 41};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.17890364754713348, 0.13868643400691752, 0.5037066355391879, 0.17870328290676118};
    if(result == expected) {
        cout << "Test Case 3: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 3: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test4() {
    vector<int> startLadder = {98, 95, 92, 89, 86, 83, 80, 77, 74, 71, 68, 65, 62, 59, 56, 53, 50, 47, 44, 41};
    vector<int> endLadder = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> players = {0, 0, 0, 0};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.25180999320247693, 0.2505990387847734, 0.2493945326404163, 0.2481964353723289};
    if(result == expected) {
        cout << "Test Case 4: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 4: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test5() {
    vector<int> startLadder = {98, 96, 94, 92, 90, 88, 86, 84, 82, 80, 78, 76, 74, 72, 70, 68, 66, 64, 62, 60};
    vector<int> endLadder = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> players = {0, 0, 0, 0};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.2510282166301018, 0.2503412806809687, 0.24965653415814687, 0.24897396853077686};
    if(result == expected) {
        cout << "Test Case 5: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 5: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test6() {
    vector<int> startLadder = {2};
    vector<int> endLadder = {30};
    vector<int> players = {29, 76, 18};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.2929764191231204E-7, 0.9999997706994422, 2.915983929826803E-12};
    if(result == expected) {
        cout << "Test Case 6: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 6: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test7() {
    vector<int> startLadder = {87, 91, 60, 78, 45, 2, 12, 18, 83, 14, 22, 62, 47, 6, 34, 28, 53};
    vector<int> endLadder = {80, 32, 32, 42, 75, 4, 73, 75, 24, 85, 55, 61, 19, 63, 54, 96, 41};
    vector<int> players = {36, 36, 71, 79};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0576244016411688, 0.05352249210184755, 0.25026180561277184, 0.6385913006442115};
    if(result == expected) {
        cout << "Test Case 7: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 7: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test8() {
    vector<int> startLadder = {53, 43, 65, 87, 45, 23, 83, 29, 81, 2, 78};
    vector<int> endLadder = {28, 57, 82, 33, 93, 97, 66, 90, 25, 20, 85};
    vector<int> players = {3, 1};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.5472336616914308, 0.45276633830856844};
    if(result == expected) {
        cout << "Test Case 8: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 8: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test9() {
    vector<int> startLadder = {69, 48, 24, 4, 14, 32, 44, 50, 74, 67, 11, 62, 28, 57, 16, 41, 60, 94};
    vector<int> endLadder = {66, 93, 76, 51, 6, 75, 22, 34, 3, 72, 51, 90, 13, 19, 10, 55, 30, 17};
    vector<int> players = {56, 6};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.7967632294284989, 0.2032367705715013};
    if(result == expected) {
        cout << "Test Case 9: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 9: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test10() {
    vector<int> startLadder = {43, 2, 53, 87, 32, 76, 49, 59, 6};
    vector<int> endLadder = {3, 5, 39, 58, 94, 91, 98, 29, 57};
    vector<int> players = {12, 52, 61, 12};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.16372242515119587, 0.22070981823394217, 0.503388996876046, 0.11217875973881594};
    if(result == expected) {
        cout << "Test Case 10: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 10: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test11() {
    vector<int> startLadder = {51, 25, 56, 75, 65};
    vector<int> endLadder = {3, 43, 42, 78, 83};
    vector<int> players = {92, 88};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.9565046057044081, 0.043495394295592016};
    if(result == expected) {
        cout << "Test Case 11: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 11: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test12() {
    vector<int> startLadder = {59, 75, 87, 14, 21, 37, 94, 45, 92, 55, 67, 72, 98, 39, 69, 79, 81, 17};
    vector<int> endLadder = {56, 4, 85, 12, 82, 66, 88, 11, 76, 3, 3, 8, 83, 53, 85, 7, 42, 11};
    vector<int> players = {77, 71, 44, 33};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.7264161428659098, 0.21793462594017807, 0.03208274766198021, 0.023566483531931935};
    if(result == expected) {
        cout << "Test Case 12: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 12: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test13() {
    vector<int> startLadder = {17, 80, 27, 94, 33, 61, 1, 56, 96};
    vector<int> endLadder = {95, 87, 67, 6, 31, 43, 29, 35, 16};
    vector<int> players = {97, 23};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, 0.0};
    if(result == expected) {
        cout << "Test Case 13: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 13: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test14() {
    vector<int> startLadder = {79};
    vector<int> endLadder = {29};
    vector<int> players = {54, 55};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.5829704094655173, 0.4170295905344829};
    if(result == expected) {
        cout << "Test Case 14: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 14: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test15() {
    vector<int> startLadder = {50, 25, 78, 32, 94, 60, 97, 85};
    vector<int> endLadder = {13, 86, 45, 87, 3, 49, 82, 26};
    vector<int> players = {61, 79, 5, 6};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.20052819172333503, 0.6978017947166055, 0.05065439461290016, 0.05101561894715914};
    if(result == expected) {
        cout << "Test Case 15: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 15: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test16() {
    vector<int> startLadder = {54, 72, 8, 78, 4, 14, 52, 68};
    vector<int> endLadder = {3, 48, 13, 81, 80, 82, 24, 31};
    vector<int> players = {18, 56, 85, 29};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {2.3344691490038485E-12, 1.0127964458599988E-4, 0.9998987203500401, 3.039404744533638E-12};
    if(result == expected) {
        cout << "Test Case 16: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 16: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test17() {
    vector<int> startLadder = {37, 15, 40, 12, 5, 69, 33, 84, 49, 62, 1, 71, 47, 21, 89, 26, 87, 35, 56, 24};
    vector<int> endLadder = {18, 70, 58, 51, 28, 52, 10, 75, 2, 20, 85, 65, 45, 42, 13, 10, 9, 86, 94, 27};
    vector<int> players = {53, 57};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.5112904300173874, 0.4887095699826122};
    if(result == expected) {
        cout << "Test Case 17: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 17: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test18() {
    vector<int> startLadder = {55, 17, 42, 89, 37, 40, 64, 49, 14, 79, 3, 58, 66, 23, 28, 21, 94, 31};
    vector<int> endLadder = {85, 2, 22, 10, 83, 90, 45, 48, 61, 93, 50, 18, 25, 22, 46, 57, 97, 16};
    vector<int> players = {44, 30, 97, 88};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 1.0, 0.0};
    if(result == expected) {
        cout << "Test Case 18: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 18: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test19() {
    vector<int> startLadder = {51, 38, 72, 2, 64};
    vector<int> endLadder = {96, 27, 73, 75, 7};
    vector<int> players = {91, 19};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {1.0, -4.6349642873755315E-17};
    if(result == expected) {
        cout << "Test Case 19: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 19: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test20() {
    vector<int> startLadder = {48, 14, 87, 21, 51, 34, 1};
    vector<int> endLadder = {82, 10, 49, 45, 7, 90, 73};
    vector<int> players = {85, 60, 24, 17};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.9623838585078265, 0.016674005011982993, 0.016848940365804654, 0.004093196114385951};
    if(result == expected) {
        cout << "Test Case 20: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 20: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test21() {
    vector<int> startLadder = {36, 74, 21, 90, 4, 65, 10, 31, 19, 76, 38, 70};
    vector<int> endLadder = {24, 55, 53, 71, 1, 7, 81, 72, 34, 54, 9, 17};
    vector<int> players = {25, 17, 51, 14};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.24710901767501656, 0.17497190896207931, 0.4349205049093192, 0.14299856845358525};
    if(result == expected) {
        cout << "Test Case 21: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 21: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test22() {
    vector<int> startLadder = {16, 3, 56, 71, 40, 91, 46, 66, 96, 69, 32, 35, 81, 61, 5};
    vector<int> endLadder = {17, 50, 58, 50, 94, 92, 22, 15, 70, 86, 95, 38, 74, 72, 72};
    vector<int> players = {37, 19, 64};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.192991608697131, 0.23230739321277966, 0.5747009980900893};
    if(result == expected) {
        cout << "Test Case 22: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 22: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test23() {
    vector<int> startLadder = {28, 18, 20, 68, 49, 45, 88, 34, 66, 82, 30};
    vector<int> endLadder = {69, 2, 73, 97, 70, 5, 72, 6, 58, 41, 84};
    vector<int> players = {22, 76, 13};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.17537759483955262, 0.7577197172769383, 0.06690268788350877};
    if(result == expected) {
        cout << "Test Case 23: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 23: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test24() {
    vector<int> startLadder = {13, 88, 68, 44};
    vector<int> endLadder = {40, 73, 27, 52};
    vector<int> players = {94, 97};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.8333333333333335, 0.16666666666666652};
    if(result == expected) {
        cout << "Test Case 24: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 24: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test25() {
    vector<int> startLadder = {65, 27, 31};
    vector<int> endLadder = {1, 14, 5};
    vector<int> players = {57, 63, 21};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.3289894828158131, 0.6676876188451165, 0.0033228983390704877};
    if(result == expected) {
        cout << "Test Case 25: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 25: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test26() {
    vector<int> startLadder = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39};
    vector<int> endLadder = {98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98};
    vector<int> players = {0, 10, 20, 30};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.540126539381036, 0.26977716034881677, 0.13386308761367074, 0.05623321265647621};
    if(result == expected) {
        cout << "Test Case 26: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 26: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test27() {
    vector<int> startLadder = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39};
    vector<int> endLadder = {98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98};
    vector<int> players = {0, 10, 20, 40};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.5727970843483529, 0.2858299735130467, 0.1409122622410943, 4.606798975060748E-4};
    if(result == expected) {
        cout << "Test Case 27: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 27: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test28() {
    vector<int> startLadder = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39};
    vector<int> endLadder = {98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98};
    vector<int> players = {0, 0, 0, 0};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.5333314489298246, 0.26666688609640044, 0.1333341477858562, 0.06666751718791865};
    if(result == expected) {
        cout << "Test Case 28: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 28: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test29() {
    vector<int> startLadder = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31, 33, 35, 37, 39};
    vector<int> endLadder = {98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98};
    vector<int> players = {40, 0, 0, 0};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {3.206444546791092E-5, 0.5713916505043418, 0.28571114144468573, 0.1428651436055047};
    if(result == expected) {
        cout << "Test Case 29: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 29: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test30() {
    vector<int> startLadder = {79, 70, 50, 27, 3, 8, 35, 20, 97, 94, 92, 86, 53, 63, 61, 46, 48, 15};
    vector<int> endLadder = {98, 90, 66, 83, 13, 30, 43, 41, 77, 74, 72, 23, 52, 59, 18, 25, 10, 5};
    vector<int> players = {21, 32, 56, 41};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.17890364754713348, 0.13868643400691752, 0.5037066355391879, 0.17870328290676118};
    if(result == expected) {
        cout << "Test Case 30: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 30: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test31() {
    vector<int> startLadder = {98, 96, 94, 92, 90, 88, 86, 84, 82, 80, 78, 76, 74, 72, 70, 68, 66, 64, 62, 60};
    vector<int> endLadder = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> players = {0, 0, 0, 0};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.2510282166301018, 0.2503412806809687, 0.24965653415814687, 0.24897396853077686};
    if(result == expected) {
        cout << "Test Case 31: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 31: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test32() {
    vector<int> startLadder = {2};
    vector<int> endLadder = {1};
    vector<int> players = {0, 3};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.5148980830629312, 0.48510191693706867};
    if(result == expected) {
        cout << "Test Case 32: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 32: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 1;
    }
}

int test33() {
    vector<int> startLadder = {98, 96, 94, 92, 90, 88, 86, 84, 82, 80, 78, 76, 74, 72, 70, 68, 66, 64, 62, 60};
    vector<int> endLadder = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    vector<int> players = {0, 25, 50, 97};
    ChutesAndLadders* pObj = new ChutesAndLadders();
    clock_t start = clock();
    vector<double> result = pObj->winningChance(startLadder, endLadder, players);
    clock_t end = clock();
    delete pObj;
    vector<double> expected = {0.0, 0.0, 0.0, 1.0};
    if(result == expected) {
        cout << "Test Case 33: Passed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
        return 0;
    } else {
        cout << "Test Case 33: Failed! Time: " << static_cast<double>(end-start)/CLOCKS_PER_SEC << " seconds" << endl;
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
    cout << "Total Test Case: " << passed + failed << "; Passed: " << passed << "; Failed: " << failed << endl;
    return failed == 0 ? 0 : 1;
}

/*******************************************************************************
*    Top Submission URL: 
*    http://community.topcoder.com/stat?c=problem_solution&cr=8394868&rd=7993&pm=4701
********************************************************************************
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>
#include <map>
#include <set>
#include <queue>
 
using namespace std;
 
typedef vector<int> vi;
typedef vector<double> vd;
 
#define For(i,a,b) for(int i=(a); i<=(b); i++)
#define Rep(i,n) for(int i=0; i<(n); i++)
#define Size(x) (int(x.size()))
#define Repd(i,n) for(int i=(n)-1; i>=0; i--)
#define Fil(a) memset(&a,0,sizeof(a))
#define Cpy(a,b) memcpy(&a,&b,sizeof(a))
 
const int maxturns=50000;
 
int port[100];
double prob[4][maxturns+1];
double pp[13];
 
void calc(int p,double res[])
{
  double prev[100],next[100];
  Fil(next);
  next[p]=1.0;
  For(turn,1,maxturns)
  {
    Cpy(prev,next);
    Fil(next);
    Rep(i,100)
      For(j,2,12)
      {
        int k=i+j;
        k<?=99;
        k=port[k];
        next[k]+=pp[j]*prev[i];
      }
    res[turn]=next[99];
    next[99]=0;
  }
}
 
struct ChutesAndLadders
{
  vd winningChance(vi start,vi end,vi posit)
  {
    Fil(pp);
    For(i,1,6) For(j,1,6) pp[i+j]+=1.0;
    For(i,2,12) pp[i]/=36;
    Rep(i,100) port[i]=i;
    Rep(i,Size(start)) port[start[i]]=end[i];
    Rep(i,Size(posit)) calc(posit[i],prob[i]);
    vd res(Size(posit),0.0);
    double sum[4];
    Fil(sum);
    For(i,1,maxturns)
      Rep(j,Size(posit))
      {
        double add=1.0;
        Rep(k,Size(posit))
          if(k==j) add*=prob[j][i];
          else add*=(1-sum[k]);
        res[j]+=add;
        sum[j]+=prob[j][i];
      }
    return res;
  }
};

********************************************************************************
*******************************************************************************/